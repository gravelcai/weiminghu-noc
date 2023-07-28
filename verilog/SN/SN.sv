module SN#(
    parameter   SN_WRTRACKER_NUM = 16,
    parameter   SN_RDTRACKER_NUM = 16
)(
    input           clk     ,
    input           rst     ,

    //from NoC
    input   [10:0]  AWID_NOC    ,
    input   [7:0]   AWLEN_NOC   ,
    input           AWVALID_NOC ,
    output          AWREADY_NOC ,

    input   [1:0]   SrcID   ,

    input   [10:0]  WID_NOC     ,
    input   [63:0]  WDATA_NOC   ,
    input   [7:0]   WSTRB_NOC   ,
    input           WVALID_NOC  ,
    output          WREADY_NOC  ,

    //to Slave
    output   [10:0]  AWID_S    ,
    output   [7:0]   AWLEN_S   ,
    output           AWVALID_S ,
    input            AWREADY_S ,

    output   [10:0]  WID_S     ,
    output   [63:0]  WDATA_S   ,
    output   [7:0]   WSTRB_S   ,
    output           WVALID_S  ,
    input            WREADY_S  ,

    //from slave
    input           BVALID  ,
    input   [10:0]  BID     ,
    input           RVALID  ,
    input   [10:0]  RID     ,

    //to NoC
    output  [1:0]   TgtID   
);

localparam  LOG2_SN_WRTRACKER_NUM = $clog2(SN_WRTRACKER_NUM)    ;

reg     [SN_WRTRACKER_NUM-1:0][10:0]  wrtracker_awid_q          ;
wire    [SN_WRTRACKER_NUM-1:0]        wrtracker_valid           ;
reg     [SN_WRTRACKER_NUM-1:0]        wrtracker_valid_q         ;
wire    [SN_WRTRACKER_NUM-1:0]        wrtracker_ocp             ;
reg     [SN_WRTRACKER_NUM-1:0]        wrtracker_ocp_q           ;
reg     [SN_WRTRACKER_NUM-1:0][1:0]   wrtracker_srcid_q         ;
reg     [SN_WRTRACKER_NUM-1:0]        free_wrtracker_entries    ;
wire    [SN_WRTRACKER_NUM-1:0]        wrtracker_entry_dec       ;
wire    [LOG2_SN_WRTRACKER_NUM-1:0]   wrtracker_entry_inc       ;
wire                                  wrtracker_entry_found     ;
wire    [SN_WRTRACKER_NUM-1:0]        wrtracker_wrenvec         ;
wire                                  aw_active                 ;
wire                                  w_active                  ;
reg     [SN_WRTRACKER_NUM-1:0][7:0]   rcvd_w_flit               ;       
wire    [SN_WRTRACKER_NUM-1:0]        wrtracker_wid_exist       ;  
reg     [SN_WRTRACKER_NUM-1:0]        wrtracker_data_ready_q    ;
wire    [SN_WRTRACKER_NUM-1:0]        w_data_ready              ;     
reg     [SN_WRTRACKER_NUM-1:0][7:0]   aw_length_q               ;
wire    [SN_WRTRACKER_NUM-1:0]        wdb_dumped                ;
wire    [SN_WRTRACKER_NUM-1:0][10:0]  wdb_wid                   ;
wire    [SN_RDTRACKER_NUM-1]          wdb_ready                 ;

assign  aw_active   =   AWVALID_NOC     &   AWREADY_S   ;
assign  w_active    =   WVALID_NOC      &   WREADY_S    ;



always@*
begin
    free_wrtracker_entries[SN_WRTRACKER_NUM-1:0]    =   ~wrtracker_valid_q[SN_WRTRACKER_NUM-1:0] ;
end


rr_arbiter u_find_entry #(
    .DATA_WID_NOCTH(SN_WRTRACKER_NUM)
)(
    .data_in(free_wrtracker_entries[SN_WRTRACKER_NUM-1:0])     ,
    .entry_dec(wrtracker_entry_dec)   ,
    .entry_inc(wrtracker_entry_inc)   ,
    .entry_found(wrtracker_entry_found)
);

//如果aw camhit，则进入ocp的tracker；如果aw 没有hit，则进入一个新的free tracker
assign  wrtracker_wrenvec[SN_WRTRACKER_NUM-1:0] =   {SN_WRTRACKER_NUM{aw_active}}&
                                                    (
                                                        ({SN_WRTRACKER_NUM{wrtracker_awid_camhit}}   &   wrtracker_awid_cam_vec[SN_WRTRACKER_NUM-1:0]    )  |
                                                        ({SN_WRTRACKER_NUM{!wrtracker_awid_camhit}}  &   wrtracker_entry_dec[SN_WRTRACKER_NUM-1:0]       )  
                                                    );


//When awid cam hit, update valid_q from 0 to 1
genvar i;
generate
    for(i=0;i<SN_WRTRACKER_NUM;i=i+1)
    begin
        assign  wrtracker_valid[i]   =  wrtracker_wrenvec[i]  |   ~wrtracker_dealloc_vec[i];
        assign  update_valid_vec[i] =   wrtracker_wrenvec[i]  |   wrtracker_dealloc_vec[i];
        
    always@(posedge clk)
    if(rst) begin
        wrtracker_valid_q[i] <=  {1'b0}  ;
    end
    else if(update_valid_vec[i]) begin
        wrtracker_valid_q[i] <=  wrtracker_valid[i]      ;
    end
    end
endgenerate

//有Entry的情况下，w_active的时候，且没有wid cam hit 的情况下更新ocp位；当AW进来的时候清除ocp位
generate
    for(i=0;i<SN_WRTRACKER_NUM;i=i+1)
    begin
        assign  wrtracker_ocp[i]   =    ((wrtracker_entry_dec[i] & w_active)   &   (!wrtracker_wid_camhit)) |   ~wrtracker_wrenvec[i];
        assign  update_ocp_vec[i] =     ((wrtracker_entry_dec[i] & w_active)   &   (!wrtracker_wid_camhit)) |   wrtracker_wrenvec[i];
        
    always@(posedge clk)
    if(rst) begin
        wrtracker_ocp_q[i] <=  {1'b0}  ;
    end
    else if(update_ocp_vec[i]) begin
        wrtracker_ocp_q[i] <=  wrtracker_ocp[i]      ;
    end
    else begin
        wrtracker_ocp_q[i] <=  wrtracker_ocp_q[i]    ;
    end
    end
endgenerate

generate
    for(i=0;i<SN_WRTRACKER_NUM;i=i+1)
    begin    
    always@(posedge clk)
    if(rst) begin
        aw_length_q[i][7:0] <=  {8'b0}  ;
    end
    else if(wrtracker_wrenvec[i]) begin
        aw_length_q[i][7:0] <=  AWLEN_NOC   ;
    end
    else if(wrtracker_dealloc_vec[i]) begin
        aw_length_q[i][7:0] <=  {8'b0}  ;
    end
    else begin
        aw_length_q[i][7:0] <=  aw_length_q[i][7:0]    ;
    end
    end
endgenerate

generate
    for(i=0;i<SN_WRTRACKER_NUM;i=i+1)
    begin
        assign  wrtracker_wid[i]   =    (!wrtracker_wid_exist[i])   |   (~wrtracker_dealloc_vec[i]);
        assign  update_wid_vec[i] =     w_active    &   ((!wrtracker_wid_exist[i]) |   wrtracker_dealloc_vec[i]);
        
    always@(posedge clk)
    if(rst) begin
        wrtracker_wid_q[i] <=  {1'b0}  ;
    end
    else if(update_wid_vec[i]) begin
        wrtracker_wid_q[i] <=  wrtracker_wid[i]      ;
    end
    else begin
        wrtracker_wid_q[i] <=  wrtracker_wid_q[i]    ;
    end
    end
endgenerate

generate
    for(i=0;i<SN_WRTRACKER_NUM;i=i+1)
    begin
        assign  wrtracker_awid[i]  =     wrtracker_wrenvec[i]   |   (~wrtracker_dealloc_vec[i]);
        assign  update_awid_vec[i] =     wrtracker_wrenvec[i]   |   wrtracker_dealloc_vec[i];
        
    always@(posedge clk)
    if(rst) begin
        wrtracker_awid_q[i] <=  {1'b0}  ;
    end
    else if(update_awid_vec[i]) begin
        wrtracker_awid_q[i] <=  wrtracker_awid[i]      ;
    end
    else begin
        wrtracker_awid_q[i] <=  wrtracker_awid_q[i]    ;
    end
    end
endgenerate

generate
    for(i=0;i<SN_WRTRACKER_NUM;i=i+1)
    begin
        always@(posedge clk)
        if(rst)
            rcvd_w_flit[i][7:0]  <=  0;
        else if(w_active & wrtracker_wid_exist[i])
            rcvd_w_flit[i][7:0]  <=  rcvd_w_flit[i][7:0] + 1 ;
        else if(w_active & !wrtracker_wid_exist[i])
            rcvd_w_flit[i][7:0]  <=  1               ;
        else
            rcvd_w_flit[i][7:0]  <=  rcvd_w_flit[i][7:0]  ;
    end
endgenerate

//告诉fifo写数据已经和aw length对齐，可以发了
generate
    for(i=0;i<SN_WRTRACKER_NUM;i=i+1)
    begin
        always@(posedge clk)
        if(rst)
            wrtracker_data_ready_q[i]  <=  0 ;
        else if(w_data_ready[i])
            wrtracker_data_ready_q[i]  <=  1 ;
        else if(wrtracker_dealloc_vec[i])
            wrtracker_data_ready_q[i]  <=  0 ;
        else
            wrtracker_data_ready_q[i]  <=  wrtracker_data_ready_q[i]  ;
    end
endgenerate

generate
    for(i=0;i<SN_WRTRACKER_NUM;i=i+1)
    begin
        assign  wrtracker_wid_cam_vec[i]    =   wrtracker_valid_q[i]    &
                                                (WID_NOC[10:0] == wrtracker_awid_q[i][10:0])    ;
        assign  wrtracker_awid_cam_vec[i]   =   wrtracker_wrenvec[i]    &
                                                wrtracker_ocp_q[i]      &
                                                (AWID_NOC[10:0] == wrtracker_wid_q[i][10:0])    ;
        assign  wrtracker_wid_exist[i]      =   (WID_NOC[10:0] == wrtracker_wid_q[i][10:0])     ;//wid和tracker中存的wid做cam
        assign  wrtracker_bid_cam_vec[i]    =   wrtracker_valid_q[i]    &
                                                (BID[10:0] == wrtracker_awid_q[i][10:0])    ;
    end
endgenerate


assign  wrtracker_wid_camhit    =   |wrtracker_wid_cam_vec[SN_WRTRACKER_NUM-1:0]    ;
assign  wrtracker_awid_camhit   =   |wrtracker_awid_cam_vec[SN_WRTRACKER_NUM-1:0]   ;
assign  no_camhit               =   (~wrtracker_awid_camhit)    &   (~wrtracker_wid_camhit) ;  
assign  aw_w_overlap            =       (aw_active   &   w_active)  
                                    &   no_camhit   
                                    &   (AWID_NOC[10:0]   ==  WID_NOC[10:0])                ;
assign  w_data_ready[SN_WRTRACKER_NUM-1:0]  =   (rcvd_w_flit[SN_WRTRACKER_NUM-1:0][7:0]  ==  (aw_length_q[7:0] + 1));
assign  wrtracker_dealloc_vec[SN_WRTRACKER_NUM-1:0] =   wrtracker_bid_cam_vec[SN_WRTRACKER_NUM-1:0] ;



generate
    for(i=0;i<SN_WRTRACKER_NUM;i=i+1)
    fifo u_wdb #(
        .DEPTH(16),
        .WID_NOCTH(64+8)
    )(
    //上游
        .clk(clk)     ,
        .rst(rst)     ,
        .fifo_in({WDATA_NOC,WSTRB_NOC}) ,
        .valid_in(wrtracker_wid_exist[i]&w_active),
        .ready_out(wdb_ready[i]),//表示fifo没满，可以放入数据
        .wid(WID_NOC)     ,//wid会对fifo进行标记
        .flush(w_data_ready[i])   ,//当tracker里面aw的length和收到w的数量对等的时候，fifo进入flush状态
        .flush_done(wdb_dumped[i]),
        .tag(wdb_wid[i])     ,//就是该fifo存的wid
    //下游
        .ready_in(WREADY_NOC),
        .valid_out(WVALID_NOC),
        .fifo_out({WDATA_S,WSTRB_S})
);