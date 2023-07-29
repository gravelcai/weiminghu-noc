module NoC_wrapper 
(
    input               clock,
    input               reset,

    // RN0 interface
    output              rn0_AWREADY,
    input               rn0_AWVALID,
    input  [10:0]       rn0_AWID,
    input  [31:0]       rn0_AWADDR,
    input  [3:0]        rn0_AWREGION,
    input  [7:0]        rn0_AWLEN,
    input  [2:0]        rn0_AWSIZE,
    input  [1:0]        rn0_AWBURST,
    input               rn0_AWLOCK,
    input  [3:0]        rn0_AWCACHE,
    input  [2:0]        rn0_AWPROT,
    input  [3:0]        rn0_AWQOS,
    input  [3:0]        rn0_AWUSER,

    output              rn0_WREADY,
    input               rn0_WVALID,
    input  [10:0]       rn0_WID,
    input  [63:0]       rn0_WDATA,
    input  [7:0]        rn0_WSTRB,
    input               rn0_WLAST,
    input  [3:0]        rn0_WUSER,

    input               rn0_BREADY,
    output              rn0_BVALID,
    output  [10:0]      rn0_BID,
    output  [1:0]       rn0_BRESP,
    output  [3:0]       rn0_BUSER,

    output              rn0_ARREADY,
    input               rn0_ARVALID,
    input  [10:0]       rn0_ARID,
    input  [31:0]       rn0_ARADDR,
    input  [3:0]        rn0_ARREGION,
    input  [7:0]        rn0_ARLEN,
    input  [2:0]        rn0_ARSIZE,
    input  [1:0]        rn0_ARBURST,
    input               rn0_ARLOCK,
    input  [3:0]        rn0_ARCACHE,
    input  [2:0]        rn0_ARPROT,
    input  [3:0]        rn0_ARQOS,
    input  [3:0]        rn0_ARUSER,

    input               rn0_RREADY,
    output              rn0_RVALID,
    output  [10:0]      rn0_RID,
    output  [63:0]      rn0_RDATA,
    output  [1:0]       rn0_RRESP,
    output              rn0_RLAST,
    output  [3:0]       rn0_RUSER,

    // RN1 interface
    output              rn1_AWREADY,
    input               rn1_AWVALID,
    input  [10:0]       rn1_AWID,
    input  [31:0]       rn1_AWADDR,
    input  [3:0]        rn1_AWREGION,
    input  [7:0]        rn1_AWLEN,
    input  [2:0]        rn1_AWSIZE,
    input  [1:0]        rn1_AWBURST,
    input               rn1_AWLOCK,
    input  [3:0]        rn1_AWCACHE,
    input  [2:0]        rn1_AWPROT,
    input  [3:0]        rn1_AWQOS,
    input  [3:0]        rn1_AWUSER,

    output              rn1_WREADY,
    input               rn1_WVALID,
    input  [10:0]       rn1_WID,
    input  [63:0]       rn1_WDATA,
    input  [7:0]        rn1_WSTRB,
    input               rn1_WLAST,
    input  [3:0]        rn1_WUSER,

    input               rn1_BREADY,
    output              rn1_BVALID,
    output  [10:0]      rn1_BID,
    output  [1:0]       rn1_BRESP,
    output  [3:0]       rn1_BUSER,

    output              rn1_ARREADY,
    input               rn1_ARVALID,
    input  [10:0]       rn1_ARID,
    input  [31:0]       rn1_ARADDR,
    input  [3:0]        rn1_ARREGION,
    input  [7:0]        rn1_ARLEN,
    input  [2:0]        rn1_ARSIZE,
    input  [1:0]        rn1_ARBURST,
    input               rn1_ARLOCK,
    input  [3:0]        rn1_ARCACHE,
    input  [2:0]        rn1_ARPROT,
    input  [3:0]        rn1_ARQOS,
    input  [3:0]        rn1_ARUSER,

    input               rn1_RREADY,
    output              rn1_RVALID,
    output  [10:0]      rn1_RID,
    output  [63:0]      rn1_RDATA,
    output  [1:0]       rn1_RRESP,
    output              rn1_RLAST,
    output  [3:0]       rn1_RUSER,

    // RN2 interface
    output              rn2_AWREADY,
    input               rn2_AWVALID,
    input  [10:0]       rn2_AWID,
    input  [31:0]       rn2_AWADDR,
    input  [3:0]        rn2_AWREGION,
    input  [7:0]        rn2_AWLEN,
    input  [2:0]        rn2_AWSIZE,
    input  [1:0]        rn2_AWBURST,
    input               rn2_AWLOCK,
    input  [3:0]        rn2_AWCACHE,
    input  [2:0]        rn2_AWPROT,
    input  [3:0]        rn2_AWQOS,
    input  [3:0]        rn2_AWUSER,

    output              rn2_WREADY,
    input               rn2_WVALID,
    input  [10:0]       rn2_WID,
    input  [63:0]       rn2_WDATA,
    input  [7:0]        rn2_WSTRB,
    input               rn2_WLAST,
    input  [3:0]        rn2_WUSER,

    input               rn2_BREADY,
    output              rn2_BVALID,
    output  [10:0]      rn2_BID,
    output  [1:0]       rn2_BRESP,
    output  [3:0]       rn2_BUSER,

    output              rn2_ARREADY,
    input               rn2_ARVALID,
    input  [10:0]       rn2_ARID,
    input  [31:0]       rn2_ARADDR,
    input  [3:0]        rn2_ARREGION,
    input  [7:0]        rn2_ARLEN,
    input  [2:0]        rn2_ARSIZE,
    input  [1:0]        rn2_ARBURST,
    input               rn2_ARLOCK,
    input  [3:0]        rn2_ARCACHE,
    input  [2:0]        rn2_ARPROT,
    input  [3:0]        rn2_ARQOS,
    input  [3:0]        rn2_ARUSER,

    input               rn2_RREADY,
    output              rn2_RVALID,
    output  [10:0]      rn2_RID,
    output  [63:0]      rn2_RDATA,
    output  [1:0]       rn2_RRESP,
    output              rn2_RLAST,
    output  [3:0]       rn2_RUSER,

    // RN3 interface
    output              rn3_AWREADY,
    input               rn3_AWVALID,
    input  [10:0]       rn3_AWID,
    input  [31:0]       rn3_AWADDR,
    input  [3:0]        rn3_AWREGION,
    input  [7:0]        rn3_AWLEN,
    input  [2:0]        rn3_AWSIZE,
    input  [1:0]        rn3_AWBURST,
    input               rn3_AWLOCK,
    input  [3:0]        rn3_AWCACHE,
    input  [2:0]        rn3_AWPROT,
    input  [3:0]        rn3_AWQOS,
    input  [3:0]        rn3_AWUSER,

    output              rn3_WREADY,
    input               rn3_WVALID,
    input  [10:0]       rn3_WID,
    input  [63:0]       rn3_WDATA,
    input  [7:0]        rn3_WSTRB,
    input               rn3_WLAST,
    input  [3:0]        rn3_WUSER,

    input               rn3_BREADY,
    output              rn3_BVALID,
    output  [10:0]      rn3_BID,
    output  [1:0]       rn3_BRESP,
    output  [3:0]       rn3_BUSER,

    output              rn3_ARREADY,
    input               rn3_ARVALID,
    input  [10:0]       rn3_ARID,
    input  [31:0]       rn3_ARADDR,
    input  [3:0]        rn3_ARREGION,
    input  [7:0]        rn3_ARLEN,
    input  [2:0]        rn3_ARSIZE,
    input  [1:0]        rn3_ARBURST,
    input               rn3_ARLOCK,
    input  [3:0]        rn3_ARCACHE,
    input  [2:0]        rn3_ARPROT,
    input  [3:0]        rn3_ARQOS,
    input  [3:0]        rn3_ARUSER,

    input               rn3_RREADY,
    output              rn3_RVALID,
    output  [10:0]      rn3_RID,
    output  [63:0]      rn3_RDATA,
    output  [1:0]       rn3_RRESP,
    output              rn3_RLAST,
    output  [3:0]       rn3_RUSER,

    // SN0 interface
    output              sn0_AWVALID,
    input               sn0_AWREADY,
    output [10:0]       sn0_AWID,
    output [31:0]       sn0_AWADDR,
    output [3:0]        sn0_AWREGION,
    output [7:0]        sn0_AWLEN,
    output [2:0]        sn0_AWSIZE,
    output [1:0]        sn0_AWBURST,
    output              sn0_AWLOCK,
    output [3:0]        sn0_AWCACHE,
    output [2:0]        sn0_AWPROT,
    output [3:0]        sn0_AWQOS,

    output              sn0_WVALID,
    input               sn0_WREADY,
    output [63:0]       sn0_WDATA,
    output [7:0]        sn0_WSTRB,
    output              sn0_WLAST,

    input               sn0_BVALID,
    output              sn0_BREADY,
    input  [1:0]        sn0_BRESP,
    input  [10:0]       sn0_BID,

    output              sn0_ARVALID,
    input               sn0_ARREADY,
    output [10:0]       sn0_ARID,
    output [31:0]       sn0_ARADDR,
    output [3:0]        sn0_ARREGION,
    output [7:0]        sn0_ARLEN,
    output [2:0]        sn0_ARSIZE,
    output [1:0]        sn0_ARBURST,
    output              sn0_ARLOCK,
    output [3:0]        sn0_ARCACHE,
    output [2:0]        sn0_ARPROT,
    output [3:0]        sn0_ARQOS,

    input               sn0_RVALID,
    output              sn0_RREADY,
    input  [10:0]       sn0_RID,
    input  [63:0]       sn0_RDATA,
    input  [1:0]        sn0_RRESP,
    input               sn0_RLAST,

    // SN1 interface
    output              sn1_AWVALID,
    input               sn1_AWREADY,
    output [10:0]       sn1_AWID,
    output [31:0]       sn1_AWADDR,
    output [3:0]        sn1_AWREGION,
    output [7:0]        sn1_AWLEN,
    output [2:0]        sn1_AWSIZE,
    output [1:0]        sn1_AWBURST,
    output              sn1_AWLOCK,
    output [3:0]        sn1_AWCACHE,
    output [2:0]        sn1_AWPROT,
    output [3:0]        sn1_AWQOS,

    output              sn1_WVALID,
    input               sn1_WREADY,
    output [63:0]       sn1_WDATA,
    output [7:0]        sn1_WSTRB,
    output              sn1_WLAST,

    input               sn1_BVALID,
    output              sn1_BREADY,
    input  [1:0]        sn1_BRESP,
    input  [10:0]       sn1_BID,

    output              sn1_ARVALID,
    input               sn1_ARREADY,
    output [10:0]       sn1_ARID,
    output [31:0]       sn1_ARADDR,
    output [3:0]        sn1_ARREGION,
    output [7:0]        sn1_ARLEN,
    output [2:0]        sn1_ARSIZE,
    output [1:0]        sn1_ARBURST,
    output              sn1_ARLOCK,
    output [3:0]        sn1_ARCACHE,
    output [2:0]        sn1_ARPROT,
    output [3:0]        sn1_ARQOS,

    input               sn1_RVALID,
    output              sn1_RREADY,
    input  [10:0]       sn1_RID,
    input  [63:0]       sn1_RDATA,
    input  [1:0]        sn1_RRESP,
    input               sn1_RLAST,

    // SN2 interface
    output              sn2_AWVALID,
    input               sn2_AWREADY,
    output [10:0]       sn2_AWID,
    output [31:0]       sn2_AWADDR,
    output [3:0]        sn2_AWREGION,
    output [7:0]        sn2_AWLEN,
    output [2:0]        sn2_AWSIZE,
    output [1:0]        sn2_AWBURST,
    output              sn2_AWLOCK,
    output [3:0]        sn2_AWCACHE,
    output [2:0]        sn2_AWPROT,
    output [3:0]        sn2_AWQOS,

    output              sn2_WVALID,
    input               sn2_WREADY,
    output [63:0]       sn2_WDATA,
    output [7:0]        sn2_WSTRB,
    output              sn2_WLAST,

    input               sn2_BVALID,
    output              sn2_BREADY,
    input  [1:0]        sn2_BRESP,
    input  [10:0]       sn2_BID,

    output              sn2_ARVALID,
    input               sn2_ARREADY,
    output [10:0]       sn2_ARID,
    output [31:0]       sn2_ARADDR,
    output [3:0]        sn2_ARREGION,
    output [7:0]        sn2_ARLEN,
    output [2:0]        sn2_ARSIZE,
    output [1:0]        sn2_ARBURST,
    output              sn2_ARLOCK,
    output [3:0]        sn2_ARCACHE,
    output [2:0]        sn2_ARPROT,
    output [3:0]        sn2_ARQOS,

    input               sn2_RVALID,
    output              sn2_RREADY,
    input  [10:0]       sn2_RID,
    input  [63:0]       sn2_RDATA,
    input  [1:0]        sn2_RRESP,
    input               sn2_RLAST,

    // SN3 interface
    output              sn3_AWVALID,
    input               sn3_AWREADY,
    output [10:0]       sn3_AWID,
    output [31:0]       sn3_AWADDR,
    output [3:0]        sn3_AWREGION,
    output [7:0]        sn3_AWLEN,
    output [2:0]        sn3_AWSIZE,
    output [1:0]        sn3_AWBURST,
    output              sn3_AWLOCK,
    output [3:0]        sn3_AWCACHE,
    output [2:0]        sn3_AWPROT,
    output [3:0]        sn3_AWQOS,

    output              sn3_WVALID,
    input               sn3_WREADY,
    output [63:0]       sn3_WDATA,
    output [7:0]        sn3_WSTRB,
    output              sn3_WLAST,

    input               sn3_BVALID,
    output              sn3_BREADY,
    input  [1:0]        sn3_BRESP,
    input  [10:0]       sn3_BID,

    output              sn3_ARVALID,
    input               sn3_ARREADY,
    output [10:0]       sn3_ARID,
    output [31:0]       sn3_ARADDR,
    output [3:0]        sn3_ARREGION,
    output [7:0]        sn3_ARLEN,
    output [2:0]        sn3_ARSIZE,
    output [1:0]        sn3_ARBURST,
    output              sn3_ARLOCK,
    output [3:0]        sn3_ARCACHE,
    output [2:0]        sn3_ARPROT,
    output [3:0]        sn3_ARQOS,

    input               sn3_RVALID,
    output              sn3_RREADY,
    input  [10:0]       sn3_RID,
    input  [63:0]       sn3_RDATA,
    input  [1:0]        sn3_RRESP,
    input               sn3_RLAST
);

wire            aw_ingress_3_ready;
wire            aw_ingress_3_valid;
wire            aw_ingress_3_bits_head;
wire            aw_ingress_3_bits_tail;
wire [81:0]     aw_ingress_3_bits_payload;
wire [1:0]      aw_ingress_3_bits_egress_id;
wire            aw_ingress_2_ready;
wire            aw_ingress_2_valid;
wire            aw_ingress_2_bits_head;
wire            aw_ingress_2_bits_tail;
wire [81:0]     aw_ingress_2_bits_payload;
wire [1:0]      aw_ingress_2_bits_egress_id;
wire            aw_ingress_1_ready;
wire            aw_ingress_1_valid;
wire            aw_ingress_1_bits_head;
wire            aw_ingress_1_bits_tail;
wire [81:0]     aw_ingress_1_bits_payload;
wire [1:0]      aw_ingress_1_bits_egress_id;
wire            aw_ingress_0_ready;
wire            aw_ingress_0_valid;
wire            aw_ingress_0_bits_head;
wire            aw_ingress_0_bits_tail;
wire [81:0]     aw_ingress_0_bits_payload;
wire [1:0]      aw_ingress_0_bits_egress_id;
wire            aw_egress_3_valid;
wire            aw_egress_3_bits_head;
wire            aw_egress_3_bits_tail;
wire [81:0]     aw_egress_3_bits_payload;
wire [1:0]      aw_egress_3_bits_ingress_id;
wire            aw_egress_2_valid;
wire            aw_egress_2_bits_head;
wire            aw_egress_2_bits_tail;
wire [81:0]     aw_egress_2_bits_payload;
wire [1:0]      aw_egress_2_bits_ingress_id;
wire            aw_egress_1_valid;
wire            aw_egress_1_bits_head;
wire            aw_egress_1_bits_tail;
wire [81:0]     aw_egress_1_bits_payload;
wire [1:0]      aw_egress_1_bits_ingress_id;
wire            aw_egress_0_valid;
wire            aw_egress_0_bits_head;
wire            aw_egress_0_bits_tail;
wire [81:0]     aw_egress_0_bits_payload;
wire [1:0]      aw_egress_0_bits_ingress_id;

wire            w_ingress_3_ready;
wire            w_ingress_3_valid;
wire            w_ingress_3_bits_head;
wire            w_ingress_3_bits_tail;
wire [81:0]     w_ingress_3_bits_payload;
wire [1:0]      w_ingress_3_bits_egress_id;
wire            w_ingress_2_ready;
wire            w_ingress_2_valid;
wire            w_ingress_2_bits_head;
wire            w_ingress_2_bits_tail;
wire [81:0]     w_ingress_2_bits_payload;
wire [1:0]      w_ingress_2_bits_egress_id;
wire            w_ingress_1_ready;
wire            w_ingress_1_valid;
wire            w_ingress_1_bits_head;
wire            w_ingress_1_bits_tail;
wire [81:0]     w_ingress_1_bits_payload;
wire [1:0]      w_ingress_1_bits_egress_id;
wire            w_ingress_0_ready;
wire            w_ingress_0_valid;
wire            w_ingress_0_bits_head;
wire            w_ingress_0_bits_tail;
wire [81:0]     w_ingress_0_bits_payload;
wire [1:0]      w_ingress_0_bits_egress_id;
wire            w_egress_3_valid;
wire            w_egress_3_bits_head;
wire            w_egress_3_bits_tail;
wire [81:0]     w_egress_3_bits_payload;
wire [1:0]      w_egress_3_bits_ingress_id;
wire            w_egress_2_valid;
wire            w_egress_2_bits_head;
wire            w_egress_2_bits_tail;
wire [81:0]     w_egress_2_bits_payload;
wire [1:0]      w_egress_2_bits_ingress_id;
wire            w_egress_1_valid;
wire            w_egress_1_bits_head;
wire            w_egress_1_bits_tail;
wire [81:0]     w_egress_1_bits_payload;
wire [1:0]      w_egress_1_bits_ingress_id;
wire            w_egress_0_valid;
wire            w_egress_0_bits_head;
wire            w_egress_0_bits_tail;
wire [81:0]     w_egress_0_bits_payload;
wire [1:0]      w_egress_0_bits_ingress_id;

wire            b_ingress_3_ready;
wire            b_ingress_3_valid;
wire            b_ingress_3_bits_head;
wire            b_ingress_3_bits_tail;
wire [19:0]     b_ingress_3_bits_payload;
wire [1:0]      b_ingress_3_bits_egress_id;
wire            b_ingress_2_ready;
wire            b_ingress_2_valid;
wire            b_ingress_2_bits_head;
wire            b_ingress_2_bits_tail;
wire [19:0]     b_ingress_2_bits_payload;
wire [1:0]      b_ingress_2_bits_egress_id;
wire            b_ingress_1_ready;
wire            b_ingress_1_valid;
wire            b_ingress_1_bits_head;
wire            b_ingress_1_bits_tail;
wire [19:0]     b_ingress_1_bits_payload;
wire [1:0]      b_ingress_1_bits_egress_id;
wire            b_ingress_0_ready;
wire            b_ingress_0_valid;
wire            b_ingress_0_bits_head;
wire            b_ingress_0_bits_tail;
wire [19:0]     b_ingress_0_bits_payload;
wire [1:0]      b_ingress_0_bits_egress_id;
wire            b_egress_3_valid;
wire            b_egress_3_bits_head;
wire            b_egress_3_bits_tail;
wire [19:0]     b_egress_3_bits_payload;
wire [1:0]      b_egress_3_bits_ingress_id;
wire            b_egress_2_valid;
wire            b_egress_2_bits_head;
wire            b_egress_2_bits_tail;
wire [19:0]     b_egress_2_bits_payload;
wire [1:0]      b_egress_2_bits_ingress_id;
wire            b_egress_1_valid;
wire            b_egress_1_bits_head;
wire            b_egress_1_bits_tail;
wire [19:0]     b_egress_1_bits_payload;
wire [1:0]      b_egress_1_bits_ingress_id;
wire            b_egress_0_valid;
wire            b_egress_0_bits_head;
wire            b_egress_0_bits_tail;
wire [19:0]     b_egress_0_bits_payload;
wire [1:0]      b_egress_0_bits_ingress_id;

wire            ar_ingress_3_ready;
wire            ar_ingress_3_valid;
wire            ar_ingress_3_bits_head;
wire            ar_ingress_3_bits_tail;
wire [81:0]     ar_ingress_3_bits_payload;
wire [1:0]      ar_ingress_3_bits_egress_id;
wire            ar_ingress_2_ready;
wire            ar_ingress_2_valid;
wire            ar_ingress_2_bits_head;
wire            ar_ingress_2_bits_tail;
wire [81:0]     ar_ingress_2_bits_payload;
wire [1:0]      ar_ingress_2_bits_egress_id;
wire            ar_ingress_1_ready;
wire            ar_ingress_1_valid;
wire            ar_ingress_1_bits_head;
wire            ar_ingress_1_bits_tail;
wire [81:0]     ar_ingress_1_bits_payload;
wire [1:0]      ar_ingress_1_bits_egress_id;
wire            ar_ingress_0_ready;
wire            ar_ingress_0_valid;
wire            ar_ingress_0_bits_head;
wire            ar_ingress_0_bits_tail;
wire [81:0]     ar_ingress_0_bits_payload;
wire [1:0]      ar_ingress_0_bits_egress_id;
wire            ar_egress_3_valid;
wire            ar_egress_3_bits_head;
wire            ar_egress_3_bits_tail;
wire [81:0]     ar_egress_3_bits_payload;
wire [1:0]      ar_egress_3_bits_ingress_id;
wire            ar_egress_2_valid;
wire            ar_egress_2_bits_head;
wire            ar_egress_2_bits_tail;
wire [81:0]     ar_egress_2_bits_payload;
wire [1:0]      ar_egress_2_bits_ingress_id;
wire            ar_egress_1_valid;
wire            ar_egress_1_bits_head;
wire            ar_egress_1_bits_tail;
wire [81:0]     ar_egress_1_bits_payload;
wire [1:0]      ar_egress_1_bits_ingress_id;
wire            ar_egress_0_valid;
wire            ar_egress_0_bits_head;
wire            ar_egress_0_bits_tail;
wire [81:0]     ar_egress_0_bits_payload;
wire [1:0]      ar_egress_0_bits_ingress_id;

wire            r_ingress_3_ready;
wire            r_ingress_3_valid;
wire            r_ingress_3_bits_head;
wire            r_ingress_3_bits_tail;
wire [81:0]     r_ingress_3_bits_payload;
wire [1:0]      r_ingress_3_bits_egress_id;
wire            r_ingress_2_ready;
wire            r_ingress_2_valid;
wire            r_ingress_2_bits_head;
wire            r_ingress_2_bits_tail;
wire [81:0]     r_ingress_2_bits_payload;
wire [1:0]      r_ingress_2_bits_egress_id;
wire            r_ingress_1_ready;
wire            r_ingress_1_valid;
wire            r_ingress_1_bits_head;
wire            r_ingress_1_bits_tail;
wire [81:0]     r_ingress_1_bits_payload;
wire [1:0]      r_ingress_1_bits_egress_id;
wire            r_ingress_0_ready;
wire            r_ingress_0_valid;
wire            r_ingress_0_bits_head;
wire            r_ingress_0_bits_tail;
wire [81:0]     r_ingress_0_bits_payload;
wire [1:0]      r_ingress_0_bits_egress_id;
wire            r_egress_3_valid;
wire            r_egress_3_bits_head;
wire            r_egress_3_bits_tail;
wire [81:0]     r_egress_3_bits_payload;
wire [1:0]      r_egress_3_bits_ingress_id;
wire            r_egress_2_valid;
wire            r_egress_2_bits_head;
wire            r_egress_2_bits_tail;
wire [81:0]     r_egress_2_bits_payload;
wire [1:0]      r_egress_2_bits_ingress_id;
wire            r_egress_1_valid;
wire            r_egress_1_bits_head;
wire            r_egress_1_bits_tail;
wire [81:0]     r_egress_1_bits_payload;
wire [1:0]      r_egress_1_bits_ingress_id;
wire            r_egress_0_valid;
wire            r_egress_0_bits_head;
wire            r_egress_0_bits_tail;
wire [81:0]     r_egress_0_bits_payload;
wire [1:0]      r_egress_0_bits_ingress_id;



// RN instantiate
RN_Wrapper u_rn0
(
    .clk            ( clock ),
    .rst            ( reset ),

    .aw_ready       ( aw_ingress_0_ready ),
    .aw_valid       ( aw_ingress_0_valid ),
    .aw_payload     ( aw_ingress_0_bits_payload ),
    .aw_tgtid       ( aw_ingress_0_bits_egress_id ),

    .w_ready        ( w_ingress_0_ready ),
    .w_valid        ( w_ingress_0_valid ),
    .w_head         ( w_ingress_0_bits_head ),
    .w_tail         ( w_ingress_0_bits_tail ),
    .w_payload      ( w_ingress_0_bits_payload ),
    .w_tgtid        ( w_ingress_0_bits_egress_id ),

    .b_ready        ( b_ingress_0_ready ),
    .b_valid        ( b_ingress_0_valid ),
    .b_payload      ( b_ingress_0_bits_payload ),
    .b_srcid        ( b_ingress_0_bits_egress_id ),

    .ar_ready       ( ar_ingress_0_ready ),
    .ar_valid       ( ar_ingress_0_valid ),
    .ar_payload     ( ar_ingress_0_bits_payload ),
    .ar_tgtid       ( ar_ingress_0_bits_egress_id ),

    .r_ready        ( r_ingress_0_ready ),
    .r_valid        ( r_ingress_0_valid ),
    .r_head         ( r_ingress_0_bits_head ),
    .r_tail         ( r_ingress_0_bits_tail ),
    .r_payload      ( r_ingress_0_bits_payload ),
    .r_srcid        ( r_ingress_0_bits_egress_id ),

    .AWREADY        ( rn0_AWREADY ),
    .AWVALID        ( rn0_AWVALID ),
    .AWID           ( rn0_AWID ),
    .AWADDR         ( rn0_AWADDR ),
    .AWREGION       ( rn0_AWREGION ),
    .AWLEN          ( rn0_AWLEN ),
    .AWSIZE         ( rn0_AWSIZE ),
    .AWBURST        ( rn0_AWBURST ),
    .AWLOCK         ( rn0_AWLOCK ),
    .AWCACHE        ( rn0_AWCACHE ),
    .AWPROT         ( rn0_AWPROT ),
    .AWQOS          ( rn0_AWQOS ),
    .AWUSER         ( rn0_AWUSER ),

    .WVALID         ( rn0_WVALID ),
    .WREADY         ( rn0_WREADY ),
    .WID            ( rn0_WID ),
    .WDATA          ( rn0_WDATA ),
    .WSTRB          ( rn0_WSTRB ),
    .WLAST          ( rn0_WLAST ),
    .WUSER          ( rn0_WUSER ),

    .BREADY         ( rn0_BREADY ),
    .BVALID         ( rn0_BVALID ),
    .BID            ( rn0_BID ),
    .BRESP          ( rn0_BRESP ),
    .BUSER          ( rn0_BUSER ),

    .ARREADY        ( rn0_ARREADY ),
    .ARVALID        ( rn0_ARVALID ),
    .ARID           ( rn0_ARID ),
    .ARADDR         ( rn0_ARADDR ),
    .ARREGION       ( rn0_ARREGION ),
    .ARLEN          ( rn0_ARLEN ),
    .ARSIZE         ( rn0_ARSIZE ),
    .ARBURST        ( rn0_ARBURST ),
    .ARLOCK         ( rn0_ARLOCK ),
    .ARCACHE        ( rn0_ARCACHE ),
    .ARPROT         ( rn0_ARPROT ),
    .ARQOS          ( rn0_ARQOS ),
    .ARUSER         ( rn0_ARUSER ),

    .RREADY         ( rn0_RREADY ),
    .RVALID         ( rn0_RVALID ),
    .RID            ( rn0_RID ),
    .RDATA          ( rn0_RDATA ),
    .RRESP          ( rn0_RRESP ),
    .RLAST          ( rn0_RLAST ),
    .RUSER          ( rn0_RUSER ) 
);

RN_Wrapper u_rn1
(
    .clk            ( clock ),
    .rst            ( reset ),

    .aw_ready       ( aw_ingress_1_ready ),
    .aw_valid       ( aw_ingress_1_valid ),
    .aw_payload     ( aw_ingress_1_bits_payload ),
    .aw_tgtid       ( aw_ingress_1_bits_egress_id ),

    .w_ready        ( w_ingress_1_ready ),
    .w_valid        ( w_ingress_1_valid ),
    .w_head         ( w_ingress_1_bits_head ),
    .w_tail         ( w_ingress_1_bits_tail ),
    .w_payload      ( w_ingress_1_bits_payload ),
    .w_tgtid        ( w_ingress_1_bits_egress_id ),

    .b_ready        ( b_ingress_1_ready ),
    .b_valid        ( b_ingress_1_valid ),
    .b_payload      ( b_ingress_1_bits_payload ),
    .b_srcid        ( b_ingress_1_bits_egress_id ),

    .ar_ready       ( ar_ingress_1_ready ),
    .ar_valid       ( ar_ingress_1_valid ),
    .ar_payload     ( ar_ingress_1_bits_payload ),
    .ar_tgtid       ( ar_ingress_1_bits_egress_id ),

    .r_ready        ( r_ingress_1_ready ),
    .r_valid        ( r_ingress_1_valid ),
    .r_head         ( r_ingress_1_bits_head ),
    .r_tail         ( r_ingress_1_bits_tail ),
    .r_payload      ( r_ingress_1_bits_payload ),
    .r_srcid        ( r_ingress_1_bits_egress_id ),

    .AWREADY        ( rn1_AWREADY ),
    .AWVALID        ( rn1_AWVALID ),
    .AWID           ( rn1_AWID ),
    .AWADDR         ( rn1_AWADDR ),
    .AWREGION       ( rn1_AWREGION ),
    .AWLEN          ( rn1_AWLEN ),
    .AWSIZE         ( rn1_AWSIZE ),
    .AWBURST        ( rn1_AWBURST ),
    .AWLOCK         ( rn1_AWLOCK ),
    .AWCACHE        ( rn1_AWCACHE ),
    .AWPROT         ( rn1_AWPROT ),
    .AWQOS          ( rn1_AWQOS ),
    .AWUSER         ( rn1_AWUSER ),

    .WVALID         ( rn1_WVALID ),
    .WREADY         ( rn1_WREADY ),
    .WID            ( rn1_WID ),
    .WDATA          ( rn1_WDATA ),
    .WSTRB          ( rn1_WSTRB ),
    .WLAST          ( rn1_WLAST ),
    .WUSER          ( rn1_WUSER ),

    .BREADY         ( rn1_BREADY ),
    .BVALID         ( rn1_BVALID ),
    .BID            ( rn1_BID ),
    .BRESP          ( rn1_BRESP ),
    .BUSER          ( rn1_BUSER ),

    .ARREADY        ( rn1_ARREADY ),
    .ARVALID        ( rn1_ARVALID ),
    .ARID           ( rn1_ARID ),
    .ARADDR         ( rn1_ARADDR ),
    .ARREGION       ( rn1_ARREGION ),
    .ARLEN          ( rn1_ARLEN ),
    .ARSIZE         ( rn1_ARSIZE ),
    .ARBURST        ( rn1_ARBURST ),
    .ARLOCK         ( rn1_ARLOCK ),
    .ARCACHE        ( rn1_ARCACHE ),
    .ARPROT         ( rn1_ARPROT ),
    .ARQOS          ( rn1_ARQOS ),
    .ARUSER         ( rn1_ARUSER ),

    .RREADY         ( rn1_RREADY ),
    .RVALID         ( rn1_RVALID ),
    .RID            ( rn1_RID ),
    .RDATA          ( rn1_RDATA ),
    .RRESP          ( rn1_RRESP ),
    .RLAST          ( rn1_RLAST ),
    .RUSER          ( rn1_RUSER ) 
);

RN_Wrapper u_rn2
(
    .clk            ( clock ),
    .rst            ( reset ),

    .aw_ready       ( aw_ingress_2_ready ),
    .aw_valid       ( aw_ingress_2_valid ),
    .aw_payload     ( aw_ingress_2_bits_payload ),
    .aw_tgtid       ( aw_ingress_2_bits_egress_id ),

    .w_ready        ( w_ingress_2_ready ),
    .w_valid        ( w_ingress_2_valid ),
    .w_head         ( w_ingress_2_bits_head ),
    .w_tail         ( w_ingress_2_bits_tail ),
    .w_payload      ( w_ingress_2_bits_payload ),
    .w_tgtid        ( w_ingress_2_bits_egress_id ),

    .b_ready        ( b_ingress_2_ready ),
    .b_valid        ( b_ingress_2_valid ),
    .b_payload      ( b_ingress_2_bits_payload ),
    .b_srcid        ( b_ingress_2_bits_egress_id ),

    .ar_ready       ( ar_ingress_2_ready ),
    .ar_valid       ( ar_ingress_2_valid ),
    .ar_payload     ( ar_ingress_2_bits_payload ),
    .ar_tgtid       ( ar_ingress_2_bits_egress_id ),

    .r_ready        ( r_ingress_2_ready ),
    .r_valid        ( r_ingress_2_valid ),
    .r_head         ( r_ingress_2_bits_head ),
    .r_tail         ( r_ingress_2_bits_tail ),
    .r_payload      ( r_ingress_2_bits_payload ),
    .r_srcid        ( r_ingress_2_bits_egress_id ),

    .AWREADY        ( rn2_AWREADY ),
    .AWVALID        ( rn2_AWVALID ),
    .AWID           ( rn2_AWID ),
    .AWADDR         ( rn2_AWADDR ),
    .AWREGION       ( rn2_AWREGION ),
    .AWLEN          ( rn2_AWLEN ),
    .AWSIZE         ( rn2_AWSIZE ),
    .AWBURST        ( rn2_AWBURST ),
    .AWLOCK         ( rn2_AWLOCK ),
    .AWCACHE        ( rn2_AWCACHE ),
    .AWPROT         ( rn2_AWPROT ),
    .AWQOS          ( rn2_AWQOS ),
    .AWUSER         ( rn2_AWUSER ),

    .WVALID         ( rn2_WVALID ),
    .WREADY         ( rn2_WREADY ),
    .WID            ( rn2_WID ),
    .WDATA          ( rn2_WDATA ),
    .WSTRB          ( rn2_WSTRB ),
    .WLAST          ( rn2_WLAST ),
    .WUSER          ( rn2_WUSER ),

    .BREADY         ( rn2_BREADY ),
    .BVALID         ( rn2_BVALID ),
    .BID            ( rn2_BID ),
    .BRESP          ( rn2_BRESP ),
    .BUSER          ( rn2_BUSER ),

    .ARREADY        ( rn2_ARREADY ),
    .ARVALID        ( rn2_ARVALID ),
    .ARID           ( rn2_ARID ),
    .ARADDR         ( rn2_ARADDR ),
    .ARREGION       ( rn2_ARREGION ),
    .ARLEN          ( rn2_ARLEN ),
    .ARSIZE         ( rn2_ARSIZE ),
    .ARBURST        ( rn2_ARBURST ),
    .ARLOCK         ( rn2_ARLOCK ),
    .ARCACHE        ( rn2_ARCACHE ),
    .ARPROT         ( rn2_ARPROT ),
    .ARQOS          ( rn2_ARQOS ),
    .ARUSER         ( rn2_ARUSER ),

    .RREADY         ( rn2_RREADY ),
    .RVALID         ( rn2_RVALID ),
    .RID            ( rn2_RID ),
    .RDATA          ( rn2_RDATA ),
    .RRESP          ( rn2_RRESP ),
    .RLAST          ( rn2_RLAST ),
    .RUSER          ( rn2_RUSER ) 
);

RN_Wrapper u_rn3
(
    .clk            ( clock ),
    .rst            ( reset ),

    .aw_ready       ( aw_ingress_3_ready ),
    .aw_valid       ( aw_ingress_3_valid ),
    .aw_payload     ( aw_ingress_3_bits_payload ),
    .aw_tgtid       ( aw_ingress_3_bits_egress_id ),

    .w_ready        ( w_ingress_3_ready ),
    .w_valid        ( w_ingress_3_valid ),
    .w_head         ( w_ingress_3_bits_head ),
    .w_tail         ( w_ingress_3_bits_tail ),
    .w_payload      ( w_ingress_3_bits_payload ),
    .w_tgtid        ( w_ingress_3_bits_egress_id ),

    .b_ready        ( b_ingress_3_ready ),
    .b_valid        ( b_ingress_3_valid ),
    .b_payload      ( b_ingress_3_bits_payload ),
    .b_srcid        ( b_ingress_3_bits_egress_id ),

    .ar_ready       ( ar_ingress_3_ready ),
    .ar_valid       ( ar_ingress_3_valid ),
    .ar_payload     ( ar_ingress_3_bits_payload ),
    .ar_tgtid       ( ar_ingress_3_bits_egress_id ),

    .r_ready        ( r_ingress_3_ready ),
    .r_valid        ( r_ingress_3_valid ),
    .r_head         ( r_ingress_3_bits_head ),
    .r_tail         ( r_ingress_3_bits_tail ),
    .r_payload      ( r_ingress_3_bits_payload ),
    .r_srcid        ( r_ingress_3_bits_egress_id ),

    .AWREADY        ( rn3_AWREADY ),
    .AWVALID        ( rn3_AWVALID ),
    .AWID           ( rn3_AWID ),
    .AWADDR         ( rn3_AWADDR ),
    .AWREGION       ( rn3_AWREGION ),
    .AWLEN          ( rn3_AWLEN ),
    .AWSIZE         ( rn3_AWSIZE ),
    .AWBURST        ( rn3_AWBURST ),
    .AWLOCK         ( rn3_AWLOCK ),
    .AWCACHE        ( rn3_AWCACHE ),
    .AWPROT         ( rn3_AWPROT ),
    .AWQOS          ( rn3_AWQOS ),
    .AWUSER         ( rn3_AWUSER ),

    .WVALID         ( rn3_WVALID ),
    .WREADY         ( rn3_WREADY ),
    .WID            ( rn3_WID ),
    .WDATA          ( rn3_WDATA ),
    .WSTRB          ( rn3_WSTRB ),
    .WLAST          ( rn3_WLAST ),
    .WUSER          ( rn3_WUSER ),

    .BREADY         ( rn3_BREADY ),
    .BVALID         ( rn3_BVALID ),
    .BID            ( rn3_BID ),
    .BRESP          ( rn3_BRESP ),
    .BUSER          ( rn3_BUSER ),

    .ARREADY        ( rn3_ARREADY ),
    .ARVALID        ( rn3_ARVALID ),
    .ARID           ( rn3_ARID ),
    .ARADDR         ( rn3_ARADDR ),
    .ARREGION       ( rn3_ARREGION ),
    .ARLEN          ( rn3_ARLEN ),
    .ARSIZE         ( rn3_ARSIZE ),
    .ARBURST        ( rn3_ARBURST ),
    .ARLOCK         ( rn3_ARLOCK ),
    .ARCACHE        ( rn3_ARCACHE ),
    .ARPROT         ( rn3_ARPROT ),
    .ARQOS          ( rn3_ARQOS ),
    .ARUSER         ( rn3_ARUSER ),

    .RREADY         ( rn3_RREADY ),
    .RVALID         ( rn3_RVALID ),
    .RID            ( rn3_RID ),
    .RDATA          ( rn3_RDATA ),
    .RRESP          ( rn3_RRESP ),
    .RLAST          ( rn3_RLAST ),
    .RUSER          ( rn3_RUSER ) 
);

// SN instantiate
SN_Wrapper u_sn0(
    .clk            ( clock ),
    .rst            ( reset ),
  
    .aw_ready       ( aw_egress_0_ready ),
    .aw_valid       ( aw_egress_0_valid ),
    .aw_payload     ( aw_egress_0_bits_payload ),
    .aw_srcid       ( aw_egress_0_bits_ingress_id ),
  
    .w_ready        ( w_egress_0_ready ),
    .w_valid        ( w_egress_0_valid ),
    .w_head         ( w_egress_0_bits_head ),
    .w_tail         ( w_egress_0_bits_tail ),
    .w_payload      ( w_egress_0_bits_payload ),
    .w_srcid        ( w_egress_0_bits_ingress_id ),
  
    .b_ready        ( b_egress_0_ready ),
    .b_valid        ( b_egress_0_valid ),
    .b_payload      ( b_egress_0_bits_payload ),
    .b_tgtid        ( b_egress_0_bits_ingress_id ),
  
    .ar_ready       ( ar_egress_0_ready ),
    .ar_valid       ( ar_egress_0_valid ),
    .ar_payload     ( ar_egress_0_bits_payload ),
    .ar_srcid       ( ar_egress_0_bits_ingress_id ),
  
    .r_ready        ( r_egress_0_ready ),
    .r_valid        ( r_egress_0_valid ),
    .r_head         ( r_egress_0_bits_head ),
    .r_tail         ( r_egress_0_bits_tail ),
    .r_payload      ( r_egress_0_bits_payload ),
    .r_tgtid        ( r_egress_0_bits_ingress_id ),

    .AWVALID        ( sn0_AWVALID ),
    .AWREADY        ( sn0_AWREADY ),
    .AWID           ( sn0_AWID ),
    .AWADDR         ( sn0_AWADDR ),
    .AWREGION       ( sn0_AWREGION ),
    .AWLEN          ( sn0_AWLEN ),
    .AWSIZE         ( sn0_AWSIZE ),
    .AWBURST        ( sn0_AWBURST ),
    .AWLOCK         ( sn0_AWLOCK ),
    .AWCACHE        ( sn0_AWCACHE ),
    .AWPROT         ( sn0_AWPROT ),
    .AWQOS          ( sn0_AWQOS ),

    .WVALID         ( sn0_WVALID ),
    .WREADY         ( sn0_WREADY ),
    .WDATA          ( sn0_WDATA ),
    .WSTRB          ( sn0_WSTRB ),
    .WLAST          ( sn0_WLAST ),

    .BVALID         ( sn0_BVALID ),
    .BREADY         ( sn0_BREADY ),
    .BRESP          ( sn0_BRESP ),
    .BID            ( sn0_BID ),

    .ARVALID        ( sn0_ARVALID ),
    .ARREADY        ( sn0_ARREADY ),
    .ARID           ( sn0_ARID ),
    .ARADDR         ( sn0_ARADDR ),
    .ARREGION       ( sn0_ARREGION ),
    .ARLEN          ( sn0_ARLEN ),
    .ARSIZE         ( sn0_ARSIZE ),
    .ARBURST        ( sn0_ARBURST ),
    .ARLOCK         ( sn0_ARLOCK ),
    .ARCACHE        ( sn0_ARCACHE ),
    .ARPROT         ( sn0_ARPROT ),
    .ARQOS          ( sn0_ARQOS ),

    .RVALID         ( sn0_RVALID ),
    .RREADY         ( sn0_RREADY ),
    .RID            ( sn0_RID ),
    .RDATA          ( sn0_RDATA ),
    .RRESP          ( sn0_RRESP ),
    .RLAST          ( sn0_RLAST )
);

SN_Wrapper u_sn1(
    .clk            ( clock ),
    .rst            ( reset ),
  
    .aw_ready       ( aw_egress_1_ready ),
    .aw_valid       ( aw_egress_1_valid ),
    .aw_payload     ( aw_egress_1_bits_payload ),
    .aw_srcid       ( aw_egress_1_bits_ingress_id ),
  
    .w_ready        ( w_egress_1_ready ),
    .w_valid        ( w_egress_1_valid ),
    .w_head         ( w_egress_1_bits_head ),
    .w_tail         ( w_egress_1_bits_tail ),
    .w_payload      ( w_egress_1_bits_payload ),
    .w_srcid        ( w_egress_1_bits_ingress_id ),
  
    .b_ready        ( b_egress_1_ready ),
    .b_valid        ( b_egress_1_valid ),
    .b_payload      ( b_egress_1_bits_payload ),
    .b_tgtid        ( b_egress_1_bits_ingress_id ),
  
    .ar_ready       ( ar_egress_1_ready ),
    .ar_valid       ( ar_egress_1_valid ),
    .ar_payload     ( ar_egress_1_bits_payload ),
    .ar_srcid       ( ar_egress_1_bits_ingress_id ),
  
    .r_ready        ( r_egress_1_ready ),
    .r_valid        ( r_egress_1_valid ),
    .r_head         ( r_egress_1_bits_head ),
    .r_tail         ( r_egress_1_bits_tail ),
    .r_payload      ( r_egress_1_bits_payload ),
    .r_tgtid        ( r_egress_1_bits_ingress_id ),

    .AWVALID        ( sn1_AWVALID ),
    .AWREADY        ( sn1_AWREADY ),
    .AWID           ( sn1_AWID ),
    .AWADDR         ( sn1_AWADDR ),
    .AWREGION       ( sn1_AWREGION ),
    .AWLEN          ( sn1_AWLEN ),
    .AWSIZE         ( sn1_AWSIZE ),
    .AWBURST        ( sn1_AWBURST ),
    .AWLOCK         ( sn1_AWLOCK ),
    .AWCACHE        ( sn1_AWCACHE ),
    .AWPROT         ( sn1_AWPROT ),
    .AWQOS          ( sn1_AWQOS ),

    .WVALID         ( sn1_WVALID ),
    .WREADY         ( sn1_WREADY ),
    .WDATA          ( sn1_WDATA ),
    .WSTRB          ( sn1_WSTRB ),
    .WLAST          ( sn1_WLAST ),

    .BVALID         ( sn1_BVALID ),
    .BREADY         ( sn1_BREADY ),
    .BRESP          ( sn1_BRESP ),
    .BID            ( sn1_BID ),

    .ARVALID        ( sn1_ARVALID ),
    .ARREADY        ( sn1_ARREADY ),
    .ARID           ( sn1_ARID ),
    .ARADDR         ( sn1_ARADDR ),
    .ARREGION       ( sn1_ARREGION ),
    .ARLEN          ( sn1_ARLEN ),
    .ARSIZE         ( sn1_ARSIZE ),
    .ARBURST        ( sn1_ARBURST ),
    .ARLOCK         ( sn1_ARLOCK ),
    .ARCACHE        ( sn1_ARCACHE ),
    .ARPROT         ( sn1_ARPROT ),
    .ARQOS          ( sn1_ARQOS ),

    .RVALID         ( sn1_RVALID ),
    .RREADY         ( sn1_RREADY ),
    .RID            ( sn1_RID ),
    .RDATA          ( sn1_RDATA ),
    .RRESP          ( sn1_RRESP ),
    .RLAST          ( sn1_RLAST )
);

