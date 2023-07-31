`include "common_defines.vh"

`ifdef VERILATOR
module tb_SoC( input bit core_clk );
`else
module tb_SoC;
    bit                         core_clk;
`endif
    logic                       rst_l;
    logic                       porst_l;
    logic                       nmi_int;

    logic        [31:0]         reset_vector;
    logic        [31:0]         nmi_vector;
    logic        [31:1]         jtag_id;

    logic        [31:0]         ic_haddr;
    logic        [2:0]          ic_hburst;
    logic                       ic_hmastlock;
    logic        [3:0]          ic_hprot;
    logic        [2:0]          ic_hsize;
    logic        [1:0]          ic_htrans;
    logic                       ic_hwrite;
    logic        [63:0]         ic_hrdata;
    logic                       ic_hready;
    logic                       ic_hresp;

    logic        [31:0]         lsu_haddr;
    logic        [2:0]          lsu_hburst;
    logic                       lsu_hmastlock;
    logic        [3:0]          lsu_hprot;
    logic        [2:0]          lsu_hsize;
    logic        [1:0]          lsu_htrans;
    logic                       lsu_hwrite;
    logic        [63:0]         lsu_hrdata;
    logic        [63:0]         lsu_hwdata;
    logic                       lsu_hready;
    logic                       lsu_hresp;

    logic        [31:0]         sb_haddr;
    logic        [2:0]          sb_hburst;
    logic                       sb_hmastlock;
    logic        [3:0]          sb_hprot;
    logic        [2:0]          sb_hsize;
    logic        [1:0]          sb_htrans;
    logic                       sb_hwrite;

    logic        [63:0]         sb_hrdata;
    logic        [63:0]         sb_hwdata;
    logic                       sb_hready;
    logic                       sb_hresp;

    logic        [63:0]         trace_rv_i_insn_ip;
    logic        [63:0]         trace_rv_i_address_ip;
    logic        [2:0]          trace_rv_i_valid_ip;
    logic        [2:0]          trace_rv_i_exception_ip;
    logic        [4:0]          trace_rv_i_ecause_ip;
    logic        [2:0]          trace_rv_i_interrupt_ip;
    logic        [31:0]         trace_rv_i_tval_ip;

    logic                       o_debug_mode_status;
    logic        [1:0]          dec_tlu_perfcnt0;
    logic        [1:0]          dec_tlu_perfcnt1;
    logic        [1:0]          dec_tlu_perfcnt2;
    logic        [1:0]          dec_tlu_perfcnt3;


    logic                       jtag_tdo;
    logic                       o_cpu_halt_ack;
    logic                       o_cpu_halt_status;
    logic                       o_cpu_run_ack;

    logic                       mailbox_write;
    logic        [63:0]         dma_hrdata;
    logic        [63:0]         dma_hwdata;
    logic                       dma_hready;
    logic                       dma_hresp;

    logic                       mpc_debug_halt_req;
    logic                       mpc_debug_run_req;
    logic                       mpc_reset_run_req;
    logic                       mpc_debug_halt_ack;
    logic                       mpc_debug_run_ack;
    logic                       debug_brkpt_status;

    bit        [31:0]           cycleCnt;
    logic                       mailbox_data_val;

    wire                        dma_hready_out;
    int                         commit_count;

    logic                       wb_valid[1:0];
    logic [4:0]                 wb_dest[1:0];
    logic [31:0]                wb_data[1:0];

