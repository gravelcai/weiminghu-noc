module SwitchAllocator(
  input   clock,
  input   reset,
  output  io_req_2_0_ready,
  input   io_req_2_0_valid,
  input   io_req_2_0_bits_vc_sel_2_0,
  input   io_req_2_0_bits_vc_sel_1_0,
  input   io_req_2_0_bits_vc_sel_1_1,
  input   io_req_2_0_bits_vc_sel_1_2,
  input   io_req_2_0_bits_vc_sel_1_3,
  input   io_req_2_0_bits_vc_sel_0_0,
  input   io_req_2_0_bits_vc_sel_0_1,
  input   io_req_2_0_bits_vc_sel_0_2,
  input   io_req_2_0_bits_vc_sel_0_3,
  input   io_req_2_0_bits_tail,
  output  io_req_1_0_ready,
  input   io_req_1_0_valid,
  input   io_req_1_0_bits_vc_sel_2_0,
  input   io_req_1_0_bits_vc_sel_1_0,
  input   io_req_1_0_bits_vc_sel_1_1,
  input   io_req_1_0_bits_vc_sel_1_2,
  input   io_req_1_0_bits_vc_sel_1_3,
  input   io_req_1_0_bits_vc_sel_0_0,
  input   io_req_1_0_bits_vc_sel_0_1,
  input   io_req_1_0_bits_vc_sel_0_2,
  input   io_req_1_0_bits_vc_sel_0_3,
  input   io_req_1_0_bits_tail,
  output  io_req_0_0_ready,
  input   io_req_0_0_valid,
  input   io_req_0_0_bits_vc_sel_2_0,
  input   io_req_0_0_bits_vc_sel_1_0,
  input   io_req_0_0_bits_vc_sel_1_1,
  input   io_req_0_0_bits_vc_sel_1_2,
  input   io_req_0_0_bits_vc_sel_1_3,
  input   io_req_0_0_bits_vc_sel_0_0,
  input   io_req_0_0_bits_vc_sel_0_1,
  input   io_req_0_0_bits_vc_sel_0_2,
  input   io_req_0_0_bits_vc_sel_0_3,
  input   io_req_0_0_bits_tail,
  output  io_credit_alloc_2_0_alloc,
  output  io_credit_alloc_2_0_tail,
  output  io_credit_alloc_1_0_alloc,
  output  io_credit_alloc_1_1_alloc,
  output  io_credit_alloc_1_2_alloc,
  output  io_credit_alloc_1_3_alloc,
  output  io_credit_alloc_0_0_alloc,
  output  io_credit_alloc_0_1_alloc,
  output  io_credit_alloc_0_2_alloc,
  output  io_credit_alloc_0_3_alloc,
  output  io_switch_sel_2_0_2_0,
  output  io_switch_sel_2_0_1_0,
  output  io_switch_sel_2_0_0_0,
  output  io_switch_sel_1_0_2_0,
  output  io_switch_sel_1_0_1_0,
  output  io_switch_sel_1_0_0_0,
  output  io_switch_sel_0_0_2_0,
  output  io_switch_sel_0_0_1_0,
  output  io_switch_sel_0_0_0_0
);
  wire  arbs_0_clock; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_reset; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_0_ready; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_0_valid; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_0_bits_vc_sel_2_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_0_bits_vc_sel_1_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_0_bits_vc_sel_1_1; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_0_bits_vc_sel_1_2; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_0_bits_vc_sel_1_3; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_0_bits_vc_sel_0_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_0_bits_vc_sel_0_1; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_0_bits_vc_sel_0_2; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_0_bits_vc_sel_0_3; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_0_bits_tail; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_1_ready; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_1_valid; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_1_bits_vc_sel_2_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_1_bits_vc_sel_1_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_1_bits_vc_sel_1_1; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_1_bits_vc_sel_1_2; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_1_bits_vc_sel_1_3; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_1_bits_vc_sel_0_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_1_bits_vc_sel_0_1; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_1_bits_vc_sel_0_2; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_1_bits_vc_sel_0_3; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_1_bits_tail; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_2_ready; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_2_valid; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_2_bits_vc_sel_2_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_2_bits_vc_sel_1_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_2_bits_vc_sel_1_1; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_2_bits_vc_sel_1_2; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_2_bits_vc_sel_1_3; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_2_bits_vc_sel_0_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_2_bits_vc_sel_0_1; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_2_bits_vc_sel_0_2; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_2_bits_vc_sel_0_3; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_in_2_bits_tail; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_out_0_valid; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_out_0_bits_vc_sel_2_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_out_0_bits_vc_sel_1_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_out_0_bits_vc_sel_1_1; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_out_0_bits_vc_sel_1_2; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_out_0_bits_vc_sel_1_3; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_out_0_bits_vc_sel_0_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_out_0_bits_vc_sel_0_1; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_out_0_bits_vc_sel_0_2; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_out_0_bits_vc_sel_0_3; // @[SwitchAllocator.scala 83:45]
  wire  arbs_0_io_out_0_bits_tail; // @[SwitchAllocator.scala 83:45]
  wire [2:0] arbs_0_io_chosen_oh_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_clock; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_reset; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_0_ready; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_0_valid; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_0_bits_vc_sel_2_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_0_bits_vc_sel_1_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_0_bits_vc_sel_1_1; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_0_bits_vc_sel_1_2; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_0_bits_vc_sel_1_3; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_0_bits_vc_sel_0_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_0_bits_vc_sel_0_1; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_0_bits_vc_sel_0_2; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_0_bits_vc_sel_0_3; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_0_bits_tail; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_1_ready; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_1_valid; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_1_bits_vc_sel_2_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_1_bits_vc_sel_1_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_1_bits_vc_sel_1_1; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_1_bits_vc_sel_1_2; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_1_bits_vc_sel_1_3; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_1_bits_vc_sel_0_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_1_bits_vc_sel_0_1; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_1_bits_vc_sel_0_2; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_1_bits_vc_sel_0_3; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_1_bits_tail; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_2_ready; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_2_valid; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_2_bits_vc_sel_2_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_2_bits_vc_sel_1_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_2_bits_vc_sel_1_1; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_2_bits_vc_sel_1_2; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_2_bits_vc_sel_1_3; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_2_bits_vc_sel_0_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_2_bits_vc_sel_0_1; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_2_bits_vc_sel_0_2; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_2_bits_vc_sel_0_3; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_in_2_bits_tail; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_out_0_valid; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_out_0_bits_vc_sel_2_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_out_0_bits_vc_sel_1_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_out_0_bits_vc_sel_1_1; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_out_0_bits_vc_sel_1_2; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_out_0_bits_vc_sel_1_3; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_out_0_bits_vc_sel_0_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_out_0_bits_vc_sel_0_1; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_out_0_bits_vc_sel_0_2; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_out_0_bits_vc_sel_0_3; // @[SwitchAllocator.scala 83:45]
  wire  arbs_1_io_out_0_bits_tail; // @[SwitchAllocator.scala 83:45]
  wire [2:0] arbs_1_io_chosen_oh_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_clock; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_reset; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_0_ready; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_0_valid; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_0_bits_vc_sel_2_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_0_bits_vc_sel_1_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_0_bits_vc_sel_1_1; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_0_bits_vc_sel_1_2; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_0_bits_vc_sel_1_3; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_0_bits_vc_sel_0_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_0_bits_vc_sel_0_1; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_0_bits_vc_sel_0_2; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_0_bits_vc_sel_0_3; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_0_bits_tail; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_1_ready; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_1_valid; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_1_bits_vc_sel_2_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_1_bits_vc_sel_1_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_1_bits_vc_sel_1_1; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_1_bits_vc_sel_1_2; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_1_bits_vc_sel_1_3; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_1_bits_vc_sel_0_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_1_bits_vc_sel_0_1; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_1_bits_vc_sel_0_2; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_1_bits_vc_sel_0_3; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_1_bits_tail; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_2_ready; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_2_valid; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_2_bits_vc_sel_2_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_2_bits_vc_sel_1_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_2_bits_vc_sel_1_1; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_2_bits_vc_sel_1_2; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_2_bits_vc_sel_1_3; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_2_bits_vc_sel_0_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_2_bits_vc_sel_0_1; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_2_bits_vc_sel_0_2; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_2_bits_vc_sel_0_3; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_in_2_bits_tail; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_out_0_valid; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_out_0_bits_vc_sel_2_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_out_0_bits_vc_sel_1_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_out_0_bits_vc_sel_1_1; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_out_0_bits_vc_sel_1_2; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_out_0_bits_vc_sel_1_3; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_out_0_bits_vc_sel_0_0; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_out_0_bits_vc_sel_0_1; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_out_0_bits_vc_sel_0_2; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_out_0_bits_vc_sel_0_3; // @[SwitchAllocator.scala 83:45]
  wire  arbs_2_io_out_0_bits_tail; // @[SwitchAllocator.scala 83:45]
  wire [2:0] arbs_2_io_chosen_oh_0; // @[SwitchAllocator.scala 83:45]
  wire  fires__0 = arbs_0_io_in_0_ready & arbs_0_io_in_0_valid; // @[Decoupled.scala 51:35]
  wire  fires__1 = arbs_1_io_in_0_ready & arbs_1_io_in_0_valid; // @[Decoupled.scala 51:35]
  wire  fires__2 = arbs_2_io_in_0_ready & arbs_2_io_in_0_valid; // @[Decoupled.scala 51:35]
  wire  fires_1_0 = arbs_0_io_in_1_ready & arbs_0_io_in_1_valid; // @[Decoupled.scala 51:35]
  wire  fires_1_1 = arbs_1_io_in_1_ready & arbs_1_io_in_1_valid; // @[Decoupled.scala 51:35]
  wire  fires_1_2 = arbs_2_io_in_1_ready & arbs_2_io_in_1_valid; // @[Decoupled.scala 51:35]
  wire  fires_2_0 = arbs_0_io_in_2_ready & arbs_0_io_in_2_valid; // @[Decoupled.scala 51:35]
  wire  fires_2_1 = arbs_1_io_in_2_ready & arbs_1_io_in_2_valid; // @[Decoupled.scala 51:35]
  wire  fires_2_2 = arbs_2_io_in_2_ready & arbs_2_io_in_2_valid; // @[Decoupled.scala 51:35]
  SwitchArbiter_2 arbs_0 ( // @[SwitchAllocator.scala 83:45]
    .clock(arbs_0_clock),
    .reset(arbs_0_reset),
    .io_in_0_ready(arbs_0_io_in_0_ready),
    .io_in_0_valid(arbs_0_io_in_0_valid),
    .io_in_0_bits_vc_sel_2_0(arbs_0_io_in_0_bits_vc_sel_2_0),
    .io_in_0_bits_vc_sel_1_0(arbs_0_io_in_0_bits_vc_sel_1_0),
    .io_in_0_bits_vc_sel_1_1(arbs_0_io_in_0_bits_vc_sel_1_1),
    .io_in_0_bits_vc_sel_1_2(arbs_0_io_in_0_bits_vc_sel_1_2),
    .io_in_0_bits_vc_sel_1_3(arbs_0_io_in_0_bits_vc_sel_1_3),
    .io_in_0_bits_vc_sel_0_0(arbs_0_io_in_0_bits_vc_sel_0_0),
    .io_in_0_bits_vc_sel_0_1(arbs_0_io_in_0_bits_vc_sel_0_1),
    .io_in_0_bits_vc_sel_0_2(arbs_0_io_in_0_bits_vc_sel_0_2),
    .io_in_0_bits_vc_sel_0_3(arbs_0_io_in_0_bits_vc_sel_0_3),
    .io_in_0_bits_tail(arbs_0_io_in_0_bits_tail),
    .io_in_1_ready(arbs_0_io_in_1_ready),
    .io_in_1_valid(arbs_0_io_in_1_valid),
    .io_in_1_bits_vc_sel_2_0(arbs_0_io_in_1_bits_vc_sel_2_0),
    .io_in_1_bits_vc_sel_1_0(arbs_0_io_in_1_bits_vc_sel_1_0),
    .io_in_1_bits_vc_sel_1_1(arbs_0_io_in_1_bits_vc_sel_1_1),
    .io_in_1_bits_vc_sel_1_2(arbs_0_io_in_1_bits_vc_sel_1_2),
    .io_in_1_bits_vc_sel_1_3(arbs_0_io_in_1_bits_vc_sel_1_3),
    .io_in_1_bits_vc_sel_0_0(arbs_0_io_in_1_bits_vc_sel_0_0),
    .io_in_1_bits_vc_sel_0_1(arbs_0_io_in_1_bits_vc_sel_0_1),
    .io_in_1_bits_vc_sel_0_2(arbs_0_io_in_1_bits_vc_sel_0_2),
    .io_in_1_bits_vc_sel_0_3(arbs_0_io_in_1_bits_vc_sel_0_3),
    .io_in_1_bits_tail(arbs_0_io_in_1_bits_tail),
    .io_in_2_ready(arbs_0_io_in_2_ready),
    .io_in_2_valid(arbs_0_io_in_2_valid),
    .io_in_2_bits_vc_sel_2_0(arbs_0_io_in_2_bits_vc_sel_2_0),
    .io_in_2_bits_vc_sel_1_0(arbs_0_io_in_2_bits_vc_sel_1_0),
    .io_in_2_bits_vc_sel_1_1(arbs_0_io_in_2_bits_vc_sel_1_1),
    .io_in_2_bits_vc_sel_1_2(arbs_0_io_in_2_bits_vc_sel_1_2),
    .io_in_2_bits_vc_sel_1_3(arbs_0_io_in_2_bits_vc_sel_1_3),
    .io_in_2_bits_vc_sel_0_0(arbs_0_io_in_2_bits_vc_sel_0_0),
    .io_in_2_bits_vc_sel_0_1(arbs_0_io_in_2_bits_vc_sel_0_1),
    .io_in_2_bits_vc_sel_0_2(arbs_0_io_in_2_bits_vc_sel_0_2),
    .io_in_2_bits_vc_sel_0_3(arbs_0_io_in_2_bits_vc_sel_0_3),
    .io_in_2_bits_tail(arbs_0_io_in_2_bits_tail),
    .io_out_0_valid(arbs_0_io_out_0_valid),
    .io_out_0_bits_vc_sel_2_0(arbs_0_io_out_0_bits_vc_sel_2_0),
    .io_out_0_bits_vc_sel_1_0(arbs_0_io_out_0_bits_vc_sel_1_0),
    .io_out_0_bits_vc_sel_1_1(arbs_0_io_out_0_bits_vc_sel_1_1),
    .io_out_0_bits_vc_sel_1_2(arbs_0_io_out_0_bits_vc_sel_1_2),
    .io_out_0_bits_vc_sel_1_3(arbs_0_io_out_0_bits_vc_sel_1_3),
    .io_out_0_bits_vc_sel_0_0(arbs_0_io_out_0_bits_vc_sel_0_0),
    .io_out_0_bits_vc_sel_0_1(arbs_0_io_out_0_bits_vc_sel_0_1),
    .io_out_0_bits_vc_sel_0_2(arbs_0_io_out_0_bits_vc_sel_0_2),
    .io_out_0_bits_vc_sel_0_3(arbs_0_io_out_0_bits_vc_sel_0_3),
    .io_out_0_bits_tail(arbs_0_io_out_0_bits_tail),
    .io_chosen_oh_0(arbs_0_io_chosen_oh_0)
  );
  SwitchArbiter_2 arbs_1 ( // @[SwitchAllocator.scala 83:45]
    .clock(arbs_1_clock),
    .reset(arbs_1_reset),
    .io_in_0_ready(arbs_1_io_in_0_ready),
    .io_in_0_valid(arbs_1_io_in_0_valid),
    .io_in_0_bits_vc_sel_2_0(arbs_1_io_in_0_bits_vc_sel_2_0),
    .io_in_0_bits_vc_sel_1_0(arbs_1_io_in_0_bits_vc_sel_1_0),
    .io_in_0_bits_vc_sel_1_1(arbs_1_io_in_0_bits_vc_sel_1_1),
    .io_in_0_bits_vc_sel_1_2(arbs_1_io_in_0_bits_vc_sel_1_2),
    .io_in_0_bits_vc_sel_1_3(arbs_1_io_in_0_bits_vc_sel_1_3),
    .io_in_0_bits_vc_sel_0_0(arbs_1_io_in_0_bits_vc_sel_0_0),
    .io_in_0_bits_vc_sel_0_1(arbs_1_io_in_0_bits_vc_sel_0_1),
    .io_in_0_bits_vc_sel_0_2(arbs_1_io_in_0_bits_vc_sel_0_2),
    .io_in_0_bits_vc_sel_0_3(arbs_1_io_in_0_bits_vc_sel_0_3),
    .io_in_0_bits_tail(arbs_1_io_in_0_bits_tail),
    .io_in_1_ready(arbs_1_io_in_1_ready),
    .io_in_1_valid(arbs_1_io_in_1_valid),
    .io_in_1_bits_vc_sel_2_0(arbs_1_io_in_1_bits_vc_sel_2_0),
    .io_in_1_bits_vc_sel_1_0(arbs_1_io_in_1_bits_vc_sel_1_0),
    .io_in_1_bits_vc_sel_1_1(arbs_1_io_in_1_bits_vc_sel_1_1),
    .io_in_1_bits_vc_sel_1_2(arbs_1_io_in_1_bits_vc_sel_1_2),
    .io_in_1_bits_vc_sel_1_3(arbs_1_io_in_1_bits_vc_sel_1_3),
    .io_in_1_bits_vc_sel_0_0(arbs_1_io_in_1_bits_vc_sel_0_0),
    .io_in_1_bits_vc_sel_0_1(arbs_1_io_in_1_bits_vc_sel_0_1),
    .io_in_1_bits_vc_sel_0_2(arbs_1_io_in_1_bits_vc_sel_0_2),
    .io_in_1_bits_vc_sel_0_3(arbs_1_io_in_1_bits_vc_sel_0_3),
    .io_in_1_bits_tail(arbs_1_io_in_1_bits_tail),
    .io_in_2_ready(arbs_1_io_in_2_ready),
    .io_in_2_valid(arbs_1_io_in_2_valid),
    .io_in_2_bits_vc_sel_2_0(arbs_1_io_in_2_bits_vc_sel_2_0),
    .io_in_2_bits_vc_sel_1_0(arbs_1_io_in_2_bits_vc_sel_1_0),
    .io_in_2_bits_vc_sel_1_1(arbs_1_io_in_2_bits_vc_sel_1_1),
    .io_in_2_bits_vc_sel_1_2(arbs_1_io_in_2_bits_vc_sel_1_2),
    .io_in_2_bits_vc_sel_1_3(arbs_1_io_in_2_bits_vc_sel_1_3),
    .io_in_2_bits_vc_sel_0_0(arbs_1_io_in_2_bits_vc_sel_0_0),
    .io_in_2_bits_vc_sel_0_1(arbs_1_io_in_2_bits_vc_sel_0_1),
    .io_in_2_bits_vc_sel_0_2(arbs_1_io_in_2_bits_vc_sel_0_2),
    .io_in_2_bits_vc_sel_0_3(arbs_1_io_in_2_bits_vc_sel_0_3),
    .io_in_2_bits_tail(arbs_1_io_in_2_bits_tail),
    .io_out_0_valid(arbs_1_io_out_0_valid),
    .io_out_0_bits_vc_sel_2_0(arbs_1_io_out_0_bits_vc_sel_2_0),
    .io_out_0_bits_vc_sel_1_0(arbs_1_io_out_0_bits_vc_sel_1_0),
    .io_out_0_bits_vc_sel_1_1(arbs_1_io_out_0_bits_vc_sel_1_1),
    .io_out_0_bits_vc_sel_1_2(arbs_1_io_out_0_bits_vc_sel_1_2),
    .io_out_0_bits_vc_sel_1_3(arbs_1_io_out_0_bits_vc_sel_1_3),
    .io_out_0_bits_vc_sel_0_0(arbs_1_io_out_0_bits_vc_sel_0_0),
    .io_out_0_bits_vc_sel_0_1(arbs_1_io_out_0_bits_vc_sel_0_1),
    .io_out_0_bits_vc_sel_0_2(arbs_1_io_out_0_bits_vc_sel_0_2),
    .io_out_0_bits_vc_sel_0_3(arbs_1_io_out_0_bits_vc_sel_0_3),
    .io_out_0_bits_tail(arbs_1_io_out_0_bits_tail),
    .io_chosen_oh_0(arbs_1_io_chosen_oh_0)
  );
  SwitchArbiter_2 arbs_2 ( // @[SwitchAllocator.scala 83:45]
    .clock(arbs_2_clock),
    .reset(arbs_2_reset),
    .io_in_0_ready(arbs_2_io_in_0_ready),
    .io_in_0_valid(arbs_2_io_in_0_valid),
    .io_in_0_bits_vc_sel_2_0(arbs_2_io_in_0_bits_vc_sel_2_0),
    .io_in_0_bits_vc_sel_1_0(arbs_2_io_in_0_bits_vc_sel_1_0),
    .io_in_0_bits_vc_sel_1_1(arbs_2_io_in_0_bits_vc_sel_1_1),
    .io_in_0_bits_vc_sel_1_2(arbs_2_io_in_0_bits_vc_sel_1_2),
    .io_in_0_bits_vc_sel_1_3(arbs_2_io_in_0_bits_vc_sel_1_3),
    .io_in_0_bits_vc_sel_0_0(arbs_2_io_in_0_bits_vc_sel_0_0),
    .io_in_0_bits_vc_sel_0_1(arbs_2_io_in_0_bits_vc_sel_0_1),
    .io_in_0_bits_vc_sel_0_2(arbs_2_io_in_0_bits_vc_sel_0_2),
    .io_in_0_bits_vc_sel_0_3(arbs_2_io_in_0_bits_vc_sel_0_3),
    .io_in_0_bits_tail(arbs_2_io_in_0_bits_tail),
    .io_in_1_ready(arbs_2_io_in_1_ready),
    .io_in_1_valid(arbs_2_io_in_1_valid),
    .io_in_1_bits_vc_sel_2_0(arbs_2_io_in_1_bits_vc_sel_2_0),
    .io_in_1_bits_vc_sel_1_0(arbs_2_io_in_1_bits_vc_sel_1_0),
    .io_in_1_bits_vc_sel_1_1(arbs_2_io_in_1_bits_vc_sel_1_1),
    .io_in_1_bits_vc_sel_1_2(arbs_2_io_in_1_bits_vc_sel_1_2),
    .io_in_1_bits_vc_sel_1_3(arbs_2_io_in_1_bits_vc_sel_1_3),
    .io_in_1_bits_vc_sel_0_0(arbs_2_io_in_1_bits_vc_sel_0_0),
    .io_in_1_bits_vc_sel_0_1(arbs_2_io_in_1_bits_vc_sel_0_1),
    .io_in_1_bits_vc_sel_0_2(arbs_2_io_in_1_bits_vc_sel_0_2),
    .io_in_1_bits_vc_sel_0_3(arbs_2_io_in_1_bits_vc_sel_0_3),
    .io_in_1_bits_tail(arbs_2_io_in_1_bits_tail),
    .io_in_2_ready(arbs_2_io_in_2_ready),
    .io_in_2_valid(arbs_2_io_in_2_valid),
    .io_in_2_bits_vc_sel_2_0(arbs_2_io_in_2_bits_vc_sel_2_0),
    .io_in_2_bits_vc_sel_1_0(arbs_2_io_in_2_bits_vc_sel_1_0),
    .io_in_2_bits_vc_sel_1_1(arbs_2_io_in_2_bits_vc_sel_1_1),
    .io_in_2_bits_vc_sel_1_2(arbs_2_io_in_2_bits_vc_sel_1_2),
    .io_in_2_bits_vc_sel_1_3(arbs_2_io_in_2_bits_vc_sel_1_3),
    .io_in_2_bits_vc_sel_0_0(arbs_2_io_in_2_bits_vc_sel_0_0),
    .io_in_2_bits_vc_sel_0_1(arbs_2_io_in_2_bits_vc_sel_0_1),
    .io_in_2_bits_vc_sel_0_2(arbs_2_io_in_2_bits_vc_sel_0_2),
    .io_in_2_bits_vc_sel_0_3(arbs_2_io_in_2_bits_vc_sel_0_3),
    .io_in_2_bits_tail(arbs_2_io_in_2_bits_tail),
    .io_out_0_valid(arbs_2_io_out_0_valid),
    .io_out_0_bits_vc_sel_2_0(arbs_2_io_out_0_bits_vc_sel_2_0),
    .io_out_0_bits_vc_sel_1_0(arbs_2_io_out_0_bits_vc_sel_1_0),
    .io_out_0_bits_vc_sel_1_1(arbs_2_io_out_0_bits_vc_sel_1_1),
    .io_out_0_bits_vc_sel_1_2(arbs_2_io_out_0_bits_vc_sel_1_2),
    .io_out_0_bits_vc_sel_1_3(arbs_2_io_out_0_bits_vc_sel_1_3),
    .io_out_0_bits_vc_sel_0_0(arbs_2_io_out_0_bits_vc_sel_0_0),
    .io_out_0_bits_vc_sel_0_1(arbs_2_io_out_0_bits_vc_sel_0_1),
    .io_out_0_bits_vc_sel_0_2(arbs_2_io_out_0_bits_vc_sel_0_2),
    .io_out_0_bits_vc_sel_0_3(arbs_2_io_out_0_bits_vc_sel_0_3),
    .io_out_0_bits_tail(arbs_2_io_out_0_bits_tail),
    .io_chosen_oh_0(arbs_2_io_chosen_oh_0)
  );
  assign io_req_2_0_ready = fires_2_0 | fires_2_1 | fires_2_2; // @[SwitchAllocator.scala 99:30]
  assign io_req_1_0_ready = fires_1_0 | fires_1_1 | fires_1_2; // @[SwitchAllocator.scala 99:30]
  assign io_req_0_0_ready = fires__0 | fires__1 | fires__2; // @[SwitchAllocator.scala 99:30]
  assign io_credit_alloc_2_0_alloc = arbs_2_io_out_0_valid & arbs_2_io_out_0_bits_vc_sel_2_0; // @[SwitchAllocator.scala 120:33]
  assign io_credit_alloc_2_0_tail = arbs_2_io_out_0_valid & arbs_2_io_out_0_bits_vc_sel_2_0 & arbs_2_io_out_0_bits_tail; // @[SwitchAllocator.scala 120:67 122:21 116:44]
  assign io_credit_alloc_1_0_alloc = arbs_1_io_out_0_valid & arbs_1_io_out_0_bits_vc_sel_1_0; // @[SwitchAllocator.scala 120:33]
  assign io_credit_alloc_1_1_alloc = arbs_1_io_out_0_valid & arbs_1_io_out_0_bits_vc_sel_1_1; // @[SwitchAllocator.scala 120:33]
  assign io_credit_alloc_1_2_alloc = arbs_1_io_out_0_valid & arbs_1_io_out_0_bits_vc_sel_1_2; // @[SwitchAllocator.scala 120:33]
  assign io_credit_alloc_1_3_alloc = arbs_1_io_out_0_valid & arbs_1_io_out_0_bits_vc_sel_1_3; // @[SwitchAllocator.scala 120:33]
  assign io_credit_alloc_0_0_alloc = arbs_0_io_out_0_valid & arbs_0_io_out_0_bits_vc_sel_0_0; // @[SwitchAllocator.scala 120:33]
  assign io_credit_alloc_0_1_alloc = arbs_0_io_out_0_valid & arbs_0_io_out_0_bits_vc_sel_0_1; // @[SwitchAllocator.scala 120:33]
  assign io_credit_alloc_0_2_alloc = arbs_0_io_out_0_valid & arbs_0_io_out_0_bits_vc_sel_0_2; // @[SwitchAllocator.scala 120:33]
  assign io_credit_alloc_0_3_alloc = arbs_0_io_out_0_valid & arbs_0_io_out_0_bits_vc_sel_0_3; // @[SwitchAllocator.scala 120:33]
  assign io_switch_sel_2_0_2_0 = arbs_2_io_in_2_valid & arbs_2_io_chosen_oh_0[2] & arbs_2_io_out_0_valid; // @[SwitchAllocator.scala 108:97]
  assign io_switch_sel_2_0_1_0 = arbs_2_io_in_1_valid & arbs_2_io_chosen_oh_0[1] & arbs_2_io_out_0_valid; // @[SwitchAllocator.scala 108:97]
  assign io_switch_sel_2_0_0_0 = arbs_2_io_in_0_valid & arbs_2_io_chosen_oh_0[0] & arbs_2_io_out_0_valid; // @[SwitchAllocator.scala 108:97]
  assign io_switch_sel_1_0_2_0 = arbs_1_io_in_2_valid & arbs_1_io_chosen_oh_0[2] & arbs_1_io_out_0_valid; // @[SwitchAllocator.scala 108:97]
  assign io_switch_sel_1_0_1_0 = arbs_1_io_in_1_valid & arbs_1_io_chosen_oh_0[1] & arbs_1_io_out_0_valid; // @[SwitchAllocator.scala 108:97]
  assign io_switch_sel_1_0_0_0 = arbs_1_io_in_0_valid & arbs_1_io_chosen_oh_0[0] & arbs_1_io_out_0_valid; // @[SwitchAllocator.scala 108:97]
  assign io_switch_sel_0_0_2_0 = arbs_0_io_in_2_valid & arbs_0_io_chosen_oh_0[2] & arbs_0_io_out_0_valid; // @[SwitchAllocator.scala 108:97]
  assign io_switch_sel_0_0_1_0 = arbs_0_io_in_1_valid & arbs_0_io_chosen_oh_0[1] & arbs_0_io_out_0_valid; // @[SwitchAllocator.scala 108:97]
  assign io_switch_sel_0_0_0_0 = arbs_0_io_in_0_valid & arbs_0_io_chosen_oh_0[0] & arbs_0_io_out_0_valid; // @[SwitchAllocator.scala 108:97]
  assign arbs_0_clock = clock;
  assign arbs_0_reset = reset;
  assign arbs_0_io_in_0_valid = io_req_0_0_valid & (io_req_0_0_bits_vc_sel_0_0 | io_req_0_0_bits_vc_sel_0_1 |
    io_req_0_0_bits_vc_sel_0_2 | io_req_0_0_bits_vc_sel_0_3); // @[SwitchAllocator.scala 95:37]
  assign arbs_0_io_in_0_bits_vc_sel_2_0 = io_req_0_0_bits_vc_sel_2_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_0_bits_vc_sel_1_0 = io_req_0_0_bits_vc_sel_1_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_0_bits_vc_sel_1_1 = io_req_0_0_bits_vc_sel_1_1; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_0_bits_vc_sel_1_2 = io_req_0_0_bits_vc_sel_1_2; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_0_bits_vc_sel_1_3 = io_req_0_0_bits_vc_sel_1_3; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_0_bits_vc_sel_0_0 = io_req_0_0_bits_vc_sel_0_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_0_bits_vc_sel_0_1 = io_req_0_0_bits_vc_sel_0_1; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_0_bits_vc_sel_0_2 = io_req_0_0_bits_vc_sel_0_2; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_0_bits_vc_sel_0_3 = io_req_0_0_bits_vc_sel_0_3; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_0_bits_tail = io_req_0_0_bits_tail; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_1_valid = io_req_1_0_valid & (io_req_1_0_bits_vc_sel_0_0 | io_req_1_0_bits_vc_sel_0_1 |
    io_req_1_0_bits_vc_sel_0_2 | io_req_1_0_bits_vc_sel_0_3); // @[SwitchAllocator.scala 95:37]
  assign arbs_0_io_in_1_bits_vc_sel_2_0 = io_req_1_0_bits_vc_sel_2_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_1_bits_vc_sel_1_0 = io_req_1_0_bits_vc_sel_1_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_1_bits_vc_sel_1_1 = io_req_1_0_bits_vc_sel_1_1; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_1_bits_vc_sel_1_2 = io_req_1_0_bits_vc_sel_1_2; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_1_bits_vc_sel_1_3 = io_req_1_0_bits_vc_sel_1_3; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_1_bits_vc_sel_0_0 = io_req_1_0_bits_vc_sel_0_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_1_bits_vc_sel_0_1 = io_req_1_0_bits_vc_sel_0_1; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_1_bits_vc_sel_0_2 = io_req_1_0_bits_vc_sel_0_2; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_1_bits_vc_sel_0_3 = io_req_1_0_bits_vc_sel_0_3; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_1_bits_tail = io_req_1_0_bits_tail; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_2_valid = io_req_2_0_valid & (io_req_2_0_bits_vc_sel_0_0 | io_req_2_0_bits_vc_sel_0_1 |
    io_req_2_0_bits_vc_sel_0_2 | io_req_2_0_bits_vc_sel_0_3); // @[SwitchAllocator.scala 95:37]
  assign arbs_0_io_in_2_bits_vc_sel_2_0 = io_req_2_0_bits_vc_sel_2_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_2_bits_vc_sel_1_0 = io_req_2_0_bits_vc_sel_1_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_2_bits_vc_sel_1_1 = io_req_2_0_bits_vc_sel_1_1; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_2_bits_vc_sel_1_2 = io_req_2_0_bits_vc_sel_1_2; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_2_bits_vc_sel_1_3 = io_req_2_0_bits_vc_sel_1_3; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_2_bits_vc_sel_0_0 = io_req_2_0_bits_vc_sel_0_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_2_bits_vc_sel_0_1 = io_req_2_0_bits_vc_sel_0_1; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_2_bits_vc_sel_0_2 = io_req_2_0_bits_vc_sel_0_2; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_2_bits_vc_sel_0_3 = io_req_2_0_bits_vc_sel_0_3; // @[SwitchAllocator.scala 96:25]
  assign arbs_0_io_in_2_bits_tail = io_req_2_0_bits_tail; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_clock = clock;
  assign arbs_1_reset = reset;
  assign arbs_1_io_in_0_valid = io_req_0_0_valid & (io_req_0_0_bits_vc_sel_1_0 | io_req_0_0_bits_vc_sel_1_1 |
    io_req_0_0_bits_vc_sel_1_2 | io_req_0_0_bits_vc_sel_1_3); // @[SwitchAllocator.scala 95:37]
  assign arbs_1_io_in_0_bits_vc_sel_2_0 = io_req_0_0_bits_vc_sel_2_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_0_bits_vc_sel_1_0 = io_req_0_0_bits_vc_sel_1_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_0_bits_vc_sel_1_1 = io_req_0_0_bits_vc_sel_1_1; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_0_bits_vc_sel_1_2 = io_req_0_0_bits_vc_sel_1_2; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_0_bits_vc_sel_1_3 = io_req_0_0_bits_vc_sel_1_3; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_0_bits_vc_sel_0_0 = io_req_0_0_bits_vc_sel_0_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_0_bits_vc_sel_0_1 = io_req_0_0_bits_vc_sel_0_1; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_0_bits_vc_sel_0_2 = io_req_0_0_bits_vc_sel_0_2; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_0_bits_vc_sel_0_3 = io_req_0_0_bits_vc_sel_0_3; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_0_bits_tail = io_req_0_0_bits_tail; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_1_valid = io_req_1_0_valid & (io_req_1_0_bits_vc_sel_1_0 | io_req_1_0_bits_vc_sel_1_1 |
    io_req_1_0_bits_vc_sel_1_2 | io_req_1_0_bits_vc_sel_1_3); // @[SwitchAllocator.scala 95:37]
  assign arbs_1_io_in_1_bits_vc_sel_2_0 = io_req_1_0_bits_vc_sel_2_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_1_bits_vc_sel_1_0 = io_req_1_0_bits_vc_sel_1_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_1_bits_vc_sel_1_1 = io_req_1_0_bits_vc_sel_1_1; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_1_bits_vc_sel_1_2 = io_req_1_0_bits_vc_sel_1_2; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_1_bits_vc_sel_1_3 = io_req_1_0_bits_vc_sel_1_3; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_1_bits_vc_sel_0_0 = io_req_1_0_bits_vc_sel_0_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_1_bits_vc_sel_0_1 = io_req_1_0_bits_vc_sel_0_1; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_1_bits_vc_sel_0_2 = io_req_1_0_bits_vc_sel_0_2; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_1_bits_vc_sel_0_3 = io_req_1_0_bits_vc_sel_0_3; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_1_bits_tail = io_req_1_0_bits_tail; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_2_valid = io_req_2_0_valid & (io_req_2_0_bits_vc_sel_1_0 | io_req_2_0_bits_vc_sel_1_1 |
    io_req_2_0_bits_vc_sel_1_2 | io_req_2_0_bits_vc_sel_1_3); // @[SwitchAllocator.scala 95:37]
  assign arbs_1_io_in_2_bits_vc_sel_2_0 = io_req_2_0_bits_vc_sel_2_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_2_bits_vc_sel_1_0 = io_req_2_0_bits_vc_sel_1_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_2_bits_vc_sel_1_1 = io_req_2_0_bits_vc_sel_1_1; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_2_bits_vc_sel_1_2 = io_req_2_0_bits_vc_sel_1_2; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_2_bits_vc_sel_1_3 = io_req_2_0_bits_vc_sel_1_3; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_2_bits_vc_sel_0_0 = io_req_2_0_bits_vc_sel_0_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_2_bits_vc_sel_0_1 = io_req_2_0_bits_vc_sel_0_1; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_2_bits_vc_sel_0_2 = io_req_2_0_bits_vc_sel_0_2; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_2_bits_vc_sel_0_3 = io_req_2_0_bits_vc_sel_0_3; // @[SwitchAllocator.scala 96:25]
  assign arbs_1_io_in_2_bits_tail = io_req_2_0_bits_tail; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_clock = clock;
  assign arbs_2_reset = reset;
  assign arbs_2_io_in_0_valid = io_req_0_0_valid & io_req_0_0_bits_vc_sel_2_0; // @[SwitchAllocator.scala 95:37]
  assign arbs_2_io_in_0_bits_vc_sel_2_0 = io_req_0_0_bits_vc_sel_2_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_0_bits_vc_sel_1_0 = io_req_0_0_bits_vc_sel_1_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_0_bits_vc_sel_1_1 = io_req_0_0_bits_vc_sel_1_1; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_0_bits_vc_sel_1_2 = io_req_0_0_bits_vc_sel_1_2; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_0_bits_vc_sel_1_3 = io_req_0_0_bits_vc_sel_1_3; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_0_bits_vc_sel_0_0 = io_req_0_0_bits_vc_sel_0_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_0_bits_vc_sel_0_1 = io_req_0_0_bits_vc_sel_0_1; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_0_bits_vc_sel_0_2 = io_req_0_0_bits_vc_sel_0_2; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_0_bits_vc_sel_0_3 = io_req_0_0_bits_vc_sel_0_3; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_0_bits_tail = io_req_0_0_bits_tail; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_1_valid = io_req_1_0_valid & io_req_1_0_bits_vc_sel_2_0; // @[SwitchAllocator.scala 95:37]
  assign arbs_2_io_in_1_bits_vc_sel_2_0 = io_req_1_0_bits_vc_sel_2_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_1_bits_vc_sel_1_0 = io_req_1_0_bits_vc_sel_1_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_1_bits_vc_sel_1_1 = io_req_1_0_bits_vc_sel_1_1; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_1_bits_vc_sel_1_2 = io_req_1_0_bits_vc_sel_1_2; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_1_bits_vc_sel_1_3 = io_req_1_0_bits_vc_sel_1_3; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_1_bits_vc_sel_0_0 = io_req_1_0_bits_vc_sel_0_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_1_bits_vc_sel_0_1 = io_req_1_0_bits_vc_sel_0_1; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_1_bits_vc_sel_0_2 = io_req_1_0_bits_vc_sel_0_2; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_1_bits_vc_sel_0_3 = io_req_1_0_bits_vc_sel_0_3; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_1_bits_tail = io_req_1_0_bits_tail; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_2_valid = io_req_2_0_valid & io_req_2_0_bits_vc_sel_2_0; // @[SwitchAllocator.scala 95:37]
  assign arbs_2_io_in_2_bits_vc_sel_2_0 = io_req_2_0_bits_vc_sel_2_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_2_bits_vc_sel_1_0 = io_req_2_0_bits_vc_sel_1_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_2_bits_vc_sel_1_1 = io_req_2_0_bits_vc_sel_1_1; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_2_bits_vc_sel_1_2 = io_req_2_0_bits_vc_sel_1_2; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_2_bits_vc_sel_1_3 = io_req_2_0_bits_vc_sel_1_3; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_2_bits_vc_sel_0_0 = io_req_2_0_bits_vc_sel_0_0; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_2_bits_vc_sel_0_1 = io_req_2_0_bits_vc_sel_0_1; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_2_bits_vc_sel_0_2 = io_req_2_0_bits_vc_sel_0_2; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_2_bits_vc_sel_0_3 = io_req_2_0_bits_vc_sel_0_3; // @[SwitchAllocator.scala 96:25]
  assign arbs_2_io_in_2_bits_tail = io_req_2_0_bits_tail; // @[SwitchAllocator.scala 96:25]
endmodule