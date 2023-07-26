module InputUnit_1(
  input         clock,
  input         reset,
  output        io_router_req_valid,
  output [1:0]  io_router_req_bits_src_virt_id,
  output [1:0]  io_router_req_bits_flow_ingress_node,
  output [1:0]  io_router_req_bits_flow_egress_node,
  input         io_router_resp_vc_sel_1_0,
  input         io_router_resp_vc_sel_1_1,
  input         io_router_resp_vc_sel_1_2,
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
  output        io_vcalloc_req_bits_vc_sel_0_0,
  output        io_vcalloc_req_bits_vc_sel_0_1,
  output        io_vcalloc_req_bits_vc_sel_0_2,
  output        io_vcalloc_req_bits_vc_sel_0_3,
  input         io_vcalloc_resp_vc_sel_2_0,
  input         io_vcalloc_resp_vc_sel_1_0,
  input         io_vcalloc_resp_vc_sel_1_1,
  input         io_vcalloc_resp_vc_sel_1_2,
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
  output [81:0] io_out_0_bits_flit_payload,
  output [1:0]  io_out_0_bits_flit_flow_ingress_node,
  output [1:0]  io_out_0_bits_flit_flow_egress_node,
  output [1:0]  io_out_0_bits_out_virt_channel,
  output [1:0]  io_debug_va_stall,
  output [1:0]  io_debug_sa_stall,
  input         io_in_flit_0_valid,
  input         io_in_flit_0_bits_head,
  input         io_in_flit_0_bits_tail,
  input  [81:0] io_in_flit_0_bits_payload,
  input  [1:0]  io_in_flit_0_bits_flow_ingress_node,
  input  [1:0]  io_in_flit_0_bits_flow_egress_node,
  input  [1:0]  io_in_flit_0_bits_virt_channel_id,
  output [3:0]  io_in_credit_return,
  output [3:0]  io_in_vc_free
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
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [31:0] _RAND_33;
  reg [31:0] _RAND_34;
  reg [31:0] _RAND_35;
  reg [31:0] _RAND_36;
  reg [31:0] _RAND_37;
  reg [95:0] _RAND_38;
  reg [31:0] _RAND_39;
  reg [31:0] _RAND_40;
`endif // RANDOMIZE_REG_INIT
  wire  input_buffer_clock; // @[InputUnit.scala 180:28]
  wire  input_buffer_reset; // @[InputUnit.scala 180:28]
  wire  input_buffer_io_enq_0_valid; // @[InputUnit.scala 180:28]
  wire  input_buffer_io_enq_0_bits_head; // @[InputUnit.scala 180:28]
  wire  input_buffer_io_enq_0_bits_tail; // @[InputUnit.scala 180:28]
  wire [81:0] input_buffer_io_enq_0_bits_payload; // @[InputUnit.scala 180:28]
  wire [1:0] input_buffer_io_enq_0_bits_virt_channel_id; // @[InputUnit.scala 180:28]
  wire  input_buffer_io_deq_0_ready; // @[InputUnit.scala 180:28]
  wire  input_buffer_io_deq_0_valid; // @[InputUnit.scala 180:28]
  wire  input_buffer_io_deq_0_bits_head; // @[InputUnit.scala 180:28]
  wire  input_buffer_io_deq_0_bits_tail; // @[InputUnit.scala 180:28]
  wire [81:0] input_buffer_io_deq_0_bits_payload; // @[InputUnit.scala 180:28]
  wire  input_buffer_io_deq_1_ready; // @[InputUnit.scala 180:28]
  wire  input_buffer_io_deq_1_valid; // @[InputUnit.scala 180:28]
  wire  input_buffer_io_deq_1_bits_head; // @[InputUnit.scala 180:28]
  wire  input_buffer_io_deq_1_bits_tail; // @[InputUnit.scala 180:28]
  wire [81:0] input_buffer_io_deq_1_bits_payload; // @[InputUnit.scala 180:28]
  wire  input_buffer_io_deq_2_ready; // @[InputUnit.scala 180:28]
  wire  input_buffer_io_deq_2_valid; // @[InputUnit.scala 180:28]
  wire  input_buffer_io_deq_2_bits_head; // @[InputUnit.scala 180:28]
  wire  input_buffer_io_deq_2_bits_tail; // @[InputUnit.scala 180:28]
  wire [81:0] input_buffer_io_deq_2_bits_payload; // @[InputUnit.scala 180:28]
  wire  input_buffer_io_deq_3_ready; // @[InputUnit.scala 180:28]
  wire  input_buffer_io_deq_3_valid; // @[InputUnit.scala 180:28]
  wire  input_buffer_io_deq_3_bits_head; // @[InputUnit.scala 180:28]
  wire  input_buffer_io_deq_3_bits_tail; // @[InputUnit.scala 180:28]
  wire [81:0] input_buffer_io_deq_3_bits_payload; // @[InputUnit.scala 180:28]
  wire  route_arbiter_io_in_0_valid; // @[InputUnit.scala 186:29]
  wire [1:0] route_arbiter_io_in_0_bits_flow_ingress_node; // @[InputUnit.scala 186:29]
  wire [1:0] route_arbiter_io_in_0_bits_flow_egress_node; // @[InputUnit.scala 186:29]
  wire  route_arbiter_io_in_1_ready; // @[InputUnit.scala 186:29]
  wire  route_arbiter_io_in_1_valid; // @[InputUnit.scala 186:29]
  wire [1:0] route_arbiter_io_in_1_bits_flow_ingress_node; // @[InputUnit.scala 186:29]
  wire [1:0] route_arbiter_io_in_1_bits_flow_egress_node; // @[InputUnit.scala 186:29]
  wire  route_arbiter_io_in_2_ready; // @[InputUnit.scala 186:29]
  wire  route_arbiter_io_in_2_valid; // @[InputUnit.scala 186:29]
  wire [1:0] route_arbiter_io_in_2_bits_flow_ingress_node; // @[InputUnit.scala 186:29]
  wire [1:0] route_arbiter_io_in_2_bits_flow_egress_node; // @[InputUnit.scala 186:29]
  wire  route_arbiter_io_in_3_ready; // @[InputUnit.scala 186:29]
  wire  route_arbiter_io_in_3_valid; // @[InputUnit.scala 186:29]
  wire [1:0] route_arbiter_io_in_3_bits_flow_ingress_node; // @[InputUnit.scala 186:29]
  wire [1:0] route_arbiter_io_in_3_bits_flow_egress_node; // @[InputUnit.scala 186:29]
  wire  route_arbiter_io_out_valid; // @[InputUnit.scala 186:29]
  wire [1:0] route_arbiter_io_out_bits_src_virt_id; // @[InputUnit.scala 186:29]
  wire [1:0] route_arbiter_io_out_bits_flow_ingress_node; // @[InputUnit.scala 186:29]
  wire [1:0] route_arbiter_io_out_bits_flow_egress_node; // @[InputUnit.scala 186:29]
  wire  salloc_arb_clock; // @[InputUnit.scala 279:26]
  wire  salloc_arb_reset; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_0_ready; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_0_valid; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_0_bits_vc_sel_2_0; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_0_bits_vc_sel_1_0; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_0_bits_vc_sel_0_0; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_0_bits_tail; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_1_ready; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_1_valid; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_1_bits_vc_sel_2_0; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_1_bits_vc_sel_1_0; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_1_bits_vc_sel_1_1; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_1_bits_vc_sel_0_0; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_1_bits_vc_sel_0_1; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_1_bits_tail; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_2_ready; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_2_valid; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_2_bits_vc_sel_2_0; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_2_bits_vc_sel_1_0; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_2_bits_vc_sel_1_1; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_2_bits_vc_sel_1_2; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_2_bits_vc_sel_0_0; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_2_bits_vc_sel_0_1; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_2_bits_vc_sel_0_2; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_2_bits_tail; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_3_ready; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_3_valid; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_3_bits_vc_sel_2_0; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_3_bits_vc_sel_1_0; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_3_bits_vc_sel_1_1; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_3_bits_vc_sel_1_2; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_3_bits_vc_sel_1_3; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_3_bits_vc_sel_0_0; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_3_bits_vc_sel_0_1; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_3_bits_vc_sel_0_2; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_3_bits_vc_sel_0_3; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_in_3_bits_tail; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_out_0_ready; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_out_0_valid; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_out_0_bits_vc_sel_2_0; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_out_0_bits_vc_sel_1_0; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_out_0_bits_vc_sel_1_1; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_out_0_bits_vc_sel_1_2; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_out_0_bits_vc_sel_1_3; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_out_0_bits_vc_sel_0_0; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_out_0_bits_vc_sel_0_1; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_out_0_bits_vc_sel_0_2; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_out_0_bits_vc_sel_0_3; // @[InputUnit.scala 279:26]
  wire  salloc_arb_io_out_0_bits_tail; // @[InputUnit.scala 279:26]
  wire [3:0] salloc_arb_io_chosen_oh_0; // @[InputUnit.scala 279:26]
  reg [2:0] states_0_g; // @[InputUnit.scala 191:19]
  reg  states_0_vc_sel_2_0; // @[InputUnit.scala 191:19]
  reg  states_0_vc_sel_1_0; // @[InputUnit.scala 191:19]
  reg  states_0_vc_sel_0_0; // @[InputUnit.scala 191:19]
  reg [1:0] states_0_flow_ingress_node; // @[InputUnit.scala 191:19]
  reg [1:0] states_0_flow_egress_node; // @[InputUnit.scala 191:19]
  reg [2:0] states_1_g; // @[InputUnit.scala 191:19]
  reg  states_1_vc_sel_2_0; // @[InputUnit.scala 191:19]
  reg  states_1_vc_sel_1_0; // @[InputUnit.scala 191:19]
  reg  states_1_vc_sel_0_0; // @[InputUnit.scala 191:19]
  reg  states_1_vc_sel_0_1; // @[InputUnit.scala 191:19]
  reg [1:0] states_1_flow_ingress_node; // @[InputUnit.scala 191:19]
  reg [1:0] states_1_flow_egress_node; // @[InputUnit.scala 191:19]
  reg [2:0] states_2_g; // @[InputUnit.scala 191:19]
  reg  states_2_vc_sel_2_0; // @[InputUnit.scala 191:19]
  reg  states_2_vc_sel_1_0; // @[InputUnit.scala 191:19]
  reg  states_2_vc_sel_1_1; // @[InputUnit.scala 191:19]
  reg  states_2_vc_sel_0_0; // @[InputUnit.scala 191:19]
  reg  states_2_vc_sel_0_1; // @[InputUnit.scala 191:19]
  reg  states_2_vc_sel_0_2; // @[InputUnit.scala 191:19]
  reg [1:0] states_2_flow_ingress_node; // @[InputUnit.scala 191:19]
  reg [1:0] states_2_flow_egress_node; // @[InputUnit.scala 191:19]
  reg [2:0] states_3_g; // @[InputUnit.scala 191:19]
  reg  states_3_vc_sel_2_0; // @[InputUnit.scala 191:19]
  reg  states_3_vc_sel_1_0; // @[InputUnit.scala 191:19]
  reg  states_3_vc_sel_1_1; // @[InputUnit.scala 191:19]
  reg  states_3_vc_sel_1_2; // @[InputUnit.scala 191:19]
  reg  states_3_vc_sel_0_0; // @[InputUnit.scala 191:19]
  reg  states_3_vc_sel_0_1; // @[InputUnit.scala 191:19]
  reg  states_3_vc_sel_0_2; // @[InputUnit.scala 191:19]
  reg  states_3_vc_sel_0_3; // @[InputUnit.scala 191:19]
  reg [1:0] states_3_flow_ingress_node; // @[InputUnit.scala 191:19]
  reg [1:0] states_3_flow_egress_node; // @[InputUnit.scala 191:19]
  wire  _T = io_in_flit_0_valid & io_in_flit_0_bits_head; // @[InputUnit.scala 194:32]
  wire  _T_3 = ~reset; // @[InputUnit.scala 196:13]
  wire [2:0] _GEN_1 = 2'h1 == io_in_flit_0_bits_virt_channel_id ? states_1_g : states_0_g; // @[InputUnit.scala 197:{27,27}]
  wire [2:0] _GEN_2 = 2'h2 == io_in_flit_0_bits_virt_channel_id ? states_2_g : _GEN_1; // @[InputUnit.scala 197:{27,27}]
  wire [2:0] _GEN_3 = 2'h3 == io_in_flit_0_bits_virt_channel_id ? states_3_g : _GEN_2; // @[InputUnit.scala 197:{27,27}]
  wire  at_dest = io_in_flit_0_bits_flow_egress_node == 2'h0; // @[InputUnit.scala 198:57]
  wire [2:0] _states_g_T = at_dest ? 3'h2 : 3'h1; // @[InputUnit.scala 199:26]
  wire [2:0] _GEN_4 = 2'h0 == io_in_flit_0_bits_virt_channel_id ? _states_g_T : states_0_g; // @[InputUnit.scala 191:19 199:{20,20}]
  wire [2:0] _GEN_5 = 2'h1 == io_in_flit_0_bits_virt_channel_id ? _states_g_T : states_1_g; // @[InputUnit.scala 191:19 199:{20,20}]
  wire [2:0] _GEN_6 = 2'h2 == io_in_flit_0_bits_virt_channel_id ? _states_g_T : states_2_g; // @[InputUnit.scala 191:19 199:{20,20}]
  wire [2:0] _GEN_7 = 2'h3 == io_in_flit_0_bits_virt_channel_id ? _states_g_T : states_3_g; // @[InputUnit.scala 191:19 199:{20,20}]
  wire  _GEN_8 = 2'h0 == io_in_flit_0_bits_virt_channel_id ? 1'h0 : states_0_vc_sel_0_0; // @[InputUnit.scala 191:19 200:{45,45}]
  wire  _GEN_9 = 2'h1 == io_in_flit_0_bits_virt_channel_id ? 1'h0 : states_1_vc_sel_0_0; // @[InputUnit.scala 191:19 200:{45,45}]
  wire  _GEN_10 = 2'h2 == io_in_flit_0_bits_virt_channel_id ? 1'h0 : states_2_vc_sel_0_0; // @[InputUnit.scala 191:19 200:{45,45}]
  wire  _GEN_11 = 2'h3 == io_in_flit_0_bits_virt_channel_id ? 1'h0 : states_3_vc_sel_0_0; // @[InputUnit.scala 191:19 200:{45,45}]
  wire  _GEN_13 = 2'h1 == io_in_flit_0_bits_virt_channel_id ? 1'h0 : states_1_vc_sel_0_1; // @[InputUnit.scala 191:19 200:{45,45}]
  wire  _GEN_14 = 2'h2 == io_in_flit_0_bits_virt_channel_id ? 1'h0 : states_2_vc_sel_0_1; // @[InputUnit.scala 191:19 200:{45,45}]
  wire  _GEN_15 = 2'h3 == io_in_flit_0_bits_virt_channel_id ? 1'h0 : states_3_vc_sel_0_1; // @[InputUnit.scala 191:19 200:{45,45}]
  wire  _GEN_18 = 2'h2 == io_in_flit_0_bits_virt_channel_id ? 1'h0 : states_2_vc_sel_0_2; // @[InputUnit.scala 191:19 200:{45,45}]
  wire  _GEN_19 = 2'h3 == io_in_flit_0_bits_virt_channel_id ? 1'h0 : states_3_vc_sel_0_2; // @[InputUnit.scala 191:19 200:{45,45}]
  wire  _GEN_23 = 2'h3 == io_in_flit_0_bits_virt_channel_id ? 1'h0 : states_3_vc_sel_0_3; // @[InputUnit.scala 191:19 200:{45,45}]
  wire  _GEN_24 = 2'h0 == io_in_flit_0_bits_virt_channel_id ? 1'h0 : states_0_vc_sel_1_0; // @[InputUnit.scala 191:19 200:{45,45}]
  wire  _GEN_25 = 2'h1 == io_in_flit_0_bits_virt_channel_id ? 1'h0 : states_1_vc_sel_1_0; // @[InputUnit.scala 191:19 200:{45,45}]
  wire  _GEN_26 = 2'h2 == io_in_flit_0_bits_virt_channel_id ? 1'h0 : states_2_vc_sel_1_0; // @[InputUnit.scala 191:19 200:{45,45}]
  wire  _GEN_27 = 2'h3 == io_in_flit_0_bits_virt_channel_id ? 1'h0 : states_3_vc_sel_1_0; // @[InputUnit.scala 191:19 200:{45,45}]
  wire  _GEN_30 = 2'h2 == io_in_flit_0_bits_virt_channel_id ? 1'h0 : states_2_vc_sel_1_1; // @[InputUnit.scala 191:19 200:{45,45}]
  wire  _GEN_31 = 2'h3 == io_in_flit_0_bits_virt_channel_id ? 1'h0 : states_3_vc_sel_1_1; // @[InputUnit.scala 191:19 200:{45,45}]
  wire  _GEN_35 = 2'h3 == io_in_flit_0_bits_virt_channel_id ? 1'h0 : states_3_vc_sel_1_2; // @[InputUnit.scala 191:19 200:{45,45}]
  wire  _GEN_40 = 2'h0 == io_in_flit_0_bits_virt_channel_id ? 1'h0 : states_0_vc_sel_2_0; // @[InputUnit.scala 191:19 200:{45,45}]
  wire  _GEN_41 = 2'h1 == io_in_flit_0_bits_virt_channel_id ? 1'h0 : states_1_vc_sel_2_0; // @[InputUnit.scala 191:19 200:{45,45}]
  wire  _GEN_42 = 2'h2 == io_in_flit_0_bits_virt_channel_id ? 1'h0 : states_2_vc_sel_2_0; // @[InputUnit.scala 191:19 200:{45,45}]
  wire  _GEN_43 = 2'h3 == io_in_flit_0_bits_virt_channel_id ? 1'h0 : states_3_vc_sel_2_0; // @[InputUnit.scala 191:19 200:{45,45}]
  wire  _GEN_44 = 2'h0 == io_in_flit_0_bits_virt_channel_id | _GEN_40; // @[InputUnit.scala 203:{44,44}]
  wire  _GEN_45 = 2'h1 == io_in_flit_0_bits_virt_channel_id | _GEN_41; // @[InputUnit.scala 203:{44,44}]
  wire  _GEN_46 = 2'h2 == io_in_flit_0_bits_virt_channel_id | _GEN_42; // @[InputUnit.scala 203:{44,44}]
  wire  _GEN_47 = 2'h3 == io_in_flit_0_bits_virt_channel_id | _GEN_43; // @[InputUnit.scala 203:{44,44}]
  wire [2:0] _GEN_72 = io_in_flit_0_valid & io_in_flit_0_bits_head ? _GEN_4 : states_0_g; // @[InputUnit.scala 191:19 194:60]
  wire [2:0] _GEN_73 = io_in_flit_0_valid & io_in_flit_0_bits_head ? _GEN_5 : states_1_g; // @[InputUnit.scala 191:19 194:60]
  wire [2:0] _GEN_74 = io_in_flit_0_valid & io_in_flit_0_bits_head ? _GEN_6 : states_2_g; // @[InputUnit.scala 191:19 194:60]
  wire [2:0] _GEN_75 = io_in_flit_0_valid & io_in_flit_0_bits_head ? _GEN_7 : states_3_g; // @[InputUnit.scala 191:19 194:60]
  wire  _GEN_76 = io_in_flit_0_valid & io_in_flit_0_bits_head ? _GEN_8 : states_0_vc_sel_0_0; // @[InputUnit.scala 191:19 194:60]
  wire  _GEN_77 = io_in_flit_0_valid & io_in_flit_0_bits_head ? _GEN_9 : states_1_vc_sel_0_0; // @[InputUnit.scala 191:19 194:60]
  wire  _GEN_78 = io_in_flit_0_valid & io_in_flit_0_bits_head ? _GEN_10 : states_2_vc_sel_0_0; // @[InputUnit.scala 191:19 194:60]
  wire  _GEN_79 = io_in_flit_0_valid & io_in_flit_0_bits_head ? _GEN_11 : states_3_vc_sel_0_0; // @[InputUnit.scala 191:19 194:60]
  wire  _GEN_81 = io_in_flit_0_valid & io_in_flit_0_bits_head ? _GEN_13 : states_1_vc_sel_0_1; // @[InputUnit.scala 191:19 194:60]
  wire  _GEN_82 = io_in_flit_0_valid & io_in_flit_0_bits_head ? _GEN_14 : states_2_vc_sel_0_1; // @[InputUnit.scala 191:19 194:60]
  wire  _GEN_83 = io_in_flit_0_valid & io_in_flit_0_bits_head ? _GEN_15 : states_3_vc_sel_0_1; // @[InputUnit.scala 191:19 194:60]
  wire  _GEN_86 = io_in_flit_0_valid & io_in_flit_0_bits_head ? _GEN_18 : states_2_vc_sel_0_2; // @[InputUnit.scala 191:19 194:60]
  wire  _GEN_87 = io_in_flit_0_valid & io_in_flit_0_bits_head ? _GEN_19 : states_3_vc_sel_0_2; // @[InputUnit.scala 191:19 194:60]
  wire  _GEN_91 = io_in_flit_0_valid & io_in_flit_0_bits_head ? _GEN_23 : states_3_vc_sel_0_3; // @[InputUnit.scala 191:19 194:60]
  wire  _GEN_92 = io_in_flit_0_valid & io_in_flit_0_bits_head ? _GEN_24 : states_0_vc_sel_1_0; // @[InputUnit.scala 191:19 194:60]
  wire  _GEN_93 = io_in_flit_0_valid & io_in_flit_0_bits_head ? _GEN_25 : states_1_vc_sel_1_0; // @[InputUnit.scala 191:19 194:60]
  wire  _GEN_94 = io_in_flit_0_valid & io_in_flit_0_bits_head ? _GEN_26 : states_2_vc_sel_1_0; // @[InputUnit.scala 191:19 194:60]
  wire  _GEN_95 = io_in_flit_0_valid & io_in_flit_0_bits_head ? _GEN_27 : states_3_vc_sel_1_0; // @[InputUnit.scala 191:19 194:60]
  wire  _GEN_98 = io_in_flit_0_valid & io_in_flit_0_bits_head ? _GEN_30 : states_2_vc_sel_1_1; // @[InputUnit.scala 191:19 194:60]
  wire  _GEN_99 = io_in_flit_0_valid & io_in_flit_0_bits_head ? _GEN_31 : states_3_vc_sel_1_1; // @[InputUnit.scala 191:19 194:60]
  wire  _GEN_103 = io_in_flit_0_valid & io_in_flit_0_bits_head ? _GEN_35 : states_3_vc_sel_1_2; // @[InputUnit.scala 191:19 194:60]
  wire  _GEN_108 = io_in_flit_0_valid & io_in_flit_0_bits_head ? _GEN_44 : states_0_vc_sel_2_0; // @[InputUnit.scala 191:19 194:60]
  wire  _GEN_109 = io_in_flit_0_valid & io_in_flit_0_bits_head ? _GEN_45 : states_1_vc_sel_2_0; // @[InputUnit.scala 191:19 194:60]
  wire  _GEN_110 = io_in_flit_0_valid & io_in_flit_0_bits_head ? _GEN_46 : states_2_vc_sel_2_0; // @[InputUnit.scala 191:19 194:60]
  wire  _GEN_111 = io_in_flit_0_valid & io_in_flit_0_bits_head ? _GEN_47 : states_3_vc_sel_2_0; // @[InputUnit.scala 191:19 194:60]
  wire  _T_10 = route_arbiter_io_in_0_valid; // @[Decoupled.scala 51:35]
  wire [2:0] _GEN_132 = _T_10 ? 3'h2 : _GEN_72; // @[InputUnit.scala 215:{23,29}]
  wire  _T_11 = route_arbiter_io_in_1_ready & route_arbiter_io_in_1_valid; // @[Decoupled.scala 51:35]
  wire [2:0] _GEN_133 = _T_11 ? 3'h2 : _GEN_73; // @[InputUnit.scala 215:{23,29}]
  wire  _T_12 = route_arbiter_io_in_2_ready & route_arbiter_io_in_2_valid; // @[Decoupled.scala 51:35]
  wire [2:0] _GEN_134 = _T_12 ? 3'h2 : _GEN_74; // @[InputUnit.scala 215:{23,29}]
  wire  _T_13 = route_arbiter_io_in_3_ready & route_arbiter_io_in_3_valid; // @[Decoupled.scala 51:35]
  wire [2:0] _GEN_135 = _T_13 ? 3'h2 : _GEN_75; // @[InputUnit.scala 215:{23,29}]
  wire [2:0] _GEN_137 = 2'h1 == io_router_req_bits_src_virt_id ? states_1_g : states_0_g; // @[InputUnit.scala 224:{25,25}]
  wire [2:0] _GEN_138 = 2'h2 == io_router_req_bits_src_virt_id ? states_2_g : _GEN_137; // @[InputUnit.scala 224:{25,25}]
  wire [2:0] _GEN_139 = 2'h3 == io_router_req_bits_src_virt_id ? states_3_g : _GEN_138; // @[InputUnit.scala 224:{25,25}]
  wire [2:0] _GEN_140 = 2'h0 == io_router_req_bits_src_virt_id ? 3'h2 : _GEN_132; // @[InputUnit.scala 225:{18,18}]
  wire [2:0] _GEN_141 = 2'h1 == io_router_req_bits_src_virt_id ? 3'h2 : _GEN_133; // @[InputUnit.scala 225:{18,18}]
  wire [2:0] _GEN_142 = 2'h2 == io_router_req_bits_src_virt_id ? 3'h2 : _GEN_134; // @[InputUnit.scala 225:{18,18}]
  wire [2:0] _GEN_143 = 2'h3 == io_router_req_bits_src_virt_id ? 3'h2 : _GEN_135; // @[InputUnit.scala 225:{18,18}]
  wire  _GEN_144 = 2'h0 == io_router_req_bits_src_virt_id ? 1'h0 : _GEN_108; // @[InputUnit.scala 227:25 228:26]
  wire  _GEN_145 = 2'h0 == io_router_req_bits_src_virt_id ? io_router_resp_vc_sel_1_0 : _GEN_92; // @[InputUnit.scala 227:25 228:26]
  wire  _GEN_149 = 2'h0 == io_router_req_bits_src_virt_id ? io_router_resp_vc_sel_0_0 : _GEN_76; // @[InputUnit.scala 227:25 228:26]
  wire  _GEN_153 = 2'h1 == io_router_req_bits_src_virt_id ? 1'h0 : _GEN_109; // @[InputUnit.scala 227:25 228:26]
  wire  _GEN_154 = 2'h1 == io_router_req_bits_src_virt_id ? io_router_resp_vc_sel_1_0 : _GEN_93; // @[InputUnit.scala 227:25 228:26]
  wire  _GEN_158 = 2'h1 == io_router_req_bits_src_virt_id ? io_router_resp_vc_sel_0_0 : _GEN_77; // @[InputUnit.scala 227:25 228:26]
  wire  _GEN_159 = 2'h1 == io_router_req_bits_src_virt_id ? io_router_resp_vc_sel_0_1 : _GEN_81; // @[InputUnit.scala 227:25 228:26]
  wire  _GEN_162 = 2'h2 == io_router_req_bits_src_virt_id ? 1'h0 : _GEN_110; // @[InputUnit.scala 227:25 228:26]
  wire  _GEN_163 = 2'h2 == io_router_req_bits_src_virt_id ? io_router_resp_vc_sel_1_0 : _GEN_94; // @[InputUnit.scala 227:25 228:26]
  wire  _GEN_164 = 2'h2 == io_router_req_bits_src_virt_id ? io_router_resp_vc_sel_1_1 : _GEN_98; // @[InputUnit.scala 227:25 228:26]
  wire  _GEN_167 = 2'h2 == io_router_req_bits_src_virt_id ? io_router_resp_vc_sel_0_0 : _GEN_78; // @[InputUnit.scala 227:25 228:26]
  wire  _GEN_168 = 2'h2 == io_router_req_bits_src_virt_id ? io_router_resp_vc_sel_0_1 : _GEN_82; // @[InputUnit.scala 227:25 228:26]
  wire  _GEN_169 = 2'h2 == io_router_req_bits_src_virt_id ? io_router_resp_vc_sel_0_2 : _GEN_86; // @[InputUnit.scala 227:25 228:26]
  wire  _GEN_171 = 2'h3 == io_router_req_bits_src_virt_id ? 1'h0 : _GEN_111; // @[InputUnit.scala 227:25 228:26]
  wire  _GEN_172 = 2'h3 == io_router_req_bits_src_virt_id ? io_router_resp_vc_sel_1_0 : _GEN_95; // @[InputUnit.scala 227:25 228:26]
  wire  _GEN_173 = 2'h3 == io_router_req_bits_src_virt_id ? io_router_resp_vc_sel_1_1 : _GEN_99; // @[InputUnit.scala 227:25 228:26]
  wire  _GEN_174 = 2'h3 == io_router_req_bits_src_virt_id ? io_router_resp_vc_sel_1_2 : _GEN_103; // @[InputUnit.scala 227:25 228:26]
  wire  _GEN_176 = 2'h3 == io_router_req_bits_src_virt_id ? io_router_resp_vc_sel_0_0 : _GEN_79; // @[InputUnit.scala 227:25 228:26]
  wire  _GEN_177 = 2'h3 == io_router_req_bits_src_virt_id ? io_router_resp_vc_sel_0_1 : _GEN_83; // @[InputUnit.scala 227:25 228:26]
  wire  _GEN_178 = 2'h3 == io_router_req_bits_src_virt_id ? io_router_resp_vc_sel_0_2 : _GEN_87; // @[InputUnit.scala 227:25 228:26]
  wire  _GEN_179 = 2'h3 == io_router_req_bits_src_virt_id ? io_router_resp_vc_sel_0_3 : _GEN_91; // @[InputUnit.scala 227:25 228:26]
  wire [2:0] _GEN_180 = io_router_req_valid ? _GEN_140 : _GEN_132; // @[InputUnit.scala 222:31]
  wire [2:0] _GEN_181 = io_router_req_valid ? _GEN_141 : _GEN_133; // @[InputUnit.scala 222:31]
  wire [2:0] _GEN_182 = io_router_req_valid ? _GEN_142 : _GEN_134; // @[InputUnit.scala 222:31]
  wire [2:0] _GEN_183 = io_router_req_valid ? _GEN_143 : _GEN_135; // @[InputUnit.scala 222:31]
  wire  _GEN_184 = io_router_req_valid ? _GEN_144 : _GEN_108; // @[InputUnit.scala 222:31]
  wire  _GEN_185 = io_router_req_valid ? _GEN_145 : _GEN_92; // @[InputUnit.scala 222:31]
  wire  _GEN_189 = io_router_req_valid ? _GEN_149 : _GEN_76; // @[InputUnit.scala 222:31]
  wire  _GEN_193 = io_router_req_valid ? _GEN_153 : _GEN_109; // @[InputUnit.scala 222:31]
  wire  _GEN_194 = io_router_req_valid ? _GEN_154 : _GEN_93; // @[InputUnit.scala 222:31]
  wire  _GEN_198 = io_router_req_valid ? _GEN_158 : _GEN_77; // @[InputUnit.scala 222:31]
  wire  _GEN_199 = io_router_req_valid ? _GEN_159 : _GEN_81; // @[InputUnit.scala 222:31]
  wire  _GEN_202 = io_router_req_valid ? _GEN_162 : _GEN_110; // @[InputUnit.scala 222:31]
  wire  _GEN_203 = io_router_req_valid ? _GEN_163 : _GEN_94; // @[InputUnit.scala 222:31]
  wire  _GEN_204 = io_router_req_valid ? _GEN_164 : _GEN_98; // @[InputUnit.scala 222:31]
  wire  _GEN_207 = io_router_req_valid ? _GEN_167 : _GEN_78; // @[InputUnit.scala 222:31]
  wire  _GEN_208 = io_router_req_valid ? _GEN_168 : _GEN_82; // @[InputUnit.scala 222:31]
  wire  _GEN_209 = io_router_req_valid ? _GEN_169 : _GEN_86; // @[InputUnit.scala 222:31]
  wire  _GEN_211 = io_router_req_valid ? _GEN_171 : _GEN_111; // @[InputUnit.scala 222:31]
  wire  _GEN_212 = io_router_req_valid ? _GEN_172 : _GEN_95; // @[InputUnit.scala 222:31]
  wire  _GEN_213 = io_router_req_valid ? _GEN_173 : _GEN_99; // @[InputUnit.scala 222:31]
  wire  _GEN_214 = io_router_req_valid ? _GEN_174 : _GEN_103; // @[InputUnit.scala 222:31]
  wire  _GEN_216 = io_router_req_valid ? _GEN_176 : _GEN_79; // @[InputUnit.scala 222:31]
  wire  _GEN_217 = io_router_req_valid ? _GEN_177 : _GEN_83; // @[InputUnit.scala 222:31]
  wire  _GEN_218 = io_router_req_valid ? _GEN_178 : _GEN_87; // @[InputUnit.scala 222:31]
  wire  _GEN_219 = io_router_req_valid ? _GEN_179 : _GEN_91; // @[InputUnit.scala 222:31]
  reg [3:0] mask; // @[InputUnit.scala 233:21]
  wire  vcalloc_vals_1 = states_1_g == 3'h2; // @[InputUnit.scala 249:32]
  wire  vcalloc_vals_0 = states_0_g == 3'h2; // @[InputUnit.scala 249:32]
  wire  vcalloc_vals_3 = states_3_g == 3'h2; // @[InputUnit.scala 249:32]
  wire  vcalloc_vals_2 = states_2_g == 3'h2; // @[InputUnit.scala 249:32]
  wire [3:0] _vcalloc_filter_T = {vcalloc_vals_3,vcalloc_vals_2,vcalloc_vals_1,vcalloc_vals_0}; // @[InputUnit.scala 236:59]
  wire [3:0] _vcalloc_filter_T_2 = ~mask; // @[InputUnit.scala 236:89]
  wire [3:0] _vcalloc_filter_T_3 = _vcalloc_filter_T & _vcalloc_filter_T_2; // @[InputUnit.scala 236:87]
  wire [7:0] _vcalloc_filter_T_4 = {vcalloc_vals_3,vcalloc_vals_2,vcalloc_vals_1,vcalloc_vals_0,_vcalloc_filter_T_3}; // @[Cat.scala 33:92]
  wire [7:0] _vcalloc_filter_T_13 = _vcalloc_filter_T_4[7] ? 8'h80 : 8'h0; // @[Mux.scala 47:70]
  wire [7:0] _vcalloc_filter_T_14 = _vcalloc_filter_T_4[6] ? 8'h40 : _vcalloc_filter_T_13; // @[Mux.scala 47:70]
  wire [7:0] _vcalloc_filter_T_15 = _vcalloc_filter_T_4[5] ? 8'h20 : _vcalloc_filter_T_14; // @[Mux.scala 47:70]
  wire [7:0] _vcalloc_filter_T_16 = _vcalloc_filter_T_4[4] ? 8'h10 : _vcalloc_filter_T_15; // @[Mux.scala 47:70]
  wire [7:0] _vcalloc_filter_T_17 = _vcalloc_filter_T_4[3] ? 8'h8 : _vcalloc_filter_T_16; // @[Mux.scala 47:70]
  wire [7:0] _vcalloc_filter_T_18 = _vcalloc_filter_T_4[2] ? 8'h4 : _vcalloc_filter_T_17; // @[Mux.scala 47:70]
  wire [7:0] _vcalloc_filter_T_19 = _vcalloc_filter_T_4[1] ? 8'h2 : _vcalloc_filter_T_18; // @[Mux.scala 47:70]
  wire [7:0] vcalloc_filter = _vcalloc_filter_T_4[0] ? 8'h1 : _vcalloc_filter_T_19; // @[Mux.scala 47:70]
  wire [3:0] vcalloc_sel = vcalloc_filter[3:0] | vcalloc_filter[7:4]; // @[InputUnit.scala 237:58]
  wire [3:0] _mask_T = 4'h1 << io_router_req_bits_src_virt_id; // @[InputUnit.scala 240:18]
  wire [3:0] _mask_T_2 = _mask_T - 4'h1; // @[InputUnit.scala 240:53]
  wire  _T_26 = vcalloc_vals_0 | vcalloc_vals_1 | vcalloc_vals_2 | vcalloc_vals_3; // @[package.scala 73:59]
  wire [1:0] _mask_T_12 = vcalloc_sel[1] ? 2'h3 : 2'h0; // @[Mux.scala 27:73]
  wire [2:0] _mask_T_13 = vcalloc_sel[2] ? 3'h7 : 3'h0; // @[Mux.scala 27:73]
  wire [3:0] _mask_T_14 = vcalloc_sel[3] ? 4'hf : 4'h0; // @[Mux.scala 27:73]
  wire [1:0] _GEN_60 = {{1'd0}, vcalloc_sel[0]}; // @[Mux.scala 27:73]
  wire [1:0] _mask_T_15 = _GEN_60 | _mask_T_12; // @[Mux.scala 27:73]
  wire [2:0] _GEN_61 = {{1'd0}, _mask_T_15}; // @[Mux.scala 27:73]
  wire [2:0] _mask_T_16 = _GEN_61 | _mask_T_13; // @[Mux.scala 27:73]
  wire [3:0] _GEN_62 = {{1'd0}, _mask_T_16}; // @[Mux.scala 27:73]
  wire [3:0] _mask_T_17 = _GEN_62 | _mask_T_14; // @[Mux.scala 27:73]
  wire [2:0] _GEN_222 = vcalloc_vals_0 & vcalloc_sel[0] & io_vcalloc_req_ready ? 3'h3 : _GEN_180; // @[InputUnit.scala 253:{76,82}]
  wire [2:0] _GEN_223 = vcalloc_vals_1 & vcalloc_sel[1] & io_vcalloc_req_ready ? 3'h3 : _GEN_181; // @[InputUnit.scala 253:{76,82}]
  wire [2:0] _GEN_224 = vcalloc_vals_2 & vcalloc_sel[2] & io_vcalloc_req_ready ? 3'h3 : _GEN_182; // @[InputUnit.scala 253:{76,82}]
  wire [2:0] _GEN_225 = vcalloc_vals_3 & vcalloc_sel[3] & io_vcalloc_req_ready ? 3'h3 : _GEN_183; // @[InputUnit.scala 253:{76,82}]
  wire [1:0] _io_debug_va_stall_T = vcalloc_vals_0 + vcalloc_vals_1; // @[Bitwise.scala 51:90]
  wire [1:0] _io_debug_va_stall_T_2 = vcalloc_vals_2 + vcalloc_vals_3; // @[Bitwise.scala 51:90]
  wire [2:0] _io_debug_va_stall_T_4 = _io_debug_va_stall_T + _io_debug_va_stall_T_2; // @[Bitwise.scala 51:90]
  wire [2:0] _GEN_63 = {{2'd0}, io_vcalloc_req_ready}; // @[InputUnit.scala 266:47]
  wire [2:0] _io_debug_va_stall_T_7 = _io_debug_va_stall_T_4 - _GEN_63; // @[InputUnit.scala 266:47]
  wire  _T_39 = io_vcalloc_req_ready & io_vcalloc_req_valid; // @[Decoupled.scala 51:35]
  wire [8:0] _credit_available_T = {states_0_vc_sel_2_0,1'h0,1'h0,1'h0,states_0_vc_sel_1_0,2'h0,1'h0,states_0_vc_sel_0_0
    }; // @[InputUnit.scala 287:40]
  wire [8:0] _credit_available_T_1 = {io_out_credit_available_2_0,io_out_credit_available_1_3,
    io_out_credit_available_1_2,io_out_credit_available_1_1,io_out_credit_available_1_0,io_out_credit_available_0_3,
    io_out_credit_available_0_2,io_out_credit_available_0_1,io_out_credit_available_0_0}; // @[InputUnit.scala 287:73]
  wire [8:0] _credit_available_T_2 = _credit_available_T & _credit_available_T_1; // @[InputUnit.scala 287:47]
  wire  credit_available = _credit_available_T_2 != 9'h0; // @[InputUnit.scala 287:81]
  wire  _T_60 = salloc_arb_io_in_0_ready & salloc_arb_io_in_0_valid; // @[Decoupled.scala 51:35]
  wire [8:0] _credit_available_T_3 = {states_1_vc_sel_2_0,1'h0,1'h0,1'h0,states_1_vc_sel_1_0,2'h0,states_1_vc_sel_0_1,
    states_1_vc_sel_0_0}; // @[InputUnit.scala 287:40]
  wire [8:0] _credit_available_T_5 = _credit_available_T_3 & _credit_available_T_1; // @[InputUnit.scala 287:47]
  wire  credit_available_1 = _credit_available_T_5 != 9'h0; // @[InputUnit.scala 287:81]
  wire  _T_62 = salloc_arb_io_in_1_ready & salloc_arb_io_in_1_valid; // @[Decoupled.scala 51:35]
  wire [8:0] _credit_available_T_6 = {states_2_vc_sel_2_0,1'h0,1'h0,states_2_vc_sel_1_1,states_2_vc_sel_1_0,1'h0,
    states_2_vc_sel_0_2,states_2_vc_sel_0_1,states_2_vc_sel_0_0}; // @[InputUnit.scala 287:40]
  wire [8:0] _credit_available_T_8 = _credit_available_T_6 & _credit_available_T_1; // @[InputUnit.scala 287:47]
  wire  credit_available_2 = _credit_available_T_8 != 9'h0; // @[InputUnit.scala 287:81]
  wire  _T_64 = salloc_arb_io_in_2_ready & salloc_arb_io_in_2_valid; // @[Decoupled.scala 51:35]
  wire [8:0] _credit_available_T_9 = {states_3_vc_sel_2_0,1'h0,states_3_vc_sel_1_2,states_3_vc_sel_1_1,
    states_3_vc_sel_1_0,states_3_vc_sel_0_3,states_3_vc_sel_0_2,states_3_vc_sel_0_1,states_3_vc_sel_0_0}; // @[InputUnit.scala 287:40]
  wire [8:0] _credit_available_T_11 = _credit_available_T_9 & _credit_available_T_1; // @[InputUnit.scala 287:47]
  wire  credit_available_3 = _credit_available_T_11 != 9'h0; // @[InputUnit.scala 287:81]
  wire  _T_66 = salloc_arb_io_in_3_ready & salloc_arb_io_in_3_valid; // @[Decoupled.scala 51:35]
  wire  _io_debug_sa_stall_T_1 = salloc_arb_io_in_0_valid & ~salloc_arb_io_in_0_ready; // @[InputUnit.scala 301:67]
  wire  _io_debug_sa_stall_T_3 = salloc_arb_io_in_1_valid & ~salloc_arb_io_in_1_ready; // @[InputUnit.scala 301:67]
  wire  _io_debug_sa_stall_T_5 = salloc_arb_io_in_2_valid & ~salloc_arb_io_in_2_ready; // @[InputUnit.scala 301:67]
  wire  _io_debug_sa_stall_T_7 = salloc_arb_io_in_3_valid & ~salloc_arb_io_in_3_ready; // @[InputUnit.scala 301:67]
  wire [1:0] _io_debug_sa_stall_T_8 = _io_debug_sa_stall_T_1 + _io_debug_sa_stall_T_3; // @[Bitwise.scala 51:90]
  wire [1:0] _io_debug_sa_stall_T_10 = _io_debug_sa_stall_T_5 + _io_debug_sa_stall_T_7; // @[Bitwise.scala 51:90]
  wire [2:0] _io_debug_sa_stall_T_12 = _io_debug_sa_stall_T_8 + _io_debug_sa_stall_T_10; // @[Bitwise.scala 51:90]
  reg  salloc_outs_0_valid; // @[InputUnit.scala 318:8]
  reg [1:0] salloc_outs_0_out_vid; // @[InputUnit.scala 318:8]
  reg  salloc_outs_0_flit_head; // @[InputUnit.scala 318:8]
  reg  salloc_outs_0_flit_tail; // @[InputUnit.scala 318:8]
  reg [81:0] salloc_outs_0_flit_payload; // @[InputUnit.scala 318:8]
  reg [1:0] salloc_outs_0_flit_flow_ingress_node; // @[InputUnit.scala 318:8]
  reg [1:0] salloc_outs_0_flit_flow_egress_node; // @[InputUnit.scala 318:8]
  wire  _io_in_credit_return_T = salloc_arb_io_out_0_ready & salloc_arb_io_out_0_valid; // @[Decoupled.scala 51:35]
  wire  _io_in_vc_free_T_11 = salloc_arb_io_chosen_oh_0[0] & input_buffer_io_deq_0_bits_tail | salloc_arb_io_chosen_oh_0
    [1] & input_buffer_io_deq_1_bits_tail | salloc_arb_io_chosen_oh_0[2] & input_buffer_io_deq_2_bits_tail |
    salloc_arb_io_chosen_oh_0[3] & input_buffer_io_deq_3_bits_tail; // @[Mux.scala 27:73]
  wire  vc_sel_0_0 = salloc_arb_io_chosen_oh_0[0] & states_0_vc_sel_0_0 | salloc_arb_io_chosen_oh_0[1] &
    states_1_vc_sel_0_0 | salloc_arb_io_chosen_oh_0[2] & states_2_vc_sel_0_0 | salloc_arb_io_chosen_oh_0[3] &
    states_3_vc_sel_0_0; // @[Mux.scala 27:73]
  wire  vc_sel_0_1 = salloc_arb_io_chosen_oh_0[1] & states_1_vc_sel_0_1 | salloc_arb_io_chosen_oh_0[2] &
    states_2_vc_sel_0_1 | salloc_arb_io_chosen_oh_0[3] & states_3_vc_sel_0_1; // @[Mux.scala 27:73]
  wire  vc_sel_0_2 = salloc_arb_io_chosen_oh_0[2] & states_2_vc_sel_0_2 | salloc_arb_io_chosen_oh_0[3] &
    states_3_vc_sel_0_2; // @[Mux.scala 27:73]
  wire  vc_sel_0_3 = salloc_arb_io_chosen_oh_0[3] & states_3_vc_sel_0_3; // @[Mux.scala 27:73]
  wire  vc_sel_1_0 = salloc_arb_io_chosen_oh_0[0] & states_0_vc_sel_1_0 | salloc_arb_io_chosen_oh_0[1] &
    states_1_vc_sel_1_0 | salloc_arb_io_chosen_oh_0[2] & states_2_vc_sel_1_0 | salloc_arb_io_chosen_oh_0[3] &
    states_3_vc_sel_1_0; // @[Mux.scala 27:73]
  wire  vc_sel_1_1 = salloc_arb_io_chosen_oh_0[2] & states_2_vc_sel_1_1 | salloc_arb_io_chosen_oh_0[3] &
    states_3_vc_sel_1_1; // @[Mux.scala 27:73]
  wire  vc_sel_1_2 = salloc_arb_io_chosen_oh_0[3] & states_3_vc_sel_1_2; // @[Mux.scala 27:73]
  wire  channel_oh_0 = vc_sel_0_0 | vc_sel_0_1 | vc_sel_0_2 | vc_sel_0_3; // @[InputUnit.scala 334:43]
  wire  channel_oh_1 = vc_sel_1_0 | vc_sel_1_1 | vc_sel_1_2; // @[InputUnit.scala 334:43]
  wire [3:0] _virt_channel_T = {vc_sel_0_3,vc_sel_0_2,vc_sel_0_1,vc_sel_0_0}; // @[OneHot.scala 22:45]
  wire [1:0] virt_channel_hi_1 = _virt_channel_T[3:2]; // @[OneHot.scala 30:18]
  wire [1:0] virt_channel_lo_1 = _virt_channel_T[1:0]; // @[OneHot.scala 31:18]
  wire  _virt_channel_T_1 = |virt_channel_hi_1; // @[OneHot.scala 32:14]
  wire [1:0] _virt_channel_T_2 = virt_channel_hi_1 | virt_channel_lo_1; // @[OneHot.scala 32:28]
  wire [1:0] _virt_channel_T_4 = {_virt_channel_T_1,_virt_channel_T_2[1]}; // @[Cat.scala 33:92]
  wire [3:0] _virt_channel_T_5 = {1'h0,vc_sel_1_2,vc_sel_1_1,vc_sel_1_0}; // @[OneHot.scala 22:45]
  wire [1:0] virt_channel_hi_3 = _virt_channel_T_5[3:2]; // @[OneHot.scala 30:18]
  wire [1:0] virt_channel_lo_3 = _virt_channel_T_5[1:0]; // @[OneHot.scala 31:18]
  wire  _virt_channel_T_6 = |virt_channel_hi_3; // @[OneHot.scala 32:14]
  wire [1:0] _virt_channel_T_7 = virt_channel_hi_3 | virt_channel_lo_3; // @[OneHot.scala 32:28]
  wire [1:0] _virt_channel_T_9 = {_virt_channel_T_6,_virt_channel_T_7[1]}; // @[Cat.scala 33:92]
  wire [1:0] _virt_channel_T_10 = channel_oh_0 ? _virt_channel_T_4 : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _virt_channel_T_11 = channel_oh_1 ? _virt_channel_T_9 : 2'h0; // @[Mux.scala 27:73]
  wire [81:0] _salloc_outs_0_flit_payload_T_4 = salloc_arb_io_chosen_oh_0[0] ? input_buffer_io_deq_0_bits_payload : 82'h0
    ; // @[Mux.scala 27:73]
  wire [81:0] _salloc_outs_0_flit_payload_T_5 = salloc_arb_io_chosen_oh_0[1] ? input_buffer_io_deq_1_bits_payload : 82'h0
    ; // @[Mux.scala 27:73]
  wire [81:0] _salloc_outs_0_flit_payload_T_6 = salloc_arb_io_chosen_oh_0[2] ? input_buffer_io_deq_2_bits_payload : 82'h0
    ; // @[Mux.scala 27:73]
  wire [81:0] _salloc_outs_0_flit_payload_T_7 = salloc_arb_io_chosen_oh_0[3] ? input_buffer_io_deq_3_bits_payload : 82'h0
    ; // @[Mux.scala 27:73]
  wire [81:0] _salloc_outs_0_flit_payload_T_8 = _salloc_outs_0_flit_payload_T_4 | _salloc_outs_0_flit_payload_T_5; // @[Mux.scala 27:73]
  wire [81:0] _salloc_outs_0_flit_payload_T_9 = _salloc_outs_0_flit_payload_T_8 | _salloc_outs_0_flit_payload_T_6; // @[Mux.scala 27:73]
  wire [1:0] _salloc_outs_0_flit_flow_T_11 = salloc_arb_io_chosen_oh_0[0] ? states_0_flow_egress_node : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _salloc_outs_0_flit_flow_T_12 = salloc_arb_io_chosen_oh_0[1] ? states_1_flow_egress_node : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _salloc_outs_0_flit_flow_T_13 = salloc_arb_io_chosen_oh_0[2] ? states_2_flow_egress_node : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _salloc_outs_0_flit_flow_T_14 = salloc_arb_io_chosen_oh_0[3] ? states_3_flow_egress_node : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _salloc_outs_0_flit_flow_T_15 = _salloc_outs_0_flit_flow_T_11 | _salloc_outs_0_flit_flow_T_12; // @[Mux.scala 27:73]
  wire [1:0] _salloc_outs_0_flit_flow_T_16 = _salloc_outs_0_flit_flow_T_15 | _salloc_outs_0_flit_flow_T_13; // @[Mux.scala 27:73]
  wire [1:0] _salloc_outs_0_flit_flow_T_25 = salloc_arb_io_chosen_oh_0[0] ? states_0_flow_ingress_node : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _salloc_outs_0_flit_flow_T_26 = salloc_arb_io_chosen_oh_0[1] ? states_1_flow_ingress_node : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _salloc_outs_0_flit_flow_T_27 = salloc_arb_io_chosen_oh_0[2] ? states_2_flow_ingress_node : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _salloc_outs_0_flit_flow_T_28 = salloc_arb_io_chosen_oh_0[3] ? states_3_flow_ingress_node : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _salloc_outs_0_flit_flow_T_29 = _salloc_outs_0_flit_flow_T_25 | _salloc_outs_0_flit_flow_T_26; // @[Mux.scala 27:73]
  wire [1:0] _salloc_outs_0_flit_flow_T_30 = _salloc_outs_0_flit_flow_T_29 | _salloc_outs_0_flit_flow_T_27; // @[Mux.scala 27:73]
  InputBuffer input_buffer ( // @[InputUnit.scala 180:28]
    .clock(input_buffer_clock),
    .reset(input_buffer_reset),
    .io_enq_0_valid(input_buffer_io_enq_0_valid),
    .io_enq_0_bits_head(input_buffer_io_enq_0_bits_head),
    .io_enq_0_bits_tail(input_buffer_io_enq_0_bits_tail),
    .io_enq_0_bits_payload(input_buffer_io_enq_0_bits_payload),
    .io_enq_0_bits_virt_channel_id(input_buffer_io_enq_0_bits_virt_channel_id),
    .io_deq_0_ready(input_buffer_io_deq_0_ready),
    .io_deq_0_valid(input_buffer_io_deq_0_valid),
    .io_deq_0_bits_head(input_buffer_io_deq_0_bits_head),
    .io_deq_0_bits_tail(input_buffer_io_deq_0_bits_tail),
    .io_deq_0_bits_payload(input_buffer_io_deq_0_bits_payload),
    .io_deq_1_ready(input_buffer_io_deq_1_ready),
    .io_deq_1_valid(input_buffer_io_deq_1_valid),
    .io_deq_1_bits_head(input_buffer_io_deq_1_bits_head),
    .io_deq_1_bits_tail(input_buffer_io_deq_1_bits_tail),
    .io_deq_1_bits_payload(input_buffer_io_deq_1_bits_payload),
    .io_deq_2_ready(input_buffer_io_deq_2_ready),
    .io_deq_2_valid(input_buffer_io_deq_2_valid),
    .io_deq_2_bits_head(input_buffer_io_deq_2_bits_head),
    .io_deq_2_bits_tail(input_buffer_io_deq_2_bits_tail),
    .io_deq_2_bits_payload(input_buffer_io_deq_2_bits_payload),
    .io_deq_3_ready(input_buffer_io_deq_3_ready),
    .io_deq_3_valid(input_buffer_io_deq_3_valid),
    .io_deq_3_bits_head(input_buffer_io_deq_3_bits_head),
    .io_deq_3_bits_tail(input_buffer_io_deq_3_bits_tail),
    .io_deq_3_bits_payload(input_buffer_io_deq_3_bits_payload)
  );
  Arbiter route_arbiter ( // @[InputUnit.scala 186:29]
    .io_in_0_valid(route_arbiter_io_in_0_valid),
    .io_in_0_bits_flow_ingress_node(route_arbiter_io_in_0_bits_flow_ingress_node),
    .io_in_0_bits_flow_egress_node(route_arbiter_io_in_0_bits_flow_egress_node),
    .io_in_1_ready(route_arbiter_io_in_1_ready),
    .io_in_1_valid(route_arbiter_io_in_1_valid),
    .io_in_1_bits_flow_ingress_node(route_arbiter_io_in_1_bits_flow_ingress_node),
    .io_in_1_bits_flow_egress_node(route_arbiter_io_in_1_bits_flow_egress_node),
    .io_in_2_ready(route_arbiter_io_in_2_ready),
    .io_in_2_valid(route_arbiter_io_in_2_valid),
    .io_in_2_bits_flow_ingress_node(route_arbiter_io_in_2_bits_flow_ingress_node),
    .io_in_2_bits_flow_egress_node(route_arbiter_io_in_2_bits_flow_egress_node),
    .io_in_3_ready(route_arbiter_io_in_3_ready),
    .io_in_3_valid(route_arbiter_io_in_3_valid),
    .io_in_3_bits_flow_ingress_node(route_arbiter_io_in_3_bits_flow_ingress_node),
    .io_in_3_bits_flow_egress_node(route_arbiter_io_in_3_bits_flow_egress_node),
    .io_out_valid(route_arbiter_io_out_valid),
    .io_out_bits_src_virt_id(route_arbiter_io_out_bits_src_virt_id),
    .io_out_bits_flow_ingress_node(route_arbiter_io_out_bits_flow_ingress_node),
    .io_out_bits_flow_egress_node(route_arbiter_io_out_bits_flow_egress_node)
  );
  SwitchArbiter salloc_arb ( // @[InputUnit.scala 279:26]
    .clock(salloc_arb_clock),
    .reset(salloc_arb_reset),
    .io_in_0_ready(salloc_arb_io_in_0_ready),
    .io_in_0_valid(salloc_arb_io_in_0_valid),
    .io_in_0_bits_vc_sel_2_0(salloc_arb_io_in_0_bits_vc_sel_2_0),
    .io_in_0_bits_vc_sel_1_0(salloc_arb_io_in_0_bits_vc_sel_1_0),
    .io_in_0_bits_vc_sel_0_0(salloc_arb_io_in_0_bits_vc_sel_0_0),
    .io_in_0_bits_tail(salloc_arb_io_in_0_bits_tail),
    .io_in_1_ready(salloc_arb_io_in_1_ready),
    .io_in_1_valid(salloc_arb_io_in_1_valid),
    .io_in_1_bits_vc_sel_2_0(salloc_arb_io_in_1_bits_vc_sel_2_0),
    .io_in_1_bits_vc_sel_1_0(salloc_arb_io_in_1_bits_vc_sel_1_0),
    .io_in_1_bits_vc_sel_1_1(salloc_arb_io_in_1_bits_vc_sel_1_1),
    .io_in_1_bits_vc_sel_0_0(salloc_arb_io_in_1_bits_vc_sel_0_0),
    .io_in_1_bits_vc_sel_0_1(salloc_arb_io_in_1_bits_vc_sel_0_1),
    .io_in_1_bits_tail(salloc_arb_io_in_1_bits_tail),
    .io_in_2_ready(salloc_arb_io_in_2_ready),
    .io_in_2_valid(salloc_arb_io_in_2_valid),
    .io_in_2_bits_vc_sel_2_0(salloc_arb_io_in_2_bits_vc_sel_2_0),
    .io_in_2_bits_vc_sel_1_0(salloc_arb_io_in_2_bits_vc_sel_1_0),
    .io_in_2_bits_vc_sel_1_1(salloc_arb_io_in_2_bits_vc_sel_1_1),
    .io_in_2_bits_vc_sel_1_2(salloc_arb_io_in_2_bits_vc_sel_1_2),
    .io_in_2_bits_vc_sel_0_0(salloc_arb_io_in_2_bits_vc_sel_0_0),
    .io_in_2_bits_vc_sel_0_1(salloc_arb_io_in_2_bits_vc_sel_0_1),
    .io_in_2_bits_vc_sel_0_2(salloc_arb_io_in_2_bits_vc_sel_0_2),
    .io_in_2_bits_tail(salloc_arb_io_in_2_bits_tail),
    .io_in_3_ready(salloc_arb_io_in_3_ready),
    .io_in_3_valid(salloc_arb_io_in_3_valid),
    .io_in_3_bits_vc_sel_2_0(salloc_arb_io_in_3_bits_vc_sel_2_0),
    .io_in_3_bits_vc_sel_1_0(salloc_arb_io_in_3_bits_vc_sel_1_0),
    .io_in_3_bits_vc_sel_1_1(salloc_arb_io_in_3_bits_vc_sel_1_1),
    .io_in_3_bits_vc_sel_1_2(salloc_arb_io_in_3_bits_vc_sel_1_2),
    .io_in_3_bits_vc_sel_1_3(salloc_arb_io_in_3_bits_vc_sel_1_3),
    .io_in_3_bits_vc_sel_0_0(salloc_arb_io_in_3_bits_vc_sel_0_0),
    .io_in_3_bits_vc_sel_0_1(salloc_arb_io_in_3_bits_vc_sel_0_1),
    .io_in_3_bits_vc_sel_0_2(salloc_arb_io_in_3_bits_vc_sel_0_2),
    .io_in_3_bits_vc_sel_0_3(salloc_arb_io_in_3_bits_vc_sel_0_3),
    .io_in_3_bits_tail(salloc_arb_io_in_3_bits_tail),
    .io_out_0_ready(salloc_arb_io_out_0_ready),
    .io_out_0_valid(salloc_arb_io_out_0_valid),
    .io_out_0_bits_vc_sel_2_0(salloc_arb_io_out_0_bits_vc_sel_2_0),
    .io_out_0_bits_vc_sel_1_0(salloc_arb_io_out_0_bits_vc_sel_1_0),
    .io_out_0_bits_vc_sel_1_1(salloc_arb_io_out_0_bits_vc_sel_1_1),
    .io_out_0_bits_vc_sel_1_2(salloc_arb_io_out_0_bits_vc_sel_1_2),
    .io_out_0_bits_vc_sel_1_3(salloc_arb_io_out_0_bits_vc_sel_1_3),
    .io_out_0_bits_vc_sel_0_0(salloc_arb_io_out_0_bits_vc_sel_0_0),
    .io_out_0_bits_vc_sel_0_1(salloc_arb_io_out_0_bits_vc_sel_0_1),
    .io_out_0_bits_vc_sel_0_2(salloc_arb_io_out_0_bits_vc_sel_0_2),
    .io_out_0_bits_vc_sel_0_3(salloc_arb_io_out_0_bits_vc_sel_0_3),
    .io_out_0_bits_tail(salloc_arb_io_out_0_bits_tail),
    .io_chosen_oh_0(salloc_arb_io_chosen_oh_0)
  );
  assign io_router_req_valid = route_arbiter_io_out_valid; // @[InputUnit.scala 189:17]
  assign io_router_req_bits_src_virt_id = route_arbiter_io_out_bits_src_virt_id; // @[InputUnit.scala 189:17]
  assign io_router_req_bits_flow_ingress_node = route_arbiter_io_out_bits_flow_ingress_node; // @[InputUnit.scala 189:17]
  assign io_router_req_bits_flow_egress_node = route_arbiter_io_out_bits_flow_egress_node; // @[InputUnit.scala 189:17]
  assign io_vcalloc_req_valid = vcalloc_vals_0 | vcalloc_vals_1 | vcalloc_vals_2 | vcalloc_vals_3; // @[package.scala 73:59]
  assign io_vcalloc_req_bits_vc_sel_2_0 = vcalloc_sel[0] & states_0_vc_sel_2_0 | vcalloc_sel[1] & states_1_vc_sel_2_0 |
    vcalloc_sel[2] & states_2_vc_sel_2_0 | vcalloc_sel[3] & states_3_vc_sel_2_0; // @[Mux.scala 27:73]
  assign io_vcalloc_req_bits_vc_sel_1_0 = vcalloc_sel[0] & states_0_vc_sel_1_0 | vcalloc_sel[1] & states_1_vc_sel_1_0 |
    vcalloc_sel[2] & states_2_vc_sel_1_0 | vcalloc_sel[3] & states_3_vc_sel_1_0; // @[Mux.scala 27:73]
  assign io_vcalloc_req_bits_vc_sel_1_1 = vcalloc_sel[2] & states_2_vc_sel_1_1 | vcalloc_sel[3] & states_3_vc_sel_1_1; // @[Mux.scala 27:73]
  assign io_vcalloc_req_bits_vc_sel_1_2 = vcalloc_sel[3] & states_3_vc_sel_1_2; // @[Mux.scala 27:73]
  assign io_vcalloc_req_bits_vc_sel_0_0 = vcalloc_sel[0] & states_0_vc_sel_0_0 | vcalloc_sel[1] & states_1_vc_sel_0_0 |
    vcalloc_sel[2] & states_2_vc_sel_0_0 | vcalloc_sel[3] & states_3_vc_sel_0_0; // @[Mux.scala 27:73]
  assign io_vcalloc_req_bits_vc_sel_0_1 = vcalloc_sel[1] & states_1_vc_sel_0_1 | vcalloc_sel[2] & states_2_vc_sel_0_1 |
    vcalloc_sel[3] & states_3_vc_sel_0_1; // @[Mux.scala 27:73]
  assign io_vcalloc_req_bits_vc_sel_0_2 = vcalloc_sel[2] & states_2_vc_sel_0_2 | vcalloc_sel[3] & states_3_vc_sel_0_2; // @[Mux.scala 27:73]
  assign io_vcalloc_req_bits_vc_sel_0_3 = vcalloc_sel[3] & states_3_vc_sel_0_3; // @[Mux.scala 27:73]
  assign io_salloc_req_0_valid = salloc_arb_io_out_0_valid; // @[InputUnit.scala 302:17 303:19 305:35]
  assign io_salloc_req_0_bits_vc_sel_2_0 = salloc_arb_io_out_0_bits_vc_sel_2_0; // @[InputUnit.scala 302:17]
  assign io_salloc_req_0_bits_vc_sel_1_0 = salloc_arb_io_out_0_bits_vc_sel_1_0; // @[InputUnit.scala 302:17]
  assign io_salloc_req_0_bits_vc_sel_1_1 = salloc_arb_io_out_0_bits_vc_sel_1_1; // @[InputUnit.scala 302:17]
  assign io_salloc_req_0_bits_vc_sel_1_2 = salloc_arb_io_out_0_bits_vc_sel_1_2; // @[InputUnit.scala 302:17]
  assign io_salloc_req_0_bits_vc_sel_1_3 = salloc_arb_io_out_0_bits_vc_sel_1_3; // @[InputUnit.scala 302:17]
  assign io_salloc_req_0_bits_vc_sel_0_0 = salloc_arb_io_out_0_bits_vc_sel_0_0; // @[InputUnit.scala 302:17]
  assign io_salloc_req_0_bits_vc_sel_0_1 = salloc_arb_io_out_0_bits_vc_sel_0_1; // @[InputUnit.scala 302:17]
  assign io_salloc_req_0_bits_vc_sel_0_2 = salloc_arb_io_out_0_bits_vc_sel_0_2; // @[InputUnit.scala 302:17]
  assign io_salloc_req_0_bits_vc_sel_0_3 = salloc_arb_io_out_0_bits_vc_sel_0_3; // @[InputUnit.scala 302:17]
  assign io_salloc_req_0_bits_tail = salloc_arb_io_out_0_bits_tail; // @[InputUnit.scala 302:17]
  assign io_out_0_valid = salloc_outs_0_valid; // @[InputUnit.scala 349:21]
  assign io_out_0_bits_flit_head = salloc_outs_0_flit_head; // @[InputUnit.scala 350:25]
  assign io_out_0_bits_flit_tail = salloc_outs_0_flit_tail; // @[InputUnit.scala 350:25]
  assign io_out_0_bits_flit_payload = salloc_outs_0_flit_payload; // @[InputUnit.scala 350:25]
  assign io_out_0_bits_flit_flow_ingress_node = salloc_outs_0_flit_flow_ingress_node; // @[InputUnit.scala 350:25]
  assign io_out_0_bits_flit_flow_egress_node = salloc_outs_0_flit_flow_egress_node; // @[InputUnit.scala 350:25]
  assign io_out_0_bits_out_virt_channel = salloc_outs_0_out_vid; // @[InputUnit.scala 351:37]
  assign io_debug_va_stall = _io_debug_va_stall_T_7[1:0]; // @[InputUnit.scala 266:21]
  assign io_debug_sa_stall = _io_debug_sa_stall_T_12[1:0]; // @[InputUnit.scala 301:21]
  assign io_in_credit_return = _io_in_credit_return_T ? salloc_arb_io_chosen_oh_0 : 4'h0; // @[InputUnit.scala 322:8]
  assign io_in_vc_free = _io_in_credit_return_T & _io_in_vc_free_T_11 ? salloc_arb_io_chosen_oh_0 : 4'h0; // @[InputUnit.scala 325:8]
  assign input_buffer_clock = clock;
  assign input_buffer_reset = reset;
  assign input_buffer_io_enq_0_valid = io_in_flit_0_valid; // @[InputUnit.scala 182:28]
  assign input_buffer_io_enq_0_bits_head = io_in_flit_0_bits_head; // @[InputUnit.scala 182:28]
  assign input_buffer_io_enq_0_bits_tail = io_in_flit_0_bits_tail; // @[InputUnit.scala 182:28]
  assign input_buffer_io_enq_0_bits_payload = io_in_flit_0_bits_payload; // @[InputUnit.scala 182:28]
  assign input_buffer_io_enq_0_bits_virt_channel_id = io_in_flit_0_bits_virt_channel_id; // @[InputUnit.scala 182:28]
  assign input_buffer_io_deq_0_ready = salloc_arb_io_in_0_ready; // @[InputUnit.scala 295:36]
  assign input_buffer_io_deq_1_ready = salloc_arb_io_in_1_ready; // @[InputUnit.scala 295:36]
  assign input_buffer_io_deq_2_ready = salloc_arb_io_in_2_ready; // @[InputUnit.scala 295:36]
  assign input_buffer_io_deq_3_ready = salloc_arb_io_in_3_ready; // @[InputUnit.scala 295:36]
  assign route_arbiter_io_in_0_valid = states_0_g == 3'h1; // @[InputUnit.scala 212:22]
  assign route_arbiter_io_in_0_bits_flow_ingress_node = states_0_flow_ingress_node; // @[InputUnit.scala 213:19]
  assign route_arbiter_io_in_0_bits_flow_egress_node = states_0_flow_egress_node; // @[InputUnit.scala 213:19]
  assign route_arbiter_io_in_1_valid = states_1_g == 3'h1; // @[InputUnit.scala 212:22]
  assign route_arbiter_io_in_1_bits_flow_ingress_node = states_1_flow_ingress_node; // @[InputUnit.scala 213:19]
  assign route_arbiter_io_in_1_bits_flow_egress_node = states_1_flow_egress_node; // @[InputUnit.scala 213:19]
  assign route_arbiter_io_in_2_valid = states_2_g == 3'h1; // @[InputUnit.scala 212:22]
  assign route_arbiter_io_in_2_bits_flow_ingress_node = states_2_flow_ingress_node; // @[InputUnit.scala 213:19]
  assign route_arbiter_io_in_2_bits_flow_egress_node = states_2_flow_egress_node; // @[InputUnit.scala 213:19]
  assign route_arbiter_io_in_3_valid = states_3_g == 3'h1; // @[InputUnit.scala 212:22]
  assign route_arbiter_io_in_3_bits_flow_ingress_node = states_3_flow_ingress_node; // @[InputUnit.scala 213:19]
  assign route_arbiter_io_in_3_bits_flow_egress_node = states_3_flow_egress_node; // @[InputUnit.scala 213:19]
  assign salloc_arb_clock = clock;
  assign salloc_arb_reset = reset;
  assign salloc_arb_io_in_0_valid = states_0_g == 3'h3 & credit_available & input_buffer_io_deq_0_valid; // @[InputUnit.scala 288:50]
  assign salloc_arb_io_in_0_bits_vc_sel_2_0 = states_0_vc_sel_2_0; // @[InputUnit.scala 289:21]
  assign salloc_arb_io_in_0_bits_vc_sel_1_0 = states_0_vc_sel_1_0; // @[InputUnit.scala 289:21]
  assign salloc_arb_io_in_0_bits_vc_sel_0_0 = states_0_vc_sel_0_0; // @[InputUnit.scala 289:21]
  assign salloc_arb_io_in_0_bits_tail = input_buffer_io_deq_0_bits_tail; // @[InputUnit.scala 291:19]
  assign salloc_arb_io_in_1_valid = states_1_g == 3'h3 & credit_available_1 & input_buffer_io_deq_1_valid; // @[InputUnit.scala 288:50]
  assign salloc_arb_io_in_1_bits_vc_sel_2_0 = states_1_vc_sel_2_0; // @[InputUnit.scala 289:21]
  assign salloc_arb_io_in_1_bits_vc_sel_1_0 = states_1_vc_sel_1_0; // @[InputUnit.scala 289:21]
  assign salloc_arb_io_in_1_bits_vc_sel_1_1 = 1'h0; // @[InputUnit.scala 289:21]
  assign salloc_arb_io_in_1_bits_vc_sel_0_0 = states_1_vc_sel_0_0; // @[InputUnit.scala 289:21]
  assign salloc_arb_io_in_1_bits_vc_sel_0_1 = states_1_vc_sel_0_1; // @[InputUnit.scala 289:21]
  assign salloc_arb_io_in_1_bits_tail = input_buffer_io_deq_1_bits_tail; // @[InputUnit.scala 291:19]
  assign salloc_arb_io_in_2_valid = states_2_g == 3'h3 & credit_available_2 & input_buffer_io_deq_2_valid; // @[InputUnit.scala 288:50]
  assign salloc_arb_io_in_2_bits_vc_sel_2_0 = states_2_vc_sel_2_0; // @[InputUnit.scala 289:21]
  assign salloc_arb_io_in_2_bits_vc_sel_1_0 = states_2_vc_sel_1_0; // @[InputUnit.scala 289:21]
  assign salloc_arb_io_in_2_bits_vc_sel_1_1 = states_2_vc_sel_1_1; // @[InputUnit.scala 289:21]
  assign salloc_arb_io_in_2_bits_vc_sel_1_2 = 1'h0; // @[InputUnit.scala 289:21]
  assign salloc_arb_io_in_2_bits_vc_sel_0_0 = states_2_vc_sel_0_0; // @[InputUnit.scala 289:21]
  assign salloc_arb_io_in_2_bits_vc_sel_0_1 = states_2_vc_sel_0_1; // @[InputUnit.scala 289:21]
  assign salloc_arb_io_in_2_bits_vc_sel_0_2 = states_2_vc_sel_0_2; // @[InputUnit.scala 289:21]
  assign salloc_arb_io_in_2_bits_tail = input_buffer_io_deq_2_bits_tail; // @[InputUnit.scala 291:19]
  assign salloc_arb_io_in_3_valid = states_3_g == 3'h3 & credit_available_3 & input_buffer_io_deq_3_valid; // @[InputUnit.scala 288:50]
  assign salloc_arb_io_in_3_bits_vc_sel_2_0 = states_3_vc_sel_2_0; // @[InputUnit.scala 289:21]
  assign salloc_arb_io_in_3_bits_vc_sel_1_0 = states_3_vc_sel_1_0; // @[InputUnit.scala 289:21]
  assign salloc_arb_io_in_3_bits_vc_sel_1_1 = states_3_vc_sel_1_1; // @[InputUnit.scala 289:21]
  assign salloc_arb_io_in_3_bits_vc_sel_1_2 = states_3_vc_sel_1_2; // @[InputUnit.scala 289:21]
  assign salloc_arb_io_in_3_bits_vc_sel_1_3 = 1'h0; // @[InputUnit.scala 289:21]
  assign salloc_arb_io_in_3_bits_vc_sel_0_0 = states_3_vc_sel_0_0; // @[InputUnit.scala 289:21]
  assign salloc_arb_io_in_3_bits_vc_sel_0_1 = states_3_vc_sel_0_1; // @[InputUnit.scala 289:21]
  assign salloc_arb_io_in_3_bits_vc_sel_0_2 = states_3_vc_sel_0_2; // @[InputUnit.scala 289:21]
  assign salloc_arb_io_in_3_bits_vc_sel_0_3 = states_3_vc_sel_0_3; // @[InputUnit.scala 289:21]
  assign salloc_arb_io_in_3_bits_tail = input_buffer_io_deq_3_bits_tail; // @[InputUnit.scala 291:19]
  assign salloc_arb_io_out_0_ready = io_salloc_req_0_ready; // @[InputUnit.scala 302:17 303:19 304:39]
  always @(posedge clock) begin
    if (reset) begin // @[InputUnit.scala 377:23]
      states_0_g <= 3'h0; // @[InputUnit.scala 378:24]
    end else if (_T_60 & input_buffer_io_deq_0_bits_tail) begin // @[InputUnit.scala 292:35]
      states_0_g <= 3'h0; // @[InputUnit.scala 293:13]
    end else if (_T_39) begin // @[InputUnit.scala 268:32]
      if (vcalloc_sel[0]) begin // @[InputUnit.scala 270:29]
        states_0_g <= 3'h3; // @[InputUnit.scala 272:21]
      end else begin
        states_0_g <= _GEN_222;
      end
    end else begin
      states_0_g <= _GEN_222;
    end
    if (_T_39) begin // @[InputUnit.scala 268:32]
      if (vcalloc_sel[0]) begin // @[InputUnit.scala 270:29]
        states_0_vc_sel_2_0 <= io_vcalloc_resp_vc_sel_2_0; // @[InputUnit.scala 271:26]
      end else begin
        states_0_vc_sel_2_0 <= _GEN_184;
      end
    end else begin
      states_0_vc_sel_2_0 <= _GEN_184;
    end
    if (_T_39) begin // @[InputUnit.scala 268:32]
      if (vcalloc_sel[0]) begin // @[InputUnit.scala 270:29]
        states_0_vc_sel_1_0 <= io_vcalloc_resp_vc_sel_1_0; // @[InputUnit.scala 271:26]
      end else begin
        states_0_vc_sel_1_0 <= _GEN_185;
      end
    end else begin
      states_0_vc_sel_1_0 <= _GEN_185;
    end
    if (_T_39) begin // @[InputUnit.scala 268:32]
      if (vcalloc_sel[0]) begin // @[InputUnit.scala 270:29]
        states_0_vc_sel_0_0 <= io_vcalloc_resp_vc_sel_0_0; // @[InputUnit.scala 271:26]
      end else begin
        states_0_vc_sel_0_0 <= _GEN_189;
      end
    end else begin
      states_0_vc_sel_0_0 <= _GEN_189;
    end
    if (io_in_flit_0_valid & io_in_flit_0_bits_head) begin // @[InputUnit.scala 194:60]
      if (2'h0 == io_in_flit_0_bits_virt_channel_id) begin // @[InputUnit.scala 206:23]
        states_0_flow_ingress_node <= io_in_flit_0_bits_flow_ingress_node; // @[InputUnit.scala 206:23]
      end
    end
    if (io_in_flit_0_valid & io_in_flit_0_bits_head) begin // @[InputUnit.scala 194:60]
      if (2'h0 == io_in_flit_0_bits_virt_channel_id) begin // @[InputUnit.scala 206:23]
        states_0_flow_egress_node <= io_in_flit_0_bits_flow_egress_node; // @[InputUnit.scala 206:23]
      end
    end
    if (reset) begin // @[InputUnit.scala 377:23]
      states_1_g <= 3'h0; // @[InputUnit.scala 378:24]
    end else if (_T_62 & input_buffer_io_deq_1_bits_tail) begin // @[InputUnit.scala 292:35]
      states_1_g <= 3'h0; // @[InputUnit.scala 293:13]
    end else if (_T_39) begin // @[InputUnit.scala 268:32]
      if (vcalloc_sel[1]) begin // @[InputUnit.scala 270:29]
        states_1_g <= 3'h3; // @[InputUnit.scala 272:21]
      end else begin
        states_1_g <= _GEN_223;
      end
    end else begin
      states_1_g <= _GEN_223;
    end
    if (_T_39) begin // @[InputUnit.scala 268:32]
      if (vcalloc_sel[1]) begin // @[InputUnit.scala 270:29]
        states_1_vc_sel_2_0 <= io_vcalloc_resp_vc_sel_2_0; // @[InputUnit.scala 271:26]
      end else begin
        states_1_vc_sel_2_0 <= _GEN_193;
      end
    end else begin
      states_1_vc_sel_2_0 <= _GEN_193;
    end
    if (_T_39) begin // @[InputUnit.scala 268:32]
      if (vcalloc_sel[1]) begin // @[InputUnit.scala 270:29]
        states_1_vc_sel_1_0 <= io_vcalloc_resp_vc_sel_1_0; // @[InputUnit.scala 271:26]
      end else begin
        states_1_vc_sel_1_0 <= _GEN_194;
      end
    end else begin
      states_1_vc_sel_1_0 <= _GEN_194;
    end
    if (_T_39) begin // @[InputUnit.scala 268:32]
      if (vcalloc_sel[1]) begin // @[InputUnit.scala 270:29]
        states_1_vc_sel_0_0 <= io_vcalloc_resp_vc_sel_0_0; // @[InputUnit.scala 271:26]
      end else begin
        states_1_vc_sel_0_0 <= _GEN_198;
      end
    end else begin
      states_1_vc_sel_0_0 <= _GEN_198;
    end
    if (_T_39) begin // @[InputUnit.scala 268:32]
      if (vcalloc_sel[1]) begin // @[InputUnit.scala 270:29]
        states_1_vc_sel_0_1 <= io_vcalloc_resp_vc_sel_0_1; // @[InputUnit.scala 271:26]
      end else begin
        states_1_vc_sel_0_1 <= _GEN_199;
      end
    end else begin
      states_1_vc_sel_0_1 <= _GEN_199;
    end
    if (io_in_flit_0_valid & io_in_flit_0_bits_head) begin // @[InputUnit.scala 194:60]
      if (2'h1 == io_in_flit_0_bits_virt_channel_id) begin // @[InputUnit.scala 206:23]
        states_1_flow_ingress_node <= io_in_flit_0_bits_flow_ingress_node; // @[InputUnit.scala 206:23]
      end
    end
    if (io_in_flit_0_valid & io_in_flit_0_bits_head) begin // @[InputUnit.scala 194:60]
      if (2'h1 == io_in_flit_0_bits_virt_channel_id) begin // @[InputUnit.scala 206:23]
        states_1_flow_egress_node <= io_in_flit_0_bits_flow_egress_node; // @[InputUnit.scala 206:23]
      end
    end
    if (reset) begin // @[InputUnit.scala 377:23]
      states_2_g <= 3'h0; // @[InputUnit.scala 378:24]
    end else if (_T_64 & input_buffer_io_deq_2_bits_tail) begin // @[InputUnit.scala 292:35]
      states_2_g <= 3'h0; // @[InputUnit.scala 293:13]
    end else if (_T_39) begin // @[InputUnit.scala 268:32]
      if (vcalloc_sel[2]) begin // @[InputUnit.scala 270:29]
        states_2_g <= 3'h3; // @[InputUnit.scala 272:21]
      end else begin
        states_2_g <= _GEN_224;
      end
    end else begin
      states_2_g <= _GEN_224;
    end
    if (_T_39) begin // @[InputUnit.scala 268:32]
      if (vcalloc_sel[2]) begin // @[InputUnit.scala 270:29]
        states_2_vc_sel_2_0 <= io_vcalloc_resp_vc_sel_2_0; // @[InputUnit.scala 271:26]
      end else begin
        states_2_vc_sel_2_0 <= _GEN_202;
      end
    end else begin
      states_2_vc_sel_2_0 <= _GEN_202;
    end
    if (_T_39) begin // @[InputUnit.scala 268:32]
      if (vcalloc_sel[2]) begin // @[InputUnit.scala 270:29]
        states_2_vc_sel_1_0 <= io_vcalloc_resp_vc_sel_1_0; // @[InputUnit.scala 271:26]
      end else begin
        states_2_vc_sel_1_0 <= _GEN_203;
      end
    end else begin
      states_2_vc_sel_1_0 <= _GEN_203;
    end
    if (_T_39) begin // @[InputUnit.scala 268:32]
      if (vcalloc_sel[2]) begin // @[InputUnit.scala 270:29]
        states_2_vc_sel_1_1 <= io_vcalloc_resp_vc_sel_1_1; // @[InputUnit.scala 271:26]
      end else begin
        states_2_vc_sel_1_1 <= _GEN_204;
      end
    end else begin
      states_2_vc_sel_1_1 <= _GEN_204;
    end
    if (_T_39) begin // @[InputUnit.scala 268:32]
      if (vcalloc_sel[2]) begin // @[InputUnit.scala 270:29]
        states_2_vc_sel_0_0 <= io_vcalloc_resp_vc_sel_0_0; // @[InputUnit.scala 271:26]
      end else begin
        states_2_vc_sel_0_0 <= _GEN_207;
      end
    end else begin
      states_2_vc_sel_0_0 <= _GEN_207;
    end
    if (_T_39) begin // @[InputUnit.scala 268:32]
      if (vcalloc_sel[2]) begin // @[InputUnit.scala 270:29]
        states_2_vc_sel_0_1 <= io_vcalloc_resp_vc_sel_0_1; // @[InputUnit.scala 271:26]
      end else begin
        states_2_vc_sel_0_1 <= _GEN_208;
      end
    end else begin
      states_2_vc_sel_0_1 <= _GEN_208;
    end
    if (_T_39) begin // @[InputUnit.scala 268:32]
      if (vcalloc_sel[2]) begin // @[InputUnit.scala 270:29]
        states_2_vc_sel_0_2 <= io_vcalloc_resp_vc_sel_0_2; // @[InputUnit.scala 271:26]
      end else begin
        states_2_vc_sel_0_2 <= _GEN_209;
      end
    end else begin
      states_2_vc_sel_0_2 <= _GEN_209;
    end
    if (io_in_flit_0_valid & io_in_flit_0_bits_head) begin // @[InputUnit.scala 194:60]
      if (2'h2 == io_in_flit_0_bits_virt_channel_id) begin // @[InputUnit.scala 206:23]
        states_2_flow_ingress_node <= io_in_flit_0_bits_flow_ingress_node; // @[InputUnit.scala 206:23]
      end
    end
    if (io_in_flit_0_valid & io_in_flit_0_bits_head) begin // @[InputUnit.scala 194:60]
      if (2'h2 == io_in_flit_0_bits_virt_channel_id) begin // @[InputUnit.scala 206:23]
        states_2_flow_egress_node <= io_in_flit_0_bits_flow_egress_node; // @[InputUnit.scala 206:23]
      end
    end
    if (reset) begin // @[InputUnit.scala 377:23]
      states_3_g <= 3'h0; // @[InputUnit.scala 378:24]
    end else if (_T_66 & input_buffer_io_deq_3_bits_tail) begin // @[InputUnit.scala 292:35]
      states_3_g <= 3'h0; // @[InputUnit.scala 293:13]
    end else if (_T_39) begin // @[InputUnit.scala 268:32]
      if (vcalloc_sel[3]) begin // @[InputUnit.scala 270:29]
        states_3_g <= 3'h3; // @[InputUnit.scala 272:21]
      end else begin
        states_3_g <= _GEN_225;
      end
    end else begin
      states_3_g <= _GEN_225;
    end
    if (_T_39) begin // @[InputUnit.scala 268:32]
      if (vcalloc_sel[3]) begin // @[InputUnit.scala 270:29]
        states_3_vc_sel_2_0 <= io_vcalloc_resp_vc_sel_2_0; // @[InputUnit.scala 271:26]
      end else begin
        states_3_vc_sel_2_0 <= _GEN_211;
      end
    end else begin
      states_3_vc_sel_2_0 <= _GEN_211;
    end
    if (_T_39) begin // @[InputUnit.scala 268:32]
      if (vcalloc_sel[3]) begin // @[InputUnit.scala 270:29]
        states_3_vc_sel_1_0 <= io_vcalloc_resp_vc_sel_1_0; // @[InputUnit.scala 271:26]
      end else begin
        states_3_vc_sel_1_0 <= _GEN_212;
      end
    end else begin
      states_3_vc_sel_1_0 <= _GEN_212;
    end
    if (_T_39) begin // @[InputUnit.scala 268:32]
      if (vcalloc_sel[3]) begin // @[InputUnit.scala 270:29]
        states_3_vc_sel_1_1 <= io_vcalloc_resp_vc_sel_1_1; // @[InputUnit.scala 271:26]
      end else begin
        states_3_vc_sel_1_1 <= _GEN_213;
      end
    end else begin
      states_3_vc_sel_1_1 <= _GEN_213;
    end
    if (_T_39) begin // @[InputUnit.scala 268:32]
      if (vcalloc_sel[3]) begin // @[InputUnit.scala 270:29]
        states_3_vc_sel_1_2 <= io_vcalloc_resp_vc_sel_1_2; // @[InputUnit.scala 271:26]
      end else begin
        states_3_vc_sel_1_2 <= _GEN_214;
      end
    end else begin
      states_3_vc_sel_1_2 <= _GEN_214;
    end
    if (_T_39) begin // @[InputUnit.scala 268:32]
      if (vcalloc_sel[3]) begin // @[InputUnit.scala 270:29]
        states_3_vc_sel_0_0 <= io_vcalloc_resp_vc_sel_0_0; // @[InputUnit.scala 271:26]
      end else begin
        states_3_vc_sel_0_0 <= _GEN_216;
      end
    end else begin
      states_3_vc_sel_0_0 <= _GEN_216;
    end
    if (_T_39) begin // @[InputUnit.scala 268:32]
      if (vcalloc_sel[3]) begin // @[InputUnit.scala 270:29]
        states_3_vc_sel_0_1 <= io_vcalloc_resp_vc_sel_0_1; // @[InputUnit.scala 271:26]
      end else begin
        states_3_vc_sel_0_1 <= _GEN_217;
      end
    end else begin
      states_3_vc_sel_0_1 <= _GEN_217;
    end
    if (_T_39) begin // @[InputUnit.scala 268:32]
      if (vcalloc_sel[3]) begin // @[InputUnit.scala 270:29]
        states_3_vc_sel_0_2 <= io_vcalloc_resp_vc_sel_0_2; // @[InputUnit.scala 271:26]
      end else begin
        states_3_vc_sel_0_2 <= _GEN_218;
      end
    end else begin
      states_3_vc_sel_0_2 <= _GEN_218;
    end
    if (_T_39) begin // @[InputUnit.scala 268:32]
      if (vcalloc_sel[3]) begin // @[InputUnit.scala 270:29]
        states_3_vc_sel_0_3 <= io_vcalloc_resp_vc_sel_0_3; // @[InputUnit.scala 271:26]
      end else begin
        states_3_vc_sel_0_3 <= _GEN_219;
      end
    end else begin
      states_3_vc_sel_0_3 <= _GEN_219;
    end
    if (io_in_flit_0_valid & io_in_flit_0_bits_head) begin // @[InputUnit.scala 194:60]
      if (2'h3 == io_in_flit_0_bits_virt_channel_id) begin // @[InputUnit.scala 206:23]
        states_3_flow_ingress_node <= io_in_flit_0_bits_flow_ingress_node; // @[InputUnit.scala 206:23]
      end
    end
    if (io_in_flit_0_valid & io_in_flit_0_bits_head) begin // @[InputUnit.scala 194:60]
      if (2'h3 == io_in_flit_0_bits_virt_channel_id) begin // @[InputUnit.scala 206:23]
        states_3_flow_egress_node <= io_in_flit_0_bits_flow_egress_node; // @[InputUnit.scala 206:23]
      end
    end
    if (reset) begin // @[InputUnit.scala 233:21]
      mask <= 4'h0; // @[InputUnit.scala 233:21]
    end else if (io_router_req_valid) begin // @[InputUnit.scala 239:31]
      mask <= _mask_T_2; // @[InputUnit.scala 240:10]
    end else if (_T_26) begin // @[InputUnit.scala 241:34]
      mask <= _mask_T_17; // @[InputUnit.scala 242:10]
    end
    salloc_outs_0_valid <= salloc_arb_io_out_0_ready & salloc_arb_io_out_0_valid; // @[Decoupled.scala 51:35]
    salloc_outs_0_out_vid <= _virt_channel_T_10 | _virt_channel_T_11; // @[Mux.scala 27:73]
    salloc_outs_0_flit_head <= salloc_arb_io_chosen_oh_0[0] & input_buffer_io_deq_0_bits_head |
      salloc_arb_io_chosen_oh_0[1] & input_buffer_io_deq_1_bits_head | salloc_arb_io_chosen_oh_0[2] &
      input_buffer_io_deq_2_bits_head | salloc_arb_io_chosen_oh_0[3] & input_buffer_io_deq_3_bits_head; // @[Mux.scala 27:73]
    salloc_outs_0_flit_tail <= salloc_arb_io_chosen_oh_0[0] & input_buffer_io_deq_0_bits_tail |
      salloc_arb_io_chosen_oh_0[1] & input_buffer_io_deq_1_bits_tail | salloc_arb_io_chosen_oh_0[2] &
      input_buffer_io_deq_2_bits_tail | salloc_arb_io_chosen_oh_0[3] & input_buffer_io_deq_3_bits_tail; // @[Mux.scala 27:73]
    salloc_outs_0_flit_payload <= _salloc_outs_0_flit_payload_T_9 | _salloc_outs_0_flit_payload_T_7; // @[Mux.scala 27:73]
    salloc_outs_0_flit_flow_ingress_node <= _salloc_outs_0_flit_flow_T_30 | _salloc_outs_0_flit_flow_T_28; // @[Mux.scala 27:73]
    salloc_outs_0_flit_flow_egress_node <= _salloc_outs_0_flit_flow_T_16 | _salloc_outs_0_flit_flow_T_14; // @[Mux.scala 27:73]
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T & _T_3 & ~(_GEN_3 == 3'h0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at InputUnit.scala:197 assert(states(id).g === g_i)\n"); // @[InputUnit.scala 197:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_router_req_valid & _T_3 & ~(_GEN_139 == 3'h1)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at InputUnit.scala:224 assert(states(id).g === g_r)\n"); // @[InputUnit.scala 224:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_39 & vcalloc_sel[0] & _T_3 & ~vcalloc_vals_0) begin
          $fwrite(32'h80000002,"Assertion failed\n    at InputUnit.scala:274 assert(states(i).g === g_v)\n"); // @[InputUnit.scala 274:17]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_39 & vcalloc_sel[1] & _T_3 & ~vcalloc_vals_1) begin
          $fwrite(32'h80000002,"Assertion failed\n    at InputUnit.scala:274 assert(states(i).g === g_v)\n"); // @[InputUnit.scala 274:17]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_39 & vcalloc_sel[2] & _T_3 & ~vcalloc_vals_2) begin
          $fwrite(32'h80000002,"Assertion failed\n    at InputUnit.scala:274 assert(states(i).g === g_v)\n"); // @[InputUnit.scala 274:17]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_39 & vcalloc_sel[3] & _T_3 & ~vcalloc_vals_3) begin
          $fwrite(32'h80000002,"Assertion failed\n    at InputUnit.scala:274 assert(states(i).g === g_v)\n"); // @[InputUnit.scala 274:17]
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
  states_0_g = _RAND_0[2:0];
  _RAND_1 = {1{`RANDOM}};
  states_0_vc_sel_2_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  states_0_vc_sel_1_0 = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  states_0_vc_sel_0_0 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  states_0_flow_ingress_node = _RAND_4[1:0];
  _RAND_5 = {1{`RANDOM}};
  states_0_flow_egress_node = _RAND_5[1:0];
  _RAND_6 = {1{`RANDOM}};
  states_1_g = _RAND_6[2:0];
  _RAND_7 = {1{`RANDOM}};
  states_1_vc_sel_2_0 = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  states_1_vc_sel_1_0 = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  states_1_vc_sel_0_0 = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  states_1_vc_sel_0_1 = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  states_1_flow_ingress_node = _RAND_11[1:0];
  _RAND_12 = {1{`RANDOM}};
  states_1_flow_egress_node = _RAND_12[1:0];
  _RAND_13 = {1{`RANDOM}};
  states_2_g = _RAND_13[2:0];
  _RAND_14 = {1{`RANDOM}};
  states_2_vc_sel_2_0 = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  states_2_vc_sel_1_0 = _RAND_15[0:0];
  _RAND_16 = {1{`RANDOM}};
  states_2_vc_sel_1_1 = _RAND_16[0:0];
  _RAND_17 = {1{`RANDOM}};
  states_2_vc_sel_0_0 = _RAND_17[0:0];
  _RAND_18 = {1{`RANDOM}};
  states_2_vc_sel_0_1 = _RAND_18[0:0];
  _RAND_19 = {1{`RANDOM}};
  states_2_vc_sel_0_2 = _RAND_19[0:0];
  _RAND_20 = {1{`RANDOM}};
  states_2_flow_ingress_node = _RAND_20[1:0];
  _RAND_21 = {1{`RANDOM}};
  states_2_flow_egress_node = _RAND_21[1:0];
  _RAND_22 = {1{`RANDOM}};
  states_3_g = _RAND_22[2:0];
  _RAND_23 = {1{`RANDOM}};
  states_3_vc_sel_2_0 = _RAND_23[0:0];
  _RAND_24 = {1{`RANDOM}};
  states_3_vc_sel_1_0 = _RAND_24[0:0];
  _RAND_25 = {1{`RANDOM}};
  states_3_vc_sel_1_1 = _RAND_25[0:0];
  _RAND_26 = {1{`RANDOM}};
  states_3_vc_sel_1_2 = _RAND_26[0:0];
  _RAND_27 = {1{`RANDOM}};
  states_3_vc_sel_0_0 = _RAND_27[0:0];
  _RAND_28 = {1{`RANDOM}};
  states_3_vc_sel_0_1 = _RAND_28[0:0];
  _RAND_29 = {1{`RANDOM}};
  states_3_vc_sel_0_2 = _RAND_29[0:0];
  _RAND_30 = {1{`RANDOM}};
  states_3_vc_sel_0_3 = _RAND_30[0:0];
  _RAND_31 = {1{`RANDOM}};
  states_3_flow_ingress_node = _RAND_31[1:0];
  _RAND_32 = {1{`RANDOM}};
  states_3_flow_egress_node = _RAND_32[1:0];
  _RAND_33 = {1{`RANDOM}};
  mask = _RAND_33[3:0];
  _RAND_34 = {1{`RANDOM}};
  salloc_outs_0_valid = _RAND_34[0:0];
  _RAND_35 = {1{`RANDOM}};
  salloc_outs_0_out_vid = _RAND_35[1:0];
  _RAND_36 = {1{`RANDOM}};
  salloc_outs_0_flit_head = _RAND_36[0:0];
  _RAND_37 = {1{`RANDOM}};
  salloc_outs_0_flit_tail = _RAND_37[0:0];
  _RAND_38 = {3{`RANDOM}};
  salloc_outs_0_flit_payload = _RAND_38[81:0];
  _RAND_39 = {1{`RANDOM}};
  salloc_outs_0_flit_flow_ingress_node = _RAND_39[1:0];
  _RAND_40 = {1{`RANDOM}};
  salloc_outs_0_flit_flow_egress_node = _RAND_40[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
  always @(posedge clock) begin
    //
    if (_T & ~reset) begin
      assert(1'h1); // @[InputUnit.scala 196:13]
    end
    //
    if (_T & _T_3) begin
      assert(_GEN_3 == 3'h0); // @[InputUnit.scala 197:13]
    end
    //
    if (io_router_req_valid & _T_3) begin
      assert(_GEN_139 == 3'h1); // @[InputUnit.scala 224:11]
    end
    //
    if (_T_39 & vcalloc_sel[0] & _T_3) begin
      assert(vcalloc_vals_0); // @[InputUnit.scala 274:17]
    end
    //
    if (_T_39 & vcalloc_sel[1] & _T_3) begin
      assert(vcalloc_vals_1); // @[InputUnit.scala 274:17]
    end
    //
    if (_T_39 & vcalloc_sel[2] & _T_3) begin
      assert(vcalloc_vals_2); // @[InputUnit.scala 274:17]
    end
    //
    if (_T_39 & vcalloc_sel[3] & _T_3) begin
      assert(vcalloc_vals_3); // @[InputUnit.scala 274:17]
    end
  end
endmodule