`ifdef RV_BUILD_AXI4
   //-------------------------- LSU AXI signals--------------------------
   // AXI Write Channels
    wire                        lsu_axi_awvalid;
    wire                        lsu_axi_awready;
    wire [`RV_LSU_BUS_TAG-1:0]  lsu_axi_awid;
    wire [31:0]                 lsu_axi_awaddr;
    wire [3:0]                  lsu_axi_awregion;
    wire [7:0]                  lsu_axi_awlen;
    wire [2:0]                  lsu_axi_awsize;
    wire [1:0]                  lsu_axi_awburst;
    wire                        lsu_axi_awlock;
    wire [3:0]                  lsu_axi_awcache;
    wire [2:0]                  lsu_axi_awprot;
    wire [3:0]                  lsu_axi_awqos;

    wire                        lsu_axi_wvalid;
    wire                        lsu_axi_wready;
    wire [63:0]                 lsu_axi_wdata;
    wire [7:0]                  lsu_axi_wstrb;
    wire                        lsu_axi_wlast;

    wire                        lsu_axi_bvalid;
    wire                        lsu_axi_bready;
    wire [1:0]                  lsu_axi_bresp;
    wire [`RV_LSU_BUS_TAG-1:0]  lsu_axi_bid;

    // AXI Read Channels
    wire                        lsu_axi_arvalid;
    wire                        lsu_axi_arready;
    wire [`RV_LSU_BUS_TAG-1:0]  lsu_axi_arid;
    wire [31:0]                 lsu_axi_araddr;
    wire [3:0]                  lsu_axi_arregion;
    wire [7:0]                  lsu_axi_arlen;
    wire [2:0]                  lsu_axi_arsize;
    wire [1:0]                  lsu_axi_arburst;
    wire                        lsu_axi_arlock;
    wire [3:0]                  lsu_axi_arcache;
    wire [2:0]                  lsu_axi_arprot;
    wire [3:0]                  lsu_axi_arqos;

    wire                        lsu_axi_rvalid;
    wire                        lsu_axi_rready;
    wire [`RV_LSU_BUS_TAG-1:0]  lsu_axi_rid;
    wire [63:0]                 lsu_axi_rdata;
    wire [1:0]                  lsu_axi_rresp;
    wire                        lsu_axi_rlast;

    //-------------------------- IFU AXI signals--------------------------
    // AXI Write Channels
    wire                        ifu_axi_awvalid;
    wire                        ifu_axi_awready;
    wire [`RV_IFU_BUS_TAG-1:0]  ifu_axi_awid;
    wire [31:0]                 ifu_axi_awaddr;
    wire [3:0]                  ifu_axi_awregion;
    wire [7:0]                  ifu_axi_awlen;
    wire [2:0]                  ifu_axi_awsize;
    wire [1:0]                  ifu_axi_awburst;
    wire                        ifu_axi_awlock;
    wire [3:0]                  ifu_axi_awcache;
    wire [2:0]                  ifu_axi_awprot;
    wire [3:0]                  ifu_axi_awqos;

    wire                        ifu_axi_wvalid;
    wire                        ifu_axi_wready;
    wire [63:0]                 ifu_axi_wdata;
    wire [7:0]                  ifu_axi_wstrb;
    wire                        ifu_axi_wlast;

    wire                        ifu_axi_bvalid;
    wire                        ifu_axi_bready;
    wire [1:0]                  ifu_axi_bresp;
    wire [`RV_IFU_BUS_TAG-1:0]  ifu_axi_bid;

    // AXI Read Channels
    wire                        ifu_axi_arvalid;
    wire                        ifu_axi_arready;
    wire [`RV_IFU_BUS_TAG-1:0]  ifu_axi_arid;
    wire [31:0]                 ifu_axi_araddr;
    wire [3:0]                  ifu_axi_arregion;
    wire [7:0]                  ifu_axi_arlen;
    wire [2:0]                  ifu_axi_arsize;
    wire [1:0]                  ifu_axi_arburst;
    wire                        ifu_axi_arlock;
    wire [3:0]                  ifu_axi_arcache;
    wire [2:0]                  ifu_axi_arprot;
    wire [3:0]                  ifu_axi_arqos;

    wire                        ifu_axi_rvalid;
    wire                        ifu_axi_rready;
    wire [`RV_IFU_BUS_TAG-1:0]  ifu_axi_rid;
    wire [63:0]                 ifu_axi_rdata;
    wire [1:0]                  ifu_axi_rresp;
    wire                        ifu_axi_rlast;

    //-------------------------- SB AXI signals--------------------------
    // AXI Write Channels
    wire                        sb_axi_awvalid;
    wire                        sb_axi_awready;
    wire [`RV_SB_BUS_TAG-1:0]   sb_axi_awid;
    wire [31:0]                 sb_axi_awaddr;
    wire [3:0]                  sb_axi_awregion;
    wire [7:0]                  sb_axi_awlen;
    wire [2:0]                  sb_axi_awsize;
    wire [1:0]                  sb_axi_awburst;
    wire                        sb_axi_awlock;
    wire [3:0]                  sb_axi_awcache;
    wire [2:0]                  sb_axi_awprot;
    wire [3:0]                  sb_axi_awqos;

    wire                        sb_axi_wvalid;
    wire                        sb_axi_wready;
    wire [63:0]                 sb_axi_wdata;
    wire [7:0]                  sb_axi_wstrb;
    wire                        sb_axi_wlast;

    wire                        sb_axi_bvalid;
    wire                        sb_axi_bready;
    wire [1:0]                  sb_axi_bresp;
    wire [`RV_SB_BUS_TAG-1:0]   sb_axi_bid;

    // AXI Read Channels
    wire                        sb_axi_arvalid;
    wire                        sb_axi_arready;
    wire [`RV_SB_BUS_TAG-1:0]   sb_axi_arid;
    wire [31:0]                 sb_axi_araddr;
    wire [3:0]                  sb_axi_arregion;
    wire [7:0]                  sb_axi_arlen;
    wire [2:0]                  sb_axi_arsize;
    wire [1:0]                  sb_axi_arburst;
    wire                        sb_axi_arlock;
    wire [3:0]                  sb_axi_arcache;
    wire [2:0]                  sb_axi_arprot;
    wire [3:0]                  sb_axi_arqos;

    wire                        sb_axi_rvalid;
    wire                        sb_axi_rready;
    wire [`RV_SB_BUS_TAG-1:0]   sb_axi_rid;
    wire [63:0]                 sb_axi_rdata;
    wire [1:0]                  sb_axi_rresp;
    wire                        sb_axi_rlast;

   //-------------------------- DMA AXI signals--------------------------
   // AXI Write Channels
    wire                        dma_axi_awvalid;
    wire                        dma_axi_awready;
    wire [`RV_DMA_BUS_TAG-1:0]  dma_axi_awid;
    wire [31:0]                 dma_axi_awaddr;
    wire [2:0]                  dma_axi_awsize;
    wire [2:0]                  dma_axi_awprot;
    wire [7:0]                  dma_axi_awlen;
    wire [1:0]                  dma_axi_awburst;


    wire                        dma_axi_wvalid;
    wire                        dma_axi_wready;
    wire [63:0]                 dma_axi_wdata;
    wire [7:0]                  dma_axi_wstrb;
    wire                        dma_axi_wlast;

    wire                        dma_axi_bvalid;
    wire                        dma_axi_bready;
    wire [1:0]                  dma_axi_bresp;
    wire [`RV_DMA_BUS_TAG-1:0]  dma_axi_bid;

    // AXI Read Channels
    wire                        dma_axi_arvalid;
    wire                        dma_axi_arready;
    wire [`RV_DMA_BUS_TAG-1:0]  dma_axi_arid;
    wire [31:0]                 dma_axi_araddr;
    wire [2:0]                  dma_axi_arsize;
    wire [2:0]                  dma_axi_arprot;
    wire [7:0]                  dma_axi_arlen;
    wire [1:0]                  dma_axi_arburst;

    wire                        dma_axi_rvalid;
    wire                        dma_axi_rready;
    wire [`RV_DMA_BUS_TAG-1:0]  dma_axi_rid;
    wire [63:0]                 dma_axi_rdata;
    wire [1:0]                  dma_axi_rresp;
    wire                        dma_axi_rlast;

    wire                        lmem_axi_arvalid;
    wire                        lmem_axi_arready;

    wire                        lmem_axi_rvalid;
    wire [`RV_LSU_BUS_TAG-1:0]  lmem_axi_rid;
    wire [1:0]                  lmem_axi_rresp;
    wire [63:0]                 lmem_axi_rdata;
    wire                        lmem_axi_rlast;
    wire                        lmem_axi_rready;

    wire                        lmem_axi_awvalid;
    wire                        lmem_axi_awready;

    wire                        lmem_axi_wvalid;
    wire                        lmem_axi_wready;

    wire [1:0]                  lmem_axi_bresp;
    wire                        lmem_axi_bvalid;
    wire [`RV_LSU_BUS_TAG-1:0]  lmem_axi_bid;
    wire                        lmem_axi_bready;

    // SN0-0 interface
    wire                        sn0_0_axi_awvalid;
    wire                        sn0_0_axi_awready;
    wire [10:0]                 sn0_0_axi_awid;
    wire [31:0]                 sn0_0_axi_awaddr;
    wire [3:0]                  sn0_0_axi_awregion;
    wire [7:0]                  sn0_0_axi_awlen;
    wire [2:0]                  sn0_0_axi_awsize;
    wire [1:0]                  sn0_0_axi_awburst;
    wire                        sn0_0_axi_awlock;
    wire [3:0]                  sn0_0_axi_awcache;
    wire [2:0]                  sn0_0_axi_awprot;
    wire [3:0]                  sn0_0_axi_awqos;

    wire                        sn0_0_axi_wvalid;
    wire                        sn0_0_axi_wready;
    wire [63:0]                 sn0_0_axi_wdata;
    wire [7:0]                  sn0_0_axi_wstrb;
    wire                        sn0_0_axi_wlast;

    wire                        sn0_0_axi_bvalid;
    wire                        sn0_0_axi_bready;
    wire [1:0]                  sn0_0_axi_bresp;
    wire [10:0]                 sn0_0_axi_bid;

    wire                        sn0_0_axi_arvalid;
    wire                        sn0_0_axi_arready;
    wire [10:0]                 sn0_0_axi_arid;
    wire [31:0]                 sn0_0_axi_araddr;
    wire [3:0]                  sn0_0_axi_arregion;
    wire [7:0]                  sn0_0_axi_arlen;
    wire [2:0]                  sn0_0_axi_arsize;
    wire [1:0]                  sn0_0_axi_arburst;
    wire                        sn0_0_axi_arlock;
    wire [3:0]                  sn0_0_axi_arcache;
    wire [2:0]                  sn0_0_axi_arprot;
    wire [3:0]                  sn0_0_axi_arqos;

    wire                        sn0_0_axi_rvalid;
    wire                        sn0_0_axi_rready;
    wire [10:0]                 sn0_0_axi_rid;
    wire [63:0]                 sn0_0_axi_rdata;
    wire [1:0]                  sn0_0_axi_rresp;
    wire                        sn0_0_axi_rlast;

    // SN1-0 interface
    wire                        sn1_0_axi_awvalid;
    wire                        sn1_0_axi_awready;
    wire [10:0]                 sn1_0_axi_awid;
    wire [31:0]                 sn1_0_axi_awaddr;
    wire [3:0]                  sn1_0_axi_awregion;
    wire [7:0]                  sn1_0_axi_awlen;
    wire [2:0]                  sn1_0_axi_awsize;
    wire [1:0]                  sn1_0_axi_awburst;
    wire                        sn1_0_axi_awlock;
    wire [3:0]                  sn1_0_axi_awcache;
    wire [2:0]                  sn1_0_axi_awprot;
    wire [3:0]                  sn1_0_axi_awqos;

    wire                        sn1_0_axi_wvalid;
    wire                        sn1_0_axi_wready;
    wire [63:0]                 sn1_0_axi_wdata;
    wire [7:0]                  sn1_0_axi_wstrb;
    wire                        sn1_0_axi_wlast;

    wire                        sn1_0_axi_bvalid;
    wire                        sn1_0_axi_bready;
    wire [1:0]                  sn1_0_axi_bresp;
    wire [10:0]                 sn1_0_axi_bid;

    wire                        sn1_0_axi_arvalid;
    wire                        sn1_0_axi_arready;
    wire [10:0]                 sn1_0_axi_arid;
    wire [31:0]                 sn1_0_axi_araddr;
    wire [3:0]                  sn1_0_axi_arregion;
    wire [7:0]                  sn1_0_axi_arlen;
    wire [2:0]                  sn1_0_axi_arsize;
    wire [1:0]                  sn1_0_axi_arburst;
    wire                        sn1_0_axi_arlock;
    wire [3:0]                  sn1_0_axi_arcache;
    wire [2:0]                  sn1_0_axi_arprot;
    wire [3:0]                  sn1_0_axi_arqos;

    wire                        sn1_0_axi_rvalid;
    wire                        sn1_0_axi_rready;
    wire [10:0]                 sn1_0_axi_rid;
    wire [63:0]                 sn1_0_axi_rdata;
    wire [1:0]                  sn1_0_axi_rresp;
    wire                        sn1_0_axi_rlast;

    // SN2-0 interface
    wire                        sn2_0_axi_awvalid;
    wire                        sn2_0_axi_awready;
    wire [10:0]                 sn2_0_axi_awid;
    wire [31:0]                 sn2_0_axi_awaddr;
    wire [3:0]                  sn2_0_axi_awregion;
    wire [7:0]                  sn2_0_axi_awlen;
    wire [2:0]                  sn2_0_axi_awsize;
    wire [1:0]                  sn2_0_axi_awburst;
    wire                        sn2_0_axi_awlock;
    wire [3:0]                  sn2_0_axi_awcache;
    wire [2:0]                  sn2_0_axi_awprot;
    wire [3:0]                  sn2_0_axi_awqos;

    wire                        sn2_0_axi_wvalid;
    wire                        sn2_0_axi_wready;
    wire [63:0]                 sn2_0_axi_wdata;
    wire [7:0]                  sn2_0_axi_wstrb;
    wire                        sn2_0_axi_wlast;

    wire                        sn2_0_axi_bvalid;
    wire                        sn2_0_axi_bready;
    wire [1:0]                  sn2_0_axi_bresp;
    wire [10:0]                 sn2_0_axi_bid;

    wire                        sn2_0_axi_arvalid;
    wire                        sn2_0_axi_arready;
    wire [10:0]                 sn2_0_axi_arid;
    wire [31:0]                 sn2_0_axi_araddr;
    wire [3:0]                  sn2_0_axi_arregion;
    wire [7:0]                  sn2_0_axi_arlen;
    wire [2:0]                  sn2_0_axi_arsize;
    wire [1:0]                  sn2_0_axi_arburst;
    wire                        sn2_0_axi_arlock;
    wire [3:0]                  sn2_0_axi_arcache;
    wire [2:0]                  sn2_0_axi_arprot;
    wire [3:0]                  sn2_0_axi_arqos;

    wire                        sn2_0_axi_rvalid;
    wire                        sn2_0_axi_rready;
    wire [10:0]                 sn2_0_axi_rid;
    wire [63:0]                 sn2_0_axi_rdata;
    wire [1:0]                  sn2_0_axi_rresp;
    wire                        sn2_0_axi_rlast;

    // SN3-0 interface
    wire                        sn3_0_axi_awvalid;
    wire                        sn3_0_axi_awready;
    wire [10:0]                 sn3_0_axi_awid;
    wire [31:0]                 sn3_0_axi_awaddr;
    wire [3:0]                  sn3_0_axi_awregion;
    wire [7:0]                  sn3_0_axi_awlen;
    wire [2:0]                  sn3_0_axi_awsize;
    wire [1:0]                  sn3_0_axi_awburst;
    wire                        sn3_0_axi_awlock;
    wire [3:0]                  sn3_0_axi_awcache;
    wire [2:0]                  sn3_0_axi_awprot;
    wire [3:0]                  sn3_0_axi_awqos;

    wire                        sn3_0_axi_wvalid;
    wire                        sn3_0_axi_wready;
    wire [63:0]                 sn3_0_axi_wdata;
    wire [7:0]                  sn3_0_axi_wstrb;
    wire                        sn3_0_axi_wlast;

    wire                        sn3_0_axi_bvalid;
    wire                        sn3_0_axi_bready;
    wire [1:0]                  sn3_0_axi_bresp;
    wire [10:0]                 sn3_0_axi_bid;

    wire                        sn3_0_axi_arvalid;
    wire                        sn3_0_axi_arready;
    wire [10:0]                 sn3_0_axi_arid;
    wire [31:0]                 sn3_0_axi_araddr;
    wire [3:0]                  sn3_0_axi_arregion;
    wire [7:0]                  sn3_0_axi_arlen;
    wire [2:0]                  sn3_0_axi_arsize;
    wire [1:0]                  sn3_0_axi_arburst;
    wire                        sn3_0_axi_arlock;
    wire [3:0]                  sn3_0_axi_arcache;
    wire [2:0]                  sn3_0_axi_arprot;
    wire [3:0]                  sn3_0_axi_arqos;

    wire                        sn3_0_axi_rvalid;
    wire                        sn3_0_axi_rready;
    wire [10:0]                 sn3_0_axi_rid;
    wire [63:0]                 sn3_0_axi_rdata;
    wire [1:0]                  sn3_0_axi_rresp;
    wire                        sn3_0_axi_rlast;

    // SN0-1 interface
    wire                        sn0_1_axi_awvalid;
    wire                        sn0_1_axi_awready;
    wire [10:0]                 sn0_1_axi_awid;
    wire [31:0]                 sn0_1_axi_awaddr;
    wire [3:0]                  sn0_1_axi_awregion;
    wire [7:0]                  sn0_1_axi_awlen;
    wire [2:0]                  sn0_1_axi_awsize;
    wire [1:0]                  sn0_1_axi_awburst;
    wire                        sn0_1_axi_awlock;
    wire [3:0]                  sn0_1_axi_awcache;
    wire [2:0]                  sn0_1_axi_awprot;
    wire [3:0]                  sn0_1_axi_awqos;

    wire                        sn0_1_axi_wvalid;
    wire                        sn0_1_axi_wready;
    wire [63:0]                 sn0_1_axi_wdata;
    wire [7:0]                  sn0_1_axi_wstrb;
    wire                        sn0_1_axi_wlast;

    wire                        sn0_1_axi_bvalid;
    wire                        sn0_1_axi_bready;
    wire [1:0]                  sn0_1_axi_bresp;
    wire [10:0]                 sn0_1_axi_bid;

    wire                        sn0_1_axi_arvalid;
    wire                        sn0_1_axi_arready;
    wire [10:0]                 sn0_1_axi_arid;
    wire [31:0]                 sn0_1_axi_araddr;
    wire [3:0]                  sn0_1_axi_arregion;
    wire [7:0]                  sn0_1_axi_arlen;
    wire [2:0]                  sn0_1_axi_arsize;
    wire [1:0]                  sn0_1_axi_arburst;
    wire                        sn0_1_axi_arlock;
    wire [3:0]                  sn0_1_axi_arcache;
    wire [2:0]                  sn0_1_axi_arprot;
    wire [3:0]                  sn0_1_axi_arqos;

    wire                        sn0_1_axi_rvalid;
    wire                        sn0_1_axi_rready;
    wire [10:0]                 sn0_1_axi_rid;
    wire [63:0]                 sn0_1_axi_rdata;
    wire [1:0]                  sn0_1_axi_rresp;
    wire                        sn0_1_axi_rlast;

    // SN1-1 interface
    wire                        sn1_1_axi_awvalid;
    wire                        sn1_1_axi_awready;
    wire [10:0]                 sn1_1_axi_awid;
    wire [31:0]                 sn1_1_axi_awaddr;
    wire [3:0]                  sn1_1_axi_awregion;
    wire [7:0]                  sn1_1_axi_awlen;
    wire [2:0]                  sn1_1_axi_awsize;
    wire [1:0]                  sn1_1_axi_awburst;
    wire                        sn1_1_axi_awlock;
    wire [3:0]                  sn1_1_axi_awcache;
    wire [2:0]                  sn1_1_axi_awprot;
    wire [3:0]                  sn1_1_axi_awqos;

    wire                        sn1_1_axi_wvalid;
    wire                        sn1_1_axi_wready;
    wire [63:0]                 sn1_1_axi_wdata;
    wire [7:0]                  sn1_1_axi_wstrb;
    wire                        sn1_1_axi_wlast;

    wire                        sn1_1_axi_bvalid;
    wire                        sn1_1_axi_bready;
    wire [1:0]                  sn1_1_axi_bresp;
    wire [10:0]                 sn1_1_axi_bid;

    wire                        sn1_1_axi_arvalid;
    wire                        sn1_1_axi_arready;
    wire [10:0]                 sn1_1_axi_arid;
    wire [31:0]                 sn1_1_axi_araddr;
    wire [3:0]                  sn1_1_axi_arregion;
    wire [7:0]                  sn1_1_axi_arlen;
    wire [2:0]                  sn1_1_axi_arsize;
    wire [1:0]                  sn1_1_axi_arburst;
    wire                        sn1_1_axi_arlock;
    wire [3:0]                  sn1_1_axi_arcache;
    wire [2:0]                  sn1_1_axi_arprot;
    wire [3:0]                  sn1_1_axi_arqos;

    wire                        sn1_1_axi_rvalid;
    wire                        sn1_1_axi_rready;
    wire [10:0]                 sn1_1_axi_rid;
    wire [63:0]                 sn1_1_axi_rdata;
    wire [1:0]                  sn1_1_axi_rresp;
    wire                        sn1_1_axi_rlast;

    // SN2-1 interface
    wire                        sn2_1_axi_awvalid;
    wire                        sn2_1_axi_awready;
    wire [10:0]                 sn2_1_axi_awid;
    wire [31:0]                 sn2_1_axi_awaddr;
    wire [3:0]                  sn2_1_axi_awregion;
    wire [7:0]                  sn2_1_axi_awlen;
    wire [2:0]                  sn2_1_axi_awsize;
    wire [1:0]                  sn2_1_axi_awburst;
    wire                        sn2_1_axi_awlock;
    wire [3:0]                  sn2_1_axi_awcache;
    wire [2:0]                  sn2_1_axi_awprot;
    wire [3:0]                  sn2_1_axi_awqos;

    wire                        sn2_1_axi_wvalid;
    wire                        sn2_1_axi_wready;
    wire [63:0]                 sn2_1_axi_wdata;
    wire [7:0]                  sn2_1_axi_wstrb;
    wire                        sn2_1_axi_wlast;

    wire                        sn2_1_axi_bvalid;
    wire                        sn2_1_axi_bready;
    wire [1:0]                  sn2_1_axi_bresp;
    wire [10:0]                 sn2_1_axi_bid;

    wire                        sn2_1_axi_arvalid;
    wire                        sn2_1_axi_arready;
    wire [10:0]                 sn2_1_axi_arid;
    wire [31:0]                 sn2_1_axi_araddr;
    wire [3:0]                  sn2_1_axi_arregion;
    wire [7:0]                  sn2_1_axi_arlen;
    wire [2:0]                  sn2_1_axi_arsize;
    wire [1:0]                  sn2_1_axi_arburst;
    wire                        sn2_1_axi_arlock;
    wire [3:0]                  sn2_1_axi_arcache;
    wire [2:0]                  sn2_1_axi_arprot;
    wire [3:0]                  sn2_1_axi_arqos;

    wire                        sn2_1_axi_rvalid;
    wire                        sn2_1_axi_rready;
    wire [10:0]                 sn2_1_axi_rid;
    wire [63:0]                 sn2_1_axi_rdata;
    wire [1:0]                  sn2_1_axi_rresp;
    wire                        sn2_1_axi_rlast;

    // SN3-1 interface
    wire                        sn3_1_axi_awvalid;
    wire                        sn3_1_axi_awready;
    wire [10:0]                 sn3_1_axi_awid;
    wire [31:0]                 sn3_1_axi_awaddr;
    wire [3:0]                  sn3_1_axi_awregion;
    wire [7:0]                  sn3_1_axi_awlen;
    wire [2:0]                  sn3_1_axi_awsize;
    wire [1:0]                  sn3_1_axi_awburst;
    wire                        sn3_1_axi_awlock;
    wire [3:0]                  sn3_1_axi_awcache;
    wire [2:0]                  sn3_1_axi_awprot;
    wire [3:0]                  sn3_1_axi_awqos;

    wire                        sn3_1_axi_wvalid;
    wire                        sn3_1_axi_wready;
    wire [63:0]                 sn3_1_axi_wdata;
    wire [7:0]                  sn3_1_axi_wstrb;
    wire                        sn3_1_axi_wlast;

    wire                        sn3_1_axi_bvalid;
    wire                        sn3_1_axi_bready;
    wire [1:0]                  sn3_1_axi_bresp;
    wire [10:0]                 sn3_1_axi_bid;

    wire                        sn3_1_axi_arvalid;
    wire                        sn3_1_axi_arready;
    wire [10:0]                 sn3_1_axi_arid;
    wire [31:0]                 sn3_1_axi_araddr;
    wire [3:0]                  sn3_1_axi_arregion;
    wire [7:0]                  sn3_1_axi_arlen;
    wire [2:0]                  sn3_1_axi_arsize;
    wire [1:0]                  sn3_1_axi_arburst;
    wire                        sn3_1_axi_arlock;
    wire [3:0]                  sn3_1_axi_arcache;
    wire [2:0]                  sn3_1_axi_arprot;
    wire [3:0]                  sn3_1_axi_arqos;

    wire                        sn3_1_axi_rvalid;
    wire                        sn3_1_axi_rready;
    wire [10:0]                 sn3_1_axi_rid;
    wire [63:0]                 sn3_1_axi_rdata;
    wire [1:0]                  sn3_1_axi_rresp;
    wire                        sn3_1_axi_rlast;
    
`endif
    wire[63:0]                  WriteData;
    string                      abi_reg[32]; // ABI register names

`define DEC rvtop.veer.dec

    assign mailbox_write = lmem.mailbox_write;
    assign WriteData = lmem.WriteData;
    assign mailbox_data_val = WriteData[7:0] > 8'h5 && WriteData[7:0] < 8'h7f;

    parameter MAX_CYCLES = 10_000_000;

    integer fd, tp, el;

    always @(negedge core_clk) begin
        cycleCnt <= cycleCnt+1;
        // Test timeout monitor
        if(cycleCnt == MAX_CYCLES) begin
            $display ("Hit max cycle count (%0d) .. stopping",cycleCnt);
            $finish;
        end
        // cansol Monitor
        if( mailbox_data_val & mailbox_write) begin
            $fwrite(fd,"%c", WriteData[7:0]);
            $write("%c", WriteData[7:0]);
        end
        // End Of test monitor
        if(mailbox_write && WriteData[7:0] == 8'hff) begin
            $display("\nFinished : minstret = %0d, mcycle = %0d", `DEC.tlu.minstretl[31:0],`DEC.tlu.mcyclel[31:0]);
            $display("See \"exec.log\" for execution trace with register updates..\n");
            $display("TEST_PASSED");
            $finish;
        end
        else if(mailbox_write && WriteData[7:0] == 8'h1) begin
            $display("TEST_FAILED");
            $finish;
        end
    end


    // trace monitor
    always @(posedge core_clk) begin
        wb_valid[1:0]  <= '{`DEC.dec_i1_wen_wb, `DEC.dec_i0_wen_wb};
        wb_dest[1:0]   <= '{`DEC.dec_i1_waddr_wb, `DEC.dec_i0_waddr_wb};
        wb_data[1:0]   <= '{`DEC.dec_i1_wdata_wb, `DEC.dec_i0_wdata_wb};
        if (trace_rv_i_valid_ip !== 0) begin
           $fwrite(tp,"%b,%h,%h,%0h,%0h,3,%b,%h,%h,%b\n", trace_rv_i_valid_ip, trace_rv_i_address_ip[63:32], trace_rv_i_address_ip[31:0],
                  trace_rv_i_insn_ip[63:32], trace_rv_i_insn_ip[31:0],trace_rv_i_exception_ip,trace_rv_i_ecause_ip,
                  trace_rv_i_tval_ip,trace_rv_i_interrupt_ip);
           // Basic trace - no exception register updates
           // #1 0 ee000000 b0201073 c 0b02       00000000
           for (int i=0; i<2; i++)
               if (trace_rv_i_valid_ip[i]==1) begin
                   commit_count++;
                   $fwrite (el, "%10d : %8s %0d %h %h%13s ; %s\n",cycleCnt, $sformatf("#%0d",commit_count), 0,
                           trace_rv_i_address_ip[31+i*32 -:32], trace_rv_i_insn_ip[31+i*32-:32],
                           (wb_dest[i] !=0 && wb_valid[i]) ?  $sformatf("%s=%h", abi_reg[wb_dest[i]], wb_data[i]) : "             ",
                           dasm(trace_rv_i_insn_ip[31+i*32 -:32], trace_rv_i_address_ip[31+i*32-:32], wb_dest[i] & {5{wb_valid[i]}}, wb_data[i])
                           );
               end
        end
        if(`DEC.dec_nonblock_load_wen) begin
            $fwrite (el, "%10d : %10d%22s=%h ; nbL\n", cycleCnt, 0, abi_reg[`DEC.dec_nonblock_load_waddr], `DEC.lsu_nonblock_load_data);
            tb_top.gpr[0][`DEC.dec_nonblock_load_waddr] = `DEC.lsu_nonblock_load_data;
        end
    end


    initial begin
        abi_reg[0] = "zero";
        abi_reg[1] = "ra";
        abi_reg[2] = "sp";
        abi_reg[3] = "gp";
        abi_reg[4] = "tp";
        abi_reg[5] = "t0";
        abi_reg[6] = "t1";
        abi_reg[7] = "t2";
        abi_reg[8] = "s0";
        abi_reg[9] = "s1";
        abi_reg[10] = "a0";
        abi_reg[11] = "a1";
        abi_reg[12] = "a2";
        abi_reg[13] = "a3";
        abi_reg[14] = "a4";
        abi_reg[15] = "a5";
        abi_reg[16] = "a6";
        abi_reg[17] = "a7";
        abi_reg[18] = "s2";
        abi_reg[19] = "s3";
        abi_reg[20] = "s4";
        abi_reg[21] = "s5";
        abi_reg[22] = "s6";
        abi_reg[23] = "s7";
        abi_reg[24] = "s8";
        abi_reg[25] = "s9";
        abi_reg[26] = "s10";
        abi_reg[27] = "s11";
        abi_reg[28] = "t3";
        abi_reg[29] = "t4";
        abi_reg[30] = "t5";
        abi_reg[31] = "t6";
    // tie offs
        jtag_id[31:28] = 4'b1;
        jtag_id[27:12] = '0;
        jtag_id[11:1]  = 11'h45;
        reset_vector = 32'h0;
        nmi_vector   = 32'hee000000;
        nmi_int   = 0;

        $readmemh("program.hex",  lmem.mem);
        $readmemh("program.hex",  imem.mem);
        tp = $fopen("trace_port.csv","w");
        el = $fopen("exec.log","w");
        $fwrite (el, "//   Cycle : #inst  hart   pc    opcode    reg=value   ; mnemonic\n");
        $fwrite (el, "//---------------------------------------------------------------\n");
        fd = $fopen("console.log","w");
        commit_count = 0;
        // preload_dccm();
        // preload_iccm();

`ifndef VERILATOR
        if($test$plusargs("dumpon")) $dumpvars;
        forever  core_clk = #5 ~core_clk;
`endif
    end


    assign rst_l = cycleCnt > 5;
    assign porst_l = cycleCnt >2;

   //=========================================================================-
   // RTL instance
   //=========================================================================-
NoC_wrapper u_noc
(
    .clock                  ( core_clk ),
    .reset                  ( ~rst_l ),

    // RN0 interface
    .rn0_AWREADY            (lsu_axi_wready),
    .rn0_AWVALID            (lsu_axi_awvalid),
    .rn0_AWID               (lsu_axi_awid),
    .rn0_AWADDR             (lsu_axi_awaddr),
    .rn0_AWREGION           (lsu_axi_awregion),
    .rn0_AWLEN              (lsu_axi_awlen),
    .rn0_AWSIZE             (lsu_axi_awsize),
    .rn0_AWBURST            (lsu_axi_awburst),
    .rn0_AWLOCK             (lsu_axi_awlock),
    .rn0_AWCACHE            (lsu_axi_awcache),
    .rn0_AWPROT             (lsu_axi_awprot),
    .rn0_AWQOS              (lsu_axi_awqos),
    .rn0_AWUSER             ( 4'd0 ),

    .rn0_WREADY             (lsu_axi_wvalid),
    .rn0_WVALID             (lsu_axi_wready),
    .rn0_WDATA              (lsu_axi_wdata),
    .rn0_WSTRB              (lsu_axi_wstrb),
    .rn0_WLAST              (lsu_axi_wlast),
    .rn0_WUSER              ( 4'd0 ),

    .rn0_BREADY             (lsu_axi_bready),
    .rn0_BVALID             (lsu_axi_bvalid),
    .rn0_BID                (lsu_axi_bid),
    .rn0_BRESP              (lsu_axi_bresp),
    .rn0_BUSER              (),

    .rn0_ARREADY            (lsu_axi_arready),
    .rn0_ARVALID            (lsu_axi_arvalid),
    .rn0_ARID               (lsu_axi_arid),
    .rn0_ARADDR             (lsu_axi_araddr),
    .rn0_ARREGION           (lsu_axi_arregion),
    .rn0_ARLEN              (lsu_axi_arlen),
    .rn0_ARSIZE             (lsu_axi_arsize),
    .rn0_ARBURST            (lsu_axi_arburst),
    .rn0_ARLOCK             (lsu_axi_arlock),
    .rn0_ARCACHE            (lsu_axi_arcache),
    .rn0_ARPROT             (lsu_axi_arprot),
    .rn0_ARQOS              (lsu_axi_arqos),
    .rn0_ARUSER             ( 4'd0 ),

    .rn0_RREADY             (lsu_axi_rready),
    .rn0_RVALID             (lsu_axi_rvalid),
    .rn0_RID                (lsu_axi_rid),
    .rn0_RDATA              (lsu_axi_rdata),
    .rn0_RRESP              (lsu_axi_rresp),
    .rn0_RLAST              (lsu_axi_rlast),
    .rn0_RUSER              ( 4'd0 ),

    // RN1 interface
    .rn1_AWREADY            (),
    .rn1_AWVALID            (),
    .rn1_AWID               (),
    .rn1_AWADDR             (),
    .rn1_AWREGION           (),
    .rn1_AWLEN              (),
    .rn1_AWSIZE             (),
    .rn1_AWBURST            (),
    .rn1_AWLOCK             (),
    .rn1_AWCACHE            (),
    .rn1_AWPROT             (),
    .rn1_AWQOS              (),
    .rn1_AWUSER             (),

    .rn1_WREADY             (),
    .rn1_WVALID             (),
    .rn1_WDATA              (),
    .rn1_WSTRB              (),
    .rn1_WLAST              (),
    .rn1_WUSER              (),

    .rn1_BREADY             (),
    .rn1_BVALID             (),
    .rn1_BID                (),
    .rn1_BRESP              (),
    .rn1_BUSER              (),

    .rn1_ARREADY            (),
    .rn1_ARVALID            (),
    .rn1_ARID               (),
    .rn1_ARADDR             (),
    .rn1_ARREGION           (),
    .rn1_ARLEN              (),
    .rn1_ARSIZE             (),
    .rn1_ARBURST            (),
    .rn1_ARLOCK             (),
    .rn1_ARCACHE            (),
    .rn1_ARPROT             (),
    .rn1_ARQOS              (),
    .rn1_ARUSER             (),

    .rn1_RREADY             (),
    .rn1_RVALID             (),
    .rn1_RID                (),
    .rn1_RDATA              (),
    .rn1_RRESP              (),
    .rn1_RLAST              (),
    .rn1_RUSER              (),

    // RN2 interface
    .rn2_AWREADY            (),
    .rn2_AWVALID            (),
    .rn2_AWID               (),
    .rn2_AWADDR             (),
    .rn2_AWREGION           (),
    .rn2_AWLEN              (),
    .rn2_AWSIZE             (),
    .rn2_AWBURST            (),
    .rn2_AWLOCK             (),
    .rn2_AWCACHE            (),
    .rn2_AWPROT             (),
    .rn2_AWQOS              (),
    .rn2_AWUSER             (),

    .rn2_WREADY             (),
    .rn2_WVALID             (),
    .rn2_WDATA              (),
    .rn2_WSTRB              (),
    .rn2_WLAST              (),
    .rn2_WUSER              (),

    .rn2_BREADY             (),
    .rn2_BVALID             (),
    .rn2_BID                (),
    .rn2_BRESP              (),
    .rn2_BUSER              (),

    .rn2_ARREADY            (),
    .rn2_ARVALID            (),
    .rn2_ARID               (),
    .rn2_ARADDR             (),
    .rn2_ARREGION           (),
    .rn2_ARLEN              (),
    .rn2_ARSIZE             (),
    .rn2_ARBURST            (),
    .rn2_ARLOCK             (),
    .rn2_ARCACHE            (),
    .rn2_ARPROT             (),
    .rn2_ARQOS              (),
    .rn2_ARUSER             (),

    .rn2_RREADY             (),
    .rn2_RVALID             (),
    .rn2_RID                (),
    .rn2_RDATA              (),
    .rn2_RRESP              (),
    .rn2_RLAST              (),
    .rn2_RUSER              (),

    // RN3 interface
    .rn3_AWREADY            (),
    .rn3_AWVALID            (),
    .rn3_AWID               (),
    .rn3_AWADDR             (),
    .rn3_AWREGION           (),
    .rn3_AWLEN              (),
    .rn3_AWSIZE             (),
    .rn3_AWBURST            (),
    .rn3_AWLOCK             (),
    .rn3_AWCACHE            (),
    .rn3_AWPROT             (),
    .rn3_AWQOS              (),
    .rn3_AWUSER             (),

    .rn3_WREADY             (),
    .rn3_WVALID             (),
    .rn3_WDATA              (),
    .rn3_WSTRB              (),
    .rn3_WLAST              (),
    .rn3_WUSER              (),

    .rn3_BREADY             (),
    .rn3_BVALID             (),
    .rn3_BID                (),
    .rn3_BRESP              (),
    .rn3_BUSER              (),

    .rn3_ARREADY            (),
    .rn3_ARVALID            (),
    .rn3_ARID               (),
    .rn3_ARADDR             (),
    .rn3_ARREGION           (),
    .rn3_ARLEN              (),
    .rn3_ARSIZE             (),
    .rn3_ARBURST            (),
    .rn3_ARLOCK             (),
    .rn3_ARCACHE            (),
    .rn3_ARPROT             (),
    .rn3_ARQOS              (),
    .rn3_ARUSER             (),

    .rn3_RREADY             (),
    .rn3_RVALID             (),
    .rn3_RID                (),
    .rn3_RDATA              (),
    .rn3_RRESP              (),
    .rn3_RLAST              (),
    .rn3_RUSER              (),

    // SN0-0 interface
    .sn0_0_AWVALID          (sn0_0_axi_awvalid),
    .sn0_0_AWREADY          (sn0_0_axi_awready),
    .sn0_0_AWID             (sn0_0_axi_awid),
    .sn0_0_AWADDR           (sn0_0_axi_awaddr),
    .sn0_0_AWREGION         (sn0_0_axi_awregion),
    .sn0_0_AWLEN            (sn0_0_axi_awlen),
    .sn0_0_AWSIZE           (sn0_0_axi_awsize),
    .sn0_0_AWBURST          (sn0_0_axi_awburst),
    .sn0_0_AWLOCK           (sn0_0_axi_awlock),
    .sn0_0_AWCACHE          (sn0_0_axi_awcache),
    .sn0_0_AWPROT           (sn0_0_axi_awprot),
    .sn0_0_AWQOS            (sn0_0_axi_awqos),

    .sn0_0_WVALID           (sn0_0_axi_wvalid),
    .sn0_0_WREADY           (sn0_0_axi_wready),
    .sn0_0_WDATA            (sn0_0_axi_wdata),
    .sn0_0_WSTRB            (sn0_0_axi_wstrb),
    .sn0_0_WLAST            (sn0_0_axi_wlast),

    .sn0_0_BVALID           (sn0_0_axi_bvalid),
    .sn0_0_BREADY           (sn0_0_axi_bready),
    .sn0_0_BRESP            (sn0_0_axi_bresp),
    .sn0_0_BID              (sn0_0_axi_bid),

    .sn0_0_ARVALID          (sn0_0_axi_arvalid),
    .sn0_0_ARREADY          (sn0_0_axi_arready),
    .sn0_0_ARID             (sn0_0_axi_arid),
    .sn0_0_ARADDR           (sn0_0_axi_araddr),
    .sn0_0_ARREGION         (sn0_0_axi_arregion),
    .sn0_0_ARLEN            (sn0_0_axi_arlen),
    .sn0_0_ARSIZE           (sn0_0_axi_arsize),
    .sn0_0_ARBURST          (sn0_0_axi_arburst),
    .sn0_0_ARLOCK           (sn0_0_axi_arlock),
    .sn0_0_ARCACHE          (sn0_0_axi_arcache),
    .sn0_0_ARPROT           (sn0_0_axi_arprot),
    .sn0_0_ARQOS            (sn0_0_axi_arqos),

    .sn0_0_RVALID           (sn0_0_axi_rvalid),
    .sn0_0_RREADY           (sn0_0_axi_rready),
    .sn0_0_RID              (sn0_0_axi_rid),
    .sn0_0_RDATA            (sn0_0_axi_rdata),
    .sn0_0_RRESP            (sn0_0_axi_rresp),
    .sn0_0_RLAST            (sn0_0_axi_rlast),

    // SN0-1 interface
    .sn0_1_AWVALID          (sn0_1_axi_awvalid),
    .sn0_1_AWREADY          (sn0_1_axi_awready),
    .sn0_1_AWID             (sn0_1_axi_awid),
    .sn0_1_AWADDR           (sn0_1_axi_awaddr),
    .sn0_1_AWREGION         (sn0_1_axi_awregion),
    .sn0_1_AWLEN            (sn0_1_axi_awlen),
    .sn0_1_AWSIZE           (sn0_1_axi_awsize),
    .sn0_1_AWBURST          (sn0_1_axi_awburst),
    .sn0_1_AWLOCK           (sn0_1_axi_awlock),
    .sn0_1_AWCACHE          (sn0_1_axi_awcache),
    .sn0_1_AWPROT           (sn0_1_axi_awprot),
    .sn0_1_AWQOS            (sn0_1_axi_awqos),

    .sn0_1_WVALID           (sn0_1_axi_wvalid),
    .sn0_1_WREADY           (sn0_1_axi_wready),
    .sn0_1_WDATA            (sn0_1_axi_wdata),
    .sn0_1_WSTRB            (sn0_1_axi_wstrb),
    .sn0_1_WLAST            (sn0_1_axi_wlast),

    .sn0_1_BVALID           (sn0_1_axi_bvalid),
    .sn0_1_BREADY           (sn0_1_axi_bready),
    .sn0_1_BRESP            (sn0_1_axi_bresp),
    .sn0_1_BID              (sn0_1_axi_bid),

    .sn0_1_ARVALID          (sn0_1_axi_arvalid),
    .sn0_1_ARREADY          (sn0_1_axi_arready),
    .sn0_1_ARID             (sn0_1_axi_arid),
    .sn0_1_ARADDR           (sn0_1_axi_araddr),
    .sn0_1_ARREGION         (sn0_1_axi_arregion),
    .sn0_1_ARLEN            (sn0_1_axi_arlen),
    .sn0_1_ARSIZE           (sn0_1_axi_arsize),
    .sn0_1_ARBURST          (sn0_1_axi_arburst),
    .sn0_1_ARLOCK           (sn0_1_axi_arlock),
    .sn0_1_ARCACHE          (sn0_1_axi_arcache),
    .sn0_1_ARPROT           (sn0_1_axi_arprot),
    .sn0_1_ARQOS            (sn0_1_axi_arqos),

    .sn0_1_RVALID           (sn0_1_axi_rvalid),
    .sn0_1_RREADY           (sn0_1_axi_rready),
    .sn0_1_RID              (sn0_1_axi_rid),
    .sn0_1_RDATA            (sn0_1_axi_rdata),
    .sn0_1_RRESP            (sn0_1_axi_rresp),
    .sn0_1_RLAST            (sn0_1_axi_rlast),

    // SN1-0 interface
    .sn1_0_AWVALID          (sn1_0_axi_awvalid),
    .sn1_0_AWREADY          (sn1_0_axi_awready),
    .sn1_0_AWID             (sn1_0_axi_awid),
    .sn1_0_AWADDR           (sn1_0_axi_awaddr),
    .sn1_0_AWREGION         (sn1_0_axi_awregion),
    .sn1_0_AWLEN            (sn1_0_axi_awlen),
    .sn1_0_AWSIZE           (sn1_0_axi_awsize),
    .sn1_0_AWBURST          (sn1_0_axi_awburst),
    .sn1_0_AWLOCK           (sn1_0_axi_awlock),
    .sn1_0_AWCACHE          (sn1_0_axi_awcache),
    .sn1_0_AWPROT           (sn1_0_axi_awprot),
    .sn1_0_AWQOS            (sn1_0_axi_awqos),

    .sn1_0_WVALID           (sn1_0_axi_wvalid),
    .sn1_0_WREADY           (sn1_0_axi_wready),
    .sn1_0_WDATA            (sn1_0_axi_wdata),
    .sn1_0_WSTRB            (sn1_0_axi_wstrb),
    .sn1_0_WLAST            (sn1_0_axi_wlast),

    .sn1_0_BVALID           (sn1_0_axi_bvalid),
    .sn1_0_BREADY           (sn1_0_axi_bready),
    .sn1_0_BRESP            (sn1_0_axi_bresp),
    .sn1_0_BID              (sn1_0_axi_bid),

    .sn1_0_ARVALID          (sn1_0_axi_arvalid),
    .sn1_0_ARREADY          (sn1_0_axi_arready),
    .sn1_0_ARID             (sn1_0_axi_arid),
    .sn1_0_ARADDR           (sn1_0_axi_araddr),
    .sn1_0_ARREGION         (sn1_0_axi_arregion),
    .sn1_0_ARLEN            (sn1_0_axi_arlen),
    .sn1_0_ARSIZE           (sn1_0_axi_arsize),
    .sn1_0_ARBURST          (sn1_0_axi_arburst),
    .sn1_0_ARLOCK           (sn1_0_axi_arlock),
    .sn1_0_ARCACHE          (sn1_0_axi_arcache),
    .sn1_0_ARPROT           (sn1_0_axi_arprot),
    .sn1_0_ARQOS            (sn1_0_axi_arqos),

    .sn1_0_RVALID           (sn1_0_axi_rvalid),
    .sn1_0_RREADY           (sn1_0_axi_rready),
    .sn1_0_RID              (sn1_0_axi_rid),
    .sn1_0_RDATA            (sn1_0_axi_rdata),
    .sn1_0_RRESP            (sn1_0_axi_rresp),
    .sn1_0_RLAST            (sn1_0_axi_rlast),

    // SN1-1 interface
    .sn1_1_AWVALID          (sn1_1_axi_awvalid),
    .sn1_1_AWREADY          (sn1_1_axi_awready),
    .sn1_1_AWID             (sn1_1_axi_awid),
    .sn1_1_AWADDR           (sn1_1_axi_awaddr),
    .sn1_1_AWREGION         (sn1_1_axi_awregion),
    .sn1_1_AWLEN            (sn1_1_axi_awlen),
    .sn1_1_AWSIZE           (sn1_1_axi_awsize),
    .sn1_1_AWBURST          (sn1_1_axi_awburst),
    .sn1_1_AWLOCK           (sn1_1_axi_awlock),
    .sn1_1_AWCACHE          (sn1_1_axi_awcache),
    .sn1_1_AWPROT           (sn1_1_axi_awprot),
    .sn1_1_AWQOS            (sn1_1_axi_awqos),

    .sn1_1_WVALID           (sn1_1_axi_wvalid),
    .sn1_1_WREADY           (sn1_1_axi_wready),
    .sn1_1_WDATA            (sn1_1_axi_wdata),
    .sn1_1_WSTRB            (sn1_1_axi_wstrb),
    .sn1_1_WLAST            (sn1_1_axi_wlast),

    .sn1_1_BVALID           (sn1_1_axi_bvalid),
    .sn1_1_BREADY           (sn1_1_axi_bready),
    .sn1_1_BRESP            (sn1_1_axi_bresp),
    .sn1_1_BID              (sn1_1_axi_bid),

    .sn1_1_ARVALID          (sn1_1_axi_arvalid),
    .sn1_1_ARREADY          (sn1_1_axi_arready),
    .sn1_1_ARID             (sn1_1_axi_arid),
    .sn1_1_ARADDR           (sn1_1_axi_araddr),
    .sn1_1_ARREGION         (sn1_1_axi_arregion),
    .sn1_1_ARLEN            (sn1_1_axi_arlen),
    .sn1_1_ARSIZE           (sn1_1_axi_arsize),
    .sn1_1_ARBURST          (sn1_1_axi_arburst),
    .sn1_1_ARLOCK           (sn1_1_axi_arlock),
    .sn1_1_ARCACHE          (sn1_1_axi_arcache),
    .sn1_1_ARPROT           (sn1_1_axi_arprot),
    .sn1_1_ARQOS            (sn1_1_axi_arqos),

    .sn1_1_RVALID           (sn1_1_axi_rvalid),
    .sn1_1_RREADY           (sn1_1_axi_rready),
    .sn1_1_RID              (sn1_1_axi_rid),
    .sn1_1_RDATA            (sn1_1_axi_rdata),
    .sn1_1_RRESP            (sn1_1_axi_rresp),
    .sn1_1_RLAST            (sn1_1_axi_rlast),

    // SN2-0 interface
    .sn2_0_AWVALID          (sn2_0_axi_awvalid),
    .sn2_0_AWREADY          (sn2_0_axi_awready),
    .sn2_0_AWID             (sn2_0_axi_awid),
    .sn2_0_AWADDR           (sn2_0_axi_awaddr),
    .sn2_0_AWREGION         (sn2_0_axi_awregion),
    .sn2_0_AWLEN            (sn2_0_axi_awlen),
    .sn2_0_AWSIZE           (sn2_0_axi_awsize),
    .sn2_0_AWBURST          (sn2_0_axi_awburst),
    .sn2_0_AWLOCK           (sn2_0_axi_awlock),
    .sn2_0_AWCACHE          (sn2_0_axi_awcache),
    .sn2_0_AWPROT           (sn2_0_axi_awprot),
    .sn2_0_AWQOS            (sn2_0_axi_awqos),

    .sn2_0_WVALID           (sn2_0_axi_wvalid),
    .sn2_0_WREADY           (sn2_0_axi_wready),
    .sn2_0_WDATA            (sn2_0_axi_wdata),
    .sn2_0_WSTRB            (sn2_0_axi_wstrb),
    .sn2_0_WLAST            (sn2_0_axi_wlast),

    .sn2_0_BVALID           (sn2_0_axi_bvalid),
    .sn2_0_BREADY           (sn2_0_axi_bready),
    .sn2_0_BRESP            (sn2_0_axi_bresp),
    .sn2_0_BID              (sn2_0_axi_bid),

    .sn2_0_ARVALID          (sn2_0_axi_arvalid),
    .sn2_0_ARREADY          (sn2_0_axi_arready),
    .sn2_0_ARID             (sn2_0_axi_arid),
    .sn2_0_ARADDR           (sn2_0_axi_araddr),
    .sn2_0_ARREGION         (sn2_0_axi_arregion),
    .sn2_0_ARLEN            (sn2_0_axi_arlen),
    .sn2_0_ARSIZE           (sn2_0_axi_arsize),
    .sn2_0_ARBURST          (sn2_0_axi_arburst),
    .sn2_0_ARLOCK           (sn2_0_axi_arlock),
    .sn2_0_ARCACHE          (sn2_0_axi_arcache),
    .sn2_0_ARPROT           (sn2_0_axi_arprot),
    .sn2_0_ARQOS            (sn2_0_axi_arqos),

    .sn2_0_RVALID           (sn2_0_axi_rvalid),
    .sn2_0_RREADY           (sn2_0_axi_rready),
    .sn2_0_RID              (sn2_0_axi_rid),
    .sn2_0_RDATA            (sn2_0_axi_rdata),
    .sn2_0_RRESP            (sn2_0_axi_rresp),
    .sn2_0_RLAST            (sn2_0_axi_rlast),

    // SN2-1 interface
    .sn2_1_AWVALID          (sn2_1_axi_awvalid),
    .sn2_1_AWREADY          (sn2_1_axi_awready),
    .sn2_1_AWID             (sn2_1_axi_awid),
    .sn2_1_AWADDR           (sn2_1_axi_awaddr),
    .sn2_1_AWREGION         (sn2_1_axi_awregion),
    .sn2_1_AWLEN            (sn2_1_axi_awlen),
    .sn2_1_AWSIZE           (sn2_1_axi_awsize),
    .sn2_1_AWBURST          (sn2_1_axi_awburst),
    .sn2_1_AWLOCK           (sn2_1_axi_awlock),
    .sn2_1_AWCACHE          (sn2_1_axi_awcache),
    .sn2_1_AWPROT           (sn2_1_axi_awprot),
    .sn2_1_AWQOS            (sn2_1_axi_awqos),

    .sn2_1_WVALID           (sn2_1_axi_wvalid),
    .sn2_1_WREADY           (sn2_1_axi_wready),
    .sn2_1_WDATA            (sn2_1_axi_wdata),
    .sn2_1_WSTRB            (sn2_1_axi_wstrb),
    .sn2_1_WLAST            (sn2_1_axi_wlast),

    .sn2_1_BVALID           (sn2_1_axi_bvalid),
    .sn2_1_BREADY           (sn2_1_axi_bready),
    .sn2_1_BRESP            (sn2_1_axi_bresp),
    .sn2_1_BID              (sn2_1_axi_bid),

    .sn2_1_ARVALID          (sn2_1_axi_arvalid),
    .sn2_1_ARREADY          (sn2_1_axi_arready),
    .sn2_1_ARID             (sn2_1_axi_arid),
    .sn2_1_ARADDR           (sn2_1_axi_araddr),
    .sn2_1_ARREGION         (sn2_1_axi_arregion),
    .sn2_1_ARLEN            (sn2_1_axi_arlen),
    .sn2_1_ARSIZE           (sn2_1_axi_arsize),
    .sn2_1_ARBURST          (sn2_1_axi_arburst),
    .sn2_1_ARLOCK           (sn2_1_axi_arlock),
    .sn2_1_ARCACHE          (sn2_1_axi_arcache),
    .sn2_1_ARPROT           (sn2_1_axi_arprot),
    .sn2_1_ARQOS            (sn2_1_axi_arqos),

    .sn2_1_RVALID           (sn2_1_axi_rvalid),
    .sn2_1_RREADY           (sn2_1_axi_rready),
    .sn2_1_RID              (sn2_1_axi_rid),
    .sn2_1_RDATA            (sn2_1_axi_rdata),
    .sn2_1_RRESP            (sn2_1_axi_rresp),
    .sn2_1_RLAST            (sn2_1_axi_rlast),

    // SN3-0 interface
    .sn3_0_AWVALID          (sn3_0_axi_awvalid),
    .sn3_0_AWREADY          (sn3_0_axi_awready),
    .sn3_0_AWID             (sn3_0_axi_awid),
    .sn3_0_AWADDR           (sn3_0_axi_awaddr),
    .sn3_0_AWREGION         (sn3_0_axi_awregion),
    .sn3_0_AWLEN            (sn3_0_axi_awlen),
    .sn3_0_AWSIZE           (sn3_0_axi_awsize),
    .sn3_0_AWBURST          (sn3_0_axi_awburst),
    .sn3_0_AWLOCK           (sn3_0_axi_awlock),
    .sn3_0_AWCACHE          (sn3_0_axi_awcache),
    .sn3_0_AWPROT           (sn3_0_axi_awprot),
    .sn3_0_AWQOS            (sn3_0_axi_awqos),

    .sn3_0_WVALID           (sn3_0_axi_wvalid),
    .sn3_0_WREADY           (sn3_0_axi_wready),
    .sn3_0_WDATA            (sn3_0_axi_wdata),
    .sn3_0_WSTRB            (sn3_0_axi_wstrb),
    .sn3_0_WLAST            (sn3_0_axi_wlast),

    .sn3_0_BVALID           (sn3_0_axi_bvalid),
    .sn3_0_BREADY           (sn3_0_axi_bready),
    .sn3_0_BRESP            (sn3_0_axi_bresp),
    .sn3_0_BID              (sn3_0_axi_bid),

    .sn3_0_ARVALID          (sn3_0_axi_arvalid),
    .sn3_0_ARREADY          (sn3_0_axi_arready),
    .sn3_0_ARID             (sn3_0_axi_arid),
    .sn3_0_ARADDR           (sn3_0_axi_araddr),
    .sn3_0_ARREGION         (sn3_0_axi_arregion),
    .sn3_0_ARLEN            (sn3_0_axi_arlen),
    .sn3_0_ARSIZE           (sn3_0_axi_arsize),
    .sn3_0_ARBURST          (sn3_0_axi_arburst),
    .sn3_0_ARLOCK           (sn3_0_axi_arlock),
    .sn3_0_ARCACHE          (sn3_0_axi_arcache),
    .sn3_0_ARPROT           (sn3_0_axi_arprot),
    .sn3_0_ARQOS            (sn3_0_axi_arqos),

    .sn3_0_RVALID           (sn3_0_axi_rvalid),
    .sn3_0_RREADY           (sn3_0_axi_rready),
    .sn3_0_RID              (sn3_0_axi_rid),
    .sn3_0_RDATA            (sn3_0_axi_rdata),
    .sn3_0_RRESP            (sn3_0_axi_rresp),
    .sn3_0_RLAST            (sn3_0_axi_rlast),

    // SN3-1 interface
    .sn3_1_AWVALID          (sn3_1_axi_awvalid),
    .sn3_1_AWREADY          (sn3_1_axi_awready),
    .sn3_1_AWID             (sn3_1_axi_awid),
    .sn3_1_AWADDR           (sn3_1_axi_awaddr),
    .sn3_1_AWREGION         (sn3_1_axi_awregion),
    .sn3_1_AWLEN            (sn3_1_axi_awlen),
    .sn3_1_AWSIZE           (sn3_1_axi_awsize),
    .sn3_1_AWBURST          (sn3_1_axi_awburst),
    .sn3_1_AWLOCK           (sn3_1_axi_awlock),
    .sn3_1_AWCACHE          (sn3_1_axi_awcache),
    .sn3_1_AWPROT           (sn3_1_axi_awprot),
    .sn3_1_AWQOS            (sn3_1_axi_awqos),

    .sn3_1_WVALID           (sn3_1_axi_wvalid),
    .sn3_1_WREADY           (sn3_1_axi_wready),
    .sn3_1_WDATA            (sn3_1_axi_wdata),
    .sn3_1_WSTRB            (sn3_1_axi_wstrb),
    .sn3_1_WLAST            (sn3_1_axi_wlast),

    .sn3_1_BVALID           (sn3_1_axi_bvalid),
    .sn3_1_BREADY           (sn3_1_axi_bready),
    .sn3_1_BRESP            (sn3_1_axi_bresp),
    .sn3_1_BID              (sn3_1_axi_bid),

    .sn3_1_ARVALID          (sn3_1_axi_arvalid),
    .sn3_1_ARREADY          (sn3_1_axi_arready),
    .sn3_1_ARID             (sn3_1_axi_arid),
    .sn3_1_ARADDR           (sn3_1_axi_araddr),
    .sn3_1_ARREGION         (sn3_1_axi_arregion),
    .sn3_1_ARLEN            (sn3_1_axi_arlen),
    .sn3_1_ARSIZE           (sn3_1_axi_arsize),
    .sn3_1_ARBURST          (sn3_1_axi_arburst),
    .sn3_1_ARLOCK           (sn3_1_axi_arlock),
    .sn3_1_ARCACHE          (sn3_1_axi_arcache),
    .sn3_1_ARPROT           (sn3_1_axi_arprot),
    .sn3_1_ARQOS            (sn3_1_axi_arqos),

    .sn3_1_RVALID           (sn3_1_axi_rvalid),
    .sn3_1_RREADY           (sn3_1_axi_rready),
    .sn3_1_RID              (sn3_1_axi_rid),
    .sn3_1_RDATA            (sn3_1_axi_rdata),
    .sn3_1_RRESP            (sn3_1_axi_rresp),
    .sn3_1_RLAST            (sn3_1_axi_rlast)
);


veer_wrapper rvtop (
    .rst_l                  ( rst_l         ),
    .dbg_rst_l              ( porst_l       ),
    .clk                    ( core_clk      ),
    .rst_vec                ( reset_vector[31:1]),
    .nmi_int                ( nmi_int       ),
    .nmi_vec                ( nmi_vector[31:1]),
    .jtag_id                ( jtag_id[31:1]),

`ifdef RV_BUILD_AHB_LITE
    .haddr                  ( ic_haddr      ),
    .hburst                 ( ic_hburst     ),
    .hmastlock              ( ic_hmastlock  ),
    .hprot                  ( ic_hprot      ),
    .hsize                  ( ic_hsize      ),
    .htrans                 ( ic_htrans     ),
    .hwrite                 ( ic_hwrite     ),

    .hrdata                 ( ic_hrdata[63:0]),
    .hready                 ( ic_hready     ),
    .hresp                  ( ic_hresp      ),

    //---------------------------------------------------------------
    // Debug AHB Master
    //---------------------------------------------------------------
    .sb_haddr               ( sb_haddr      ),
    .sb_hburst              ( sb_hburst     ),
    .sb_hmastlock           ( sb_hmastlock  ),
    .sb_hprot               ( sb_hprot      ),
    .sb_hsize               ( sb_hsize      ),
    .sb_htrans              ( sb_htrans     ),
    .sb_hwrite              ( sb_hwrite     ),
    .sb_hwdata              ( sb_hwdata     ),

    .sb_hrdata              ( sb_hrdata     ),
    .sb_hready              ( sb_hready     ),
    .sb_hresp               ( sb_hresp      ),

    //---------------------------------------------------------------
    // LSU AHB Master
    //---------------------------------------------------------------
    .lsu_haddr              ( lsu_haddr       ),
    .lsu_hburst             ( lsu_hburst      ),
    .lsu_hmastlock          ( lsu_hmastlock   ),
    .lsu_hprot              ( lsu_hprot       ),
    .lsu_hsize              ( lsu_hsize       ),
    .lsu_htrans             ( lsu_htrans      ),
    .lsu_hwrite             ( lsu_hwrite      ),
    .lsu_hwdata             ( lsu_hwdata      ),

    .lsu_hrdata             ( lsu_hrdata[63:0]),
    .lsu_hready             ( lsu_hready      ),
    .lsu_hresp              ( lsu_hresp       ),

    //---------------------------------------------------------------
    // DMA Slave
    //---------------------------------------------------------------
    .dma_haddr              ( '0 ),
    .dma_hburst             ( '0 ),
    .dma_hmastlock          ( '0 ),
    .dma_hprot              ( '0 ),
    .dma_hsize              ( '0 ),
    .dma_htrans             ( '0 ),
    .dma_hwrite             ( '0 ),
    .dma_hwdata             ( '0 ),

    .dma_hrdata             ( dma_hrdata    ),
    .dma_hresp              ( dma_hresp     ),
    .dma_hsel               ( 1'b1            ),
    .dma_hreadyin           ( dma_hready_out  ),
    .dma_hreadyout          ( dma_hready_out  ),
`endif
`ifdef RV_BUILD_AXI4
    //-------------------------- LSU AXI signals--------------------------
    // AXI Write Channels
    .lsu_axi_awvalid        (lsu_axi_awvalid),
    .lsu_axi_awready        (lsu_axi_awready),
    .lsu_axi_awid           (lsu_axi_awid),
    .lsu_axi_awaddr         (lsu_axi_awaddr),
    .lsu_axi_awregion       (lsu_axi_awregion),
    .lsu_axi_awlen          (lsu_axi_awlen),
    .lsu_axi_awsize         (lsu_axi_awsize),
    .lsu_axi_awburst        (lsu_axi_awburst),
    .lsu_axi_awlock         (lsu_axi_awlock),
    .lsu_axi_awcache        (lsu_axi_awcache),
    .lsu_axi_awprot         (lsu_axi_awprot),
    .lsu_axi_awqos          (lsu_axi_awqos),

    .lsu_axi_wvalid         (lsu_axi_wvalid),
    .lsu_axi_wready         (lsu_axi_wready),
    .lsu_axi_wdata          (lsu_axi_wdata),
    .lsu_axi_wstrb          (lsu_axi_wstrb),
    .lsu_axi_wlast          (lsu_axi_wlast),

    .lsu_axi_bvalid         (lsu_axi_bvalid),
    .lsu_axi_bready         (lsu_axi_bready),
    .lsu_axi_bresp          (lsu_axi_bresp),
    .lsu_axi_bid            (lsu_axi_bid),


    .lsu_axi_arvalid        (lsu_axi_arvalid),
    .lsu_axi_arready        (lsu_axi_arready),
    .lsu_axi_arid           (lsu_axi_arid),
    .lsu_axi_araddr         (lsu_axi_araddr),
    .lsu_axi_arregion       (lsu_axi_arregion),
    .lsu_axi_arlen          (lsu_axi_arlen),
    .lsu_axi_arsize         (lsu_axi_arsize),
    .lsu_axi_arburst        (lsu_axi_arburst),
    .lsu_axi_arlock         (lsu_axi_arlock),
    .lsu_axi_arcache        (lsu_axi_arcache),
    .lsu_axi_arprot         (lsu_axi_arprot),
    .lsu_axi_arqos          (lsu_axi_arqos),

    .lsu_axi_rvalid         (lsu_axi_rvalid),
    .lsu_axi_rready         (lsu_axi_rready),
    .lsu_axi_rid            (lsu_axi_rid),
    .lsu_axi_rdata          (lsu_axi_rdata),
    .lsu_axi_rresp          (lsu_axi_rresp),
    .lsu_axi_rlast          (lsu_axi_rlast),

    //-------------------------- IFU AXI signals--------------------------
    // AXI Write Channels
    .ifu_axi_awvalid        (ifu_axi_awvalid),
    .ifu_axi_awready        (ifu_axi_awready),
    .ifu_axi_awid           (ifu_axi_awid),
    .ifu_axi_awaddr         (ifu_axi_awaddr),
    .ifu_axi_awregion       (ifu_axi_awregion),
    .ifu_axi_awlen          (ifu_axi_awlen),
    .ifu_axi_awsize         (ifu_axi_awsize),
    .ifu_axi_awburst        (ifu_axi_awburst),
    .ifu_axi_awlock         (ifu_axi_awlock),
    .ifu_axi_awcache        (ifu_axi_awcache),
    .ifu_axi_awprot         (ifu_axi_awprot),
    .ifu_axi_awqos          (ifu_axi_awqos),

    .ifu_axi_wvalid         (ifu_axi_wvalid),
    .ifu_axi_wready         (ifu_axi_wready),
    .ifu_axi_wdata          (ifu_axi_wdata),
    .ifu_axi_wstrb          (ifu_axi_wstrb),
    .ifu_axi_wlast          (ifu_axi_wlast),

    .ifu_axi_bvalid         (ifu_axi_bvalid),
    .ifu_axi_bready         (ifu_axi_bready),
    .ifu_axi_bresp          (ifu_axi_bresp),
    .ifu_axi_bid            (ifu_axi_bid),

    .ifu_axi_arvalid        (ifu_axi_arvalid),
    .ifu_axi_arready        (ifu_axi_arready),
    .ifu_axi_arid           (ifu_axi_arid),
    .ifu_axi_araddr         (ifu_axi_araddr),
    .ifu_axi_arregion       (ifu_axi_arregion),
    .ifu_axi_arlen          (ifu_axi_arlen),
    .ifu_axi_arsize         (ifu_axi_arsize),
    .ifu_axi_arburst        (ifu_axi_arburst),
    .ifu_axi_arlock         (ifu_axi_arlock),
    .ifu_axi_arcache        (ifu_axi_arcache),
    .ifu_axi_arprot         (ifu_axi_arprot),
    .ifu_axi_arqos          (ifu_axi_arqos),

    .ifu_axi_rvalid         (ifu_axi_rvalid),
    .ifu_axi_rready         (ifu_axi_rready),
    .ifu_axi_rid            (ifu_axi_rid),
    .ifu_axi_rdata          (ifu_axi_rdata),
    .ifu_axi_rresp          (ifu_axi_rresp),
    .ifu_axi_rlast          (ifu_axi_rlast),

    //-------------------------- SB AXI signals--------------------------
    // AXI Write Channels
    .sb_axi_awvalid         (sb_axi_awvalid),
    .sb_axi_awready         (sb_axi_awready),
    .sb_axi_awid            (sb_axi_awid),
    .sb_axi_awaddr          (sb_axi_awaddr),
    .sb_axi_awregion        (sb_axi_awregion),
    .sb_axi_awlen           (sb_axi_awlen),
    .sb_axi_awsize          (sb_axi_awsize),
    .sb_axi_awburst         (sb_axi_awburst),
    .sb_axi_awlock          (sb_axi_awlock),
    .sb_axi_awcache         (sb_axi_awcache),
    .sb_axi_awprot          (sb_axi_awprot),
    .sb_axi_awqos           (sb_axi_awqos),

    .sb_axi_wvalid          (sb_axi_wvalid),
    .sb_axi_wready          (sb_axi_wready),
    .sb_axi_wdata           (sb_axi_wdata),
    .sb_axi_wstrb           (sb_axi_wstrb),
    .sb_axi_wlast           (sb_axi_wlast),

    .sb_axi_bvalid          (sb_axi_bvalid),
    .sb_axi_bready          (sb_axi_bready),
    .sb_axi_bresp           (sb_axi_bresp),
    .sb_axi_bid             (sb_axi_bid),


    .sb_axi_arvalid         (sb_axi_arvalid),
    .sb_axi_arready         (sb_axi_arready),
    .sb_axi_arid            (sb_axi_arid),
    .sb_axi_araddr          (sb_axi_araddr),
    .sb_axi_arregion        (sb_axi_arregion),
    .sb_axi_arlen           (sb_axi_arlen),
    .sb_axi_arsize          (sb_axi_arsize),
    .sb_axi_arburst         (sb_axi_arburst),
    .sb_axi_arlock          (sb_axi_arlock),
    .sb_axi_arcache         (sb_axi_arcache),
    .sb_axi_arprot          (sb_axi_arprot),
    .sb_axi_arqos           (sb_axi_arqos),

    .sb_axi_rvalid          (sb_axi_rvalid),
    .sb_axi_rready          (sb_axi_rready),
    .sb_axi_rid             (sb_axi_rid),
    .sb_axi_rdata           (sb_axi_rdata),
    .sb_axi_rresp           (sb_axi_rresp),
    .sb_axi_rlast           (sb_axi_rlast),

    //-------------------------- DMA AXI signals--------------------------
    // AXI Write Channels
    .dma_axi_awvalid        (dma_axi_awvalid),
    .dma_axi_awready        (dma_axi_awready),
    .dma_axi_awid           ('0),               // ids are not used on DMA since it always responses in order
    .dma_axi_awaddr         (lsu_axi_awaddr),
    .dma_axi_awsize         (lsu_axi_awsize),
    .dma_axi_awprot         ('0),
    .dma_axi_awlen          ('0),
    .dma_axi_awburst        ('0),


    .dma_axi_wvalid         (dma_axi_wvalid),
    .dma_axi_wready         (dma_axi_wready),
    .dma_axi_wdata          (lsu_axi_wdata),
    .dma_axi_wstrb          (lsu_axi_wstrb),
    .dma_axi_wlast          (1'b1),

    .dma_axi_bvalid         (dma_axi_bvalid),
    .dma_axi_bready         (dma_axi_bready),
    .dma_axi_bresp          (dma_axi_bresp),
    .dma_axi_bid            (),


    .dma_axi_arvalid        (dma_axi_arvalid),
    .dma_axi_arready        (dma_axi_arready),
    .dma_axi_arid           ('0),
    .dma_axi_araddr         (lsu_axi_araddr),
    .dma_axi_arsize         (lsu_axi_arsize),
    .dma_axi_arprot         ('0),
    .dma_axi_arlen          ('0),
    .dma_axi_arburst        ('0),

    .dma_axi_rvalid         (dma_axi_rvalid),
    .dma_axi_rready         (dma_axi_rready),
    .dma_axi_rid            (),
    .dma_axi_rdata          (dma_axi_rdata),
    .dma_axi_rresp          (dma_axi_rresp),
    .dma_axi_rlast          (dma_axi_rlast),
`endif
    .timer_int              ( 1'b0     ),
    .extintsrc_req          ( '0  ),

    .lsu_bus_clk_en         ( 1'b1  ),
    .ifu_bus_clk_en         ( 1'b1  ),
    .dbg_bus_clk_en         ( 1'b1  ),
    .dma_bus_clk_en         ( 1'b1  ),

    .trace_rv_i_insn_ip     (trace_rv_i_insn_ip),
    .trace_rv_i_address_ip  (trace_rv_i_address_ip),
    .trace_rv_i_valid_ip    (trace_rv_i_valid_ip),
    .trace_rv_i_exception_ip(trace_rv_i_exception_ip),
    .trace_rv_i_ecause_ip   (trace_rv_i_ecause_ip),
    .trace_rv_i_interrupt_ip(trace_rv_i_interrupt_ip),
    .trace_rv_i_tval_ip     (trace_rv_i_tval_ip),

    .jtag_tck               ( 1'b0  ),
    .jtag_tms               ( 1'b0  ),
    .jtag_tdi               ( 1'b0  ),
    .jtag_trst_n            ( 1'b0  ),
    .jtag_tdo               ( jtag_tdo ),

    .mpc_debug_halt_ack     ( mpc_debug_halt_ack),
    .mpc_debug_halt_req     ( 1'b0),
    .mpc_debug_run_ack      ( mpc_debug_run_ack),
    .mpc_debug_run_req      ( 1'b1),
    .mpc_reset_run_req      ( 1'b1),
    .debug_brkpt_status     (debug_brkpt_status),

    .i_cpu_halt_req         ( 1'b0  ),
    .o_cpu_halt_ack         ( o_cpu_halt_ack ),
    .o_cpu_halt_status      ( o_cpu_halt_status ),
    .i_cpu_run_req          ( 1'b0  ),
    .o_debug_mode_status    (o_debug_mode_status),
    .o_cpu_run_ack          ( o_cpu_run_ack ),

    .dec_tlu_perfcnt0       (dec_tlu_perfcnt0),
    .dec_tlu_perfcnt1       (dec_tlu_perfcnt1),
    .dec_tlu_perfcnt2       (dec_tlu_perfcnt2),
    .dec_tlu_perfcnt3       (dec_tlu_perfcnt3),

    .scan_mode              ( 1'b0 ),
    .mbist_mode             ( 1'b0 )

);



`ifdef RV_BUILD_AXI4
axi_slv #(.TAGW(`RV_IFU_BUS_TAG)) imem(
    .aclk(core_clk),
    .rst_l(rst_l),
    .arvalid(ifu_axi_arvalid),
    .arready(ifu_axi_arready),
    .araddr(ifu_axi_araddr),
    .arid(ifu_axi_arid),
    .arlen(ifu_axi_arlen),
    .arburst(ifu_axi_arburst),
    .arsize(ifu_axi_arsize),

    .rvalid(ifu_axi_rvalid),
    .rready(ifu_axi_rready),
    .rdata(ifu_axi_rdata),
    .rresp(ifu_axi_rresp),
    .rid(ifu_axi_rid),
    .rlast(ifu_axi_rlast),

    .awvalid(1'b0),
    .awready(),
    .awaddr('0),
    .awid('0),
    .awlen('0),
    .awburst('0),
    .awsize('0),

    .wdata('0),
    .wstrb('0),
    .wvalid(1'b0),
    .wready(),

    .bvalid(),
    .bready(1'b0),
    .bresp(),
    .bid()
);


axi_slv #(
    .TAGW(`RV_LSU_BUS_TAG)
) lmem0_1 (
    .aclk           (core_clk),
    .rst_l          (rst_l),
    .arvalid        (sn0_0_axi_arvalid),
    .arready        (sn0_0_axi_arready),
    .araddr         (sn0_0_axi_araddr),
    .arid           (sn0_0_axi_arid),
    .arlen          (sn0_0_axi_arlen),
    .arburst        (sn0_0_axi_arburst),
    .arsize         (sn0_0_axi_arsize),

    .rvalid         (sn0_0_axi_rvalid),
    .rready         (sn0_0_axi_rready),
    .rdata          (sn0_0_axi_rdata),
    .rresp          (sn0_0_axi_rresp),
    .rid            (sn0_0_axi_rid),
    .rlast          (sn0_0_axi_rlast),

    .awvalid        (sn0_0_axi_awvalid),
    .awready        (sn0_0_axi_awready),
    .awaddr         (sn0_0_axi_awaddr),
    .awid           (sn0_0_axi_awid),
    .awlen          (sn0_0_axi_awlen),
    .awburst        (sn0_0_axi_awburst),
    .awsize         (sn0_0_axi_awsize),

    .wdata          (sn0_0_axi_wdata),
    .wstrb          (sn0_0_axi_wstrb),
    .wvalid         (sn0_0_axi_wvalid),
    .wready         (sn0_0_axi_wready),

    .bvalid         (sn0_0_axi_bvalid),
    .bready         (sn0_0_axi_bready),
    .bresp          (sn0_0_axi_bresp),
    .bid            (sn0_0_axi_bid)
);

axi_slv #(
    .TAGW(`RV_LSU_BUS_TAG)
) lmem1_0 (
    .aclk           (core_clk),
    .rst_l          (rst_l),
    .arvalid        (sn1_0_axi_arvalid),
    .arready        (sn1_0_axi_arready),
    .araddr         (sn1_0_axi_araddr),
    .arid           (sn1_0_axi_arid),
    .arlen          (sn1_0_axi_arlen),
    .arburst        (sn1_0_axi_arburst),
    .arsize         (sn1_0_axi_arsize),

    .rvalid         (sn1_0_axi_rvalid),
    .rready         (sn1_0_axi_rready),
    .rdata          (sn1_0_axi_rdata),
    .rresp          (sn1_0_axi_rresp),
    .rid            (sn1_0_axi_rid),
    .rlast          (sn1_0_axi_rlast),

    .awvalid        (sn1_0_axi_awvalid),
    .awready        (sn1_0_axi_awready),
    .awaddr         (sn1_0_axi_awaddr),
    .awid           (sn1_0_axi_awid),
    .awlen          (sn1_0_axi_awlen),
    .awburst        (sn1_0_axi_awburst),
    .awsize         (sn1_0_axi_awsize),

    .wdata          (sn1_0_axi_wdata),
    .wstrb          (sn1_0_axi_wstrb),
    .wvalid         (sn1_0_axi_wvalid),
    .wready         (sn1_0_axi_wready),

    .bvalid         (sn1_0_axi_bvalid),
    .bready         (sn1_0_axi_bready),
    .bresp          (sn1_0_axi_bresp),
    .bid            (sn1_0_axi_bid)
);

axi_slv #(
    .TAGW(`RV_LSU_BUS_TAG)
) lmem2_0 (
    .aclk           (core_clk),
    .rst_l          (rst_l),
    .arvalid        (sn2_0_axi_arvalid),
    .arready        (sn2_0_axi_arready),
    .araddr         (sn2_0_axi_araddr),
    .arid           (sn2_0_axi_arid),
    .arlen          (sn2_0_axi_arlen),
    .arburst        (sn2_0_axi_arburst),
    .arsize         (sn2_0_axi_arsize),

    .rvalid         (sn2_0_axi_rvalid),
    .rready         (sn2_0_axi_rready),
    .rdata          (sn2_0_axi_rdata),
    .rresp          (sn2_0_axi_rresp),
    .rid            (sn2_0_axi_rid),
    .rlast          (sn2_0_axi_rlast),

    .awvalid        (sn2_0_axi_awvalid),
    .awready        (sn2_0_axi_awready),
    .awaddr         (sn2_0_axi_awaddr),
    .awid           (sn2_0_axi_awid),
    .awlen          (sn2_0_axi_awlen),
    .awburst        (sn2_0_axi_awburst),
    .awsize         (sn2_0_axi_awsize),

    .wdata          (sn2_0_axi_wdata),
    .wstrb          (sn2_0_axi_wstrb),
    .wvalid         (sn2_0_axi_wvalid),
    .wready         (sn2_0_axi_wready),

    .bvalid         (sn2_0_axi_bvalid),
    .bready         (sn2_0_axi_bready),
    .bresp          (sn2_0_axi_bresp),
    .bid            (sn2_0_axi_bid)
);

axi_slv #(
    .TAGW(`RV_LSU_BUS_TAG)
) lmem3_0 (
    .aclk           (core_clk),
    .rst_l          (rst_l),
    .arvalid        (sn3_0_axi_arvalid),
    .arready        (sn3_0_axi_arready),
    .araddr         (sn3_0_axi_araddr),
    .arid           (sn3_0_axi_arid),
    .arlen          (sn3_0_axi_arlen),
    .arburst        (sn3_0_axi_arburst),
    .arsize         (sn3_0_axi_arsize),

    .rvalid         (sn3_0_axi_rvalid),
    .rready         (sn3_0_axi_rready),
    .rdata          (sn3_0_axi_rdata),
    .rresp          (sn3_0_axi_rresp),
    .rid            (sn3_0_axi_rid),
    .rlast          (sn3_0_axi_rlast),

    .awvalid        (sn3_0_axi_awvalid),
    .awready        (sn3_0_axi_awready),
    .awaddr         (sn3_0_axi_awaddr),
    .awid           (sn3_0_axi_awid),
    .awlen          (sn3_0_axi_awlen),
    .awburst        (sn3_0_axi_awburst),
    .awsize         (sn3_0_axi_awsize),

    .wdata          (sn3_0_axi_wdata),
    .wstrb          (sn3_0_axi_wstrb),
    .wvalid         (sn3_0_axi_wvalid),
    .wready         (sn3_0_axi_wready),

    .bvalid         (sn3_0_axi_bvalid),
    .bready         (sn3_0_axi_bready),
    .bresp          (sn3_0_axi_bresp),
    .bid            (sn3_0_axi_bid)
);


`endif

task preload_iccm;
bit[31:0] data;
bit[31:0] addr, eaddr, saddr;

/*
addresses:
 0xfffffff0 - ICCM start address to load
 0xfffffff4 - ICCM end address to load
*/

addr = 'hffff_fff0;
saddr = {lmem.mem[addr+3],lmem.mem[addr+2],lmem.mem[addr+1],lmem.mem[addr]};
if ( (saddr < `RV_ICCM_SADR) || (saddr > `RV_ICCM_EADR)) return;
`ifndef RV_ICCM_ENABLE
    $display("********************************************************");
    $display("ICCM preload: there is no ICCM in VeeR, terminating !!!");
    $display("********************************************************");
    $finish;
`endif
addr += 4;
eaddr = {lmem.mem[addr+3],lmem.mem[addr+2],lmem.mem[addr+1],lmem.mem[addr]};
$display("ICCM pre-load from %h to %h", saddr, eaddr);

for(addr= saddr; addr <= eaddr; addr+=4) begin
    data = {imem.mem[addr+3],imem.mem[addr+2],imem.mem[addr+1],imem.mem[addr]};
    slam_iccm_ram(addr, data == 0 ? 0 : {riscv_ecc32(data),data});
end

endtask


task preload_dccm;
bit[31:0] data;
bit[31:0] addr, saddr, eaddr;

/*
addresses:
 0xffff_fff8 - DCCM start address to load
 0xffff_fffc - DCCM end address to load
*/

addr = 'hffff_fff8;
saddr = {lmem.mem[addr+3],lmem.mem[addr+2],lmem.mem[addr+1],lmem.mem[addr]};
if (saddr < `RV_DCCM_SADR || saddr > `RV_DCCM_EADR) return;
`ifndef RV_DCCM_ENABLE
    $display("********************************************************");
    $display("DCCM preload: there is no DCCM in VeeR, terminating !!!");
    $display("********************************************************");
    $finish;
`endif
addr += 4;
eaddr = {lmem.mem[addr+3],lmem.mem[addr+2],lmem.mem[addr+1],lmem.mem[addr]};
$display("DCCM pre-load from %h to %h", saddr, eaddr);

for(addr=saddr; addr <= eaddr; addr+=4) begin
    data = {lmem.mem[addr+3],lmem.mem[addr+2],lmem.mem[addr+1],lmem.mem[addr]};
    slam_dccm_ram(addr, data == 0 ? 0 : {riscv_ecc32(data),data});
end

endtask

`define DRAM(bank) \
    rvtop.mem.Gen_dccm_enable.dccm.mem_bank[bank].dccm_bank.ram_core

`define ICCM_PATH `RV_TOP.mem.iccm
`define IRAM0(bk) `ICCM_PATH.mem_bank[bk].iccm_bank_lo0.ram_core
`define IRAM1(bk) `ICCM_PATH.mem_bank[bk].iccm_bank_lo1.ram_core
`define IRAM2(bk) `ICCM_PATH.mem_bank[bk].iccm_bank_hi0.ram_core
`define IRAM3(bk) `ICCM_PATH.mem_bank[bk].iccm_bank_hi1.ram_core


task slam_iccm_ram(input [31:0] addr, input[38:0] data);
int bank, indx;
`ifdef RV_ICCM_ENABLE
bank = get_iccm_bank(addr, indx);
case(bank)
0: `IRAM0(0)[indx] = data;
1: `IRAM1(0)[indx] = data;
2: `IRAM2(0)[indx] = data;
3: `IRAM3(0)[indx] = data;
`ifdef RV_ICCM_NUM_BANKS_8
4: `IRAM0(1)[indx] = data;
5: `IRAM1(1)[indx] = data;
6: `IRAM2(1)[indx] = data;
7: `IRAM3(1)[indx] = data;
`endif
`ifdef RV_ICCM_NUM_BANKS_16
8: `IRAM0(2)[indx] = data;
9: `IRAM1(2)[indx] = data;
10: `IRAM2(2)[indx] = data;
11: `IRAM3(2)[indx] = data;
12: `IRAM0(3)[indx] = data;
13: `IRAM1(3)[indx] = data;
14: `IRAM2(3)[indx] = data;
15: `IRAM3(3)[indx] = data;
`endif
endcase
`endif
endtask

task slam_dccm_ram(input [31:0] addr, input[38:0] data);
int bank, indx;
`ifdef RV_DCCM_ENABLE
bank = get_dccm_bank(addr, indx);
case(bank)
0: `DRAM(0)[indx] = data;
1: `DRAM(1)[indx] = data;
`ifdef RV_DCCM_NUM_BANKS_4
2: `DRAM(2)[indx] = data;
3: `DRAM(3)[indx] = data;
`endif
`ifdef RV_DCCM_NUM_BANKS_8
2: `DRAM(2)[indx] = data;
3: `DRAM(3)[indx] = data;
4: `DRAM(4)[indx] = data;
5: `DRAM(5)[indx] = data;
6: `DRAM(6)[indx] = data;
7: `DRAM(7)[indx] = data;
`endif
endcase
`endif
endtask

function[6:0] riscv_ecc32(input[31:0] data);
reg[6:0] synd;
synd[0] = ^(data & 32'h56aa_ad5b);
synd[1] = ^(data & 32'h9b33_366d);
synd[2] = ^(data & 32'he3c3_c78e);
synd[3] = ^(data & 32'h03fc_07f0);
synd[4] = ^(data & 32'h03ff_f800);
synd[5] = ^(data & 32'hfc00_0000);
synd[6] = ^{data, synd[5:0]};
return synd;
endfunction

function int get_dccm_bank(input int addr,  output int bank_idx);
`ifdef RV_DCCM_NUM_BANKS_2
    bank_idx = int'(addr[`RV_DCCM_BITS-1:3]);
    return int'( addr[2]);
`elsif RV_DCCM_NUM_BANKS_4
    bank_idx = int'(addr[`RV_DCCM_BITS-1:4]);
    return int'(addr[3:2]);
`elsif RV_DCCM_NUM_BANKS_8
    bank_idx = int'(addr[`RV_DCCM_BITS-1:5]);
    return int'( addr[4:2]);
`endif
endfunction

function int get_iccm_bank(input int addr,  output int bank_idx);
`ifdef RV_ICCM_NUM_BANKS_4
    bank_idx = int'(addr[`RV_ICCM_BITS-1:4]);
    return int'( addr[3:2]);
`elsif RV_ICCM_NUM_BANKS_8
    bank_idx = int'(addr[`RV_ICCM_BITS-1:5]);
    return int'(addr[4:2]);
`else
    bank_idx = int'(addr[`RV_ICCM_BITS-1:6]);
    return int'( addr[5:2]);
`endif
endfunction

/* verilator lint_off WIDTH */
/* verilator lint_off CASEINCOMPLETE */
`include "dasm.svi"
/* verilator lint_on CASEINCOMPLETE */
/* verilator lint_on WIDTH */



endmodule