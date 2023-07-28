module Queue_12(
  input         clock,
  input         reset,
  output        io_enq_ready,
  input         io_enq_valid,
  input         io_enq_bits_head,
  input         io_enq_bits_tail,
  input  [19:0] io_enq_bits_payload,
  input  [1:0]  io_enq_bits_ingress_id,
  output        io_deq_valid,
  output        io_deq_bits_head,
  output        io_deq_bits_tail,
  output [19:0] io_deq_bits_payload,
  output [1:0]  io_deq_bits_ingress_id,
  output [1:0]  io_count
);
`ifdef RANDOMIZE_GARBAGE_ASSIGN
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_7;
`endif // RANDOMIZE_GARBAGE_ASSIGN
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_6;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
`endif // RANDOMIZE_REG_INIT
  reg  ram_head [0:2]; // @[Decoupled.scala 273:95]
  wire  ram_head_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire [1:0] ram_head_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_head_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_head_MPORT_data; // @[Decoupled.scala 273:95]
  wire [1:0] ram_head_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_head_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_head_MPORT_en; // @[Decoupled.scala 273:95]
  reg  ram_tail [0:2]; // @[Decoupled.scala 273:95]
  wire  ram_tail_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire [1:0] ram_tail_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_tail_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_tail_MPORT_data; // @[Decoupled.scala 273:95]
  wire [1:0] ram_tail_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_tail_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_tail_MPORT_en; // @[Decoupled.scala 273:95]
  reg [19:0] ram_payload [0:2]; // @[Decoupled.scala 273:95]
  wire  ram_payload_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire [1:0] ram_payload_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [19:0] ram_payload_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [19:0] ram_payload_MPORT_data; // @[Decoupled.scala 273:95]
  wire [1:0] ram_payload_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_payload_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_payload_MPORT_en; // @[Decoupled.scala 273:95]
  reg [1:0] ram_ingress_id [0:2]; // @[Decoupled.scala 273:95]
  wire  ram_ingress_id_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire [1:0] ram_ingress_id_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [1:0] ram_ingress_id_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [1:0] ram_ingress_id_MPORT_data; // @[Decoupled.scala 273:95]
  wire [1:0] ram_ingress_id_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_ingress_id_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_ingress_id_MPORT_en; // @[Decoupled.scala 273:95]
  reg [1:0] enq_ptr_value; // @[Counter.scala 61:40]
  reg [1:0] deq_ptr_value; // @[Counter.scala 61:40]
  reg  maybe_full; // @[Decoupled.scala 276:27]
  wire  ptr_match = enq_ptr_value == deq_ptr_value; // @[Decoupled.scala 277:33]
  wire  empty = ptr_match & ~maybe_full; // @[Decoupled.scala 278:25]
  wire  full = ptr_match & maybe_full; // @[Decoupled.scala 279:24]
  wire  _do_enq_T = io_enq_ready & io_enq_valid; // @[Decoupled.scala 51:35]
  wire  wrap = enq_ptr_value == 2'h2; // @[Counter.scala 73:24]
  wire [1:0] _value_T_1 = enq_ptr_value + 2'h1; // @[Counter.scala 77:24]
  wire  do_enq = empty ? 1'h0 : _do_enq_T; // @[Decoupled.scala 315:17 280:27]
  wire  wrap_1 = deq_ptr_value == 2'h2; // @[Counter.scala 73:24]
  wire [1:0] _value_T_3 = deq_ptr_value + 2'h1; // @[Counter.scala 77:24]
  wire  do_deq = empty ? 1'h0 : io_deq_valid; // @[Decoupled.scala 315:17 317:14 281:27]
  wire [1:0] ptr_diff = enq_ptr_value - deq_ptr_value; // @[Decoupled.scala 326:32]
  wire [1:0] _io_count_T = maybe_full ? 2'h3 : 2'h0; // @[Decoupled.scala 333:10]
  wire [1:0] _io_count_T_3 = 2'h3 + ptr_diff; // @[Decoupled.scala 334:57]
  wire [1:0] _io_count_T_4 = deq_ptr_value > enq_ptr_value ? _io_count_T_3 : ptr_diff; // @[Decoupled.scala 334:10]
  assign ram_head_io_deq_bits_MPORT_en = 1'h1;
  assign ram_head_io_deq_bits_MPORT_addr = deq_ptr_value;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign ram_head_io_deq_bits_MPORT_data = ram_head[ram_head_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  `else
  assign ram_head_io_deq_bits_MPORT_data = ram_head_io_deq_bits_MPORT_addr >= 2'h3 ? _RAND_1[0:0] :
    ram_head[ram_head_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign ram_head_MPORT_data = io_enq_bits_head;
  assign ram_head_MPORT_addr = enq_ptr_value;
  assign ram_head_MPORT_mask = 1'h1;
  assign ram_head_MPORT_en = empty ? 1'h0 : _do_enq_T;
  assign ram_tail_io_deq_bits_MPORT_en = 1'h1;
  assign ram_tail_io_deq_bits_MPORT_addr = deq_ptr_value;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign ram_tail_io_deq_bits_MPORT_data = ram_tail[ram_tail_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  `else
  assign ram_tail_io_deq_bits_MPORT_data = ram_tail_io_deq_bits_MPORT_addr >= 2'h3 ? _RAND_3[0:0] :
    ram_tail[ram_tail_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign ram_tail_MPORT_data = io_enq_bits_tail;
  assign ram_tail_MPORT_addr = enq_ptr_value;
  assign ram_tail_MPORT_mask = 1'h1;
  assign ram_tail_MPORT_en = empty ? 1'h0 : _do_enq_T;
  assign ram_payload_io_deq_bits_MPORT_en = 1'h1;
  assign ram_payload_io_deq_bits_MPORT_addr = deq_ptr_value;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign ram_payload_io_deq_bits_MPORT_data = ram_payload[ram_payload_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  `else
  assign ram_payload_io_deq_bits_MPORT_data = ram_payload_io_deq_bits_MPORT_addr >= 2'h3 ? _RAND_5[19:0] :
    ram_payload[ram_payload_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign ram_payload_MPORT_data = io_enq_bits_payload;
  assign ram_payload_MPORT_addr = enq_ptr_value;
  assign ram_payload_MPORT_mask = 1'h1;
  assign ram_payload_MPORT_en = empty ? 1'h0 : _do_enq_T;
  assign ram_ingress_id_io_deq_bits_MPORT_en = 1'h1;
  assign ram_ingress_id_io_deq_bits_MPORT_addr = deq_ptr_value;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign ram_ingress_id_io_deq_bits_MPORT_data = ram_ingress_id[ram_ingress_id_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  `else
  assign ram_ingress_id_io_deq_bits_MPORT_data = ram_ingress_id_io_deq_bits_MPORT_addr >= 2'h3 ? _RAND_7[1:0] :
    ram_ingress_id[ram_ingress_id_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign ram_ingress_id_MPORT_data = io_enq_bits_ingress_id;
  assign ram_ingress_id_MPORT_addr = enq_ptr_value;
  assign ram_ingress_id_MPORT_mask = 1'h1;
  assign ram_ingress_id_MPORT_en = empty ? 1'h0 : _do_enq_T;
  assign io_enq_ready = ~full; // @[Decoupled.scala 303:19]
  assign io_deq_valid = io_enq_valid | ~empty; // @[Decoupled.scala 302:16 314:{24,39}]
  assign io_deq_bits_head = empty ? io_enq_bits_head : ram_head_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17 315:17 316:19]
  assign io_deq_bits_tail = empty ? io_enq_bits_tail : ram_tail_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17 315:17 316:19]
  assign io_deq_bits_payload = empty ? io_enq_bits_payload : ram_payload_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17 315:17 316:19]
  assign io_deq_bits_ingress_id = empty ? io_enq_bits_ingress_id : ram_ingress_id_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17 315:17 316:19]
  assign io_count = ptr_match ? _io_count_T : _io_count_T_4; // @[Decoupled.scala 331:20]
  always @(posedge clock) begin
    if (ram_head_MPORT_en & ram_head_MPORT_mask) begin
      ram_head[ram_head_MPORT_addr] <= ram_head_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_tail_MPORT_en & ram_tail_MPORT_mask) begin
      ram_tail[ram_tail_MPORT_addr] <= ram_tail_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_payload_MPORT_en & ram_payload_MPORT_mask) begin
      ram_payload[ram_payload_MPORT_addr] <= ram_payload_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_ingress_id_MPORT_en & ram_ingress_id_MPORT_mask) begin
      ram_ingress_id[ram_ingress_id_MPORT_addr] <= ram_ingress_id_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (reset) begin // @[Counter.scala 61:40]
      enq_ptr_value <= 2'h0; // @[Counter.scala 61:40]
    end else if (do_enq) begin // @[Decoupled.scala 286:16]
      if (wrap) begin // @[Counter.scala 87:20]
        enq_ptr_value <= 2'h0; // @[Counter.scala 87:28]
      end else begin
        enq_ptr_value <= _value_T_1; // @[Counter.scala 77:15]
      end
    end
    if (reset) begin // @[Counter.scala 61:40]
      deq_ptr_value <= 2'h0; // @[Counter.scala 61:40]
    end else if (do_deq) begin // @[Decoupled.scala 290:16]
      if (wrap_1) begin // @[Counter.scala 87:20]
        deq_ptr_value <= 2'h0; // @[Counter.scala 87:28]
      end else begin
        deq_ptr_value <= _value_T_3; // @[Counter.scala 77:15]
      end
    end
    if (reset) begin // @[Decoupled.scala 276:27]
      maybe_full <= 1'h0; // @[Decoupled.scala 276:27]
    end else if (do_enq != do_deq) begin // @[Decoupled.scala 293:27]
      if (empty) begin // @[Decoupled.scala 315:17]
        maybe_full <= 1'h0;
      end else begin
        maybe_full <= _do_enq_T; // @[Decoupled.scala 280:27]
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
`ifdef RANDOMIZE_GARBAGE_ASSIGN
  _RAND_1 = {1{`RANDOM}};
  _RAND_3 = {1{`RANDOM}};
  _RAND_5 = {1{`RANDOM}};
  _RAND_7 = {1{`RANDOM}};
`endif // RANDOMIZE_GARBAGE_ASSIGN
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 3; initvar = initvar+1)
    ram_head[initvar] = _RAND_0[0:0];
  _RAND_2 = {1{`RANDOM}};
  for (initvar = 0; initvar < 3; initvar = initvar+1)
    ram_tail[initvar] = _RAND_2[0:0];
  _RAND_4 = {1{`RANDOM}};
  for (initvar = 0; initvar < 3; initvar = initvar+1)
    ram_payload[initvar] = _RAND_4[19:0];
  _RAND_6 = {1{`RANDOM}};
  for (initvar = 0; initvar < 3; initvar = initvar+1)
    ram_ingress_id[initvar] = _RAND_6[1:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  enq_ptr_value = _RAND_8[1:0];
  _RAND_9 = {1{`RANDOM}};
  deq_ptr_value = _RAND_9[1:0];
  _RAND_10 = {1{`RANDOM}};
  maybe_full = _RAND_10[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule