module Queue_52(
  input         clock,
  input         reset,
  output        io_enq_ready,
  input         io_enq_valid,
  input         io_enq_bits_head,
  input         io_enq_bits_tail,
  input  [81:0] io_enq_bits_payload,
  input  [1:0]  io_enq_bits_egress_id,
  input         io_deq_ready,
  output        io_deq_valid,
  output        io_deq_bits_head,
  output        io_deq_bits_tail,
  output [81:0] io_deq_bits_payload,
  output [1:0]  io_deq_bits_egress_id
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [95:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  reg  ram_head [0:0]; // @[Decoupled.scala 273:95]
  wire  ram_head_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_head_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_head_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_head_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_head_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_head_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_head_MPORT_en; // @[Decoupled.scala 273:95]
  reg  ram_tail [0:0]; // @[Decoupled.scala 273:95]
  wire  ram_tail_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_tail_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_tail_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_tail_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_tail_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_tail_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_tail_MPORT_en; // @[Decoupled.scala 273:95]
  reg [81:0] ram_payload [0:0]; // @[Decoupled.scala 273:95]
  wire  ram_payload_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_payload_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [81:0] ram_payload_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [81:0] ram_payload_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_payload_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_payload_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_payload_MPORT_en; // @[Decoupled.scala 273:95]
  reg [1:0] ram_egress_id [0:0]; // @[Decoupled.scala 273:95]
  wire  ram_egress_id_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_egress_id_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [1:0] ram_egress_id_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [1:0] ram_egress_id_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_egress_id_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_egress_id_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_egress_id_MPORT_en; // @[Decoupled.scala 273:95]
  reg  maybe_full; // @[Decoupled.scala 276:27]
  wire  empty = ~maybe_full; // @[Decoupled.scala 278:28]
  wire  _do_enq_T = io_enq_ready & io_enq_valid; // @[Decoupled.scala 51:35]
  wire  _do_deq_T = io_deq_ready & io_deq_valid; // @[Decoupled.scala 51:35]
  wire  _GEN_12 = io_deq_ready ? 1'h0 : _do_enq_T; // @[Decoupled.scala 318:26 280:27 318:35]
  wire  do_enq = empty ? _GEN_12 : _do_enq_T; // @[Decoupled.scala 315:17 280:27]
  wire  do_deq = empty ? 1'h0 : _do_deq_T; // @[Decoupled.scala 315:17 317:14 281:27]
  assign ram_head_io_deq_bits_MPORT_en = 1'h1;
  assign ram_head_io_deq_bits_MPORT_addr = 1'h0;
  assign ram_head_io_deq_bits_MPORT_data = ram_head[ram_head_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_head_MPORT_data = io_enq_bits_head;
  assign ram_head_MPORT_addr = 1'h0;
  assign ram_head_MPORT_mask = 1'h1;
  assign ram_head_MPORT_en = empty ? _GEN_12 : _do_enq_T;
  assign ram_tail_io_deq_bits_MPORT_en = 1'h1;
  assign ram_tail_io_deq_bits_MPORT_addr = 1'h0;
  assign ram_tail_io_deq_bits_MPORT_data = ram_tail[ram_tail_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_tail_MPORT_data = io_enq_bits_tail;
  assign ram_tail_MPORT_addr = 1'h0;
  assign ram_tail_MPORT_mask = 1'h1;
  assign ram_tail_MPORT_en = empty ? _GEN_12 : _do_enq_T;
  assign ram_payload_io_deq_bits_MPORT_en = 1'h1;
  assign ram_payload_io_deq_bits_MPORT_addr = 1'h0;
  assign ram_payload_io_deq_bits_MPORT_data = ram_payload[ram_payload_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_payload_MPORT_data = io_enq_bits_payload;
  assign ram_payload_MPORT_addr = 1'h0;
  assign ram_payload_MPORT_mask = 1'h1;
  assign ram_payload_MPORT_en = empty ? _GEN_12 : _do_enq_T;
  assign ram_egress_id_io_deq_bits_MPORT_en = 1'h1;
  assign ram_egress_id_io_deq_bits_MPORT_addr = 1'h0;
  assign ram_egress_id_io_deq_bits_MPORT_data = ram_egress_id[ram_egress_id_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_egress_id_MPORT_data = io_enq_bits_egress_id;
  assign ram_egress_id_MPORT_addr = 1'h0;
  assign ram_egress_id_MPORT_mask = 1'h1;
  assign ram_egress_id_MPORT_en = empty ? _GEN_12 : _do_enq_T;
  assign io_enq_ready = io_deq_ready | empty; // @[Decoupled.scala 303:16 323:{24,39}]
  assign io_deq_valid = io_enq_valid | ~empty; // @[Decoupled.scala 302:16 314:{24,39}]
  assign io_deq_bits_head = empty ? io_enq_bits_head : ram_head_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17 315:17 316:19]
  assign io_deq_bits_tail = empty ? io_enq_bits_tail : ram_tail_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17 315:17 316:19]
  assign io_deq_bits_payload = empty ? io_enq_bits_payload : ram_payload_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17 315:17 316:19]
  assign io_deq_bits_egress_id = empty ? io_enq_bits_egress_id : ram_egress_id_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17 315:17 316:19]
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
    if (ram_egress_id_MPORT_en & ram_egress_id_MPORT_mask) begin
      ram_egress_id[ram_egress_id_MPORT_addr] <= ram_egress_id_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (reset) begin // @[Decoupled.scala 276:27]
      maybe_full <= 1'h0; // @[Decoupled.scala 276:27]
    end else if (do_enq != do_deq) begin // @[Decoupled.scala 293:27]
      if (empty) begin // @[Decoupled.scala 315:17]
        if (io_deq_ready) begin // @[Decoupled.scala 318:26]
          maybe_full <= 1'h0; // @[Decoupled.scala 318:35]
        end else begin
          maybe_full <= _do_enq_T; // @[Decoupled.scala 280:27]
        end
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
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 1; initvar = initvar+1)
    ram_head[initvar] = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  for (initvar = 0; initvar < 1; initvar = initvar+1)
    ram_tail[initvar] = _RAND_1[0:0];
  _RAND_2 = {3{`RANDOM}};
  for (initvar = 0; initvar < 1; initvar = initvar+1)
    ram_payload[initvar] = _RAND_2[81:0];
  _RAND_3 = {1{`RANDOM}};
  for (initvar = 0; initvar < 1; initvar = initvar+1)
    ram_egress_id[initvar] = _RAND_3[1:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  maybe_full = _RAND_4[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule