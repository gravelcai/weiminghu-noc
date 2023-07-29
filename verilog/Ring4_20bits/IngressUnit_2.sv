module IngressUnit_2(
  input         clock,
  input         reset,
  output        io_router_req_valid,
  output [1:0]  io_router_req_bits_flow_ingress_node,
  output [1:0]  io_router_req_bits_flow_egress_node,
  input         io_router_resp_vc_sel_1_0,
  input         io_router_resp_vc_sel_1_1,
  input         io_router_resp_vc_sel_1_2,
  input         io_router_resp_vc_sel_1_3,
  input         io_router_resp_vc_sel_0_0,
  input         io_router_resp_vc_sel_0_1,
  input         io_router_resp_vc_sel_0_2,
  input         io_router_resp_vc_sel_0_3,
  input         io_vcalloc_req_ready,
  output        io_vcalloc_req_valid,
  output        io_vcalloc_req_bits_vc_sel_2_0,
  output        io_vcalloc_req_bits_vc_sel_1_0,
  output        io_vcalloc_req_bits_vc_sel_1_1,
  output        io_vcalloc_req_bits_vc_sel_1_2,
  output        io_vcalloc_req_bits_vc_sel_1_3,
  output        io_vcalloc_req_bits_vc_sel_0_0,
  output        io_vcalloc_req_bits_vc_sel_0_1,
  output        io_vcalloc_req_bits_vc_sel_0_2,
  output        io_vcalloc_req_bits_vc_sel_0_3,
  input         io_vcalloc_resp_vc_sel_2_0,
  input         io_vcalloc_resp_vc_sel_1_0,
  input         io_vcalloc_resp_vc_sel_1_1,
  input         io_vcalloc_resp_vc_sel_1_2,
  input         io_vcalloc_resp_vc_sel_1_3,
  input         io_vcalloc_resp_vc_sel_0_0,
  input         io_vcalloc_resp_vc_sel_0_1,
  input         io_vcalloc_resp_vc_sel_0_2,
  input         io_vcalloc_resp_vc_sel_0_3,
  input         io_out_credit_available_2_0,
  input         io_out_credit_available_1_0,
  input         io_out_credit_available_1_1,
  input         io_out_credit_available_1_2,
  input         io_out_credit_available_1_3,
  input         io_out_credit_available_0_0,
  input         io_out_credit_available_0_1,
  input         io_out_credit_available_0_2,
  input         io_out_credit_available_0_3,
  input         io_salloc_req_0_ready,
  output        io_salloc_req_0_valid,
  output        io_salloc_req_0_bits_vc_sel_2_0,
  output        io_salloc_req_0_bits_vc_sel_1_0,
  output        io_salloc_req_0_bits_vc_sel_1_1,
  output        io_salloc_req_0_bits_vc_sel_1_2,
  output        io_salloc_req_0_bits_vc_sel_1_3,
  output        io_salloc_req_0_bits_vc_sel_0_0,
  output        io_salloc_req_0_bits_vc_sel_0_1,
  output        io_salloc_req_0_bits_vc_sel_0_2,
  output        io_salloc_req_0_bits_vc_sel_0_3,
  output        io_salloc_req_0_bits_tail,
  output        io_out_0_valid,
  output        io_out_0_bits_flit_head,
  output        io_out_0_bits_flit_tail,
  output [19:0] io_out_0_bits_flit_payload,
  output [1:0]  io_out_0_bits_flit_flow_ingress_node,
  output [1:0]  io_out_0_bits_flit_flow_egress_node,
  output [1:0]  io_out_0_bits_out_virt_channel,
  output        io_in_ready,
  input         io_in_valid,
  input         io_in_bits_head,
  input         io_in_bits_tail,
  input  [19:0] io_in_bits_payload,
  input  [1:0]  io_in_bits_egress_id
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
`endif // RANDOMIZE_REG_INIT
  wire  route_buffer_clock; // @[IngressUnit.scala 26:28]
  wire  route_buffer_reset; // @[IngressUnit.scala 26:28]
  wire  route_buffer_io_enq_ready; // @[IngressUnit.scala 26:28]
  wire  route_buffer_io_enq_valid; // @[IngressUnit.scala 26:28]
  wire  route_buffer_io_enq_bits_head; // @[IngressUnit.scala 26:28]
  wire  route_buffer_io_enq_bits_tail; // @[IngressUnit.scala 26:28]
  wire [19:0] route_buffer_io_enq_bits_payload; // @[IngressUnit.scala 26:28]
  wire [1:0] route_buffer_io_enq_bits_flow_ingress_node; // @[IngressUnit.scala 26:28]
  wire [1:0] route_buffer_io_enq_bits_flow_egress_node; // @[IngressUnit.scala 26:28]
  wire  route_buffer_io_deq_ready; // @[IngressUnit.scala 26:28]
  wire  route_buffer_io_deq_valid; // @[IngressUnit.scala 26:28]
  wire  route_buffer_io_deq_bits_head; // @[IngressUnit.scala 26:28]
  wire  route_buffer_io_deq_bits_tail; // @[IngressUnit.scala 26:28]
  wire [19:0] route_buffer_io_deq_bits_payload; // @[IngressUnit.scala 26:28]
  wire [1:0] route_buffer_io_deq_bits_flow_ingress_node; // @[IngressUnit.scala 26:28]
  wire [1:0] route_buffer_io_deq_bits_flow_egress_node; // @[IngressUnit.scala 26:28]
  wire  route_q_clock; // @[IngressUnit.scala 27:23]
  wire  route_q_reset; // @[IngressUnit.scala 27:23]
  wire  route_q_io_enq_ready; // @[IngressUnit.scala 27:23]
  wire  route_q_io_enq_valid; // @[IngressUnit.scala 27:23]
  wire  route_q_io_enq_bits_vc_sel_2_0; // @[IngressUnit.scala 27:23]
  wire  route_q_io_enq_bits_vc_sel_1_0; // @[IngressUnit.scala 27:23]
  wire  route_q_io_enq_bits_vc_sel_1_1; // @[IngressUnit.scala 27:23]
  wire  route_q_io_enq_bits_vc_sel_1_2; // @[IngressUnit.scala 27:23]
  wire  route_q_io_enq_bits_vc_sel_1_3; // @[IngressUnit.scala 27:23]
  wire  route_q_io_enq_bits_vc_sel_0_0; // @[IngressUnit.scala 27:23]
  wire  route_q_io_enq_bits_vc_sel_0_1; // @[IngressUnit.scala 27:23]
  wire  route_q_io_enq_bits_vc_sel_0_2; // @[IngressUnit.scala 27:23]
  wire  route_q_io_enq_bits_vc_sel_0_3; // @[IngressUnit.scala 27:23]
  wire  route_q_io_deq_ready; // @[IngressUnit.scala 27:23]
  wire  route_q_io_deq_valid; // @[IngressUnit.scala 27:23]
  wire  route_q_io_deq_bits_vc_sel_2_0; // @[IngressUnit.scala 27:23]
  wire  route_q_io_deq_bits_vc_sel_1_0; // @[IngressUnit.scala 27:23]
  wire  route_q_io_deq_bits_vc_sel_1_1; // @[IngressUnit.scala 27:23]
  wire  route_q_io_deq_bits_vc_sel_1_2; // @[IngressUnit.scala 27:23]
  wire  route_q_io_deq_bits_vc_sel_1_3; // @[IngressUnit.scala 27:23]
  wire  route_q_io_deq_bits_vc_sel_0_0; // @[IngressUnit.scala 27:23]
  wire  route_q_io_deq_bits_vc_sel_0_1; // @[IngressUnit.scala 27:23]
  wire  route_q_io_deq_bits_vc_sel_0_2; // @[IngressUnit.scala 27:23]
  wire  route_q_io_deq_bits_vc_sel_0_3; // @[IngressUnit.scala 27:23]
  wire  vcalloc_buffer_clock; // @[IngressUnit.scala 75:30]
  wire  vcalloc_buffer_reset; // @[IngressUnit.scala 75:30]
  wire  vcalloc_buffer_io_enq_ready; // @[IngressUnit.scala 75:30]
  wire  vcalloc_buffer_io_enq_valid; // @[IngressUnit.scala 75:30]
  wire  vcalloc_buffer_io_enq_bits_head; // @[IngressUnit.scala 75:30]
  wire  vcalloc_buffer_io_enq_bits_tail; // @[IngressUnit.scala 75:30]
  wire [19:0] vcalloc_buffer_io_enq_bits_payload; // @[IngressUnit.scala 75:30]
  wire [1:0] vcalloc_buffer_io_enq_bits_flow_ingress_node; // @[IngressUnit.scala 75:30]
  wire [1:0] vcalloc_buffer_io_enq_bits_flow_egress_node; // @[IngressUnit.scala 75:30]
  wire  vcalloc_buffer_io_deq_ready; // @[IngressUnit.scala 75:30]
  wire  vcalloc_buffer_io_deq_valid; // @[IngressUnit.scala 75:30]
  wire  vcalloc_buffer_io_deq_bits_head; // @[IngressUnit.scala 75:30]
  wire  vcalloc_buffer_io_deq_bits_tail; // @[IngressUnit.scala 75:30]
  wire [19:0] vcalloc_buffer_io_deq_bits_payload; // @[IngressUnit.scala 75:30]
  wire [1:0] vcalloc_buffer_io_deq_bits_flow_ingress_node; // @[IngressUnit.scala 75:30]
  wire [1:0] vcalloc_buffer_io_deq_bits_flow_egress_node; // @[IngressUnit.scala 75:30]
  wire  vcalloc_q_clock; // @[IngressUnit.scala 76:25]
  wire  vcalloc_q_reset; // @[IngressUnit.scala 76:25]
  wire  vcalloc_q_io_enq_ready; // @[IngressUnit.scala 76:25]
  wire  vcalloc_q_io_enq_valid; // @[IngressUnit.scala 76:25]
  wire  vcalloc_q_io_enq_bits_vc_sel_2_0; // @[IngressUnit.scala 76:25]
  wire  vcalloc_q_io_enq_bits_vc_sel_1_0; // @[IngressUnit.scala 76:25]
  wire  vcalloc_q_io_enq_bits_vc_sel_1_1; // @[IngressUnit.scala 76:25]
  wire  vcalloc_q_io_enq_bits_vc_sel_1_2; // @[IngressUnit.scala 76:25]
  wire  vcalloc_q_io_enq_bits_vc_sel_1_3; // @[IngressUnit.scala 76:25]
  wire  vcalloc_q_io_enq_bits_vc_sel_0_0; // @[IngressUnit.scala 76:25]
  wire  vcalloc_q_io_enq_bits_vc_sel_0_1; // @[IngressUnit.scala 76:25]
  wire  vcalloc_q_io_enq_bits_vc_sel_0_2; // @[IngressUnit.scala 76:25]
  wire  vcalloc_q_io_enq_bits_vc_sel_0_3; // @[IngressUnit.scala 76:25]
  wire  vcalloc_q_io_deq_ready; // @[IngressUnit.scala 76:25]
  wire  vcalloc_q_io_deq_valid; // @[IngressUnit.scala 76:25]
  wire  vcalloc_q_io_deq_bits_vc_sel_2_0; // @[IngressUnit.scala 76:25]
  wire  vcalloc_q_io_deq_bits_vc_sel_1_0; // @[IngressUnit.scala 76:25]
  wire  vcalloc_q_io_deq_bits_vc_sel_1_1; // @[IngressUnit.scala 76:25]
  wire  vcalloc_q_io_deq_bits_vc_sel_1_2; // @[IngressUnit.scala 76:25]
  wire  vcalloc_q_io_deq_bits_vc_sel_1_3; // @[IngressUnit.scala 76:25]
  wire  vcalloc_q_io_deq_bits_vc_sel_0_0; // @[IngressUnit.scala 76:25]
  wire  vcalloc_q_io_deq_bits_vc_sel_0_1; // @[IngressUnit.scala 76:25]
  wire  vcalloc_q_io_deq_bits_vc_sel_0_2; // @[IngressUnit.scala 76:25]
  wire  vcalloc_q_io_deq_bits_vc_sel_0_3; // @[IngressUnit.scala 76:25]
  wire  _T = 2'h0 == io_in_bits_egress_id; // @[IngressUnit.scala 30:72]
  wire  _T_1 = 2'h1 == io_in_bits_egress_id; // @[IngressUnit.scala 30:72]
  wire  _T_2 = 2'h2 == io_in_bits_egress_id; // @[IngressUnit.scala 30:72]
  wire  _T_3 = 2'h3 == io_in_bits_egress_id; // @[IngressUnit.scala 30:72]
  wire  _T_6 = _T | _T_1 | _T_2 | _T_3; // @[package.scala 73:59]
  wire  _T_11 = ~reset; // @[IngressUnit.scala 30:9]
  wire [1:0] _route_buffer_io_enq_bits_flow_egress_node_T_6 = _T_2 ? 2'h2 : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _route_buffer_io_enq_bits_flow_egress_node_T_7 = _T_3 ? 2'h3 : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _GEN_11 = {{1'd0}, _T_1}; // @[Mux.scala 27:73]
  wire [1:0] _route_buffer_io_enq_bits_flow_egress_node_T_9 = _GEN_11 | _route_buffer_io_enq_bits_flow_egress_node_T_6; // @[Mux.scala 27:73]
  wire  at_dest = route_buffer_io_enq_bits_flow_egress_node == 2'h2; // @[IngressUnit.scala 55:59]
  wire  _T_13 = io_in_ready & io_in_valid; // @[Decoupled.scala 51:35]
  wire  _vcalloc_buffer_io_enq_valid_T = ~route_buffer_io_deq_bits_head; // @[IngressUnit.scala 88:30]
  wire  _vcalloc_buffer_io_enq_valid_T_1 = route_q_io_deq_valid | ~route_buffer_io_deq_bits_head; // @[IngressUnit.scala 88:27]
  wire  _vcalloc_buffer_io_enq_valid_T_2 = route_buffer_io_deq_valid & _vcalloc_buffer_io_enq_valid_T_1; // @[IngressUnit.scala 87:61]
  wire  _vcalloc_buffer_io_enq_valid_T_4 = io_vcalloc_req_ready | _vcalloc_buffer_io_enq_valid_T; // @[IngressUnit.scala 89:27]
  wire  _io_vcalloc_req_valid_T_1 = route_buffer_io_deq_valid & route_q_io_deq_valid & route_buffer_io_deq_bits_head; // @[IngressUnit.scala 91:78]
  wire  _route_buffer_io_deq_ready_T_2 = vcalloc_buffer_io_enq_ready & _vcalloc_buffer_io_enq_valid_T_1; // @[IngressUnit.scala 93:61]
  wire  _route_buffer_io_deq_ready_T_5 = _route_buffer_io_deq_ready_T_2 & _vcalloc_buffer_io_enq_valid_T_4; // @[IngressUnit.scala 94:37]
  wire  _route_buffer_io_deq_ready_T_7 = vcalloc_q_io_enq_ready | _vcalloc_buffer_io_enq_valid_T; // @[IngressUnit.scala 96:29]
  wire  _route_q_io_deq_ready_T = route_buffer_io_deq_ready & route_buffer_io_deq_valid; // @[Decoupled.scala 51:35]
  wire [3:0] c_lo = {vcalloc_q_io_deq_bits_vc_sel_0_3,vcalloc_q_io_deq_bits_vc_sel_0_2,vcalloc_q_io_deq_bits_vc_sel_0_1,
    vcalloc_q_io_deq_bits_vc_sel_0_0}; // @[IngressUnit.scala 107:41]
  wire [8:0] _c_T = {vcalloc_q_io_deq_bits_vc_sel_2_0,vcalloc_q_io_deq_bits_vc_sel_1_3,vcalloc_q_io_deq_bits_vc_sel_1_2,
    vcalloc_q_io_deq_bits_vc_sel_1_1,vcalloc_q_io_deq_bits_vc_sel_1_0,vcalloc_q_io_deq_bits_vc_sel_0_3,
    vcalloc_q_io_deq_bits_vc_sel_0_2,vcalloc_q_io_deq_bits_vc_sel_0_1,vcalloc_q_io_deq_bits_vc_sel_0_0}; // @[IngressUnit.scala 107:41]
  wire [8:0] _c_T_1 = {io_out_credit_available_2_0,io_out_credit_available_1_3,io_out_credit_available_1_2,
    io_out_credit_available_1_1,io_out_credit_available_1_0,io_out_credit_available_0_3,io_out_credit_available_0_2,
    io_out_credit_available_0_1,io_out_credit_available_0_0}; // @[IngressUnit.scala 107:74]
  wire [8:0] _c_T_2 = _c_T & _c_T_1; // @[IngressUnit.scala 107:48]
  wire  c = _c_T_2 != 9'h0; // @[IngressUnit.scala 107:82]
  wire  _vcalloc_q_io_deq_ready_T = vcalloc_buffer_io_deq_ready & vcalloc_buffer_io_deq_valid; // @[Decoupled.scala 51:35]
  reg  out_bundle_valid; // @[IngressUnit.scala 116:8]
  reg  out_bundle_bits_flit_head; // @[IngressUnit.scala 116:8]
  reg  out_bundle_bits_flit_tail; // @[IngressUnit.scala 116:8]
  reg [19:0] out_bundle_bits_flit_payload; // @[IngressUnit.scala 116:8]
  reg [1:0] out_bundle_bits_flit_flow_ingress_node; // @[IngressUnit.scala 116:8]
  reg [1:0] out_bundle_bits_flit_flow_egress_node; // @[IngressUnit.scala 116:8]
  reg [1:0] out_bundle_bits_out_virt_channel; // @[IngressUnit.scala 116:8]
  wire  out_channel_oh_0 = vcalloc_q_io_deq_bits_vc_sel_0_0 | vcalloc_q_io_deq_bits_vc_sel_0_1 |
    vcalloc_q_io_deq_bits_vc_sel_0_2 | vcalloc_q_io_deq_bits_vc_sel_0_3; // @[IngressUnit.scala 123:67]
  wire  out_channel_oh_1 = vcalloc_q_io_deq_bits_vc_sel_1_0 | vcalloc_q_io_deq_bits_vc_sel_1_1 |
    vcalloc_q_io_deq_bits_vc_sel_1_2 | vcalloc_q_io_deq_bits_vc_sel_1_3; // @[IngressUnit.scala 123:67]
  wire [1:0] out_bundle_bits_out_virt_channel_hi_1 = c_lo[3:2]; // @[OneHot.scala 30:18]
  wire [1:0] out_bundle_bits_out_virt_channel_lo_1 = c_lo[1:0]; // @[OneHot.scala 31:18]
  wire  _out_bundle_bits_out_virt_channel_T_1 = |out_bundle_bits_out_virt_channel_hi_1; // @[OneHot.scala 32:14]
  wire [1:0] _out_bundle_bits_out_virt_channel_T_2 = out_bundle_bits_out_virt_channel_hi_1 |
    out_bundle_bits_out_virt_channel_lo_1; // @[OneHot.scala 32:28]
  wire [1:0] _out_bundle_bits_out_virt_channel_T_4 = {_out_bundle_bits_out_virt_channel_T_1,
    _out_bundle_bits_out_virt_channel_T_2[1]}; // @[Cat.scala 33:92]
  wire [3:0] _out_bundle_bits_out_virt_channel_T_5 = {vcalloc_q_io_deq_bits_vc_sel_1_3,vcalloc_q_io_deq_bits_vc_sel_1_2,
    vcalloc_q_io_deq_bits_vc_sel_1_1,vcalloc_q_io_deq_bits_vc_sel_1_0}; // @[OneHot.scala 22:45]
  wire [1:0] out_bundle_bits_out_virt_channel_hi_3 = _out_bundle_bits_out_virt_channel_T_5[3:2]; // @[OneHot.scala 30:18]
  wire [1:0] out_bundle_bits_out_virt_channel_lo_3 = _out_bundle_bits_out_virt_channel_T_5[1:0]; // @[OneHot.scala 31:18]
  wire  _out_bundle_bits_out_virt_channel_T_6 = |out_bundle_bits_out_virt_channel_hi_3; // @[OneHot.scala 32:14]
  wire [1:0] _out_bundle_bits_out_virt_channel_T_7 = out_bundle_bits_out_virt_channel_hi_3 |
    out_bundle_bits_out_virt_channel_lo_3; // @[OneHot.scala 32:28]
  wire [1:0] _out_bundle_bits_out_virt_channel_T_9 = {_out_bundle_bits_out_virt_channel_T_6,
    _out_bundle_bits_out_virt_channel_T_7[1]}; // @[Cat.scala 33:92]
  wire [1:0] _out_bundle_bits_out_virt_channel_T_10 = out_channel_oh_0 ? _out_bundle_bits_out_virt_channel_T_4 : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _out_bundle_bits_out_virt_channel_T_11 = out_channel_oh_1 ? _out_bundle_bits_out_virt_channel_T_9 : 2'h0; // @[Mux.scala 27:73]
  Queue_8 route_buffer ( // @[IngressUnit.scala 26:28]
    .clock(route_buffer_clock),
    .reset(route_buffer_reset),
    .io_enq_ready(route_buffer_io_enq_ready),
    .io_enq_valid(route_buffer_io_enq_valid),
    .io_enq_bits_head(route_buffer_io_enq_bits_head),
    .io_enq_bits_tail(route_buffer_io_enq_bits_tail),
    .io_enq_bits_payload(route_buffer_io_enq_bits_payload),
    .io_enq_bits_flow_ingress_node(route_buffer_io_enq_bits_flow_ingress_node),
    .io_enq_bits_flow_egress_node(route_buffer_io_enq_bits_flow_egress_node),
    .io_deq_ready(route_buffer_io_deq_ready),
    .io_deq_valid(route_buffer_io_deq_valid),
    .io_deq_bits_head(route_buffer_io_deq_bits_head),
    .io_deq_bits_tail(route_buffer_io_deq_bits_tail),
    .io_deq_bits_payload(route_buffer_io_deq_bits_payload),
    .io_deq_bits_flow_ingress_node(route_buffer_io_deq_bits_flow_ingress_node),
    .io_deq_bits_flow_egress_node(route_buffer_io_deq_bits_flow_egress_node)
  );
  Queue_9 route_q ( // @[IngressUnit.scala 27:23]
    .clock(route_q_clock),
    .reset(route_q_reset),
    .io_enq_ready(route_q_io_enq_ready),
    .io_enq_valid(route_q_io_enq_valid),
    .io_enq_bits_vc_sel_2_0(route_q_io_enq_bits_vc_sel_2_0),
    .io_enq_bits_vc_sel_1_0(route_q_io_enq_bits_vc_sel_1_0),
    .io_enq_bits_vc_sel_1_1(route_q_io_enq_bits_vc_sel_1_1),
    .io_enq_bits_vc_sel_1_2(route_q_io_enq_bits_vc_sel_1_2),
    .io_enq_bits_vc_sel_1_3(route_q_io_enq_bits_vc_sel_1_3),
    .io_enq_bits_vc_sel_0_0(route_q_io_enq_bits_vc_sel_0_0),
    .io_enq_bits_vc_sel_0_1(route_q_io_enq_bits_vc_sel_0_1),
    .io_enq_bits_vc_sel_0_2(route_q_io_enq_bits_vc_sel_0_2),
    .io_enq_bits_vc_sel_0_3(route_q_io_enq_bits_vc_sel_0_3),
    .io_deq_ready(route_q_io_deq_ready),
    .io_deq_valid(route_q_io_deq_valid),
    .io_deq_bits_vc_sel_2_0(route_q_io_deq_bits_vc_sel_2_0),
    .io_deq_bits_vc_sel_1_0(route_q_io_deq_bits_vc_sel_1_0),
    .io_deq_bits_vc_sel_1_1(route_q_io_deq_bits_vc_sel_1_1),
    .io_deq_bits_vc_sel_1_2(route_q_io_deq_bits_vc_sel_1_2),
    .io_deq_bits_vc_sel_1_3(route_q_io_deq_bits_vc_sel_1_3),
    .io_deq_bits_vc_sel_0_0(route_q_io_deq_bits_vc_sel_0_0),
    .io_deq_bits_vc_sel_0_1(route_q_io_deq_bits_vc_sel_0_1),
    .io_deq_bits_vc_sel_0_2(route_q_io_deq_bits_vc_sel_0_2),
    .io_deq_bits_vc_sel_0_3(route_q_io_deq_bits_vc_sel_0_3)
  );
  Queue_8 vcalloc_buffer ( // @[IngressUnit.scala 75:30]
    .clock(vcalloc_buffer_clock),
    .reset(vcalloc_buffer_reset),
    .io_enq_ready(vcalloc_buffer_io_enq_ready),
    .io_enq_valid(vcalloc_buffer_io_enq_valid),
    .io_enq_bits_head(vcalloc_buffer_io_enq_bits_head),
    .io_enq_bits_tail(vcalloc_buffer_io_enq_bits_tail),
    .io_enq_bits_payload(vcalloc_buffer_io_enq_bits_payload),
    .io_enq_bits_flow_ingress_node(vcalloc_buffer_io_enq_bits_flow_ingress_node),
    .io_enq_bits_flow_egress_node(vcalloc_buffer_io_enq_bits_flow_egress_node),
    .io_deq_ready(vcalloc_buffer_io_deq_ready),
    .io_deq_valid(vcalloc_buffer_io_deq_valid),
    .io_deq_bits_head(vcalloc_buffer_io_deq_bits_head),
    .io_deq_bits_tail(vcalloc_buffer_io_deq_bits_tail),
    .io_deq_bits_payload(vcalloc_buffer_io_deq_bits_payload),
    .io_deq_bits_flow_ingress_node(vcalloc_buffer_io_deq_bits_flow_ingress_node),
    .io_deq_bits_flow_egress_node(vcalloc_buffer_io_deq_bits_flow_egress_node)
  );
  Queue_11 vcalloc_q ( // @[IngressUnit.scala 76:25]
    .clock(vcalloc_q_clock),
    .reset(vcalloc_q_reset),
    .io_enq_ready(vcalloc_q_io_enq_ready),
    .io_enq_valid(vcalloc_q_io_enq_valid),
    .io_enq_bits_vc_sel_2_0(vcalloc_q_io_enq_bits_vc_sel_2_0),
    .io_enq_bits_vc_sel_1_0(vcalloc_q_io_enq_bits_vc_sel_1_0),
    .io_enq_bits_vc_sel_1_1(vcalloc_q_io_enq_bits_vc_sel_1_1),
    .io_enq_bits_vc_sel_1_2(vcalloc_q_io_enq_bits_vc_sel_1_2),
    .io_enq_bits_vc_sel_1_3(vcalloc_q_io_enq_bits_vc_sel_1_3),
    .io_enq_bits_vc_sel_0_0(vcalloc_q_io_enq_bits_vc_sel_0_0),
    .io_enq_bits_vc_sel_0_1(vcalloc_q_io_enq_bits_vc_sel_0_1),
    .io_enq_bits_vc_sel_0_2(vcalloc_q_io_enq_bits_vc_sel_0_2),
    .io_enq_bits_vc_sel_0_3(vcalloc_q_io_enq_bits_vc_sel_0_3),
    .io_deq_ready(vcalloc_q_io_deq_ready),
    .io_deq_valid(vcalloc_q_io_deq_valid),
    .io_deq_bits_vc_sel_2_0(vcalloc_q_io_deq_bits_vc_sel_2_0),
    .io_deq_bits_vc_sel_1_0(vcalloc_q_io_deq_bits_vc_sel_1_0),
    .io_deq_bits_vc_sel_1_1(vcalloc_q_io_deq_bits_vc_sel_1_1),
    .io_deq_bits_vc_sel_1_2(vcalloc_q_io_deq_bits_vc_sel_1_2),
    .io_deq_bits_vc_sel_1_3(vcalloc_q_io_deq_bits_vc_sel_1_3),
    .io_deq_bits_vc_sel_0_0(vcalloc_q_io_deq_bits_vc_sel_0_0),
    .io_deq_bits_vc_sel_0_1(vcalloc_q_io_deq_bits_vc_sel_0_1),
    .io_deq_bits_vc_sel_0_2(vcalloc_q_io_deq_bits_vc_sel_0_2),
    .io_deq_bits_vc_sel_0_3(vcalloc_q_io_deq_bits_vc_sel_0_3)
  );
  assign io_router_req_valid = io_in_valid & route_buffer_io_enq_ready & io_in_bits_head & ~at_dest; // @[IngressUnit.scala 58:86]
  assign io_router_req_bits_flow_ingress_node = route_buffer_io_enq_bits_flow_ingress_node; // @[IngressUnit.scala 53:27]
  assign io_router_req_bits_flow_egress_node = route_buffer_io_enq_bits_flow_egress_node; // @[IngressUnit.scala 53:27]
  assign io_vcalloc_req_valid = _io_vcalloc_req_valid_T_1 & vcalloc_buffer_io_enq_ready & vcalloc_q_io_enq_ready; // @[IngressUnit.scala 92:41]
  assign io_vcalloc_req_bits_vc_sel_2_0 = route_q_io_deq_bits_vc_sel_2_0; // @[IngressUnit.scala 81:30]
  assign io_vcalloc_req_bits_vc_sel_1_0 = route_q_io_deq_bits_vc_sel_1_0; // @[IngressUnit.scala 81:30]
  assign io_vcalloc_req_bits_vc_sel_1_1 = route_q_io_deq_bits_vc_sel_1_1; // @[IngressUnit.scala 81:30]
  assign io_vcalloc_req_bits_vc_sel_1_2 = route_q_io_deq_bits_vc_sel_1_2; // @[IngressUnit.scala 81:30]
  assign io_vcalloc_req_bits_vc_sel_1_3 = route_q_io_deq_bits_vc_sel_1_3; // @[IngressUnit.scala 81:30]
  assign io_vcalloc_req_bits_vc_sel_0_0 = route_q_io_deq_bits_vc_sel_0_0; // @[IngressUnit.scala 81:30]
  assign io_vcalloc_req_bits_vc_sel_0_1 = route_q_io_deq_bits_vc_sel_0_1; // @[IngressUnit.scala 81:30]
  assign io_vcalloc_req_bits_vc_sel_0_2 = route_q_io_deq_bits_vc_sel_0_2; // @[IngressUnit.scala 81:30]
  assign io_vcalloc_req_bits_vc_sel_0_3 = route_q_io_deq_bits_vc_sel_0_3; // @[IngressUnit.scala 81:30]
  assign io_salloc_req_0_valid = vcalloc_buffer_io_deq_valid & vcalloc_q_io_deq_valid & c; // @[IngressUnit.scala 109:83]
  assign io_salloc_req_0_bits_vc_sel_2_0 = vcalloc_q_io_deq_bits_vc_sel_2_0; // @[IngressUnit.scala 104:32]
  assign io_salloc_req_0_bits_vc_sel_1_0 = vcalloc_q_io_deq_bits_vc_sel_1_0; // @[IngressUnit.scala 104:32]
  assign io_salloc_req_0_bits_vc_sel_1_1 = vcalloc_q_io_deq_bits_vc_sel_1_1; // @[IngressUnit.scala 104:32]
  assign io_salloc_req_0_bits_vc_sel_1_2 = vcalloc_q_io_deq_bits_vc_sel_1_2; // @[IngressUnit.scala 104:32]
  assign io_salloc_req_0_bits_vc_sel_1_3 = vcalloc_q_io_deq_bits_vc_sel_1_3; // @[IngressUnit.scala 104:32]
  assign io_salloc_req_0_bits_vc_sel_0_0 = vcalloc_q_io_deq_bits_vc_sel_0_0; // @[IngressUnit.scala 104:32]
  assign io_salloc_req_0_bits_vc_sel_0_1 = vcalloc_q_io_deq_bits_vc_sel_0_1; // @[IngressUnit.scala 104:32]
  assign io_salloc_req_0_bits_vc_sel_0_2 = vcalloc_q_io_deq_bits_vc_sel_0_2; // @[IngressUnit.scala 104:32]
  assign io_salloc_req_0_bits_vc_sel_0_3 = vcalloc_q_io_deq_bits_vc_sel_0_3; // @[IngressUnit.scala 104:32]
  assign io_salloc_req_0_bits_tail = vcalloc_buffer_io_deq_bits_tail; // @[IngressUnit.scala 105:30]
  assign io_out_0_valid = out_bundle_valid; // @[IngressUnit.scala 118:13]
  assign io_out_0_bits_flit_head = out_bundle_bits_flit_head; // @[IngressUnit.scala 118:13]
  assign io_out_0_bits_flit_tail = out_bundle_bits_flit_tail; // @[IngressUnit.scala 118:13]
  assign io_out_0_bits_flit_payload = out_bundle_bits_flit_payload; // @[IngressUnit.scala 118:13]
  assign io_out_0_bits_flit_flow_ingress_node = out_bundle_bits_flit_flow_ingress_node; // @[IngressUnit.scala 118:13]
  assign io_out_0_bits_flit_flow_egress_node = out_bundle_bits_flit_flow_egress_node; // @[IngressUnit.scala 118:13]
  assign io_out_0_bits_out_virt_channel = out_bundle_bits_out_virt_channel; // @[IngressUnit.scala 118:13]
  assign io_in_ready = route_buffer_io_enq_ready; // @[IngressUnit.scala 59:44]
  assign route_buffer_clock = clock;
  assign route_buffer_reset = reset;
  assign route_buffer_io_enq_valid = io_in_valid; // @[IngressUnit.scala 56:44]
  assign route_buffer_io_enq_bits_head = io_in_bits_head; // @[IngressUnit.scala 32:33]
  assign route_buffer_io_enq_bits_tail = io_in_bits_tail; // @[IngressUnit.scala 33:33]
  assign route_buffer_io_enq_bits_payload = io_in_bits_payload; // @[IngressUnit.scala 50:36]
  assign route_buffer_io_enq_bits_flow_ingress_node = 2'h2; // @[IngressUnit.scala 38:51]
  assign route_buffer_io_enq_bits_flow_egress_node = _route_buffer_io_enq_bits_flow_egress_node_T_9 |
    _route_buffer_io_enq_bits_flow_egress_node_T_7; // @[Mux.scala 27:73]
  assign route_buffer_io_deq_ready = _route_buffer_io_deq_ready_T_5 & _route_buffer_io_deq_ready_T_7; // @[IngressUnit.scala 95:37]
  assign route_q_clock = clock;
  assign route_q_reset = reset;
  assign route_q_io_enq_valid = _T_13 & io_in_bits_head & at_dest | io_router_req_valid; // @[IngressUnit.scala 62:24 64:53 65:26]
  assign route_q_io_enq_bits_vc_sel_2_0 = _T_13 & io_in_bits_head & at_dest & _T_2; // @[IngressUnit.scala 63:23 64:53]
  assign route_q_io_enq_bits_vc_sel_1_0 = _T_13 & io_in_bits_head & at_dest ? 1'h0 : io_router_resp_vc_sel_1_0; // @[IngressUnit.scala 63:23 64:53 66:52]
  assign route_q_io_enq_bits_vc_sel_1_1 = _T_13 & io_in_bits_head & at_dest ? 1'h0 : io_router_resp_vc_sel_1_1; // @[IngressUnit.scala 63:23 64:53 66:52]
  assign route_q_io_enq_bits_vc_sel_1_2 = _T_13 & io_in_bits_head & at_dest ? 1'h0 : io_router_resp_vc_sel_1_2; // @[IngressUnit.scala 63:23 64:53 66:52]
  assign route_q_io_enq_bits_vc_sel_1_3 = _T_13 & io_in_bits_head & at_dest ? 1'h0 : io_router_resp_vc_sel_1_3; // @[IngressUnit.scala 63:23 64:53 66:52]
  assign route_q_io_enq_bits_vc_sel_0_0 = _T_13 & io_in_bits_head & at_dest ? 1'h0 : io_router_resp_vc_sel_0_0; // @[IngressUnit.scala 63:23 64:53 66:52]
  assign route_q_io_enq_bits_vc_sel_0_1 = _T_13 & io_in_bits_head & at_dest ? 1'h0 : io_router_resp_vc_sel_0_1; // @[IngressUnit.scala 63:23 64:53 66:52]
  assign route_q_io_enq_bits_vc_sel_0_2 = _T_13 & io_in_bits_head & at_dest ? 1'h0 : io_router_resp_vc_sel_0_2; // @[IngressUnit.scala 63:23 64:53 66:52]
  assign route_q_io_enq_bits_vc_sel_0_3 = _T_13 & io_in_bits_head & at_dest ? 1'h0 : io_router_resp_vc_sel_0_3; // @[IngressUnit.scala 63:23 64:53 66:52]
  assign route_q_io_deq_ready = _route_q_io_deq_ready_T & route_buffer_io_deq_bits_tail; // @[IngressUnit.scala 97:55]
  assign vcalloc_buffer_clock = clock;
  assign vcalloc_buffer_reset = reset;
  assign vcalloc_buffer_io_enq_valid = _vcalloc_buffer_io_enq_valid_T_2 & _vcalloc_buffer_io_enq_valid_T_4; // @[IngressUnit.scala 88:37]
  assign vcalloc_buffer_io_enq_bits_head = route_buffer_io_deq_bits_head; // @[IngressUnit.scala 79:30]
  assign vcalloc_buffer_io_enq_bits_tail = route_buffer_io_deq_bits_tail; // @[IngressUnit.scala 79:30]
  assign vcalloc_buffer_io_enq_bits_payload = route_buffer_io_deq_bits_payload; // @[IngressUnit.scala 79:30]
  assign vcalloc_buffer_io_enq_bits_flow_ingress_node = route_buffer_io_deq_bits_flow_ingress_node; // @[IngressUnit.scala 79:30]
  assign vcalloc_buffer_io_enq_bits_flow_egress_node = route_buffer_io_deq_bits_flow_egress_node; // @[IngressUnit.scala 79:30]
  assign vcalloc_buffer_io_deq_ready = io_salloc_req_0_ready & vcalloc_q_io_deq_valid & c; // @[IngressUnit.scala 110:83]
  assign vcalloc_q_clock = clock;
  assign vcalloc_q_reset = reset;
  assign vcalloc_q_io_enq_valid = io_vcalloc_req_ready & io_vcalloc_req_valid; // @[Decoupled.scala 51:35]
  assign vcalloc_q_io_enq_bits_vc_sel_2_0 = io_vcalloc_resp_vc_sel_2_0; // @[IngressUnit.scala 101:25]
  assign vcalloc_q_io_enq_bits_vc_sel_1_0 = io_vcalloc_resp_vc_sel_1_0; // @[IngressUnit.scala 101:25]
  assign vcalloc_q_io_enq_bits_vc_sel_1_1 = io_vcalloc_resp_vc_sel_1_1; // @[IngressUnit.scala 101:25]
  assign vcalloc_q_io_enq_bits_vc_sel_1_2 = io_vcalloc_resp_vc_sel_1_2; // @[IngressUnit.scala 101:25]
  assign vcalloc_q_io_enq_bits_vc_sel_1_3 = io_vcalloc_resp_vc_sel_1_3; // @[IngressUnit.scala 101:25]
  assign vcalloc_q_io_enq_bits_vc_sel_0_0 = io_vcalloc_resp_vc_sel_0_0; // @[IngressUnit.scala 101:25]
  assign vcalloc_q_io_enq_bits_vc_sel_0_1 = io_vcalloc_resp_vc_sel_0_1; // @[IngressUnit.scala 101:25]
  assign vcalloc_q_io_enq_bits_vc_sel_0_2 = io_vcalloc_resp_vc_sel_0_2; // @[IngressUnit.scala 101:25]
  assign vcalloc_q_io_enq_bits_vc_sel_0_3 = io_vcalloc_resp_vc_sel_0_3; // @[IngressUnit.scala 101:25]
  assign vcalloc_q_io_deq_ready = vcalloc_buffer_io_deq_bits_tail & _vcalloc_q_io_deq_ready_T; // @[IngressUnit.scala 111:42]
  always @(posedge clock) begin
    out_bundle_valid <= vcalloc_buffer_io_deq_ready & vcalloc_buffer_io_deq_valid; // @[Decoupled.scala 51:35]
    out_bundle_bits_flit_head <= vcalloc_buffer_io_deq_bits_head; // @[IngressUnit.scala 121:24]
    out_bundle_bits_flit_tail <= vcalloc_buffer_io_deq_bits_tail; // @[IngressUnit.scala 121:24]
    out_bundle_bits_flit_payload <= vcalloc_buffer_io_deq_bits_payload; // @[IngressUnit.scala 121:24]
    out_bundle_bits_flit_flow_ingress_node <= vcalloc_buffer_io_deq_bits_flow_ingress_node; // @[IngressUnit.scala 121:24]
    out_bundle_bits_flit_flow_egress_node <= vcalloc_buffer_io_deq_bits_flow_egress_node; // @[IngressUnit.scala 121:24]
    out_bundle_bits_out_virt_channel <= _out_bundle_bits_out_virt_channel_T_10 | _out_bundle_bits_out_virt_channel_T_11; // @[Mux.scala 27:73]
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(~(io_in_valid & ~_T_6))) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at IngressUnit.scala:30 assert(!(io.in.valid && !cParam.possibleFlows.toSeq.map(_.egressId.U === io.in.bits.egress_id).orR))\n"
            ); // @[IngressUnit.scala 30:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_11 & ~(~(route_q_io_enq_valid & ~route_q_io_enq_ready))) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at IngressUnit.scala:73 assert(!(route_q.io.enq.valid && !route_q.io.enq.ready))\n"); // @[IngressUnit.scala 73:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_11 & ~(~(vcalloc_q_io_enq_valid & ~vcalloc_q_io_enq_ready))) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at IngressUnit.scala:102 assert(!(vcalloc_q.io.enq.valid && !vcalloc_q.io.enq.ready))\n"
            ); // @[IngressUnit.scala 102:9]
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
  out_bundle_valid = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  out_bundle_bits_flit_head = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  out_bundle_bits_flit_tail = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  out_bundle_bits_flit_payload = _RAND_3[19:0];
  _RAND_4 = {1{`RANDOM}};
  out_bundle_bits_flit_flow_ingress_node = _RAND_4[1:0];
  _RAND_5 = {1{`RANDOM}};
  out_bundle_bits_flit_flow_egress_node = _RAND_5[1:0];
  _RAND_6 = {1{`RANDOM}};
  out_bundle_bits_out_virt_channel = _RAND_6[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
  always @(posedge clock) begin
    //
    if (~reset) begin
      assert(~(io_in_valid & ~_T_6)); // @[IngressUnit.scala 30:9]
    end
    //
    if (_T_11) begin
      assert(~(route_q_io_enq_valid & ~route_q_io_enq_ready)); // @[IngressUnit.scala 73:9]
    end
    //
    if (_T_11) begin
      assert(~(vcalloc_q_io_enq_valid & ~vcalloc_q_io_enq_ready)); // @[IngressUnit.scala 102:9]
    end
  end
endmodule