module OutputUnit(
  input         clock,
  input         reset,
  input         io_in_0_valid,
  input         io_in_0_bits_head,
  input         io_in_0_bits_tail,
  input  [19:0] io_in_0_bits_payload,
  input  [1:0]  io_in_0_bits_flow_ingress_node,
  input  [1:0]  io_in_0_bits_flow_egress_node,
  input  [1:0]  io_in_0_bits_virt_channel_id,
  output        io_credit_available_0,
  output        io_credit_available_1,
  output        io_credit_available_2,
  output        io_credit_available_3,
  output        io_channel_status_0_occupied,
  output        io_channel_status_1_occupied,
  output        io_channel_status_2_occupied,
  output        io_channel_status_3_occupied,
  input         io_allocs_0_alloc,
  input         io_allocs_1_alloc,
  input         io_allocs_2_alloc,
  input         io_allocs_3_alloc,
  input         io_credit_alloc_0_alloc,
  input         io_credit_alloc_1_alloc,
  input         io_credit_alloc_2_alloc,
  input         io_credit_alloc_3_alloc,
  output        io_out_flit_0_valid,
  output        io_out_flit_0_bits_head,
  output        io_out_flit_0_bits_tail,
  output [19:0] io_out_flit_0_bits_payload,
  output [1:0]  io_out_flit_0_bits_flow_ingress_node,
  output [1:0]  io_out_flit_0_bits_flow_egress_node,
  output [1:0]  io_out_flit_0_bits_virt_channel_id,
  input  [3:0]  io_out_credit_return,
  input  [3:0]  io_out_vc_free
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
`endif // RANDOMIZE_REG_INIT
  reg  states_3_occupied; // @[OutputUnit.scala 66:19]
  reg [2:0] states_3_c; // @[OutputUnit.scala 66:19]
  reg  states_2_occupied; // @[OutputUnit.scala 66:19]
  reg [2:0] states_2_c; // @[OutputUnit.scala 66:19]
  reg  states_1_occupied; // @[OutputUnit.scala 66:19]
  reg [2:0] states_1_c; // @[OutputUnit.scala 66:19]
  reg  states_0_occupied; // @[OutputUnit.scala 66:19]
  reg [2:0] states_0_c; // @[OutputUnit.scala 66:19]
  wire  _GEN_0 = io_out_vc_free[0] ? 1'h0 : states_0_occupied; // @[OutputUnit.scala 74:30 76:18 66:19]
  wire  _GEN_1 = io_out_vc_free[1] ? 1'h0 : states_1_occupied; // @[OutputUnit.scala 74:30 76:18 66:19]
  wire  _GEN_2 = io_out_vc_free[2] ? 1'h0 : states_2_occupied; // @[OutputUnit.scala 74:30 76:18 66:19]
  wire  _GEN_3 = io_out_vc_free[3] ? 1'h0 : states_3_occupied; // @[OutputUnit.scala 74:30 76:18 66:19]
  wire  _GEN_4 = io_allocs_0_alloc | _GEN_0; // @[OutputUnit.scala 83:20 84:18]
  wire  _GEN_10 = io_allocs_1_alloc | _GEN_1; // @[OutputUnit.scala 83:20 84:18]
  wire  _GEN_16 = io_allocs_2_alloc | _GEN_2; // @[OutputUnit.scala 83:20 84:18]
  wire  _GEN_22 = io_allocs_3_alloc | _GEN_3; // @[OutputUnit.scala 83:20 84:18]
  wire  free = io_out_credit_return[0]; // @[OutputUnit.scala 94:36]
  wire [2:0] _GEN_5 = {{2'd0}, free}; // @[OutputUnit.scala 97:18]
  wire [3:0] _states_0_c_T = states_0_c + _GEN_5; // @[OutputUnit.scala 97:18]
  wire [3:0] _GEN_7 = {{3'd0}, io_credit_alloc_0_alloc}; // @[OutputUnit.scala 97:26]
  wire [3:0] _states_0_c_T_2 = _states_0_c_T - _GEN_7; // @[OutputUnit.scala 97:26]
  wire  free_1 = io_out_credit_return[1]; // @[OutputUnit.scala 94:36]
  wire [2:0] _GEN_9 = {{2'd0}, free_1}; // @[OutputUnit.scala 97:18]
  wire [3:0] _states_1_c_T = states_1_c + _GEN_9; // @[OutputUnit.scala 97:18]
  wire [3:0] _GEN_11 = {{3'd0}, io_credit_alloc_1_alloc}; // @[OutputUnit.scala 97:26]
  wire [3:0] _states_1_c_T_2 = _states_1_c_T - _GEN_11; // @[OutputUnit.scala 97:26]
  wire  free_2 = io_out_credit_return[2]; // @[OutputUnit.scala 94:36]
  wire [2:0] _GEN_13 = {{2'd0}, free_2}; // @[OutputUnit.scala 97:18]
  wire [3:0] _states_2_c_T = states_2_c + _GEN_13; // @[OutputUnit.scala 97:18]
  wire [3:0] _GEN_15 = {{3'd0}, io_credit_alloc_2_alloc}; // @[OutputUnit.scala 97:26]
  wire [3:0] _states_2_c_T_2 = _states_2_c_T - _GEN_15; // @[OutputUnit.scala 97:26]
  wire  free_3 = io_out_credit_return[3]; // @[OutputUnit.scala 94:36]
  wire [2:0] _GEN_17 = {{2'd0}, free_3}; // @[OutputUnit.scala 97:18]
  wire [3:0] _states_3_c_T = states_3_c + _GEN_17; // @[OutputUnit.scala 97:18]
  wire [3:0] _GEN_19 = {{3'd0}, io_credit_alloc_3_alloc}; // @[OutputUnit.scala 97:26]
  wire [3:0] _states_3_c_T_2 = _states_3_c_T - _GEN_19; // @[OutputUnit.scala 97:26]
  wire [3:0] _GEN_32 = reset ? 4'h5 : _states_0_c_T_2; // @[OutputUnit.scala 103:23 105:29 97:11]
  wire [3:0] _GEN_33 = reset ? 4'h5 : _states_1_c_T_2; // @[OutputUnit.scala 103:23 105:29 97:11]
  wire [3:0] _GEN_34 = reset ? 4'h5 : _states_2_c_T_2; // @[OutputUnit.scala 103:23 105:29 97:11]
  wire [3:0] _GEN_35 = reset ? 4'h5 : _states_3_c_T_2; // @[OutputUnit.scala 103:23 105:29 97:11]
  assign io_credit_available_0 = states_0_c != 3'h0; // @[OutputUnit.scala 90:14]
  assign io_credit_available_1 = states_1_c != 3'h0; // @[OutputUnit.scala 90:14]
  assign io_credit_available_2 = states_2_c != 3'h0; // @[OutputUnit.scala 90:14]
  assign io_credit_available_3 = states_3_c != 3'h0; // @[OutputUnit.scala 90:14]
  assign io_channel_status_0_occupied = io_out_vc_free[0] ? 1'h0 : states_0_occupied; // @[OutputUnit.scala 74:30 76:18 66:19]
  assign io_channel_status_1_occupied = io_out_vc_free[1] ? 1'h0 : states_1_occupied; // @[OutputUnit.scala 74:30 76:18 66:19]
  assign io_channel_status_2_occupied = io_out_vc_free[2] ? 1'h0 : states_2_occupied; // @[OutputUnit.scala 74:30 76:18 66:19]
  assign io_channel_status_3_occupied = io_out_vc_free[3] ? 1'h0 : states_3_occupied; // @[OutputUnit.scala 74:30 76:18 66:19]
  assign io_out_flit_0_valid = io_in_0_valid; // @[OutputUnit.scala 71:15]
  assign io_out_flit_0_bits_head = io_in_0_bits_head; // @[OutputUnit.scala 71:15]
  assign io_out_flit_0_bits_tail = io_in_0_bits_tail; // @[OutputUnit.scala 71:15]
  assign io_out_flit_0_bits_payload = io_in_0_bits_payload; // @[OutputUnit.scala 71:15]
  assign io_out_flit_0_bits_flow_ingress_node = io_in_0_bits_flow_ingress_node; // @[OutputUnit.scala 71:15]
  assign io_out_flit_0_bits_flow_egress_node = io_in_0_bits_flow_egress_node; // @[OutputUnit.scala 71:15]
  assign io_out_flit_0_bits_virt_channel_id = io_in_0_bits_virt_channel_id; // @[OutputUnit.scala 71:15]
  always @(posedge clock) begin
    if (reset) begin // @[OutputUnit.scala 103:23]
      states_3_occupied <= 1'h0; // @[OutputUnit.scala 104:31]
    end else begin
      states_3_occupied <= _GEN_22;
    end
    states_3_c <= _GEN_35[2:0];
    if (reset) begin // @[OutputUnit.scala 103:23]
      states_2_occupied <= 1'h0; // @[OutputUnit.scala 104:31]
    end else begin
      states_2_occupied <= _GEN_16;
    end
    states_2_c <= _GEN_34[2:0];
    if (reset) begin // @[OutputUnit.scala 103:23]
      states_1_occupied <= 1'h0; // @[OutputUnit.scala 104:31]
    end else begin
      states_1_occupied <= _GEN_10;
    end
    states_1_c <= _GEN_33[2:0];
    if (reset) begin // @[OutputUnit.scala 103:23]
      states_0_occupied <= 1'h0; // @[OutputUnit.scala 104:31]
    end else begin
      states_0_occupied <= _GEN_4;
    end
    states_0_c <= _GEN_32[2:0];
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_out_vc_free[0] & ~reset & ~states_0_occupied) begin
          $fwrite(32'h80000002,"Assertion failed\n    at OutputUnit.scala:75 assert(s.occupied)\n"); // @[OutputUnit.scala 75:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_out_vc_free[1] & ~reset & ~states_1_occupied) begin
          $fwrite(32'h80000002,"Assertion failed\n    at OutputUnit.scala:75 assert(s.occupied)\n"); // @[OutputUnit.scala 75:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_out_vc_free[2] & ~reset & ~states_2_occupied) begin
          $fwrite(32'h80000002,"Assertion failed\n    at OutputUnit.scala:75 assert(s.occupied)\n"); // @[OutputUnit.scala 75:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_out_vc_free[3] & ~reset & ~states_3_occupied) begin
          $fwrite(32'h80000002,"Assertion failed\n    at OutputUnit.scala:75 assert(s.occupied)\n"); // @[OutputUnit.scala 75:13]
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
  states_3_occupied = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  states_3_c = _RAND_1[2:0];
  _RAND_2 = {1{`RANDOM}};
  states_2_occupied = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  states_2_c = _RAND_3[2:0];
  _RAND_4 = {1{`RANDOM}};
  states_1_occupied = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  states_1_c = _RAND_5[2:0];
  _RAND_6 = {1{`RANDOM}};
  states_0_occupied = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  states_0_c = _RAND_7[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
  always @(posedge clock) begin
    //
    if (io_out_vc_free[0] & ~reset) begin
      assert(states_0_occupied); // @[OutputUnit.scala 75:13]
    end
    //
    if (io_out_vc_free[1] & ~reset) begin
      assert(states_1_occupied); // @[OutputUnit.scala 75:13]
    end
    //
    if (io_out_vc_free[2] & ~reset) begin
      assert(states_2_occupied); // @[OutputUnit.scala 75:13]
    end
    //
    if (io_out_vc_free[3] & ~reset) begin
      assert(states_3_occupied); // @[OutputUnit.scala 75:13]
    end
  end
endmodule