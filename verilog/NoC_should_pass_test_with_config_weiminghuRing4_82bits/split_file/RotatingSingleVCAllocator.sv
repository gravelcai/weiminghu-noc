module RotatingSingleVCAllocator(
  input   clock,
  input   reset,
  output  io_req_2_ready,
  input   io_req_2_valid,
  input   io_req_2_bits_vc_sel_2_0,
  input   io_req_2_bits_vc_sel_1_0,
  input   io_req_2_bits_vc_sel_1_1,
  input   io_req_2_bits_vc_sel_1_2,
  input   io_req_2_bits_vc_sel_1_3,
  input   io_req_2_bits_vc_sel_0_0,
  input   io_req_2_bits_vc_sel_0_1,
  input   io_req_2_bits_vc_sel_0_2,
  input   io_req_2_bits_vc_sel_0_3,
  output  io_req_1_ready,
  input   io_req_1_valid,
  input   io_req_1_bits_vc_sel_2_0,
  input   io_req_1_bits_vc_sel_1_0,
  input   io_req_1_bits_vc_sel_1_1,
  input   io_req_1_bits_vc_sel_1_2,
  input   io_req_1_bits_vc_sel_1_3,
  input   io_req_1_bits_vc_sel_0_0,
  input   io_req_1_bits_vc_sel_0_1,
  input   io_req_1_bits_vc_sel_0_2,
  input   io_req_1_bits_vc_sel_0_3,
  output  io_req_0_ready,
  input   io_req_0_valid,
  input   io_req_0_bits_vc_sel_2_0,
  input   io_req_0_bits_vc_sel_1_0,
  input   io_req_0_bits_vc_sel_1_1,
  input   io_req_0_bits_vc_sel_1_2,
  input   io_req_0_bits_vc_sel_1_3,
  input   io_req_0_bits_vc_sel_0_0,
  input   io_req_0_bits_vc_sel_0_1,
  input   io_req_0_bits_vc_sel_0_2,
  input   io_req_0_bits_vc_sel_0_3,
  output  io_resp_2_vc_sel_2_0,
  output  io_resp_2_vc_sel_1_0,
  output  io_resp_2_vc_sel_1_1,
  output  io_resp_2_vc_sel_1_2,
  output  io_resp_2_vc_sel_1_3,
  output  io_resp_2_vc_sel_0_0,
  output  io_resp_2_vc_sel_0_1,
  output  io_resp_2_vc_sel_0_2,
  output  io_resp_2_vc_sel_0_3,
  output  io_resp_1_vc_sel_2_0,
  output  io_resp_1_vc_sel_1_0,
  output  io_resp_1_vc_sel_1_1,
  output  io_resp_1_vc_sel_1_2,
  output  io_resp_1_vc_sel_1_3,
  output  io_resp_1_vc_sel_0_0,
  output  io_resp_1_vc_sel_0_1,
  output  io_resp_1_vc_sel_0_2,
  output  io_resp_1_vc_sel_0_3,
  output  io_resp_0_vc_sel_2_0,
  output  io_resp_0_vc_sel_1_0,
  output  io_resp_0_vc_sel_1_1,
  output  io_resp_0_vc_sel_1_2,
  output  io_resp_0_vc_sel_1_3,
  output  io_resp_0_vc_sel_0_0,
  output  io_resp_0_vc_sel_0_1,
  output  io_resp_0_vc_sel_0_2,
  output  io_resp_0_vc_sel_0_3,
  input   io_channel_status_2_0_occupied,
  input   io_channel_status_1_0_occupied,
  input   io_channel_status_1_1_occupied,
  input   io_channel_status_1_2_occupied,
  input   io_channel_status_1_3_occupied,
  input   io_channel_status_0_0_occupied,
  input   io_channel_status_0_1_occupied,
  input   io_channel_status_0_2_occupied,
  input   io_channel_status_0_3_occupied,
  output  io_out_allocs_2_0_alloc,
  output  io_out_allocs_1_0_alloc,
  output  io_out_allocs_1_1_alloc,
  output  io_out_allocs_1_2_alloc,
  output  io_out_allocs_1_3_alloc,
  output  io_out_allocs_0_0_alloc,
  output  io_out_allocs_0_1_alloc,
  output  io_out_allocs_0_2_alloc,
  output  io_out_allocs_0_3_alloc
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [2:0] mask; // @[SingleVCAllocator.scala 16:21]
  wire  in_arb_reqs_2_0_0 = io_req_2_bits_vc_sel_0_0 & ~io_channel_status_0_0_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  in_arb_reqs_2_0_1 = io_req_2_bits_vc_sel_0_1 & ~io_channel_status_0_1_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  in_arb_reqs_2_0_2 = io_req_2_bits_vc_sel_0_2 & ~io_channel_status_0_2_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  in_arb_reqs_2_0_3 = io_req_2_bits_vc_sel_0_3 & ~io_channel_status_0_3_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  in_arb_reqs_2_1_0 = io_req_2_bits_vc_sel_1_0 & ~io_channel_status_1_0_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  in_arb_reqs_2_1_1 = io_req_2_bits_vc_sel_1_1 & ~io_channel_status_1_1_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  in_arb_reqs_2_1_2 = io_req_2_bits_vc_sel_1_2 & ~io_channel_status_1_2_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  in_arb_reqs_2_1_3 = io_req_2_bits_vc_sel_1_3 & ~io_channel_status_1_3_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  in_arb_reqs_2_2_0 = io_req_2_bits_vc_sel_2_0 & ~io_channel_status_2_0_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  _in_arb_vals_2_T_7 = in_arb_reqs_2_0_0 | in_arb_reqs_2_0_1 | in_arb_reqs_2_0_2 | in_arb_reqs_2_0_3 | (
    in_arb_reqs_2_1_0 | in_arb_reqs_2_1_1 | in_arb_reqs_2_1_2 | in_arb_reqs_2_1_3) | in_arb_reqs_2_2_0; // @[package.scala 73:59]
  wire  in_arb_vals_2 = io_req_2_valid & _in_arb_vals_2_T_7; // @[SingleVCAllocator.scala 32:39]
  wire  in_arb_reqs_1_0_0 = io_req_1_bits_vc_sel_0_0 & ~io_channel_status_0_0_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  in_arb_reqs_1_0_1 = io_req_1_bits_vc_sel_0_1 & ~io_channel_status_0_1_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  in_arb_reqs_1_0_2 = io_req_1_bits_vc_sel_0_2 & ~io_channel_status_0_2_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  in_arb_reqs_1_0_3 = io_req_1_bits_vc_sel_0_3 & ~io_channel_status_0_3_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  in_arb_reqs_1_1_0 = io_req_1_bits_vc_sel_1_0 & ~io_channel_status_1_0_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  in_arb_reqs_1_1_1 = io_req_1_bits_vc_sel_1_1 & ~io_channel_status_1_1_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  in_arb_reqs_1_1_2 = io_req_1_bits_vc_sel_1_2 & ~io_channel_status_1_2_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  in_arb_reqs_1_1_3 = io_req_1_bits_vc_sel_1_3 & ~io_channel_status_1_3_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  in_arb_reqs_1_2_0 = io_req_1_bits_vc_sel_2_0 & ~io_channel_status_2_0_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  _in_arb_vals_1_T_7 = in_arb_reqs_1_0_0 | in_arb_reqs_1_0_1 | in_arb_reqs_1_0_2 | in_arb_reqs_1_0_3 | (
    in_arb_reqs_1_1_0 | in_arb_reqs_1_1_1 | in_arb_reqs_1_1_2 | in_arb_reqs_1_1_3) | in_arb_reqs_1_2_0; // @[package.scala 73:59]
  wire  in_arb_vals_1 = io_req_1_valid & _in_arb_vals_1_T_7; // @[SingleVCAllocator.scala 32:39]
  wire  in_arb_reqs_0_0_0 = io_req_0_bits_vc_sel_0_0 & ~io_channel_status_0_0_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  in_arb_reqs_0_0_1 = io_req_0_bits_vc_sel_0_1 & ~io_channel_status_0_1_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  in_arb_reqs_0_0_2 = io_req_0_bits_vc_sel_0_2 & ~io_channel_status_0_2_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  in_arb_reqs_0_0_3 = io_req_0_bits_vc_sel_0_3 & ~io_channel_status_0_3_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  in_arb_reqs_0_1_0 = io_req_0_bits_vc_sel_1_0 & ~io_channel_status_1_0_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  in_arb_reqs_0_1_1 = io_req_0_bits_vc_sel_1_1 & ~io_channel_status_1_1_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  in_arb_reqs_0_1_2 = io_req_0_bits_vc_sel_1_2 & ~io_channel_status_1_2_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  in_arb_reqs_0_1_3 = io_req_0_bits_vc_sel_1_3 & ~io_channel_status_1_3_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  in_arb_reqs_0_2_0 = io_req_0_bits_vc_sel_2_0 & ~io_channel_status_2_0_occupied; // @[SingleVCAllocator.scala 28:61]
  wire  _in_arb_vals_0_T_7 = in_arb_reqs_0_0_0 | in_arb_reqs_0_0_1 | in_arb_reqs_0_0_2 | in_arb_reqs_0_0_3 | (
    in_arb_reqs_0_1_0 | in_arb_reqs_0_1_1 | in_arb_reqs_0_1_2 | in_arb_reqs_0_1_3) | in_arb_reqs_0_2_0; // @[package.scala 73:59]
  wire  in_arb_vals_0 = io_req_0_valid & _in_arb_vals_0_T_7; // @[SingleVCAllocator.scala 32:39]
  wire [2:0] _in_arb_filter_T = {in_arb_vals_2,in_arb_vals_1,in_arb_vals_0}; // @[SingleVCAllocator.scala 19:57]
  wire [2:0] _in_arb_filter_T_2 = ~mask; // @[SingleVCAllocator.scala 19:86]
  wire [2:0] _in_arb_filter_T_3 = _in_arb_filter_T & _in_arb_filter_T_2; // @[SingleVCAllocator.scala 19:84]
  wire [5:0] _in_arb_filter_T_4 = {in_arb_vals_2,in_arb_vals_1,in_arb_vals_0,_in_arb_filter_T_3}; // @[Cat.scala 33:92]
  wire [5:0] _in_arb_filter_T_11 = _in_arb_filter_T_4[5] ? 6'h20 : 6'h0; // @[Mux.scala 47:70]
  wire [5:0] _in_arb_filter_T_12 = _in_arb_filter_T_4[4] ? 6'h10 : _in_arb_filter_T_11; // @[Mux.scala 47:70]
  wire [5:0] _in_arb_filter_T_13 = _in_arb_filter_T_4[3] ? 6'h8 : _in_arb_filter_T_12; // @[Mux.scala 47:70]
  wire [5:0] _in_arb_filter_T_14 = _in_arb_filter_T_4[2] ? 6'h4 : _in_arb_filter_T_13; // @[Mux.scala 47:70]
  wire [5:0] _in_arb_filter_T_15 = _in_arb_filter_T_4[1] ? 6'h2 : _in_arb_filter_T_14; // @[Mux.scala 47:70]
  wire [5:0] in_arb_filter = _in_arb_filter_T_4[0] ? 6'h1 : _in_arb_filter_T_15; // @[Mux.scala 47:70]
  wire [2:0] in_arb_sel = in_arb_filter[2:0] | in_arb_filter[5:3]; // @[SingleVCAllocator.scala 20:57]
  wire  _T_1 = in_arb_vals_0 | in_arb_vals_1 | in_arb_vals_2; // @[package.scala 73:59]
  wire [1:0] _mask_T_7 = in_arb_sel[1] ? 2'h3 : 2'h0; // @[Mux.scala 27:73]
  wire [2:0] _mask_T_8 = in_arb_sel[2] ? 3'h7 : 3'h0; // @[Mux.scala 27:73]
  wire [1:0] _GEN_2 = {{1'd0}, in_arb_sel[0]}; // @[Mux.scala 27:73]
  wire [1:0] _mask_T_9 = _GEN_2 | _mask_T_7; // @[Mux.scala 27:73]
  wire [2:0] _GEN_3 = {{1'd0}, _mask_T_9}; // @[Mux.scala 27:73]
  wire [2:0] _mask_T_10 = _GEN_3 | _mask_T_8; // @[Mux.scala 27:73]
  wire  in_vc_sel_0_0 = in_arb_sel[0] & in_arb_reqs_0_0_0 | in_arb_sel[1] & in_arb_reqs_1_0_0 | in_arb_sel[2] &
    in_arb_reqs_2_0_0; // @[Mux.scala 27:73]
  wire  in_vc_sel_0_1 = in_arb_sel[0] & in_arb_reqs_0_0_1 | in_arb_sel[1] & in_arb_reqs_1_0_1 | in_arb_sel[2] &
    in_arb_reqs_2_0_1; // @[Mux.scala 27:73]
  wire  in_vc_sel_0_2 = in_arb_sel[0] & in_arb_reqs_0_0_2 | in_arb_sel[1] & in_arb_reqs_1_0_2 | in_arb_sel[2] &
    in_arb_reqs_2_0_2; // @[Mux.scala 27:73]
  wire  in_vc_sel_0_3 = in_arb_sel[0] & in_arb_reqs_0_0_3 | in_arb_sel[1] & in_arb_reqs_1_0_3 | in_arb_sel[2] &
    in_arb_reqs_2_0_3; // @[Mux.scala 27:73]
  wire  in_vc_sel_1_0 = in_arb_sel[0] & in_arb_reqs_0_1_0 | in_arb_sel[1] & in_arb_reqs_1_1_0 | in_arb_sel[2] &
    in_arb_reqs_2_1_0; // @[Mux.scala 27:73]
  wire  in_vc_sel_1_1 = in_arb_sel[0] & in_arb_reqs_0_1_1 | in_arb_sel[1] & in_arb_reqs_1_1_1 | in_arb_sel[2] &
    in_arb_reqs_2_1_1; // @[Mux.scala 27:73]
  wire  in_vc_sel_1_2 = in_arb_sel[0] & in_arb_reqs_0_1_2 | in_arb_sel[1] & in_arb_reqs_1_1_2 | in_arb_sel[2] &
    in_arb_reqs_2_1_2; // @[Mux.scala 27:73]
  wire  in_vc_sel_1_3 = in_arb_sel[0] & in_arb_reqs_0_1_3 | in_arb_sel[1] & in_arb_reqs_1_1_3 | in_arb_sel[2] &
    in_arb_reqs_2_1_3; // @[Mux.scala 27:73]
  wire  in_vc_sel_2_0 = in_arb_sel[0] & in_arb_reqs_0_2_0 | in_arb_sel[1] & in_arb_reqs_1_2_0 | in_arb_sel[2] &
    in_arb_reqs_2_2_0; // @[Mux.scala 27:73]
  wire  _in_alloc_T_6 = io_req_0_ready & io_req_0_valid; // @[Decoupled.scala 51:35]
  wire  _in_alloc_T_7 = io_req_1_ready & io_req_1_valid; // @[Decoupled.scala 51:35]
  wire  _in_alloc_T_8 = io_req_2_ready & io_req_2_valid; // @[Decoupled.scala 51:35]
  wire  _in_alloc_T_10 = _in_alloc_T_6 | _in_alloc_T_7 | _in_alloc_T_8; // @[package.scala 73:59]
  wire [8:0] _in_alloc_T_11 = {in_vc_sel_2_0,in_vc_sel_1_3,in_vc_sel_1_2,in_vc_sel_1_1,in_vc_sel_1_0,in_vc_sel_0_3,
    in_vc_sel_0_2,in_vc_sel_0_1,in_vc_sel_0_0}; // @[ISLIP.scala 33:18]
  reg [8:0] in_alloc_mask; // @[ISLIP.scala 17:25]
  wire [8:0] _in_alloc_full_T = ~in_alloc_mask; // @[ISLIP.scala 18:31]
  wire [8:0] _in_alloc_full_T_1 = _in_alloc_T_11 & _in_alloc_full_T; // @[ISLIP.scala 18:29]
  wire [17:0] in_alloc_full = {in_vc_sel_2_0,in_vc_sel_1_3,in_vc_sel_1_2,in_vc_sel_1_1,in_vc_sel_1_0,in_vc_sel_0_3,
    in_vc_sel_0_2,in_vc_sel_0_1,in_vc_sel_0_0,_in_alloc_full_T_1}; // @[Cat.scala 33:92]
  wire [17:0] _in_alloc_oh_T_18 = in_alloc_full[17] ? 18'h20000 : 18'h0; // @[Mux.scala 47:70]
  wire [17:0] _in_alloc_oh_T_19 = in_alloc_full[16] ? 18'h10000 : _in_alloc_oh_T_18; // @[Mux.scala 47:70]
  wire [17:0] _in_alloc_oh_T_20 = in_alloc_full[15] ? 18'h8000 : _in_alloc_oh_T_19; // @[Mux.scala 47:70]
  wire [17:0] _in_alloc_oh_T_21 = in_alloc_full[14] ? 18'h4000 : _in_alloc_oh_T_20; // @[Mux.scala 47:70]
  wire [17:0] _in_alloc_oh_T_22 = in_alloc_full[13] ? 18'h2000 : _in_alloc_oh_T_21; // @[Mux.scala 47:70]
  wire [17:0] _in_alloc_oh_T_23 = in_alloc_full[12] ? 18'h1000 : _in_alloc_oh_T_22; // @[Mux.scala 47:70]
  wire [17:0] _in_alloc_oh_T_24 = in_alloc_full[11] ? 18'h800 : _in_alloc_oh_T_23; // @[Mux.scala 47:70]
  wire [17:0] _in_alloc_oh_T_25 = in_alloc_full[10] ? 18'h400 : _in_alloc_oh_T_24; // @[Mux.scala 47:70]
  wire [17:0] _in_alloc_oh_T_26 = in_alloc_full[9] ? 18'h200 : _in_alloc_oh_T_25; // @[Mux.scala 47:70]
  wire [17:0] _in_alloc_oh_T_27 = in_alloc_full[8] ? 18'h100 : _in_alloc_oh_T_26; // @[Mux.scala 47:70]
  wire [17:0] _in_alloc_oh_T_28 = in_alloc_full[7] ? 18'h80 : _in_alloc_oh_T_27; // @[Mux.scala 47:70]
  wire [17:0] _in_alloc_oh_T_29 = in_alloc_full[6] ? 18'h40 : _in_alloc_oh_T_28; // @[Mux.scala 47:70]
  wire [17:0] _in_alloc_oh_T_30 = in_alloc_full[5] ? 18'h20 : _in_alloc_oh_T_29; // @[Mux.scala 47:70]
  wire [17:0] _in_alloc_oh_T_31 = in_alloc_full[4] ? 18'h10 : _in_alloc_oh_T_30; // @[Mux.scala 47:70]
  wire [17:0] _in_alloc_oh_T_32 = in_alloc_full[3] ? 18'h8 : _in_alloc_oh_T_31; // @[Mux.scala 47:70]
  wire [17:0] _in_alloc_oh_T_33 = in_alloc_full[2] ? 18'h4 : _in_alloc_oh_T_32; // @[Mux.scala 47:70]
  wire [17:0] _in_alloc_oh_T_34 = in_alloc_full[1] ? 18'h2 : _in_alloc_oh_T_33; // @[Mux.scala 47:70]
  wire [17:0] in_alloc_oh = in_alloc_full[0] ? 18'h1 : _in_alloc_oh_T_34; // @[Mux.scala 47:70]
  wire [8:0] in_alloc_sel = in_alloc_oh[8:0] | in_alloc_oh[17:9]; // @[ISLIP.scala 20:28]
  wire [8:0] _in_alloc_mask_T_18 = in_alloc_sel[8] ? 9'h1ff : 9'h0; // @[Mux.scala 101:16]
  wire [8:0] _in_alloc_mask_T_19 = in_alloc_sel[7] ? 9'hff : _in_alloc_mask_T_18; // @[Mux.scala 101:16]
  wire [8:0] _in_alloc_mask_T_20 = in_alloc_sel[6] ? 9'h7f : _in_alloc_mask_T_19; // @[Mux.scala 101:16]
  wire [8:0] _in_alloc_mask_T_21 = in_alloc_sel[5] ? 9'h3f : _in_alloc_mask_T_20; // @[Mux.scala 101:16]
  wire [8:0] _in_alloc_mask_T_22 = in_alloc_sel[4] ? 9'h1f : _in_alloc_mask_T_21; // @[Mux.scala 101:16]
  wire [8:0] _in_alloc_mask_T_23 = in_alloc_sel[3] ? 9'hf : _in_alloc_mask_T_22; // @[Mux.scala 101:16]
  wire [8:0] _in_alloc_mask_T_24 = in_alloc_sel[2] ? 9'h7 : _in_alloc_mask_T_23; // @[Mux.scala 101:16]
  wire [8:0] _T_2 = {io_resp_0_vc_sel_2_0,io_resp_0_vc_sel_1_3,io_resp_0_vc_sel_1_2,io_resp_0_vc_sel_1_1,
    io_resp_0_vc_sel_1_0,io_resp_0_vc_sel_0_3,io_resp_0_vc_sel_0_2,io_resp_0_vc_sel_0_1,io_resp_0_vc_sel_0_0}; // @[SingleVCAllocator.scala 53:39]
  wire [1:0] _T_12 = _T_2[0] + _T_2[1]; // @[Bitwise.scala 51:90]
  wire [1:0] _T_14 = _T_2[2] + _T_2[3]; // @[Bitwise.scala 51:90]
  wire [2:0] _T_16 = _T_12 + _T_14; // @[Bitwise.scala 51:90]
  wire [1:0] _T_18 = _T_2[4] + _T_2[5]; // @[Bitwise.scala 51:90]
  wire [1:0] _T_20 = _T_2[7] + _T_2[8]; // @[Bitwise.scala 51:90]
  wire [1:0] _GEN_5 = {{1'd0}, _T_2[6]}; // @[Bitwise.scala 51:90]
  wire [2:0] _T_22 = _GEN_5 + _T_20; // @[Bitwise.scala 51:90]
  wire [2:0] _T_24 = _T_18 + _T_22[1:0]; // @[Bitwise.scala 51:90]
  wire [3:0] _T_26 = _T_16 + _T_24; // @[Bitwise.scala 51:90]
  wire [8:0] _T_32 = {io_resp_1_vc_sel_2_0,io_resp_1_vc_sel_1_3,io_resp_1_vc_sel_1_2,io_resp_1_vc_sel_1_1,
    io_resp_1_vc_sel_1_0,io_resp_1_vc_sel_0_3,io_resp_1_vc_sel_0_2,io_resp_1_vc_sel_0_1,io_resp_1_vc_sel_0_0}; // @[SingleVCAllocator.scala 53:39]
  wire [1:0] _T_42 = _T_32[0] + _T_32[1]; // @[Bitwise.scala 51:90]
  wire [1:0] _T_44 = _T_32[2] + _T_32[3]; // @[Bitwise.scala 51:90]
  wire [2:0] _T_46 = _T_42 + _T_44; // @[Bitwise.scala 51:90]
  wire [1:0] _T_48 = _T_32[4] + _T_32[5]; // @[Bitwise.scala 51:90]
  wire [1:0] _T_50 = _T_32[7] + _T_32[8]; // @[Bitwise.scala 51:90]
  wire [1:0] _GEN_6 = {{1'd0}, _T_32[6]}; // @[Bitwise.scala 51:90]
  wire [2:0] _T_52 = _GEN_6 + _T_50; // @[Bitwise.scala 51:90]
  wire [2:0] _T_54 = _T_48 + _T_52[1:0]; // @[Bitwise.scala 51:90]
  wire [3:0] _T_56 = _T_46 + _T_54; // @[Bitwise.scala 51:90]
  wire [8:0] _T_62 = {io_resp_2_vc_sel_2_0,io_resp_2_vc_sel_1_3,io_resp_2_vc_sel_1_2,io_resp_2_vc_sel_1_1,
    io_resp_2_vc_sel_1_0,io_resp_2_vc_sel_0_3,io_resp_2_vc_sel_0_2,io_resp_2_vc_sel_0_1,io_resp_2_vc_sel_0_0}; // @[SingleVCAllocator.scala 53:39]
  wire [1:0] _T_72 = _T_62[0] + _T_62[1]; // @[Bitwise.scala 51:90]
  wire [1:0] _T_74 = _T_62[2] + _T_62[3]; // @[Bitwise.scala 51:90]
  wire [2:0] _T_76 = _T_72 + _T_74; // @[Bitwise.scala 51:90]
  wire [1:0] _T_78 = _T_62[4] + _T_62[5]; // @[Bitwise.scala 51:90]
  wire [1:0] _T_80 = _T_62[7] + _T_62[8]; // @[Bitwise.scala 51:90]
  wire [1:0] _GEN_7 = {{1'd0}, _T_62[6]}; // @[Bitwise.scala 51:90]
  wire [2:0] _T_82 = _GEN_7 + _T_80; // @[Bitwise.scala 51:90]
  wire [2:0] _T_84 = _T_78 + _T_82[1:0]; // @[Bitwise.scala 51:90]
  wire [3:0] _T_86 = _T_76 + _T_84; // @[Bitwise.scala 51:90]
  assign io_req_2_ready = in_arb_sel[2]; // @[SingleVCAllocator.scala 47:34]
  assign io_req_1_ready = in_arb_sel[1]; // @[SingleVCAllocator.scala 47:34]
  assign io_req_0_ready = in_arb_sel[0]; // @[SingleVCAllocator.scala 47:34]
  assign io_resp_2_vc_sel_2_0 = _T_1 & in_alloc_sel[8]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_2_vc_sel_1_0 = _T_1 & in_alloc_sel[4]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_2_vc_sel_1_1 = _T_1 & in_alloc_sel[5]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_2_vc_sel_1_2 = _T_1 & in_alloc_sel[6]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_2_vc_sel_1_3 = _T_1 & in_alloc_sel[7]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_2_vc_sel_0_0 = _T_1 & in_alloc_sel[0]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_2_vc_sel_0_1 = _T_1 & in_alloc_sel[1]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_2_vc_sel_0_2 = _T_1 & in_alloc_sel[2]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_2_vc_sel_0_3 = _T_1 & in_alloc_sel[3]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_1_vc_sel_2_0 = _T_1 & in_alloc_sel[8]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_1_vc_sel_1_0 = _T_1 & in_alloc_sel[4]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_1_vc_sel_1_1 = _T_1 & in_alloc_sel[5]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_1_vc_sel_1_2 = _T_1 & in_alloc_sel[6]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_1_vc_sel_1_3 = _T_1 & in_alloc_sel[7]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_1_vc_sel_0_0 = _T_1 & in_alloc_sel[0]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_1_vc_sel_0_1 = _T_1 & in_alloc_sel[1]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_1_vc_sel_0_2 = _T_1 & in_alloc_sel[2]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_1_vc_sel_0_3 = _T_1 & in_alloc_sel[3]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_0_vc_sel_2_0 = _T_1 & in_alloc_sel[8]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_0_vc_sel_1_0 = _T_1 & in_alloc_sel[4]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_0_vc_sel_1_1 = _T_1 & in_alloc_sel[5]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_0_vc_sel_1_2 = _T_1 & in_alloc_sel[6]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_0_vc_sel_1_3 = _T_1 & in_alloc_sel[7]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_0_vc_sel_0_0 = _T_1 & in_alloc_sel[0]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_0_vc_sel_0_1 = _T_1 & in_alloc_sel[1]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_0_vc_sel_0_2 = _T_1 & in_alloc_sel[2]; // @[SingleVCAllocator.scala 41:18]
  assign io_resp_0_vc_sel_0_3 = _T_1 & in_alloc_sel[3]; // @[SingleVCAllocator.scala 41:18]
  assign io_out_allocs_2_0_alloc = _T_1 & in_alloc_sel[8]; // @[SingleVCAllocator.scala 41:18]
  assign io_out_allocs_1_0_alloc = _T_1 & in_alloc_sel[4]; // @[SingleVCAllocator.scala 41:18]
  assign io_out_allocs_1_1_alloc = _T_1 & in_alloc_sel[5]; // @[SingleVCAllocator.scala 41:18]
  assign io_out_allocs_1_2_alloc = _T_1 & in_alloc_sel[6]; // @[SingleVCAllocator.scala 41:18]
  assign io_out_allocs_1_3_alloc = _T_1 & in_alloc_sel[7]; // @[SingleVCAllocator.scala 41:18]
  assign io_out_allocs_0_0_alloc = _T_1 & in_alloc_sel[0]; // @[SingleVCAllocator.scala 41:18]
  assign io_out_allocs_0_1_alloc = _T_1 & in_alloc_sel[1]; // @[SingleVCAllocator.scala 41:18]
  assign io_out_allocs_0_2_alloc = _T_1 & in_alloc_sel[2]; // @[SingleVCAllocator.scala 41:18]
  assign io_out_allocs_0_3_alloc = _T_1 & in_alloc_sel[3]; // @[SingleVCAllocator.scala 41:18]
  always @(posedge clock) begin
    if (reset) begin // @[SingleVCAllocator.scala 16:21]
      mask <= 3'h0; // @[SingleVCAllocator.scala 16:21]
    end else if (_T_1) begin // @[SingleVCAllocator.scala 21:26]
      mask <= _mask_T_10; // @[SingleVCAllocator.scala 22:10]
    end
    if (reset) begin // @[ISLIP.scala 17:25]
      in_alloc_mask <= 9'h0; // @[ISLIP.scala 17:25]
    end else if (_in_alloc_T_10) begin // @[ISLIP.scala 21:19]
      if (in_alloc_sel[0]) begin // @[Mux.scala 101:16]
        in_alloc_mask <= 9'h1;
      end else if (in_alloc_sel[1]) begin // @[Mux.scala 101:16]
        in_alloc_mask <= 9'h3;
      end else begin
        in_alloc_mask <= _in_alloc_mask_T_24;
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(_T_26 <= 4'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at SingleVCAllocator.scala:53 assert(PopCount(io.resp(i).vc_sel.asUInt) <= 1.U)\n"); // @[SingleVCAllocator.scala 53:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(_T_56 <= 4'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at SingleVCAllocator.scala:53 assert(PopCount(io.resp(i).vc_sel.asUInt) <= 1.U)\n"); // @[SingleVCAllocator.scala 53:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(_T_86 <= 4'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at SingleVCAllocator.scala:53 assert(PopCount(io.resp(i).vc_sel.asUInt) <= 1.U)\n"); // @[SingleVCAllocator.scala 53:11]
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
  mask = _RAND_0[2:0];
  _RAND_1 = {1{`RANDOM}};
  in_alloc_mask = _RAND_1[8:0];
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
      assert(_T_26 <= 4'h1); // @[SingleVCAllocator.scala 53:11]
    end
    //
    if (~reset) begin
      assert(_T_56 <= 4'h1); // @[SingleVCAllocator.scala 53:11]
    end
    //
    if (~reset) begin
      assert(_T_86 <= 4'h1); // @[SingleVCAllocator.scala 53:11]
    end
  end
endmodule