SN_Wrapper u_sn2(
    .clk            ( clock ),
    .rst            ( reset ),
  
    .aw_ready       ( aw_egress_2_ready ),
    .aw_valid       ( aw_egress_2_valid ),
    .aw_payload     ( aw_egress_2_bits_payload ),
    .aw_srcid       ( aw_egress_2_bits_ingress_id ),
  
    .w_ready        ( w_egress_2_ready ),
    .w_valid        ( w_egress_2_valid ),
    .w_head         ( w_egress_2_bits_head ),
    .w_tail         ( w_egress_2_bits_tail ),
    .w_payload      ( w_egress_2_bits_payload ),
    .w_srcid        ( w_egress_2_bits_ingress_id ),
  
    .b_ready        ( b_egress_2_ready ),
    .b_valid        ( b_egress_2_valid ),
    .b_payload      ( b_egress_2_bits_payload ),
    .b_tgtid        ( b_egress_2_bits_ingress_id ),
  
    .ar_ready       ( ar_egress_2_ready ),
    .ar_valid       ( ar_egress_2_valid ),
    .ar_payload     ( ar_egress_2_bits_payload ),
    .ar_srcid       ( ar_egress_2_bits_ingress_id ),
  
    .r_ready        ( r_egress_2_ready ),
    .r_valid        ( r_egress_2_valid ),
    .r_head         ( r_egress_2_bits_head ),
    .r_tail         ( r_egress_2_bits_tail ),
    .r_payload      ( r_egress_2_bits_payload ),
    .r_tgtid        ( r_egress_2_bits_ingress_id ),

    .AWVALID        ( sn2_AWVALID ),
    .AWREADY        ( sn2_AWREADY ),
    .AWID           ( sn2_AWID ),
    .AWADDR         ( sn2_AWADDR ),
    .AWREGION       ( sn2_AWREGION ),
    .AWLEN          ( sn2_AWLEN ),
    .AWSIZE         ( sn2_AWSIZE ),
    .AWBURST        ( sn2_AWBURST ),
    .AWLOCK         ( sn2_AWLOCK ),
    .AWCACHE        ( sn2_AWCACHE ),
    .AWPROT         ( sn2_AWPROT ),
    .AWQOS          ( sn2_AWQOS ),

    .WVALID         ( sn2_WVALID ),
    .WREADY         ( sn2_WREADY ),
    .WDATA          ( sn2_WDATA ),
    .WSTRB          ( sn2_WSTRB ),
    .WLAST          ( sn2_WLAST ),

    .BVALID         ( sn2_BVALID ),
    .BREADY         ( sn2_BREADY ),
    .BRESP          ( sn2_BRESP ),
    .BID            ( sn2_BID ),

    .ARVALID        ( sn2_ARVALID ),
    .ARREADY        ( sn2_ARREADY ),
    .ARID           ( sn2_ARID ),
    .ARADDR         ( sn2_ARADDR ),
    .ARREGION       ( sn2_ARREGION ),
    .ARLEN          ( sn2_ARLEN ),
    .ARSIZE         ( sn2_ARSIZE ),
    .ARBURST        ( sn2_ARBURST ),
    .ARLOCK         ( sn2_ARLOCK ),
    .ARCACHE        ( sn2_ARCACHE ),
    .ARPROT         ( sn2_ARPROT ),
    .ARQOS          ( sn2_ARQOS ),

    .RVALID         ( sn2_RVALID ),
    .RREADY         ( sn2_RREADY ),
    .RID            ( sn2_RID ),
    .RDATA          ( sn2_RDATA ),
    .RRESP          ( sn2_RRESP ),
    .RLAST          ( sn2_RLAST )
);

SN_Wrapper u_sn3(
    .clk            ( clock ),
    .rst            ( reset ),
  
    .aw_ready       ( aw_egress_3_ready ),
    .aw_valid       ( aw_egress_3_valid ),
    .aw_payload     ( aw_egress_3_bits_payload ),
    .aw_srcid       ( aw_egress_3_bits_ingress_id ),
  
    .w_ready        ( w_egress_3_ready ),
    .w_valid        ( w_egress_3_valid ),
    .w_head         ( w_egress_3_bits_head ),
    .w_tail         ( w_egress_3_bits_tail ),
    .w_payload      ( w_egress_3_bits_payload ),
    .w_srcid        ( w_egress_3_bits_ingress_id ),
  
    .b_ready        ( b_egress_3_ready ),
    .b_valid        ( b_egress_3_valid ),
    .b_payload      ( b_egress_3_bits_payload ),
    .b_tgtid        ( b_egress_3_bits_ingress_id ),
  
    .ar_ready       ( ar_egress_3_ready ),
    .ar_valid       ( ar_egress_3_valid ),
    .ar_payload     ( ar_egress_3_bits_payload ),
    .ar_srcid       ( ar_egress_3_bits_ingress_id ),
  
    .r_ready        ( r_egress_3_ready ),
    .r_valid        ( r_egress_3_valid ),
    .r_head         ( r_egress_3_bits_head ),
    .r_tail         ( r_egress_3_bits_tail ),
    .r_payload      ( r_egress_3_bits_payload ),
    .r_tgtid        ( r_egress_3_bits_ingress_id ),

    .AWVALID        ( sn3_AWVALID ),
    .AWREADY        ( sn3_AWREADY ),
    .AWID           ( sn3_AWID ),
    .AWADDR         ( sn3_AWADDR ),
    .AWREGION       ( sn3_AWREGION ),
    .AWLEN          ( sn3_AWLEN ),
    .AWSIZE         ( sn3_AWSIZE ),
    .AWBURST        ( sn3_AWBURST ),
    .AWLOCK         ( sn3_AWLOCK ),
    .AWCACHE        ( sn3_AWCACHE ),
    .AWPROT         ( sn3_AWPROT ),
    .AWQOS          ( sn3_AWQOS ),

    .WVALID         ( sn3_WVALID ),
    .WREADY         ( sn3_WREADY ),
    .WDATA          ( sn3_WDATA ),
    .WSTRB          ( sn3_WSTRB ),
    .WLAST          ( sn3_WLAST ),

    .BVALID         ( sn3_BVALID ),
    .BREADY         ( sn3_BREADY ),
    .BRESP          ( sn3_BRESP ),
    .BID            ( sn3_BID ),

    .ARVALID        ( sn3_ARVALID ),
    .ARREADY        ( sn3_ARREADY ),
    .ARID           ( sn3_ARID ),
    .ARADDR         ( sn3_ARADDR ),
    .ARREGION       ( sn3_ARREGION ),
    .ARLEN          ( sn3_ARLEN ),
    .ARSIZE         ( sn3_ARSIZE ),
    .ARBURST        ( sn3_ARBURST ),
    .ARLOCK         ( sn3_ARLOCK ),
    .ARCACHE        ( sn3_ARCACHE ),
    .ARPROT         ( sn3_ARPROT ),
    .ARQOS          ( sn3_ARQOS ),

    .RVALID         ( sn3_RVALID ),
    .RREADY         ( sn3_RREADY ),
    .RID            ( sn3_RID ),
    .RDATA          ( sn3_RDATA ),
    .RRESP          ( sn3_RRESP ),
    .RLAST          ( sn3_RLAST )
);



// NoC instantiate
NoC_top #(
    .param
) u_noc_top
(
    .clock                              ( clock ),
    .reset                              ( reset ),

    .aw_ingress_0_flit_ready            ( aw_ingress_0_ready ),
    .aw_ingress_0_flit_valid            ( aw_ingress_0_valid ),
    .aw_ingress_0_flit_bits_head        ( 1'b1 ),
    .aw_ingress_0_flit_bits_tail        ( 1'b1 ),
    .aw_ingress_0_flit_bits_payload     ( aw_ingress_0_bits_payload ),
    .aw_ingress_0_flit_bits_egress_id   ( aw_ingress_0_bits_egress_id ),
    .aw_egress_0_flit_valid             ( aw_egress_0_valid ),
    .aw_egress_0_flit_bits_head         ( aw_egress_0_bits_head ),
    .aw_egress_0_flit_bits_tail         ( aw_egress_0_bits_tail ),
    .aw_egress_0_flit_bits_payload      ( aw_egress_0_bits_payload ),
    .aw_egress_0_flit_bits_ingress_id   ( aw_egress_0_bits_ingress_id ),
    .w_ingress_0_flit_ready             ( w_ingress_0_ready ),
    .w_ingress_0_flit_valid             ( w_ingress_0_valid ),
    .w_ingress_0_flit_bits_head         ( w_ingress_0_bits_head ),
    .w_ingress_0_flit_bits_tail         ( w_ingress_0_bits_tail ),
    .w_ingress_0_flit_bits_payload      ( w_ingress_0_bits_payload ),
    .w_ingress_0_flit_bits_egress_id    ( w_ingress_0_bits_egress_id ),
    .w_egress_0_flit_valid              ( w_egress_0_valid ),
    .w_egress_0_flit_bits_head          ( w_egress_0_bits_head ),
    .w_egress_0_flit_bits_tail          ( w_egress_0_bits_tail ),
    .w_egress_0_flit_bits_payload       ( w_egress_0_bits_payload ),
    .w_egress_0_flit_bits_ingress_id    ( w_egress_0_bits_ingress_id ),
    .b_ingress_0_flit_ready             ( b_ingress_0_ready ),
    .b_ingress_0_flit_valid             ( b_ingress_0_valid ),
    .b_ingress_0_flit_bits_head         ( 1'b1 ),
    .b_ingress_0_flit_bits_tail         ( 1'b1 ),
    .b_ingress_0_flit_bits_payload      ( b_ingress_0_bits_payload ),
    .b_ingress_0_flit_bits_egress_id    ( b_ingress_0_bits_egress_id ),
    .b_egress_0_flit_valid              ( b_egress_0_valid ),
    .b_egress_0_flit_bits_head          ( b_egress_0_bits_head ),
    .b_egress_0_flit_bits_tail          ( b_egress_0_bits_tail ),
    .b_egress_0_flit_bits_payload       ( b_egress_0_bits_payload ),
    .b_egress_0_flit_bits_ingress_id    ( b_egress_0_bits_ingress_id ),
    .ar_ingress_0_flit_ready            ( ar_ingress_0_ready ),
    .ar_ingress_0_flit_valid            ( ar_ingress_0_valid ),
    .ar_ingress_0_flit_bits_head        ( 1'b1 ),
    .ar_ingress_0_flit_bits_tail        ( 1'b1 ),
    .ar_ingress_0_flit_bits_payload     ( ar_ingress_0_bits_payload ),
    .ar_ingress_0_flit_bits_egress_id   ( ar_ingress_0_bits_egress_id ),
    .ar_egress_0_flit_valid             ( ar_egress_0_valid ),
    .ar_egress_0_flit_bits_head         ( ar_egress_0_bits_head ),
    .ar_egress_0_flit_bits_tail         ( ar_egress_0_bits_tail ),
    .ar_egress_0_flit_bits_payload      ( ar_egress_0_bits_payload ),
    .ar_egress_0_flit_bits_ingress_id   ( ar_egress_0_bits_ingress_id ),
    .r_ingress_0_flit_ready             ( r_ingress_0_ready ),
    .r_ingress_0_flit_valid             ( r_ingress_0_valid ),
    .r_ingress_0_flit_bits_head         ( r_ingress_0_bits_head ),
    .r_ingress_0_flit_bits_tail         ( r_ingress_0_bits_tail ),
    .r_ingress_0_flit_bits_payload      ( r_ingress_0_bits_payload ),
    .r_ingress_0_flit_bits_egress_id    ( r_ingress_0_bits_egress_id ),
    .r_egress_0_flit_valid              ( r_egress_0_valid ),
    .r_egress_0_flit_bits_head          ( r_egress_0_bits_head ),
    .r_egress_0_flit_bits_tail          ( r_egress_0_bits_tail ),
    .r_egress_0_flit_bits_payload       ( r_egress_0_bits_payload ),
    .r_egress_0_flit_bits_ingress_id    ( r_egress_0_bits_ingress_id ),
    
    .aw_ingress_1_flit_ready            ( aw_ingress_1_ready ),
    .aw_ingress_1_flit_valid            ( aw_ingress_1_valid ),
    .aw_ingress_1_flit_bits_head        ( 1'b1 ),
    .aw_ingress_1_flit_bits_tail        ( 1'b1 ),
    .aw_ingress_1_flit_bits_payload     ( aw_ingress_1_bits_payload ),
    .aw_ingress_1_flit_bits_egress_id   ( aw_ingress_1_bits_egress_id ),
    .aw_egress_1_flit_valid             ( aw_egress_1_valid ),
    .aw_egress_1_flit_bits_head         ( aw_egress_1_bits_head ),
    .aw_egress_1_flit_bits_tail         ( aw_egress_1_bits_tail ),
    .aw_egress_1_flit_bits_payload      ( aw_egress_1_bits_payload ),
    .aw_egress_1_flit_bits_ingress_id   ( aw_egress_1_bits_ingress_id ),
    .w_ingress_1_flit_ready             ( w_ingress_1_ready ),
    .w_ingress_1_flit_valid             ( w_ingress_1_valid ),
    .w_ingress_1_flit_bits_head         ( w_ingress_1_bits_head ),
    .w_ingress_1_flit_bits_tail         ( w_ingress_1_bits_tail ),
    .w_ingress_1_flit_bits_payload      ( w_ingress_1_bits_payload ),
    .w_ingress_1_flit_bits_egress_id    ( w_ingress_1_bits_egress_id ),
    .w_egress_1_flit_valid              ( w_egress_1_valid ),
    .w_egress_1_flit_bits_head          ( w_egress_1_bits_head ),
    .w_egress_1_flit_bits_tail          ( w_egress_1_bits_tail ),
    .w_egress_1_flit_bits_payload       ( w_egress_1_bits_payload ),
    .w_egress_1_flit_bits_ingress_id    ( w_egress_1_bits_ingress_id ),
    .b_ingress_1_flit_ready             ( b_ingress_1_ready ),
    .b_ingress_1_flit_valid             ( b_ingress_1_valid ),
    .b_ingress_1_flit_bits_head         ( 1'b1 ),
    .b_ingress_1_flit_bits_tail         ( 1'b1 ),
    .b_ingress_1_flit_bits_payload      ( b_ingress_1_bits_payload ),
    .b_ingress_1_flit_bits_egress_id    ( b_ingress_1_bits_egress_id ),
    .b_egress_1_flit_valid              ( b_egress_1_valid ),
    .b_egress_1_flit_bits_head          ( b_egress_1_bits_head ),
    .b_egress_1_flit_bits_tail          ( b_egress_1_bits_tail ),
    .b_egress_1_flit_bits_payload       ( b_egress_1_bits_payload ),
    .b_egress_1_flit_bits_ingress_id    ( b_egress_1_bits_ingress_id ),
    .ar_ingress_1_flit_ready            ( ar_ingress_1_ready ),
    .ar_ingress_1_flit_valid            ( ar_ingress_1_valid ),
    .ar_ingress_1_flit_bits_head        ( 1'b1 ),
    .ar_ingress_1_flit_bits_tail        ( 1'b1 ),
    .ar_ingress_1_flit_bits_payload     ( ar_ingress_1_bits_payload ),
    .ar_ingress_1_flit_bits_egress_id   ( ar_ingress_1_bits_egress_id ),
    .ar_egress_1_flit_valid             ( ar_egress_1_valid ),
    .ar_egress_1_flit_bits_head         ( ar_egress_1_bits_head ),
    .ar_egress_1_flit_bits_tail         ( ar_egress_1_bits_tail ),
    .ar_egress_1_flit_bits_payload      ( ar_egress_1_bits_payload ),
    .ar_egress_1_flit_bits_ingress_id   ( ar_egress_1_bits_ingress_id ),
    .r_ingress_1_flit_ready             ( r_ingress_1_ready ),
    .r_ingress_1_flit_valid             ( r_ingress_1_valid ),
    .r_ingress_1_flit_bits_head         ( r_ingress_1_bits_head ),
    .r_ingress_1_flit_bits_tail         ( r_ingress_1_bits_tail ),
    .r_ingress_1_flit_bits_payload      ( r_ingress_1_bits_payload ),
    .r_ingress_1_flit_bits_egress_id    ( r_ingress_1_bits_egress_id ),
    .r_egress_1_flit_valid              ( r_egress_1_valid ),
    .r_egress_1_flit_bits_head          ( r_egress_1_bits_head ),
    .r_egress_1_flit_bits_tail          ( r_egress_1_bits_tail ),
    .r_egress_1_flit_bits_payload       ( r_egress_1_bits_payload ),
    .r_egress_1_flit_bits_ingress_id    ( r_egress_1_bits_ingress_id ),

    .aw_ingress_2_flit_ready            ( aw_ingress_2_ready ),
    .aw_ingress_2_flit_valid            ( aw_ingress_2_valid ),
    .aw_ingress_2_flit_bits_head        ( 1'b1 ),
    .aw_ingress_2_flit_bits_tail        ( 1'b1 ),
    .aw_ingress_2_flit_bits_payload     ( aw_ingress_2_bits_payload ),
    .aw_ingress_2_flit_bits_egress_id   ( aw_ingress_2_bits_egress_id ),
    .aw_egress_2_flit_valid             ( aw_egress_2_valid ),
    .aw_egress_2_flit_bits_head         ( aw_egress_2_bits_head ),
    .aw_egress_2_flit_bits_tail         ( aw_egress_2_bits_tail ),
    .aw_egress_2_flit_bits_payload      ( aw_egress_2_bits_payload ),
    .aw_egress_2_flit_bits_ingress_id   ( aw_egress_2_bits_ingress_id ),
    .w_ingress_2_flit_ready             ( w_ingress_2_ready ),
    .w_ingress_2_flit_valid             ( w_ingress_2_valid ),
    .w_ingress_2_flit_bits_head         ( w_ingress_2_bits_head ),
    .w_ingress_2_flit_bits_tail         ( w_ingress_2_bits_tail ),
    .w_ingress_2_flit_bits_payload      ( w_ingress_2_bits_payload ),
    .w_ingress_2_flit_bits_egress_id    ( w_ingress_2_bits_egress_id ),
    .w_egress_2_flit_valid              ( w_egress_2_valid ),
    .w_egress_2_flit_bits_head          ( w_egress_2_bits_head ),
    .w_egress_2_flit_bits_tail          ( w_egress_2_bits_tail ),
    .w_egress_2_flit_bits_payload       ( w_egress_2_bits_payload ),
    .w_egress_2_flit_bits_ingress_id    ( w_egress_2_bits_ingress_id ),
    .b_ingress_2_flit_ready             ( b_ingress_2_ready ),
    .b_ingress_2_flit_valid             ( b_ingress_2_valid ),
    .b_ingress_2_flit_bits_head         ( 1'b1 ),
    .b_ingress_2_flit_bits_tail         ( 1'b1 ),
    .b_ingress_2_flit_bits_payload      ( b_ingress_2_bits_payload ),
    .b_ingress_2_flit_bits_egress_id    ( b_ingress_2_bits_egress_id ),
    .b_egress_2_flit_valid              ( b_egress_2_valid ),
    .b_egress_2_flit_bits_head          ( b_egress_2_bits_head ),
    .b_egress_2_flit_bits_tail          ( b_egress_2_bits_tail ),
    .b_egress_2_flit_bits_payload       ( b_egress_2_bits_payload ),
    .b_egress_2_flit_bits_ingress_id    ( b_egress_2_bits_ingress_id ),
    .ar_ingress_2_flit_ready            ( ar_ingress_2_ready ),
    .ar_ingress_2_flit_valid            ( ar_ingress_2_valid ),
    .ar_ingress_2_flit_bits_head        ( 1'b1 ),
    .ar_ingress_2_flit_bits_tail        ( 1'b1 ),
    .ar_ingress_2_flit_bits_payload     ( ar_ingress_2_bits_payload ),
    .ar_ingress_2_flit_bits_egress_id   ( ar_ingress_2_bits_egress_id ),
    .ar_egress_2_flit_valid             ( ar_egress_2_valid ),
    .ar_egress_2_flit_bits_head         ( ar_egress_2_bits_head ),
    .ar_egress_2_flit_bits_tail         ( ar_egress_2_bits_tail ),
    .ar_egress_2_flit_bits_payload      ( ar_egress_2_bits_payload ),
    .ar_egress_2_flit_bits_ingress_id   ( ar_egress_2_bits_ingress_id ),
    .r_ingress_2_flit_ready             ( r_ingress_2_ready ),
    .r_ingress_2_flit_valid             ( r_ingress_2_valid ),
    .r_ingress_2_flit_bits_head         ( r_ingress_2_bits_head ),
    .r_ingress_2_flit_bits_tail         ( r_ingress_2_bits_tail ),
    .r_ingress_2_flit_bits_payload      ( r_ingress_2_bits_payload ),
    .r_ingress_2_flit_bits_egress_id    ( r_ingress_2_bits_egress_id ),
    .r_egress_2_flit_valid              ( r_egress_2_valid ),
    .r_egress_2_flit_bits_head          ( r_egress_2_bits_head ),
    .r_egress_2_flit_bits_tail          ( r_egress_2_bits_tail ),
    .r_egress_2_flit_bits_payload       ( r_egress_2_bits_payload ),
    .r_egress_2_flit_bits_ingress_id    ( r_egress_2_bits_ingress_id ),

    .aw_ingress_3_flit_ready            ( aw_ingress_3_ready ),
    .aw_ingress_3_flit_valid            ( aw_ingress_3_valid ),
    .aw_ingress_3_flit_bits_head        ( 1'b1 ),
    .aw_ingress_3_flit_bits_tail        ( 1'b1 ),
    .aw_ingress_3_flit_bits_payload     ( aw_ingress_3_bits_payload ),
    .aw_ingress_3_flit_bits_egress_id   ( aw_ingress_3_bits_egress_id ),
    .aw_egress_3_flit_valid             ( aw_egress_3_valid ),
    .aw_egress_3_flit_bits_head         ( aw_egress_3_bits_head ),
    .aw_egress_3_flit_bits_tail         ( aw_egress_3_bits_tail ),
    .aw_egress_3_flit_bits_payload      ( aw_egress_3_bits_payload ),
    .aw_egress_3_flit_bits_ingress_id   ( aw_egress_3_bits_ingress_id ),
    .w_ingress_3_flit_ready             ( w_ingress_3_ready ),
    .w_ingress_3_flit_valid             ( w_ingress_3_valid ),
    .w_ingress_3_flit_bits_head         ( w_ingress_3_bits_head ),
    .w_ingress_3_flit_bits_tail         ( w_ingress_3_bits_tail ),
    .w_ingress_3_flit_bits_payload      ( w_ingress_3_bits_payload ),
    .w_ingress_3_flit_bits_egress_id    ( w_ingress_3_bits_egress_id ),
    .w_egress_3_flit_valid              ( w_egress_3_valid ),
    .w_egress_3_flit_bits_head          ( w_egress_3_bits_head ),
    .w_egress_3_flit_bits_tail          ( w_egress_3_bits_tail ),
    .w_egress_3_flit_bits_payload       ( w_egress_3_bits_payload ),
    .w_egress_3_flit_bits_ingress_id    ( w_egress_3_bits_ingress_id ),
    .b_ingress_3_flit_ready             ( b_ingress_3_ready ),
    .b_ingress_3_flit_valid             ( b_ingress_3_valid ),
    .b_ingress_3_flit_bits_head         ( 1'b1 ),
    .b_ingress_3_flit_bits_tail         ( 1'b1 ),
    .b_ingress_3_flit_bits_payload      ( b_ingress_3_bits_payload ),
    .b_ingress_3_flit_bits_egress_id    ( b_ingress_3_bits_egress_id ),
    .b_egress_3_flit_valid              ( b_egress_3_valid ),
    .b_egress_3_flit_bits_head          ( b_egress_3_bits_head ),
    .b_egress_3_flit_bits_tail          ( b_egress_3_bits_tail ),
    .b_egress_3_flit_bits_payload       ( b_egress_3_bits_payload ),
    .b_egress_3_flit_bits_ingress_id    ( b_egress_3_bits_ingress_id ),
    .ar_ingress_3_flit_ready            ( ar_ingress_3_ready ),
    .ar_ingress_3_flit_valid            ( ar_ingress_3_valid ),
    .ar_ingress_3_flit_bits_head        ( 1'b1 ),
    .ar_ingress_3_flit_bits_tail        ( 1'b1 ),
    .ar_ingress_3_flit_bits_payload     ( ar_ingress_3_bits_payload ),
    .ar_ingress_3_flit_bits_egress_id   ( ar_ingress_3_bits_egress_id ),
    .ar_egress_3_flit_valid             ( ar_egress_3_valid ),
    .ar_egress_3_flit_bits_head         ( ar_egress_3_bits_head ),
    .ar_egress_3_flit_bits_tail         ( ar_egress_3_bits_tail ),
    .ar_egress_3_flit_bits_payload      ( ar_egress_3_bits_payload ),
    .ar_egress_3_flit_bits_ingress_id   ( ar_egress_3_bits_ingress_id ),
    .r_ingress_3_flit_ready             ( r_ingress_3_ready ),
    .r_ingress_3_flit_valid             ( r_ingress_3_valid ),
    .r_ingress_3_flit_bits_head         ( r_ingress_3_bits_head ),
    .r_ingress_3_flit_bits_tail         ( r_ingress_3_bits_tail ),
    .r_ingress_3_flit_bits_payload      ( r_ingress_3_bits_payload ),
    .r_ingress_3_flit_bits_egress_id    ( r_ingress_3_bits_egress_id ),
    .r_egress_3_flit_valid              ( r_egress_3_valid ),
    .r_egress_3_flit_bits_head          ( r_egress_3_bits_head ),
    .r_egress_3_flit_bits_tail          ( r_egress_3_bits_tail ),
    .r_egress_3_flit_bits_payload       ( r_egress_3_bits_payload ),
    .r_egress_3_flit_bits_ingress_id    ( r_egress_3_bits_ingress_id )

);

endmodule
