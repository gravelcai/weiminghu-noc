module SN_Wrapper(
  input           clk,
  input           rst,
  //AW
  output          aw_ready,
  input           aw_valid,
  input   [81:0]  aw_payload,
  input   [1:0]   aw_srcid,
  //W
  output          w_ready,
  input           w_valid,
  input           w_head,
  input           w_tail,
  input   [81:0]  w_payload,
  input   [1:0]   w_srcid,
  //B
  input           b_ready,
  output          b_valid,
  output  [81:0]  b_payload,
  output          b_tgtid,
  //AR
  output          ar_ready,
  input           ar_valid,
  input   [81:0]  ar_payload,
  input   [1:0]   ar_srcid,
  //R
  input           r_ready,
  output          r_valid,
  output          r_head,
  output          r_tail,
  output  [81:0]  r_payload,
  output  [1:0]   r_tgtid
  //AXI Slave port 0
  input             AWREADY0,
  output            AWVALID0,
  output  [10:0]    AWID0,
  output  [28:0]    AWADDR0,
  output  [3:0]     AWREGION0,
  output  [7:0]     AWLEN0,
  output  [2:0]     AWSIZE0,
  output  [1:0]     AWBURST0,
  output            AWLOCK0,
  output  [3:0]     AWCACHE0,
  output  [2:0]     AWPROT0,
  output  [3:0]     AWQOS0,
  output  [3:0]     AWUSER0,
  //W Channel
  input             WREADY0,
  output            WVALID0,
  output  [10:0]    WID0,
  output  [63:0]    WDATA0,
  output  [7:0]     WSTRB0,
  output            WLAST0,
  output  [3:0]     WUSER0,
  //B Channel
  output            BREADY0,
  input             BVALID0,
  input    [10:0]   BID0,
  input    [1:0]    BRESP0,
  input    [3:0]    BUSER0,
  //AR Channel
  input             ARREADY0,
  output            ARVALID0,
  output  [10:0]    ARID0,
  output  [28:0]    ARADDR0,
  output  [3:0]     ARREGION0,
  output  [7:0]     ARLEN0,
  output  [2:0]     ARSIZE0,
  output  [1:0]     ARBURST0,
  output            ARLOCK0,
  output  [3:0]     ARCACHE0,
  output  [2:0]     ARPROT0,
  output  [3:0]     ARQOS0,
  output  [3:0]     ARUSER0,
  //R Channel
  output            RREADY0,
  input             RVALID0,
  input    [10:0]   RID0,
  input    [63:0]   RDATA0,
  input    [1:0]    RRESP0,
  input             RLAST0,
  input    [3:0]    RUSER0,
  //AXI Slave port 1
  input             AWREADY1,
  output            AWVALID1,
  output  [10:0]    AWID1,
  output  [28:0]    AWADDR1,
  output  [3:0]     AWREGION1,
  output  [7:0]     AWLEN1,
  output  [2:0]     AWSIZE1,
  output  [1:0]     AWBURST1,
  output            AWLOCK1,
  output  [3:0]     AWCACHE1,
  output  [2:0]     AWPROT1,
  output  [3:0]     AWQOS1,
  output  [3:0]     AWUSER1,
  //W Channel
  input             WREADY1,
  output            WVALID1,
  output  [10:0]    WID1,
  output  [63:0]    WDATA1,
  output  [7:0]     WSTRB1,
  output            WLAST1,
  output  [3:0]     WUSER1,
  //B Channel
  output            BREADY1,
  input             BVALID1,
  input    [10:0]   BID1,
  input    [1:0]    BRESP1,
  input    [3:0]    BUSER1,
  //AR Channel
  input             ARREADY1,
  output            ARVALID1,
  output  [10:0]    ARID1,
  output  [28:0]    ARADDR1,
  output  [3:0]     ARREGION1,
  output  [7:0]     ARLEN1,
  output  [2:0]     ARSIZE1,
  output  [1:0]     ARBURST1,
  output            ARLOCK1,
  output  [3:0]     ARCACHE1,
  output  [2:0]     ARPROT1,
  output  [3:0]     ARQOS1,
  output  [3:0]     ARUSER1,
  //R Channel
  output            RREADY1,
  input             RVALID1,
  input    [10:0]   RID1,
  input    [63:0]   RDATA1,
  input    [1:0]    RRESP1,
  input             RLAST1,
  input    [3:0]    RUSER1,
);

//AW Channel
  wire            AWREADY;
  wire            AWVALID;
  wire  [10:0]    AWID;
  wire  [31:0]    AWADDR;
  wire  [3:0]     AWREGION;
  wire  [7:0]     AWLEN;
  wire  [2:0]     AWSIZE;
  wire  [1:0]     AWBURST;
  wire            AWLOCK;
  wire  [3:0]     AWCACHE;
  wire  [2:0]     AWPROT;
  wire  [3:0]     AWQOS;
  wire  [3:0]     AWUSER;
  //W Channel
  wire            WREADY;
  wire            WVALID;
  wire  [10:0]    WID;
  wire  [63:0]    WDATA;
  wire  [7:0]     WSTRB;
  wire            WLAST;
  wire  [3:0]     WUSER;
  //B Channel
  wire            BREADY;
  wire            BVALID;
  wire  [10:0]    BID;
  wire  [1:0]     BRESP;
  wire  [3:0]     BUSER;
  //AR Channel
  wire            ARREADY;
  wire            ARVALID;
  wire  [10:0]    ARID;
  wire  [31:0]    ARADDR;
  wire  [3:0]     ARREGION;
  wire  [7:0]     ARLEN;
  wire  [2:0]     ARSIZE;
  wire  [1:0]     ARBURST;
  wire            ARLOCK;
  wire  [3:0]     ARCACHE;
  wire  [2:0]     ARPROT;
  wire  [3:0]     ARQOS;
  wire  [3:0]     ARUSER;
  //R Channel
  wire            RREADY;
  wire            RVALID;
  wire  [10:0]    RID;
  wire  [63:0]    RDATA;
  wire  [1:0]     RRESP;
  wire            RLAST;
  wire  [3:0]     RUSER;

  reg   [7:0]     arlen_q;
  reg             ar_new;
  wire            select_wr;
  wire            select_rd;

