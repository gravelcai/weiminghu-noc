module SwitchArbiter_2(
  input        clock,
  input        reset,
  output       io_in_0_ready,
  input        io_in_0_valid,
  input        io_in_0_bits_vc_sel_2_0,
  input        io_in_0_bits_vc_sel_1_0,
  input        io_in_0_bits_vc_sel_1_1,
  input        io_in_0_bits_vc_sel_1_2,
  input        io_in_0_bits_vc_sel_1_3,
  input        io_in_0_bits_vc_sel_0_0,
  input        io_in_0_bits_vc_sel_0_1,
  input        io_in_0_bits_vc_sel_0_2,
  input        io_in_0_bits_vc_sel_0_3,
  input        io_in_0_bits_tail,
  output       io_in_1_ready,
  input        io_in_1_valid,
  input        io_in_1_bits_vc_sel_2_0,
  input        io_in_1_bits_vc_sel_1_0,
  input        io_in_1_bits_vc_sel_1_1,
  input        io_in_1_bits_vc_sel_1_2,
  input        io_in_1_bits_vc_sel_1_3,
  input        io_in_1_bits_vc_sel_0_0,
  input        io_in_1_bits_vc_sel_0_1,
  input        io_in_1_bits_vc_sel_0_2,
  input        io_in_1_bits_vc_sel_0_3,
  input        io_in_1_bits_tail,
  output       io_in_2_ready,
  input        io_in_2_valid,
  input        io_in_2_bits_vc_sel_2_0,
  input        io_in_2_bits_vc_sel_1_0,
  input        io_in_2_bits_vc_sel_1_1,
  input        io_in_2_bits_vc_sel_1_2,
  input        io_in_2_bits_vc_sel_1_3,
  input        io_in_2_bits_vc_sel_0_0,
  input        io_in_2_bits_vc_sel_0_1,
  input        io_in_2_bits_vc_sel_0_2,
  input        io_in_2_bits_vc_sel_0_3,
  input        io_in_2_bits_tail,
  output       io_out_0_valid,
  output       io_out_0_bits_vc_sel_2_0,
  output       io_out_0_bits_vc_sel_1_0,
  output       io_out_0_bits_vc_sel_1_1,
  output       io_out_0_bits_vc_sel_1_2,
  output       io_out_0_bits_vc_sel_1_3,
  output       io_out_0_bits_vc_sel_0_0,
  output       io_out_0_bits_vc_sel_0_1,
  output       io_out_0_bits_vc_sel_0_2,
  output       io_out_0_bits_vc_sel_0_3,
  output       io_out_0_bits_tail,
  output [2:0] io_chosen_oh_0
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [2:0] lock_0; // @[SwitchAllocator.scala 24:38]
  wire [2:0] _unassigned_T = {io_in_2_valid,io_in_1_valid,io_in_0_valid}; // @[Cat.scala 33:92]
  wire [2:0] _unassigned_T_1 = ~lock_0; // @[SwitchAllocator.scala 25:54]
  wire [2:0] unassigned = _unassigned_T & _unassigned_T_1; // @[SwitchAllocator.scala 25:52]
  reg [2:0] mask; // @[SwitchAllocator.scala 27:21]
  wire [2:0] _GEN_5 = {{2'd0}, mask == 3'h0}; // @[SwitchAllocator.scala 30:58]
  wire [2:0] _sel_T_1 = unassigned & _GEN_5; // @[SwitchAllocator.scala 30:58]
  wire [5:0] _sel_T_2 = {unassigned,_sel_T_1}; // @[Cat.scala 33:92]
  wire [5:0] _sel_T_9 = _sel_T_2[5] ? 6'h20 : 6'h0; // @[Mux.scala 47:70]
  wire [5:0] _sel_T_10 = _sel_T_2[4] ? 6'h10 : _sel_T_9; // @[Mux.scala 47:70]
  wire [5:0] _sel_T_11 = _sel_T_2[3] ? 6'h8 : _sel_T_10; // @[Mux.scala 47:70]
  wire [5:0] _sel_T_12 = _sel_T_2[2] ? 6'h4 : _sel_T_11; // @[Mux.scala 47:70]
  wire [5:0] _sel_T_13 = _sel_T_2[1] ? 6'h2 : _sel_T_12; // @[Mux.scala 47:70]
  wire [5:0] sel = _sel_T_2[0] ? 6'h1 : _sel_T_13; // @[Mux.scala 47:70]
  wire [5:0] _GEN_6 = {{3'd0}, sel[5:3]}; // @[SwitchAllocator.scala 32:23]
  wire [5:0] _choices_0_T_1 = sel | _GEN_6; // @[SwitchAllocator.scala 32:23]
  wire [2:0] choices_0 = _choices_0_T_1[2:0]; // @[SwitchAllocator.scala 28:21 32:16]
  wire [2:0] in_tails = {io_in_2_bits_tail,io_in_1_bits_tail,io_in_0_bits_tail}; // @[Cat.scala 33:92]
  wire [2:0] _chosen_T = _unassigned_T & lock_0; // @[SwitchAllocator.scala 42:33]
  wire [2:0] chosen = |_chosen_T ? lock_0 : choices_0; // @[SwitchAllocator.scala 42:21]
  wire [2:0] _io_out_0_valid_T = _unassigned_T & chosen; // @[SwitchAllocator.scala 44:35]
  wire [2:0] _lock_0_T = ~in_tails; // @[SwitchAllocator.scala 53:27]
  wire [2:0] _lock_0_T_1 = chosen & _lock_0_T; // @[SwitchAllocator.scala 53:25]
  wire [2:0] _GEN_7 = {{1'd0}, io_chosen_oh_0[2:1]}; // @[SwitchAllocator.scala 58:71]
  wire [2:0] _mask_T_3 = io_chosen_oh_0 | _GEN_7; // @[SwitchAllocator.scala 58:71]
  wire [2:0] _GEN_8 = {{2'd0}, io_chosen_oh_0[2]}; // @[SwitchAllocator.scala 58:71]
  wire [2:0] _mask_T_4 = _mask_T_3 | _GEN_8; // @[SwitchAllocator.scala 58:71]
  wire [2:0] _mask_T_5 = ~mask; // @[SwitchAllocator.scala 60:17]
  wire [3:0] _mask_T_7 = {mask, 1'h0}; // @[SwitchAllocator.scala 60:43]
  wire [3:0] _mask_T_8 = _mask_T_7 | 4'h1; // @[SwitchAllocator.scala 60:49]
  wire [3:0] _mask_T_9 = _mask_T_5 == 3'h0 ? 4'h0 : _mask_T_8; // @[SwitchAllocator.scala 60:16]
  wire [3:0] _GEN_4 = io_out_0_valid ? {{1'd0}, _mask_T_4} : _mask_T_9; // @[SwitchAllocator.scala 57:27 58:10 60:10]
  wire [3:0] _GEN_9 = reset ? 4'h0 : _GEN_4; // @[SwitchAllocator.scala 27:{21,21}]
  assign io_in_0_ready = chosen[0]; // @[SwitchAllocator.scala 47:19]
  assign io_in_1_ready = chosen[1]; // @[SwitchAllocator.scala 47:19]
  assign io_in_2_ready = chosen[2]; // @[SwitchAllocator.scala 47:19]
  assign io_out_0_valid = |_io_out_0_valid_T; // @[SwitchAllocator.scala 44:45]
  assign io_out_0_bits_vc_sel_2_0 = chosen[0] & io_in_0_bits_vc_sel_2_0 | chosen[1] & io_in_1_bits_vc_sel_2_0 | chosen[2
    ] & io_in_2_bits_vc_sel_2_0; // @[Mux.scala 27:73]
  assign io_out_0_bits_vc_sel_1_0 = chosen[0] & io_in_0_bits_vc_sel_1_0 | chosen[1] & io_in_1_bits_vc_sel_1_0 | chosen[2
    ] & io_in_2_bits_vc_sel_1_0; // @[Mux.scala 27:73]
  assign io_out_0_bits_vc_sel_1_1 = chosen[0] & io_in_0_bits_vc_sel_1_1 | chosen[1] & io_in_1_bits_vc_sel_1_1 | chosen[2
    ] & io_in_2_bits_vc_sel_1_1; // @[Mux.scala 27:73]
  assign io_out_0_bits_vc_sel_1_2 = chosen[0] & io_in_0_bits_vc_sel_1_2 | chosen[1] & io_in_1_bits_vc_sel_1_2 | chosen[2
    ] & io_in_2_bits_vc_sel_1_2; // @[Mux.scala 27:73]
  assign io_out_0_bits_vc_sel_1_3 = chosen[0] & io_in_0_bits_vc_sel_1_3 | chosen[1] & io_in_1_bits_vc_sel_1_3 | chosen[2
    ] & io_in_2_bits_vc_sel_1_3; // @[Mux.scala 27:73]
  assign io_out_0_bits_vc_sel_0_0 = chosen[0] & io_in_0_bits_vc_sel_0_0 | chosen[1] & io_in_1_bits_vc_sel_0_0 | chosen[2
    ] & io_in_2_bits_vc_sel_0_0; // @[Mux.scala 27:73]
  assign io_out_0_bits_vc_sel_0_1 = chosen[0] & io_in_0_bits_vc_sel_0_1 | chosen[1] & io_in_1_bits_vc_sel_0_1 | chosen[2
    ] & io_in_2_bits_vc_sel_0_1; // @[Mux.scala 27:73]
  assign io_out_0_bits_vc_sel_0_2 = chosen[0] & io_in_0_bits_vc_sel_0_2 | chosen[1] & io_in_1_bits_vc_sel_0_2 | chosen[2
    ] & io_in_2_bits_vc_sel_0_2; // @[Mux.scala 27:73]
  assign io_out_0_bits_vc_sel_0_3 = chosen[0] & io_in_0_bits_vc_sel_0_3 | chosen[1] & io_in_1_bits_vc_sel_0_3 | chosen[2
    ] & io_in_2_bits_vc_sel_0_3; // @[Mux.scala 27:73]
  assign io_out_0_bits_tail = chosen[0] & io_in_0_bits_tail | chosen[1] & io_in_1_bits_tail | chosen[2] &
    io_in_2_bits_tail; // @[Mux.scala 27:73]
  assign io_chosen_oh_0 = |_chosen_T ? lock_0 : choices_0; // @[SwitchAllocator.scala 42:21]
  always @(posedge clock) begin
    if (reset) begin // @[SwitchAllocator.scala 24:38]
      lock_0 <= 3'h0; // @[SwitchAllocator.scala 24:38]
    end else if (io_out_0_valid) begin // @[SwitchAllocator.scala 52:29]
      lock_0 <= _lock_0_T_1; // @[SwitchAllocator.scala 53:15]
    end
    mask <= _GEN_9[2:0]; // @[SwitchAllocator.scala 27:{21,21}]
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
  lock_0 = _RAND_0[2:0];
  _RAND_1 = {1{`RANDOM}};
  mask = _RAND_1[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule