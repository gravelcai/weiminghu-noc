module EgressUnit(
  input         clock,
  input         reset,
  input         io_in_0_valid,
  input         io_in_0_bits_head,
  input         io_in_0_bits_tail,
  input  [19:0] io_in_0_bits_payload,
  input  [1:0]  io_in_0_bits_flow_ingress_node,
  output        io_credit_available_0,
  output        io_channel_status_0_occupied,
  input         io_allocs_0_alloc,
  input         io_credit_alloc_0_alloc,
  input         io_credit_alloc_0_tail,
  output        io_out_valid,
  output        io_out_bits_head,
  output        io_out_bits_tail,
  output [19:0] io_out_bits_payload,
  output [1:0]  io_out_bits_ingress_id
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  q_clock; // @[EgressUnit.scala 22:17]
  wire  q_reset; // @[EgressUnit.scala 22:17]
  wire  q_io_enq_ready; // @[EgressUnit.scala 22:17]
  wire  q_io_enq_valid; // @[EgressUnit.scala 22:17]
  wire  q_io_enq_bits_head; // @[EgressUnit.scala 22:17]
  wire  q_io_enq_bits_tail; // @[EgressUnit.scala 22:17]
  wire [19:0] q_io_enq_bits_payload; // @[EgressUnit.scala 22:17]
  wire [1:0] q_io_enq_bits_ingress_id; // @[EgressUnit.scala 22:17]
  wire  q_io_deq_valid; // @[EgressUnit.scala 22:17]
  wire  q_io_deq_bits_head; // @[EgressUnit.scala 22:17]
  wire  q_io_deq_bits_tail; // @[EgressUnit.scala 22:17]
  wire [19:0] q_io_deq_bits_payload; // @[EgressUnit.scala 22:17]
  wire [1:0] q_io_deq_bits_ingress_id; // @[EgressUnit.scala 22:17]
  wire [1:0] q_io_count; // @[EgressUnit.scala 22:17]
  reg  channel_empty; // @[EgressUnit.scala 20:30]
  wire  _q_io_enq_bits_ingress_id_T_3 = 2'h1 == io_in_0_bits_flow_ingress_node; // @[EgressUnit.scala 31:39]
  wire  _q_io_enq_bits_ingress_id_T_6 = 2'h2 == io_in_0_bits_flow_ingress_node; // @[EgressUnit.scala 31:39]
  wire  _q_io_enq_bits_ingress_id_T_9 = 2'h3 == io_in_0_bits_flow_ingress_node; // @[EgressUnit.scala 31:39]
  wire [1:0] _q_io_enq_bits_ingress_id_T_13 = _q_io_enq_bits_ingress_id_T_3 ? 2'h1 : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _q_io_enq_bits_ingress_id_T_14 = _q_io_enq_bits_ingress_id_T_6 ? 2'h2 : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _q_io_enq_bits_ingress_id_T_15 = _q_io_enq_bits_ingress_id_T_9 ? 2'h3 : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _q_io_enq_bits_ingress_id_T_17 = _q_io_enq_bits_ingress_id_T_13 | _q_io_enq_bits_ingress_id_T_14; // @[Mux.scala 27:73]
  wire  _GEN_0 = io_credit_alloc_0_alloc & io_credit_alloc_0_tail | channel_empty; // @[EgressUnit.scala 44:62 45:19 20:30]
  wire  _GEN_1 = io_allocs_0_alloc ? 1'h0 : _GEN_0; // @[EgressUnit.scala 49:29 50:19]
  Queue_12 q ( // @[EgressUnit.scala 22:17]
    .clock(q_clock),
    .reset(q_reset),
    .io_enq_ready(q_io_enq_ready),
    .io_enq_valid(q_io_enq_valid),
    .io_enq_bits_head(q_io_enq_bits_head),
    .io_enq_bits_tail(q_io_enq_bits_tail),
    .io_enq_bits_payload(q_io_enq_bits_payload),
    .io_enq_bits_ingress_id(q_io_enq_bits_ingress_id),
    .io_deq_valid(q_io_deq_valid),
    .io_deq_bits_head(q_io_deq_bits_head),
    .io_deq_bits_tail(q_io_deq_bits_tail),
    .io_deq_bits_payload(q_io_deq_bits_payload),
    .io_deq_bits_ingress_id(q_io_deq_bits_ingress_id),
    .io_count(q_io_count)
  );
  assign io_credit_available_0 = q_io_count == 2'h0; // @[EgressUnit.scala 40:40]
  assign io_channel_status_0_occupied = ~channel_empty; // @[EgressUnit.scala 41:36]
  assign io_out_valid = q_io_deq_valid; // @[EgressUnit.scala 37:10]
  assign io_out_bits_head = q_io_deq_bits_head; // @[EgressUnit.scala 37:10]
  assign io_out_bits_tail = q_io_deq_bits_tail; // @[EgressUnit.scala 37:10]
  assign io_out_bits_payload = q_io_deq_bits_payload; // @[EgressUnit.scala 37:10]
  assign io_out_bits_ingress_id = q_io_deq_bits_ingress_id; // @[EgressUnit.scala 37:10]
  assign q_clock = clock;
  assign q_reset = reset;
  assign q_io_enq_valid = io_in_0_valid; // @[EgressUnit.scala 23:18]
  assign q_io_enq_bits_head = io_in_0_bits_head; // @[EgressUnit.scala 24:22]
  assign q_io_enq_bits_tail = io_in_0_bits_tail; // @[EgressUnit.scala 25:22]
  assign q_io_enq_bits_payload = io_in_0_bits_payload; // @[EgressUnit.scala 36:25]
  assign q_io_enq_bits_ingress_id = _q_io_enq_bits_ingress_id_T_17 | _q_io_enq_bits_ingress_id_T_15; // @[Mux.scala 27:73]
  always @(posedge clock) begin
    channel_empty <= reset | _GEN_1; // @[EgressUnit.scala 20:{30,30}]
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(~(q_io_enq_valid & ~q_io_enq_ready))) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at EgressUnit.scala:38 assert(!(q.io.enq.valid && !q.io.enq.ready))\n"); // @[EgressUnit.scala 38:9]
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
  channel_empty = _RAND_0[0:0];
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
      assert(~(q_io_enq_valid & ~q_io_enq_ready)); // @[EgressUnit.scala 38:9]
    end
  end
endmodule