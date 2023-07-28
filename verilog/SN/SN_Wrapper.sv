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
  output  [19:0]  b_payload,
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

assign r_head = ar_new && RVALID ;
assign r_tail = RLAST ;