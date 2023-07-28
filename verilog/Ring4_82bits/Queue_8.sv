module Queue_8(
  input         clock,
  input         reset,
  output        io_enq_ready,
  input         io_enq_valid,
  input         io_enq_bits_head,
  input         io_enq_bits_tail,
  input  [81:0] io_enq_bits_payload,
  input  [1:0]  io_enq_bits_flow_ingress_node,
  input  [1:0]  io_enq_bits_flow_egress_node,
  input         io_deq_ready,
  output        io_deq_valid,
  output        io_deq_bits_head,
  output        io_deq_bits_tail,
  output [81:0] io_deq_bits_payload,
  output [1:0]  io_deq_bits_flow_ingress_node,
  output [1:0]  io_deq_bits_flow_egress_node
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [95:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
`endif // RANDOMIZE_REG_INIT
  reg  ram_head [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_head_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_head_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_head_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_head_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_head_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_head_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_head_MPORT_en; // @[Decoupled.scala 273:95]
  reg  ram_tail [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_tail_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_tail_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_tail_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_tail_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_tail_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_tail_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_tail_MPORT_en; // @[Decoupled.scala 273:95]
  reg [81:0] ram_payload [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_payload_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_payload_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [81:0] ram_payload_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [81:0] ram_payload_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_payload_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_payload_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_payload_MPORT_en; // @[Decoupled.scala 273:95]
  reg [1:0] ram_flow_ingress_node [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_flow_ingress_node_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_flow_ingress_node_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [1:0] ram_flow_ingress_node_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [1:0] ram_flow_ingress_node_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_flow_ingress_node_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_flow_ingress_node_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_flow_ingress_node_MPORT_en; // @[Decoupled.scala 273:95]
  reg [1:0] ram_flow_egress_node [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_flow_egress_node_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_flow_egress_node_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [1:0] ram_flow_egress_node_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [1:0] ram_flow_egress_node_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_flow_egress_node_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_flow_egress_node_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_flow_egress_node_MPORT_en; // @[Decoupled.scala 273:95]
  reg  enq_ptr_value; // @[Counter.scala 61:40]
  reg  deq_ptr_value; // @[Counter.scala 61:40]
  reg  maybe_full; // @[Decoupled.scala 276:27]
  wire  ptr_match = enq_ptr_value == deq_ptr_value; // @[Decoupled.scala 277:33]
  wire  empty = ptr_match & ~maybe_full; // @[Decoupled.scala 278:25]
  wire  full = ptr_match & maybe_full; // @[Decoupled.scala 279:24]
  wire  do_enq = io_enq_ready & io_enq_valid; // @[Decoupled.scala 51:35]
  wire  do_deq = io_deq_ready & io_deq_valid; // @[Decoupled.scala 51:35]
  assign ram_head_io_deq_bits_MPORT_en = 1'h1;
  assign ram_head_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_head_io_deq_bits_MPORT_data = ram_head[ram_head_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_head_MPORT_data = io_enq_bits_head;
  assign ram_head_MPORT_addr = enq_ptr_value;
  assign ram_head_MPORT_mask = 1'h1;
  assign ram_head_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_tail_io_deq_bits_MPORT_en = 1'h1;
  assign ram_tail_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_tail_io_deq_bits_MPORT_data = ram_tail[ram_tail_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_tail_MPORT_data = io_enq_bits_tail;
  assign ram_tail_MPORT_addr = enq_ptr_value;
  assign ram_tail_MPORT_mask = 1'h1;
  assign ram_tail_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_payload_io_deq_bits_MPORT_en = 1'h1;
  assign ram_payload_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_payload_io_deq_bits_MPORT_data = ram_payload[ram_payload_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_payload_MPORT_data = io_enq_bits_payload;
  assign ram_payload_MPORT_addr = enq_ptr_value;
  assign ram_payload_MPORT_mask = 1'h1;
  assign ram_payload_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_flow_ingress_node_io_deq_bits_MPORT_en = 1'h1;
  assign ram_flow_ingress_node_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_flow_ingress_node_io_deq_bits_MPORT_data =
    ram_flow_ingress_node[ram_flow_ingress_node_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_flow_ingress_node_MPORT_data = io_enq_bits_flow_ingress_node;
  assign ram_flow_ingress_node_MPORT_addr = enq_ptr_value;
  assign ram_flow_ingress_node_MPORT_mask = 1'h1;
  assign ram_flow_ingress_node_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_flow_egress_node_io_deq_bits_MPORT_en = 1'h1;
  assign ram_flow_egress_node_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_flow_egress_node_io_deq_bits_MPORT_data = ram_flow_egress_node[ram_flow_egress_node_io_deq_bits_MPORT_addr]
    ; // @[Decoupled.scala 273:95]
  assign ram_flow_egress_node_MPORT_data = io_enq_bits_flow_egress_node;
  assign ram_flow_egress_node_MPORT_addr = enq_ptr_value;
  assign ram_flow_egress_node_MPORT_mask = 1'h1;
  assign ram_flow_egress_node_MPORT_en = io_enq_ready & io_enq_valid;
  assign io_enq_ready = ~full; // @[Decoupled.scala 303:19]
  assign io_deq_valid = ~empty; // @[Decoupled.scala 302:19]
  assign io_deq_bits_head = ram_head_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_tail = ram_tail_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_payload = ram_payload_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_flow_ingress_node = ram_flow_ingress_node_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_flow_egress_node = ram_flow_egress_node_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
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
    if (ram_flow_ingress_node_MPORT_en & ram_flow_ingress_node_MPORT_mask) begin
      ram_flow_ingress_node[ram_flow_ingress_node_MPORT_addr] <= ram_flow_ingress_node_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_flow_egress_node_MPORT_en & ram_flow_egress_node_MPORT_mask) begin
      ram_flow_egress_node[ram_flow_egress_node_MPORT_addr] <= ram_flow_egress_node_MPORT_data; // @[Decoupled.scala 273:95]
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
    ram_head[initvar] = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_tail[initvar] = _RAND_1[0:0];
  _RAND_2 = {3{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_payload[initvar] = _RAND_2[81:0];
  _RAND_3 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_flow_ingress_node[initvar] = _RAND_3[1:0];
  _RAND_4 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_flow_egress_node[initvar] = _RAND_4[1:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  enq_ptr_value = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  deq_ptr_value = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  maybe_full = _RAND_7[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule