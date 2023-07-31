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
	input	[10:0]	ARID_NOC	,
	input			ARVALID_NOC	,

    input   [1:0]   SrcID_AW   ,
    input   [1:0]   SrcID_AR   ,

    input   [10:0]  WID_NOC     ,
    input   [63:0]  WDATA_NOC   ,
    input   [7:0]   WSTRB_NOC   ,
    input           WLAST_NOC   ,
    input           WVALID_NOC  ,
    output          WREADY_NOC  ,

    //to Slave
    input            AWREADY_S ,
    output           AWVALID_S ,
    output  [10:0]   AWID_S    ,
    output  [7:0]    AWLEN_S   ,

    output   [10:0]  WID_S     ,
    output   [63:0]  WDATA_S   ,
    output   [7:0]   WSTRB_S   ,
    output           WLAST_S   ,
    output           WVALID_S  ,
    input            WREADY_S  ,

    //from slave
    input           BVALID  ,
    input   [10:0]  BID     ,
	input			ARREADY ,
    input           RVALID  ,
	input			RLAST	,
    input   [10:0]  RID     ,

    //to NoC
    output  [1:0]   TgtID_B	,
	output	[1:0]	TgtID_R   
);

localparam  LOG2_SN_WRTRACKER_NUM = $clog2(SN_WRTRACKER_NUM)    ;
localparam  LOG2_SN_RDTRACKER_NUM = $clog2(SN_RDTRACKER_NUM)    ;

reg     [SN_WRTRACKER_NUM-1:0][10:0]  wrtracker_awid_q          ;
wire    [SN_WRTRACKER_NUM-1:0]        wrtracker_valid           ;
reg     [SN_WRTRACKER_NUM-1:0]        wrtracker_valid_q         ;
wire    [SN_WRTRACKER_NUM-1:0]        wrtracker_ocp             ;
reg     [SN_WRTRACKER_NUM-1:0]        wrtracker_ocp_q           ;
reg     [SN_WRTRACKER_NUM-1:0][1:0]   wrtracker_srcid_q         ;
reg     [SN_WRTRACKER_NUM-1:0]        free_wrtracker_entries    ;
wire    [SN_WRTRACKER_NUM-1:0]        wrtracker_entry_dec       ;
wire    [LOG2_SN_WRTRACKER_NUM-1:0]   wrtracker_entry_enc       ;
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
wire    [SN_WRTRACKER_NUM-1:0][63:0]  wdb_wdata                 ;
wire    [SN_WRTRACKER_NUM-1:0][7:0]   wdb_wstrb                 ;
wire    [SN_WRTRACKER_NUM-1:0]		  wdb_wlast                 ;
wire    [SN_WRTRACKER_NUM-1:0]        wdb_ready                 ;
wire    [SN_WRTRACKER_NUM-1:0]        wdb_stall                 ;
wire                                  wrtracker_full            ;
wire    [SN_WRTRACKER_NUM-1:0]        selected_a_wdb            ;
wire                                  wdb_found                 ;
reg     [10:0]                        wdb_wid_selected          ;
reg     [63:0]                        wdb_wdata_selected        ;
reg     [7:0]                         wdb_wstrb_selected        ;
reg                                   wdb_wlast_selected        ;
wire    [SN_WRTRACKER_NUM-1:0]        wdb_valid             	;
wire	[SN_WRTRACKER_NUM-1:0]		  wrtracker_awid_cam_vec	;
wire								  wrtracker_awid_camhit		;
wire								  wrtracker_wid_camhit		;
wire								  no_camhit					;
wire	[SN_WRTRACKER_NUM-1:0]		  wrtracker_dealloc_vec		;
wire	[SN_WRTRACKER_NUM-1:0]		  update_valid_vec			;
wire	[SN_RDTRACKER_NUM-1:0]		  update_ar_valid_vec			;
wire	[SN_WRTRACKER_NUM-1:0]		  update_ocp_vec			;
wire	[SN_WRTRACKER_NUM-1:0][10:0]  wrtracker_wid				;
wire	[SN_WRTRACKER_NUM-1:0][10:0]  wrtracker_awid			;
wire	[SN_WRTRACKER_NUM-1:0]		  update_wid_vec			;
wire	[SN_WRTRACKER_NUM-1:0]		  update_awid_vec			;
wire	[SN_WRTRACKER_NUM-1:0]		  wrtracker_wid_cam_vec		;
wire	[SN_WRTRACKER_NUM-1:0]		  wrtracker_bid_cam_vec		;
wire								  aw_w_overlap				;
reg		[SN_WRTRACKER_NUM-1:0][10:0]  wrtracker_wid_q			;
wire	[SN_WRTRACKER_NUM-1:0]		  update_srcid_vec			;
wire	[SN_WRTRACKER_NUM-1:0]		  wrtracker_entry_dec_for_w ;
wire								  entry_for_wcam_disable	;
wire							 	  wid_exist					;
wire	[SN_WRTRACKER_NUM-1:0]		  enter_wdb					;
reg		[1:0]						  select_tgtid_b			;
reg		[1:0]						  select_tgtid_r			;
wire	[SN_RDTRACKER_NUM-1:0][10:0]	rdtracker_arid	;
wire	[SN_RDTRACKER_NUM-1:0]			update_arid_vec	;
wire	[SN_RDTRACKER_NUM-1:0]			rdtracker_wrenvec;
reg		[SN_RDTRACKER_NUM-1:0][10:0]	rdtracker_arid_q;
reg		[SN_RDTRACKER_NUM-1:0]			rdtracker_valid_q;
wire									ar_active;
wire									rdtracker_rid_camhit;
wire	[SN_RDTRACKER_NUM-1:0] 			rdtracker_dealloc_vec;
wire	[SN_RDTRACKER_NUM-1:0]			rdtracker_rid_cam_vec;
wire	[SN_RDTRACKER_NUM-1:0]			rdtracker_valid;
reg 	[SN_RDTRACKER_NUM-1:0][1:0]		rdtracker_srcid_q;
wire	[SN_RDTRACKER_NUM-1:0]			update_r_srcid_vec;
reg		[SN_RDTRACKER_NUM-1:0]			free_rdtracker_entries;
wire	[SN_RDTRACKER_NUM-1:0]			rdtracker_entry_dec;

assign   AWREADY_NOC = (!wrtracker_full) & AWREADY_S ;
assign   AWVALID_S = AWVALID_NOC ;
assign   AWID_S[10:0]    = AWID_NOC[10:0]      ;
assign   AWLEN_S[7:0]   = AWLEN_NOC[7:0]   ;
assign   WID_S[10:0] = wdb_stall ? WID_NOC[10:0] : wdb_wid_selected[10:0] ;
assign   WDATA_S[63:0] = wdb_stall ? WDATA_NOC[63:0] : wdb_wdata_selected[63:0] ;
assign   WSTRB_S[7:0] = wdb_stall ? WSTRB_NOC[7:0] : wdb_wstrb_selected[7:0] ;
assign   WLAST_S = wdb_stall ? WLAST_NOC : wdb_wlast_selected ;
assign   WVALID_S = wdb_stall ? WVALID_NOC : (|wdb_valid) ;
assign	 WREADY_NOC = (!wrtracker_full)	;
assign	 wrtracker_full = &(wrtracker_valid_q | wrtracker_ocp_q);
assign	 TgtID_B	=	select_tgtid_b	;
assign	 TgtID_R	=	select_tgtid_r	;

assign  aw_active   =   AWVALID_NOC     &   AWREADY_S   ;
assign  w_active    =   WVALID_NOC      &   WREADY_S    ;

integer j   ;

always@*
begin
    for(j=0;j<SN_WRTRACKER_NUM;j=j+1)
    begin
        if(selected_a_wdb[j])
        wdb_wid_selected[10:0]  =   wdb_wid_selected[10:0]  |   wdb_wid[j][10:0]    ;
    end
end
always@*
begin
    for(j=0;j<SN_WRTRACKER_NUM;j=j+1)
    begin
        if(selected_a_wdb[j])
        wdb_wdata_selected[63:0]  =   wdb_wdata_selected[63:0]  |   wdb_wdata[j][63:0]    ;
    end
end
always@*
begin
    for(j=0;j<SN_WRTRACKER_NUM;j=j+1)
    begin
        if(selected_a_wdb[j])
        wdb_wstrb_selected[7:0]  =   wdb_wstrb_selected[7:0]  |   wdb_wstrb[j][7:0]    ;
    end
end
always@*
begin
		select_tgtid_b[1:0]	 =  2'b0;
    for(j=0;j<SN_WRTRACKER_NUM;j=j+1)
    begin
        select_tgtid_b[1:0]  =   select_tgtid_b[1:0]  |   ({2{wrtracker_bid_cam_vec[j]}}&wrtracker_srcid_q[j][1:0] )   ;
    end
end
always@*
begin
		select_tgtid_r[1:0]	 =  2'b0;
    for(j=0;j<SN_RDTRACKER_NUM;j=j+1)
    begin
        select_tgtid_r[1:0]  =   select_tgtid_r[1:0]  |   ({2{rdtracker_rid_cam_vec[j]}}&rdtracker_srcid_q[j][1:0] )   ;
    end
end
always@*
begin
    for(j=0;j<SN_WRTRACKER_NUM;j=j+1)
    begin
        if(selected_a_wdb[j])
        wdb_wlast_selected  =   wdb_wlast_selected  |   wdb_wlast[j]    ;
    end
end
always@*
begin
    free_wrtracker_entries[SN_WRTRACKER_NUM-1:0]    =   	(~wrtracker_valid_q[SN_WRTRACKER_NUM-1:0])
														&	(~wrtracker_ocp_q[SN_WRTRACKER_NUM-1:0]) ;
end
always@*
begin
    free_rdtracker_entries[SN_RDTRACKER_NUM-1:0]    =   	(~rdtracker_valid_q[SN_RDTRACKER_NUM-1:0])	;
end

rr_arbiter #(
    .DATA_WIDTH(SN_WRTRACKER_NUM),
	.LOG2_DATA_WIDTH(LOG2_SN_WRTRACKER_NUM)
)
 u_find_entry_wr
(
    .data_in(free_wrtracker_entries[SN_WRTRACKER_NUM-1:0])     ,
    .entry_dec(wrtracker_entry_dec[SN_WRTRACKER_NUM-1:0])   ,
	.nxt_entry_dec(wrtracker_entry_dec_for_w[SN_WRTRACKER_NUM-1:0])	,
    .entry_enc(wrtracker_entry_enc[LOG2_SN_WRTRACKER_NUM-1:0])   ,
    .entry_found(wrtracker_entry_found)	,
	.nxt_entry_disable(entry_for_wcam_disable)
);

rr_arbiter #(
    .DATA_WIDTH(SN_RDTRACKER_NUM),
	.LOG2_DATA_WIDTH(LOG2_SN_RDTRACKER_NUM)
)
 u_find_entry_rd
(
    .data_in(free_rdtracker_entries[SN_RDTRACKER_NUM-1:0])     ,
    .entry_dec(rdtracker_entry_dec[SN_RDTRACKER_NUM-1:0])   ,
	.nxt_entry_dec()	,
    .entry_enc()   ,
    .entry_found()	,
	.nxt_entry_disable()
);

rr_arbiter #(
    .DATA_WIDTH(SN_WRTRACKER_NUM),
	.LOG2_DATA_WIDTH(LOG2_SN_WRTRACKER_NUM)
)
 u_find_wdb
(
    .data_in(wdb_ready[SN_WRTRACKER_NUM-1:0])     ,
    .entry_dec(selected_a_wdb[SN_WRTRACKER_NUM-1:0])   ,
	.nxt_entry_dec(),
    .entry_enc()   ,
    .entry_found(wdb_found),
	.nxt_entry_disable()
);

//如果aw camhit，则进入ocp的tracker；如果aw 没有hit，则进入一个新的free tracker
assign  wrtracker_wrenvec[SN_WRTRACKER_NUM-1:0] =   {SN_WRTRACKER_NUM{aw_active}} &
                                                    (
                                                        ({SN_WRTRACKER_NUM{wrtracker_awid_camhit}}   &   wrtracker_awid_cam_vec[SN_WRTRACKER_NUM-1:0]    )  |
                                                        ({SN_WRTRACKER_NUM{!wrtracker_awid_camhit}}  &   wrtracker_entry_dec[SN_WRTRACKER_NUM-1:0]       )  
                                                    );


//When awid cam hit, update valid_q from 0 to 1
genvar i;
generate
    for(i=0;i<SN_WRTRACKER_NUM;i=i+1)
    begin:valid_q
        assign  wrtracker_valid[i]   =  wrtracker_wrenvec[i]  
									|   (~wrtracker_dealloc_vec[i])
									|	wrtracker_awid_cam_vec[i];
        assign  update_valid_vec[i] =   wrtracker_wrenvec[i]  
									|   wrtracker_dealloc_vec[i]
									|	wrtracker_awid_cam_vec[i];
        
    always@(posedge clk)
    if(rst) begin
        wrtracker_valid_q[i] <=  {1'b0}  ;
    end
    else if(update_valid_vec[i]) begin
        wrtracker_valid_q[i] <=  wrtracker_valid[i]      ;
    end
    end
endgenerate

generate
    for(i=0;i<SN_WRTRACKER_NUM;i=i+1)
    begin:srcid_q
        assign  update_srcid_vec[i] =   wrtracker_wrenvec[i];
    always@(posedge clk)
    if(rst) begin
        wrtracker_srcid_q[i][1:0] <=  {2'b0}  ;
    end
    else if(update_srcid_vec[i]) begin
        wrtracker_srcid_q[i][1:0] <=   SrcID_AW[1:0]      ;
    end
    end
endgenerate


//有Entry的情况下，w_active的时候，且没有wid cam hit 的情况下更新ocp位；当AW进来的时候清除ocp位
generate
    for(i=0;i<SN_WRTRACKER_NUM;i=i+1)
    begin:ocp_q
        assign  wrtracker_ocp[i]   =      (!entry_for_wcam_disable 
										& wrtracker_entry_dec_for_w[i] 
										& w_active   
										& !wrtracker_wid_camhit
										& !wid_exist) 
									|   ~wrtracker_awid_cam_vec[i];
        assign  update_ocp_vec[i] =       (!entry_for_wcam_disable 
										& wrtracker_entry_dec_for_w[i] 
										& w_active   
										& !wrtracker_wid_camhit
										& !wid_exist) 
									|   wrtracker_awid_cam_vec[i];
        
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
        aw_length_q[i][7:0] <=  AWLEN_NOC[7:0]   ;
    end
    else begin
        aw_length_q[i][7:0] <=  aw_length_q[i][7:0]    ;
    end
    end
endgenerate

generate
    for(i=0;i<SN_WRTRACKER_NUM;i=i+1)
    begin
        assign  update_wid_vec[i] =     w_active    
									&   ((!wid_exist) |   wrtracker_dealloc_vec[i])
									&	wrtracker_entry_dec_for_w[i];
        
    always@(posedge clk)
    if(rst) begin
        wrtracker_wid_q[i] <=  {1'b0}  ;
    end
    else if(update_wid_vec[i]) begin
        wrtracker_wid_q[i] <=  WID_NOC      ;
    end
    else begin
        wrtracker_wid_q[i] <=  wrtracker_wid_q[i]    ;
    end
    end
endgenerate

generate
    for(i=0;i<SN_WRTRACKER_NUM;i=i+1)
    begin
        assign  wrtracker_awid[i][10:0]  =     {11{wrtracker_wrenvec[i]}} & AWID_NOC[10:0];
        assign  update_awid_vec[i] =    wrtracker_wrenvec[i]   ;
        
    always@(posedge clk)
    if(rst) begin
        wrtracker_awid_q[i][10:0] <=  {11'b0}  ;
    end
    else if(update_awid_vec[i]) begin
        wrtracker_awid_q[i][10:0] <=  wrtracker_awid[i][10:0]      ;
    end
    else begin
        wrtracker_awid_q[i][10:0] <=  wrtracker_awid_q[i][10:0]    ;
    end
    end
endgenerate

generate
    for(i=0;i<SN_WRTRACKER_NUM;i=i+1)
    begin
        always@(posedge clk)
        if(rst)
            rcvd_w_flit[i][7:0]  <=  0;
		else if(w_active & update_ocp_vec[i])
			rcvd_w_flit[i][7:0]	 <=	 1				 ;
        else if(w_active & wrtracker_wid_exist[i])
            rcvd_w_flit[i][7:0]  <=  rcvd_w_flit[i][7:0] + 1 ;
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
        else if(w_data_ready[i] )
            wrtracker_data_ready_q[i]  <=  1 & wrtracker_valid_q[i];
        else if(wdb_dumped[i])
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
        assign  wrtracker_awid_cam_vec[i]   =   wrtracker_ocp_q[i]      &
                                                (AWID_NOC[10:0] == wrtracker_wid_q[i][10:0])    ;
        assign  wrtracker_wid_exist[i]      =   wrtracker_ocp_q[i]		&
												(WID_NOC[10:0] == wrtracker_wid_q[i][10:0])     ;//wid和tracker中存的wid做cam
        assign  wrtracker_bid_cam_vec[i]    =   wrtracker_valid_q[i]    &
                                                (BID[10:0] == wrtracker_awid_q[i][10:0])    ;
    end
endgenerate


assign  wrtracker_wid_camhit    =   |wrtracker_wid_cam_vec[SN_WRTRACKER_NUM-1:0]    ;
assign  wrtracker_awid_camhit   =   |wrtracker_awid_cam_vec[SN_WRTRACKER_NUM-1:0]   ;
assign	wid_exist				=	|wrtracker_wid_exist[SN_WRTRACKER_NUM-1:0]		;
assign  no_camhit               =   (~wrtracker_awid_camhit)    &   (~wrtracker_wid_camhit) ;  
assign  aw_w_overlap            =       (aw_active   &   w_active)  
                                    &   no_camhit   
                                    &   (AWID_NOC[10:0]   ==  WID_NOC[10:0])                ;
assign  wrtracker_dealloc_vec[SN_WRTRACKER_NUM-1:0] =   wrtracker_bid_cam_vec[SN_WRTRACKER_NUM-1:0] ;
assign  wdb_stall[SN_WRTRACKER_NUM-1:0] =   w_active & wrtracker_wid_camhit ;


generate
for(i=0;i<SN_WRTRACKER_NUM;i=i+1)
	assign	w_data_ready[i]	=	( (rcvd_w_flit[i][7:0])==(aw_length_q[i][7:0]+1) );
endgenerate

assign	enter_wdb[SN_WRTRACKER_NUM-1:0]	=		{SN_WRTRACKER_NUM{w_active}}	
											&
											(	update_ocp_vec[SN_WRTRACKER_NUM-1:0]
												|	wrtracker_wid_exist[SN_WRTRACKER_NUM-1:0]
											);
										

generate
    for(i=0;i<SN_WRTRACKER_NUM;i=i+1)
	begin:wdb
    fifo #(
        .DEPTH(16),
        .WIDTH(64+8+1)
    )
	u_wdb 
	(
    //上游
        .clk(clk)     ,
        .rst(rst)     ,
        .fifo_in({WDATA_NOC[63:0],WSTRB_NOC[7:0],WLAST_NOC}) ,
        .valid_in(enter_wdb[i]),
        .ready_out(wdb_ready[i]),//表示fifo没满，可以放入数据
        .wid(WID_NOC[10:0])     ,//wid会对fifo进行标记
        .flush(wrtracker_data_ready_q[i])   ,//当tracker里面aw的length和收到w的数量对等的时候，fifo进入flush状态
        .flush_done(wdb_dumped[i]),
        .tag(wdb_wid[i])     ,//就是该fifo存的wid
        .stall(wdb_stall[i])    ,
    //下游
        .ready_in(WREADY_S),
        .valid_out(wdb_valid[i]),
        .fifo_out({wdb_wdata[i][63:0],wdb_wstrb[i][7:0],wdb_wlast[i]})
);
	end
endgenerate

genvar	r_entry;
generate
    for(r_entry=0;r_entry<SN_RDTRACKER_NUM;r_entry=r_entry+1)
    begin
        assign  rdtracker_arid[r_entry][10:0]  =     {11{rdtracker_wrenvec[r_entry]}} & ARID_NOC[10:0];
        assign  update_arid_vec[r_entry] =    rdtracker_wrenvec[r_entry]   ;
        
    always@(posedge clk)
    if(rst) begin
        rdtracker_arid_q[r_entry][10:0] <=  {11'b0}  ;
    end
    else if(update_arid_vec[r_entry]) begin
        rdtracker_arid_q[r_entry][10:0] <=  rdtracker_arid[r_entry][10:0]      ;
    end
    else begin
        rdtracker_arid_q[r_entry][10:0] <=  rdtracker_arid_q[r_entry][10:0]    ;
    end
    end
endgenerate

generate
    for(r_entry=0;r_entry<SN_RDTRACKER_NUM;r_entry=r_entry+1)
    begin:rd_valid_q
        assign  rdtracker_valid[r_entry]   =  	rdtracker_wrenvec[r_entry]  
											|   (~rdtracker_dealloc_vec[r_entry]);
        assign  update_ar_valid_vec[r_entry] =   	rdtracker_wrenvec[r_entry]  
											|   rdtracker_dealloc_vec[r_entry];
        
    always@(posedge clk)
    if(rst) begin
        rdtracker_valid_q[r_entry] <=  {1'b0}  ;
    end
    else if(update_ar_valid_vec[r_entry]) begin
        rdtracker_valid_q[r_entry] <=  rdtracker_valid[r_entry]      ;
    end
    end
endgenerate

assign  rdtracker_dealloc_vec[SN_RDTRACKER_NUM-1:0] =   (rdtracker_rid_cam_vec[SN_RDTRACKER_NUM-1:0] & RLAST);
assign	rdtracker_rid_camhit	=	|rdtracker_rid_cam_vec[SN_RDTRACKER_NUM-1:0];
assign	ar_active	=	ARVALID_NOC	&	ARREADY;

generate
    for(i=0;i<SN_RDTRACKER_NUM;i=i+1)
    begin
        assign  rdtracker_rid_cam_vec[i]    =   rdtracker_valid_q[i]    &
                                                (RID[10:0] == rdtracker_arid_q[i][10:0])    ;
	end
endgenerate

generate
    for(r_entry=0;r_entry<SN_RDTRACKER_NUM;r_entry=r_entry+1)
    begin:r_srcid_q
        assign  update_r_srcid_vec[r_entry] =   rdtracker_wrenvec[r_entry];
    always@(posedge clk)
    if(rst) begin
        rdtracker_srcid_q[r_entry][1:0] <=  {2'b0}  ;
    end
    else if(update_r_srcid_vec[r_entry]) begin
        rdtracker_srcid_q[r_entry][1:0] <=   SrcID_AR[1:0]      ;
    end
    end
endgenerate

assign  rdtracker_wrenvec[SN_RDTRACKER_NUM-1:0] =   {SN_RDTRACKER_NUM{ar_active}} & 
													(({SN_RDTRACKER_NUM{rdtracker_rid_camhit}}   &   rdtracker_rid_cam_vec[SN_RDTRACKER_NUM-1:0] )	|   
													 ({SN_RDTRACKER_NUM{!rdtracker_rid_camhit}}   &   rdtracker_entry_dec[SN_RDTRACKER_NUM-1:0]	 )    
																);


endmodule