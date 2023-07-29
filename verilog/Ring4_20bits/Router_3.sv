module Router_3(
  input         clock,
  input         reset,
  output [1:0]  auto_debug_out_va_stall_0,
  output [1:0]  auto_debug_out_va_stall_1,
  output [1:0]  auto_debug_out_sa_stall_0,
  output [1:0]  auto_debug_out_sa_stall_1,
  output        auto_egress_nodes_out_flit_valid,
  output        auto_egress_nodes_out_flit_bits_head,
  output        auto_egress_nodes_out_flit_bits_tail,
  output [19:0] auto_egress_nodes_out_flit_bits_payload,
  output [1:0]  auto_egress_nodes_out_flit_bits_ingress_id,
  output        auto_ingress_nodes_in_flit_ready,
  input         auto_ingress_nodes_in_flit_valid,
  input         auto_ingress_nodes_in_flit_bits_head,
  input         auto_ingress_nodes_in_flit_bits_tail,
  input  [19:0] auto_ingress_nodes_in_flit_bits_payload,
  input  [1:0]  auto_ingress_nodes_in_flit_bits_egress_id,
  output        auto_source_nodes_out_1_flit_0_valid,
  output        auto_source_nodes_out_1_flit_0_bits_head,
  output        auto_source_nodes_out_1_flit_0_bits_tail,
  output [19:0] auto_source_nodes_out_1_flit_0_bits_payload,
  output [1:0]  auto_source_nodes_out_1_flit_0_bits_flow_ingress_node,
  output [1:0]  auto_source_nodes_out_1_flit_0_bits_flow_egress_node,
  output [1:0]  auto_source_nodes_out_1_flit_0_bits_virt_channel_id,
  input  [3:0]  auto_source_nodes_out_1_credit_return,
  input  [3:0]  auto_source_nodes_out_1_vc_free,
  output        auto_source_nodes_out_0_flit_0_valid,
  output        auto_source_nodes_out_0_flit_0_bits_head,
  output        auto_source_nodes_out_0_flit_0_bits_tail,
  output [19:0] auto_source_nodes_out_0_flit_0_bits_payload,
  output [1:0]  auto_source_nodes_out_0_flit_0_bits_flow_ingress_node,
  output [1:0]  auto_source_nodes_out_0_flit_0_bits_flow_egress_node,
  output [1:0]  auto_source_nodes_out_0_flit_0_bits_virt_channel_id,
  input  [3:0]  auto_source_nodes_out_0_credit_return,
  input  [3:0]  auto_source_nodes_out_0_vc_free,
  input         auto_dest_nodes_in_1_flit_0_valid,
  input         auto_dest_nodes_in_1_flit_0_bits_head,
  input         auto_dest_nodes_in_1_flit_0_bits_tail,
  input  [19:0] auto_dest_nodes_in_1_flit_0_bits_payload,
  input  [1:0]  auto_dest_nodes_in_1_flit_0_bits_flow_ingress_node,
  input  [1:0]  auto_dest_nodes_in_1_flit_0_bits_flow_egress_node,
  input  [1:0]  auto_dest_nodes_in_1_flit_0_bits_virt_channel_id,
  output [3:0]  auto_dest_nodes_in_1_credit_return,
  output [3:0]  auto_dest_nodes_in_1_vc_free,
  input         auto_dest_nodes_in_0_flit_0_valid,
  input         auto_dest_nodes_in_0_flit_0_bits_head,
  input         auto_dest_nodes_in_0_flit_0_bits_tail,
  input  [19:0] auto_dest_nodes_in_0_flit_0_bits_payload,
  input  [1:0]  auto_dest_nodes_in_0_flit_0_bits_flow_ingress_node,
  input  [1:0]  auto_dest_nodes_in_0_flit_0_bits_flow_egress_node,
  input  [1:0]  auto_dest_nodes_in_0_flit_0_bits_virt_channel_id,
  output [3:0]  auto_dest_nodes_in_0_credit_return,
  output [3:0]  auto_dest_nodes_in_0_vc_free
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [63:0] _RAND_9;
  reg [63:0] _RAND_10;
  reg [63:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [63:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [63:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [63:0] _RAND_17;
  reg [31:0] _RAND_18;
`endif // RANDOMIZE_REG_INIT
  wire  monitor_clock; // @[Nodes.scala 24:25]
  wire  monitor_reset; // @[Nodes.scala 24:25]
  wire  monitor_io_in_flit_0_valid; // @[Nodes.scala 24:25]
  wire  monitor_io_in_flit_0_bits_head; // @[Nodes.scala 24:25]
  wire  monitor_io_in_flit_0_bits_tail; // @[Nodes.scala 24:25]
  wire [1:0] monitor_io_in_flit_0_bits_flow_ingress_node; // @[Nodes.scala 24:25]
  wire [1:0] monitor_io_in_flit_0_bits_flow_egress_node; // @[Nodes.scala 24:25]
  wire [1:0] monitor_io_in_flit_0_bits_virt_channel_id; // @[Nodes.scala 24:25]
  wire  monitor_1_clock; // @[Nodes.scala 24:25]
  wire  monitor_1_reset; // @[Nodes.scala 24:25]
  wire  monitor_1_io_in_flit_0_valid; // @[Nodes.scala 24:25]
  wire  monitor_1_io_in_flit_0_bits_head; // @[Nodes.scala 24:25]
  wire  monitor_1_io_in_flit_0_bits_tail; // @[Nodes.scala 24:25]
  wire [1:0] monitor_1_io_in_flit_0_bits_flow_ingress_node; // @[Nodes.scala 24:25]
  wire [1:0] monitor_1_io_in_flit_0_bits_flow_egress_node; // @[Nodes.scala 24:25]
  wire [1:0] monitor_1_io_in_flit_0_bits_virt_channel_id; // @[Nodes.scala 24:25]
  wire  input_unit_0_from_0_clock; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_reset; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_router_req_valid; // @[Router.scala 112:13]
  wire [1:0] input_unit_0_from_0_io_router_req_bits_src_virt_id; // @[Router.scala 112:13]
  wire [1:0] input_unit_0_from_0_io_router_req_bits_flow_ingress_node; // @[Router.scala 112:13]
  wire [1:0] input_unit_0_from_0_io_router_req_bits_flow_egress_node; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_router_resp_vc_sel_1_0; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_router_resp_vc_sel_1_1; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_router_resp_vc_sel_1_2; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_router_resp_vc_sel_1_3; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_router_resp_vc_sel_0_0; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_router_resp_vc_sel_0_1; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_router_resp_vc_sel_0_2; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_vcalloc_req_ready; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_vcalloc_req_valid; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_vcalloc_req_bits_vc_sel_2_0; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_vcalloc_req_bits_vc_sel_1_0; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_vcalloc_req_bits_vc_sel_1_1; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_vcalloc_req_bits_vc_sel_1_2; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_vcalloc_req_bits_vc_sel_1_3; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_vcalloc_req_bits_vc_sel_0_0; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_vcalloc_req_bits_vc_sel_0_1; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_vcalloc_req_bits_vc_sel_0_2; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_vcalloc_resp_vc_sel_2_0; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_vcalloc_resp_vc_sel_1_0; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_vcalloc_resp_vc_sel_1_1; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_vcalloc_resp_vc_sel_1_2; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_vcalloc_resp_vc_sel_1_3; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_vcalloc_resp_vc_sel_0_0; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_vcalloc_resp_vc_sel_0_1; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_vcalloc_resp_vc_sel_0_2; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_out_credit_available_2_0; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_out_credit_available_1_0; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_out_credit_available_1_1; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_out_credit_available_1_2; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_out_credit_available_1_3; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_out_credit_available_0_0; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_out_credit_available_0_1; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_out_credit_available_0_2; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_out_credit_available_0_3; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_salloc_req_0_ready; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_salloc_req_0_valid; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_2_0; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_1_0; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_1_1; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_1_2; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_1_3; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_0_0; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_0_1; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_0_2; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_0_3; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_salloc_req_0_bits_tail; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_out_0_valid; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_out_0_bits_flit_head; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_out_0_bits_flit_tail; // @[Router.scala 112:13]
  wire [19:0] input_unit_0_from_0_io_out_0_bits_flit_payload; // @[Router.scala 112:13]
  wire [1:0] input_unit_0_from_0_io_out_0_bits_flit_flow_ingress_node; // @[Router.scala 112:13]
  wire [1:0] input_unit_0_from_0_io_out_0_bits_flit_flow_egress_node; // @[Router.scala 112:13]
  wire [1:0] input_unit_0_from_0_io_out_0_bits_out_virt_channel; // @[Router.scala 112:13]
  wire [1:0] input_unit_0_from_0_io_debug_va_stall; // @[Router.scala 112:13]
  wire [1:0] input_unit_0_from_0_io_debug_sa_stall; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_in_flit_0_valid; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_in_flit_0_bits_head; // @[Router.scala 112:13]
  wire  input_unit_0_from_0_io_in_flit_0_bits_tail; // @[Router.scala 112:13]
  wire [19:0] input_unit_0_from_0_io_in_flit_0_bits_payload; // @[Router.scala 112:13]
  wire [1:0] input_unit_0_from_0_io_in_flit_0_bits_flow_ingress_node; // @[Router.scala 112:13]
  wire [1:0] input_unit_0_from_0_io_in_flit_0_bits_flow_egress_node; // @[Router.scala 112:13]
  wire [1:0] input_unit_0_from_0_io_in_flit_0_bits_virt_channel_id; // @[Router.scala 112:13]
  wire [3:0] input_unit_0_from_0_io_in_credit_return; // @[Router.scala 112:13]
  wire [3:0] input_unit_0_from_0_io_in_vc_free; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_clock; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_reset; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_router_req_valid; // @[Router.scala 112:13]
  wire [1:0] input_unit_1_from_2_io_router_req_bits_src_virt_id; // @[Router.scala 112:13]
  wire [1:0] input_unit_1_from_2_io_router_req_bits_flow_ingress_node; // @[Router.scala 112:13]
  wire [1:0] input_unit_1_from_2_io_router_req_bits_flow_egress_node; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_router_resp_vc_sel_1_0; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_router_resp_vc_sel_1_1; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_router_resp_vc_sel_1_2; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_router_resp_vc_sel_1_3; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_router_resp_vc_sel_0_0; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_router_resp_vc_sel_0_1; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_router_resp_vc_sel_0_2; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_vcalloc_req_ready; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_vcalloc_req_valid; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_vcalloc_req_bits_vc_sel_2_0; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_vcalloc_req_bits_vc_sel_1_0; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_vcalloc_req_bits_vc_sel_1_1; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_vcalloc_req_bits_vc_sel_1_2; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_vcalloc_req_bits_vc_sel_1_3; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_vcalloc_req_bits_vc_sel_0_0; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_vcalloc_req_bits_vc_sel_0_1; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_vcalloc_req_bits_vc_sel_0_2; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_vcalloc_resp_vc_sel_2_0; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_vcalloc_resp_vc_sel_1_0; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_vcalloc_resp_vc_sel_1_1; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_vcalloc_resp_vc_sel_1_2; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_vcalloc_resp_vc_sel_1_3; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_vcalloc_resp_vc_sel_0_0; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_vcalloc_resp_vc_sel_0_1; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_vcalloc_resp_vc_sel_0_2; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_out_credit_available_2_0; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_out_credit_available_1_0; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_out_credit_available_1_1; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_out_credit_available_1_2; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_out_credit_available_1_3; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_out_credit_available_0_0; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_out_credit_available_0_1; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_out_credit_available_0_2; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_out_credit_available_0_3; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_salloc_req_0_ready; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_salloc_req_0_valid; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_2_0; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_1_0; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_1_1; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_1_2; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_1_3; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_0_0; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_0_1; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_0_2; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_0_3; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_salloc_req_0_bits_tail; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_out_0_valid; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_out_0_bits_flit_head; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_out_0_bits_flit_tail; // @[Router.scala 112:13]
  wire [19:0] input_unit_1_from_2_io_out_0_bits_flit_payload; // @[Router.scala 112:13]
  wire [1:0] input_unit_1_from_2_io_out_0_bits_flit_flow_ingress_node; // @[Router.scala 112:13]
  wire [1:0] input_unit_1_from_2_io_out_0_bits_flit_flow_egress_node; // @[Router.scala 112:13]
  wire [1:0] input_unit_1_from_2_io_out_0_bits_out_virt_channel; // @[Router.scala 112:13]
  wire [1:0] input_unit_1_from_2_io_debug_va_stall; // @[Router.scala 112:13]
  wire [1:0] input_unit_1_from_2_io_debug_sa_stall; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_in_flit_0_valid; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_in_flit_0_bits_head; // @[Router.scala 112:13]
  wire  input_unit_1_from_2_io_in_flit_0_bits_tail; // @[Router.scala 112:13]
  wire [19:0] input_unit_1_from_2_io_in_flit_0_bits_payload; // @[Router.scala 112:13]
  wire [1:0] input_unit_1_from_2_io_in_flit_0_bits_flow_ingress_node; // @[Router.scala 112:13]
  wire [1:0] input_unit_1_from_2_io_in_flit_0_bits_flow_egress_node; // @[Router.scala 112:13]
  wire [1:0] input_unit_1_from_2_io_in_flit_0_bits_virt_channel_id; // @[Router.scala 112:13]
  wire [3:0] input_unit_1_from_2_io_in_credit_return; // @[Router.scala 112:13]
  wire [3:0] input_unit_1_from_2_io_in_vc_free; // @[Router.scala 112:13]
  wire  ingress_unit_2_from_3_clock; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_reset; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_router_req_valid; // @[Router.scala 116:13]
  wire [1:0] ingress_unit_2_from_3_io_router_req_bits_flow_ingress_node; // @[Router.scala 116:13]
  wire [1:0] ingress_unit_2_from_3_io_router_req_bits_flow_egress_node; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_router_resp_vc_sel_1_0; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_router_resp_vc_sel_1_1; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_router_resp_vc_sel_1_2; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_router_resp_vc_sel_1_3; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_router_resp_vc_sel_0_0; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_router_resp_vc_sel_0_1; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_router_resp_vc_sel_0_2; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_router_resp_vc_sel_0_3; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_vcalloc_req_ready; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_vcalloc_req_valid; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_2_0; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_1_0; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_1_1; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_1_2; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_1_3; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_0_0; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_0_1; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_0_2; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_0_3; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_2_0; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_1_0; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_1_1; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_1_2; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_1_3; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_0_0; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_0_1; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_0_2; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_0_3; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_out_credit_available_2_0; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_out_credit_available_1_0; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_out_credit_available_1_1; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_out_credit_available_1_2; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_out_credit_available_1_3; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_out_credit_available_0_0; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_out_credit_available_0_1; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_out_credit_available_0_2; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_out_credit_available_0_3; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_salloc_req_0_ready; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_salloc_req_0_valid; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_2_0; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_1_0; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_1_1; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_1_2; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_1_3; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_0_0; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_0_1; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_0_2; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_0_3; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_salloc_req_0_bits_tail; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_out_0_valid; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_out_0_bits_flit_head; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_out_0_bits_flit_tail; // @[Router.scala 116:13]
  wire [19:0] ingress_unit_2_from_3_io_out_0_bits_flit_payload; // @[Router.scala 116:13]
  wire [1:0] ingress_unit_2_from_3_io_out_0_bits_flit_flow_ingress_node; // @[Router.scala 116:13]
  wire [1:0] ingress_unit_2_from_3_io_out_0_bits_flit_flow_egress_node; // @[Router.scala 116:13]
  wire [1:0] ingress_unit_2_from_3_io_out_0_bits_out_virt_channel; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_in_ready; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_in_valid; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_in_bits_head; // @[Router.scala 116:13]
  wire  ingress_unit_2_from_3_io_in_bits_tail; // @[Router.scala 116:13]
  wire [19:0] ingress_unit_2_from_3_io_in_bits_payload; // @[Router.scala 116:13]
  wire [1:0] ingress_unit_2_from_3_io_in_bits_egress_id; // @[Router.scala 116:13]
  wire  output_unit_0_to_0_clock; // @[Router.scala 122:13]
  wire  output_unit_0_to_0_reset; // @[Router.scala 122:13]
  wire  output_unit_0_to_0_io_in_0_valid; // @[Router.scala 122:13]
  wire  output_unit_0_to_0_io_in_0_bits_head; // @[Router.scala 122:13]
  wire  output_unit_0_to_0_io_in_0_bits_tail; // @[Router.scala 122:13]
  wire [19:0] output_unit_0_to_0_io_in_0_bits_payload; // @[Router.scala 122:13]
  wire [1:0] output_unit_0_to_0_io_in_0_bits_flow_ingress_node; // @[Router.scala 122:13]
  wire [1:0] output_unit_0_to_0_io_in_0_bits_flow_egress_node; // @[Router.scala 122:13]
  wire [1:0] output_unit_0_to_0_io_in_0_bits_virt_channel_id; // @[Router.scala 122:13]
  wire  output_unit_0_to_0_io_credit_available_0; // @[Router.scala 122:13]
  wire  output_unit_0_to_0_io_credit_available_1; // @[Router.scala 122:13]
  wire  output_unit_0_to_0_io_credit_available_2; // @[Router.scala 122:13]
  wire  output_unit_0_to_0_io_credit_available_3; // @[Router.scala 122:13]
  wire  output_unit_0_to_0_io_channel_status_0_occupied; // @[Router.scala 122:13]
  wire  output_unit_0_to_0_io_channel_status_1_occupied; // @[Router.scala 122:13]
  wire  output_unit_0_to_0_io_channel_status_2_occupied; // @[Router.scala 122:13]
  wire  output_unit_0_to_0_io_channel_status_3_occupied; // @[Router.scala 122:13]
  wire  output_unit_0_to_0_io_allocs_0_alloc; // @[Router.scala 122:13]
  wire  output_unit_0_to_0_io_allocs_1_alloc; // @[Router.scala 122:13]
  wire  output_unit_0_to_0_io_allocs_2_alloc; // @[Router.scala 122:13]
  wire  output_unit_0_to_0_io_allocs_3_alloc; // @[Router.scala 122:13]
  wire  output_unit_0_to_0_io_credit_alloc_0_alloc; // @[Router.scala 122:13]
  wire  output_unit_0_to_0_io_credit_alloc_1_alloc; // @[Router.scala 122:13]
  wire  output_unit_0_to_0_io_credit_alloc_2_alloc; // @[Router.scala 122:13]
  wire  output_unit_0_to_0_io_credit_alloc_3_alloc; // @[Router.scala 122:13]
  wire  output_unit_0_to_0_io_out_flit_0_valid; // @[Router.scala 122:13]
  wire  output_unit_0_to_0_io_out_flit_0_bits_head; // @[Router.scala 122:13]
  wire  output_unit_0_to_0_io_out_flit_0_bits_tail; // @[Router.scala 122:13]
  wire [19:0] output_unit_0_to_0_io_out_flit_0_bits_payload; // @[Router.scala 122:13]
  wire [1:0] output_unit_0_to_0_io_out_flit_0_bits_flow_ingress_node; // @[Router.scala 122:13]
  wire [1:0] output_unit_0_to_0_io_out_flit_0_bits_flow_egress_node; // @[Router.scala 122:13]
  wire [1:0] output_unit_0_to_0_io_out_flit_0_bits_virt_channel_id; // @[Router.scala 122:13]
  wire [3:0] output_unit_0_to_0_io_out_credit_return; // @[Router.scala 122:13]
  wire [3:0] output_unit_0_to_0_io_out_vc_free; // @[Router.scala 122:13]
  wire  output_unit_1_to_2_clock; // @[Router.scala 122:13]
  wire  output_unit_1_to_2_reset; // @[Router.scala 122:13]
  wire  output_unit_1_to_2_io_in_0_valid; // @[Router.scala 122:13]
  wire  output_unit_1_to_2_io_in_0_bits_head; // @[Router.scala 122:13]
  wire  output_unit_1_to_2_io_in_0_bits_tail; // @[Router.scala 122:13]
  wire [19:0] output_unit_1_to_2_io_in_0_bits_payload; // @[Router.scala 122:13]
  wire [1:0] output_unit_1_to_2_io_in_0_bits_flow_ingress_node; // @[Router.scala 122:13]
  wire [1:0] output_unit_1_to_2_io_in_0_bits_flow_egress_node; // @[Router.scala 122:13]
  wire [1:0] output_unit_1_to_2_io_in_0_bits_virt_channel_id; // @[Router.scala 122:13]
  wire  output_unit_1_to_2_io_credit_available_0; // @[Router.scala 122:13]
  wire  output_unit_1_to_2_io_credit_available_1; // @[Router.scala 122:13]
  wire  output_unit_1_to_2_io_credit_available_2; // @[Router.scala 122:13]
  wire  output_unit_1_to_2_io_credit_available_3; // @[Router.scala 122:13]
  wire  output_unit_1_to_2_io_channel_status_0_occupied; // @[Router.scala 122:13]
  wire  output_unit_1_to_2_io_channel_status_1_occupied; // @[Router.scala 122:13]
  wire  output_unit_1_to_2_io_channel_status_2_occupied; // @[Router.scala 122:13]
  wire  output_unit_1_to_2_io_channel_status_3_occupied; // @[Router.scala 122:13]
  wire  output_unit_1_to_2_io_allocs_0_alloc; // @[Router.scala 122:13]
  wire  output_unit_1_to_2_io_allocs_1_alloc; // @[Router.scala 122:13]
  wire  output_unit_1_to_2_io_allocs_2_alloc; // @[Router.scala 122:13]
  wire  output_unit_1_to_2_io_allocs_3_alloc; // @[Router.scala 122:13]
  wire  output_unit_1_to_2_io_credit_alloc_0_alloc; // @[Router.scala 122:13]
  wire  output_unit_1_to_2_io_credit_alloc_1_alloc; // @[Router.scala 122:13]
  wire  output_unit_1_to_2_io_credit_alloc_2_alloc; // @[Router.scala 122:13]
  wire  output_unit_1_to_2_io_credit_alloc_3_alloc; // @[Router.scala 122:13]
  wire  output_unit_1_to_2_io_out_flit_0_valid; // @[Router.scala 122:13]
  wire  output_unit_1_to_2_io_out_flit_0_bits_head; // @[Router.scala 122:13]
  wire  output_unit_1_to_2_io_out_flit_0_bits_tail; // @[Router.scala 122:13]
  wire [19:0] output_unit_1_to_2_io_out_flit_0_bits_payload; // @[Router.scala 122:13]
  wire [1:0] output_unit_1_to_2_io_out_flit_0_bits_flow_ingress_node; // @[Router.scala 122:13]
  wire [1:0] output_unit_1_to_2_io_out_flit_0_bits_flow_egress_node; // @[Router.scala 122:13]
  wire [1:0] output_unit_1_to_2_io_out_flit_0_bits_virt_channel_id; // @[Router.scala 122:13]
  wire [3:0] output_unit_1_to_2_io_out_credit_return; // @[Router.scala 122:13]
  wire [3:0] output_unit_1_to_2_io_out_vc_free; // @[Router.scala 122:13]
  wire  egress_unit_2_to_3_clock; // @[Router.scala 125:13]
  wire  egress_unit_2_to_3_reset; // @[Router.scala 125:13]
  wire  egress_unit_2_to_3_io_in_0_valid; // @[Router.scala 125:13]
  wire  egress_unit_2_to_3_io_in_0_bits_head; // @[Router.scala 125:13]
  wire  egress_unit_2_to_3_io_in_0_bits_tail; // @[Router.scala 125:13]
  wire [19:0] egress_unit_2_to_3_io_in_0_bits_payload; // @[Router.scala 125:13]
  wire [1:0] egress_unit_2_to_3_io_in_0_bits_flow_ingress_node; // @[Router.scala 125:13]
  wire  egress_unit_2_to_3_io_credit_available_0; // @[Router.scala 125:13]
  wire  egress_unit_2_to_3_io_channel_status_0_occupied; // @[Router.scala 125:13]
  wire  egress_unit_2_to_3_io_allocs_0_alloc; // @[Router.scala 125:13]
  wire  egress_unit_2_to_3_io_credit_alloc_0_alloc; // @[Router.scala 125:13]
  wire  egress_unit_2_to_3_io_credit_alloc_0_tail; // @[Router.scala 125:13]
  wire  egress_unit_2_to_3_io_out_valid; // @[Router.scala 125:13]
  wire  egress_unit_2_to_3_io_out_bits_head; // @[Router.scala 125:13]
  wire  egress_unit_2_to_3_io_out_bits_tail; // @[Router.scala 125:13]
  wire [19:0] egress_unit_2_to_3_io_out_bits_payload; // @[Router.scala 125:13]
  wire [1:0] egress_unit_2_to_3_io_out_bits_ingress_id; // @[Router.scala 125:13]
  wire  switch_clock; // @[Router.scala 129:24]
  wire  switch_reset; // @[Router.scala 129:24]
  wire  switch_io_in_2_0_valid; // @[Router.scala 129:24]
  wire  switch_io_in_2_0_bits_flit_head; // @[Router.scala 129:24]
  wire  switch_io_in_2_0_bits_flit_tail; // @[Router.scala 129:24]
  wire [19:0] switch_io_in_2_0_bits_flit_payload; // @[Router.scala 129:24]
  wire [1:0] switch_io_in_2_0_bits_flit_flow_ingress_node; // @[Router.scala 129:24]
  wire [1:0] switch_io_in_2_0_bits_flit_flow_egress_node; // @[Router.scala 129:24]
  wire [1:0] switch_io_in_2_0_bits_out_virt_channel; // @[Router.scala 129:24]
  wire  switch_io_in_1_0_valid; // @[Router.scala 129:24]
  wire  switch_io_in_1_0_bits_flit_head; // @[Router.scala 129:24]
  wire  switch_io_in_1_0_bits_flit_tail; // @[Router.scala 129:24]
  wire [19:0] switch_io_in_1_0_bits_flit_payload; // @[Router.scala 129:24]
  wire [1:0] switch_io_in_1_0_bits_flit_flow_ingress_node; // @[Router.scala 129:24]
  wire [1:0] switch_io_in_1_0_bits_flit_flow_egress_node; // @[Router.scala 129:24]
  wire [1:0] switch_io_in_1_0_bits_out_virt_channel; // @[Router.scala 129:24]
  wire  switch_io_in_0_0_valid; // @[Router.scala 129:24]
  wire  switch_io_in_0_0_bits_flit_head; // @[Router.scala 129:24]
  wire  switch_io_in_0_0_bits_flit_tail; // @[Router.scala 129:24]
  wire [19:0] switch_io_in_0_0_bits_flit_payload; // @[Router.scala 129:24]
  wire [1:0] switch_io_in_0_0_bits_flit_flow_ingress_node; // @[Router.scala 129:24]
  wire [1:0] switch_io_in_0_0_bits_flit_flow_egress_node; // @[Router.scala 129:24]
  wire [1:0] switch_io_in_0_0_bits_out_virt_channel; // @[Router.scala 129:24]
  wire  switch_io_out_2_0_valid; // @[Router.scala 129:24]
  wire  switch_io_out_2_0_bits_head; // @[Router.scala 129:24]
  wire  switch_io_out_2_0_bits_tail; // @[Router.scala 129:24]
  wire [19:0] switch_io_out_2_0_bits_payload; // @[Router.scala 129:24]
  wire [1:0] switch_io_out_2_0_bits_flow_ingress_node; // @[Router.scala 129:24]
  wire  switch_io_out_1_0_valid; // @[Router.scala 129:24]
  wire  switch_io_out_1_0_bits_head; // @[Router.scala 129:24]
  wire  switch_io_out_1_0_bits_tail; // @[Router.scala 129:24]
  wire [19:0] switch_io_out_1_0_bits_payload; // @[Router.scala 129:24]
  wire [1:0] switch_io_out_1_0_bits_flow_ingress_node; // @[Router.scala 129:24]
  wire [1:0] switch_io_out_1_0_bits_flow_egress_node; // @[Router.scala 129:24]
  wire [1:0] switch_io_out_1_0_bits_virt_channel_id; // @[Router.scala 129:24]
  wire  switch_io_out_0_0_valid; // @[Router.scala 129:24]
  wire  switch_io_out_0_0_bits_head; // @[Router.scala 129:24]
  wire  switch_io_out_0_0_bits_tail; // @[Router.scala 129:24]
  wire [19:0] switch_io_out_0_0_bits_payload; // @[Router.scala 129:24]
  wire [1:0] switch_io_out_0_0_bits_flow_ingress_node; // @[Router.scala 129:24]
  wire [1:0] switch_io_out_0_0_bits_flow_egress_node; // @[Router.scala 129:24]
  wire [1:0] switch_io_out_0_0_bits_virt_channel_id; // @[Router.scala 129:24]
  wire  switch_io_sel_2_0_2_0; // @[Router.scala 129:24]
  wire  switch_io_sel_2_0_1_0; // @[Router.scala 129:24]
  wire  switch_io_sel_2_0_0_0; // @[Router.scala 129:24]
  wire  switch_io_sel_1_0_2_0; // @[Router.scala 129:24]
  wire  switch_io_sel_1_0_1_0; // @[Router.scala 129:24]
  wire  switch_io_sel_1_0_0_0; // @[Router.scala 129:24]
  wire  switch_io_sel_0_0_2_0; // @[Router.scala 129:24]
  wire  switch_io_sel_0_0_1_0; // @[Router.scala 129:24]
  wire  switch_io_sel_0_0_0_0; // @[Router.scala 129:24]
  wire  switch_allocator_clock; // @[Router.scala 130:34]
  wire  switch_allocator_reset; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_2_0_ready; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_2_0_valid; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_2_0_bits_vc_sel_2_0; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_2_0_bits_vc_sel_1_0; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_2_0_bits_vc_sel_1_1; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_2_0_bits_vc_sel_1_2; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_2_0_bits_vc_sel_1_3; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_2_0_bits_vc_sel_0_0; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_2_0_bits_vc_sel_0_1; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_2_0_bits_vc_sel_0_2; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_2_0_bits_vc_sel_0_3; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_2_0_bits_tail; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_1_0_ready; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_1_0_valid; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_1_0_bits_vc_sel_2_0; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_1_0_bits_vc_sel_1_0; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_1_0_bits_vc_sel_1_1; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_1_0_bits_vc_sel_1_2; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_1_0_bits_vc_sel_1_3; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_1_0_bits_vc_sel_0_0; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_1_0_bits_vc_sel_0_1; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_1_0_bits_vc_sel_0_2; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_1_0_bits_vc_sel_0_3; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_1_0_bits_tail; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_0_0_ready; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_0_0_valid; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_0_0_bits_vc_sel_2_0; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_0_0_bits_vc_sel_1_0; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_0_0_bits_vc_sel_1_1; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_0_0_bits_vc_sel_1_2; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_0_0_bits_vc_sel_1_3; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_0_0_bits_vc_sel_0_0; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_0_0_bits_vc_sel_0_1; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_0_0_bits_vc_sel_0_2; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_0_0_bits_vc_sel_0_3; // @[Router.scala 130:34]
  wire  switch_allocator_io_req_0_0_bits_tail; // @[Router.scala 130:34]
  wire  switch_allocator_io_credit_alloc_2_0_alloc; // @[Router.scala 130:34]
  wire  switch_allocator_io_credit_alloc_2_0_tail; // @[Router.scala 130:34]
  wire  switch_allocator_io_credit_alloc_1_0_alloc; // @[Router.scala 130:34]
  wire  switch_allocator_io_credit_alloc_1_1_alloc; // @[Router.scala 130:34]
  wire  switch_allocator_io_credit_alloc_1_2_alloc; // @[Router.scala 130:34]
  wire  switch_allocator_io_credit_alloc_1_3_alloc; // @[Router.scala 130:34]
  wire  switch_allocator_io_credit_alloc_0_0_alloc; // @[Router.scala 130:34]
  wire  switch_allocator_io_credit_alloc_0_1_alloc; // @[Router.scala 130:34]
  wire  switch_allocator_io_credit_alloc_0_2_alloc; // @[Router.scala 130:34]
  wire  switch_allocator_io_credit_alloc_0_3_alloc; // @[Router.scala 130:34]
  wire  switch_allocator_io_switch_sel_2_0_2_0; // @[Router.scala 130:34]
  wire  switch_allocator_io_switch_sel_2_0_1_0; // @[Router.scala 130:34]
  wire  switch_allocator_io_switch_sel_2_0_0_0; // @[Router.scala 130:34]
  wire  switch_allocator_io_switch_sel_1_0_2_0; // @[Router.scala 130:34]
  wire  switch_allocator_io_switch_sel_1_0_1_0; // @[Router.scala 130:34]
  wire  switch_allocator_io_switch_sel_1_0_0_0; // @[Router.scala 130:34]
  wire  switch_allocator_io_switch_sel_0_0_2_0; // @[Router.scala 130:34]
  wire  switch_allocator_io_switch_sel_0_0_1_0; // @[Router.scala 130:34]
  wire  switch_allocator_io_switch_sel_0_0_0_0; // @[Router.scala 130:34]
  wire  vc_allocator_clock; // @[Router.scala 131:30]
  wire  vc_allocator_reset; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_2_ready; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_2_valid; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_2_bits_vc_sel_2_0; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_2_bits_vc_sel_1_0; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_2_bits_vc_sel_1_1; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_2_bits_vc_sel_1_2; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_2_bits_vc_sel_1_3; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_2_bits_vc_sel_0_0; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_2_bits_vc_sel_0_1; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_2_bits_vc_sel_0_2; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_2_bits_vc_sel_0_3; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_1_ready; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_1_valid; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_1_bits_vc_sel_2_0; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_1_bits_vc_sel_1_0; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_1_bits_vc_sel_1_1; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_1_bits_vc_sel_1_2; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_1_bits_vc_sel_1_3; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_1_bits_vc_sel_0_0; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_1_bits_vc_sel_0_1; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_1_bits_vc_sel_0_2; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_1_bits_vc_sel_0_3; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_0_ready; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_0_valid; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_0_bits_vc_sel_2_0; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_0_bits_vc_sel_1_0; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_0_bits_vc_sel_1_1; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_0_bits_vc_sel_1_2; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_0_bits_vc_sel_1_3; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_0_bits_vc_sel_0_0; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_0_bits_vc_sel_0_1; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_0_bits_vc_sel_0_2; // @[Router.scala 131:30]
  wire  vc_allocator_io_req_0_bits_vc_sel_0_3; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_2_vc_sel_2_0; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_2_vc_sel_1_0; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_2_vc_sel_1_1; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_2_vc_sel_1_2; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_2_vc_sel_1_3; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_2_vc_sel_0_0; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_2_vc_sel_0_1; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_2_vc_sel_0_2; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_2_vc_sel_0_3; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_1_vc_sel_2_0; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_1_vc_sel_1_0; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_1_vc_sel_1_1; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_1_vc_sel_1_2; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_1_vc_sel_1_3; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_1_vc_sel_0_0; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_1_vc_sel_0_1; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_1_vc_sel_0_2; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_1_vc_sel_0_3; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_0_vc_sel_2_0; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_0_vc_sel_1_0; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_0_vc_sel_1_1; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_0_vc_sel_1_2; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_0_vc_sel_1_3; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_0_vc_sel_0_0; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_0_vc_sel_0_1; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_0_vc_sel_0_2; // @[Router.scala 131:30]
  wire  vc_allocator_io_resp_0_vc_sel_0_3; // @[Router.scala 131:30]
  wire  vc_allocator_io_channel_status_2_0_occupied; // @[Router.scala 131:30]
  wire  vc_allocator_io_channel_status_1_0_occupied; // @[Router.scala 131:30]
  wire  vc_allocator_io_channel_status_1_1_occupied; // @[Router.scala 131:30]
  wire  vc_allocator_io_channel_status_1_2_occupied; // @[Router.scala 131:30]
  wire  vc_allocator_io_channel_status_1_3_occupied; // @[Router.scala 131:30]
  wire  vc_allocator_io_channel_status_0_0_occupied; // @[Router.scala 131:30]
  wire  vc_allocator_io_channel_status_0_1_occupied; // @[Router.scala 131:30]
  wire  vc_allocator_io_channel_status_0_2_occupied; // @[Router.scala 131:30]
  wire  vc_allocator_io_channel_status_0_3_occupied; // @[Router.scala 131:30]
  wire  vc_allocator_io_out_allocs_2_0_alloc; // @[Router.scala 131:30]
  wire  vc_allocator_io_out_allocs_1_0_alloc; // @[Router.scala 131:30]
  wire  vc_allocator_io_out_allocs_1_1_alloc; // @[Router.scala 131:30]
  wire  vc_allocator_io_out_allocs_1_2_alloc; // @[Router.scala 131:30]
  wire  vc_allocator_io_out_allocs_1_3_alloc; // @[Router.scala 131:30]
  wire  vc_allocator_io_out_allocs_0_0_alloc; // @[Router.scala 131:30]
  wire  vc_allocator_io_out_allocs_0_1_alloc; // @[Router.scala 131:30]
  wire  vc_allocator_io_out_allocs_0_2_alloc; // @[Router.scala 131:30]
  wire  vc_allocator_io_out_allocs_0_3_alloc; // @[Router.scala 131:30]
  wire [1:0] route_computer_io_req_2_bits_flow_ingress_node; // @[Router.scala 134:32]
  wire [1:0] route_computer_io_req_2_bits_flow_egress_node; // @[Router.scala 134:32]
  wire [1:0] route_computer_io_req_1_bits_src_virt_id; // @[Router.scala 134:32]
  wire [1:0] route_computer_io_req_1_bits_flow_ingress_node; // @[Router.scala 134:32]
  wire [1:0] route_computer_io_req_1_bits_flow_egress_node; // @[Router.scala 134:32]
  wire [1:0] route_computer_io_req_0_bits_src_virt_id; // @[Router.scala 134:32]
  wire [1:0] route_computer_io_req_0_bits_flow_ingress_node; // @[Router.scala 134:32]
  wire [1:0] route_computer_io_req_0_bits_flow_egress_node; // @[Router.scala 134:32]
  wire  route_computer_io_resp_2_vc_sel_1_0; // @[Router.scala 134:32]
  wire  route_computer_io_resp_2_vc_sel_1_1; // @[Router.scala 134:32]
  wire  route_computer_io_resp_2_vc_sel_1_2; // @[Router.scala 134:32]
  wire  route_computer_io_resp_2_vc_sel_1_3; // @[Router.scala 134:32]
  wire  route_computer_io_resp_2_vc_sel_0_0; // @[Router.scala 134:32]
  wire  route_computer_io_resp_2_vc_sel_0_1; // @[Router.scala 134:32]
  wire  route_computer_io_resp_2_vc_sel_0_2; // @[Router.scala 134:32]
  wire  route_computer_io_resp_2_vc_sel_0_3; // @[Router.scala 134:32]
  wire  route_computer_io_resp_1_vc_sel_1_0; // @[Router.scala 134:32]
  wire  route_computer_io_resp_1_vc_sel_1_1; // @[Router.scala 134:32]
  wire  route_computer_io_resp_1_vc_sel_1_2; // @[Router.scala 134:32]
  wire  route_computer_io_resp_1_vc_sel_1_3; // @[Router.scala 134:32]
  wire  route_computer_io_resp_1_vc_sel_0_0; // @[Router.scala 134:32]
  wire  route_computer_io_resp_1_vc_sel_0_1; // @[Router.scala 134:32]
  wire  route_computer_io_resp_1_vc_sel_0_2; // @[Router.scala 134:32]
  wire  route_computer_io_resp_0_vc_sel_1_0; // @[Router.scala 134:32]
  wire  route_computer_io_resp_0_vc_sel_1_1; // @[Router.scala 134:32]
  wire  route_computer_io_resp_0_vc_sel_1_2; // @[Router.scala 134:32]
  wire  route_computer_io_resp_0_vc_sel_1_3; // @[Router.scala 134:32]
  wire  route_computer_io_resp_0_vc_sel_0_0; // @[Router.scala 134:32]
  wire  route_computer_io_resp_0_vc_sel_0_1; // @[Router.scala 134:32]
  wire  route_computer_io_resp_0_vc_sel_0_2; // @[Router.scala 134:32]
  wire [19:0] plusarg_reader_out; // @[PlusArg.scala 80:11]
  wire  _fires_count_T = vc_allocator_io_req_0_ready & vc_allocator_io_req_0_valid; // @[Decoupled.scala 51:35]
  wire  _fires_count_T_1 = vc_allocator_io_req_1_ready & vc_allocator_io_req_1_valid; // @[Decoupled.scala 51:35]
  wire  _fires_count_T_2 = vc_allocator_io_req_2_ready & vc_allocator_io_req_2_valid; // @[Decoupled.scala 51:35]
  wire [1:0] _fires_count_T_3 = _fires_count_T_1 + _fires_count_T_2; // @[Bitwise.scala 51:90]
  wire [1:0] _GEN_5 = {{1'd0}, _fires_count_T}; // @[Bitwise.scala 51:90]
  wire [2:0] _fires_count_T_5 = _GEN_5 + _fires_count_T_3; // @[Bitwise.scala 51:90]
  reg  switch_io_sel_REG_2_0_2_0; // @[Router.scala 176:14]
  reg  switch_io_sel_REG_2_0_1_0; // @[Router.scala 176:14]
  reg  switch_io_sel_REG_2_0_0_0; // @[Router.scala 176:14]
  reg  switch_io_sel_REG_1_0_2_0; // @[Router.scala 176:14]
  reg  switch_io_sel_REG_1_0_1_0; // @[Router.scala 176:14]
  reg  switch_io_sel_REG_1_0_0_0; // @[Router.scala 176:14]
  reg  switch_io_sel_REG_0_0_2_0; // @[Router.scala 176:14]
  reg  switch_io_sel_REG_0_0_1_0; // @[Router.scala 176:14]
  reg  switch_io_sel_REG_0_0_0_0; // @[Router.scala 176:14]
  reg [63:0] debug_tsc; // @[Router.scala 193:28]
  wire [63:0] _debug_tsc_T_1 = debug_tsc + 64'h1; // @[Router.scala 194:28]
  reg [63:0] debug_sample; // @[Router.scala 195:31]
  wire [63:0] _debug_sample_T_1 = debug_sample + 64'h1; // @[Router.scala 196:34]
  wire [19:0] _T_1 = plusarg_reader_out - 20'h1; // @[Router.scala 198:40]
  wire [63:0] _GEN_6 = {{44'd0}, _T_1}; // @[Router.scala 198:24]
  wire  _T_2 = debug_sample == _GEN_6; // @[Router.scala 198:24]
  reg [63:0] util_ctr; // @[Router.scala 201:29]
  reg  fired; // @[Router.scala 202:26]
  wire [63:0] _GEN_7 = {{63'd0}, auto_dest_nodes_in_0_flit_0_valid}; // @[Router.scala 203:28]
  wire [63:0] _util_ctr_T_1 = util_ctr + _GEN_7; // @[Router.scala 203:28]
  wire  _T_8 = plusarg_reader_out != 20'h0 & _T_2 & fired; // @[Router.scala 205:71]
  reg [63:0] util_ctr_1; // @[Router.scala 201:29]
  reg  fired_1; // @[Router.scala 202:26]
  wire [63:0] _GEN_9 = {{63'd0}, auto_dest_nodes_in_1_flit_0_valid}; // @[Router.scala 203:28]
  wire [63:0] _util_ctr_T_3 = util_ctr_1 + _GEN_9; // @[Router.scala 203:28]
  wire  _T_16 = plusarg_reader_out != 20'h0 & _T_2 & fired_1; // @[Router.scala 205:71]
  wire  bundleIn_0_2_flit_ready = ingress_unit_2_from_3_io_in_ready; // @[Nodes.scala 1215:84 Router.scala 142:68]
  wire  _T_19 = bundleIn_0_2_flit_ready & auto_ingress_nodes_in_flit_valid; // @[Decoupled.scala 51:35]
  reg [63:0] util_ctr_2; // @[Router.scala 201:29]
  reg  fired_2; // @[Router.scala 202:26]
  wire [63:0] _GEN_11 = {{63'd0}, _T_19}; // @[Router.scala 203:28]
  wire [63:0] _util_ctr_T_5 = util_ctr_2 + _GEN_11; // @[Router.scala 203:28]
  wire  _T_25 = plusarg_reader_out != 20'h0 & _T_2 & fired_2; // @[Router.scala 205:71]
  wire  x1_2_flit_valid = egress_unit_2_to_3_io_out_valid; // @[Nodes.scala 1212:84 Router.scala 144:65]
  reg [63:0] util_ctr_3; // @[Router.scala 201:29]
  reg  fired_3; // @[Router.scala 202:26]
  wire [63:0] _GEN_13 = {{63'd0}, x1_2_flit_valid}; // @[Router.scala 203:28]
  wire [63:0] _util_ctr_T_7 = util_ctr_3 + _GEN_13; // @[Router.scala 203:28]
  wire  _T_34 = plusarg_reader_out != 20'h0 & _T_2 & fired_3; // @[Router.scala 205:71]
  wire [1:0] fires_count = _fires_count_T_5[1:0]; // @[Bitwise.scala 51:90]
  NoCMonitor_6 monitor ( // @[Nodes.scala 24:25]
    .clock(monitor_clock),
    .reset(monitor_reset),
    .io_in_flit_0_valid(monitor_io_in_flit_0_valid),
    .io_in_flit_0_bits_head(monitor_io_in_flit_0_bits_head),
    .io_in_flit_0_bits_tail(monitor_io_in_flit_0_bits_tail),
    .io_in_flit_0_bits_flow_ingress_node(monitor_io_in_flit_0_bits_flow_ingress_node),
    .io_in_flit_0_bits_flow_egress_node(monitor_io_in_flit_0_bits_flow_egress_node),
    .io_in_flit_0_bits_virt_channel_id(monitor_io_in_flit_0_bits_virt_channel_id)
  );
  NoCMonitor_7 monitor_1 ( // @[Nodes.scala 24:25]
    .clock(monitor_1_clock),
    .reset(monitor_1_reset),
    .io_in_flit_0_valid(monitor_1_io_in_flit_0_valid),
    .io_in_flit_0_bits_head(monitor_1_io_in_flit_0_bits_head),
    .io_in_flit_0_bits_tail(monitor_1_io_in_flit_0_bits_tail),
    .io_in_flit_0_bits_flow_ingress_node(monitor_1_io_in_flit_0_bits_flow_ingress_node),
    .io_in_flit_0_bits_flow_egress_node(monitor_1_io_in_flit_0_bits_flow_egress_node),
    .io_in_flit_0_bits_virt_channel_id(monitor_1_io_in_flit_0_bits_virt_channel_id)
  );
  InputUnit_6 input_unit_0_from_0 ( // @[Router.scala 112:13]
    .clock(input_unit_0_from_0_clock),
    .reset(input_unit_0_from_0_reset),
    .io_router_req_valid(input_unit_0_from_0_io_router_req_valid),
    .io_router_req_bits_src_virt_id(input_unit_0_from_0_io_router_req_bits_src_virt_id),
    .io_router_req_bits_flow_ingress_node(input_unit_0_from_0_io_router_req_bits_flow_ingress_node),
    .io_router_req_bits_flow_egress_node(input_unit_0_from_0_io_router_req_bits_flow_egress_node),
    .io_router_resp_vc_sel_1_0(input_unit_0_from_0_io_router_resp_vc_sel_1_0),
    .io_router_resp_vc_sel_1_1(input_unit_0_from_0_io_router_resp_vc_sel_1_1),
    .io_router_resp_vc_sel_1_2(input_unit_0_from_0_io_router_resp_vc_sel_1_2),
    .io_router_resp_vc_sel_1_3(input_unit_0_from_0_io_router_resp_vc_sel_1_3),
    .io_router_resp_vc_sel_0_0(input_unit_0_from_0_io_router_resp_vc_sel_0_0),
    .io_router_resp_vc_sel_0_1(input_unit_0_from_0_io_router_resp_vc_sel_0_1),
    .io_router_resp_vc_sel_0_2(input_unit_0_from_0_io_router_resp_vc_sel_0_2),
    .io_vcalloc_req_ready(input_unit_0_from_0_io_vcalloc_req_ready),
    .io_vcalloc_req_valid(input_unit_0_from_0_io_vcalloc_req_valid),
    .io_vcalloc_req_bits_vc_sel_2_0(input_unit_0_from_0_io_vcalloc_req_bits_vc_sel_2_0),
    .io_vcalloc_req_bits_vc_sel_1_0(input_unit_0_from_0_io_vcalloc_req_bits_vc_sel_1_0),
    .io_vcalloc_req_bits_vc_sel_1_1(input_unit_0_from_0_io_vcalloc_req_bits_vc_sel_1_1),
    .io_vcalloc_req_bits_vc_sel_1_2(input_unit_0_from_0_io_vcalloc_req_bits_vc_sel_1_2),
    .io_vcalloc_req_bits_vc_sel_1_3(input_unit_0_from_0_io_vcalloc_req_bits_vc_sel_1_3),
    .io_vcalloc_req_bits_vc_sel_0_0(input_unit_0_from_0_io_vcalloc_req_bits_vc_sel_0_0),
    .io_vcalloc_req_bits_vc_sel_0_1(input_unit_0_from_0_io_vcalloc_req_bits_vc_sel_0_1),
    .io_vcalloc_req_bits_vc_sel_0_2(input_unit_0_from_0_io_vcalloc_req_bits_vc_sel_0_2),
    .io_vcalloc_resp_vc_sel_2_0(input_unit_0_from_0_io_vcalloc_resp_vc_sel_2_0),
    .io_vcalloc_resp_vc_sel_1_0(input_unit_0_from_0_io_vcalloc_resp_vc_sel_1_0),
    .io_vcalloc_resp_vc_sel_1_1(input_unit_0_from_0_io_vcalloc_resp_vc_sel_1_1),
    .io_vcalloc_resp_vc_sel_1_2(input_unit_0_from_0_io_vcalloc_resp_vc_sel_1_2),
    .io_vcalloc_resp_vc_sel_1_3(input_unit_0_from_0_io_vcalloc_resp_vc_sel_1_3),
    .io_vcalloc_resp_vc_sel_0_0(input_unit_0_from_0_io_vcalloc_resp_vc_sel_0_0),
    .io_vcalloc_resp_vc_sel_0_1(input_unit_0_from_0_io_vcalloc_resp_vc_sel_0_1),
    .io_vcalloc_resp_vc_sel_0_2(input_unit_0_from_0_io_vcalloc_resp_vc_sel_0_2),
    .io_out_credit_available_2_0(input_unit_0_from_0_io_out_credit_available_2_0),
    .io_out_credit_available_1_0(input_unit_0_from_0_io_out_credit_available_1_0),
    .io_out_credit_available_1_1(input_unit_0_from_0_io_out_credit_available_1_1),
    .io_out_credit_available_1_2(input_unit_0_from_0_io_out_credit_available_1_2),
    .io_out_credit_available_1_3(input_unit_0_from_0_io_out_credit_available_1_3),
    .io_out_credit_available_0_0(input_unit_0_from_0_io_out_credit_available_0_0),
    .io_out_credit_available_0_1(input_unit_0_from_0_io_out_credit_available_0_1),
    .io_out_credit_available_0_2(input_unit_0_from_0_io_out_credit_available_0_2),
    .io_out_credit_available_0_3(input_unit_0_from_0_io_out_credit_available_0_3),
    .io_salloc_req_0_ready(input_unit_0_from_0_io_salloc_req_0_ready),
    .io_salloc_req_0_valid(input_unit_0_from_0_io_salloc_req_0_valid),
    .io_salloc_req_0_bits_vc_sel_2_0(input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_2_0),
    .io_salloc_req_0_bits_vc_sel_1_0(input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_1_0),
    .io_salloc_req_0_bits_vc_sel_1_1(input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_1_1),
    .io_salloc_req_0_bits_vc_sel_1_2(input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_1_2),
    .io_salloc_req_0_bits_vc_sel_1_3(input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_1_3),
    .io_salloc_req_0_bits_vc_sel_0_0(input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_0_0),
    .io_salloc_req_0_bits_vc_sel_0_1(input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_0_1),
    .io_salloc_req_0_bits_vc_sel_0_2(input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_0_2),
    .io_salloc_req_0_bits_vc_sel_0_3(input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_0_3),
    .io_salloc_req_0_bits_tail(input_unit_0_from_0_io_salloc_req_0_bits_tail),
    .io_out_0_valid(input_unit_0_from_0_io_out_0_valid),
    .io_out_0_bits_flit_head(input_unit_0_from_0_io_out_0_bits_flit_head),
    .io_out_0_bits_flit_tail(input_unit_0_from_0_io_out_0_bits_flit_tail),
    .io_out_0_bits_flit_payload(input_unit_0_from_0_io_out_0_bits_flit_payload),
    .io_out_0_bits_flit_flow_ingress_node(input_unit_0_from_0_io_out_0_bits_flit_flow_ingress_node),
    .io_out_0_bits_flit_flow_egress_node(input_unit_0_from_0_io_out_0_bits_flit_flow_egress_node),
    .io_out_0_bits_out_virt_channel(input_unit_0_from_0_io_out_0_bits_out_virt_channel),
    .io_debug_va_stall(input_unit_0_from_0_io_debug_va_stall),
    .io_debug_sa_stall(input_unit_0_from_0_io_debug_sa_stall),
    .io_in_flit_0_valid(input_unit_0_from_0_io_in_flit_0_valid),
    .io_in_flit_0_bits_head(input_unit_0_from_0_io_in_flit_0_bits_head),
    .io_in_flit_0_bits_tail(input_unit_0_from_0_io_in_flit_0_bits_tail),
    .io_in_flit_0_bits_payload(input_unit_0_from_0_io_in_flit_0_bits_payload),
    .io_in_flit_0_bits_flow_ingress_node(input_unit_0_from_0_io_in_flit_0_bits_flow_ingress_node),
    .io_in_flit_0_bits_flow_egress_node(input_unit_0_from_0_io_in_flit_0_bits_flow_egress_node),
    .io_in_flit_0_bits_virt_channel_id(input_unit_0_from_0_io_in_flit_0_bits_virt_channel_id),
    .io_in_credit_return(input_unit_0_from_0_io_in_credit_return),
    .io_in_vc_free(input_unit_0_from_0_io_in_vc_free)
  );
  InputUnit_7 input_unit_1_from_2 ( // @[Router.scala 112:13]
    .clock(input_unit_1_from_2_clock),
    .reset(input_unit_1_from_2_reset),
    .io_router_req_valid(input_unit_1_from_2_io_router_req_valid),
    .io_router_req_bits_src_virt_id(input_unit_1_from_2_io_router_req_bits_src_virt_id),
    .io_router_req_bits_flow_ingress_node(input_unit_1_from_2_io_router_req_bits_flow_ingress_node),
    .io_router_req_bits_flow_egress_node(input_unit_1_from_2_io_router_req_bits_flow_egress_node),
    .io_router_resp_vc_sel_1_0(input_unit_1_from_2_io_router_resp_vc_sel_1_0),
    .io_router_resp_vc_sel_1_1(input_unit_1_from_2_io_router_resp_vc_sel_1_1),
    .io_router_resp_vc_sel_1_2(input_unit_1_from_2_io_router_resp_vc_sel_1_2),
    .io_router_resp_vc_sel_1_3(input_unit_1_from_2_io_router_resp_vc_sel_1_3),
    .io_router_resp_vc_sel_0_0(input_unit_1_from_2_io_router_resp_vc_sel_0_0),
    .io_router_resp_vc_sel_0_1(input_unit_1_from_2_io_router_resp_vc_sel_0_1),
    .io_router_resp_vc_sel_0_2(input_unit_1_from_2_io_router_resp_vc_sel_0_2),
    .io_vcalloc_req_ready(input_unit_1_from_2_io_vcalloc_req_ready),
    .io_vcalloc_req_valid(input_unit_1_from_2_io_vcalloc_req_valid),
    .io_vcalloc_req_bits_vc_sel_2_0(input_unit_1_from_2_io_vcalloc_req_bits_vc_sel_2_0),
    .io_vcalloc_req_bits_vc_sel_1_0(input_unit_1_from_2_io_vcalloc_req_bits_vc_sel_1_0),
    .io_vcalloc_req_bits_vc_sel_1_1(input_unit_1_from_2_io_vcalloc_req_bits_vc_sel_1_1),
    .io_vcalloc_req_bits_vc_sel_1_2(input_unit_1_from_2_io_vcalloc_req_bits_vc_sel_1_2),
    .io_vcalloc_req_bits_vc_sel_1_3(input_unit_1_from_2_io_vcalloc_req_bits_vc_sel_1_3),
    .io_vcalloc_req_bits_vc_sel_0_0(input_unit_1_from_2_io_vcalloc_req_bits_vc_sel_0_0),
    .io_vcalloc_req_bits_vc_sel_0_1(input_unit_1_from_2_io_vcalloc_req_bits_vc_sel_0_1),
    .io_vcalloc_req_bits_vc_sel_0_2(input_unit_1_from_2_io_vcalloc_req_bits_vc_sel_0_2),
    .io_vcalloc_resp_vc_sel_2_0(input_unit_1_from_2_io_vcalloc_resp_vc_sel_2_0),
    .io_vcalloc_resp_vc_sel_1_0(input_unit_1_from_2_io_vcalloc_resp_vc_sel_1_0),
    .io_vcalloc_resp_vc_sel_1_1(input_unit_1_from_2_io_vcalloc_resp_vc_sel_1_1),
    .io_vcalloc_resp_vc_sel_1_2(input_unit_1_from_2_io_vcalloc_resp_vc_sel_1_2),
    .io_vcalloc_resp_vc_sel_1_3(input_unit_1_from_2_io_vcalloc_resp_vc_sel_1_3),
    .io_vcalloc_resp_vc_sel_0_0(input_unit_1_from_2_io_vcalloc_resp_vc_sel_0_0),
    .io_vcalloc_resp_vc_sel_0_1(input_unit_1_from_2_io_vcalloc_resp_vc_sel_0_1),
    .io_vcalloc_resp_vc_sel_0_2(input_unit_1_from_2_io_vcalloc_resp_vc_sel_0_2),
    .io_out_credit_available_2_0(input_unit_1_from_2_io_out_credit_available_2_0),
    .io_out_credit_available_1_0(input_unit_1_from_2_io_out_credit_available_1_0),
    .io_out_credit_available_1_1(input_unit_1_from_2_io_out_credit_available_1_1),
    .io_out_credit_available_1_2(input_unit_1_from_2_io_out_credit_available_1_2),
    .io_out_credit_available_1_3(input_unit_1_from_2_io_out_credit_available_1_3),
    .io_out_credit_available_0_0(input_unit_1_from_2_io_out_credit_available_0_0),
    .io_out_credit_available_0_1(input_unit_1_from_2_io_out_credit_available_0_1),
    .io_out_credit_available_0_2(input_unit_1_from_2_io_out_credit_available_0_2),
    .io_out_credit_available_0_3(input_unit_1_from_2_io_out_credit_available_0_3),
    .io_salloc_req_0_ready(input_unit_1_from_2_io_salloc_req_0_ready),
    .io_salloc_req_0_valid(input_unit_1_from_2_io_salloc_req_0_valid),
    .io_salloc_req_0_bits_vc_sel_2_0(input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_2_0),
    .io_salloc_req_0_bits_vc_sel_1_0(input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_1_0),
    .io_salloc_req_0_bits_vc_sel_1_1(input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_1_1),
    .io_salloc_req_0_bits_vc_sel_1_2(input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_1_2),
    .io_salloc_req_0_bits_vc_sel_1_3(input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_1_3),
    .io_salloc_req_0_bits_vc_sel_0_0(input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_0_0),
    .io_salloc_req_0_bits_vc_sel_0_1(input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_0_1),
    .io_salloc_req_0_bits_vc_sel_0_2(input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_0_2),
    .io_salloc_req_0_bits_vc_sel_0_3(input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_0_3),
    .io_salloc_req_0_bits_tail(input_unit_1_from_2_io_salloc_req_0_bits_tail),
    .io_out_0_valid(input_unit_1_from_2_io_out_0_valid),
    .io_out_0_bits_flit_head(input_unit_1_from_2_io_out_0_bits_flit_head),
    .io_out_0_bits_flit_tail(input_unit_1_from_2_io_out_0_bits_flit_tail),
    .io_out_0_bits_flit_payload(input_unit_1_from_2_io_out_0_bits_flit_payload),
    .io_out_0_bits_flit_flow_ingress_node(input_unit_1_from_2_io_out_0_bits_flit_flow_ingress_node),
    .io_out_0_bits_flit_flow_egress_node(input_unit_1_from_2_io_out_0_bits_flit_flow_egress_node),
    .io_out_0_bits_out_virt_channel(input_unit_1_from_2_io_out_0_bits_out_virt_channel),
    .io_debug_va_stall(input_unit_1_from_2_io_debug_va_stall),
    .io_debug_sa_stall(input_unit_1_from_2_io_debug_sa_stall),
    .io_in_flit_0_valid(input_unit_1_from_2_io_in_flit_0_valid),
    .io_in_flit_0_bits_head(input_unit_1_from_2_io_in_flit_0_bits_head),
    .io_in_flit_0_bits_tail(input_unit_1_from_2_io_in_flit_0_bits_tail),
    .io_in_flit_0_bits_payload(input_unit_1_from_2_io_in_flit_0_bits_payload),
    .io_in_flit_0_bits_flow_ingress_node(input_unit_1_from_2_io_in_flit_0_bits_flow_ingress_node),
    .io_in_flit_0_bits_flow_egress_node(input_unit_1_from_2_io_in_flit_0_bits_flow_egress_node),
    .io_in_flit_0_bits_virt_channel_id(input_unit_1_from_2_io_in_flit_0_bits_virt_channel_id),
    .io_in_credit_return(input_unit_1_from_2_io_in_credit_return),
    .io_in_vc_free(input_unit_1_from_2_io_in_vc_free)
  );
  IngressUnit_3 ingress_unit_2_from_3 ( // @[Router.scala 116:13]
    .clock(ingress_unit_2_from_3_clock),
    .reset(ingress_unit_2_from_3_reset),
    .io_router_req_valid(ingress_unit_2_from_3_io_router_req_valid),
    .io_router_req_bits_flow_ingress_node(ingress_unit_2_from_3_io_router_req_bits_flow_ingress_node),
    .io_router_req_bits_flow_egress_node(ingress_unit_2_from_3_io_router_req_bits_flow_egress_node),
    .io_router_resp_vc_sel_1_0(ingress_unit_2_from_3_io_router_resp_vc_sel_1_0),
    .io_router_resp_vc_sel_1_1(ingress_unit_2_from_3_io_router_resp_vc_sel_1_1),
    .io_router_resp_vc_sel_1_2(ingress_unit_2_from_3_io_router_resp_vc_sel_1_2),
    .io_router_resp_vc_sel_1_3(ingress_unit_2_from_3_io_router_resp_vc_sel_1_3),
    .io_router_resp_vc_sel_0_0(ingress_unit_2_from_3_io_router_resp_vc_sel_0_0),
    .io_router_resp_vc_sel_0_1(ingress_unit_2_from_3_io_router_resp_vc_sel_0_1),
    .io_router_resp_vc_sel_0_2(ingress_unit_2_from_3_io_router_resp_vc_sel_0_2),
    .io_router_resp_vc_sel_0_3(ingress_unit_2_from_3_io_router_resp_vc_sel_0_3),
    .io_vcalloc_req_ready(ingress_unit_2_from_3_io_vcalloc_req_ready),
    .io_vcalloc_req_valid(ingress_unit_2_from_3_io_vcalloc_req_valid),
    .io_vcalloc_req_bits_vc_sel_2_0(ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_2_0),
    .io_vcalloc_req_bits_vc_sel_1_0(ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_1_0),
    .io_vcalloc_req_bits_vc_sel_1_1(ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_1_1),
    .io_vcalloc_req_bits_vc_sel_1_2(ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_1_2),
    .io_vcalloc_req_bits_vc_sel_1_3(ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_1_3),
    .io_vcalloc_req_bits_vc_sel_0_0(ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_0_0),
    .io_vcalloc_req_bits_vc_sel_0_1(ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_0_1),
    .io_vcalloc_req_bits_vc_sel_0_2(ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_0_2),
    .io_vcalloc_req_bits_vc_sel_0_3(ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_0_3),
    .io_vcalloc_resp_vc_sel_2_0(ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_2_0),
    .io_vcalloc_resp_vc_sel_1_0(ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_1_0),
    .io_vcalloc_resp_vc_sel_1_1(ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_1_1),
    .io_vcalloc_resp_vc_sel_1_2(ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_1_2),
    .io_vcalloc_resp_vc_sel_1_3(ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_1_3),
    .io_vcalloc_resp_vc_sel_0_0(ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_0_0),
    .io_vcalloc_resp_vc_sel_0_1(ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_0_1),
    .io_vcalloc_resp_vc_sel_0_2(ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_0_2),
    .io_vcalloc_resp_vc_sel_0_3(ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_0_3),
    .io_out_credit_available_2_0(ingress_unit_2_from_3_io_out_credit_available_2_0),
    .io_out_credit_available_1_0(ingress_unit_2_from_3_io_out_credit_available_1_0),
    .io_out_credit_available_1_1(ingress_unit_2_from_3_io_out_credit_available_1_1),
    .io_out_credit_available_1_2(ingress_unit_2_from_3_io_out_credit_available_1_2),
    .io_out_credit_available_1_3(ingress_unit_2_from_3_io_out_credit_available_1_3),
    .io_out_credit_available_0_0(ingress_unit_2_from_3_io_out_credit_available_0_0),
    .io_out_credit_available_0_1(ingress_unit_2_from_3_io_out_credit_available_0_1),
    .io_out_credit_available_0_2(ingress_unit_2_from_3_io_out_credit_available_0_2),
    .io_out_credit_available_0_3(ingress_unit_2_from_3_io_out_credit_available_0_3),
    .io_salloc_req_0_ready(ingress_unit_2_from_3_io_salloc_req_0_ready),
    .io_salloc_req_0_valid(ingress_unit_2_from_3_io_salloc_req_0_valid),
    .io_salloc_req_0_bits_vc_sel_2_0(ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_2_0),
    .io_salloc_req_0_bits_vc_sel_1_0(ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_1_0),
    .io_salloc_req_0_bits_vc_sel_1_1(ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_1_1),
    .io_salloc_req_0_bits_vc_sel_1_2(ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_1_2),
    .io_salloc_req_0_bits_vc_sel_1_3(ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_1_3),
    .io_salloc_req_0_bits_vc_sel_0_0(ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_0_0),
    .io_salloc_req_0_bits_vc_sel_0_1(ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_0_1),
    .io_salloc_req_0_bits_vc_sel_0_2(ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_0_2),
    .io_salloc_req_0_bits_vc_sel_0_3(ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_0_3),
    .io_salloc_req_0_bits_tail(ingress_unit_2_from_3_io_salloc_req_0_bits_tail),
    .io_out_0_valid(ingress_unit_2_from_3_io_out_0_valid),
    .io_out_0_bits_flit_head(ingress_unit_2_from_3_io_out_0_bits_flit_head),
    .io_out_0_bits_flit_tail(ingress_unit_2_from_3_io_out_0_bits_flit_tail),
    .io_out_0_bits_flit_payload(ingress_unit_2_from_3_io_out_0_bits_flit_payload),
    .io_out_0_bits_flit_flow_ingress_node(ingress_unit_2_from_3_io_out_0_bits_flit_flow_ingress_node),
    .io_out_0_bits_flit_flow_egress_node(ingress_unit_2_from_3_io_out_0_bits_flit_flow_egress_node),
    .io_out_0_bits_out_virt_channel(ingress_unit_2_from_3_io_out_0_bits_out_virt_channel),
    .io_in_ready(ingress_unit_2_from_3_io_in_ready),
    .io_in_valid(ingress_unit_2_from_3_io_in_valid),
    .io_in_bits_head(ingress_unit_2_from_3_io_in_bits_head),
    .io_in_bits_tail(ingress_unit_2_from_3_io_in_bits_tail),
    .io_in_bits_payload(ingress_unit_2_from_3_io_in_bits_payload),
    .io_in_bits_egress_id(ingress_unit_2_from_3_io_in_bits_egress_id)
  );
  OutputUnit output_unit_0_to_0 ( // @[Router.scala 122:13]
    .clock(output_unit_0_to_0_clock),
    .reset(output_unit_0_to_0_reset),
    .io_in_0_valid(output_unit_0_to_0_io_in_0_valid),
    .io_in_0_bits_head(output_unit_0_to_0_io_in_0_bits_head),
    .io_in_0_bits_tail(output_unit_0_to_0_io_in_0_bits_tail),
    .io_in_0_bits_payload(output_unit_0_to_0_io_in_0_bits_payload),
    .io_in_0_bits_flow_ingress_node(output_unit_0_to_0_io_in_0_bits_flow_ingress_node),
    .io_in_0_bits_flow_egress_node(output_unit_0_to_0_io_in_0_bits_flow_egress_node),
    .io_in_0_bits_virt_channel_id(output_unit_0_to_0_io_in_0_bits_virt_channel_id),
    .io_credit_available_0(output_unit_0_to_0_io_credit_available_0),
    .io_credit_available_1(output_unit_0_to_0_io_credit_available_1),
    .io_credit_available_2(output_unit_0_to_0_io_credit_available_2),
    .io_credit_available_3(output_unit_0_to_0_io_credit_available_3),
    .io_channel_status_0_occupied(output_unit_0_to_0_io_channel_status_0_occupied),
    .io_channel_status_1_occupied(output_unit_0_to_0_io_channel_status_1_occupied),
    .io_channel_status_2_occupied(output_unit_0_to_0_io_channel_status_2_occupied),
    .io_channel_status_3_occupied(output_unit_0_to_0_io_channel_status_3_occupied),
    .io_allocs_0_alloc(output_unit_0_to_0_io_allocs_0_alloc),
    .io_allocs_1_alloc(output_unit_0_to_0_io_allocs_1_alloc),
    .io_allocs_2_alloc(output_unit_0_to_0_io_allocs_2_alloc),
    .io_allocs_3_alloc(output_unit_0_to_0_io_allocs_3_alloc),
    .io_credit_alloc_0_alloc(output_unit_0_to_0_io_credit_alloc_0_alloc),
    .io_credit_alloc_1_alloc(output_unit_0_to_0_io_credit_alloc_1_alloc),
    .io_credit_alloc_2_alloc(output_unit_0_to_0_io_credit_alloc_2_alloc),
    .io_credit_alloc_3_alloc(output_unit_0_to_0_io_credit_alloc_3_alloc),
    .io_out_flit_0_valid(output_unit_0_to_0_io_out_flit_0_valid),
    .io_out_flit_0_bits_head(output_unit_0_to_0_io_out_flit_0_bits_head),
    .io_out_flit_0_bits_tail(output_unit_0_to_0_io_out_flit_0_bits_tail),
    .io_out_flit_0_bits_payload(output_unit_0_to_0_io_out_flit_0_bits_payload),
    .io_out_flit_0_bits_flow_ingress_node(output_unit_0_to_0_io_out_flit_0_bits_flow_ingress_node),
    .io_out_flit_0_bits_flow_egress_node(output_unit_0_to_0_io_out_flit_0_bits_flow_egress_node),
    .io_out_flit_0_bits_virt_channel_id(output_unit_0_to_0_io_out_flit_0_bits_virt_channel_id),
    .io_out_credit_return(output_unit_0_to_0_io_out_credit_return),
    .io_out_vc_free(output_unit_0_to_0_io_out_vc_free)
  );
  OutputUnit output_unit_1_to_2 ( // @[Router.scala 122:13]
    .clock(output_unit_1_to_2_clock),
    .reset(output_unit_1_to_2_reset),
    .io_in_0_valid(output_unit_1_to_2_io_in_0_valid),
    .io_in_0_bits_head(output_unit_1_to_2_io_in_0_bits_head),
    .io_in_0_bits_tail(output_unit_1_to_2_io_in_0_bits_tail),
    .io_in_0_bits_payload(output_unit_1_to_2_io_in_0_bits_payload),
    .io_in_0_bits_flow_ingress_node(output_unit_1_to_2_io_in_0_bits_flow_ingress_node),
    .io_in_0_bits_flow_egress_node(output_unit_1_to_2_io_in_0_bits_flow_egress_node),
    .io_in_0_bits_virt_channel_id(output_unit_1_to_2_io_in_0_bits_virt_channel_id),
    .io_credit_available_0(output_unit_1_to_2_io_credit_available_0),
    .io_credit_available_1(output_unit_1_to_2_io_credit_available_1),
    .io_credit_available_2(output_unit_1_to_2_io_credit_available_2),
    .io_credit_available_3(output_unit_1_to_2_io_credit_available_3),
    .io_channel_status_0_occupied(output_unit_1_to_2_io_channel_status_0_occupied),
    .io_channel_status_1_occupied(output_unit_1_to_2_io_channel_status_1_occupied),
    .io_channel_status_2_occupied(output_unit_1_to_2_io_channel_status_2_occupied),
    .io_channel_status_3_occupied(output_unit_1_to_2_io_channel_status_3_occupied),
    .io_allocs_0_alloc(output_unit_1_to_2_io_allocs_0_alloc),
    .io_allocs_1_alloc(output_unit_1_to_2_io_allocs_1_alloc),
    .io_allocs_2_alloc(output_unit_1_to_2_io_allocs_2_alloc),
    .io_allocs_3_alloc(output_unit_1_to_2_io_allocs_3_alloc),
    .io_credit_alloc_0_alloc(output_unit_1_to_2_io_credit_alloc_0_alloc),
    .io_credit_alloc_1_alloc(output_unit_1_to_2_io_credit_alloc_1_alloc),
    .io_credit_alloc_2_alloc(output_unit_1_to_2_io_credit_alloc_2_alloc),
    .io_credit_alloc_3_alloc(output_unit_1_to_2_io_credit_alloc_3_alloc),
    .io_out_flit_0_valid(output_unit_1_to_2_io_out_flit_0_valid),
    .io_out_flit_0_bits_head(output_unit_1_to_2_io_out_flit_0_bits_head),
    .io_out_flit_0_bits_tail(output_unit_1_to_2_io_out_flit_0_bits_tail),
    .io_out_flit_0_bits_payload(output_unit_1_to_2_io_out_flit_0_bits_payload),
    .io_out_flit_0_bits_flow_ingress_node(output_unit_1_to_2_io_out_flit_0_bits_flow_ingress_node),
    .io_out_flit_0_bits_flow_egress_node(output_unit_1_to_2_io_out_flit_0_bits_flow_egress_node),
    .io_out_flit_0_bits_virt_channel_id(output_unit_1_to_2_io_out_flit_0_bits_virt_channel_id),
    .io_out_credit_return(output_unit_1_to_2_io_out_credit_return),
    .io_out_vc_free(output_unit_1_to_2_io_out_vc_free)
  );
  EgressUnit egress_unit_2_to_3 ( // @[Router.scala 125:13]
    .clock(egress_unit_2_to_3_clock),
    .reset(egress_unit_2_to_3_reset),
    .io_in_0_valid(egress_unit_2_to_3_io_in_0_valid),
    .io_in_0_bits_head(egress_unit_2_to_3_io_in_0_bits_head),
    .io_in_0_bits_tail(egress_unit_2_to_3_io_in_0_bits_tail),
    .io_in_0_bits_payload(egress_unit_2_to_3_io_in_0_bits_payload),
    .io_in_0_bits_flow_ingress_node(egress_unit_2_to_3_io_in_0_bits_flow_ingress_node),
    .io_credit_available_0(egress_unit_2_to_3_io_credit_available_0),
    .io_channel_status_0_occupied(egress_unit_2_to_3_io_channel_status_0_occupied),
    .io_allocs_0_alloc(egress_unit_2_to_3_io_allocs_0_alloc),
    .io_credit_alloc_0_alloc(egress_unit_2_to_3_io_credit_alloc_0_alloc),
    .io_credit_alloc_0_tail(egress_unit_2_to_3_io_credit_alloc_0_tail),
    .io_out_valid(egress_unit_2_to_3_io_out_valid),
    .io_out_bits_head(egress_unit_2_to_3_io_out_bits_head),
    .io_out_bits_tail(egress_unit_2_to_3_io_out_bits_tail),
    .io_out_bits_payload(egress_unit_2_to_3_io_out_bits_payload),
    .io_out_bits_ingress_id(egress_unit_2_to_3_io_out_bits_ingress_id)
  );
  Switch switch ( // @[Router.scala 129:24]
    .clock(switch_clock),
    .reset(switch_reset),
    .io_in_2_0_valid(switch_io_in_2_0_valid),
    .io_in_2_0_bits_flit_head(switch_io_in_2_0_bits_flit_head),
    .io_in_2_0_bits_flit_tail(switch_io_in_2_0_bits_flit_tail),
    .io_in_2_0_bits_flit_payload(switch_io_in_2_0_bits_flit_payload),
    .io_in_2_0_bits_flit_flow_ingress_node(switch_io_in_2_0_bits_flit_flow_ingress_node),
    .io_in_2_0_bits_flit_flow_egress_node(switch_io_in_2_0_bits_flit_flow_egress_node),
    .io_in_2_0_bits_out_virt_channel(switch_io_in_2_0_bits_out_virt_channel),
    .io_in_1_0_valid(switch_io_in_1_0_valid),
    .io_in_1_0_bits_flit_head(switch_io_in_1_0_bits_flit_head),
    .io_in_1_0_bits_flit_tail(switch_io_in_1_0_bits_flit_tail),
    .io_in_1_0_bits_flit_payload(switch_io_in_1_0_bits_flit_payload),
    .io_in_1_0_bits_flit_flow_ingress_node(switch_io_in_1_0_bits_flit_flow_ingress_node),
    .io_in_1_0_bits_flit_flow_egress_node(switch_io_in_1_0_bits_flit_flow_egress_node),
    .io_in_1_0_bits_out_virt_channel(switch_io_in_1_0_bits_out_virt_channel),
    .io_in_0_0_valid(switch_io_in_0_0_valid),
    .io_in_0_0_bits_flit_head(switch_io_in_0_0_bits_flit_head),
    .io_in_0_0_bits_flit_tail(switch_io_in_0_0_bits_flit_tail),
    .io_in_0_0_bits_flit_payload(switch_io_in_0_0_bits_flit_payload),
    .io_in_0_0_bits_flit_flow_ingress_node(switch_io_in_0_0_bits_flit_flow_ingress_node),
    .io_in_0_0_bits_flit_flow_egress_node(switch_io_in_0_0_bits_flit_flow_egress_node),
    .io_in_0_0_bits_out_virt_channel(switch_io_in_0_0_bits_out_virt_channel),
    .io_out_2_0_valid(switch_io_out_2_0_valid),
    .io_out_2_0_bits_head(switch_io_out_2_0_bits_head),
    .io_out_2_0_bits_tail(switch_io_out_2_0_bits_tail),
    .io_out_2_0_bits_payload(switch_io_out_2_0_bits_payload),
    .io_out_2_0_bits_flow_ingress_node(switch_io_out_2_0_bits_flow_ingress_node),
    .io_out_1_0_valid(switch_io_out_1_0_valid),
    .io_out_1_0_bits_head(switch_io_out_1_0_bits_head),
    .io_out_1_0_bits_tail(switch_io_out_1_0_bits_tail),
    .io_out_1_0_bits_payload(switch_io_out_1_0_bits_payload),
    .io_out_1_0_bits_flow_ingress_node(switch_io_out_1_0_bits_flow_ingress_node),
    .io_out_1_0_bits_flow_egress_node(switch_io_out_1_0_bits_flow_egress_node),
    .io_out_1_0_bits_virt_channel_id(switch_io_out_1_0_bits_virt_channel_id),
    .io_out_0_0_valid(switch_io_out_0_0_valid),
    .io_out_0_0_bits_head(switch_io_out_0_0_bits_head),
    .io_out_0_0_bits_tail(switch_io_out_0_0_bits_tail),
    .io_out_0_0_bits_payload(switch_io_out_0_0_bits_payload),
    .io_out_0_0_bits_flow_ingress_node(switch_io_out_0_0_bits_flow_ingress_node),
    .io_out_0_0_bits_flow_egress_node(switch_io_out_0_0_bits_flow_egress_node),
    .io_out_0_0_bits_virt_channel_id(switch_io_out_0_0_bits_virt_channel_id),
    .io_sel_2_0_2_0(switch_io_sel_2_0_2_0),
    .io_sel_2_0_1_0(switch_io_sel_2_0_1_0),
    .io_sel_2_0_0_0(switch_io_sel_2_0_0_0),
    .io_sel_1_0_2_0(switch_io_sel_1_0_2_0),
    .io_sel_1_0_1_0(switch_io_sel_1_0_1_0),
    .io_sel_1_0_0_0(switch_io_sel_1_0_0_0),
    .io_sel_0_0_2_0(switch_io_sel_0_0_2_0),
    .io_sel_0_0_1_0(switch_io_sel_0_0_1_0),
    .io_sel_0_0_0_0(switch_io_sel_0_0_0_0)
  );
  SwitchAllocator switch_allocator ( // @[Router.scala 130:34]
    .clock(switch_allocator_clock),
    .reset(switch_allocator_reset),
    .io_req_2_0_ready(switch_allocator_io_req_2_0_ready),
    .io_req_2_0_valid(switch_allocator_io_req_2_0_valid),
    .io_req_2_0_bits_vc_sel_2_0(switch_allocator_io_req_2_0_bits_vc_sel_2_0),
    .io_req_2_0_bits_vc_sel_1_0(switch_allocator_io_req_2_0_bits_vc_sel_1_0),
    .io_req_2_0_bits_vc_sel_1_1(switch_allocator_io_req_2_0_bits_vc_sel_1_1),
    .io_req_2_0_bits_vc_sel_1_2(switch_allocator_io_req_2_0_bits_vc_sel_1_2),
    .io_req_2_0_bits_vc_sel_1_3(switch_allocator_io_req_2_0_bits_vc_sel_1_3),
    .io_req_2_0_bits_vc_sel_0_0(switch_allocator_io_req_2_0_bits_vc_sel_0_0),
    .io_req_2_0_bits_vc_sel_0_1(switch_allocator_io_req_2_0_bits_vc_sel_0_1),
    .io_req_2_0_bits_vc_sel_0_2(switch_allocator_io_req_2_0_bits_vc_sel_0_2),
    .io_req_2_0_bits_vc_sel_0_3(switch_allocator_io_req_2_0_bits_vc_sel_0_3),
    .io_req_2_0_bits_tail(switch_allocator_io_req_2_0_bits_tail),
    .io_req_1_0_ready(switch_allocator_io_req_1_0_ready),
    .io_req_1_0_valid(switch_allocator_io_req_1_0_valid),
    .io_req_1_0_bits_vc_sel_2_0(switch_allocator_io_req_1_0_bits_vc_sel_2_0),
    .io_req_1_0_bits_vc_sel_1_0(switch_allocator_io_req_1_0_bits_vc_sel_1_0),
    .io_req_1_0_bits_vc_sel_1_1(switch_allocator_io_req_1_0_bits_vc_sel_1_1),
    .io_req_1_0_bits_vc_sel_1_2(switch_allocator_io_req_1_0_bits_vc_sel_1_2),
    .io_req_1_0_bits_vc_sel_1_3(switch_allocator_io_req_1_0_bits_vc_sel_1_3),
    .io_req_1_0_bits_vc_sel_0_0(switch_allocator_io_req_1_0_bits_vc_sel_0_0),
    .io_req_1_0_bits_vc_sel_0_1(switch_allocator_io_req_1_0_bits_vc_sel_0_1),
    .io_req_1_0_bits_vc_sel_0_2(switch_allocator_io_req_1_0_bits_vc_sel_0_2),
    .io_req_1_0_bits_vc_sel_0_3(switch_allocator_io_req_1_0_bits_vc_sel_0_3),
    .io_req_1_0_bits_tail(switch_allocator_io_req_1_0_bits_tail),
    .io_req_0_0_ready(switch_allocator_io_req_0_0_ready),
    .io_req_0_0_valid(switch_allocator_io_req_0_0_valid),
    .io_req_0_0_bits_vc_sel_2_0(switch_allocator_io_req_0_0_bits_vc_sel_2_0),
    .io_req_0_0_bits_vc_sel_1_0(switch_allocator_io_req_0_0_bits_vc_sel_1_0),
    .io_req_0_0_bits_vc_sel_1_1(switch_allocator_io_req_0_0_bits_vc_sel_1_1),
    .io_req_0_0_bits_vc_sel_1_2(switch_allocator_io_req_0_0_bits_vc_sel_1_2),
    .io_req_0_0_bits_vc_sel_1_3(switch_allocator_io_req_0_0_bits_vc_sel_1_3),
    .io_req_0_0_bits_vc_sel_0_0(switch_allocator_io_req_0_0_bits_vc_sel_0_0),
    .io_req_0_0_bits_vc_sel_0_1(switch_allocator_io_req_0_0_bits_vc_sel_0_1),
    .io_req_0_0_bits_vc_sel_0_2(switch_allocator_io_req_0_0_bits_vc_sel_0_2),
    .io_req_0_0_bits_vc_sel_0_3(switch_allocator_io_req_0_0_bits_vc_sel_0_3),
    .io_req_0_0_bits_tail(switch_allocator_io_req_0_0_bits_tail),
    .io_credit_alloc_2_0_alloc(switch_allocator_io_credit_alloc_2_0_alloc),
    .io_credit_alloc_2_0_tail(switch_allocator_io_credit_alloc_2_0_tail),
    .io_credit_alloc_1_0_alloc(switch_allocator_io_credit_alloc_1_0_alloc),
    .io_credit_alloc_1_1_alloc(switch_allocator_io_credit_alloc_1_1_alloc),
    .io_credit_alloc_1_2_alloc(switch_allocator_io_credit_alloc_1_2_alloc),
    .io_credit_alloc_1_3_alloc(switch_allocator_io_credit_alloc_1_3_alloc),
    .io_credit_alloc_0_0_alloc(switch_allocator_io_credit_alloc_0_0_alloc),
    .io_credit_alloc_0_1_alloc(switch_allocator_io_credit_alloc_0_1_alloc),
    .io_credit_alloc_0_2_alloc(switch_allocator_io_credit_alloc_0_2_alloc),
    .io_credit_alloc_0_3_alloc(switch_allocator_io_credit_alloc_0_3_alloc),
    .io_switch_sel_2_0_2_0(switch_allocator_io_switch_sel_2_0_2_0),
    .io_switch_sel_2_0_1_0(switch_allocator_io_switch_sel_2_0_1_0),
    .io_switch_sel_2_0_0_0(switch_allocator_io_switch_sel_2_0_0_0),
    .io_switch_sel_1_0_2_0(switch_allocator_io_switch_sel_1_0_2_0),
    .io_switch_sel_1_0_1_0(switch_allocator_io_switch_sel_1_0_1_0),
    .io_switch_sel_1_0_0_0(switch_allocator_io_switch_sel_1_0_0_0),
    .io_switch_sel_0_0_2_0(switch_allocator_io_switch_sel_0_0_2_0),
    .io_switch_sel_0_0_1_0(switch_allocator_io_switch_sel_0_0_1_0),
    .io_switch_sel_0_0_0_0(switch_allocator_io_switch_sel_0_0_0_0)
  );
  RotatingSingleVCAllocator vc_allocator ( // @[Router.scala 131:30]
    .clock(vc_allocator_clock),
    .reset(vc_allocator_reset),
    .io_req_2_ready(vc_allocator_io_req_2_ready),
    .io_req_2_valid(vc_allocator_io_req_2_valid),
    .io_req_2_bits_vc_sel_2_0(vc_allocator_io_req_2_bits_vc_sel_2_0),
    .io_req_2_bits_vc_sel_1_0(vc_allocator_io_req_2_bits_vc_sel_1_0),
    .io_req_2_bits_vc_sel_1_1(vc_allocator_io_req_2_bits_vc_sel_1_1),
    .io_req_2_bits_vc_sel_1_2(vc_allocator_io_req_2_bits_vc_sel_1_2),
    .io_req_2_bits_vc_sel_1_3(vc_allocator_io_req_2_bits_vc_sel_1_3),
    .io_req_2_bits_vc_sel_0_0(vc_allocator_io_req_2_bits_vc_sel_0_0),
    .io_req_2_bits_vc_sel_0_1(vc_allocator_io_req_2_bits_vc_sel_0_1),
    .io_req_2_bits_vc_sel_0_2(vc_allocator_io_req_2_bits_vc_sel_0_2),
    .io_req_2_bits_vc_sel_0_3(vc_allocator_io_req_2_bits_vc_sel_0_3),
    .io_req_1_ready(vc_allocator_io_req_1_ready),
    .io_req_1_valid(vc_allocator_io_req_1_valid),
    .io_req_1_bits_vc_sel_2_0(vc_allocator_io_req_1_bits_vc_sel_2_0),
    .io_req_1_bits_vc_sel_1_0(vc_allocator_io_req_1_bits_vc_sel_1_0),
    .io_req_1_bits_vc_sel_1_1(vc_allocator_io_req_1_bits_vc_sel_1_1),
    .io_req_1_bits_vc_sel_1_2(vc_allocator_io_req_1_bits_vc_sel_1_2),
    .io_req_1_bits_vc_sel_1_3(vc_allocator_io_req_1_bits_vc_sel_1_3),
    .io_req_1_bits_vc_sel_0_0(vc_allocator_io_req_1_bits_vc_sel_0_0),
    .io_req_1_bits_vc_sel_0_1(vc_allocator_io_req_1_bits_vc_sel_0_1),
    .io_req_1_bits_vc_sel_0_2(vc_allocator_io_req_1_bits_vc_sel_0_2),
    .io_req_1_bits_vc_sel_0_3(vc_allocator_io_req_1_bits_vc_sel_0_3),
    .io_req_0_ready(vc_allocator_io_req_0_ready),
    .io_req_0_valid(vc_allocator_io_req_0_valid),
    .io_req_0_bits_vc_sel_2_0(vc_allocator_io_req_0_bits_vc_sel_2_0),
    .io_req_0_bits_vc_sel_1_0(vc_allocator_io_req_0_bits_vc_sel_1_0),
    .io_req_0_bits_vc_sel_1_1(vc_allocator_io_req_0_bits_vc_sel_1_1),
    .io_req_0_bits_vc_sel_1_2(vc_allocator_io_req_0_bits_vc_sel_1_2),
    .io_req_0_bits_vc_sel_1_3(vc_allocator_io_req_0_bits_vc_sel_1_3),
    .io_req_0_bits_vc_sel_0_0(vc_allocator_io_req_0_bits_vc_sel_0_0),
    .io_req_0_bits_vc_sel_0_1(vc_allocator_io_req_0_bits_vc_sel_0_1),
    .io_req_0_bits_vc_sel_0_2(vc_allocator_io_req_0_bits_vc_sel_0_2),
    .io_req_0_bits_vc_sel_0_3(vc_allocator_io_req_0_bits_vc_sel_0_3),
    .io_resp_2_vc_sel_2_0(vc_allocator_io_resp_2_vc_sel_2_0),
    .io_resp_2_vc_sel_1_0(vc_allocator_io_resp_2_vc_sel_1_0),
    .io_resp_2_vc_sel_1_1(vc_allocator_io_resp_2_vc_sel_1_1),
    .io_resp_2_vc_sel_1_2(vc_allocator_io_resp_2_vc_sel_1_2),
    .io_resp_2_vc_sel_1_3(vc_allocator_io_resp_2_vc_sel_1_3),
    .io_resp_2_vc_sel_0_0(vc_allocator_io_resp_2_vc_sel_0_0),
    .io_resp_2_vc_sel_0_1(vc_allocator_io_resp_2_vc_sel_0_1),
    .io_resp_2_vc_sel_0_2(vc_allocator_io_resp_2_vc_sel_0_2),
    .io_resp_2_vc_sel_0_3(vc_allocator_io_resp_2_vc_sel_0_3),
    .io_resp_1_vc_sel_2_0(vc_allocator_io_resp_1_vc_sel_2_0),
    .io_resp_1_vc_sel_1_0(vc_allocator_io_resp_1_vc_sel_1_0),
    .io_resp_1_vc_sel_1_1(vc_allocator_io_resp_1_vc_sel_1_1),
    .io_resp_1_vc_sel_1_2(vc_allocator_io_resp_1_vc_sel_1_2),
    .io_resp_1_vc_sel_1_3(vc_allocator_io_resp_1_vc_sel_1_3),
    .io_resp_1_vc_sel_0_0(vc_allocator_io_resp_1_vc_sel_0_0),
    .io_resp_1_vc_sel_0_1(vc_allocator_io_resp_1_vc_sel_0_1),
    .io_resp_1_vc_sel_0_2(vc_allocator_io_resp_1_vc_sel_0_2),
    .io_resp_1_vc_sel_0_3(vc_allocator_io_resp_1_vc_sel_0_3),
    .io_resp_0_vc_sel_2_0(vc_allocator_io_resp_0_vc_sel_2_0),
    .io_resp_0_vc_sel_1_0(vc_allocator_io_resp_0_vc_sel_1_0),
    .io_resp_0_vc_sel_1_1(vc_allocator_io_resp_0_vc_sel_1_1),
    .io_resp_0_vc_sel_1_2(vc_allocator_io_resp_0_vc_sel_1_2),
    .io_resp_0_vc_sel_1_3(vc_allocator_io_resp_0_vc_sel_1_3),
    .io_resp_0_vc_sel_0_0(vc_allocator_io_resp_0_vc_sel_0_0),
    .io_resp_0_vc_sel_0_1(vc_allocator_io_resp_0_vc_sel_0_1),
    .io_resp_0_vc_sel_0_2(vc_allocator_io_resp_0_vc_sel_0_2),
    .io_resp_0_vc_sel_0_3(vc_allocator_io_resp_0_vc_sel_0_3),
    .io_channel_status_2_0_occupied(vc_allocator_io_channel_status_2_0_occupied),
    .io_channel_status_1_0_occupied(vc_allocator_io_channel_status_1_0_occupied),
    .io_channel_status_1_1_occupied(vc_allocator_io_channel_status_1_1_occupied),
    .io_channel_status_1_2_occupied(vc_allocator_io_channel_status_1_2_occupied),
    .io_channel_status_1_3_occupied(vc_allocator_io_channel_status_1_3_occupied),
    .io_channel_status_0_0_occupied(vc_allocator_io_channel_status_0_0_occupied),
    .io_channel_status_0_1_occupied(vc_allocator_io_channel_status_0_1_occupied),
    .io_channel_status_0_2_occupied(vc_allocator_io_channel_status_0_2_occupied),
    .io_channel_status_0_3_occupied(vc_allocator_io_channel_status_0_3_occupied),
    .io_out_allocs_2_0_alloc(vc_allocator_io_out_allocs_2_0_alloc),
    .io_out_allocs_1_0_alloc(vc_allocator_io_out_allocs_1_0_alloc),
    .io_out_allocs_1_1_alloc(vc_allocator_io_out_allocs_1_1_alloc),
    .io_out_allocs_1_2_alloc(vc_allocator_io_out_allocs_1_2_alloc),
    .io_out_allocs_1_3_alloc(vc_allocator_io_out_allocs_1_3_alloc),
    .io_out_allocs_0_0_alloc(vc_allocator_io_out_allocs_0_0_alloc),
    .io_out_allocs_0_1_alloc(vc_allocator_io_out_allocs_0_1_alloc),
    .io_out_allocs_0_2_alloc(vc_allocator_io_out_allocs_0_2_alloc),
    .io_out_allocs_0_3_alloc(vc_allocator_io_out_allocs_0_3_alloc)
  );
  RouteComputer_3 route_computer ( // @[Router.scala 134:32]
    .io_req_2_bits_flow_ingress_node(route_computer_io_req_2_bits_flow_ingress_node),
    .io_req_2_bits_flow_egress_node(route_computer_io_req_2_bits_flow_egress_node),
    .io_req_1_bits_src_virt_id(route_computer_io_req_1_bits_src_virt_id),
    .io_req_1_bits_flow_ingress_node(route_computer_io_req_1_bits_flow_ingress_node),
    .io_req_1_bits_flow_egress_node(route_computer_io_req_1_bits_flow_egress_node),
    .io_req_0_bits_src_virt_id(route_computer_io_req_0_bits_src_virt_id),
    .io_req_0_bits_flow_ingress_node(route_computer_io_req_0_bits_flow_ingress_node),
    .io_req_0_bits_flow_egress_node(route_computer_io_req_0_bits_flow_egress_node),
    .io_resp_2_vc_sel_1_0(route_computer_io_resp_2_vc_sel_1_0),
    .io_resp_2_vc_sel_1_1(route_computer_io_resp_2_vc_sel_1_1),
    .io_resp_2_vc_sel_1_2(route_computer_io_resp_2_vc_sel_1_2),
    .io_resp_2_vc_sel_1_3(route_computer_io_resp_2_vc_sel_1_3),
    .io_resp_2_vc_sel_0_0(route_computer_io_resp_2_vc_sel_0_0),
    .io_resp_2_vc_sel_0_1(route_computer_io_resp_2_vc_sel_0_1),
    .io_resp_2_vc_sel_0_2(route_computer_io_resp_2_vc_sel_0_2),
    .io_resp_2_vc_sel_0_3(route_computer_io_resp_2_vc_sel_0_3),
    .io_resp_1_vc_sel_1_0(route_computer_io_resp_1_vc_sel_1_0),
    .io_resp_1_vc_sel_1_1(route_computer_io_resp_1_vc_sel_1_1),
    .io_resp_1_vc_sel_1_2(route_computer_io_resp_1_vc_sel_1_2),
    .io_resp_1_vc_sel_1_3(route_computer_io_resp_1_vc_sel_1_3),
    .io_resp_1_vc_sel_0_0(route_computer_io_resp_1_vc_sel_0_0),
    .io_resp_1_vc_sel_0_1(route_computer_io_resp_1_vc_sel_0_1),
    .io_resp_1_vc_sel_0_2(route_computer_io_resp_1_vc_sel_0_2),
    .io_resp_0_vc_sel_1_0(route_computer_io_resp_0_vc_sel_1_0),
    .io_resp_0_vc_sel_1_1(route_computer_io_resp_0_vc_sel_1_1),
    .io_resp_0_vc_sel_1_2(route_computer_io_resp_0_vc_sel_1_2),
    .io_resp_0_vc_sel_1_3(route_computer_io_resp_0_vc_sel_1_3),
    .io_resp_0_vc_sel_0_0(route_computer_io_resp_0_vc_sel_0_0),
    .io_resp_0_vc_sel_0_1(route_computer_io_resp_0_vc_sel_0_1),
    .io_resp_0_vc_sel_0_2(route_computer_io_resp_0_vc_sel_0_2)
  );
  plusarg_reader #(.FORMAT("noc_util_sample_rate=%d"), .DEFAULT(0), .WIDTH(20)) plusarg_reader ( // @[PlusArg.scala 80:11]
    .out(plusarg_reader_out)
  );
  assign auto_debug_out_va_stall_0 = input_unit_0_from_0_io_debug_va_stall; // @[Nodes.scala 1212:84 Router.scala 190:92]
  assign auto_debug_out_va_stall_1 = input_unit_1_from_2_io_debug_va_stall; // @[Nodes.scala 1212:84 Router.scala 190:92]
  assign auto_debug_out_sa_stall_0 = input_unit_0_from_0_io_debug_sa_stall; // @[Nodes.scala 1212:84 Router.scala 191:92]
  assign auto_debug_out_sa_stall_1 = input_unit_1_from_2_io_debug_sa_stall; // @[Nodes.scala 1212:84 Router.scala 191:92]
  assign auto_egress_nodes_out_flit_valid = egress_unit_2_to_3_io_out_valid; // @[Nodes.scala 1212:84 Router.scala 144:65]
  assign auto_egress_nodes_out_flit_bits_head = egress_unit_2_to_3_io_out_bits_head; // @[Nodes.scala 1212:84 Router.scala 144:65]
  assign auto_egress_nodes_out_flit_bits_tail = egress_unit_2_to_3_io_out_bits_tail; // @[Nodes.scala 1212:84 Router.scala 144:65]
  assign auto_egress_nodes_out_flit_bits_payload = egress_unit_2_to_3_io_out_bits_payload; // @[Nodes.scala 1212:84 Router.scala 144:65]
  assign auto_egress_nodes_out_flit_bits_ingress_id = egress_unit_2_to_3_io_out_bits_ingress_id; // @[Nodes.scala 1212:84 Router.scala 144:65]
  assign auto_ingress_nodes_in_flit_ready = ingress_unit_2_from_3_io_in_ready; // @[Nodes.scala 1215:84 Router.scala 142:68]
  assign auto_source_nodes_out_1_flit_0_valid = output_unit_1_to_2_io_out_flit_0_valid; // @[Nodes.scala 1212:84 Router.scala 143:60]
  assign auto_source_nodes_out_1_flit_0_bits_head = output_unit_1_to_2_io_out_flit_0_bits_head; // @[Nodes.scala 1212:84 Router.scala 143:60]
  assign auto_source_nodes_out_1_flit_0_bits_tail = output_unit_1_to_2_io_out_flit_0_bits_tail; // @[Nodes.scala 1212:84 Router.scala 143:60]
  assign auto_source_nodes_out_1_flit_0_bits_payload = output_unit_1_to_2_io_out_flit_0_bits_payload; // @[Nodes.scala 1212:84 Router.scala 143:60]
  assign auto_source_nodes_out_1_flit_0_bits_flow_ingress_node = output_unit_1_to_2_io_out_flit_0_bits_flow_ingress_node
    ; // @[Nodes.scala 1212:84 Router.scala 143:60]
  assign auto_source_nodes_out_1_flit_0_bits_flow_egress_node = output_unit_1_to_2_io_out_flit_0_bits_flow_egress_node; // @[Nodes.scala 1212:84 Router.scala 143:60]
  assign auto_source_nodes_out_1_flit_0_bits_virt_channel_id = output_unit_1_to_2_io_out_flit_0_bits_virt_channel_id; // @[Nodes.scala 1212:84 Router.scala 143:60]
  assign auto_source_nodes_out_0_flit_0_valid = output_unit_0_to_0_io_out_flit_0_valid; // @[Nodes.scala 1212:84 Router.scala 143:60]
  assign auto_source_nodes_out_0_flit_0_bits_head = output_unit_0_to_0_io_out_flit_0_bits_head; // @[Nodes.scala 1212:84 Router.scala 143:60]
  assign auto_source_nodes_out_0_flit_0_bits_tail = output_unit_0_to_0_io_out_flit_0_bits_tail; // @[Nodes.scala 1212:84 Router.scala 143:60]
  assign auto_source_nodes_out_0_flit_0_bits_payload = output_unit_0_to_0_io_out_flit_0_bits_payload; // @[Nodes.scala 1212:84 Router.scala 143:60]
  assign auto_source_nodes_out_0_flit_0_bits_flow_ingress_node = output_unit_0_to_0_io_out_flit_0_bits_flow_ingress_node
    ; // @[Nodes.scala 1212:84 Router.scala 143:60]
  assign auto_source_nodes_out_0_flit_0_bits_flow_egress_node = output_unit_0_to_0_io_out_flit_0_bits_flow_egress_node; // @[Nodes.scala 1212:84 Router.scala 143:60]
  assign auto_source_nodes_out_0_flit_0_bits_virt_channel_id = output_unit_0_to_0_io_out_flit_0_bits_virt_channel_id; // @[Nodes.scala 1212:84 Router.scala 143:60]
  assign auto_dest_nodes_in_1_credit_return = input_unit_1_from_2_io_in_credit_return; // @[Nodes.scala 1215:84 Router.scala 141:68]
  assign auto_dest_nodes_in_1_vc_free = input_unit_1_from_2_io_in_vc_free; // @[Nodes.scala 1215:84 Router.scala 141:68]
  assign auto_dest_nodes_in_0_credit_return = input_unit_0_from_0_io_in_credit_return; // @[Nodes.scala 1215:84 Router.scala 141:68]
  assign auto_dest_nodes_in_0_vc_free = input_unit_0_from_0_io_in_vc_free; // @[Nodes.scala 1215:84 Router.scala 141:68]
  assign monitor_clock = clock;
  assign monitor_reset = reset;
  assign monitor_io_in_flit_0_valid = auto_dest_nodes_in_0_flit_0_valid; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign monitor_io_in_flit_0_bits_head = auto_dest_nodes_in_0_flit_0_bits_head; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign monitor_io_in_flit_0_bits_tail = auto_dest_nodes_in_0_flit_0_bits_tail; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign monitor_io_in_flit_0_bits_flow_ingress_node = auto_dest_nodes_in_0_flit_0_bits_flow_ingress_node; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign monitor_io_in_flit_0_bits_flow_egress_node = auto_dest_nodes_in_0_flit_0_bits_flow_egress_node; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign monitor_io_in_flit_0_bits_virt_channel_id = auto_dest_nodes_in_0_flit_0_bits_virt_channel_id; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign monitor_1_clock = clock;
  assign monitor_1_reset = reset;
  assign monitor_1_io_in_flit_0_valid = auto_dest_nodes_in_1_flit_0_valid; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign monitor_1_io_in_flit_0_bits_head = auto_dest_nodes_in_1_flit_0_bits_head; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign monitor_1_io_in_flit_0_bits_tail = auto_dest_nodes_in_1_flit_0_bits_tail; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign monitor_1_io_in_flit_0_bits_flow_ingress_node = auto_dest_nodes_in_1_flit_0_bits_flow_ingress_node; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign monitor_1_io_in_flit_0_bits_flow_egress_node = auto_dest_nodes_in_1_flit_0_bits_flow_egress_node; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign monitor_1_io_in_flit_0_bits_virt_channel_id = auto_dest_nodes_in_1_flit_0_bits_virt_channel_id; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign input_unit_0_from_0_clock = clock;
  assign input_unit_0_from_0_reset = reset;
  assign input_unit_0_from_0_io_router_resp_vc_sel_1_0 = route_computer_io_resp_0_vc_sel_1_0; // @[Router.scala 148:38]
  assign input_unit_0_from_0_io_router_resp_vc_sel_1_1 = route_computer_io_resp_0_vc_sel_1_1; // @[Router.scala 148:38]
  assign input_unit_0_from_0_io_router_resp_vc_sel_1_2 = route_computer_io_resp_0_vc_sel_1_2; // @[Router.scala 148:38]
  assign input_unit_0_from_0_io_router_resp_vc_sel_1_3 = route_computer_io_resp_0_vc_sel_1_3; // @[Router.scala 148:38]
  assign input_unit_0_from_0_io_router_resp_vc_sel_0_0 = route_computer_io_resp_0_vc_sel_0_0; // @[Router.scala 148:38]
  assign input_unit_0_from_0_io_router_resp_vc_sel_0_1 = route_computer_io_resp_0_vc_sel_0_1; // @[Router.scala 148:38]
  assign input_unit_0_from_0_io_router_resp_vc_sel_0_2 = route_computer_io_resp_0_vc_sel_0_2; // @[Router.scala 148:38]
  assign input_unit_0_from_0_io_vcalloc_req_ready = vc_allocator_io_req_0_ready; // @[Router.scala 151:23]
  assign input_unit_0_from_0_io_vcalloc_resp_vc_sel_2_0 = vc_allocator_io_resp_0_vc_sel_2_0; // @[Router.scala 153:39]
  assign input_unit_0_from_0_io_vcalloc_resp_vc_sel_1_0 = vc_allocator_io_resp_0_vc_sel_1_0; // @[Router.scala 153:39]
  assign input_unit_0_from_0_io_vcalloc_resp_vc_sel_1_1 = vc_allocator_io_resp_0_vc_sel_1_1; // @[Router.scala 153:39]
  assign input_unit_0_from_0_io_vcalloc_resp_vc_sel_1_2 = vc_allocator_io_resp_0_vc_sel_1_2; // @[Router.scala 153:39]
  assign input_unit_0_from_0_io_vcalloc_resp_vc_sel_1_3 = vc_allocator_io_resp_0_vc_sel_1_3; // @[Router.scala 153:39]
  assign input_unit_0_from_0_io_vcalloc_resp_vc_sel_0_0 = vc_allocator_io_resp_0_vc_sel_0_0; // @[Router.scala 153:39]
  assign input_unit_0_from_0_io_vcalloc_resp_vc_sel_0_1 = vc_allocator_io_resp_0_vc_sel_0_1; // @[Router.scala 153:39]
  assign input_unit_0_from_0_io_vcalloc_resp_vc_sel_0_2 = vc_allocator_io_resp_0_vc_sel_0_2; // @[Router.scala 153:39]
  assign input_unit_0_from_0_io_out_credit_available_2_0 = egress_unit_2_to_3_io_credit_available_0; // @[Router.scala 162:42]
  assign input_unit_0_from_0_io_out_credit_available_1_0 = output_unit_1_to_2_io_credit_available_0; // @[Router.scala 162:42]
  assign input_unit_0_from_0_io_out_credit_available_1_1 = output_unit_1_to_2_io_credit_available_1; // @[Router.scala 162:42]
  assign input_unit_0_from_0_io_out_credit_available_1_2 = output_unit_1_to_2_io_credit_available_2; // @[Router.scala 162:42]
  assign input_unit_0_from_0_io_out_credit_available_1_3 = output_unit_1_to_2_io_credit_available_3; // @[Router.scala 162:42]
  assign input_unit_0_from_0_io_out_credit_available_0_0 = output_unit_0_to_0_io_credit_available_0; // @[Router.scala 162:42]
  assign input_unit_0_from_0_io_out_credit_available_0_1 = output_unit_0_to_0_io_credit_available_1; // @[Router.scala 162:42]
  assign input_unit_0_from_0_io_out_credit_available_0_2 = output_unit_0_to_0_io_credit_available_2; // @[Router.scala 162:42]
  assign input_unit_0_from_0_io_out_credit_available_0_3 = output_unit_0_to_0_io_credit_available_3; // @[Router.scala 162:42]
  assign input_unit_0_from_0_io_salloc_req_0_ready = switch_allocator_io_req_0_0_ready; // @[Router.scala 165:23]
  assign input_unit_0_from_0_io_in_flit_0_valid = auto_dest_nodes_in_0_flit_0_valid; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign input_unit_0_from_0_io_in_flit_0_bits_head = auto_dest_nodes_in_0_flit_0_bits_head; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign input_unit_0_from_0_io_in_flit_0_bits_tail = auto_dest_nodes_in_0_flit_0_bits_tail; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign input_unit_0_from_0_io_in_flit_0_bits_payload = auto_dest_nodes_in_0_flit_0_bits_payload; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign input_unit_0_from_0_io_in_flit_0_bits_flow_ingress_node = auto_dest_nodes_in_0_flit_0_bits_flow_ingress_node; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign input_unit_0_from_0_io_in_flit_0_bits_flow_egress_node = auto_dest_nodes_in_0_flit_0_bits_flow_egress_node; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign input_unit_0_from_0_io_in_flit_0_bits_virt_channel_id = auto_dest_nodes_in_0_flit_0_bits_virt_channel_id; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign input_unit_1_from_2_clock = clock;
  assign input_unit_1_from_2_reset = reset;
  assign input_unit_1_from_2_io_router_resp_vc_sel_1_0 = route_computer_io_resp_1_vc_sel_1_0; // @[Router.scala 148:38]
  assign input_unit_1_from_2_io_router_resp_vc_sel_1_1 = route_computer_io_resp_1_vc_sel_1_1; // @[Router.scala 148:38]
  assign input_unit_1_from_2_io_router_resp_vc_sel_1_2 = route_computer_io_resp_1_vc_sel_1_2; // @[Router.scala 148:38]
  assign input_unit_1_from_2_io_router_resp_vc_sel_1_3 = route_computer_io_resp_1_vc_sel_1_3; // @[Router.scala 148:38]
  assign input_unit_1_from_2_io_router_resp_vc_sel_0_0 = route_computer_io_resp_1_vc_sel_0_0; // @[Router.scala 148:38]
  assign input_unit_1_from_2_io_router_resp_vc_sel_0_1 = route_computer_io_resp_1_vc_sel_0_1; // @[Router.scala 148:38]
  assign input_unit_1_from_2_io_router_resp_vc_sel_0_2 = route_computer_io_resp_1_vc_sel_0_2; // @[Router.scala 148:38]
  assign input_unit_1_from_2_io_vcalloc_req_ready = vc_allocator_io_req_1_ready; // @[Router.scala 151:23]
  assign input_unit_1_from_2_io_vcalloc_resp_vc_sel_2_0 = vc_allocator_io_resp_1_vc_sel_2_0; // @[Router.scala 153:39]
  assign input_unit_1_from_2_io_vcalloc_resp_vc_sel_1_0 = vc_allocator_io_resp_1_vc_sel_1_0; // @[Router.scala 153:39]
  assign input_unit_1_from_2_io_vcalloc_resp_vc_sel_1_1 = vc_allocator_io_resp_1_vc_sel_1_1; // @[Router.scala 153:39]
  assign input_unit_1_from_2_io_vcalloc_resp_vc_sel_1_2 = vc_allocator_io_resp_1_vc_sel_1_2; // @[Router.scala 153:39]
  assign input_unit_1_from_2_io_vcalloc_resp_vc_sel_1_3 = vc_allocator_io_resp_1_vc_sel_1_3; // @[Router.scala 153:39]
  assign input_unit_1_from_2_io_vcalloc_resp_vc_sel_0_0 = vc_allocator_io_resp_1_vc_sel_0_0; // @[Router.scala 153:39]
  assign input_unit_1_from_2_io_vcalloc_resp_vc_sel_0_1 = vc_allocator_io_resp_1_vc_sel_0_1; // @[Router.scala 153:39]
  assign input_unit_1_from_2_io_vcalloc_resp_vc_sel_0_2 = vc_allocator_io_resp_1_vc_sel_0_2; // @[Router.scala 153:39]
  assign input_unit_1_from_2_io_out_credit_available_2_0 = egress_unit_2_to_3_io_credit_available_0; // @[Router.scala 162:42]
  assign input_unit_1_from_2_io_out_credit_available_1_0 = output_unit_1_to_2_io_credit_available_0; // @[Router.scala 162:42]
  assign input_unit_1_from_2_io_out_credit_available_1_1 = output_unit_1_to_2_io_credit_available_1; // @[Router.scala 162:42]
  assign input_unit_1_from_2_io_out_credit_available_1_2 = output_unit_1_to_2_io_credit_available_2; // @[Router.scala 162:42]
  assign input_unit_1_from_2_io_out_credit_available_1_3 = output_unit_1_to_2_io_credit_available_3; // @[Router.scala 162:42]
  assign input_unit_1_from_2_io_out_credit_available_0_0 = output_unit_0_to_0_io_credit_available_0; // @[Router.scala 162:42]
  assign input_unit_1_from_2_io_out_credit_available_0_1 = output_unit_0_to_0_io_credit_available_1; // @[Router.scala 162:42]
  assign input_unit_1_from_2_io_out_credit_available_0_2 = output_unit_0_to_0_io_credit_available_2; // @[Router.scala 162:42]
  assign input_unit_1_from_2_io_out_credit_available_0_3 = output_unit_0_to_0_io_credit_available_3; // @[Router.scala 162:42]
  assign input_unit_1_from_2_io_salloc_req_0_ready = switch_allocator_io_req_1_0_ready; // @[Router.scala 165:23]
  assign input_unit_1_from_2_io_in_flit_0_valid = auto_dest_nodes_in_1_flit_0_valid; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign input_unit_1_from_2_io_in_flit_0_bits_head = auto_dest_nodes_in_1_flit_0_bits_head; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign input_unit_1_from_2_io_in_flit_0_bits_tail = auto_dest_nodes_in_1_flit_0_bits_tail; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign input_unit_1_from_2_io_in_flit_0_bits_payload = auto_dest_nodes_in_1_flit_0_bits_payload; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign input_unit_1_from_2_io_in_flit_0_bits_flow_ingress_node = auto_dest_nodes_in_1_flit_0_bits_flow_ingress_node; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign input_unit_1_from_2_io_in_flit_0_bits_flow_egress_node = auto_dest_nodes_in_1_flit_0_bits_flow_egress_node; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign input_unit_1_from_2_io_in_flit_0_bits_virt_channel_id = auto_dest_nodes_in_1_flit_0_bits_virt_channel_id; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign ingress_unit_2_from_3_clock = clock;
  assign ingress_unit_2_from_3_reset = reset;
  assign ingress_unit_2_from_3_io_router_resp_vc_sel_1_0 = route_computer_io_resp_2_vc_sel_1_0; // @[Router.scala 148:38]
  assign ingress_unit_2_from_3_io_router_resp_vc_sel_1_1 = route_computer_io_resp_2_vc_sel_1_1; // @[Router.scala 148:38]
  assign ingress_unit_2_from_3_io_router_resp_vc_sel_1_2 = route_computer_io_resp_2_vc_sel_1_2; // @[Router.scala 148:38]
  assign ingress_unit_2_from_3_io_router_resp_vc_sel_1_3 = route_computer_io_resp_2_vc_sel_1_3; // @[Router.scala 148:38]
  assign ingress_unit_2_from_3_io_router_resp_vc_sel_0_0 = route_computer_io_resp_2_vc_sel_0_0; // @[Router.scala 148:38]
  assign ingress_unit_2_from_3_io_router_resp_vc_sel_0_1 = route_computer_io_resp_2_vc_sel_0_1; // @[Router.scala 148:38]
  assign ingress_unit_2_from_3_io_router_resp_vc_sel_0_2 = route_computer_io_resp_2_vc_sel_0_2; // @[Router.scala 148:38]
  assign ingress_unit_2_from_3_io_router_resp_vc_sel_0_3 = route_computer_io_resp_2_vc_sel_0_3; // @[Router.scala 148:38]
  assign ingress_unit_2_from_3_io_vcalloc_req_ready = vc_allocator_io_req_2_ready; // @[Router.scala 151:23]
  assign ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_2_0 = vc_allocator_io_resp_2_vc_sel_2_0; // @[Router.scala 153:39]
  assign ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_1_0 = vc_allocator_io_resp_2_vc_sel_1_0; // @[Router.scala 153:39]
  assign ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_1_1 = vc_allocator_io_resp_2_vc_sel_1_1; // @[Router.scala 153:39]
  assign ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_1_2 = vc_allocator_io_resp_2_vc_sel_1_2; // @[Router.scala 153:39]
  assign ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_1_3 = vc_allocator_io_resp_2_vc_sel_1_3; // @[Router.scala 153:39]
  assign ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_0_0 = vc_allocator_io_resp_2_vc_sel_0_0; // @[Router.scala 153:39]
  assign ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_0_1 = vc_allocator_io_resp_2_vc_sel_0_1; // @[Router.scala 153:39]
  assign ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_0_2 = vc_allocator_io_resp_2_vc_sel_0_2; // @[Router.scala 153:39]
  assign ingress_unit_2_from_3_io_vcalloc_resp_vc_sel_0_3 = vc_allocator_io_resp_2_vc_sel_0_3; // @[Router.scala 153:39]
  assign ingress_unit_2_from_3_io_out_credit_available_2_0 = egress_unit_2_to_3_io_credit_available_0; // @[Router.scala 162:42]
  assign ingress_unit_2_from_3_io_out_credit_available_1_0 = output_unit_1_to_2_io_credit_available_0; // @[Router.scala 162:42]
  assign ingress_unit_2_from_3_io_out_credit_available_1_1 = output_unit_1_to_2_io_credit_available_1; // @[Router.scala 162:42]
  assign ingress_unit_2_from_3_io_out_credit_available_1_2 = output_unit_1_to_2_io_credit_available_2; // @[Router.scala 162:42]
  assign ingress_unit_2_from_3_io_out_credit_available_1_3 = output_unit_1_to_2_io_credit_available_3; // @[Router.scala 162:42]
  assign ingress_unit_2_from_3_io_out_credit_available_0_0 = output_unit_0_to_0_io_credit_available_0; // @[Router.scala 162:42]
  assign ingress_unit_2_from_3_io_out_credit_available_0_1 = output_unit_0_to_0_io_credit_available_1; // @[Router.scala 162:42]
  assign ingress_unit_2_from_3_io_out_credit_available_0_2 = output_unit_0_to_0_io_credit_available_2; // @[Router.scala 162:42]
  assign ingress_unit_2_from_3_io_out_credit_available_0_3 = output_unit_0_to_0_io_credit_available_3; // @[Router.scala 162:42]
  assign ingress_unit_2_from_3_io_salloc_req_0_ready = switch_allocator_io_req_2_0_ready; // @[Router.scala 165:23]
  assign ingress_unit_2_from_3_io_in_valid = auto_ingress_nodes_in_flit_valid; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign ingress_unit_2_from_3_io_in_bits_head = auto_ingress_nodes_in_flit_bits_head; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign ingress_unit_2_from_3_io_in_bits_tail = auto_ingress_nodes_in_flit_bits_tail; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign ingress_unit_2_from_3_io_in_bits_payload = auto_ingress_nodes_in_flit_bits_payload; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign ingress_unit_2_from_3_io_in_bits_egress_id = auto_ingress_nodes_in_flit_bits_egress_id; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign output_unit_0_to_0_clock = clock;
  assign output_unit_0_to_0_reset = reset;
  assign output_unit_0_to_0_io_in_0_valid = switch_io_out_0_0_valid; // @[Router.scala 172:29]
  assign output_unit_0_to_0_io_in_0_bits_head = switch_io_out_0_0_bits_head; // @[Router.scala 172:29]
  assign output_unit_0_to_0_io_in_0_bits_tail = switch_io_out_0_0_bits_tail; // @[Router.scala 172:29]
  assign output_unit_0_to_0_io_in_0_bits_payload = switch_io_out_0_0_bits_payload; // @[Router.scala 172:29]
  assign output_unit_0_to_0_io_in_0_bits_flow_ingress_node = switch_io_out_0_0_bits_flow_ingress_node; // @[Router.scala 172:29]
  assign output_unit_0_to_0_io_in_0_bits_flow_egress_node = switch_io_out_0_0_bits_flow_egress_node; // @[Router.scala 172:29]
  assign output_unit_0_to_0_io_in_0_bits_virt_channel_id = switch_io_out_0_0_bits_virt_channel_id; // @[Router.scala 172:29]
  assign output_unit_0_to_0_io_allocs_0_alloc = vc_allocator_io_out_allocs_0_0_alloc; // @[Router.scala 157:33]
  assign output_unit_0_to_0_io_allocs_1_alloc = vc_allocator_io_out_allocs_0_1_alloc; // @[Router.scala 157:33]
  assign output_unit_0_to_0_io_allocs_2_alloc = vc_allocator_io_out_allocs_0_2_alloc; // @[Router.scala 157:33]
  assign output_unit_0_to_0_io_allocs_3_alloc = vc_allocator_io_out_allocs_0_3_alloc; // @[Router.scala 157:33]
  assign output_unit_0_to_0_io_credit_alloc_0_alloc = switch_allocator_io_credit_alloc_0_0_alloc; // @[Router.scala 167:39]
  assign output_unit_0_to_0_io_credit_alloc_1_alloc = switch_allocator_io_credit_alloc_0_1_alloc; // @[Router.scala 167:39]
  assign output_unit_0_to_0_io_credit_alloc_2_alloc = switch_allocator_io_credit_alloc_0_2_alloc; // @[Router.scala 167:39]
  assign output_unit_0_to_0_io_credit_alloc_3_alloc = switch_allocator_io_credit_alloc_0_3_alloc; // @[Router.scala 167:39]
  assign output_unit_0_to_0_io_out_credit_return = auto_source_nodes_out_0_credit_return; // @[Nodes.scala 1212:84 LazyModule.scala 368:12]
  assign output_unit_0_to_0_io_out_vc_free = auto_source_nodes_out_0_vc_free; // @[Nodes.scala 1212:84 LazyModule.scala 368:12]
  assign output_unit_1_to_2_clock = clock;
  assign output_unit_1_to_2_reset = reset;
  assign output_unit_1_to_2_io_in_0_valid = switch_io_out_1_0_valid; // @[Router.scala 172:29]
  assign output_unit_1_to_2_io_in_0_bits_head = switch_io_out_1_0_bits_head; // @[Router.scala 172:29]
  assign output_unit_1_to_2_io_in_0_bits_tail = switch_io_out_1_0_bits_tail; // @[Router.scala 172:29]
  assign output_unit_1_to_2_io_in_0_bits_payload = switch_io_out_1_0_bits_payload; // @[Router.scala 172:29]
  assign output_unit_1_to_2_io_in_0_bits_flow_ingress_node = switch_io_out_1_0_bits_flow_ingress_node; // @[Router.scala 172:29]
  assign output_unit_1_to_2_io_in_0_bits_flow_egress_node = switch_io_out_1_0_bits_flow_egress_node; // @[Router.scala 172:29]
  assign output_unit_1_to_2_io_in_0_bits_virt_channel_id = switch_io_out_1_0_bits_virt_channel_id; // @[Router.scala 172:29]
  assign output_unit_1_to_2_io_allocs_0_alloc = vc_allocator_io_out_allocs_1_0_alloc; // @[Router.scala 157:33]
  assign output_unit_1_to_2_io_allocs_1_alloc = vc_allocator_io_out_allocs_1_1_alloc; // @[Router.scala 157:33]
  assign output_unit_1_to_2_io_allocs_2_alloc = vc_allocator_io_out_allocs_1_2_alloc; // @[Router.scala 157:33]
  assign output_unit_1_to_2_io_allocs_3_alloc = vc_allocator_io_out_allocs_1_3_alloc; // @[Router.scala 157:33]
  assign output_unit_1_to_2_io_credit_alloc_0_alloc = switch_allocator_io_credit_alloc_1_0_alloc; // @[Router.scala 167:39]
  assign output_unit_1_to_2_io_credit_alloc_1_alloc = switch_allocator_io_credit_alloc_1_1_alloc; // @[Router.scala 167:39]
  assign output_unit_1_to_2_io_credit_alloc_2_alloc = switch_allocator_io_credit_alloc_1_2_alloc; // @[Router.scala 167:39]
  assign output_unit_1_to_2_io_credit_alloc_3_alloc = switch_allocator_io_credit_alloc_1_3_alloc; // @[Router.scala 167:39]
  assign output_unit_1_to_2_io_out_credit_return = auto_source_nodes_out_1_credit_return; // @[Nodes.scala 1212:84 LazyModule.scala 368:12]
  assign output_unit_1_to_2_io_out_vc_free = auto_source_nodes_out_1_vc_free; // @[Nodes.scala 1212:84 LazyModule.scala 368:12]
  assign egress_unit_2_to_3_clock = clock;
  assign egress_unit_2_to_3_reset = reset;
  assign egress_unit_2_to_3_io_in_0_valid = switch_io_out_2_0_valid; // @[Router.scala 172:29]
  assign egress_unit_2_to_3_io_in_0_bits_head = switch_io_out_2_0_bits_head; // @[Router.scala 172:29]
  assign egress_unit_2_to_3_io_in_0_bits_tail = switch_io_out_2_0_bits_tail; // @[Router.scala 172:29]
  assign egress_unit_2_to_3_io_in_0_bits_payload = switch_io_out_2_0_bits_payload; // @[Router.scala 172:29]
  assign egress_unit_2_to_3_io_in_0_bits_flow_ingress_node = switch_io_out_2_0_bits_flow_ingress_node; // @[Router.scala 172:29]
  assign egress_unit_2_to_3_io_allocs_0_alloc = vc_allocator_io_out_allocs_2_0_alloc; // @[Router.scala 157:33]
  assign egress_unit_2_to_3_io_credit_alloc_0_alloc = switch_allocator_io_credit_alloc_2_0_alloc; // @[Router.scala 167:39]
  assign egress_unit_2_to_3_io_credit_alloc_0_tail = switch_allocator_io_credit_alloc_2_0_tail; // @[Router.scala 167:39]
  assign switch_clock = clock;
  assign switch_reset = reset;
  assign switch_io_in_2_0_valid = ingress_unit_2_from_3_io_out_0_valid; // @[Router.scala 170:23]
  assign switch_io_in_2_0_bits_flit_head = ingress_unit_2_from_3_io_out_0_bits_flit_head; // @[Router.scala 170:23]
  assign switch_io_in_2_0_bits_flit_tail = ingress_unit_2_from_3_io_out_0_bits_flit_tail; // @[Router.scala 170:23]
  assign switch_io_in_2_0_bits_flit_payload = ingress_unit_2_from_3_io_out_0_bits_flit_payload; // @[Router.scala 170:23]
  assign switch_io_in_2_0_bits_flit_flow_ingress_node = ingress_unit_2_from_3_io_out_0_bits_flit_flow_ingress_node; // @[Router.scala 170:23]
  assign switch_io_in_2_0_bits_flit_flow_egress_node = ingress_unit_2_from_3_io_out_0_bits_flit_flow_egress_node; // @[Router.scala 170:23]
  assign switch_io_in_2_0_bits_out_virt_channel = ingress_unit_2_from_3_io_out_0_bits_out_virt_channel; // @[Router.scala 170:23]
  assign switch_io_in_1_0_valid = input_unit_1_from_2_io_out_0_valid; // @[Router.scala 170:23]
  assign switch_io_in_1_0_bits_flit_head = input_unit_1_from_2_io_out_0_bits_flit_head; // @[Router.scala 170:23]
  assign switch_io_in_1_0_bits_flit_tail = input_unit_1_from_2_io_out_0_bits_flit_tail; // @[Router.scala 170:23]
  assign switch_io_in_1_0_bits_flit_payload = input_unit_1_from_2_io_out_0_bits_flit_payload; // @[Router.scala 170:23]
  assign switch_io_in_1_0_bits_flit_flow_ingress_node = input_unit_1_from_2_io_out_0_bits_flit_flow_ingress_node; // @[Router.scala 170:23]
  assign switch_io_in_1_0_bits_flit_flow_egress_node = input_unit_1_from_2_io_out_0_bits_flit_flow_egress_node; // @[Router.scala 170:23]
  assign switch_io_in_1_0_bits_out_virt_channel = input_unit_1_from_2_io_out_0_bits_out_virt_channel; // @[Router.scala 170:23]
  assign switch_io_in_0_0_valid = input_unit_0_from_0_io_out_0_valid; // @[Router.scala 170:23]
  assign switch_io_in_0_0_bits_flit_head = input_unit_0_from_0_io_out_0_bits_flit_head; // @[Router.scala 170:23]
  assign switch_io_in_0_0_bits_flit_tail = input_unit_0_from_0_io_out_0_bits_flit_tail; // @[Router.scala 170:23]
  assign switch_io_in_0_0_bits_flit_payload = input_unit_0_from_0_io_out_0_bits_flit_payload; // @[Router.scala 170:23]
  assign switch_io_in_0_0_bits_flit_flow_ingress_node = input_unit_0_from_0_io_out_0_bits_flit_flow_ingress_node; // @[Router.scala 170:23]
  assign switch_io_in_0_0_bits_flit_flow_egress_node = input_unit_0_from_0_io_out_0_bits_flit_flow_egress_node; // @[Router.scala 170:23]
  assign switch_io_in_0_0_bits_out_virt_channel = input_unit_0_from_0_io_out_0_bits_out_virt_channel; // @[Router.scala 170:23]
  assign switch_io_sel_2_0_2_0 = switch_io_sel_REG_2_0_2_0; // @[Router.scala 173:19]
  assign switch_io_sel_2_0_1_0 = switch_io_sel_REG_2_0_1_0; // @[Router.scala 173:19]
  assign switch_io_sel_2_0_0_0 = switch_io_sel_REG_2_0_0_0; // @[Router.scala 173:19]
  assign switch_io_sel_1_0_2_0 = switch_io_sel_REG_1_0_2_0; // @[Router.scala 173:19]
  assign switch_io_sel_1_0_1_0 = switch_io_sel_REG_1_0_1_0; // @[Router.scala 173:19]
  assign switch_io_sel_1_0_0_0 = switch_io_sel_REG_1_0_0_0; // @[Router.scala 173:19]
  assign switch_io_sel_0_0_2_0 = switch_io_sel_REG_0_0_2_0; // @[Router.scala 173:19]
  assign switch_io_sel_0_0_1_0 = switch_io_sel_REG_0_0_1_0; // @[Router.scala 173:19]
  assign switch_io_sel_0_0_0_0 = switch_io_sel_REG_0_0_0_0; // @[Router.scala 173:19]
  assign switch_allocator_clock = clock;
  assign switch_allocator_reset = reset;
  assign switch_allocator_io_req_2_0_valid = ingress_unit_2_from_3_io_salloc_req_0_valid; // @[Router.scala 165:23]
  assign switch_allocator_io_req_2_0_bits_vc_sel_2_0 = ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_2_0; // @[Router.scala 165:23]
  assign switch_allocator_io_req_2_0_bits_vc_sel_1_0 = ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_1_0; // @[Router.scala 165:23]
  assign switch_allocator_io_req_2_0_bits_vc_sel_1_1 = ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_1_1; // @[Router.scala 165:23]
  assign switch_allocator_io_req_2_0_bits_vc_sel_1_2 = ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_1_2; // @[Router.scala 165:23]
  assign switch_allocator_io_req_2_0_bits_vc_sel_1_3 = ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_1_3; // @[Router.scala 165:23]
  assign switch_allocator_io_req_2_0_bits_vc_sel_0_0 = ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_0_0; // @[Router.scala 165:23]
  assign switch_allocator_io_req_2_0_bits_vc_sel_0_1 = ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_0_1; // @[Router.scala 165:23]
  assign switch_allocator_io_req_2_0_bits_vc_sel_0_2 = ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_0_2; // @[Router.scala 165:23]
  assign switch_allocator_io_req_2_0_bits_vc_sel_0_3 = ingress_unit_2_from_3_io_salloc_req_0_bits_vc_sel_0_3; // @[Router.scala 165:23]
  assign switch_allocator_io_req_2_0_bits_tail = ingress_unit_2_from_3_io_salloc_req_0_bits_tail; // @[Router.scala 165:23]
  assign switch_allocator_io_req_1_0_valid = input_unit_1_from_2_io_salloc_req_0_valid; // @[Router.scala 165:23]
  assign switch_allocator_io_req_1_0_bits_vc_sel_2_0 = input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_2_0; // @[Router.scala 165:23]
  assign switch_allocator_io_req_1_0_bits_vc_sel_1_0 = input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_1_0; // @[Router.scala 165:23]
  assign switch_allocator_io_req_1_0_bits_vc_sel_1_1 = input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_1_1; // @[Router.scala 165:23]
  assign switch_allocator_io_req_1_0_bits_vc_sel_1_2 = input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_1_2; // @[Router.scala 165:23]
  assign switch_allocator_io_req_1_0_bits_vc_sel_1_3 = input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_1_3; // @[Router.scala 165:23]
  assign switch_allocator_io_req_1_0_bits_vc_sel_0_0 = input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_0_0; // @[Router.scala 165:23]
  assign switch_allocator_io_req_1_0_bits_vc_sel_0_1 = input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_0_1; // @[Router.scala 165:23]
  assign switch_allocator_io_req_1_0_bits_vc_sel_0_2 = input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_0_2; // @[Router.scala 165:23]
  assign switch_allocator_io_req_1_0_bits_vc_sel_0_3 = input_unit_1_from_2_io_salloc_req_0_bits_vc_sel_0_3; // @[Router.scala 165:23]
  assign switch_allocator_io_req_1_0_bits_tail = input_unit_1_from_2_io_salloc_req_0_bits_tail; // @[Router.scala 165:23]
  assign switch_allocator_io_req_0_0_valid = input_unit_0_from_0_io_salloc_req_0_valid; // @[Router.scala 165:23]
  assign switch_allocator_io_req_0_0_bits_vc_sel_2_0 = input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_2_0; // @[Router.scala 165:23]
  assign switch_allocator_io_req_0_0_bits_vc_sel_1_0 = input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_1_0; // @[Router.scala 165:23]
  assign switch_allocator_io_req_0_0_bits_vc_sel_1_1 = input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_1_1; // @[Router.scala 165:23]
  assign switch_allocator_io_req_0_0_bits_vc_sel_1_2 = input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_1_2; // @[Router.scala 165:23]
  assign switch_allocator_io_req_0_0_bits_vc_sel_1_3 = input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_1_3; // @[Router.scala 165:23]
  assign switch_allocator_io_req_0_0_bits_vc_sel_0_0 = input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_0_0; // @[Router.scala 165:23]
  assign switch_allocator_io_req_0_0_bits_vc_sel_0_1 = input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_0_1; // @[Router.scala 165:23]
  assign switch_allocator_io_req_0_0_bits_vc_sel_0_2 = input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_0_2; // @[Router.scala 165:23]
  assign switch_allocator_io_req_0_0_bits_vc_sel_0_3 = input_unit_0_from_0_io_salloc_req_0_bits_vc_sel_0_3; // @[Router.scala 165:23]
  assign switch_allocator_io_req_0_0_bits_tail = input_unit_0_from_0_io_salloc_req_0_bits_tail; // @[Router.scala 165:23]
  assign vc_allocator_clock = clock;
  assign vc_allocator_reset = reset;
  assign vc_allocator_io_req_2_valid = ingress_unit_2_from_3_io_vcalloc_req_valid; // @[Router.scala 151:23]
  assign vc_allocator_io_req_2_bits_vc_sel_2_0 = ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_2_0; // @[Router.scala 151:23]
  assign vc_allocator_io_req_2_bits_vc_sel_1_0 = ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_1_0; // @[Router.scala 151:23]
  assign vc_allocator_io_req_2_bits_vc_sel_1_1 = ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_1_1; // @[Router.scala 151:23]
  assign vc_allocator_io_req_2_bits_vc_sel_1_2 = ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_1_2; // @[Router.scala 151:23]
  assign vc_allocator_io_req_2_bits_vc_sel_1_3 = ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_1_3; // @[Router.scala 151:23]
  assign vc_allocator_io_req_2_bits_vc_sel_0_0 = ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_0_0; // @[Router.scala 151:23]
  assign vc_allocator_io_req_2_bits_vc_sel_0_1 = ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_0_1; // @[Router.scala 151:23]
  assign vc_allocator_io_req_2_bits_vc_sel_0_2 = ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_0_2; // @[Router.scala 151:23]
  assign vc_allocator_io_req_2_bits_vc_sel_0_3 = ingress_unit_2_from_3_io_vcalloc_req_bits_vc_sel_0_3; // @[Router.scala 151:23]
  assign vc_allocator_io_req_1_valid = input_unit_1_from_2_io_vcalloc_req_valid; // @[Router.scala 151:23]
  assign vc_allocator_io_req_1_bits_vc_sel_2_0 = input_unit_1_from_2_io_vcalloc_req_bits_vc_sel_2_0; // @[Router.scala 151:23]
  assign vc_allocator_io_req_1_bits_vc_sel_1_0 = input_unit_1_from_2_io_vcalloc_req_bits_vc_sel_1_0; // @[Router.scala 151:23]
  assign vc_allocator_io_req_1_bits_vc_sel_1_1 = input_unit_1_from_2_io_vcalloc_req_bits_vc_sel_1_1; // @[Router.scala 151:23]
  assign vc_allocator_io_req_1_bits_vc_sel_1_2 = input_unit_1_from_2_io_vcalloc_req_bits_vc_sel_1_2; // @[Router.scala 151:23]
  assign vc_allocator_io_req_1_bits_vc_sel_1_3 = input_unit_1_from_2_io_vcalloc_req_bits_vc_sel_1_3; // @[Router.scala 151:23]
  assign vc_allocator_io_req_1_bits_vc_sel_0_0 = input_unit_1_from_2_io_vcalloc_req_bits_vc_sel_0_0; // @[Router.scala 151:23]
  assign vc_allocator_io_req_1_bits_vc_sel_0_1 = input_unit_1_from_2_io_vcalloc_req_bits_vc_sel_0_1; // @[Router.scala 151:23]
  assign vc_allocator_io_req_1_bits_vc_sel_0_2 = input_unit_1_from_2_io_vcalloc_req_bits_vc_sel_0_2; // @[Router.scala 151:23]
  assign vc_allocator_io_req_1_bits_vc_sel_0_3 = 1'h0; // @[Router.scala 151:23]
  assign vc_allocator_io_req_0_valid = input_unit_0_from_0_io_vcalloc_req_valid; // @[Router.scala 151:23]
  assign vc_allocator_io_req_0_bits_vc_sel_2_0 = input_unit_0_from_0_io_vcalloc_req_bits_vc_sel_2_0; // @[Router.scala 151:23]
  assign vc_allocator_io_req_0_bits_vc_sel_1_0 = input_unit_0_from_0_io_vcalloc_req_bits_vc_sel_1_0; // @[Router.scala 151:23]
  assign vc_allocator_io_req_0_bits_vc_sel_1_1 = input_unit_0_from_0_io_vcalloc_req_bits_vc_sel_1_1; // @[Router.scala 151:23]
  assign vc_allocator_io_req_0_bits_vc_sel_1_2 = input_unit_0_from_0_io_vcalloc_req_bits_vc_sel_1_2; // @[Router.scala 151:23]
  assign vc_allocator_io_req_0_bits_vc_sel_1_3 = input_unit_0_from_0_io_vcalloc_req_bits_vc_sel_1_3; // @[Router.scala 151:23]
  assign vc_allocator_io_req_0_bits_vc_sel_0_0 = input_unit_0_from_0_io_vcalloc_req_bits_vc_sel_0_0; // @[Router.scala 151:23]
  assign vc_allocator_io_req_0_bits_vc_sel_0_1 = input_unit_0_from_0_io_vcalloc_req_bits_vc_sel_0_1; // @[Router.scala 151:23]
  assign vc_allocator_io_req_0_bits_vc_sel_0_2 = input_unit_0_from_0_io_vcalloc_req_bits_vc_sel_0_2; // @[Router.scala 151:23]
  assign vc_allocator_io_req_0_bits_vc_sel_0_3 = 1'h0; // @[Router.scala 151:23]
  assign vc_allocator_io_channel_status_2_0_occupied = egress_unit_2_to_3_io_channel_status_0_occupied; // @[Router.scala 159:23]
  assign vc_allocator_io_channel_status_1_0_occupied = output_unit_1_to_2_io_channel_status_0_occupied; // @[Router.scala 159:23]
  assign vc_allocator_io_channel_status_1_1_occupied = output_unit_1_to_2_io_channel_status_1_occupied; // @[Router.scala 159:23]
  assign vc_allocator_io_channel_status_1_2_occupied = output_unit_1_to_2_io_channel_status_2_occupied; // @[Router.scala 159:23]
  assign vc_allocator_io_channel_status_1_3_occupied = output_unit_1_to_2_io_channel_status_3_occupied; // @[Router.scala 159:23]
  assign vc_allocator_io_channel_status_0_0_occupied = output_unit_0_to_0_io_channel_status_0_occupied; // @[Router.scala 159:23]
  assign vc_allocator_io_channel_status_0_1_occupied = output_unit_0_to_0_io_channel_status_1_occupied; // @[Router.scala 159:23]
  assign vc_allocator_io_channel_status_0_2_occupied = output_unit_0_to_0_io_channel_status_2_occupied; // @[Router.scala 159:23]
  assign vc_allocator_io_channel_status_0_3_occupied = output_unit_0_to_0_io_channel_status_3_occupied; // @[Router.scala 159:23]
  assign route_computer_io_req_2_bits_flow_ingress_node = ingress_unit_2_from_3_io_router_req_bits_flow_ingress_node; // @[Router.scala 146:23]
  assign route_computer_io_req_2_bits_flow_egress_node = ingress_unit_2_from_3_io_router_req_bits_flow_egress_node; // @[Router.scala 146:23]
  assign route_computer_io_req_1_bits_src_virt_id = input_unit_1_from_2_io_router_req_bits_src_virt_id; // @[Router.scala 146:23]
  assign route_computer_io_req_1_bits_flow_ingress_node = input_unit_1_from_2_io_router_req_bits_flow_ingress_node; // @[Router.scala 146:23]
  assign route_computer_io_req_1_bits_flow_egress_node = input_unit_1_from_2_io_router_req_bits_flow_egress_node; // @[Router.scala 146:23]
  assign route_computer_io_req_0_bits_src_virt_id = input_unit_0_from_0_io_router_req_bits_src_virt_id; // @[Router.scala 146:23]
  assign route_computer_io_req_0_bits_flow_ingress_node = input_unit_0_from_0_io_router_req_bits_flow_ingress_node; // @[Router.scala 146:23]
  assign route_computer_io_req_0_bits_flow_egress_node = input_unit_0_from_0_io_router_req_bits_flow_egress_node; // @[Router.scala 146:23]
  always @(posedge clock) begin
    switch_io_sel_REG_2_0_2_0 <= switch_allocator_io_switch_sel_2_0_2_0; // @[Router.scala 176:14]
    switch_io_sel_REG_2_0_1_0 <= switch_allocator_io_switch_sel_2_0_1_0; // @[Router.scala 176:14]
    switch_io_sel_REG_2_0_0_0 <= switch_allocator_io_switch_sel_2_0_0_0; // @[Router.scala 176:14]
    switch_io_sel_REG_1_0_2_0 <= switch_allocator_io_switch_sel_1_0_2_0; // @[Router.scala 176:14]
    switch_io_sel_REG_1_0_1_0 <= switch_allocator_io_switch_sel_1_0_1_0; // @[Router.scala 176:14]
    switch_io_sel_REG_1_0_0_0 <= switch_allocator_io_switch_sel_1_0_0_0; // @[Router.scala 176:14]
    switch_io_sel_REG_0_0_2_0 <= switch_allocator_io_switch_sel_0_0_2_0; // @[Router.scala 176:14]
    switch_io_sel_REG_0_0_1_0 <= switch_allocator_io_switch_sel_0_0_1_0; // @[Router.scala 176:14]
    switch_io_sel_REG_0_0_0_0 <= switch_allocator_io_switch_sel_0_0_0_0; // @[Router.scala 176:14]
    if (reset) begin // @[Router.scala 193:28]
      debug_tsc <= 64'h0; // @[Router.scala 193:28]
    end else begin
      debug_tsc <= _debug_tsc_T_1; // @[Router.scala 194:15]
    end
    if (reset) begin // @[Router.scala 195:31]
      debug_sample <= 64'h0; // @[Router.scala 195:31]
    end else if (debug_sample == _GEN_6) begin // @[Router.scala 198:47]
      debug_sample <= 64'h0; // @[Router.scala 198:62]
    end else begin
      debug_sample <= _debug_sample_T_1; // @[Router.scala 196:18]
    end
    if (reset) begin // @[Router.scala 201:29]
      util_ctr <= 64'h0; // @[Router.scala 201:29]
    end else begin
      util_ctr <= _util_ctr_T_1; // @[Router.scala 203:16]
    end
    if (reset) begin // @[Router.scala 202:26]
      fired <= 1'h0; // @[Router.scala 202:26]
    end else if (plusarg_reader_out != 20'h0 & _T_2 & fired) begin // @[Router.scala 205:81]
      fired <= auto_dest_nodes_in_0_flit_0_valid; // @[Router.scala 208:15]
    end else begin
      fired <= fired | auto_dest_nodes_in_0_flit_0_valid; // @[Router.scala 204:13]
    end
    if (reset) begin // @[Router.scala 201:29]
      util_ctr_1 <= 64'h0; // @[Router.scala 201:29]
    end else begin
      util_ctr_1 <= _util_ctr_T_3; // @[Router.scala 203:16]
    end
    if (reset) begin // @[Router.scala 202:26]
      fired_1 <= 1'h0; // @[Router.scala 202:26]
    end else if (plusarg_reader_out != 20'h0 & _T_2 & fired_1) begin // @[Router.scala 205:81]
      fired_1 <= auto_dest_nodes_in_1_flit_0_valid; // @[Router.scala 208:15]
    end else begin
      fired_1 <= fired_1 | auto_dest_nodes_in_1_flit_0_valid; // @[Router.scala 204:13]
    end
    if (reset) begin // @[Router.scala 201:29]
      util_ctr_2 <= 64'h0; // @[Router.scala 201:29]
    end else begin
      util_ctr_2 <= _util_ctr_T_5; // @[Router.scala 203:16]
    end
    if (reset) begin // @[Router.scala 202:26]
      fired_2 <= 1'h0; // @[Router.scala 202:26]
    end else if (plusarg_reader_out != 20'h0 & _T_2 & fired_2) begin // @[Router.scala 205:81]
      fired_2 <= _T_19; // @[Router.scala 208:15]
    end else begin
      fired_2 <= fired_2 | _T_19; // @[Router.scala 204:13]
    end
    if (reset) begin // @[Router.scala 201:29]
      util_ctr_3 <= 64'h0; // @[Router.scala 201:29]
    end else begin
      util_ctr_3 <= _util_ctr_T_7; // @[Router.scala 203:16]
    end
    if (reset) begin // @[Router.scala 202:26]
      fired_3 <= 1'h0; // @[Router.scala 202:26]
    end else if (plusarg_reader_out != 20'h0 & _T_2 & fired_3) begin // @[Router.scala 205:81]
      fired_3 <= x1_2_flit_valid; // @[Router.scala 208:15]
    end else begin
      fired_3 <= fired_3 | x1_2_flit_valid; // @[Router.scala 204:13]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_8 & ~reset) begin
          $fwrite(32'h80000002,"nocsample %d 0 3 %d\n",debug_tsc,util_ctr); // @[Router.scala 207:15]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_16 & ~reset) begin
          $fwrite(32'h80000002,"nocsample %d 2 3 %d\n",debug_tsc,util_ctr_1); // @[Router.scala 207:15]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_25 & ~reset) begin
          $fwrite(32'h80000002,"nocsample %d i3 3 %d\n",debug_tsc,util_ctr_2); // @[Router.scala 207:15]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_34 & ~reset) begin
          $fwrite(32'h80000002,"nocsample %d 3 e3 %d\n",debug_tsc,util_ctr_3); // @[Router.scala 207:15]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  switch_io_sel_REG_2_0_2_0 = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  switch_io_sel_REG_2_0_1_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  switch_io_sel_REG_2_0_0_0 = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  switch_io_sel_REG_1_0_2_0 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  switch_io_sel_REG_1_0_1_0 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  switch_io_sel_REG_1_0_0_0 = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  switch_io_sel_REG_0_0_2_0 = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  switch_io_sel_REG_0_0_1_0 = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  switch_io_sel_REG_0_0_0_0 = _RAND_8[0:0];
  _RAND_9 = {2{`RANDOM}};
  debug_tsc = _RAND_9[63:0];
  _RAND_10 = {2{`RANDOM}};
  debug_sample = _RAND_10[63:0];
  _RAND_11 = {2{`RANDOM}};
  util_ctr = _RAND_11[63:0];
  _RAND_12 = {1{`RANDOM}};
  fired = _RAND_12[0:0];
  _RAND_13 = {2{`RANDOM}};
  util_ctr_1 = _RAND_13[63:0];
  _RAND_14 = {1{`RANDOM}};
  fired_1 = _RAND_14[0:0];
  _RAND_15 = {2{`RANDOM}};
  util_ctr_2 = _RAND_15[63:0];
  _RAND_16 = {1{`RANDOM}};
  fired_2 = _RAND_16[0:0];
  _RAND_17 = {2{`RANDOM}};
  util_ctr_3 = _RAND_17[63:0];
  _RAND_18 = {1{`RANDOM}};
  fired_3 = _RAND_18[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule