module InputGen(
  input         clock,
  input         reset,
  input         io_out_ready,
  output        io_out_valid,
  output        io_out_bits_head,
  output        io_out_bits_tail,
  output [19:0] io_out_bits_payload,
  output [1:0]  io_out_bits_egress_id,
  input         io_rob_ready,
  input  [6:0]  io_rob_idx,
  input  [31:0] io_tsc,
  output        io_fire,
  output [3:0]  io_n_flits
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  wire  packet_remaining_prng_clock; // @[PRNG.scala 91:22]
  wire  packet_remaining_prng_reset; // @[PRNG.scala 91:22]
  wire  packet_remaining_prng_io_out_0; // @[PRNG.scala 91:22]
  wire  packet_remaining_prng_io_out_1; // @[PRNG.scala 91:22]
  wire  packet_remaining_prng_io_out_2; // @[PRNG.scala 91:22]
  wire  packet_remaining_prng_io_out_3; // @[PRNG.scala 91:22]
  wire  packet_remaining_prng_io_out_4; // @[PRNG.scala 91:22]
  wire  packet_remaining_prng_io_out_5; // @[PRNG.scala 91:22]
  wire  packet_remaining_prng_io_out_6; // @[PRNG.scala 91:22]
  wire  packet_remaining_prng_io_out_7; // @[PRNG.scala 91:22]
  wire  packet_remaining_prng_io_out_8; // @[PRNG.scala 91:22]
  wire  packet_remaining_prng_io_out_9; // @[PRNG.scala 91:22]
  wire  packet_remaining_prng_io_out_10; // @[PRNG.scala 91:22]
  wire  packet_remaining_prng_io_out_11; // @[PRNG.scala 91:22]
  wire  packet_remaining_prng_io_out_12; // @[PRNG.scala 91:22]
  wire  packet_remaining_prng_io_out_13; // @[PRNG.scala 91:22]
  wire  packet_remaining_prng_io_out_14; // @[PRNG.scala 91:22]
  wire  packet_remaining_prng_io_out_15; // @[PRNG.scala 91:22]
  wire  packet_remaining_prng_io_out_16; // @[PRNG.scala 91:22]
  wire  packet_remaining_prng_io_out_17; // @[PRNG.scala 91:22]
  wire  packet_remaining_prng_io_out_18; // @[PRNG.scala 91:22]
  wire  packet_remaining_prng_io_out_19; // @[PRNG.scala 91:22]
  wire  random_flit_delay_prng_clock; // @[PRNG.scala 91:22]
  wire  random_flit_delay_prng_reset; // @[PRNG.scala 91:22]
  wire  random_flit_delay_prng_io_out_0; // @[PRNG.scala 91:22]
  wire  random_flit_delay_prng_io_out_1; // @[PRNG.scala 91:22]
  wire  random_flit_delay_prng_io_out_2; // @[PRNG.scala 91:22]
  wire  random_flit_delay_prng_io_out_3; // @[PRNG.scala 91:22]
  wire  random_flit_delay_prng_io_out_4; // @[PRNG.scala 91:22]
  wire  random_flit_delay_prng_io_out_5; // @[PRNG.scala 91:22]
  wire  random_flit_delay_prng_io_out_6; // @[PRNG.scala 91:22]
  wire  random_flit_delay_prng_io_out_7; // @[PRNG.scala 91:22]
  wire  random_flit_delay_prng_io_out_8; // @[PRNG.scala 91:22]
  wire  random_flit_delay_prng_io_out_9; // @[PRNG.scala 91:22]
  wire  random_flit_delay_prng_io_out_10; // @[PRNG.scala 91:22]
  wire  random_flit_delay_prng_io_out_11; // @[PRNG.scala 91:22]
  wire  random_flit_delay_prng_io_out_12; // @[PRNG.scala 91:22]
  wire  random_flit_delay_prng_io_out_13; // @[PRNG.scala 91:22]
  wire  random_flit_delay_prng_io_out_14; // @[PRNG.scala 91:22]
  wire  random_flit_delay_prng_io_out_15; // @[PRNG.scala 91:22]
  wire  random_flit_delay_prng_io_out_16; // @[PRNG.scala 91:22]
  wire  random_flit_delay_prng_io_out_17; // @[PRNG.scala 91:22]
  wire  random_flit_delay_prng_io_out_18; // @[PRNG.scala 91:22]
  wire  random_flit_delay_prng_io_out_19; // @[PRNG.scala 91:22]
  wire  random_packet_delay_prng_clock; // @[PRNG.scala 91:22]
  wire  random_packet_delay_prng_reset; // @[PRNG.scala 91:22]
  wire  random_packet_delay_prng_io_out_0; // @[PRNG.scala 91:22]
  wire  random_packet_delay_prng_io_out_1; // @[PRNG.scala 91:22]
  wire  random_packet_delay_prng_io_out_2; // @[PRNG.scala 91:22]
  wire  random_packet_delay_prng_io_out_3; // @[PRNG.scala 91:22]
  wire  random_packet_delay_prng_io_out_4; // @[PRNG.scala 91:22]
  wire  random_packet_delay_prng_io_out_5; // @[PRNG.scala 91:22]
  wire  random_packet_delay_prng_io_out_6; // @[PRNG.scala 91:22]
  wire  random_packet_delay_prng_io_out_7; // @[PRNG.scala 91:22]
  wire  random_packet_delay_prng_io_out_8; // @[PRNG.scala 91:22]
  wire  random_packet_delay_prng_io_out_9; // @[PRNG.scala 91:22]
  wire  random_packet_delay_prng_io_out_10; // @[PRNG.scala 91:22]
  wire  random_packet_delay_prng_io_out_11; // @[PRNG.scala 91:22]
  wire  random_packet_delay_prng_io_out_12; // @[PRNG.scala 91:22]
  wire  random_packet_delay_prng_io_out_13; // @[PRNG.scala 91:22]
  wire  random_packet_delay_prng_io_out_14; // @[PRNG.scala 91:22]
  wire  random_packet_delay_prng_io_out_15; // @[PRNG.scala 91:22]
  wire  random_packet_delay_prng_io_out_16; // @[PRNG.scala 91:22]
  wire  random_packet_delay_prng_io_out_17; // @[PRNG.scala 91:22]
  wire  random_packet_delay_prng_io_out_18; // @[PRNG.scala 91:22]
  wire  random_packet_delay_prng_io_out_19; // @[PRNG.scala 91:22]
  wire  io_out_bits_egress_id_prng_clock; // @[PRNG.scala 91:22]
  wire  io_out_bits_egress_id_prng_reset; // @[PRNG.scala 91:22]
  wire  io_out_bits_egress_id_prng_io_out_0; // @[PRNG.scala 91:22]
  wire  io_out_bits_egress_id_prng_io_out_1; // @[PRNG.scala 91:22]
  wire  io_out_bits_egress_id_prng_io_out_2; // @[PRNG.scala 91:22]
  wire  io_out_bits_egress_id_prng_io_out_3; // @[PRNG.scala 91:22]
  wire  io_out_bits_egress_id_prng_io_out_4; // @[PRNG.scala 91:22]
  wire  io_out_bits_egress_id_prng_io_out_5; // @[PRNG.scala 91:22]
  wire  io_out_bits_egress_id_prng_io_out_6; // @[PRNG.scala 91:22]
  wire  io_out_bits_egress_id_prng_io_out_7; // @[PRNG.scala 91:22]
  wire  io_out_bits_egress_id_prng_io_out_8; // @[PRNG.scala 91:22]
  wire  io_out_bits_egress_id_prng_io_out_9; // @[PRNG.scala 91:22]
  wire  io_out_bits_egress_id_prng_io_out_10; // @[PRNG.scala 91:22]
  wire  io_out_bits_egress_id_prng_io_out_11; // @[PRNG.scala 91:22]
  wire  io_out_bits_egress_id_prng_io_out_12; // @[PRNG.scala 91:22]
  wire  io_out_bits_egress_id_prng_io_out_13; // @[PRNG.scala 91:22]
  wire  io_out_bits_egress_id_prng_io_out_14; // @[PRNG.scala 91:22]
  wire  io_out_bits_egress_id_prng_io_out_15; // @[PRNG.scala 91:22]
  wire  io_out_bits_egress_id_prng_io_out_16; // @[PRNG.scala 91:22]
  wire  io_out_bits_egress_id_prng_io_out_17; // @[PRNG.scala 91:22]
  wire  io_out_bits_egress_id_prng_io_out_18; // @[PRNG.scala 91:22]
  wire  io_out_bits_egress_id_prng_io_out_19; // @[PRNG.scala 91:22]
  reg [3:0] flits_left; // @[TestHarness.scala 71:27]
  reg [3:0] flits_fired; // @[TestHarness.scala 72:28]
  reg [1:0] egress; // @[TestHarness.scala 73:19]
  reg [31:0] payload_tsc; // @[TestHarness.scala 74:20]
  reg [15:0] payload_rob_idx; // @[TestHarness.scala 74:20]
  wire  can_fire = flits_left == 4'h0 & io_rob_ready; // @[TestHarness.scala 76:39]
  wire [9:0] packet_remaining_lo = {packet_remaining_prng_io_out_9,packet_remaining_prng_io_out_8,
    packet_remaining_prng_io_out_7,packet_remaining_prng_io_out_6,packet_remaining_prng_io_out_5,
    packet_remaining_prng_io_out_4,packet_remaining_prng_io_out_3,packet_remaining_prng_io_out_2,
    packet_remaining_prng_io_out_1,packet_remaining_prng_io_out_0}; // @[PRNG.scala 95:17]
  wire [9:0] packet_remaining_hi = {packet_remaining_prng_io_out_19,packet_remaining_prng_io_out_18,
    packet_remaining_prng_io_out_17,packet_remaining_prng_io_out_16,packet_remaining_prng_io_out_15,
    packet_remaining_prng_io_out_14,packet_remaining_prng_io_out_13,packet_remaining_prng_io_out_12,
    packet_remaining_prng_io_out_11,packet_remaining_prng_io_out_10}; // @[PRNG.scala 95:17]
  wire [19:0] _packet_remaining_T = {packet_remaining_hi,packet_remaining_lo}; // @[PRNG.scala 95:17]
  wire [19:0] _GEN_0 = _packet_remaining_T % 20'h8; // @[TestHarness.scala 78:89]
  wire [3:0] packet_remaining = _GEN_0[3:0]; // @[TestHarness.scala 78:89]
  wire [9:0] io_out_bits_egress_id_lo = {io_out_bits_egress_id_prng_io_out_9,io_out_bits_egress_id_prng_io_out_8,
    io_out_bits_egress_id_prng_io_out_7,io_out_bits_egress_id_prng_io_out_6,io_out_bits_egress_id_prng_io_out_5,
    io_out_bits_egress_id_prng_io_out_4,io_out_bits_egress_id_prng_io_out_3,io_out_bits_egress_id_prng_io_out_2,
    io_out_bits_egress_id_prng_io_out_1,io_out_bits_egress_id_prng_io_out_0}; // @[PRNG.scala 95:17]
  wire [9:0] io_out_bits_egress_id_hi = {io_out_bits_egress_id_prng_io_out_19,io_out_bits_egress_id_prng_io_out_18,
    io_out_bits_egress_id_prng_io_out_17,io_out_bits_egress_id_prng_io_out_16,io_out_bits_egress_id_prng_io_out_15,
    io_out_bits_egress_id_prng_io_out_14,io_out_bits_egress_id_prng_io_out_13,io_out_bits_egress_id_prng_io_out_12,
    io_out_bits_egress_id_prng_io_out_11,io_out_bits_egress_id_prng_io_out_10}; // @[PRNG.scala 95:17]
  wire [19:0] _io_out_bits_egress_id_T = {io_out_bits_egress_id_hi,io_out_bits_egress_id_lo}; // @[PRNG.scala 95:17]
  wire [19:0] _GEN_5 = _io_out_bits_egress_id_T % 20'h4; // @[TestHarness.scala 84:92]
  wire [1:0] _GEN_1 = 2'h1 == _GEN_5[1:0] ? 2'h1 : 2'h0; // @[TestHarness.scala 84:{25,25}]
  wire [1:0] _GEN_2 = 2'h2 == _GEN_5[1:0] ? 2'h2 : _GEN_1; // @[TestHarness.scala 84:{25,25}]
  wire [1:0] _GEN_3 = 2'h3 == _GEN_5[1:0] ? 2'h3 : _GEN_2; // @[TestHarness.scala 84:{25,25}]
  wire [31:0] out_payload_tsc = flits_left != 4'h0 ? payload_tsc : io_tsc; // @[TestHarness.scala 100:29 105:17 87:19]
  wire [15:0] out_payload_rob_idx = flits_left != 4'h0 ? payload_rob_idx : {{9'd0}, io_rob_idx}; // @[TestHarness.scala 100:29 105:17 88:23]
  wire [3:0] _GEN_18 = flits_left != 4'h0 ? flits_fired : 4'h0; // @[TestHarness.scala 100:29 106:29 89:27]
  wire [15:0] out_payload_flits_fired = {{12'd0}, _GEN_18}; // @[TestHarness.scala 85:25]
  wire [63:0] _io_out_bits_payload_T = {out_payload_tsc,out_payload_rob_idx,out_payload_flits_fired}; // @[TestHarness.scala 86:38]
  wire  _io_fire_T = io_out_ready & io_out_valid; // @[Decoupled.scala 51:35]
  wire [3:0] _GEN_4 = io_fire & ~io_out_bits_tail ? packet_remaining : flits_left; // @[TestHarness.scala 94:39 95:16 71:27]
  wire [3:0] _GEN_9 = io_fire & ~io_out_bits_tail ? 4'h1 : flits_fired; // @[TestHarness.scala 94:39 98:17 72:28]
  wire [3:0] _flits_fired_T_1 = flits_fired + 4'h1; // @[TestHarness.scala 109:34]
  wire [3:0] _flits_left_T_1 = flits_left - 4'h1; // @[TestHarness.scala 110:32]
  MaxPeriodFibonacciLFSR packet_remaining_prng ( // @[PRNG.scala 91:22]
    .clock(packet_remaining_prng_clock),
    .reset(packet_remaining_prng_reset),
    .io_out_0(packet_remaining_prng_io_out_0),
    .io_out_1(packet_remaining_prng_io_out_1),
    .io_out_2(packet_remaining_prng_io_out_2),
    .io_out_3(packet_remaining_prng_io_out_3),
    .io_out_4(packet_remaining_prng_io_out_4),
    .io_out_5(packet_remaining_prng_io_out_5),
    .io_out_6(packet_remaining_prng_io_out_6),
    .io_out_7(packet_remaining_prng_io_out_7),
    .io_out_8(packet_remaining_prng_io_out_8),
    .io_out_9(packet_remaining_prng_io_out_9),
    .io_out_10(packet_remaining_prng_io_out_10),
    .io_out_11(packet_remaining_prng_io_out_11),
    .io_out_12(packet_remaining_prng_io_out_12),
    .io_out_13(packet_remaining_prng_io_out_13),
    .io_out_14(packet_remaining_prng_io_out_14),
    .io_out_15(packet_remaining_prng_io_out_15),
    .io_out_16(packet_remaining_prng_io_out_16),
    .io_out_17(packet_remaining_prng_io_out_17),
    .io_out_18(packet_remaining_prng_io_out_18),
    .io_out_19(packet_remaining_prng_io_out_19)
  );
  MaxPeriodFibonacciLFSR random_flit_delay_prng ( // @[PRNG.scala 91:22]
    .clock(random_flit_delay_prng_clock),
    .reset(random_flit_delay_prng_reset),
    .io_out_0(random_flit_delay_prng_io_out_0),
    .io_out_1(random_flit_delay_prng_io_out_1),
    .io_out_2(random_flit_delay_prng_io_out_2),
    .io_out_3(random_flit_delay_prng_io_out_3),
    .io_out_4(random_flit_delay_prng_io_out_4),
    .io_out_5(random_flit_delay_prng_io_out_5),
    .io_out_6(random_flit_delay_prng_io_out_6),
    .io_out_7(random_flit_delay_prng_io_out_7),
    .io_out_8(random_flit_delay_prng_io_out_8),
    .io_out_9(random_flit_delay_prng_io_out_9),
    .io_out_10(random_flit_delay_prng_io_out_10),
    .io_out_11(random_flit_delay_prng_io_out_11),
    .io_out_12(random_flit_delay_prng_io_out_12),
    .io_out_13(random_flit_delay_prng_io_out_13),
    .io_out_14(random_flit_delay_prng_io_out_14),
    .io_out_15(random_flit_delay_prng_io_out_15),
    .io_out_16(random_flit_delay_prng_io_out_16),
    .io_out_17(random_flit_delay_prng_io_out_17),
    .io_out_18(random_flit_delay_prng_io_out_18),
    .io_out_19(random_flit_delay_prng_io_out_19)
  );
  MaxPeriodFibonacciLFSR random_packet_delay_prng ( // @[PRNG.scala 91:22]
    .clock(random_packet_delay_prng_clock),
    .reset(random_packet_delay_prng_reset),
    .io_out_0(random_packet_delay_prng_io_out_0),
    .io_out_1(random_packet_delay_prng_io_out_1),
    .io_out_2(random_packet_delay_prng_io_out_2),
    .io_out_3(random_packet_delay_prng_io_out_3),
    .io_out_4(random_packet_delay_prng_io_out_4),
    .io_out_5(random_packet_delay_prng_io_out_5),
    .io_out_6(random_packet_delay_prng_io_out_6),
    .io_out_7(random_packet_delay_prng_io_out_7),
    .io_out_8(random_packet_delay_prng_io_out_8),
    .io_out_9(random_packet_delay_prng_io_out_9),
    .io_out_10(random_packet_delay_prng_io_out_10),
    .io_out_11(random_packet_delay_prng_io_out_11),
    .io_out_12(random_packet_delay_prng_io_out_12),
    .io_out_13(random_packet_delay_prng_io_out_13),
    .io_out_14(random_packet_delay_prng_io_out_14),
    .io_out_15(random_packet_delay_prng_io_out_15),
    .io_out_16(random_packet_delay_prng_io_out_16),
    .io_out_17(random_packet_delay_prng_io_out_17),
    .io_out_18(random_packet_delay_prng_io_out_18),
    .io_out_19(random_packet_delay_prng_io_out_19)
  );
  MaxPeriodFibonacciLFSR io_out_bits_egress_id_prng ( // @[PRNG.scala 91:22]
    .clock(io_out_bits_egress_id_prng_clock),
    .reset(io_out_bits_egress_id_prng_reset),
    .io_out_0(io_out_bits_egress_id_prng_io_out_0),
    .io_out_1(io_out_bits_egress_id_prng_io_out_1),
    .io_out_2(io_out_bits_egress_id_prng_io_out_2),
    .io_out_3(io_out_bits_egress_id_prng_io_out_3),
    .io_out_4(io_out_bits_egress_id_prng_io_out_4),
    .io_out_5(io_out_bits_egress_id_prng_io_out_5),
    .io_out_6(io_out_bits_egress_id_prng_io_out_6),
    .io_out_7(io_out_bits_egress_id_prng_io_out_7),
    .io_out_8(io_out_bits_egress_id_prng_io_out_8),
    .io_out_9(io_out_bits_egress_id_prng_io_out_9),
    .io_out_10(io_out_bits_egress_id_prng_io_out_10),
    .io_out_11(io_out_bits_egress_id_prng_io_out_11),
    .io_out_12(io_out_bits_egress_id_prng_io_out_12),
    .io_out_13(io_out_bits_egress_id_prng_io_out_13),
    .io_out_14(io_out_bits_egress_id_prng_io_out_14),
    .io_out_15(io_out_bits_egress_id_prng_io_out_15),
    .io_out_16(io_out_bits_egress_id_prng_io_out_16),
    .io_out_17(io_out_bits_egress_id_prng_io_out_17),
    .io_out_18(io_out_bits_egress_id_prng_io_out_18),
    .io_out_19(io_out_bits_egress_id_prng_io_out_19)
  );
  assign io_out_valid = flits_left != 4'h0 | can_fire; // @[TestHarness.scala 100:29 101:18 81:16]
  assign io_out_bits_head = flits_left != 4'h0 ? 1'h0 : 1'h1; // @[TestHarness.scala 100:29 102:22 82:20]
  assign io_out_bits_tail = flits_left != 4'h0 ? flits_left == 4'h1 : packet_remaining == 4'h0; // @[TestHarness.scala 100:29 103:22 83:20]
  assign io_out_bits_payload = _io_out_bits_payload_T[19:0]; // @[TestHarness.scala 86:23]
  assign io_out_bits_egress_id = flits_left != 4'h0 ? egress : _GEN_3; // @[TestHarness.scala 100:29 104:27 84:25]
  assign io_fire = can_fire & _io_fire_T; // @[TestHarness.scala 92:23]
  assign io_n_flits = packet_remaining + 4'h1; // @[TestHarness.scala 91:34]
  assign packet_remaining_prng_clock = clock;
  assign packet_remaining_prng_reset = reset;
  assign random_flit_delay_prng_clock = clock;
  assign random_flit_delay_prng_reset = reset;
  assign random_packet_delay_prng_clock = clock;
  assign random_packet_delay_prng_reset = reset;
  assign io_out_bits_egress_id_prng_clock = clock;
  assign io_out_bits_egress_id_prng_reset = reset;
  always @(posedge clock) begin
    if (reset) begin // @[TestHarness.scala 71:27]
      flits_left <= 4'h0; // @[TestHarness.scala 71:27]
    end else if (flits_left != 4'h0) begin // @[TestHarness.scala 100:29]
      if (_io_fire_T) begin // @[TestHarness.scala 108:26]
        flits_left <= _flits_left_T_1; // @[TestHarness.scala 110:18]
      end else begin
        flits_left <= _GEN_4;
      end
    end else begin
      flits_left <= _GEN_4;
    end
    if (reset) begin // @[TestHarness.scala 72:28]
      flits_fired <= 4'h0; // @[TestHarness.scala 72:28]
    end else if (flits_left != 4'h0) begin // @[TestHarness.scala 100:29]
      if (_io_fire_T) begin // @[TestHarness.scala 108:26]
        flits_fired <= _flits_fired_T_1; // @[TestHarness.scala 109:19]
      end else begin
        flits_fired <= _GEN_9;
      end
    end else begin
      flits_fired <= _GEN_9;
    end
    if (io_fire & ~io_out_bits_tail) begin // @[TestHarness.scala 94:39]
      egress <= io_out_bits_egress_id; // @[TestHarness.scala 97:12]
    end
    if (io_fire & ~io_out_bits_tail) begin // @[TestHarness.scala 94:39]
      if (!(flits_left != 4'h0)) begin // @[TestHarness.scala 100:29]
        payload_tsc <= io_tsc; // @[TestHarness.scala 87:19]
      end
    end
    if (io_fire & ~io_out_bits_tail) begin // @[TestHarness.scala 94:39]
      if (!(flits_left != 4'h0)) begin // @[TestHarness.scala 100:29]
        payload_rob_idx <= {{9'd0}, io_rob_idx}; // @[TestHarness.scala 88:23]
      end
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
  _RAND_0 = {1{`RANDOM}};
  flits_left = _RAND_0[3:0];
  _RAND_1 = {1{`RANDOM}};
  flits_fired = _RAND_1[3:0];
  _RAND_2 = {1{`RANDOM}};
  egress = _RAND_2[1:0];
  _RAND_3 = {1{`RANDOM}};
  payload_tsc = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  payload_rob_idx = _RAND_4[15:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule