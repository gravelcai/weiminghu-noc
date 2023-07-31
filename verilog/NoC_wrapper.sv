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

    // SN0-0 interface
    output              sn0_0_AWVALID,
    input               sn0_0_AWREADY,
    output [10:0]       sn0_0_AWID,
    output [31:0]       sn0_0_AWADDR,
    output [3:0]        sn0_0_AWREGION,
    output [7:0]        sn0_0_AWLEN,
    output [2:0]        sn0_0_AWSIZE,
    output [1:0]        sn0_0_AWBURST,
    output              sn0_0_AWLOCK,
    output [3:0]        sn0_0_AWCACHE,
    output [2:0]        sn0_0_AWPROT,
    output [3:0]        sn0_0_AWQOS,

    output              sn0_0_WVALID,
    input               sn0_0_WREADY,
    output [63:0]       sn0_0_WDATA,
    output [7:0]        sn0_0_WSTRB,
    output              sn0_0_WLAST,

    input               sn0_0_BVALID,
    output              sn0_0_BREADY,
    input  [1:0]        sn0_0_BRESP,
    input  [10:0]       sn0_0_BID,

    output              sn0_0_ARVALID,
    input               sn0_0_ARREADY,
    output [10:0]       sn0_0_ARID,
    output [31:0]       sn0_0_ARADDR,
    output [3:0]        sn0_0_ARREGION,
    output [7:0]        sn0_0_ARLEN,
    output [2:0]        sn0_0_ARSIZE,
    output [1:0]        sn0_0_ARBURST,
    output              sn0_0_ARLOCK,
    output [3:0]        sn0_0_ARCACHE,
    output [2:0]        sn0_0_ARPROT,
    output [3:0]        sn0_0_ARQOS,

    input               sn0_0_RVALID,
    output              sn0_0_RREADY,
    input  [10:0]       sn0_0_RID,
    input  [63:0]       sn0_0_RDATA,
    input  [1:0]        sn0_0_RRESP,
    input               sn0_0_RLAST,

    // SN0-1 interface
    output              sn0_1_AWVALID,
    input               sn0_1_AWREADY,
    output [10:0]       sn0_1_AWID,
    output [31:0]       sn0_1_AWADDR,
    output [3:0]        sn0_1_AWREGION,
    output [7:0]        sn0_1_AWLEN,
    output [2:0]        sn0_1_AWSIZE,
    output [1:0]        sn0_1_AWBURST,
    output              sn0_1_AWLOCK,
    output [3:0]        sn0_1_AWCACHE,
    output [2:0]        sn0_1_AWPROT,
    output [3:0]        sn0_1_AWQOS,

    output              sn0_1_WVALID,
    input               sn0_1_WREADY,
    output [63:0]       sn0_1_WDATA,
    output [7:0]        sn0_1_WSTRB,
    output              sn0_1_WLAST,

    input               sn0_1_BVALID,
    output              sn0_1_BREADY,
    input  [1:0]        sn0_1_BRESP,
    input  [10:0]       sn0_1_BID,

    output              sn0_1_ARVALID,
    input               sn0_1_ARREADY,
    output [10:0]       sn0_1_ARID,
    output [31:0]       sn0_1_ARADDR,
    output [3:0]        sn0_1_ARREGION,
    output [7:0]        sn0_1_ARLEN,
    output [2:0]        sn0_1_ARSIZE,
    output [1:0]        sn0_1_ARBURST,
    output              sn0_1_ARLOCK,
    output [3:0]        sn0_1_ARCACHE,
    output [2:0]        sn0_1_ARPROT,
    output [3:0]        sn0_1_ARQOS,

    input               sn0_1_RVALID,
    output              sn0_1_RREADY,
    input  [10:0]       sn0_1_RID,
    input  [63:0]       sn0_1_RDATA,
    input  [1:0]        sn0_1_RRESP,
    input               sn0_1_RLAST,

    // SN1-0 interface
    output              sn1_0_AWVALID,
    input               sn1_0_AWREADY,
    output [10:0]       sn1_0_AWID,
    output [31:0]       sn1_0_AWADDR,
    output [3:0]        sn1_0_AWREGION,
    output [7:0]        sn1_0_AWLEN,
    output [2:0]        sn1_0_AWSIZE,
    output [1:0]        sn1_0_AWBURST,
    output              sn1_0_AWLOCK,
    output [3:0]        sn1_0_AWCACHE,
    output [2:0]        sn1_0_AWPROT,
    output [3:0]        sn1_0_AWQOS,

    output              sn1_0_WVALID,
    input               sn1_0_WREADY,
    output [63:0]       sn1_0_WDATA,
    output [7:0]        sn1_0_WSTRB,
    output              sn1_0_WLAST,

    input               sn1_0_BVALID,
    output              sn1_0_BREADY,
    input  [1:0]        sn1_0_BRESP,
    input  [10:0]       sn1_0_BID,

    output              sn1_0_ARVALID,
    input               sn1_0_ARREADY,
    output [10:0]       sn1_0_ARID,
    output [31:0]       sn1_0_ARADDR,
    output [3:0]        sn1_0_ARREGION,
    output [7:0]        sn1_0_ARLEN,
    output [2:0]        sn1_0_ARSIZE,
    output [1:0]        sn1_0_ARBURST,
    output              sn1_0_ARLOCK,
    output [3:0]        sn1_0_ARCACHE,
    output [2:0]        sn1_0_ARPROT,
    output [3:0]        sn1_0_ARQOS,

    input               sn1_0_RVALID,
    output              sn1_0_RREADY,
    input  [10:0]       sn1_0_RID,
    input  [63:0]       sn1_0_RDATA,
    input  [1:0]        sn1_0_RRESP,
    input               sn1_0_RLAST,

    // SN1-1 interface
    output              sn1_1_AWVALID,
    input               sn1_1_AWREADY,
    output [10:0]       sn1_1_AWID,
    output [31:0]       sn1_1_AWADDR,
    output [3:0]        sn1_1_AWREGION,
    output [7:0]        sn1_1_AWLEN,
    output [2:0]        sn1_1_AWSIZE,
    output [1:0]        sn1_1_AWBURST,
    output              sn1_1_AWLOCK,
    output [3:0]        sn1_1_AWCACHE,
    output [2:0]        sn1_1_AWPROT,
    output [3:0]        sn1_1_AWQOS,

    output              sn1_1_WVALID,
    input               sn1_1_WREADY,
    output [63:0]       sn1_1_WDATA,
    output [7:0]        sn1_1_WSTRB,
    output              sn1_1_WLAST,

    input               sn1_1_BVALID,
    output              sn1_1_BREADY,
    input  [1:0]        sn1_1_BRESP,
    input  [10:0]       sn1_1_BID,

    output              sn1_1_ARVALID,
    input               sn1_1_ARREADY,
    output [10:0]       sn1_1_ARID,
    output [31:0]       sn1_1_ARADDR,
    output [3:0]        sn1_1_ARREGION,
    output [7:0]        sn1_1_ARLEN,
    output [2:0]        sn1_1_ARSIZE,
    output [1:0]        sn1_1_ARBURST,
    output              sn1_1_ARLOCK,
    output [3:0]        sn1_1_ARCACHE,
    output [2:0]        sn1_1_ARPROT,
    output [3:0]        sn1_1_ARQOS,

    input               sn1_1_RVALID,
    output              sn1_1_RREADY,
    input  [10:0]       sn1_1_RID,
    input  [63:0]       sn1_1_RDATA,
    input  [1:0]        sn1_1_RRESP,
    input               sn1_1_RLAST,

    // SN2-0 interface
    output              sn2_0_AWVALID,
    input               sn2_0_AWREADY,
    output [10:0]       sn2_0_AWID,
    output [31:0]       sn2_0_AWADDR,
    output [3:0]        sn2_0_AWREGION,
    output [7:0]        sn2_0_AWLEN,
    output [2:0]        sn2_0_AWSIZE,
    output [1:0]        sn2_0_AWBURST,
    output              sn2_0_AWLOCK,
    output [3:0]        sn2_0_AWCACHE,
    output [2:0]        sn2_0_AWPROT,
    output [3:0]        sn2_0_AWQOS,

    output              sn2_0_WVALID,
    input               sn2_0_WREADY,
    output [63:0]       sn2_0_WDATA,
    output [7:0]        sn2_0_WSTRB,
    output              sn2_0_WLAST,

    input               sn2_0_BVALID,
    output              sn2_0_BREADY,
    input  [1:0]        sn2_0_BRESP,
    input  [10:0]       sn2_0_BID,

    output              sn2_0_ARVALID,
    input               sn2_0_ARREADY,
    output [10:0]       sn2_0_ARID,
    output [31:0]       sn2_0_ARADDR,
    output [3:0]        sn2_0_ARREGION,
    output [7:0]        sn2_0_ARLEN,
    output [2:0]        sn2_0_ARSIZE,
    output [1:0]        sn2_0_ARBURST,
    output              sn2_0_ARLOCK,
    output [3:0]        sn2_0_ARCACHE,
    output [2:0]        sn2_0_ARPROT,
    output [3:0]        sn2_0_ARQOS,

    input               sn2_0_RVALID,
    output              sn2_0_RREADY,
    input  [10:0]       sn2_0_RID,
    input  [63:0]       sn2_0_RDATA,
    input  [1:0]        sn2_0_RRESP,
    input               sn2_0_RLAST,

    // SN2-1 interface
    output              sn2_1_AWVALID,
    input               sn2_1_AWREADY,
    output [10:0]       sn2_1_AWID,
    output [31:0]       sn2_1_AWADDR,
    output [3:0]        sn2_1_AWREGION,
    output [7:0]        sn2_1_AWLEN,
    output [2:0]        sn2_1_AWSIZE,
    output [1:0]        sn2_1_AWBURST,
    output              sn2_1_AWLOCK,
    output [3:0]        sn2_1_AWCACHE,
    output [2:0]        sn2_1_AWPROT,
    output [3:0]        sn2_1_AWQOS,

    output              sn2_1_WVALID,
    input               sn2_1_WREADY,
    output [63:0]       sn2_1_WDATA,
    output [7:0]        sn2_1_WSTRB,
    output              sn2_1_WLAST,

    input               sn2_1_BVALID,
    output              sn2_1_BREADY,
    input  [1:0]        sn2_1_BRESP,
    input  [10:0]       sn2_1_BID,

    output              sn2_1_ARVALID,
    input               sn2_1_ARREADY,
    output [10:0]       sn2_1_ARID,
    output [31:0]       sn2_1_ARADDR,
    output [3:0]        sn2_1_ARREGION,
    output [7:0]        sn2_1_ARLEN,
    output [2:0]        sn2_1_ARSIZE,
    output [1:0]        sn2_1_ARBURST,
    output              sn2_1_ARLOCK,
    output [3:0]        sn2_1_ARCACHE,
    output [2:0]        sn2_1_ARPROT,
    output [3:0]        sn2_1_ARQOS,

    input               sn2_1_RVALID,
    output              sn2_1_RREADY,
    input  [10:0]       sn2_1_RID,
    input  [63:0]       sn2_1_RDATA,
    input  [1:0]        sn2_1_RRESP,
    input               sn2_1_RLAST,

    // SN3-0 interface
    output              sn3_0_AWVALID,
    input               sn3_0_AWREADY,
    output [10:0]       sn3_0_AWID,
    output [31:0]       sn3_0_AWADDR,
    output [3:0]        sn3_0_AWREGION,
    output [7:0]        sn3_0_AWLEN,
    output [2:0]        sn3_0_AWSIZE,
    output [1:0]        sn3_0_AWBURST,
    output              sn3_0_AWLOCK,
    output [3:0]        sn3_0_AWCACHE,
    output [2:0]        sn3_0_AWPROT,
    output [3:0]        sn3_0_AWQOS,

    output              sn3_0_WVALID,
    input               sn3_0_WREADY,
    output [63:0]       sn3_0_WDATA,
    output [7:0]        sn3_0_WSTRB,
    output              sn3_0_WLAST,

    input               sn3_0_BVALID,
    output              sn3_0_BREADY,
    input  [1:0]        sn3_0_BRESP,
    input  [10:0]       sn3_0_BID,

    output              sn3_0_ARVALID,
    input               sn3_0_ARREADY,
    output [10:0]       sn3_0_ARID,
    output [31:0]       sn3_0_ARADDR,
    output [3:0]        sn3_0_ARREGION,
    output [7:0]        sn3_0_ARLEN,
    output [2:0]        sn3_0_ARSIZE,
    output [1:0]        sn3_0_ARBURST,
    output              sn3_0_ARLOCK,
    output [3:0]        sn3_0_ARCACHE,
    output [2:0]        sn3_0_ARPROT,
    output [3:0]        sn3_0_ARQOS,

    input               sn3_0_RVALID,
    output              sn3_0_RREADY,
    input  [10:0]       sn3_0_RID,
    input  [63:0]       sn3_0_RDATA,
    input  [1:0]        sn3_0_RRESP,
    input               sn3_0_RLAST,

    // SN3-1 interface
    output              sn3_1_AWVALID,
    input               sn3_1_AWREADY,
    output [10:0]       sn3_1_AWID,
    output [31:0]       sn3_1_AWADDR,
    output [3:0]        sn3_1_AWREGION,
    output [7:0]        sn3_1_AWLEN,
    output [2:0]        sn3_1_AWSIZE,
    output [1:0]        sn3_1_AWBURST,
    output              sn3_1_AWLOCK,
    output [3:0]        sn3_1_AWCACHE,
    output [2:0]        sn3_1_AWPROT,
    output [3:0]        sn3_1_AWQOS,

    output              sn3_1_WVALID,
    input               sn3_1_WREADY,
    output [63:0]       sn3_1_WDATA,
    output [7:0]        sn3_1_WSTRB,
    output              sn3_1_WLAST,

    input               sn3_1_BVALID,
    output              sn3_1_BREADY,
    input  [1:0]        sn3_1_BRESP,
    input  [10:0]       sn3_1_BID,

    output              sn3_1_ARVALID,
    input               sn3_1_ARREADY,
    output [10:0]       sn3_1_ARID,
    output [31:0]       sn3_1_ARADDR,
    output [3:0]        sn3_1_ARREGION,
    output [7:0]        sn3_1_ARLEN,
    output [2:0]        sn3_1_ARSIZE,
    output [1:0]        sn3_1_ARBURST,
    output              sn3_1_ARLOCK,
    output [3:0]        sn3_1_ARCACHE,
    output [2:0]        sn3_1_ARPROT,
    output [3:0]        sn3_1_ARQOS,

    input               sn3_1_RVALID,
    output              sn3_1_RREADY,
    input  [10:0]       sn3_1_RID,
    input  [63:0]       sn3_1_RDATA,
    input  [1:0]        sn3_1_RRESP,
    input               sn3_1_RLAST
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

    .AWVALID0       ( sn0_0_AWVALID ),
    .AWREADY0       ( sn0_0_AWREADY ),
    .AWID0          ( sn0_0_AWID ),
    .AWADDR0        ( sn0_0_AWADDR ),
    .AWREGION0      ( sn0_0_AWREGION ),
    .AWLEN0         ( sn0_0_AWLEN ),
    .AWSIZE0        ( sn0_0_AWSIZE ),
    .AWBURST0       ( sn0_0_AWBURST ),
    .AWLOCK0        ( sn0_0_AWLOCK ),
    .AWCACHE0       ( sn0_0_AWCACHE ),
    .AWPROT0        ( sn0_0_AWPROT ),
    .AWQOS0         ( sn0_0_AWQOS ),

    .WVALID0        ( sn0_0_WVALID ),
    .WREADY0        ( sn0_0_WREADY ),
    .WDATA0         ( sn0_0_WDATA ),
    .WSTRB0         ( sn0_0_WSTRB ),
    .WLAST0         ( sn0_0_WLAST ),

    .BVALID0        ( sn0_0_BVALID ),
    .BREADY0        ( sn0_0_BREADY ),
    .BRESP0         ( sn0_0_BRESP ),
    .BID0           ( sn0_0_BID ),

    .ARVALID0       ( sn0_0_ARVALID ),
    .ARREADY0       ( sn0_0_ARREADY ),
    .ARID0          ( sn0_0_ARID ),
    .ARADDR0        ( sn0_0_ARADDR ),
    .ARREGION0      ( sn0_0_ARREGION ),
    .ARLEN0         ( sn0_0_ARLEN ),
    .ARSIZE0        ( sn0_0_ARSIZE ),
    .ARBURST0       ( sn0_0_ARBURST ),
    .ARLOCK0        ( sn0_0_ARLOCK ),
    .ARCACHE0       ( sn0_0_ARCACHE ),
    .ARPROT0        ( sn0_0_ARPROT ),
    .ARQOS0         ( sn0_0_ARQOS ),

    .RVALID0        ( sn0_0_RVALID ),
    .RREADY0        ( sn0_0_RREADY ),
    .RID0           ( sn0_0_RID ),
    .RDATA0         ( sn0_0_RDATA ),
    .RRESP0         ( sn0_0_RRESP ),
    .RLAST0         ( sn0_0_RLAST ),

    .AWVALID1       ( sn0_1_AWVALID ),
    .AWREADY1       ( sn0_1_AWREADY ),
    .AWID1          ( sn0_1_AWID ),
    .AWADDR1        ( sn0_1_AWADDR ),
    .AWREGION1      ( sn0_1_AWREGION ),
    .AWLEN1         ( sn0_1_AWLEN ),
    .AWSIZE1        ( sn0_1_AWSIZE ),
    .AWBURST1       ( sn0_1_AWBURST ),
    .AWLOCK1        ( sn0_1_AWLOCK ),
    .AWCACHE1       ( sn0_1_AWCACHE ),
    .AWPROT1        ( sn0_1_AWPROT ),
    .AWQOS1         ( sn0_1_AWQOS ),

    .WVALID1        ( sn0_1_WVALID ),
    .WREADY1        ( sn0_1_WREADY ),
    .WDATA1         ( sn0_1_WDATA ),
    .WSTRB1         ( sn0_1_WSTRB ),
    .WLAST1         ( sn0_1_WLAST ),

    .BVALID1        ( sn0_1_BVALID ),
    .BREADY1        ( sn0_1_BREADY ),
    .BRESP1         ( sn0_1_BRESP ),
    .BID1           ( sn0_1_BID ),

    .ARVALID1       ( sn0_1_ARVALID ),
    .ARREADY1       ( sn0_1_ARREADY ),
    .ARID1          ( sn0_1_ARID ),
    .ARADDR1        ( sn0_1_ARADDR ),
    .ARREGION1      ( sn0_1_ARREGION ),
    .ARLEN1         ( sn0_1_ARLEN ),
    .ARSIZE1        ( sn0_1_ARSIZE ),
    .ARBURST1       ( sn0_1_ARBURST ),
    .ARLOCK1        ( sn0_1_ARLOCK ),
    .ARCACHE1       ( sn0_1_ARCACHE ),
    .ARPROT1        ( sn0_1_ARPROT ),
    .ARQOS1         ( sn0_1_ARQOS ),

    .RVALID1        ( sn0_1_RVALID ),
    .RREADY1        ( sn0_1_RREADY ),
    .RID1           ( sn0_1_RID ),
    .RDATA1         ( sn0_1_RDATA ),
    .RRESP1         ( sn0_1_RRESP ),
    .RLAST1         ( sn0_1_RLAST )
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

    .AWVALID0       ( sn1_0_AWVALID ),
    .AWREADY0       ( sn1_0_AWREADY ),
    .AWID0          ( sn1_0_AWID ),
    .AWADDR0        ( sn1_0_AWADDR ),
    .AWREGION0      ( sn1_0_AWREGION ),
    .AWLEN0         ( sn1_0_AWLEN ),
    .AWSIZE0        ( sn1_0_AWSIZE ),
    .AWBURST0       ( sn1_0_AWBURST ),
    .AWLOCK0        ( sn1_0_AWLOCK ),
    .AWCACHE0       ( sn1_0_AWCACHE ),
    .AWPROT0        ( sn1_0_AWPROT ),
    .AWQOS0         ( sn1_0_AWQOS ),

    .WVALID0        ( sn1_0_WVALID ),
    .WREADY0        ( sn1_0_WREADY ),
    .WDATA0         ( sn1_0_WDATA ),
    .WSTRB0         ( sn1_0_WSTRB ),
    .WLAST0         ( sn1_0_WLAST ),

    .BVALID0        ( sn1_0_BVALID ),
    .BREADY0        ( sn1_0_BREADY ),
    .BRESP0         ( sn1_0_BRESP ),
    .BID0           ( sn1_0_BID ),

    .ARVALID0       ( sn1_0_ARVALID ),
    .ARREADY0       ( sn1_0_ARREADY ),
    .ARID0          ( sn1_0_ARID ),
    .ARADDR0        ( sn1_0_ARADDR ),
    .ARREGION0      ( sn1_0_ARREGION ),
    .ARLEN0         ( sn1_0_ARLEN ),
    .ARSIZE0        ( sn1_0_ARSIZE ),
    .ARBURST0       ( sn1_0_ARBURST ),
    .ARLOCK0        ( sn1_0_ARLOCK ),
    .ARCACHE0       ( sn1_0_ARCACHE ),
    .ARPROT0        ( sn1_0_ARPROT ),
    .ARQOS0         ( sn1_0_ARQOS ),

    .RVALID0        ( sn1_0_RVALID ),
    .RREADY0        ( sn1_0_RREADY ),
    .RID0           ( sn1_0_RID ),
    .RDATA0         ( sn1_0_RDATA ),
    .RRESP0         ( sn1_0_RRESP ),
    .RLAST0         ( sn1_0_RLAST ),

    .AWVALID1       ( sn1_1_AWVALID ),
    .AWREADY1       ( sn1_1_AWREADY ),
    .AWID1          ( sn1_1_AWID ),
    .AWADDR1        ( sn1_1_AWADDR ),
    .AWREGION1      ( sn1_1_AWREGION ),
    .AWLEN1         ( sn1_1_AWLEN ),
    .AWSIZE1        ( sn1_1_AWSIZE ),
    .AWBURST1       ( sn1_1_AWBURST ),
    .AWLOCK1        ( sn1_1_AWLOCK ),
    .AWCACHE1       ( sn1_1_AWCACHE ),
    .AWPROT1        ( sn1_1_AWPROT ),
    .AWQOS1         ( sn1_1_AWQOS ),

    .WVALID1        ( sn1_1_WVALID ),
    .WREADY1        ( sn1_1_WREADY ),
    .WDATA1         ( sn1_1_WDATA ),
    .WSTRB1         ( sn1_1_WSTRB ),
    .WLAST1         ( sn1_1_WLAST ),

    .BVALID1        ( sn1_1_BVALID ),
    .BREADY1        ( sn1_1_BREADY ),
    .BRESP1         ( sn1_1_BRESP ),
    .BID1           ( sn1_1_BID ),

    .ARVALID1       ( sn1_1_ARVALID ),
    .ARREADY1       ( sn1_1_ARREADY ),
    .ARID1          ( sn1_1_ARID ),
    .ARADDR1        ( sn1_1_ARADDR ),
    .ARREGION1      ( sn1_1_ARREGION ),
    .ARLEN1         ( sn1_1_ARLEN ),
    .ARSIZE1        ( sn1_1_ARSIZE ),
    .ARBURST1       ( sn1_1_ARBURST ),
    .ARLOCK1        ( sn1_1_ARLOCK ),
    .ARCACHE1       ( sn1_1_ARCACHE ),
    .ARPROT1        ( sn1_1_ARPROT ),
    .ARQOS1         ( sn1_1_ARQOS ),

    .RVALID1        ( sn1_1_RVALID ),
    .RREADY1        ( sn1_1_RREADY ),
    .RID1           ( sn1_1_RID ),
    .RDATA1         ( sn1_1_RDATA ),
    .RRESP1         ( sn1_1_RRESP ),
    .RLAST1         ( sn1_1_RLAST )
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

    .AWVALID0       ( sn2_0_AWVALID ),
    .AWREADY0       ( sn2_0_AWREADY ),
    .AWID0          ( sn2_0_AWID ),
    .AWADDR0        ( sn2_0_AWADDR ),
    .AWREGION0      ( sn2_0_AWREGION ),
    .AWLEN0         ( sn2_0_AWLEN ),
    .AWSIZE0        ( sn2_0_AWSIZE ),
    .AWBURST0       ( sn2_0_AWBURST ),
    .AWLOCK0        ( sn2_0_AWLOCK ),
    .AWCACHE0       ( sn2_0_AWCACHE ),
    .AWPROT0        ( sn2_0_AWPROT ),
    .AWQOS0         ( sn2_0_AWQOS ),

    .WVALID0        ( sn2_0_WVALID ),
    .WREADY0        ( sn2_0_WREADY ),
    .WDATA0         ( sn2_0_WDATA ),
    .WSTRB0         ( sn2_0_WSTRB ),
    .WLAST0         ( sn2_0_WLAST ),

    .BVALID0        ( sn2_0_BVALID ),
    .BREADY0        ( sn2_0_BREADY ),
    .BRESP0         ( sn2_0_BRESP ),
    .BID0           ( sn2_0_BID ),

    .ARVALID0       ( sn2_0_ARVALID ),
    .ARREADY0       ( sn2_0_ARREADY ),
    .ARID0          ( sn2_0_ARID ),
    .ARADDR0        ( sn2_0_ARADDR ),
    .ARREGION0      ( sn2_0_ARREGION ),
    .ARLEN0         ( sn2_0_ARLEN ),
    .ARSIZE0        ( sn2_0_ARSIZE ),
    .ARBURST0       ( sn2_0_ARBURST ),
    .ARLOCK0        ( sn2_0_ARLOCK ),
    .ARCACHE0       ( sn2_0_ARCACHE ),
    .ARPROT0        ( sn2_0_ARPROT ),
    .ARQOS0         ( sn2_0_ARQOS ),

    .RVALID0        ( sn2_0_RVALID ),
    .RREADY0        ( sn2_0_RREADY ),
    .RID0           ( sn2_0_RID ),
    .RDATA0         ( sn2_0_RDATA ),
    .RRESP0         ( sn2_0_RRESP ),
    .RLAST0         ( sn2_0_RLAST ),

    .AWVALID1       ( sn2_1_AWVALID ),
    .AWREADY1       ( sn2_1_AWREADY ),
    .AWID1          ( sn2_1_AWID ),
    .AWADDR1        ( sn2_1_AWADDR ),
    .AWREGION1      ( sn2_1_AWREGION ),
    .AWLEN1         ( sn2_1_AWLEN ),
    .AWSIZE1        ( sn2_1_AWSIZE ),
    .AWBURST1       ( sn2_1_AWBURST ),
    .AWLOCK1        ( sn2_1_AWLOCK ),
    .AWCACHE1       ( sn2_1_AWCACHE ),
    .AWPROT1        ( sn2_1_AWPROT ),
    .AWQOS1         ( sn2_1_AWQOS ),

    .WVALID1        ( sn2_1_WVALID ),
    .WREADY1        ( sn2_1_WREADY ),
    .WDATA1         ( sn2_1_WDATA ),
    .WSTRB1         ( sn2_1_WSTRB ),
    .WLAST1         ( sn2_1_WLAST ),

    .BVALID1        ( sn2_1_BVALID ),
    .BREADY1        ( sn2_1_BREADY ),
    .BRESP1         ( sn2_1_BRESP ),
    .BID1           ( sn2_1_BID ),

    .ARVALID1       ( sn2_1_ARVALID ),
    .ARREADY1       ( sn2_1_ARREADY ),
    .ARID1          ( sn2_1_ARID ),
    .ARADDR1        ( sn2_1_ARADDR ),
    .ARREGION1      ( sn2_1_ARREGION ),
    .ARLEN1         ( sn2_1_ARLEN ),
    .ARSIZE1        ( sn2_1_ARSIZE ),
    .ARBURST1       ( sn2_1_ARBURST ),
    .ARLOCK1        ( sn2_1_ARLOCK ),
    .ARCACHE1       ( sn2_1_ARCACHE ),
    .ARPROT1        ( sn2_1_ARPROT ),
    .ARQOS1         ( sn2_1_ARQOS ),

    .RVALID1        ( sn2_1_RVALID ),
    .RREADY1        ( sn2_1_RREADY ),
    .RID1           ( sn2_1_RID ),
    .RDATA1         ( sn2_1_RDATA ),
    .RRESP1         ( sn2_1_RRESP ),
    .RLAST1         ( sn2_1_RLAST )
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

    .AWVALID0       ( sn3_0_AWVALID ),
    .AWREADY0       ( sn3_0_AWREADY ),
    .AWID0          ( sn3_0_AWID ),
    .AWADDR0        ( sn3_0_AWADDR ),
    .AWREGION0      ( sn3_0_AWREGION ),
    .AWLEN0         ( sn3_0_AWLEN ),
    .AWSIZE0        ( sn3_0_AWSIZE ),
    .AWBURST0       ( sn3_0_AWBURST ),
    .AWLOCK0        ( sn3_0_AWLOCK ),
    .AWCACHE0       ( sn3_0_AWCACHE ),
    .AWPROT0        ( sn3_0_AWPROT ),
    .AWQOS0         ( sn3_0_AWQOS ),

    .WVALID0        ( sn3_0_WVALID ),
    .WREADY0        ( sn3_0_WREADY ),
    .WDATA0         ( sn3_0_WDATA ),
    .WSTRB0         ( sn3_0_WSTRB ),
    .WLAST0         ( sn3_0_WLAST ),

    .BVALID0        ( sn3_0_BVALID ),
    .BREADY0        ( sn3_0_BREADY ),
    .BRESP0         ( sn3_0_BRESP ),
    .BID0           ( sn3_0_BID ),

    .ARVALID0       ( sn3_0_ARVALID ),
    .ARREADY0       ( sn3_0_ARREADY ),
    .ARID0          ( sn3_0_ARID ),
    .ARADDR0        ( sn3_0_ARADDR ),
    .ARREGION0      ( sn3_0_ARREGION ),
    .ARLEN0         ( sn3_0_ARLEN ),
    .ARSIZE0        ( sn3_0_ARSIZE ),
    .ARBURST0       ( sn3_0_ARBURST ),
    .ARLOCK0        ( sn3_0_ARLOCK ),
    .ARCACHE0       ( sn3_0_ARCACHE ),
    .ARPROT0        ( sn3_0_ARPROT ),
    .ARQOS0         ( sn3_0_ARQOS ),

    .RVALID0        ( sn3_0_RVALID ),
    .RREADY0        ( sn3_0_RREADY ),
    .RID0           ( sn3_0_RID ),
    .RDATA0         ( sn3_0_RDATA ),
    .RRESP0         ( sn3_0_RRESP ),
    .RLAST0         ( sn3_0_RLAST ),

    .AWVALID1       ( sn3_1_AWVALID ),
    .AWREADY1       ( sn3_1_AWREADY ),
    .AWID1          ( sn3_1_AWID ),
    .AWADDR1        ( sn3_1_AWADDR ),
    .AWREGION1      ( sn3_1_AWREGION ),
    .AWLEN1         ( sn3_1_AWLEN ),
    .AWSIZE1        ( sn3_1_AWSIZE ),
    .AWBURST1       ( sn3_1_AWBURST ),
    .AWLOCK1        ( sn3_1_AWLOCK ),
    .AWCACHE1       ( sn3_1_AWCACHE ),
    .AWPROT1        ( sn3_1_AWPROT ),
    .AWQOS1         ( sn3_1_AWQOS ),

    .WVALID1        ( sn3_1_WVALID ),
    .WREADY1        ( sn3_1_WREADY ),
    .WDATA1         ( sn3_1_WDATA ),
    .WSTRB1         ( sn3_1_WSTRB ),
    .WLAST1         ( sn3_1_WLAST ),

    .BVALID1        ( sn3_1_BVALID ),
    .BREADY1        ( sn3_1_BREADY ),
    .BRESP1         ( sn3_1_BRESP ),
    .BID1           ( sn3_1_BID ),

    .ARVALID1       ( sn3_1_ARVALID ),
    .ARREADY1       ( sn3_1_ARREADY ),
    .ARID1          ( sn3_1_ARID ),
    .ARADDR1        ( sn3_1_ARADDR ),
    .ARREGION1      ( sn3_1_ARREGION ),
    .ARLEN1         ( sn3_1_ARLEN ),
    .ARSIZE1        ( sn3_1_ARSIZE ),
    .ARBURST1       ( sn3_1_ARBURST ),
    .ARLOCK1        ( sn3_1_ARLOCK ),
    .ARCACHE1       ( sn3_1_ARCACHE ),
    .ARPROT1        ( sn3_1_ARPROT ),
    .ARQOS1         ( sn3_1_ARQOS ),

    .RVALID1        ( sn3_1_RVALID ),
    .RREADY1        ( sn3_1_RREADY ),
    .RID1           ( sn3_1_RID ),
    .RDATA1         ( sn3_1_RDATA ),
    .RRESP1         ( sn3_1_RRESP ),
    .RLAST1         ( sn3_1_RLAST )
);



// NoC instantiate
NoC_top u_noc_top
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
