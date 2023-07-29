module ClockSinkDomain_1(
  output [1:0]  auto_routers_debug_out_va_stall_0,
  output [1:0]  auto_routers_debug_out_va_stall_1,
  output [1:0]  auto_routers_debug_out_sa_stall_0,
  output [1:0]  auto_routers_debug_out_sa_stall_1,
  output        auto_routers_egress_nodes_out_flit_valid,
  output        auto_routers_egress_nodes_out_flit_bits_head,
  output        auto_routers_egress_nodes_out_flit_bits_tail,
  output [19:0] auto_routers_egress_nodes_out_flit_bits_payload,
  output [1:0]  auto_routers_egress_nodes_out_flit_bits_ingress_id,
  output        auto_routers_ingress_nodes_in_flit_ready,
  input         auto_routers_ingress_nodes_in_flit_valid,
  input         auto_routers_ingress_nodes_in_flit_bits_head,
  input         auto_routers_ingress_nodes_in_flit_bits_tail,
  input  [19:0] auto_routers_ingress_nodes_in_flit_bits_payload,
  input  [1:0]  auto_routers_ingress_nodes_in_flit_bits_egress_id,
  output        auto_routers_source_nodes_out_1_flit_0_valid,
  output        auto_routers_source_nodes_out_1_flit_0_bits_head,
  output        auto_routers_source_nodes_out_1_flit_0_bits_tail,
  output [19:0] auto_routers_source_nodes_out_1_flit_0_bits_payload,
  output [1:0]  auto_routers_source_nodes_out_1_flit_0_bits_flow_ingress_node,
  output [1:0]  auto_routers_source_nodes_out_1_flit_0_bits_flow_egress_node,
  output [1:0]  auto_routers_source_nodes_out_1_flit_0_bits_virt_channel_id,
  input  [3:0]  auto_routers_source_nodes_out_1_credit_return,
  input  [3:0]  auto_routers_source_nodes_out_1_vc_free,
  output        auto_routers_source_nodes_out_0_flit_0_valid,
  output        auto_routers_source_nodes_out_0_flit_0_bits_head,
  output        auto_routers_source_nodes_out_0_flit_0_bits_tail,
  output [19:0] auto_routers_source_nodes_out_0_flit_0_bits_payload,
  output [1:0]  auto_routers_source_nodes_out_0_flit_0_bits_flow_ingress_node,
  output [1:0]  auto_routers_source_nodes_out_0_flit_0_bits_flow_egress_node,
  output [1:0]  auto_routers_source_nodes_out_0_flit_0_bits_virt_channel_id,
  input  [3:0]  auto_routers_source_nodes_out_0_credit_return,
  input  [3:0]  auto_routers_source_nodes_out_0_vc_free,
  input         auto_routers_dest_nodes_in_1_flit_0_valid,
  input         auto_routers_dest_nodes_in_1_flit_0_bits_head,
  input         auto_routers_dest_nodes_in_1_flit_0_bits_tail,
  input  [19:0] auto_routers_dest_nodes_in_1_flit_0_bits_payload,
  input  [1:0]  auto_routers_dest_nodes_in_1_flit_0_bits_flow_ingress_node,
  input  [1:0]  auto_routers_dest_nodes_in_1_flit_0_bits_flow_egress_node,
  input  [1:0]  auto_routers_dest_nodes_in_1_flit_0_bits_virt_channel_id,
  output [3:0]  auto_routers_dest_nodes_in_1_credit_return,
  output [3:0]  auto_routers_dest_nodes_in_1_vc_free,
  input         auto_routers_dest_nodes_in_0_flit_0_valid,
  input         auto_routers_dest_nodes_in_0_flit_0_bits_head,
  input         auto_routers_dest_nodes_in_0_flit_0_bits_tail,
  input  [19:0] auto_routers_dest_nodes_in_0_flit_0_bits_payload,
  input  [1:0]  auto_routers_dest_nodes_in_0_flit_0_bits_flow_ingress_node,
  input  [1:0]  auto_routers_dest_nodes_in_0_flit_0_bits_flow_egress_node,
  input  [1:0]  auto_routers_dest_nodes_in_0_flit_0_bits_virt_channel_id,
  output [3:0]  auto_routers_dest_nodes_in_0_credit_return,
  output [3:0]  auto_routers_dest_nodes_in_0_vc_free,
  input         auto_clock_in_clock,
  input         auto_clock_in_reset
);
  wire  routers_clock; // @[NoC.scala 64:22]
  wire  routers_reset; // @[NoC.scala 64:22]
  wire [1:0] routers_auto_debug_out_va_stall_0; // @[NoC.scala 64:22]
  wire [1:0] routers_auto_debug_out_va_stall_1; // @[NoC.scala 64:22]
  wire [1:0] routers_auto_debug_out_sa_stall_0; // @[NoC.scala 64:22]
  wire [1:0] routers_auto_debug_out_sa_stall_1; // @[NoC.scala 64:22]
  wire  routers_auto_egress_nodes_out_flit_valid; // @[NoC.scala 64:22]
  wire  routers_auto_egress_nodes_out_flit_bits_head; // @[NoC.scala 64:22]
  wire  routers_auto_egress_nodes_out_flit_bits_tail; // @[NoC.scala 64:22]
  wire [19:0] routers_auto_egress_nodes_out_flit_bits_payload; // @[NoC.scala 64:22]
  wire [1:0] routers_auto_egress_nodes_out_flit_bits_ingress_id; // @[NoC.scala 64:22]
  wire  routers_auto_ingress_nodes_in_flit_ready; // @[NoC.scala 64:22]
  wire  routers_auto_ingress_nodes_in_flit_valid; // @[NoC.scala 64:22]
  wire  routers_auto_ingress_nodes_in_flit_bits_head; // @[NoC.scala 64:22]
  wire  routers_auto_ingress_nodes_in_flit_bits_tail; // @[NoC.scala 64:22]
  wire [19:0] routers_auto_ingress_nodes_in_flit_bits_payload; // @[NoC.scala 64:22]
  wire [1:0] routers_auto_ingress_nodes_in_flit_bits_egress_id; // @[NoC.scala 64:22]
  wire  routers_auto_source_nodes_out_1_flit_0_valid; // @[NoC.scala 64:22]
  wire  routers_auto_source_nodes_out_1_flit_0_bits_head; // @[NoC.scala 64:22]
  wire  routers_auto_source_nodes_out_1_flit_0_bits_tail; // @[NoC.scala 64:22]
  wire [19:0] routers_auto_source_nodes_out_1_flit_0_bits_payload; // @[NoC.scala 64:22]
  wire [1:0] routers_auto_source_nodes_out_1_flit_0_bits_flow_ingress_node; // @[NoC.scala 64:22]
  wire [1:0] routers_auto_source_nodes_out_1_flit_0_bits_flow_egress_node; // @[NoC.scala 64:22]
  wire [1:0] routers_auto_source_nodes_out_1_flit_0_bits_virt_channel_id; // @[NoC.scala 64:22]
  wire [3:0] routers_auto_source_nodes_out_1_credit_return; // @[NoC.scala 64:22]
  wire [3:0] routers_auto_source_nodes_out_1_vc_free; // @[NoC.scala 64:22]
  wire  routers_auto_source_nodes_out_0_flit_0_valid; // @[NoC.scala 64:22]
  wire  routers_auto_source_nodes_out_0_flit_0_bits_head; // @[NoC.scala 64:22]
  wire  routers_auto_source_nodes_out_0_flit_0_bits_tail; // @[NoC.scala 64:22]
  wire [19:0] routers_auto_source_nodes_out_0_flit_0_bits_payload; // @[NoC.scala 64:22]
  wire [1:0] routers_auto_source_nodes_out_0_flit_0_bits_flow_ingress_node; // @[NoC.scala 64:22]
  wire [1:0] routers_auto_source_nodes_out_0_flit_0_bits_flow_egress_node; // @[NoC.scala 64:22]
  wire [1:0] routers_auto_source_nodes_out_0_flit_0_bits_virt_channel_id; // @[NoC.scala 64:22]
  wire [3:0] routers_auto_source_nodes_out_0_credit_return; // @[NoC.scala 64:22]
  wire [3:0] routers_auto_source_nodes_out_0_vc_free; // @[NoC.scala 64:22]
  wire  routers_auto_dest_nodes_in_1_flit_0_valid; // @[NoC.scala 64:22]
  wire  routers_auto_dest_nodes_in_1_flit_0_bits_head; // @[NoC.scala 64:22]
  wire  routers_auto_dest_nodes_in_1_flit_0_bits_tail; // @[NoC.scala 64:22]
  wire [19:0] routers_auto_dest_nodes_in_1_flit_0_bits_payload; // @[NoC.scala 64:22]
  wire [1:0] routers_auto_dest_nodes_in_1_flit_0_bits_flow_ingress_node; // @[NoC.scala 64:22]
  wire [1:0] routers_auto_dest_nodes_in_1_flit_0_bits_flow_egress_node; // @[NoC.scala 64:22]
  wire [1:0] routers_auto_dest_nodes_in_1_flit_0_bits_virt_channel_id; // @[NoC.scala 64:22]
  wire [3:0] routers_auto_dest_nodes_in_1_credit_return; // @[NoC.scala 64:22]
  wire [3:0] routers_auto_dest_nodes_in_1_vc_free; // @[NoC.scala 64:22]
  wire  routers_auto_dest_nodes_in_0_flit_0_valid; // @[NoC.scala 64:22]
  wire  routers_auto_dest_nodes_in_0_flit_0_bits_head; // @[NoC.scala 64:22]
  wire  routers_auto_dest_nodes_in_0_flit_0_bits_tail; // @[NoC.scala 64:22]
  wire [19:0] routers_auto_dest_nodes_in_0_flit_0_bits_payload; // @[NoC.scala 64:22]
  wire [1:0] routers_auto_dest_nodes_in_0_flit_0_bits_flow_ingress_node; // @[NoC.scala 64:22]
  wire [1:0] routers_auto_dest_nodes_in_0_flit_0_bits_flow_egress_node; // @[NoC.scala 64:22]
  wire [1:0] routers_auto_dest_nodes_in_0_flit_0_bits_virt_channel_id; // @[NoC.scala 64:22]
  wire [3:0] routers_auto_dest_nodes_in_0_credit_return; // @[NoC.scala 64:22]
  wire [3:0] routers_auto_dest_nodes_in_0_vc_free; // @[NoC.scala 64:22]
  Router_1 routers ( // @[NoC.scala 64:22]
    .clock(routers_clock),
    .reset(routers_reset),
    .auto_debug_out_va_stall_0(routers_auto_debug_out_va_stall_0),
    .auto_debug_out_va_stall_1(routers_auto_debug_out_va_stall_1),
    .auto_debug_out_sa_stall_0(routers_auto_debug_out_sa_stall_0),
    .auto_debug_out_sa_stall_1(routers_auto_debug_out_sa_stall_1),
    .auto_egress_nodes_out_flit_valid(routers_auto_egress_nodes_out_flit_valid),
    .auto_egress_nodes_out_flit_bits_head(routers_auto_egress_nodes_out_flit_bits_head),
    .auto_egress_nodes_out_flit_bits_tail(routers_auto_egress_nodes_out_flit_bits_tail),
    .auto_egress_nodes_out_flit_bits_payload(routers_auto_egress_nodes_out_flit_bits_payload),
    .auto_egress_nodes_out_flit_bits_ingress_id(routers_auto_egress_nodes_out_flit_bits_ingress_id),
    .auto_ingress_nodes_in_flit_ready(routers_auto_ingress_nodes_in_flit_ready),
    .auto_ingress_nodes_in_flit_valid(routers_auto_ingress_nodes_in_flit_valid),
    .auto_ingress_nodes_in_flit_bits_head(routers_auto_ingress_nodes_in_flit_bits_head),
    .auto_ingress_nodes_in_flit_bits_tail(routers_auto_ingress_nodes_in_flit_bits_tail),
    .auto_ingress_nodes_in_flit_bits_payload(routers_auto_ingress_nodes_in_flit_bits_payload),
    .auto_ingress_nodes_in_flit_bits_egress_id(routers_auto_ingress_nodes_in_flit_bits_egress_id),
    .auto_source_nodes_out_1_flit_0_valid(routers_auto_source_nodes_out_1_flit_0_valid),
    .auto_source_nodes_out_1_flit_0_bits_head(routers_auto_source_nodes_out_1_flit_0_bits_head),
    .auto_source_nodes_out_1_flit_0_bits_tail(routers_auto_source_nodes_out_1_flit_0_bits_tail),
    .auto_source_nodes_out_1_flit_0_bits_payload(routers_auto_source_nodes_out_1_flit_0_bits_payload),
    .auto_source_nodes_out_1_flit_0_bits_flow_ingress_node(routers_auto_source_nodes_out_1_flit_0_bits_flow_ingress_node
      ),
    .auto_source_nodes_out_1_flit_0_bits_flow_egress_node(routers_auto_source_nodes_out_1_flit_0_bits_flow_egress_node),
    .auto_source_nodes_out_1_flit_0_bits_virt_channel_id(routers_auto_source_nodes_out_1_flit_0_bits_virt_channel_id),
    .auto_source_nodes_out_1_credit_return(routers_auto_source_nodes_out_1_credit_return),
    .auto_source_nodes_out_1_vc_free(routers_auto_source_nodes_out_1_vc_free),
    .auto_source_nodes_out_0_flit_0_valid(routers_auto_source_nodes_out_0_flit_0_valid),
    .auto_source_nodes_out_0_flit_0_bits_head(routers_auto_source_nodes_out_0_flit_0_bits_head),
    .auto_source_nodes_out_0_flit_0_bits_tail(routers_auto_source_nodes_out_0_flit_0_bits_tail),
    .auto_source_nodes_out_0_flit_0_bits_payload(routers_auto_source_nodes_out_0_flit_0_bits_payload),
    .auto_source_nodes_out_0_flit_0_bits_flow_ingress_node(routers_auto_source_nodes_out_0_flit_0_bits_flow_ingress_node
      ),
    .auto_source_nodes_out_0_flit_0_bits_flow_egress_node(routers_auto_source_nodes_out_0_flit_0_bits_flow_egress_node),
    .auto_source_nodes_out_0_flit_0_bits_virt_channel_id(routers_auto_source_nodes_out_0_flit_0_bits_virt_channel_id),
    .auto_source_nodes_out_0_credit_return(routers_auto_source_nodes_out_0_credit_return),
    .auto_source_nodes_out_0_vc_free(routers_auto_source_nodes_out_0_vc_free),
    .auto_dest_nodes_in_1_flit_0_valid(routers_auto_dest_nodes_in_1_flit_0_valid),
    .auto_dest_nodes_in_1_flit_0_bits_head(routers_auto_dest_nodes_in_1_flit_0_bits_head),
    .auto_dest_nodes_in_1_flit_0_bits_tail(routers_auto_dest_nodes_in_1_flit_0_bits_tail),
    .auto_dest_nodes_in_1_flit_0_bits_payload(routers_auto_dest_nodes_in_1_flit_0_bits_payload),
    .auto_dest_nodes_in_1_flit_0_bits_flow_ingress_node(routers_auto_dest_nodes_in_1_flit_0_bits_flow_ingress_node),
    .auto_dest_nodes_in_1_flit_0_bits_flow_egress_node(routers_auto_dest_nodes_in_1_flit_0_bits_flow_egress_node),
    .auto_dest_nodes_in_1_flit_0_bits_virt_channel_id(routers_auto_dest_nodes_in_1_flit_0_bits_virt_channel_id),
    .auto_dest_nodes_in_1_credit_return(routers_auto_dest_nodes_in_1_credit_return),
    .auto_dest_nodes_in_1_vc_free(routers_auto_dest_nodes_in_1_vc_free),
    .auto_dest_nodes_in_0_flit_0_valid(routers_auto_dest_nodes_in_0_flit_0_valid),
    .auto_dest_nodes_in_0_flit_0_bits_head(routers_auto_dest_nodes_in_0_flit_0_bits_head),
    .auto_dest_nodes_in_0_flit_0_bits_tail(routers_auto_dest_nodes_in_0_flit_0_bits_tail),
    .auto_dest_nodes_in_0_flit_0_bits_payload(routers_auto_dest_nodes_in_0_flit_0_bits_payload),
    .auto_dest_nodes_in_0_flit_0_bits_flow_ingress_node(routers_auto_dest_nodes_in_0_flit_0_bits_flow_ingress_node),
    .auto_dest_nodes_in_0_flit_0_bits_flow_egress_node(routers_auto_dest_nodes_in_0_flit_0_bits_flow_egress_node),
    .auto_dest_nodes_in_0_flit_0_bits_virt_channel_id(routers_auto_dest_nodes_in_0_flit_0_bits_virt_channel_id),
    .auto_dest_nodes_in_0_credit_return(routers_auto_dest_nodes_in_0_credit_return),
    .auto_dest_nodes_in_0_vc_free(routers_auto_dest_nodes_in_0_vc_free)
  );
  assign auto_routers_debug_out_va_stall_0 = routers_auto_debug_out_va_stall_0; // @[LazyModule.scala 368:12]
  assign auto_routers_debug_out_va_stall_1 = routers_auto_debug_out_va_stall_1; // @[LazyModule.scala 368:12]
  assign auto_routers_debug_out_sa_stall_0 = routers_auto_debug_out_sa_stall_0; // @[LazyModule.scala 368:12]
  assign auto_routers_debug_out_sa_stall_1 = routers_auto_debug_out_sa_stall_1; // @[LazyModule.scala 368:12]
  assign auto_routers_egress_nodes_out_flit_valid = routers_auto_egress_nodes_out_flit_valid; // @[LazyModule.scala 368:12]
  assign auto_routers_egress_nodes_out_flit_bits_head = routers_auto_egress_nodes_out_flit_bits_head; // @[LazyModule.scala 368:12]
  assign auto_routers_egress_nodes_out_flit_bits_tail = routers_auto_egress_nodes_out_flit_bits_tail; // @[LazyModule.scala 368:12]
  assign auto_routers_egress_nodes_out_flit_bits_payload = routers_auto_egress_nodes_out_flit_bits_payload; // @[LazyModule.scala 368:12]
  assign auto_routers_egress_nodes_out_flit_bits_ingress_id = routers_auto_egress_nodes_out_flit_bits_ingress_id; // @[LazyModule.scala 368:12]
  assign auto_routers_ingress_nodes_in_flit_ready = routers_auto_ingress_nodes_in_flit_ready; // @[LazyModule.scala 366:16]
  assign auto_routers_source_nodes_out_1_flit_0_valid = routers_auto_source_nodes_out_1_flit_0_valid; // @[LazyModule.scala 368:12]
  assign auto_routers_source_nodes_out_1_flit_0_bits_head = routers_auto_source_nodes_out_1_flit_0_bits_head; // @[LazyModule.scala 368:12]
  assign auto_routers_source_nodes_out_1_flit_0_bits_tail = routers_auto_source_nodes_out_1_flit_0_bits_tail; // @[LazyModule.scala 368:12]
  assign auto_routers_source_nodes_out_1_flit_0_bits_payload = routers_auto_source_nodes_out_1_flit_0_bits_payload; // @[LazyModule.scala 368:12]
  assign auto_routers_source_nodes_out_1_flit_0_bits_flow_ingress_node =
    routers_auto_source_nodes_out_1_flit_0_bits_flow_ingress_node; // @[LazyModule.scala 368:12]
  assign auto_routers_source_nodes_out_1_flit_0_bits_flow_egress_node =
    routers_auto_source_nodes_out_1_flit_0_bits_flow_egress_node; // @[LazyModule.scala 368:12]
  assign auto_routers_source_nodes_out_1_flit_0_bits_virt_channel_id =
    routers_auto_source_nodes_out_1_flit_0_bits_virt_channel_id; // @[LazyModule.scala 368:12]
  assign auto_routers_source_nodes_out_0_flit_0_valid = routers_auto_source_nodes_out_0_flit_0_valid; // @[LazyModule.scala 368:12]
  assign auto_routers_source_nodes_out_0_flit_0_bits_head = routers_auto_source_nodes_out_0_flit_0_bits_head; // @[LazyModule.scala 368:12]
  assign auto_routers_source_nodes_out_0_flit_0_bits_tail = routers_auto_source_nodes_out_0_flit_0_bits_tail; // @[LazyModule.scala 368:12]
  assign auto_routers_source_nodes_out_0_flit_0_bits_payload = routers_auto_source_nodes_out_0_flit_0_bits_payload; // @[LazyModule.scala 368:12]
  assign auto_routers_source_nodes_out_0_flit_0_bits_flow_ingress_node =
    routers_auto_source_nodes_out_0_flit_0_bits_flow_ingress_node; // @[LazyModule.scala 368:12]
  assign auto_routers_source_nodes_out_0_flit_0_bits_flow_egress_node =
    routers_auto_source_nodes_out_0_flit_0_bits_flow_egress_node; // @[LazyModule.scala 368:12]
  assign auto_routers_source_nodes_out_0_flit_0_bits_virt_channel_id =
    routers_auto_source_nodes_out_0_flit_0_bits_virt_channel_id; // @[LazyModule.scala 368:12]
  assign auto_routers_dest_nodes_in_1_credit_return = routers_auto_dest_nodes_in_1_credit_return; // @[LazyModule.scala 366:16]
  assign auto_routers_dest_nodes_in_1_vc_free = routers_auto_dest_nodes_in_1_vc_free; // @[LazyModule.scala 366:16]
  assign auto_routers_dest_nodes_in_0_credit_return = routers_auto_dest_nodes_in_0_credit_return; // @[LazyModule.scala 366:16]
  assign auto_routers_dest_nodes_in_0_vc_free = routers_auto_dest_nodes_in_0_vc_free; // @[LazyModule.scala 366:16]
  assign routers_clock = auto_clock_in_clock; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign routers_reset = auto_clock_in_reset; // @[Nodes.scala 1215:84 LazyModule.scala 366:16]
  assign routers_auto_ingress_nodes_in_flit_valid = auto_routers_ingress_nodes_in_flit_valid; // @[LazyModule.scala 366:16]
  assign routers_auto_ingress_nodes_in_flit_bits_head = auto_routers_ingress_nodes_in_flit_bits_head; // @[LazyModule.scala 366:16]
  assign routers_auto_ingress_nodes_in_flit_bits_tail = auto_routers_ingress_nodes_in_flit_bits_tail; // @[LazyModule.scala 366:16]
  assign routers_auto_ingress_nodes_in_flit_bits_payload = auto_routers_ingress_nodes_in_flit_bits_payload; // @[LazyModule.scala 366:16]
  assign routers_auto_ingress_nodes_in_flit_bits_egress_id = auto_routers_ingress_nodes_in_flit_bits_egress_id; // @[LazyModule.scala 366:16]
  assign routers_auto_source_nodes_out_1_credit_return = auto_routers_source_nodes_out_1_credit_return; // @[LazyModule.scala 368:12]
  assign routers_auto_source_nodes_out_1_vc_free = auto_routers_source_nodes_out_1_vc_free; // @[LazyModule.scala 368:12]
  assign routers_auto_source_nodes_out_0_credit_return = auto_routers_source_nodes_out_0_credit_return; // @[LazyModule.scala 368:12]
  assign routers_auto_source_nodes_out_0_vc_free = auto_routers_source_nodes_out_0_vc_free; // @[LazyModule.scala 368:12]
  assign routers_auto_dest_nodes_in_1_flit_0_valid = auto_routers_dest_nodes_in_1_flit_0_valid; // @[LazyModule.scala 366:16]
  assign routers_auto_dest_nodes_in_1_flit_0_bits_head = auto_routers_dest_nodes_in_1_flit_0_bits_head; // @[LazyModule.scala 366:16]
  assign routers_auto_dest_nodes_in_1_flit_0_bits_tail = auto_routers_dest_nodes_in_1_flit_0_bits_tail; // @[LazyModule.scala 366:16]
  assign routers_auto_dest_nodes_in_1_flit_0_bits_payload = auto_routers_dest_nodes_in_1_flit_0_bits_payload; // @[LazyModule.scala 366:16]
  assign routers_auto_dest_nodes_in_1_flit_0_bits_flow_ingress_node =
    auto_routers_dest_nodes_in_1_flit_0_bits_flow_ingress_node; // @[LazyModule.scala 366:16]
  assign routers_auto_dest_nodes_in_1_flit_0_bits_flow_egress_node =
    auto_routers_dest_nodes_in_1_flit_0_bits_flow_egress_node; // @[LazyModule.scala 366:16]
  assign routers_auto_dest_nodes_in_1_flit_0_bits_virt_channel_id =
    auto_routers_dest_nodes_in_1_flit_0_bits_virt_channel_id; // @[LazyModule.scala 366:16]
  assign routers_auto_dest_nodes_in_0_flit_0_valid = auto_routers_dest_nodes_in_0_flit_0_valid; // @[LazyModule.scala 366:16]
  assign routers_auto_dest_nodes_in_0_flit_0_bits_head = auto_routers_dest_nodes_in_0_flit_0_bits_head; // @[LazyModule.scala 366:16]
  assign routers_auto_dest_nodes_in_0_flit_0_bits_tail = auto_routers_dest_nodes_in_0_flit_0_bits_tail; // @[LazyModule.scala 366:16]
  assign routers_auto_dest_nodes_in_0_flit_0_bits_payload = auto_routers_dest_nodes_in_0_flit_0_bits_payload; // @[LazyModule.scala 366:16]
  assign routers_auto_dest_nodes_in_0_flit_0_bits_flow_ingress_node =
    auto_routers_dest_nodes_in_0_flit_0_bits_flow_ingress_node; // @[LazyModule.scala 366:16]
  assign routers_auto_dest_nodes_in_0_flit_0_bits_flow_egress_node =
    auto_routers_dest_nodes_in_0_flit_0_bits_flow_egress_node; // @[LazyModule.scala 366:16]
  assign routers_auto_dest_nodes_in_0_flit_0_bits_virt_channel_id =
    auto_routers_dest_nodes_in_0_flit_0_bits_virt_channel_id; // @[LazyModule.scala 366:16]
endmodule