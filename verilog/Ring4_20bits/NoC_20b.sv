module NoC_20b(
  input         clock,
  input         reset,
  output        io_ingress_3_flit_ready,
  input         io_ingress_3_flit_valid,
  input         io_ingress_3_flit_bits_head,
  input         io_ingress_3_flit_bits_tail,
  input  [19:0] io_ingress_3_flit_bits_payload,
  input  [1:0]  io_ingress_3_flit_bits_egress_id,
  output        io_ingress_2_flit_ready,
  input         io_ingress_2_flit_valid,
  input         io_ingress_2_flit_bits_head,
  input         io_ingress_2_flit_bits_tail,
  input  [19:0] io_ingress_2_flit_bits_payload,
  input  [1:0]  io_ingress_2_flit_bits_egress_id,
  output        io_ingress_1_flit_ready,
  input         io_ingress_1_flit_valid,
  input         io_ingress_1_flit_bits_head,
  input         io_ingress_1_flit_bits_tail,
  input  [19:0] io_ingress_1_flit_bits_payload,
  input  [1:0]  io_ingress_1_flit_bits_egress_id,
  output        io_ingress_0_flit_ready,
  input         io_ingress_0_flit_valid,
  input         io_ingress_0_flit_bits_head,
  input         io_ingress_0_flit_bits_tail,
  input  [19:0] io_ingress_0_flit_bits_payload,
  input  [1:0]  io_ingress_0_flit_bits_egress_id,
  output        io_egress_3_flit_valid,
  output        io_egress_3_flit_bits_head,
  output        io_egress_3_flit_bits_tail,
  output [19:0] io_egress_3_flit_bits_payload,
  output [1:0]  io_egress_3_flit_bits_ingress_id,
  output        io_egress_2_flit_valid,
  output        io_egress_2_flit_bits_head,
  output        io_egress_2_flit_bits_tail,
  output [19:0] io_egress_2_flit_bits_payload,
  output [1:0]  io_egress_2_flit_bits_ingress_id,
  output        io_egress_1_flit_valid,
  output        io_egress_1_flit_bits_head,
  output        io_egress_1_flit_bits_tail,
  output [19:0] io_egress_1_flit_bits_payload,
  output [1:0]  io_egress_1_flit_bits_ingress_id,
  output        io_egress_0_flit_valid,
  output        io_egress_0_flit_bits_head,
  output        io_egress_0_flit_bits_tail,
  output [19:0] io_egress_0_flit_bits_payload,
  output [1:0]  io_egress_0_flit_bits_ingress_id,
  input         io_router_clocks_0_clock,
  input         io_router_clocks_0_reset,
  input         io_router_clocks_1_clock,
  input         io_router_clocks_1_reset,
  input         io_router_clocks_2_clock,
  input         io_router_clocks_2_reset,
  input         io_router_clocks_3_clock,
  input         io_router_clocks_3_reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire [1:0] router_sink_domain_auto_routers_debug_out_va_stall_0; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_auto_routers_debug_out_va_stall_1; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_auto_routers_debug_out_sa_stall_0; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_auto_routers_debug_out_sa_stall_1; // @[NoC.scala 38:40]
  wire  router_sink_domain_auto_routers_egress_nodes_out_flit_valid; // @[NoC.scala 38:40]
  wire  router_sink_domain_auto_routers_egress_nodes_out_flit_bits_head; // @[NoC.scala 38:40]
  wire  router_sink_domain_auto_routers_egress_nodes_out_flit_bits_tail; // @[NoC.scala 38:40]
  wire [19:0] router_sink_domain_auto_routers_egress_nodes_out_flit_bits_payload; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_auto_routers_egress_nodes_out_flit_bits_ingress_id; // @[NoC.scala 38:40]
  wire  router_sink_domain_auto_routers_ingress_nodes_in_flit_ready; // @[NoC.scala 38:40]
  wire  router_sink_domain_auto_routers_ingress_nodes_in_flit_valid; // @[NoC.scala 38:40]
  wire  router_sink_domain_auto_routers_ingress_nodes_in_flit_bits_head; // @[NoC.scala 38:40]
  wire  router_sink_domain_auto_routers_ingress_nodes_in_flit_bits_tail; // @[NoC.scala 38:40]
  wire [19:0] router_sink_domain_auto_routers_ingress_nodes_in_flit_bits_payload; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_auto_routers_ingress_nodes_in_flit_bits_egress_id; // @[NoC.scala 38:40]
  wire  router_sink_domain_auto_routers_source_nodes_out_1_flit_0_valid; // @[NoC.scala 38:40]
  wire  router_sink_domain_auto_routers_source_nodes_out_1_flit_0_bits_head; // @[NoC.scala 38:40]
  wire  router_sink_domain_auto_routers_source_nodes_out_1_flit_0_bits_tail; // @[NoC.scala 38:40]
  wire [19:0] router_sink_domain_auto_routers_source_nodes_out_1_flit_0_bits_payload; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_auto_routers_source_nodes_out_1_flit_0_bits_flow_ingress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_auto_routers_source_nodes_out_1_flit_0_bits_flow_egress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_auto_routers_source_nodes_out_1_flit_0_bits_virt_channel_id; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_auto_routers_source_nodes_out_1_credit_return; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_auto_routers_source_nodes_out_1_vc_free; // @[NoC.scala 38:40]
  wire  router_sink_domain_auto_routers_source_nodes_out_0_flit_0_valid; // @[NoC.scala 38:40]
  wire  router_sink_domain_auto_routers_source_nodes_out_0_flit_0_bits_head; // @[NoC.scala 38:40]
  wire  router_sink_domain_auto_routers_source_nodes_out_0_flit_0_bits_tail; // @[NoC.scala 38:40]
  wire [19:0] router_sink_domain_auto_routers_source_nodes_out_0_flit_0_bits_payload; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_auto_routers_source_nodes_out_0_flit_0_bits_flow_ingress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_auto_routers_source_nodes_out_0_flit_0_bits_flow_egress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_auto_routers_source_nodes_out_0_flit_0_bits_virt_channel_id; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_auto_routers_source_nodes_out_0_credit_return; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_auto_routers_source_nodes_out_0_vc_free; // @[NoC.scala 38:40]
  wire  router_sink_domain_auto_routers_dest_nodes_in_1_flit_0_valid; // @[NoC.scala 38:40]
  wire  router_sink_domain_auto_routers_dest_nodes_in_1_flit_0_bits_head; // @[NoC.scala 38:40]
  wire  router_sink_domain_auto_routers_dest_nodes_in_1_flit_0_bits_tail; // @[NoC.scala 38:40]
  wire [19:0] router_sink_domain_auto_routers_dest_nodes_in_1_flit_0_bits_payload; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_auto_routers_dest_nodes_in_1_flit_0_bits_flow_ingress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_auto_routers_dest_nodes_in_1_flit_0_bits_flow_egress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_auto_routers_dest_nodes_in_1_flit_0_bits_virt_channel_id; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_auto_routers_dest_nodes_in_1_credit_return; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_auto_routers_dest_nodes_in_1_vc_free; // @[NoC.scala 38:40]
  wire  router_sink_domain_auto_routers_dest_nodes_in_0_flit_0_valid; // @[NoC.scala 38:40]
  wire  router_sink_domain_auto_routers_dest_nodes_in_0_flit_0_bits_head; // @[NoC.scala 38:40]
  wire  router_sink_domain_auto_routers_dest_nodes_in_0_flit_0_bits_tail; // @[NoC.scala 38:40]
  wire [19:0] router_sink_domain_auto_routers_dest_nodes_in_0_flit_0_bits_payload; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_auto_routers_dest_nodes_in_0_flit_0_bits_flow_ingress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_auto_routers_dest_nodes_in_0_flit_0_bits_flow_egress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_auto_routers_dest_nodes_in_0_flit_0_bits_virt_channel_id; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_auto_routers_dest_nodes_in_0_credit_return; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_auto_routers_dest_nodes_in_0_vc_free; // @[NoC.scala 38:40]
  wire  router_sink_domain_auto_clock_in_clock; // @[NoC.scala 38:40]
  wire  router_sink_domain_auto_clock_in_reset; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_1_auto_routers_debug_out_va_stall_0; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_1_auto_routers_debug_out_va_stall_1; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_1_auto_routers_debug_out_sa_stall_0; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_1_auto_routers_debug_out_sa_stall_1; // @[NoC.scala 38:40]
  wire  router_sink_domain_1_auto_routers_egress_nodes_out_flit_valid; // @[NoC.scala 38:40]
  wire  router_sink_domain_1_auto_routers_egress_nodes_out_flit_bits_head; // @[NoC.scala 38:40]
  wire  router_sink_domain_1_auto_routers_egress_nodes_out_flit_bits_tail; // @[NoC.scala 38:40]
  wire [19:0] router_sink_domain_1_auto_routers_egress_nodes_out_flit_bits_payload; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_1_auto_routers_egress_nodes_out_flit_bits_ingress_id; // @[NoC.scala 38:40]
  wire  router_sink_domain_1_auto_routers_ingress_nodes_in_flit_ready; // @[NoC.scala 38:40]
  wire  router_sink_domain_1_auto_routers_ingress_nodes_in_flit_valid; // @[NoC.scala 38:40]
  wire  router_sink_domain_1_auto_routers_ingress_nodes_in_flit_bits_head; // @[NoC.scala 38:40]
  wire  router_sink_domain_1_auto_routers_ingress_nodes_in_flit_bits_tail; // @[NoC.scala 38:40]
  wire [19:0] router_sink_domain_1_auto_routers_ingress_nodes_in_flit_bits_payload; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_1_auto_routers_ingress_nodes_in_flit_bits_egress_id; // @[NoC.scala 38:40]
  wire  router_sink_domain_1_auto_routers_source_nodes_out_1_flit_0_valid; // @[NoC.scala 38:40]
  wire  router_sink_domain_1_auto_routers_source_nodes_out_1_flit_0_bits_head; // @[NoC.scala 38:40]
  wire  router_sink_domain_1_auto_routers_source_nodes_out_1_flit_0_bits_tail; // @[NoC.scala 38:40]
  wire [19:0] router_sink_domain_1_auto_routers_source_nodes_out_1_flit_0_bits_payload; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_1_auto_routers_source_nodes_out_1_flit_0_bits_flow_ingress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_1_auto_routers_source_nodes_out_1_flit_0_bits_flow_egress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_1_auto_routers_source_nodes_out_1_flit_0_bits_virt_channel_id; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_1_auto_routers_source_nodes_out_1_credit_return; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_1_auto_routers_source_nodes_out_1_vc_free; // @[NoC.scala 38:40]
  wire  router_sink_domain_1_auto_routers_source_nodes_out_0_flit_0_valid; // @[NoC.scala 38:40]
  wire  router_sink_domain_1_auto_routers_source_nodes_out_0_flit_0_bits_head; // @[NoC.scala 38:40]
  wire  router_sink_domain_1_auto_routers_source_nodes_out_0_flit_0_bits_tail; // @[NoC.scala 38:40]
  wire [19:0] router_sink_domain_1_auto_routers_source_nodes_out_0_flit_0_bits_payload; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_1_auto_routers_source_nodes_out_0_flit_0_bits_flow_ingress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_1_auto_routers_source_nodes_out_0_flit_0_bits_flow_egress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_1_auto_routers_source_nodes_out_0_flit_0_bits_virt_channel_id; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_1_auto_routers_source_nodes_out_0_credit_return; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_1_auto_routers_source_nodes_out_0_vc_free; // @[NoC.scala 38:40]
  wire  router_sink_domain_1_auto_routers_dest_nodes_in_1_flit_0_valid; // @[NoC.scala 38:40]
  wire  router_sink_domain_1_auto_routers_dest_nodes_in_1_flit_0_bits_head; // @[NoC.scala 38:40]
  wire  router_sink_domain_1_auto_routers_dest_nodes_in_1_flit_0_bits_tail; // @[NoC.scala 38:40]
  wire [19:0] router_sink_domain_1_auto_routers_dest_nodes_in_1_flit_0_bits_payload; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_1_auto_routers_dest_nodes_in_1_flit_0_bits_flow_ingress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_1_auto_routers_dest_nodes_in_1_flit_0_bits_flow_egress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_1_auto_routers_dest_nodes_in_1_flit_0_bits_virt_channel_id; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_1_auto_routers_dest_nodes_in_1_credit_return; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_1_auto_routers_dest_nodes_in_1_vc_free; // @[NoC.scala 38:40]
  wire  router_sink_domain_1_auto_routers_dest_nodes_in_0_flit_0_valid; // @[NoC.scala 38:40]
  wire  router_sink_domain_1_auto_routers_dest_nodes_in_0_flit_0_bits_head; // @[NoC.scala 38:40]
  wire  router_sink_domain_1_auto_routers_dest_nodes_in_0_flit_0_bits_tail; // @[NoC.scala 38:40]
  wire [19:0] router_sink_domain_1_auto_routers_dest_nodes_in_0_flit_0_bits_payload; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_1_auto_routers_dest_nodes_in_0_flit_0_bits_flow_ingress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_1_auto_routers_dest_nodes_in_0_flit_0_bits_flow_egress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_1_auto_routers_dest_nodes_in_0_flit_0_bits_virt_channel_id; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_1_auto_routers_dest_nodes_in_0_credit_return; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_1_auto_routers_dest_nodes_in_0_vc_free; // @[NoC.scala 38:40]
  wire  router_sink_domain_1_auto_clock_in_clock; // @[NoC.scala 38:40]
  wire  router_sink_domain_1_auto_clock_in_reset; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_2_auto_routers_debug_out_va_stall_0; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_2_auto_routers_debug_out_va_stall_1; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_2_auto_routers_debug_out_sa_stall_0; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_2_auto_routers_debug_out_sa_stall_1; // @[NoC.scala 38:40]
  wire  router_sink_domain_2_auto_routers_egress_nodes_out_flit_valid; // @[NoC.scala 38:40]
  wire  router_sink_domain_2_auto_routers_egress_nodes_out_flit_bits_head; // @[NoC.scala 38:40]
  wire  router_sink_domain_2_auto_routers_egress_nodes_out_flit_bits_tail; // @[NoC.scala 38:40]
  wire [19:0] router_sink_domain_2_auto_routers_egress_nodes_out_flit_bits_payload; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_2_auto_routers_egress_nodes_out_flit_bits_ingress_id; // @[NoC.scala 38:40]
  wire  router_sink_domain_2_auto_routers_ingress_nodes_in_flit_ready; // @[NoC.scala 38:40]
  wire  router_sink_domain_2_auto_routers_ingress_nodes_in_flit_valid; // @[NoC.scala 38:40]
  wire  router_sink_domain_2_auto_routers_ingress_nodes_in_flit_bits_head; // @[NoC.scala 38:40]
  wire  router_sink_domain_2_auto_routers_ingress_nodes_in_flit_bits_tail; // @[NoC.scala 38:40]
  wire [19:0] router_sink_domain_2_auto_routers_ingress_nodes_in_flit_bits_payload; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_2_auto_routers_ingress_nodes_in_flit_bits_egress_id; // @[NoC.scala 38:40]
  wire  router_sink_domain_2_auto_routers_source_nodes_out_1_flit_0_valid; // @[NoC.scala 38:40]
  wire  router_sink_domain_2_auto_routers_source_nodes_out_1_flit_0_bits_head; // @[NoC.scala 38:40]
  wire  router_sink_domain_2_auto_routers_source_nodes_out_1_flit_0_bits_tail; // @[NoC.scala 38:40]
  wire [19:0] router_sink_domain_2_auto_routers_source_nodes_out_1_flit_0_bits_payload; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_2_auto_routers_source_nodes_out_1_flit_0_bits_flow_ingress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_2_auto_routers_source_nodes_out_1_flit_0_bits_flow_egress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_2_auto_routers_source_nodes_out_1_flit_0_bits_virt_channel_id; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_2_auto_routers_source_nodes_out_1_credit_return; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_2_auto_routers_source_nodes_out_1_vc_free; // @[NoC.scala 38:40]
  wire  router_sink_domain_2_auto_routers_source_nodes_out_0_flit_0_valid; // @[NoC.scala 38:40]
  wire  router_sink_domain_2_auto_routers_source_nodes_out_0_flit_0_bits_head; // @[NoC.scala 38:40]
  wire  router_sink_domain_2_auto_routers_source_nodes_out_0_flit_0_bits_tail; // @[NoC.scala 38:40]
  wire [19:0] router_sink_domain_2_auto_routers_source_nodes_out_0_flit_0_bits_payload; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_2_auto_routers_source_nodes_out_0_flit_0_bits_flow_ingress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_2_auto_routers_source_nodes_out_0_flit_0_bits_flow_egress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_2_auto_routers_source_nodes_out_0_flit_0_bits_virt_channel_id; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_2_auto_routers_source_nodes_out_0_credit_return; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_2_auto_routers_source_nodes_out_0_vc_free; // @[NoC.scala 38:40]
  wire  router_sink_domain_2_auto_routers_dest_nodes_in_1_flit_0_valid; // @[NoC.scala 38:40]
  wire  router_sink_domain_2_auto_routers_dest_nodes_in_1_flit_0_bits_head; // @[NoC.scala 38:40]
  wire  router_sink_domain_2_auto_routers_dest_nodes_in_1_flit_0_bits_tail; // @[NoC.scala 38:40]
  wire [19:0] router_sink_domain_2_auto_routers_dest_nodes_in_1_flit_0_bits_payload; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_2_auto_routers_dest_nodes_in_1_flit_0_bits_flow_ingress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_2_auto_routers_dest_nodes_in_1_flit_0_bits_flow_egress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_2_auto_routers_dest_nodes_in_1_flit_0_bits_virt_channel_id; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_2_auto_routers_dest_nodes_in_1_credit_return; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_2_auto_routers_dest_nodes_in_1_vc_free; // @[NoC.scala 38:40]
  wire  router_sink_domain_2_auto_routers_dest_nodes_in_0_flit_0_valid; // @[NoC.scala 38:40]
  wire  router_sink_domain_2_auto_routers_dest_nodes_in_0_flit_0_bits_head; // @[NoC.scala 38:40]
  wire  router_sink_domain_2_auto_routers_dest_nodes_in_0_flit_0_bits_tail; // @[NoC.scala 38:40]
  wire [19:0] router_sink_domain_2_auto_routers_dest_nodes_in_0_flit_0_bits_payload; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_2_auto_routers_dest_nodes_in_0_flit_0_bits_flow_ingress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_2_auto_routers_dest_nodes_in_0_flit_0_bits_flow_egress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_2_auto_routers_dest_nodes_in_0_flit_0_bits_virt_channel_id; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_2_auto_routers_dest_nodes_in_0_credit_return; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_2_auto_routers_dest_nodes_in_0_vc_free; // @[NoC.scala 38:40]
  wire  router_sink_domain_2_auto_clock_in_clock; // @[NoC.scala 38:40]
  wire  router_sink_domain_2_auto_clock_in_reset; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_3_auto_routers_debug_out_va_stall_0; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_3_auto_routers_debug_out_va_stall_1; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_3_auto_routers_debug_out_sa_stall_0; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_3_auto_routers_debug_out_sa_stall_1; // @[NoC.scala 38:40]
  wire  router_sink_domain_3_auto_routers_egress_nodes_out_flit_valid; // @[NoC.scala 38:40]
  wire  router_sink_domain_3_auto_routers_egress_nodes_out_flit_bits_head; // @[NoC.scala 38:40]
  wire  router_sink_domain_3_auto_routers_egress_nodes_out_flit_bits_tail; // @[NoC.scala 38:40]
  wire [19:0] router_sink_domain_3_auto_routers_egress_nodes_out_flit_bits_payload; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_3_auto_routers_egress_nodes_out_flit_bits_ingress_id; // @[NoC.scala 38:40]
  wire  router_sink_domain_3_auto_routers_ingress_nodes_in_flit_ready; // @[NoC.scala 38:40]
  wire  router_sink_domain_3_auto_routers_ingress_nodes_in_flit_valid; // @[NoC.scala 38:40]
  wire  router_sink_domain_3_auto_routers_ingress_nodes_in_flit_bits_head; // @[NoC.scala 38:40]
  wire  router_sink_domain_3_auto_routers_ingress_nodes_in_flit_bits_tail; // @[NoC.scala 38:40]
  wire [19:0] router_sink_domain_3_auto_routers_ingress_nodes_in_flit_bits_payload; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_3_auto_routers_ingress_nodes_in_flit_bits_egress_id; // @[NoC.scala 38:40]
  wire  router_sink_domain_3_auto_routers_source_nodes_out_1_flit_0_valid; // @[NoC.scala 38:40]
  wire  router_sink_domain_3_auto_routers_source_nodes_out_1_flit_0_bits_head; // @[NoC.scala 38:40]
  wire  router_sink_domain_3_auto_routers_source_nodes_out_1_flit_0_bits_tail; // @[NoC.scala 38:40]
  wire [19:0] router_sink_domain_3_auto_routers_source_nodes_out_1_flit_0_bits_payload; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_3_auto_routers_source_nodes_out_1_flit_0_bits_flow_ingress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_3_auto_routers_source_nodes_out_1_flit_0_bits_flow_egress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_3_auto_routers_source_nodes_out_1_flit_0_bits_virt_channel_id; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_3_auto_routers_source_nodes_out_1_credit_return; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_3_auto_routers_source_nodes_out_1_vc_free; // @[NoC.scala 38:40]
  wire  router_sink_domain_3_auto_routers_source_nodes_out_0_flit_0_valid; // @[NoC.scala 38:40]
  wire  router_sink_domain_3_auto_routers_source_nodes_out_0_flit_0_bits_head; // @[NoC.scala 38:40]
  wire  router_sink_domain_3_auto_routers_source_nodes_out_0_flit_0_bits_tail; // @[NoC.scala 38:40]
  wire [19:0] router_sink_domain_3_auto_routers_source_nodes_out_0_flit_0_bits_payload; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_3_auto_routers_source_nodes_out_0_flit_0_bits_flow_ingress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_3_auto_routers_source_nodes_out_0_flit_0_bits_flow_egress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_3_auto_routers_source_nodes_out_0_flit_0_bits_virt_channel_id; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_3_auto_routers_source_nodes_out_0_credit_return; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_3_auto_routers_source_nodes_out_0_vc_free; // @[NoC.scala 38:40]
  wire  router_sink_domain_3_auto_routers_dest_nodes_in_1_flit_0_valid; // @[NoC.scala 38:40]
  wire  router_sink_domain_3_auto_routers_dest_nodes_in_1_flit_0_bits_head; // @[NoC.scala 38:40]
  wire  router_sink_domain_3_auto_routers_dest_nodes_in_1_flit_0_bits_tail; // @[NoC.scala 38:40]
  wire [19:0] router_sink_domain_3_auto_routers_dest_nodes_in_1_flit_0_bits_payload; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_3_auto_routers_dest_nodes_in_1_flit_0_bits_flow_ingress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_3_auto_routers_dest_nodes_in_1_flit_0_bits_flow_egress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_3_auto_routers_dest_nodes_in_1_flit_0_bits_virt_channel_id; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_3_auto_routers_dest_nodes_in_1_credit_return; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_3_auto_routers_dest_nodes_in_1_vc_free; // @[NoC.scala 38:40]
  wire  router_sink_domain_3_auto_routers_dest_nodes_in_0_flit_0_valid; // @[NoC.scala 38:40]
  wire  router_sink_domain_3_auto_routers_dest_nodes_in_0_flit_0_bits_head; // @[NoC.scala 38:40]
  wire  router_sink_domain_3_auto_routers_dest_nodes_in_0_flit_0_bits_tail; // @[NoC.scala 38:40]
  wire [19:0] router_sink_domain_3_auto_routers_dest_nodes_in_0_flit_0_bits_payload; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_3_auto_routers_dest_nodes_in_0_flit_0_bits_flow_ingress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_3_auto_routers_dest_nodes_in_0_flit_0_bits_flow_egress_node; // @[NoC.scala 38:40]
  wire [1:0] router_sink_domain_3_auto_routers_dest_nodes_in_0_flit_0_bits_virt_channel_id; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_3_auto_routers_dest_nodes_in_0_credit_return; // @[NoC.scala 38:40]
  wire [3:0] router_sink_domain_3_auto_routers_dest_nodes_in_0_vc_free; // @[NoC.scala 38:40]
  wire  router_sink_domain_3_auto_clock_in_clock; // @[NoC.scala 38:40]
  wire  router_sink_domain_3_auto_clock_in_reset; // @[NoC.scala 38:40]
  reg [63:0] debug_va_stall_ctr; // @[NoC.scala 160:37]
  reg [63:0] debug_sa_stall_ctr; // @[NoC.scala 161:37]
  wire [63:0] debug_any_stall_ctr = debug_va_stall_ctr + debug_sa_stall_ctr; // @[NoC.scala 162:50]
  wire [1:0] bundleIn_0_4_va_stall_0 = router_sink_domain_auto_routers_debug_out_va_stall_0; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  wire [1:0] bundleIn_0_4_va_stall_1 = router_sink_domain_auto_routers_debug_out_va_stall_1; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  wire [1:0] _debug_va_stall_ctr_T_1 = bundleIn_0_4_va_stall_0 + bundleIn_0_4_va_stall_1; // @[NoC.scala 163:91]
  wire [2:0] _debug_va_stall_ctr_T_2 = {{1'd0}, _debug_va_stall_ctr_T_1}; // @[NoC.scala 163:91]
  wire [1:0] bundleIn_0_5_va_stall_0 = router_sink_domain_1_auto_routers_debug_out_va_stall_0; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  wire [1:0] bundleIn_0_5_va_stall_1 = router_sink_domain_1_auto_routers_debug_out_va_stall_1; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  wire [1:0] _debug_va_stall_ctr_T_5 = bundleIn_0_5_va_stall_0 + bundleIn_0_5_va_stall_1; // @[NoC.scala 163:91]
  wire [2:0] _debug_va_stall_ctr_T_6 = {{1'd0}, _debug_va_stall_ctr_T_5}; // @[NoC.scala 163:91]
  wire [1:0] bundleIn_0_6_va_stall_0 = router_sink_domain_2_auto_routers_debug_out_va_stall_0; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  wire [1:0] bundleIn_0_6_va_stall_1 = router_sink_domain_2_auto_routers_debug_out_va_stall_1; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  wire [1:0] _debug_va_stall_ctr_T_9 = bundleIn_0_6_va_stall_0 + bundleIn_0_6_va_stall_1; // @[NoC.scala 163:91]
  wire [2:0] _debug_va_stall_ctr_T_10 = {{1'd0}, _debug_va_stall_ctr_T_9}; // @[NoC.scala 163:91]
  wire [1:0] bundleIn_0_7_va_stall_0 = router_sink_domain_3_auto_routers_debug_out_va_stall_0; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  wire [1:0] bundleIn_0_7_va_stall_1 = router_sink_domain_3_auto_routers_debug_out_va_stall_1; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  wire [1:0] _debug_va_stall_ctr_T_13 = bundleIn_0_7_va_stall_0 + bundleIn_0_7_va_stall_1; // @[NoC.scala 163:91]
  wire [2:0] _debug_va_stall_ctr_T_14 = {{1'd0}, _debug_va_stall_ctr_T_13}; // @[NoC.scala 163:91]
  wire [1:0] _debug_va_stall_ctr_T_17 = _debug_va_stall_ctr_T_2[1:0] + _debug_va_stall_ctr_T_6[1:0]; // @[NoC.scala 163:104]
  wire [1:0] _debug_va_stall_ctr_T_19 = _debug_va_stall_ctr_T_17 + _debug_va_stall_ctr_T_10[1:0]; // @[NoC.scala 163:104]
  wire [1:0] _debug_va_stall_ctr_T_21 = _debug_va_stall_ctr_T_19 + _debug_va_stall_ctr_T_14[1:0]; // @[NoC.scala 163:104]
  wire [63:0] _GEN_0 = {{62'd0}, _debug_va_stall_ctr_T_21}; // @[NoC.scala 163:46]
  wire [63:0] _debug_va_stall_ctr_T_23 = debug_va_stall_ctr + _GEN_0; // @[NoC.scala 163:46]
  wire [1:0] bundleIn_0_4_sa_stall_0 = router_sink_domain_auto_routers_debug_out_sa_stall_0; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  wire [1:0] bundleIn_0_4_sa_stall_1 = router_sink_domain_auto_routers_debug_out_sa_stall_1; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  wire [1:0] _debug_sa_stall_ctr_T_1 = bundleIn_0_4_sa_stall_0 + bundleIn_0_4_sa_stall_1; // @[NoC.scala 164:91]
  wire [2:0] _debug_sa_stall_ctr_T_2 = {{1'd0}, _debug_sa_stall_ctr_T_1}; // @[NoC.scala 164:91]
  wire [1:0] bundleIn_0_5_sa_stall_0 = router_sink_domain_1_auto_routers_debug_out_sa_stall_0; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  wire [1:0] bundleIn_0_5_sa_stall_1 = router_sink_domain_1_auto_routers_debug_out_sa_stall_1; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  wire [1:0] _debug_sa_stall_ctr_T_5 = bundleIn_0_5_sa_stall_0 + bundleIn_0_5_sa_stall_1; // @[NoC.scala 164:91]
  wire [2:0] _debug_sa_stall_ctr_T_6 = {{1'd0}, _debug_sa_stall_ctr_T_5}; // @[NoC.scala 164:91]
  wire [1:0] bundleIn_0_6_sa_stall_0 = router_sink_domain_2_auto_routers_debug_out_sa_stall_0; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  wire [1:0] bundleIn_0_6_sa_stall_1 = router_sink_domain_2_auto_routers_debug_out_sa_stall_1; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  wire [1:0] _debug_sa_stall_ctr_T_9 = bundleIn_0_6_sa_stall_0 + bundleIn_0_6_sa_stall_1; // @[NoC.scala 164:91]
  wire [2:0] _debug_sa_stall_ctr_T_10 = {{1'd0}, _debug_sa_stall_ctr_T_9}; // @[NoC.scala 164:91]
  wire [1:0] bundleIn_0_7_sa_stall_0 = router_sink_domain_3_auto_routers_debug_out_sa_stall_0; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  wire [1:0] bundleIn_0_7_sa_stall_1 = router_sink_domain_3_auto_routers_debug_out_sa_stall_1; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  wire [1:0] _debug_sa_stall_ctr_T_13 = bundleIn_0_7_sa_stall_0 + bundleIn_0_7_sa_stall_1; // @[NoC.scala 164:91]
  wire [2:0] _debug_sa_stall_ctr_T_14 = {{1'd0}, _debug_sa_stall_ctr_T_13}; // @[NoC.scala 164:91]
  wire [1:0] _debug_sa_stall_ctr_T_17 = _debug_sa_stall_ctr_T_2[1:0] + _debug_sa_stall_ctr_T_6[1:0]; // @[NoC.scala 164:104]
  wire [1:0] _debug_sa_stall_ctr_T_19 = _debug_sa_stall_ctr_T_17 + _debug_sa_stall_ctr_T_10[1:0]; // @[NoC.scala 164:104]
  wire [1:0] _debug_sa_stall_ctr_T_21 = _debug_sa_stall_ctr_T_19 + _debug_sa_stall_ctr_T_14[1:0]; // @[NoC.scala 164:104]
  wire [63:0] _GEN_1 = {{62'd0}, _debug_sa_stall_ctr_T_21}; // @[NoC.scala 164:46]
  wire [63:0] _debug_sa_stall_ctr_T_23 = debug_sa_stall_ctr + _GEN_1; // @[NoC.scala 164:46]
  ClockSinkDomain router_sink_domain ( // @[NoC.scala 38:40]
    .auto_routers_debug_out_va_stall_0(router_sink_domain_auto_routers_debug_out_va_stall_0),
    .auto_routers_debug_out_va_stall_1(router_sink_domain_auto_routers_debug_out_va_stall_1),
    .auto_routers_debug_out_sa_stall_0(router_sink_domain_auto_routers_debug_out_sa_stall_0),
    .auto_routers_debug_out_sa_stall_1(router_sink_domain_auto_routers_debug_out_sa_stall_1),
    .auto_routers_egress_nodes_out_flit_valid(router_sink_domain_auto_routers_egress_nodes_out_flit_valid),
    .auto_routers_egress_nodes_out_flit_bits_head(router_sink_domain_auto_routers_egress_nodes_out_flit_bits_head),
    .auto_routers_egress_nodes_out_flit_bits_tail(router_sink_domain_auto_routers_egress_nodes_out_flit_bits_tail),
    .auto_routers_egress_nodes_out_flit_bits_payload(router_sink_domain_auto_routers_egress_nodes_out_flit_bits_payload)
      ,
    .auto_routers_egress_nodes_out_flit_bits_ingress_id(
      router_sink_domain_auto_routers_egress_nodes_out_flit_bits_ingress_id),
    .auto_routers_ingress_nodes_in_flit_ready(router_sink_domain_auto_routers_ingress_nodes_in_flit_ready),
    .auto_routers_ingress_nodes_in_flit_valid(router_sink_domain_auto_routers_ingress_nodes_in_flit_valid),
    .auto_routers_ingress_nodes_in_flit_bits_head(router_sink_domain_auto_routers_ingress_nodes_in_flit_bits_head),
    .auto_routers_ingress_nodes_in_flit_bits_tail(router_sink_domain_auto_routers_ingress_nodes_in_flit_bits_tail),
    .auto_routers_ingress_nodes_in_flit_bits_payload(router_sink_domain_auto_routers_ingress_nodes_in_flit_bits_payload)
      ,
    .auto_routers_ingress_nodes_in_flit_bits_egress_id(
      router_sink_domain_auto_routers_ingress_nodes_in_flit_bits_egress_id),
    .auto_routers_source_nodes_out_1_flit_0_valid(router_sink_domain_auto_routers_source_nodes_out_1_flit_0_valid),
    .auto_routers_source_nodes_out_1_flit_0_bits_head(
      router_sink_domain_auto_routers_source_nodes_out_1_flit_0_bits_head),
    .auto_routers_source_nodes_out_1_flit_0_bits_tail(
      router_sink_domain_auto_routers_source_nodes_out_1_flit_0_bits_tail),
    .auto_routers_source_nodes_out_1_flit_0_bits_payload(
      router_sink_domain_auto_routers_source_nodes_out_1_flit_0_bits_payload),
    .auto_routers_source_nodes_out_1_flit_0_bits_flow_ingress_node(
      router_sink_domain_auto_routers_source_nodes_out_1_flit_0_bits_flow_ingress_node),
    .auto_routers_source_nodes_out_1_flit_0_bits_flow_egress_node(
      router_sink_domain_auto_routers_source_nodes_out_1_flit_0_bits_flow_egress_node),
    .auto_routers_source_nodes_out_1_flit_0_bits_virt_channel_id(
      router_sink_domain_auto_routers_source_nodes_out_1_flit_0_bits_virt_channel_id),
    .auto_routers_source_nodes_out_1_credit_return(router_sink_domain_auto_routers_source_nodes_out_1_credit_return),
    .auto_routers_source_nodes_out_1_vc_free(router_sink_domain_auto_routers_source_nodes_out_1_vc_free),
    .auto_routers_source_nodes_out_0_flit_0_valid(router_sink_domain_auto_routers_source_nodes_out_0_flit_0_valid),
    .auto_routers_source_nodes_out_0_flit_0_bits_head(
      router_sink_domain_auto_routers_source_nodes_out_0_flit_0_bits_head),
    .auto_routers_source_nodes_out_0_flit_0_bits_tail(
      router_sink_domain_auto_routers_source_nodes_out_0_flit_0_bits_tail),
    .auto_routers_source_nodes_out_0_flit_0_bits_payload(
      router_sink_domain_auto_routers_source_nodes_out_0_flit_0_bits_payload),
    .auto_routers_source_nodes_out_0_flit_0_bits_flow_ingress_node(
      router_sink_domain_auto_routers_source_nodes_out_0_flit_0_bits_flow_ingress_node),
    .auto_routers_source_nodes_out_0_flit_0_bits_flow_egress_node(
      router_sink_domain_auto_routers_source_nodes_out_0_flit_0_bits_flow_egress_node),
    .auto_routers_source_nodes_out_0_flit_0_bits_virt_channel_id(
      router_sink_domain_auto_routers_source_nodes_out_0_flit_0_bits_virt_channel_id),
    .auto_routers_source_nodes_out_0_credit_return(router_sink_domain_auto_routers_source_nodes_out_0_credit_return),
    .auto_routers_source_nodes_out_0_vc_free(router_sink_domain_auto_routers_source_nodes_out_0_vc_free),
    .auto_routers_dest_nodes_in_1_flit_0_valid(router_sink_domain_auto_routers_dest_nodes_in_1_flit_0_valid),
    .auto_routers_dest_nodes_in_1_flit_0_bits_head(router_sink_domain_auto_routers_dest_nodes_in_1_flit_0_bits_head),
    .auto_routers_dest_nodes_in_1_flit_0_bits_tail(router_sink_domain_auto_routers_dest_nodes_in_1_flit_0_bits_tail),
    .auto_routers_dest_nodes_in_1_flit_0_bits_payload(
      router_sink_domain_auto_routers_dest_nodes_in_1_flit_0_bits_payload),
    .auto_routers_dest_nodes_in_1_flit_0_bits_flow_ingress_node(
      router_sink_domain_auto_routers_dest_nodes_in_1_flit_0_bits_flow_ingress_node),
    .auto_routers_dest_nodes_in_1_flit_0_bits_flow_egress_node(
      router_sink_domain_auto_routers_dest_nodes_in_1_flit_0_bits_flow_egress_node),
    .auto_routers_dest_nodes_in_1_flit_0_bits_virt_channel_id(
      router_sink_domain_auto_routers_dest_nodes_in_1_flit_0_bits_virt_channel_id),
    .auto_routers_dest_nodes_in_1_credit_return(router_sink_domain_auto_routers_dest_nodes_in_1_credit_return),
    .auto_routers_dest_nodes_in_1_vc_free(router_sink_domain_auto_routers_dest_nodes_in_1_vc_free),
    .auto_routers_dest_nodes_in_0_flit_0_valid(router_sink_domain_auto_routers_dest_nodes_in_0_flit_0_valid),
    .auto_routers_dest_nodes_in_0_flit_0_bits_head(router_sink_domain_auto_routers_dest_nodes_in_0_flit_0_bits_head),
    .auto_routers_dest_nodes_in_0_flit_0_bits_tail(router_sink_domain_auto_routers_dest_nodes_in_0_flit_0_bits_tail),
    .auto_routers_dest_nodes_in_0_flit_0_bits_payload(
      router_sink_domain_auto_routers_dest_nodes_in_0_flit_0_bits_payload),
    .auto_routers_dest_nodes_in_0_flit_0_bits_flow_ingress_node(
      router_sink_domain_auto_routers_dest_nodes_in_0_flit_0_bits_flow_ingress_node),
    .auto_routers_dest_nodes_in_0_flit_0_bits_flow_egress_node(
      router_sink_domain_auto_routers_dest_nodes_in_0_flit_0_bits_flow_egress_node),
    .auto_routers_dest_nodes_in_0_flit_0_bits_virt_channel_id(
      router_sink_domain_auto_routers_dest_nodes_in_0_flit_0_bits_virt_channel_id),
    .auto_routers_dest_nodes_in_0_credit_return(router_sink_domain_auto_routers_dest_nodes_in_0_credit_return),
    .auto_routers_dest_nodes_in_0_vc_free(router_sink_domain_auto_routers_dest_nodes_in_0_vc_free),
    .auto_clock_in_clock(router_sink_domain_auto_clock_in_clock),
    .auto_clock_in_reset(router_sink_domain_auto_clock_in_reset)
  );
  ClockSinkDomain_1 router_sink_domain_1 ( // @[NoC.scala 38:40]
    .auto_routers_debug_out_va_stall_0(router_sink_domain_1_auto_routers_debug_out_va_stall_0),
    .auto_routers_debug_out_va_stall_1(router_sink_domain_1_auto_routers_debug_out_va_stall_1),
    .auto_routers_debug_out_sa_stall_0(router_sink_domain_1_auto_routers_debug_out_sa_stall_0),
    .auto_routers_debug_out_sa_stall_1(router_sink_domain_1_auto_routers_debug_out_sa_stall_1),
    .auto_routers_egress_nodes_out_flit_valid(router_sink_domain_1_auto_routers_egress_nodes_out_flit_valid),
    .auto_routers_egress_nodes_out_flit_bits_head(router_sink_domain_1_auto_routers_egress_nodes_out_flit_bits_head),
    .auto_routers_egress_nodes_out_flit_bits_tail(router_sink_domain_1_auto_routers_egress_nodes_out_flit_bits_tail),
    .auto_routers_egress_nodes_out_flit_bits_payload(
      router_sink_domain_1_auto_routers_egress_nodes_out_flit_bits_payload),
    .auto_routers_egress_nodes_out_flit_bits_ingress_id(
      router_sink_domain_1_auto_routers_egress_nodes_out_flit_bits_ingress_id),
    .auto_routers_ingress_nodes_in_flit_ready(router_sink_domain_1_auto_routers_ingress_nodes_in_flit_ready),
    .auto_routers_ingress_nodes_in_flit_valid(router_sink_domain_1_auto_routers_ingress_nodes_in_flit_valid),
    .auto_routers_ingress_nodes_in_flit_bits_head(router_sink_domain_1_auto_routers_ingress_nodes_in_flit_bits_head),
    .auto_routers_ingress_nodes_in_flit_bits_tail(router_sink_domain_1_auto_routers_ingress_nodes_in_flit_bits_tail),
    .auto_routers_ingress_nodes_in_flit_bits_payload(
      router_sink_domain_1_auto_routers_ingress_nodes_in_flit_bits_payload),
    .auto_routers_ingress_nodes_in_flit_bits_egress_id(
      router_sink_domain_1_auto_routers_ingress_nodes_in_flit_bits_egress_id),
    .auto_routers_source_nodes_out_1_flit_0_valid(router_sink_domain_1_auto_routers_source_nodes_out_1_flit_0_valid),
    .auto_routers_source_nodes_out_1_flit_0_bits_head(
      router_sink_domain_1_auto_routers_source_nodes_out_1_flit_0_bits_head),
    .auto_routers_source_nodes_out_1_flit_0_bits_tail(
      router_sink_domain_1_auto_routers_source_nodes_out_1_flit_0_bits_tail),
    .auto_routers_source_nodes_out_1_flit_0_bits_payload(
      router_sink_domain_1_auto_routers_source_nodes_out_1_flit_0_bits_payload),
    .auto_routers_source_nodes_out_1_flit_0_bits_flow_ingress_node(
      router_sink_domain_1_auto_routers_source_nodes_out_1_flit_0_bits_flow_ingress_node),
    .auto_routers_source_nodes_out_1_flit_0_bits_flow_egress_node(
      router_sink_domain_1_auto_routers_source_nodes_out_1_flit_0_bits_flow_egress_node),
    .auto_routers_source_nodes_out_1_flit_0_bits_virt_channel_id(
      router_sink_domain_1_auto_routers_source_nodes_out_1_flit_0_bits_virt_channel_id),
    .auto_routers_source_nodes_out_1_credit_return(router_sink_domain_1_auto_routers_source_nodes_out_1_credit_return),
    .auto_routers_source_nodes_out_1_vc_free(router_sink_domain_1_auto_routers_source_nodes_out_1_vc_free),
    .auto_routers_source_nodes_out_0_flit_0_valid(router_sink_domain_1_auto_routers_source_nodes_out_0_flit_0_valid),
    .auto_routers_source_nodes_out_0_flit_0_bits_head(
      router_sink_domain_1_auto_routers_source_nodes_out_0_flit_0_bits_head),
    .auto_routers_source_nodes_out_0_flit_0_bits_tail(
      router_sink_domain_1_auto_routers_source_nodes_out_0_flit_0_bits_tail),
    .auto_routers_source_nodes_out_0_flit_0_bits_payload(
      router_sink_domain_1_auto_routers_source_nodes_out_0_flit_0_bits_payload),
    .auto_routers_source_nodes_out_0_flit_0_bits_flow_ingress_node(
      router_sink_domain_1_auto_routers_source_nodes_out_0_flit_0_bits_flow_ingress_node),
    .auto_routers_source_nodes_out_0_flit_0_bits_flow_egress_node(
      router_sink_domain_1_auto_routers_source_nodes_out_0_flit_0_bits_flow_egress_node),
    .auto_routers_source_nodes_out_0_flit_0_bits_virt_channel_id(
      router_sink_domain_1_auto_routers_source_nodes_out_0_flit_0_bits_virt_channel_id),
    .auto_routers_source_nodes_out_0_credit_return(router_sink_domain_1_auto_routers_source_nodes_out_0_credit_return),
    .auto_routers_source_nodes_out_0_vc_free(router_sink_domain_1_auto_routers_source_nodes_out_0_vc_free),
    .auto_routers_dest_nodes_in_1_flit_0_valid(router_sink_domain_1_auto_routers_dest_nodes_in_1_flit_0_valid),
    .auto_routers_dest_nodes_in_1_flit_0_bits_head(router_sink_domain_1_auto_routers_dest_nodes_in_1_flit_0_bits_head),
    .auto_routers_dest_nodes_in_1_flit_0_bits_tail(router_sink_domain_1_auto_routers_dest_nodes_in_1_flit_0_bits_tail),
    .auto_routers_dest_nodes_in_1_flit_0_bits_payload(
      router_sink_domain_1_auto_routers_dest_nodes_in_1_flit_0_bits_payload),
    .auto_routers_dest_nodes_in_1_flit_0_bits_flow_ingress_node(
      router_sink_domain_1_auto_routers_dest_nodes_in_1_flit_0_bits_flow_ingress_node),
    .auto_routers_dest_nodes_in_1_flit_0_bits_flow_egress_node(
      router_sink_domain_1_auto_routers_dest_nodes_in_1_flit_0_bits_flow_egress_node),
    .auto_routers_dest_nodes_in_1_flit_0_bits_virt_channel_id(
      router_sink_domain_1_auto_routers_dest_nodes_in_1_flit_0_bits_virt_channel_id),
    .auto_routers_dest_nodes_in_1_credit_return(router_sink_domain_1_auto_routers_dest_nodes_in_1_credit_return),
    .auto_routers_dest_nodes_in_1_vc_free(router_sink_domain_1_auto_routers_dest_nodes_in_1_vc_free),
    .auto_routers_dest_nodes_in_0_flit_0_valid(router_sink_domain_1_auto_routers_dest_nodes_in_0_flit_0_valid),
    .auto_routers_dest_nodes_in_0_flit_0_bits_head(router_sink_domain_1_auto_routers_dest_nodes_in_0_flit_0_bits_head),
    .auto_routers_dest_nodes_in_0_flit_0_bits_tail(router_sink_domain_1_auto_routers_dest_nodes_in_0_flit_0_bits_tail),
    .auto_routers_dest_nodes_in_0_flit_0_bits_payload(
      router_sink_domain_1_auto_routers_dest_nodes_in_0_flit_0_bits_payload),
    .auto_routers_dest_nodes_in_0_flit_0_bits_flow_ingress_node(
      router_sink_domain_1_auto_routers_dest_nodes_in_0_flit_0_bits_flow_ingress_node),
    .auto_routers_dest_nodes_in_0_flit_0_bits_flow_egress_node(
      router_sink_domain_1_auto_routers_dest_nodes_in_0_flit_0_bits_flow_egress_node),
    .auto_routers_dest_nodes_in_0_flit_0_bits_virt_channel_id(
      router_sink_domain_1_auto_routers_dest_nodes_in_0_flit_0_bits_virt_channel_id),
    .auto_routers_dest_nodes_in_0_credit_return(router_sink_domain_1_auto_routers_dest_nodes_in_0_credit_return),
    .auto_routers_dest_nodes_in_0_vc_free(router_sink_domain_1_auto_routers_dest_nodes_in_0_vc_free),
    .auto_clock_in_clock(router_sink_domain_1_auto_clock_in_clock),
    .auto_clock_in_reset(router_sink_domain_1_auto_clock_in_reset)
  );
  ClockSinkDomain_2 router_sink_domain_2 ( // @[NoC.scala 38:40]
    .auto_routers_debug_out_va_stall_0(router_sink_domain_2_auto_routers_debug_out_va_stall_0),
    .auto_routers_debug_out_va_stall_1(router_sink_domain_2_auto_routers_debug_out_va_stall_1),
    .auto_routers_debug_out_sa_stall_0(router_sink_domain_2_auto_routers_debug_out_sa_stall_0),
    .auto_routers_debug_out_sa_stall_1(router_sink_domain_2_auto_routers_debug_out_sa_stall_1),
    .auto_routers_egress_nodes_out_flit_valid(router_sink_domain_2_auto_routers_egress_nodes_out_flit_valid),
    .auto_routers_egress_nodes_out_flit_bits_head(router_sink_domain_2_auto_routers_egress_nodes_out_flit_bits_head),
    .auto_routers_egress_nodes_out_flit_bits_tail(router_sink_domain_2_auto_routers_egress_nodes_out_flit_bits_tail),
    .auto_routers_egress_nodes_out_flit_bits_payload(
      router_sink_domain_2_auto_routers_egress_nodes_out_flit_bits_payload),
    .auto_routers_egress_nodes_out_flit_bits_ingress_id(
      router_sink_domain_2_auto_routers_egress_nodes_out_flit_bits_ingress_id),
    .auto_routers_ingress_nodes_in_flit_ready(router_sink_domain_2_auto_routers_ingress_nodes_in_flit_ready),
    .auto_routers_ingress_nodes_in_flit_valid(router_sink_domain_2_auto_routers_ingress_nodes_in_flit_valid),
    .auto_routers_ingress_nodes_in_flit_bits_head(router_sink_domain_2_auto_routers_ingress_nodes_in_flit_bits_head),
    .auto_routers_ingress_nodes_in_flit_bits_tail(router_sink_domain_2_auto_routers_ingress_nodes_in_flit_bits_tail),
    .auto_routers_ingress_nodes_in_flit_bits_payload(
      router_sink_domain_2_auto_routers_ingress_nodes_in_flit_bits_payload),
    .auto_routers_ingress_nodes_in_flit_bits_egress_id(
      router_sink_domain_2_auto_routers_ingress_nodes_in_flit_bits_egress_id),
    .auto_routers_source_nodes_out_1_flit_0_valid(router_sink_domain_2_auto_routers_source_nodes_out_1_flit_0_valid),
    .auto_routers_source_nodes_out_1_flit_0_bits_head(
      router_sink_domain_2_auto_routers_source_nodes_out_1_flit_0_bits_head),
    .auto_routers_source_nodes_out_1_flit_0_bits_tail(
      router_sink_domain_2_auto_routers_source_nodes_out_1_flit_0_bits_tail),
    .auto_routers_source_nodes_out_1_flit_0_bits_payload(
      router_sink_domain_2_auto_routers_source_nodes_out_1_flit_0_bits_payload),
    .auto_routers_source_nodes_out_1_flit_0_bits_flow_ingress_node(
      router_sink_domain_2_auto_routers_source_nodes_out_1_flit_0_bits_flow_ingress_node),
    .auto_routers_source_nodes_out_1_flit_0_bits_flow_egress_node(
      router_sink_domain_2_auto_routers_source_nodes_out_1_flit_0_bits_flow_egress_node),
    .auto_routers_source_nodes_out_1_flit_0_bits_virt_channel_id(
      router_sink_domain_2_auto_routers_source_nodes_out_1_flit_0_bits_virt_channel_id),
    .auto_routers_source_nodes_out_1_credit_return(router_sink_domain_2_auto_routers_source_nodes_out_1_credit_return),
    .auto_routers_source_nodes_out_1_vc_free(router_sink_domain_2_auto_routers_source_nodes_out_1_vc_free),
    .auto_routers_source_nodes_out_0_flit_0_valid(router_sink_domain_2_auto_routers_source_nodes_out_0_flit_0_valid),
    .auto_routers_source_nodes_out_0_flit_0_bits_head(
      router_sink_domain_2_auto_routers_source_nodes_out_0_flit_0_bits_head),
    .auto_routers_source_nodes_out_0_flit_0_bits_tail(
      router_sink_domain_2_auto_routers_source_nodes_out_0_flit_0_bits_tail),
    .auto_routers_source_nodes_out_0_flit_0_bits_payload(
      router_sink_domain_2_auto_routers_source_nodes_out_0_flit_0_bits_payload),
    .auto_routers_source_nodes_out_0_flit_0_bits_flow_ingress_node(
      router_sink_domain_2_auto_routers_source_nodes_out_0_flit_0_bits_flow_ingress_node),
    .auto_routers_source_nodes_out_0_flit_0_bits_flow_egress_node(
      router_sink_domain_2_auto_routers_source_nodes_out_0_flit_0_bits_flow_egress_node),
    .auto_routers_source_nodes_out_0_flit_0_bits_virt_channel_id(
      router_sink_domain_2_auto_routers_source_nodes_out_0_flit_0_bits_virt_channel_id),
    .auto_routers_source_nodes_out_0_credit_return(router_sink_domain_2_auto_routers_source_nodes_out_0_credit_return),
    .auto_routers_source_nodes_out_0_vc_free(router_sink_domain_2_auto_routers_source_nodes_out_0_vc_free),
    .auto_routers_dest_nodes_in_1_flit_0_valid(router_sink_domain_2_auto_routers_dest_nodes_in_1_flit_0_valid),
    .auto_routers_dest_nodes_in_1_flit_0_bits_head(router_sink_domain_2_auto_routers_dest_nodes_in_1_flit_0_bits_head),
    .auto_routers_dest_nodes_in_1_flit_0_bits_tail(router_sink_domain_2_auto_routers_dest_nodes_in_1_flit_0_bits_tail),
    .auto_routers_dest_nodes_in_1_flit_0_bits_payload(
      router_sink_domain_2_auto_routers_dest_nodes_in_1_flit_0_bits_payload),
    .auto_routers_dest_nodes_in_1_flit_0_bits_flow_ingress_node(
      router_sink_domain_2_auto_routers_dest_nodes_in_1_flit_0_bits_flow_ingress_node),
    .auto_routers_dest_nodes_in_1_flit_0_bits_flow_egress_node(
      router_sink_domain_2_auto_routers_dest_nodes_in_1_flit_0_bits_flow_egress_node),
    .auto_routers_dest_nodes_in_1_flit_0_bits_virt_channel_id(
      router_sink_domain_2_auto_routers_dest_nodes_in_1_flit_0_bits_virt_channel_id),
    .auto_routers_dest_nodes_in_1_credit_return(router_sink_domain_2_auto_routers_dest_nodes_in_1_credit_return),
    .auto_routers_dest_nodes_in_1_vc_free(router_sink_domain_2_auto_routers_dest_nodes_in_1_vc_free),
    .auto_routers_dest_nodes_in_0_flit_0_valid(router_sink_domain_2_auto_routers_dest_nodes_in_0_flit_0_valid),
    .auto_routers_dest_nodes_in_0_flit_0_bits_head(router_sink_domain_2_auto_routers_dest_nodes_in_0_flit_0_bits_head),
    .auto_routers_dest_nodes_in_0_flit_0_bits_tail(router_sink_domain_2_auto_routers_dest_nodes_in_0_flit_0_bits_tail),
    .auto_routers_dest_nodes_in_0_flit_0_bits_payload(
      router_sink_domain_2_auto_routers_dest_nodes_in_0_flit_0_bits_payload),
    .auto_routers_dest_nodes_in_0_flit_0_bits_flow_ingress_node(
      router_sink_domain_2_auto_routers_dest_nodes_in_0_flit_0_bits_flow_ingress_node),
    .auto_routers_dest_nodes_in_0_flit_0_bits_flow_egress_node(
      router_sink_domain_2_auto_routers_dest_nodes_in_0_flit_0_bits_flow_egress_node),
    .auto_routers_dest_nodes_in_0_flit_0_bits_virt_channel_id(
      router_sink_domain_2_auto_routers_dest_nodes_in_0_flit_0_bits_virt_channel_id),
    .auto_routers_dest_nodes_in_0_credit_return(router_sink_domain_2_auto_routers_dest_nodes_in_0_credit_return),
    .auto_routers_dest_nodes_in_0_vc_free(router_sink_domain_2_auto_routers_dest_nodes_in_0_vc_free),
    .auto_clock_in_clock(router_sink_domain_2_auto_clock_in_clock),
    .auto_clock_in_reset(router_sink_domain_2_auto_clock_in_reset)
  );
  ClockSinkDomain_3 router_sink_domain_3 ( // @[NoC.scala 38:40]
    .auto_routers_debug_out_va_stall_0(router_sink_domain_3_auto_routers_debug_out_va_stall_0),
    .auto_routers_debug_out_va_stall_1(router_sink_domain_3_auto_routers_debug_out_va_stall_1),
    .auto_routers_debug_out_sa_stall_0(router_sink_domain_3_auto_routers_debug_out_sa_stall_0),
    .auto_routers_debug_out_sa_stall_1(router_sink_domain_3_auto_routers_debug_out_sa_stall_1),
    .auto_routers_egress_nodes_out_flit_valid(router_sink_domain_3_auto_routers_egress_nodes_out_flit_valid),
    .auto_routers_egress_nodes_out_flit_bits_head(router_sink_domain_3_auto_routers_egress_nodes_out_flit_bits_head),
    .auto_routers_egress_nodes_out_flit_bits_tail(router_sink_domain_3_auto_routers_egress_nodes_out_flit_bits_tail),
    .auto_routers_egress_nodes_out_flit_bits_payload(
      router_sink_domain_3_auto_routers_egress_nodes_out_flit_bits_payload),
    .auto_routers_egress_nodes_out_flit_bits_ingress_id(
      router_sink_domain_3_auto_routers_egress_nodes_out_flit_bits_ingress_id),
    .auto_routers_ingress_nodes_in_flit_ready(router_sink_domain_3_auto_routers_ingress_nodes_in_flit_ready),
    .auto_routers_ingress_nodes_in_flit_valid(router_sink_domain_3_auto_routers_ingress_nodes_in_flit_valid),
    .auto_routers_ingress_nodes_in_flit_bits_head(router_sink_domain_3_auto_routers_ingress_nodes_in_flit_bits_head),
    .auto_routers_ingress_nodes_in_flit_bits_tail(router_sink_domain_3_auto_routers_ingress_nodes_in_flit_bits_tail),
    .auto_routers_ingress_nodes_in_flit_bits_payload(
      router_sink_domain_3_auto_routers_ingress_nodes_in_flit_bits_payload),
    .auto_routers_ingress_nodes_in_flit_bits_egress_id(
      router_sink_domain_3_auto_routers_ingress_nodes_in_flit_bits_egress_id),
    .auto_routers_source_nodes_out_1_flit_0_valid(router_sink_domain_3_auto_routers_source_nodes_out_1_flit_0_valid),
    .auto_routers_source_nodes_out_1_flit_0_bits_head(
      router_sink_domain_3_auto_routers_source_nodes_out_1_flit_0_bits_head),
    .auto_routers_source_nodes_out_1_flit_0_bits_tail(
      router_sink_domain_3_auto_routers_source_nodes_out_1_flit_0_bits_tail),
    .auto_routers_source_nodes_out_1_flit_0_bits_payload(
      router_sink_domain_3_auto_routers_source_nodes_out_1_flit_0_bits_payload),
    .auto_routers_source_nodes_out_1_flit_0_bits_flow_ingress_node(
      router_sink_domain_3_auto_routers_source_nodes_out_1_flit_0_bits_flow_ingress_node),
    .auto_routers_source_nodes_out_1_flit_0_bits_flow_egress_node(
      router_sink_domain_3_auto_routers_source_nodes_out_1_flit_0_bits_flow_egress_node),
    .auto_routers_source_nodes_out_1_flit_0_bits_virt_channel_id(
      router_sink_domain_3_auto_routers_source_nodes_out_1_flit_0_bits_virt_channel_id),
    .auto_routers_source_nodes_out_1_credit_return(router_sink_domain_3_auto_routers_source_nodes_out_1_credit_return),
    .auto_routers_source_nodes_out_1_vc_free(router_sink_domain_3_auto_routers_source_nodes_out_1_vc_free),
    .auto_routers_source_nodes_out_0_flit_0_valid(router_sink_domain_3_auto_routers_source_nodes_out_0_flit_0_valid),
    .auto_routers_source_nodes_out_0_flit_0_bits_head(
      router_sink_domain_3_auto_routers_source_nodes_out_0_flit_0_bits_head),
    .auto_routers_source_nodes_out_0_flit_0_bits_tail(
      router_sink_domain_3_auto_routers_source_nodes_out_0_flit_0_bits_tail),
    .auto_routers_source_nodes_out_0_flit_0_bits_payload(
      router_sink_domain_3_auto_routers_source_nodes_out_0_flit_0_bits_payload),
    .auto_routers_source_nodes_out_0_flit_0_bits_flow_ingress_node(
      router_sink_domain_3_auto_routers_source_nodes_out_0_flit_0_bits_flow_ingress_node),
    .auto_routers_source_nodes_out_0_flit_0_bits_flow_egress_node(
      router_sink_domain_3_auto_routers_source_nodes_out_0_flit_0_bits_flow_egress_node),
    .auto_routers_source_nodes_out_0_flit_0_bits_virt_channel_id(
      router_sink_domain_3_auto_routers_source_nodes_out_0_flit_0_bits_virt_channel_id),
    .auto_routers_source_nodes_out_0_credit_return(router_sink_domain_3_auto_routers_source_nodes_out_0_credit_return),
    .auto_routers_source_nodes_out_0_vc_free(router_sink_domain_3_auto_routers_source_nodes_out_0_vc_free),
    .auto_routers_dest_nodes_in_1_flit_0_valid(router_sink_domain_3_auto_routers_dest_nodes_in_1_flit_0_valid),
    .auto_routers_dest_nodes_in_1_flit_0_bits_head(router_sink_domain_3_auto_routers_dest_nodes_in_1_flit_0_bits_head),
    .auto_routers_dest_nodes_in_1_flit_0_bits_tail(router_sink_domain_3_auto_routers_dest_nodes_in_1_flit_0_bits_tail),
    .auto_routers_dest_nodes_in_1_flit_0_bits_payload(
      router_sink_domain_3_auto_routers_dest_nodes_in_1_flit_0_bits_payload),
    .auto_routers_dest_nodes_in_1_flit_0_bits_flow_ingress_node(
      router_sink_domain_3_auto_routers_dest_nodes_in_1_flit_0_bits_flow_ingress_node),
    .auto_routers_dest_nodes_in_1_flit_0_bits_flow_egress_node(
      router_sink_domain_3_auto_routers_dest_nodes_in_1_flit_0_bits_flow_egress_node),
    .auto_routers_dest_nodes_in_1_flit_0_bits_virt_channel_id(
      router_sink_domain_3_auto_routers_dest_nodes_in_1_flit_0_bits_virt_channel_id),
    .auto_routers_dest_nodes_in_1_credit_return(router_sink_domain_3_auto_routers_dest_nodes_in_1_credit_return),
    .auto_routers_dest_nodes_in_1_vc_free(router_sink_domain_3_auto_routers_dest_nodes_in_1_vc_free),
    .auto_routers_dest_nodes_in_0_flit_0_valid(router_sink_domain_3_auto_routers_dest_nodes_in_0_flit_0_valid),
    .auto_routers_dest_nodes_in_0_flit_0_bits_head(router_sink_domain_3_auto_routers_dest_nodes_in_0_flit_0_bits_head),
    .auto_routers_dest_nodes_in_0_flit_0_bits_tail(router_sink_domain_3_auto_routers_dest_nodes_in_0_flit_0_bits_tail),
    .auto_routers_dest_nodes_in_0_flit_0_bits_payload(
      router_sink_domain_3_auto_routers_dest_nodes_in_0_flit_0_bits_payload),
    .auto_routers_dest_nodes_in_0_flit_0_bits_flow_ingress_node(
      router_sink_domain_3_auto_routers_dest_nodes_in_0_flit_0_bits_flow_ingress_node),
    .auto_routers_dest_nodes_in_0_flit_0_bits_flow_egress_node(
      router_sink_domain_3_auto_routers_dest_nodes_in_0_flit_0_bits_flow_egress_node),
    .auto_routers_dest_nodes_in_0_flit_0_bits_virt_channel_id(
      router_sink_domain_3_auto_routers_dest_nodes_in_0_flit_0_bits_virt_channel_id),
    .auto_routers_dest_nodes_in_0_credit_return(router_sink_domain_3_auto_routers_dest_nodes_in_0_credit_return),
    .auto_routers_dest_nodes_in_0_vc_free(router_sink_domain_3_auto_routers_dest_nodes_in_0_vc_free),
    .auto_clock_in_clock(router_sink_domain_3_auto_clock_in_clock),
    .auto_clock_in_reset(router_sink_domain_3_auto_clock_in_reset)
  );
  assign io_ingress_3_flit_ready = router_sink_domain_3_auto_routers_ingress_nodes_in_flit_ready; // @[Nodes.scala 1212:84 LazyModule.scala 355:16]
  assign io_ingress_2_flit_ready = router_sink_domain_2_auto_routers_ingress_nodes_in_flit_ready; // @[Nodes.scala 1212:84 LazyModule.scala 355:16]
  assign io_ingress_1_flit_ready = router_sink_domain_1_auto_routers_ingress_nodes_in_flit_ready; // @[Nodes.scala 1212:84 LazyModule.scala 355:16]
  assign io_ingress_0_flit_ready = router_sink_domain_auto_routers_ingress_nodes_in_flit_ready; // @[Nodes.scala 1212:84 LazyModule.scala 355:16]
  assign io_egress_3_flit_valid = router_sink_domain_3_auto_routers_egress_nodes_out_flit_valid; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  assign io_egress_3_flit_bits_head = router_sink_domain_3_auto_routers_egress_nodes_out_flit_bits_head; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  assign io_egress_3_flit_bits_tail = router_sink_domain_3_auto_routers_egress_nodes_out_flit_bits_tail; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  assign io_egress_3_flit_bits_payload = router_sink_domain_3_auto_routers_egress_nodes_out_flit_bits_payload; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  assign io_egress_3_flit_bits_ingress_id = router_sink_domain_3_auto_routers_egress_nodes_out_flit_bits_ingress_id; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  assign io_egress_2_flit_valid = router_sink_domain_2_auto_routers_egress_nodes_out_flit_valid; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  assign io_egress_2_flit_bits_head = router_sink_domain_2_auto_routers_egress_nodes_out_flit_bits_head; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  assign io_egress_2_flit_bits_tail = router_sink_domain_2_auto_routers_egress_nodes_out_flit_bits_tail; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  assign io_egress_2_flit_bits_payload = router_sink_domain_2_auto_routers_egress_nodes_out_flit_bits_payload; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  assign io_egress_2_flit_bits_ingress_id = router_sink_domain_2_auto_routers_egress_nodes_out_flit_bits_ingress_id; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  assign io_egress_1_flit_valid = router_sink_domain_1_auto_routers_egress_nodes_out_flit_valid; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  assign io_egress_1_flit_bits_head = router_sink_domain_1_auto_routers_egress_nodes_out_flit_bits_head; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  assign io_egress_1_flit_bits_tail = router_sink_domain_1_auto_routers_egress_nodes_out_flit_bits_tail; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  assign io_egress_1_flit_bits_payload = router_sink_domain_1_auto_routers_egress_nodes_out_flit_bits_payload; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  assign io_egress_1_flit_bits_ingress_id = router_sink_domain_1_auto_routers_egress_nodes_out_flit_bits_ingress_id; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  assign io_egress_0_flit_valid = router_sink_domain_auto_routers_egress_nodes_out_flit_valid; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  assign io_egress_0_flit_bits_head = router_sink_domain_auto_routers_egress_nodes_out_flit_bits_head; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  assign io_egress_0_flit_bits_tail = router_sink_domain_auto_routers_egress_nodes_out_flit_bits_tail; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  assign io_egress_0_flit_bits_payload = router_sink_domain_auto_routers_egress_nodes_out_flit_bits_payload; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  assign io_egress_0_flit_bits_ingress_id = router_sink_domain_auto_routers_egress_nodes_out_flit_bits_ingress_id; // @[Nodes.scala 1215:84 LazyModule.scala 353:16]
  assign router_sink_domain_auto_routers_ingress_nodes_in_flit_valid = io_ingress_0_flit_valid; // @[Nodes.scala 1212:84 NoC.scala 145:78]
  assign router_sink_domain_auto_routers_ingress_nodes_in_flit_bits_head = io_ingress_0_flit_bits_head; // @[Nodes.scala 1212:84 NoC.scala 145:78]
  assign router_sink_domain_auto_routers_ingress_nodes_in_flit_bits_tail = io_ingress_0_flit_bits_tail; // @[Nodes.scala 1212:84 NoC.scala 145:78]
  assign router_sink_domain_auto_routers_ingress_nodes_in_flit_bits_payload = io_ingress_0_flit_bits_payload; // @[Nodes.scala 1212:84 NoC.scala 145:78]
  assign router_sink_domain_auto_routers_ingress_nodes_in_flit_bits_egress_id = io_ingress_0_flit_bits_egress_id; // @[Nodes.scala 1212:84 NoC.scala 145:78]
  assign router_sink_domain_auto_routers_source_nodes_out_1_credit_return =
    router_sink_domain_3_auto_routers_dest_nodes_in_0_credit_return; // @[LazyModule.scala 355:16]
  assign router_sink_domain_auto_routers_source_nodes_out_1_vc_free =
    router_sink_domain_3_auto_routers_dest_nodes_in_0_vc_free; // @[LazyModule.scala 355:16]
  assign router_sink_domain_auto_routers_source_nodes_out_0_credit_return =
    router_sink_domain_1_auto_routers_dest_nodes_in_0_credit_return; // @[LazyModule.scala 355:16]
  assign router_sink_domain_auto_routers_source_nodes_out_0_vc_free =
    router_sink_domain_1_auto_routers_dest_nodes_in_0_vc_free; // @[LazyModule.scala 355:16]
  assign router_sink_domain_auto_routers_dest_nodes_in_1_flit_0_valid =
    router_sink_domain_3_auto_routers_source_nodes_out_0_flit_0_valid; // @[LazyModule.scala 353:16]
  assign router_sink_domain_auto_routers_dest_nodes_in_1_flit_0_bits_head =
    router_sink_domain_3_auto_routers_source_nodes_out_0_flit_0_bits_head; // @[LazyModule.scala 353:16]
  assign router_sink_domain_auto_routers_dest_nodes_in_1_flit_0_bits_tail =
    router_sink_domain_3_auto_routers_source_nodes_out_0_flit_0_bits_tail; // @[LazyModule.scala 353:16]
  assign router_sink_domain_auto_routers_dest_nodes_in_1_flit_0_bits_payload =
    router_sink_domain_3_auto_routers_source_nodes_out_0_flit_0_bits_payload; // @[LazyModule.scala 353:16]
  assign router_sink_domain_auto_routers_dest_nodes_in_1_flit_0_bits_flow_ingress_node =
    router_sink_domain_3_auto_routers_source_nodes_out_0_flit_0_bits_flow_ingress_node; // @[LazyModule.scala 353:16]
  assign router_sink_domain_auto_routers_dest_nodes_in_1_flit_0_bits_flow_egress_node =
    router_sink_domain_3_auto_routers_source_nodes_out_0_flit_0_bits_flow_egress_node; // @[LazyModule.scala 353:16]
  assign router_sink_domain_auto_routers_dest_nodes_in_1_flit_0_bits_virt_channel_id =
    router_sink_domain_3_auto_routers_source_nodes_out_0_flit_0_bits_virt_channel_id; // @[LazyModule.scala 353:16]
  assign router_sink_domain_auto_routers_dest_nodes_in_0_flit_0_valid =
    router_sink_domain_1_auto_routers_source_nodes_out_0_flit_0_valid; // @[LazyModule.scala 353:16]
  assign router_sink_domain_auto_routers_dest_nodes_in_0_flit_0_bits_head =
    router_sink_domain_1_auto_routers_source_nodes_out_0_flit_0_bits_head; // @[LazyModule.scala 353:16]
  assign router_sink_domain_auto_routers_dest_nodes_in_0_flit_0_bits_tail =
    router_sink_domain_1_auto_routers_source_nodes_out_0_flit_0_bits_tail; // @[LazyModule.scala 353:16]
  assign router_sink_domain_auto_routers_dest_nodes_in_0_flit_0_bits_payload =
    router_sink_domain_1_auto_routers_source_nodes_out_0_flit_0_bits_payload; // @[LazyModule.scala 353:16]
  assign router_sink_domain_auto_routers_dest_nodes_in_0_flit_0_bits_flow_ingress_node =
    router_sink_domain_1_auto_routers_source_nodes_out_0_flit_0_bits_flow_ingress_node; // @[LazyModule.scala 353:16]
  assign router_sink_domain_auto_routers_dest_nodes_in_0_flit_0_bits_flow_egress_node =
    router_sink_domain_1_auto_routers_source_nodes_out_0_flit_0_bits_flow_egress_node; // @[LazyModule.scala 353:16]
  assign router_sink_domain_auto_routers_dest_nodes_in_0_flit_0_bits_virt_channel_id =
    router_sink_domain_1_auto_routers_source_nodes_out_0_flit_0_bits_virt_channel_id; // @[LazyModule.scala 353:16]
  assign router_sink_domain_auto_clock_in_clock = io_router_clocks_0_clock; // @[Nodes.scala 1212:84 NoC.scala 147:88]
  assign router_sink_domain_auto_clock_in_reset = io_router_clocks_0_reset; // @[Nodes.scala 1212:84 NoC.scala 147:88]
  assign router_sink_domain_1_auto_routers_ingress_nodes_in_flit_valid = io_ingress_1_flit_valid; // @[Nodes.scala 1212:84 NoC.scala 145:78]
  assign router_sink_domain_1_auto_routers_ingress_nodes_in_flit_bits_head = io_ingress_1_flit_bits_head; // @[Nodes.scala 1212:84 NoC.scala 145:78]
  assign router_sink_domain_1_auto_routers_ingress_nodes_in_flit_bits_tail = io_ingress_1_flit_bits_tail; // @[Nodes.scala 1212:84 NoC.scala 145:78]
  assign router_sink_domain_1_auto_routers_ingress_nodes_in_flit_bits_payload = io_ingress_1_flit_bits_payload; // @[Nodes.scala 1212:84 NoC.scala 145:78]
  assign router_sink_domain_1_auto_routers_ingress_nodes_in_flit_bits_egress_id = io_ingress_1_flit_bits_egress_id; // @[Nodes.scala 1212:84 NoC.scala 145:78]
  assign router_sink_domain_1_auto_routers_source_nodes_out_1_credit_return =
    router_sink_domain_2_auto_routers_dest_nodes_in_0_credit_return; // @[LazyModule.scala 355:16]
  assign router_sink_domain_1_auto_routers_source_nodes_out_1_vc_free =
    router_sink_domain_2_auto_routers_dest_nodes_in_0_vc_free; // @[LazyModule.scala 355:16]
  assign router_sink_domain_1_auto_routers_source_nodes_out_0_credit_return =
    router_sink_domain_auto_routers_dest_nodes_in_0_credit_return; // @[LazyModule.scala 353:16]
  assign router_sink_domain_1_auto_routers_source_nodes_out_0_vc_free =
    router_sink_domain_auto_routers_dest_nodes_in_0_vc_free; // @[LazyModule.scala 353:16]
  assign router_sink_domain_1_auto_routers_dest_nodes_in_1_flit_0_valid =
    router_sink_domain_2_auto_routers_source_nodes_out_0_flit_0_valid; // @[LazyModule.scala 353:16]
  assign router_sink_domain_1_auto_routers_dest_nodes_in_1_flit_0_bits_head =
    router_sink_domain_2_auto_routers_source_nodes_out_0_flit_0_bits_head; // @[LazyModule.scala 353:16]
  assign router_sink_domain_1_auto_routers_dest_nodes_in_1_flit_0_bits_tail =
    router_sink_domain_2_auto_routers_source_nodes_out_0_flit_0_bits_tail; // @[LazyModule.scala 353:16]
  assign router_sink_domain_1_auto_routers_dest_nodes_in_1_flit_0_bits_payload =
    router_sink_domain_2_auto_routers_source_nodes_out_0_flit_0_bits_payload; // @[LazyModule.scala 353:16]
  assign router_sink_domain_1_auto_routers_dest_nodes_in_1_flit_0_bits_flow_ingress_node =
    router_sink_domain_2_auto_routers_source_nodes_out_0_flit_0_bits_flow_ingress_node; // @[LazyModule.scala 353:16]
  assign router_sink_domain_1_auto_routers_dest_nodes_in_1_flit_0_bits_flow_egress_node =
    router_sink_domain_2_auto_routers_source_nodes_out_0_flit_0_bits_flow_egress_node; // @[LazyModule.scala 353:16]
  assign router_sink_domain_1_auto_routers_dest_nodes_in_1_flit_0_bits_virt_channel_id =
    router_sink_domain_2_auto_routers_source_nodes_out_0_flit_0_bits_virt_channel_id; // @[LazyModule.scala 353:16]
  assign router_sink_domain_1_auto_routers_dest_nodes_in_0_flit_0_valid =
    router_sink_domain_auto_routers_source_nodes_out_0_flit_0_valid; // @[LazyModule.scala 355:16]
  assign router_sink_domain_1_auto_routers_dest_nodes_in_0_flit_0_bits_head =
    router_sink_domain_auto_routers_source_nodes_out_0_flit_0_bits_head; // @[LazyModule.scala 355:16]
  assign router_sink_domain_1_auto_routers_dest_nodes_in_0_flit_0_bits_tail =
    router_sink_domain_auto_routers_source_nodes_out_0_flit_0_bits_tail; // @[LazyModule.scala 355:16]
  assign router_sink_domain_1_auto_routers_dest_nodes_in_0_flit_0_bits_payload =
    router_sink_domain_auto_routers_source_nodes_out_0_flit_0_bits_payload; // @[LazyModule.scala 355:16]
  assign router_sink_domain_1_auto_routers_dest_nodes_in_0_flit_0_bits_flow_ingress_node =
    router_sink_domain_auto_routers_source_nodes_out_0_flit_0_bits_flow_ingress_node; // @[LazyModule.scala 355:16]
  assign router_sink_domain_1_auto_routers_dest_nodes_in_0_flit_0_bits_flow_egress_node =
    router_sink_domain_auto_routers_source_nodes_out_0_flit_0_bits_flow_egress_node; // @[LazyModule.scala 355:16]
  assign router_sink_domain_1_auto_routers_dest_nodes_in_0_flit_0_bits_virt_channel_id =
    router_sink_domain_auto_routers_source_nodes_out_0_flit_0_bits_virt_channel_id; // @[LazyModule.scala 355:16]
  assign router_sink_domain_1_auto_clock_in_clock = io_router_clocks_1_clock; // @[Nodes.scala 1212:84 NoC.scala 147:88]
  assign router_sink_domain_1_auto_clock_in_reset = io_router_clocks_1_reset; // @[Nodes.scala 1212:84 NoC.scala 147:88]
  assign router_sink_domain_2_auto_routers_ingress_nodes_in_flit_valid = io_ingress_2_flit_valid; // @[Nodes.scala 1212:84 NoC.scala 145:78]
  assign router_sink_domain_2_auto_routers_ingress_nodes_in_flit_bits_head = io_ingress_2_flit_bits_head; // @[Nodes.scala 1212:84 NoC.scala 145:78]
  assign router_sink_domain_2_auto_routers_ingress_nodes_in_flit_bits_tail = io_ingress_2_flit_bits_tail; // @[Nodes.scala 1212:84 NoC.scala 145:78]
  assign router_sink_domain_2_auto_routers_ingress_nodes_in_flit_bits_payload = io_ingress_2_flit_bits_payload; // @[Nodes.scala 1212:84 NoC.scala 145:78]
  assign router_sink_domain_2_auto_routers_ingress_nodes_in_flit_bits_egress_id = io_ingress_2_flit_bits_egress_id; // @[Nodes.scala 1212:84 NoC.scala 145:78]
  assign router_sink_domain_2_auto_routers_source_nodes_out_1_credit_return =
    router_sink_domain_3_auto_routers_dest_nodes_in_1_credit_return; // @[LazyModule.scala 355:16]
  assign router_sink_domain_2_auto_routers_source_nodes_out_1_vc_free =
    router_sink_domain_3_auto_routers_dest_nodes_in_1_vc_free; // @[LazyModule.scala 355:16]
  assign router_sink_domain_2_auto_routers_source_nodes_out_0_credit_return =
    router_sink_domain_1_auto_routers_dest_nodes_in_1_credit_return; // @[LazyModule.scala 353:16]
  assign router_sink_domain_2_auto_routers_source_nodes_out_0_vc_free =
    router_sink_domain_1_auto_routers_dest_nodes_in_1_vc_free; // @[LazyModule.scala 353:16]
  assign router_sink_domain_2_auto_routers_dest_nodes_in_1_flit_0_valid =
    router_sink_domain_3_auto_routers_source_nodes_out_1_flit_0_valid; // @[LazyModule.scala 353:16]
  assign router_sink_domain_2_auto_routers_dest_nodes_in_1_flit_0_bits_head =
    router_sink_domain_3_auto_routers_source_nodes_out_1_flit_0_bits_head; // @[LazyModule.scala 353:16]
  assign router_sink_domain_2_auto_routers_dest_nodes_in_1_flit_0_bits_tail =
    router_sink_domain_3_auto_routers_source_nodes_out_1_flit_0_bits_tail; // @[LazyModule.scala 353:16]
  assign router_sink_domain_2_auto_routers_dest_nodes_in_1_flit_0_bits_payload =
    router_sink_domain_3_auto_routers_source_nodes_out_1_flit_0_bits_payload; // @[LazyModule.scala 353:16]
  assign router_sink_domain_2_auto_routers_dest_nodes_in_1_flit_0_bits_flow_ingress_node =
    router_sink_domain_3_auto_routers_source_nodes_out_1_flit_0_bits_flow_ingress_node; // @[LazyModule.scala 353:16]
  assign router_sink_domain_2_auto_routers_dest_nodes_in_1_flit_0_bits_flow_egress_node =
    router_sink_domain_3_auto_routers_source_nodes_out_1_flit_0_bits_flow_egress_node; // @[LazyModule.scala 353:16]
  assign router_sink_domain_2_auto_routers_dest_nodes_in_1_flit_0_bits_virt_channel_id =
    router_sink_domain_3_auto_routers_source_nodes_out_1_flit_0_bits_virt_channel_id; // @[LazyModule.scala 353:16]
  assign router_sink_domain_2_auto_routers_dest_nodes_in_0_flit_0_valid =
    router_sink_domain_1_auto_routers_source_nodes_out_1_flit_0_valid; // @[LazyModule.scala 355:16]
  assign router_sink_domain_2_auto_routers_dest_nodes_in_0_flit_0_bits_head =
    router_sink_domain_1_auto_routers_source_nodes_out_1_flit_0_bits_head; // @[LazyModule.scala 355:16]
  assign router_sink_domain_2_auto_routers_dest_nodes_in_0_flit_0_bits_tail =
    router_sink_domain_1_auto_routers_source_nodes_out_1_flit_0_bits_tail; // @[LazyModule.scala 355:16]
  assign router_sink_domain_2_auto_routers_dest_nodes_in_0_flit_0_bits_payload =
    router_sink_domain_1_auto_routers_source_nodes_out_1_flit_0_bits_payload; // @[LazyModule.scala 355:16]
  assign router_sink_domain_2_auto_routers_dest_nodes_in_0_flit_0_bits_flow_ingress_node =
    router_sink_domain_1_auto_routers_source_nodes_out_1_flit_0_bits_flow_ingress_node; // @[LazyModule.scala 355:16]
  assign router_sink_domain_2_auto_routers_dest_nodes_in_0_flit_0_bits_flow_egress_node =
    router_sink_domain_1_auto_routers_source_nodes_out_1_flit_0_bits_flow_egress_node; // @[LazyModule.scala 355:16]
  assign router_sink_domain_2_auto_routers_dest_nodes_in_0_flit_0_bits_virt_channel_id =
    router_sink_domain_1_auto_routers_source_nodes_out_1_flit_0_bits_virt_channel_id; // @[LazyModule.scala 355:16]
  assign router_sink_domain_2_auto_clock_in_clock = io_router_clocks_2_clock; // @[Nodes.scala 1212:84 NoC.scala 147:88]
  assign router_sink_domain_2_auto_clock_in_reset = io_router_clocks_2_reset; // @[Nodes.scala 1212:84 NoC.scala 147:88]
  assign router_sink_domain_3_auto_routers_ingress_nodes_in_flit_valid = io_ingress_3_flit_valid; // @[Nodes.scala 1212:84 NoC.scala 145:78]
  assign router_sink_domain_3_auto_routers_ingress_nodes_in_flit_bits_head = io_ingress_3_flit_bits_head; // @[Nodes.scala 1212:84 NoC.scala 145:78]
  assign router_sink_domain_3_auto_routers_ingress_nodes_in_flit_bits_tail = io_ingress_3_flit_bits_tail; // @[Nodes.scala 1212:84 NoC.scala 145:78]
  assign router_sink_domain_3_auto_routers_ingress_nodes_in_flit_bits_payload = io_ingress_3_flit_bits_payload; // @[Nodes.scala 1212:84 NoC.scala 145:78]
  assign router_sink_domain_3_auto_routers_ingress_nodes_in_flit_bits_egress_id = io_ingress_3_flit_bits_egress_id; // @[Nodes.scala 1212:84 NoC.scala 145:78]
  assign router_sink_domain_3_auto_routers_source_nodes_out_1_credit_return =
    router_sink_domain_2_auto_routers_dest_nodes_in_1_credit_return; // @[LazyModule.scala 353:16]
  assign router_sink_domain_3_auto_routers_source_nodes_out_1_vc_free =
    router_sink_domain_2_auto_routers_dest_nodes_in_1_vc_free; // @[LazyModule.scala 353:16]
  assign router_sink_domain_3_auto_routers_source_nodes_out_0_credit_return =
    router_sink_domain_auto_routers_dest_nodes_in_1_credit_return; // @[LazyModule.scala 353:16]
  assign router_sink_domain_3_auto_routers_source_nodes_out_0_vc_free =
    router_sink_domain_auto_routers_dest_nodes_in_1_vc_free; // @[LazyModule.scala 353:16]
  assign router_sink_domain_3_auto_routers_dest_nodes_in_1_flit_0_valid =
    router_sink_domain_2_auto_routers_source_nodes_out_1_flit_0_valid; // @[LazyModule.scala 355:16]
  assign router_sink_domain_3_auto_routers_dest_nodes_in_1_flit_0_bits_head =
    router_sink_domain_2_auto_routers_source_nodes_out_1_flit_0_bits_head; // @[LazyModule.scala 355:16]
  assign router_sink_domain_3_auto_routers_dest_nodes_in_1_flit_0_bits_tail =
    router_sink_domain_2_auto_routers_source_nodes_out_1_flit_0_bits_tail; // @[LazyModule.scala 355:16]
  assign router_sink_domain_3_auto_routers_dest_nodes_in_1_flit_0_bits_payload =
    router_sink_domain_2_auto_routers_source_nodes_out_1_flit_0_bits_payload; // @[LazyModule.scala 355:16]
  assign router_sink_domain_3_auto_routers_dest_nodes_in_1_flit_0_bits_flow_ingress_node =
    router_sink_domain_2_auto_routers_source_nodes_out_1_flit_0_bits_flow_ingress_node; // @[LazyModule.scala 355:16]
  assign router_sink_domain_3_auto_routers_dest_nodes_in_1_flit_0_bits_flow_egress_node =
    router_sink_domain_2_auto_routers_source_nodes_out_1_flit_0_bits_flow_egress_node; // @[LazyModule.scala 355:16]
  assign router_sink_domain_3_auto_routers_dest_nodes_in_1_flit_0_bits_virt_channel_id =
    router_sink_domain_2_auto_routers_source_nodes_out_1_flit_0_bits_virt_channel_id; // @[LazyModule.scala 355:16]
  assign router_sink_domain_3_auto_routers_dest_nodes_in_0_flit_0_valid =
    router_sink_domain_auto_routers_source_nodes_out_1_flit_0_valid; // @[LazyModule.scala 355:16]
  assign router_sink_domain_3_auto_routers_dest_nodes_in_0_flit_0_bits_head =
    router_sink_domain_auto_routers_source_nodes_out_1_flit_0_bits_head; // @[LazyModule.scala 355:16]
  assign router_sink_domain_3_auto_routers_dest_nodes_in_0_flit_0_bits_tail =
    router_sink_domain_auto_routers_source_nodes_out_1_flit_0_bits_tail; // @[LazyModule.scala 355:16]
  assign router_sink_domain_3_auto_routers_dest_nodes_in_0_flit_0_bits_payload =
    router_sink_domain_auto_routers_source_nodes_out_1_flit_0_bits_payload; // @[LazyModule.scala 355:16]
  assign router_sink_domain_3_auto_routers_dest_nodes_in_0_flit_0_bits_flow_ingress_node =
    router_sink_domain_auto_routers_source_nodes_out_1_flit_0_bits_flow_ingress_node; // @[LazyModule.scala 355:16]
  assign router_sink_domain_3_auto_routers_dest_nodes_in_0_flit_0_bits_flow_egress_node =
    router_sink_domain_auto_routers_source_nodes_out_1_flit_0_bits_flow_egress_node; // @[LazyModule.scala 355:16]
  assign router_sink_domain_3_auto_routers_dest_nodes_in_0_flit_0_bits_virt_channel_id =
    router_sink_domain_auto_routers_source_nodes_out_1_flit_0_bits_virt_channel_id; // @[LazyModule.scala 355:16]
  assign router_sink_domain_3_auto_clock_in_clock = io_router_clocks_3_clock; // @[Nodes.scala 1212:84 NoC.scala 147:88]
  assign router_sink_domain_3_auto_clock_in_reset = io_router_clocks_3_reset; // @[Nodes.scala 1212:84 NoC.scala 147:88]
  always @(posedge clock) begin
    if (reset) begin // @[NoC.scala 160:37]
      debug_va_stall_ctr <= 64'h0; // @[NoC.scala 160:37]
    end else begin
      debug_va_stall_ctr <= _debug_va_stall_ctr_T_23; // @[NoC.scala 163:24]
    end
    if (reset) begin // @[NoC.scala 161:37]
      debug_sa_stall_ctr <= 64'h0; // @[NoC.scala 161:37]
    end else begin
      debug_sa_stall_ctr <= _debug_sa_stall_ctr_T_23; // @[NoC.scala 164:24]
    end
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
  _RAND_0 = {2{`RANDOM}};
  debug_va_stall_ctr = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  debug_sa_stall_ctr = _RAND_1[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule