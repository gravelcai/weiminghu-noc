module Queue_9(
  input   clock,
  input   reset,
  output  io_enq_ready,
  input   io_enq_valid,
  input   io_enq_bits_vc_sel_2_0,
  input   io_enq_bits_vc_sel_1_0,
  input   io_enq_bits_vc_sel_1_1,
  input   io_enq_bits_vc_sel_1_2,
  input   io_enq_bits_vc_sel_1_3,
  input   io_enq_bits_vc_sel_0_0,
  input   io_enq_bits_vc_sel_0_1,
  input   io_enq_bits_vc_sel_0_2,
  input   io_enq_bits_vc_sel_0_3,
  input   io_deq_ready,
  output  io_deq_valid,
  output  io_deq_bits_vc_sel_2_0,
  output  io_deq_bits_vc_sel_1_0,
  output  io_deq_bits_vc_sel_1_1,
  output  io_deq_bits_vc_sel_1_2,
  output  io_deq_bits_vc_sel_1_3,
  output  io_deq_bits_vc_sel_0_0,
  output  io_deq_bits_vc_sel_0_1,
  output  io_deq_bits_vc_sel_0_2,
  output  io_deq_bits_vc_sel_0_3
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
`endif // RANDOMIZE_REG_INIT
  reg  ram_vc_sel_2_0 [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_2_0_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_2_0_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_2_0_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_2_0_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_2_0_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_2_0_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_2_0_MPORT_en; // @[Decoupled.scala 273:95]
  reg  ram_vc_sel_1_0 [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_0_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_0_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_0_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_0_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_0_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_0_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_0_MPORT_en; // @[Decoupled.scala 273:95]
  reg  ram_vc_sel_1_1 [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_1_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_1_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_1_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_1_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_1_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_1_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_1_MPORT_en; // @[Decoupled.scala 273:95]
  reg  ram_vc_sel_1_2 [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_2_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_2_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_2_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_2_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_2_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_2_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_2_MPORT_en; // @[Decoupled.scala 273:95]
  reg  ram_vc_sel_1_3 [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_3_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_3_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_3_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_3_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_3_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_3_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_1_3_MPORT_en; // @[Decoupled.scala 273:95]
  reg  ram_vc_sel_0_0 [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_0_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_0_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_0_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_0_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_0_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_0_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_0_MPORT_en; // @[Decoupled.scala 273:95]
  reg  ram_vc_sel_0_1 [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_1_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_1_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_1_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_1_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_1_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_1_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_1_MPORT_en; // @[Decoupled.scala 273:95]
  reg  ram_vc_sel_0_2 [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_2_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_2_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_2_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_2_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_2_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_2_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_2_MPORT_en; // @[Decoupled.scala 273:95]
  reg  ram_vc_sel_0_3 [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_3_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_3_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_3_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_3_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_3_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_3_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_vc_sel_0_3_MPORT_en; // @[Decoupled.scala 273:95]
  reg  enq_ptr_value; // @[Counter.scala 61:40]
  reg  deq_ptr_value; // @[Counter.scala 61:40]
  reg  maybe_full; // @[Decoupled.scala 276:27]
  wire  ptr_match = enq_ptr_value == deq_ptr_value; // @[Decoupled.scala 277:33]
  wire  empty = ptr_match & ~maybe_full; // @[Decoupled.scala 278:25]
  wire  full = ptr_match & maybe_full; // @[Decoupled.scala 279:24]
  wire  do_enq = io_enq_ready & io_enq_valid; // @[Decoupled.scala 51:35]
  wire  do_deq = io_deq_ready & io_deq_valid; // @[Decoupled.scala 51:35]
  assign ram_vc_sel_2_0_io_deq_bits_MPORT_en = 1'h1;
  assign ram_vc_sel_2_0_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_vc_sel_2_0_io_deq_bits_MPORT_data = ram_vc_sel_2_0[ram_vc_sel_2_0_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_vc_sel_2_0_MPORT_data = io_enq_bits_vc_sel_2_0;
  assign ram_vc_sel_2_0_MPORT_addr = enq_ptr_value;
  assign ram_vc_sel_2_0_MPORT_mask = 1'h1;
  assign ram_vc_sel_2_0_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_vc_sel_1_0_io_deq_bits_MPORT_en = 1'h1;
  assign ram_vc_sel_1_0_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_vc_sel_1_0_io_deq_bits_MPORT_data = ram_vc_sel_1_0[ram_vc_sel_1_0_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_vc_sel_1_0_MPORT_data = io_enq_bits_vc_sel_1_0;
  assign ram_vc_sel_1_0_MPORT_addr = enq_ptr_value;
  assign ram_vc_sel_1_0_MPORT_mask = 1'h1;
  assign ram_vc_sel_1_0_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_vc_sel_1_1_io_deq_bits_MPORT_en = 1'h1;
  assign ram_vc_sel_1_1_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_vc_sel_1_1_io_deq_bits_MPORT_data = ram_vc_sel_1_1[ram_vc_sel_1_1_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_vc_sel_1_1_MPORT_data = io_enq_bits_vc_sel_1_1;
  assign ram_vc_sel_1_1_MPORT_addr = enq_ptr_value;
  assign ram_vc_sel_1_1_MPORT_mask = 1'h1;
  assign ram_vc_sel_1_1_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_vc_sel_1_2_io_deq_bits_MPORT_en = 1'h1;
  assign ram_vc_sel_1_2_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_vc_sel_1_2_io_deq_bits_MPORT_data = ram_vc_sel_1_2[ram_vc_sel_1_2_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_vc_sel_1_2_MPORT_data = io_enq_bits_vc_sel_1_2;
  assign ram_vc_sel_1_2_MPORT_addr = enq_ptr_value;
  assign ram_vc_sel_1_2_MPORT_mask = 1'h1;
  assign ram_vc_sel_1_2_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_vc_sel_1_3_io_deq_bits_MPORT_en = 1'h1;
  assign ram_vc_sel_1_3_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_vc_sel_1_3_io_deq_bits_MPORT_data = ram_vc_sel_1_3[ram_vc_sel_1_3_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_vc_sel_1_3_MPORT_data = io_enq_bits_vc_sel_1_3;
  assign ram_vc_sel_1_3_MPORT_addr = enq_ptr_value;
  assign ram_vc_sel_1_3_MPORT_mask = 1'h1;
  assign ram_vc_sel_1_3_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_vc_sel_0_0_io_deq_bits_MPORT_en = 1'h1;
  assign ram_vc_sel_0_0_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_vc_sel_0_0_io_deq_bits_MPORT_data = ram_vc_sel_0_0[ram_vc_sel_0_0_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_vc_sel_0_0_MPORT_data = io_enq_bits_vc_sel_0_0;
  assign ram_vc_sel_0_0_MPORT_addr = enq_ptr_value;
  assign ram_vc_sel_0_0_MPORT_mask = 1'h1;
  assign ram_vc_sel_0_0_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_vc_sel_0_1_io_deq_bits_MPORT_en = 1'h1;
  assign ram_vc_sel_0_1_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_vc_sel_0_1_io_deq_bits_MPORT_data = ram_vc_sel_0_1[ram_vc_sel_0_1_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_vc_sel_0_1_MPORT_data = io_enq_bits_vc_sel_0_1;
  assign ram_vc_sel_0_1_MPORT_addr = enq_ptr_value;
  assign ram_vc_sel_0_1_MPORT_mask = 1'h1;
  assign ram_vc_sel_0_1_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_vc_sel_0_2_io_deq_bits_MPORT_en = 1'h1;
  assign ram_vc_sel_0_2_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_vc_sel_0_2_io_deq_bits_MPORT_data = ram_vc_sel_0_2[ram_vc_sel_0_2_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_vc_sel_0_2_MPORT_data = io_enq_bits_vc_sel_0_2;
  assign ram_vc_sel_0_2_MPORT_addr = enq_ptr_value;
  assign ram_vc_sel_0_2_MPORT_mask = 1'h1;
  assign ram_vc_sel_0_2_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_vc_sel_0_3_io_deq_bits_MPORT_en = 1'h1;
  assign ram_vc_sel_0_3_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_vc_sel_0_3_io_deq_bits_MPORT_data = ram_vc_sel_0_3[ram_vc_sel_0_3_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_vc_sel_0_3_MPORT_data = io_enq_bits_vc_sel_0_3;
  assign ram_vc_sel_0_3_MPORT_addr = enq_ptr_value;
  assign ram_vc_sel_0_3_MPORT_mask = 1'h1;
  assign ram_vc_sel_0_3_MPORT_en = io_enq_ready & io_enq_valid;
  assign io_enq_ready = ~full; // @[Decoupled.scala 303:19]
  assign io_deq_valid = ~empty; // @[Decoupled.scala 302:19]
  assign io_deq_bits_vc_sel_2_0 = ram_vc_sel_2_0_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_vc_sel_1_0 = ram_vc_sel_1_0_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_vc_sel_1_1 = ram_vc_sel_1_1_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_vc_sel_1_2 = ram_vc_sel_1_2_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_vc_sel_1_3 = ram_vc_sel_1_3_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_vc_sel_0_0 = ram_vc_sel_0_0_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_vc_sel_0_1 = ram_vc_sel_0_1_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_vc_sel_0_2 = ram_vc_sel_0_2_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_vc_sel_0_3 = ram_vc_sel_0_3_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  always @(posedge clock) begin
    if (ram_vc_sel_2_0_MPORT_en & ram_vc_sel_2_0_MPORT_mask) begin
      ram_vc_sel_2_0[ram_vc_sel_2_0_MPORT_addr] <= ram_vc_sel_2_0_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_vc_sel_1_0_MPORT_en & ram_vc_sel_1_0_MPORT_mask) begin
      ram_vc_sel_1_0[ram_vc_sel_1_0_MPORT_addr] <= ram_vc_sel_1_0_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_vc_sel_1_1_MPORT_en & ram_vc_sel_1_1_MPORT_mask) begin
      ram_vc_sel_1_1[ram_vc_sel_1_1_MPORT_addr] <= ram_vc_sel_1_1_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_vc_sel_1_2_MPORT_en & ram_vc_sel_1_2_MPORT_mask) begin
      ram_vc_sel_1_2[ram_vc_sel_1_2_MPORT_addr] <= ram_vc_sel_1_2_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_vc_sel_1_3_MPORT_en & ram_vc_sel_1_3_MPORT_mask) begin
      ram_vc_sel_1_3[ram_vc_sel_1_3_MPORT_addr] <= ram_vc_sel_1_3_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_vc_sel_0_0_MPORT_en & ram_vc_sel_0_0_MPORT_mask) begin
      ram_vc_sel_0_0[ram_vc_sel_0_0_MPORT_addr] <= ram_vc_sel_0_0_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_vc_sel_0_1_MPORT_en & ram_vc_sel_0_1_MPORT_mask) begin
      ram_vc_sel_0_1[ram_vc_sel_0_1_MPORT_addr] <= ram_vc_sel_0_1_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_vc_sel_0_2_MPORT_en & ram_vc_sel_0_2_MPORT_mask) begin
      ram_vc_sel_0_2[ram_vc_sel_0_2_MPORT_addr] <= ram_vc_sel_0_2_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_vc_sel_0_3_MPORT_en & ram_vc_sel_0_3_MPORT_mask) begin
      ram_vc_sel_0_3[ram_vc_sel_0_3_MPORT_addr] <= ram_vc_sel_0_3_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (reset) begin // @[Counter.scala 61:40]
      enq_ptr_value <= 1'h0; // @[Counter.scala 61:40]
    end else if (do_enq) begin // @[Decoupled.scala 286:16]
      enq_ptr_value <= enq_ptr_value + 1'h1; // @[Counter.scala 77:15]
    end
    if (reset) begin // @[Counter.scala 61:40]
      deq_ptr_value <= 1'h0; // @[Counter.scala 61:40]
    end else if (do_deq) begin // @[Decoupled.scala 290:16]
      deq_ptr_value <= deq_ptr_value + 1'h1; // @[Counter.scala 77:15]
    end
    if (reset) begin // @[Decoupled.scala 276:27]
      maybe_full <= 1'h0; // @[Decoupled.scala 276:27]
    end else if (do_enq != do_deq) begin // @[Decoupled.scala 293:27]
      maybe_full <= do_enq; // @[Decoupled.scala 294:16]
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
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_vc_sel_2_0[initvar] = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_vc_sel_1_0[initvar] = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_vc_sel_1_1[initvar] = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_vc_sel_1_2[initvar] = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_vc_sel_1_3[initvar] = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_vc_sel_0_0[initvar] = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_vc_sel_0_1[initvar] = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_vc_sel_0_2[initvar] = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_vc_sel_0_3[initvar] = _RAND_8[0:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  enq_ptr_value = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  deq_ptr_value = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  maybe_full = _RAND_11[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule