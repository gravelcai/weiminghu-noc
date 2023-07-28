module RN_WRT#(
    parameter   RN_TRACKER_NUM = 16
)(
    input           clk     ,
    input           rst     ,
    //AW
    input           AWREADY ,
    input           AWVALID ,
    input   [10:0]  AWID    ,
    input   [7:0]   AWLEN   ,
    input   [1:0]   AW_TgtID,
    
    input           WREADY  ,
    input           WVALID  ,
    input   [10:0]  WID     ,
    output  [1:0]   W_TgtID
);

localparam  LOG2_RN_TRACKER_NUM = $clog2(RN_TRACKER_NUM)    ;

reg     [RN_TRACKER_NUM-1:0][12:0]  tracker_entry           ;
wire    [12:0]                      tracker_info            ;
wire    [RN_TRACKER_NUM-1:0]        tracker_valid           ;
reg     [RN_TRACKER_NUM-1:0]        tracker_valid_q         ;
reg     [RN_TRACKER_NUM-1:0]        free_tracker_entries    ;
wire    [RN_TRACKER_NUM-1:0]        tracker_entry_dec       ;
wire    [LOG2_RN_TRACKER_NUM-1:0]   tracker_entry_inc       ;
wire                                tracker_entry_found     ;
wire    [RN_TRACKER_NUM-1:0]        wrenvec                 ;
wire                                aw_active               ;
wire                                w_active                ;
wire                                flag_sametime           ;
wire                                flag_awfirst            ;
reg     [1:0]                       W_TgtID_q               ;
reg     [RN_TRACKER_NUM-1:0][7:0]   counter                 ;
reg     [RN_TRACKER_NUM-1:0]        tracker_wid_cam_vec_dec ;
reg     [LOG2_RN_TRACKER_NUM-1:0]   tracker_wid_cam_vec_inc ;
wire    [RN_TRACKER_NUM-1:0]        tracker_dealloc_vec     ;

assign tracker_info = {AWID,AW_TgtID}; 
assign aw_active = AWREADY & AWVALID;           //
assign w_active  = WREADY  & WVALID;            //
assign flag_sametime = aw_active & w_active;
assign flag_awfirst = aw_active & (~w_active);

assign W_TgtID = flag_sametime ? AW_TgtID : W_TgtID_q;

always@(*)
begin
    free_tracker_entries[RN_TRACKER_NUM-1:0]    =   ~tracker_valid_q[RN_TRACKER_NUM-1:0] ;
end


rr_arbiter u_find_entry #(
    .DATA_WIDTH(RN_TRACKER_NUM)
)(
    .data_in(free_tracker_entries[RN_TRACKER_NUM-1:0])     ,
    .entry_dec(tracker_entry_dec)   ,
    .entry_inc(tracker_entry_inc)   ,
    .entry_found(tracker_entry_found)
);

assign  wrenvec[RN_TRACKER_NUM-1:0] =   tracker_entry_dec[RN_TRACKER_NUM-1:0] & {RN_TRACKER_NUM{1'b1}}  ;

genvar i;
generate
    for(i=0;i<RN_TRACKER_NUM;i=i+1)
    begin
        assign  tracker_valid[i]   =    wrenvec[i]  &   ~tracker_dealloc_vec[i] ;
        assign  update_valid_vec[i] =   (wrenvec[i]  |   tracker_dealloc_vec[i]) & aw_active  ;
    always@(posedge clk)
    if(rst) begin
        tracker_valid_q[i] <=  {1'b0}  ;
    end
    else if(update_valid_vec[i]) begin
        tracker_valid_q[i] <=  tracker_valid[i]      ;
    end
    end
endgenerate

genvar k;
generate
    for(k=0;k<RN_TRACKER_NUM;k=k+1)
    begin:TRACKER_INFO
        always@(posedge clk)
        begin:u_tracker_info
            if(rst) begin
                tracker_entry[k] <= {RN_TRACKER_NUM{1'b0}};
            end
            else if((wrenvec[k] == 1'b1) & aw_active) begin
                tracker_entry[k] <= tracker_info;
            end
        end
    end
endgenerate

genvar j;
generate
    for(j=0;j<RN_TRACKER_NUM;j=j+1)
    begin:GET_W_TGTID
        always@(posedge clk)
        begin:u_w_tgtid
            if(rst) begin
                W_TgtID_q <= {2{1'b0}};
            end
            else if(WID == tracker_entry[j][12:2]) begin
                W_TgtID_q <= {tracker_entry[j][1:0]};
            end
            else begin
                W_TgtID_q <= W_TgtID_q;
            end
        end
    end
endgenerate

//dealloc
genvar g;
generate
    for(g=0;g<RN_TRACKER_NUM;g=g+1)
    begin:COUNTER
        always@(posedge clk)
        begin:u_counter
            if(rst) begin
                counter[RN_TRACKER_NUM-1:0][7:0] <= {RN_TRACKER_NUM{8'b0}};
            end
            else if((wrenvec[g] == 1'b1) & aw_active) begin
                counter[g] <= AWLEN + 1;
            else if(WVALID)
                counter[tracker_entry_inc] - 1;
            end
        end
    end
endgenerate


genvar p;
generate 
    for(p=0;p<RN_TRACKER_NUM;p=p+1)
    begin:CAM
        always@(*)
        begin:u_cam
        if(tracker_valid_q[p] & (WID[10:0] == tracker_entry[p][12:2])) begin
            tracker_wid_cam_vec_dec[p] = 1'b1;
            tracker_wid_cam_vec_inc[LOG2_RN_TRACKER_NUM-1:0] = p;
        end else
        end
    end

endgenerate

always@(posedge clk)
begin:u_counter
    if(rst) begin
        counter[RN_TRACKER_NUM-1:0][7:0] <= {RN_TRACKER_NUM{8'b0}};
    end
    else if(aw_active) begin
        counter[tracker_wid_cam_vec_inc] <= AWLEN + 1;
    end
    else if(WVALID) begin
        counter[tracker_wid_cam_vec_inc] <= counter - 1;
    end
    else begin
        counter <= counter;
    end
end

genvar x;
generate
    for(x=0;x<RN_TRACKER_NUM;x=x+1)
    begin:dealloc
        always@(posedge clk)
        begin:u_dealloc_vec
        if(rst) begin
            tracker_dealloc_vec[RN_TRACKER_NUM-1:0] <= {RN_TRACKER_NUM{1'b0}}; 
        end
        else if ((counter[x][7:0] == 8'b0) & (tracker_valid_q[x] == 1'b1)) begin
            tracker_dealloc_vec[x] <= 1'b1;
        end
        else if (tracker_valid_q[x] == 1'b0) begin
            tracker_dealloc_vec[x] <= 1'b0;
        end
        end
    end
endgenerate


endmodule