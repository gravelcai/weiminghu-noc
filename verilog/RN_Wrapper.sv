module RN_Wrapper(
  input           clk,
  input           rst,
  //AW
  input           aw_ready,
  output          aw_valid,
  output  [81:0]  aw_payload,
  output  [1:0]   aw_tgtid,
  //W
  input           w_ready,
  output          w_valid,
  output          w_head,
  output          w_tail,
  output  [81:0]  w_payload,
  output  [1:0]   w_tgtid,
  //B
  output          b_ready,
  input           b_valid,
  input   [19:0]  b_payload,
  input           b_srcid,
  //AR
  input           ar_ready,
  output          ar_valid,
  output  [81:0]  ar_payload,
  output  [1:0]   ar_tgtid,
  //R
  output          r_ready,
  input           r_valid,
  input           r_head,
  input           r_tail,
  input   [81:0]  r_payload,
  input   [1:0]   r_srcid
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

  reg   [7:0]     awlen_q;
  reg             aw_new;

  reg   [7:0]     arlen_q;
  reg             ar_new;  

  reg   [1:0]     AW_TgtID;
  wire  [1:0]     NODE_AW;


//W Channel Head and Tail flit signal
  always@(posedge clk)
  begin
    if(rst) begin
        awlen_q[7:0] <= 8'b0 ;
        aw_new <= 1'b0;
    end
    else if(AWVALID) begin
        awlen_q[7:0] <= AWLEN[7:0] + 1 ;
        aw_new <= 1'b1;
    end
    else if(WVALID) begin
        awlen_q[7:0] <= awlen_q[7:0] - 1 ;
        aw_new <= 1'b0;
    end
    else begin
        awlen_q[7:0] <= awlen_q[7:0] ;
        aw_new <= aw_new;
    end
  end

assign w_head = AWVALID & WVALID ;
assign w_tail = WLAST ;

//R Channel Head and Tail flit signal
  always@(posedge clk)
  begin
    if(rst) begin
        arlen_q[7:0] <= 8'b0 ;
        ar_new <= 1'b0;
    end
    else if(ARVALID) begin
        arlen_q[7:0] <= ARLEN[7:0] + 1 ;
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

assign r_head = ARVALID & RVALID ;
assign r_tail = RLAST ;

//NoC CPU Connecting
//AW
assign AWREADY = aw_ready;
assign aw_valid = AWVALID;
assign aw_payload = {6'b0,AWID,AWADDR,AWREGION,AWLEN,AWSIZE,AWBURST,AWLOCK,AWCACHE,AWPROT,AWQOS,AWUSER};

assign aw_tgtid = NODE_AW;
assign AW_TgtID = NODE_AW;

//W
assign WREADY = w_ready;
assign w_valid = WVALID;
assign w_payload = {5'b0,WDATA,WSTRB,WLAST,WUSER};

//B
assign b_ready = BREADY;
assign BVALID = b_valid;
assign BID = b_payload[16:6];
assign BRESP = b_payload[5:4];
assign BUSER = b_payload[3:0];


//AR
assign ARREADY = ar_ready;
assign ar_valid = ARVALID;
assign ar_payload = {6'b0,ARID,ARADDR,ARREGION,ARLEN,ARSIZE,ARBURST,ARLOCK,ARCACHE,ARPROT,ARQOS,ARUSER};

//R
assign r_ready = RREADY;
assign RVALID = r_valid;
assign RLAST = r_tail;
assign RID = r_payload[80:70];
assign RDATA = r_payload[69:6];
assign RRESP = r_payload[5:4];
assign RUSER = r_payload[3:0];




//RN_WRT 在AW握手成功后将AWID、AW_TgtID存储，等待之后W握手成功后将AW_TgtID作为w_tgtid发往目标节点
  RN_WRT u_RN_WRT(
    .AWREADY(AWREADY),
    .AWVALID(AWVALID),
    .AWID(AWID),
    .AWLEN(AWLEN),
    .AW_TgtID(AW_TgtID),
    .WREADY(WREADY),
    .WVALID(WVALID),
    .WID(WID),
    .W_TgtID(w_tgtid)
  );

  SAM u_SAM_AW(
    .ADDR(AWADDR),
    .NODE(NODE_AW)
  );

  SAM u_SAM_AR(
    .ADDR(ARADDR),
    .NODE(ar_tgtid)
  );

  /*CPU u_core(
    
  );*/

  endmodule