//R Channel Head and Tail flit signal
  always@(posedge clk or rst)
  begin
    if(rst) begin
        arlen_q[7:0] <= 8'b0 ;
        ar_new <= 1'b0;
    end
    else if(ARVALID) begin
        arlen_q[7:0] <= arLEN[7:0] ;
        ar_new <= 1'b1;
    end
    else if(RVALID) begin
        arlen_q[7:0] <= arlen_q[7:0] - 1 ;
        ar_new <= 1'b0;
    end
    else begin
        arlen_q[7:0] <= arlen_q[7:0] ;
        ar_new <= ar_new;
    end
  end

  assign  AWID  = aw_payload[10:0]    ;
  assign  AWADDR0  = aw_payload[42:11]    ;
  assign  AWREGION0  = aw_payload[46:43]     ;
  assign  AWLEN  = aw_payload[54:47]     ;
  assign  AWSIZE0  = aw_payload[57:55]     ;
  assign  AWBURST0  = aw_payload[59:58]     ;
  assign  AWLOCK0  = aw_payload[60:60]     ;
  assign  AWCACHE0  = aw_payload[64:61]     ;
  assign  AWPROT0  = aw_payload[67:65]     ;
  assign  AWQOS0  = aw_payload[71:68]     ;

  assign  WID = w_payload[9:0]    ;
  assign  WDATA = w_payload[73:10]    ;
  assign  WSTRB = w_payload[81:74]     ;
  assign  WLAST = w_tail     ;

  assign  b_payload[10:0]  =  BID0;
  assign  b_payload[12:11]  =   BRESP0;
  assign  b_payload[16:13]  = BUSER0;

  assign  ARID = ar_payload[10:0]    ;
  assign  ARADDR0 = ar_payload[42:11]    ;
  assign  ARREGION0 = ar_payload[46:43]     ;
  assign  ARLEN0 = ar_payload[54:47]     ;
  assign  ARSIZE0 = ar_payload[57:55]     ;
  assign  ARBURST0 = ar_payload[59:58]     ;
  assign  ARLOCK0 = ar_payload[60:60]     ;
  assign  ARCACHE0 = ar_payload[64:61]     ;
  assign  ARPROT0 = ar_payload[67:65]     ;
  assign  ARQOS0 = ar_payload[71:68]     ;

  assign  r_payload[10:0] = RID0;
  assign  r_payload[74:11] = RDATA0;
  assign  r_payload[76:75] =  RRESP0;
  assign  r_payload[80:77] =  RUSER0;

assign r_head = ar_new && RVALID ;
assign r_tail = RLAST0 ;
assign r_valid = RVALID0 ;
assign RREADY0 = r_ready ;
assign ar_ready = ARREADY0 ;
assign b_valid = BVALID0 ;
assign BREADY0 = b_ready ;
assign ARVALID0 = ar_valid ;
assign ARID0 = ARID ;
assign select_rd = ARADDR[29] ;
assign select_wr = AWADDR[29] ;

SN #(
    .SN_WRTRACKER_NUM(16),
    .SN_RDTRACKER_NUM(8)
)
u_SN (
    .clk(clk)     ,
    .rst(rst)     ,
    //from NoC
    .AWID_NOC(AWID)    ,
    .AWLEN_NOC(AWLEN)   ,
    .AWVALID_NOC(aw_valid) ,
    .AWREADY_NOC(aw_ready) ,
	  .ARID_NOC(ARID)	,
	  .ARVALID_NOC(ar_valid)	,

    .SrcID_AW(aw_srcid)   ,
    .SrcID_AR(ar_srcid)   ,

    .WID_NOC(WID)     ,
    .WDATA_NOC(WDATA)   ,
    .WSTRB_NOC(WSTRB)   ,
    .WLAST_NOC(WLAST)   ,
    .WVALID_NOC(w_valid)  ,
    .WREADY_NOC(w_ready)  ,

    //to Slave
    .AWREADY_S(AWREADY0) ,
    .AWVALID_S(AWVALID0) ,//Directly from aw_valid
    .AWID_S(AWID0)    ,//Directly from aw_payload
    .AWLEN_S(AWLEN0)   ,//Directly from aw_payload

    .WID_S(WID0)     ,
    .WDATA_S(WDATA0)   ,
    .WSTRB_S(WSTRB0)   ,
    .WLAST_S(WLAST0)   ,
    .WVALID_S(WVALID0)  ,
    .WREADY_S(WREADY0)  ,

    //from slave
    .BVALID(BVALID0)  ,
    .BID(BID0)     ,
	  .ARREADY(ARREADY0) ,
    .RVALID(RVALID0)  ,
	  .RLAST(RLAST0)	,
    .RID(RID0)     ,

    //to NoC
    .TgtID_B(b_tgtid)	,
	  .TgtID_R(r_tgtid)   );

endmodule