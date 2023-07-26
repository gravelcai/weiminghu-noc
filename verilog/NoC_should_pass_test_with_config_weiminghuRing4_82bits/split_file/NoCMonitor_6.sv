module NoCMonitor_6(
  input        clock,
  input        reset,
  input        io_in_flit_0_valid,
  input        io_in_flit_0_bits_head,
  input        io_in_flit_0_bits_tail,
  input  [1:0] io_in_flit_0_bits_flow_ingress_node,
  input  [1:0] io_in_flit_0_bits_flow_egress_node,
  input  [1:0] io_in_flit_0_bits_virt_channel_id
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  reg  in_flight_0; // @[Monitor.scala 16:26]
  reg  in_flight_1; // @[Monitor.scala 16:26]
  reg  in_flight_2; // @[Monitor.scala 16:26]
  reg  in_flight_3; // @[Monitor.scala 16:26]
  wire  _GEN_0 = 2'h0 == io_in_flit_0_bits_virt_channel_id | in_flight_0; // @[Monitor.scala 16:26 21:{46,46}]
  wire  _GEN_1 = 2'h1 == io_in_flit_0_bits_virt_channel_id | in_flight_1; // @[Monitor.scala 16:26 21:{46,46}]
  wire  _GEN_2 = 2'h2 == io_in_flit_0_bits_virt_channel_id | in_flight_2; // @[Monitor.scala 16:26 21:{46,46}]
  wire  _GEN_3 = 2'h3 == io_in_flit_0_bits_virt_channel_id | in_flight_3; // @[Monitor.scala 16:26 21:{46,46}]
  wire  _GEN_5 = 2'h1 == io_in_flit_0_bits_virt_channel_id ? in_flight_1 : in_flight_0; // @[Monitor.scala 22:{17,17}]
  wire  _GEN_6 = 2'h2 == io_in_flit_0_bits_virt_channel_id ? in_flight_2 : _GEN_5; // @[Monitor.scala 22:{17,17}]
  wire  _GEN_7 = 2'h3 == io_in_flit_0_bits_virt_channel_id ? in_flight_3 : _GEN_6; // @[Monitor.scala 22:{17,17}]
  wire  _T_2 = ~reset; // @[Monitor.scala 22:16]
  wire  _GEN_8 = io_in_flit_0_bits_head ? _GEN_0 : in_flight_0; // @[Monitor.scala 16:26 20:29]
  wire  _GEN_9 = io_in_flit_0_bits_head ? _GEN_1 : in_flight_1; // @[Monitor.scala 16:26 20:29]
  wire  _GEN_10 = io_in_flit_0_bits_head ? _GEN_2 : in_flight_2; // @[Monitor.scala 16:26 20:29]
  wire  _GEN_11 = io_in_flit_0_bits_head ? _GEN_3 : in_flight_3; // @[Monitor.scala 16:26 20:29]
  wire  _T_4 = io_in_flit_0_valid & io_in_flit_0_bits_head; // @[Monitor.scala 29:22]
  wire  _T_7 = io_in_flit_0_bits_flow_egress_node == 2'h3; // @[Types.scala 54:21]
  wire  _T_8 = io_in_flit_0_bits_flow_ingress_node == 2'h1 & _T_7; // @[Types.scala 53:39]
  wire  _T_19 = io_in_flit_0_bits_flow_egress_node == 2'h2; // @[Types.scala 54:21]
  wire  _T_20 = io_in_flit_0_bits_flow_ingress_node == 2'h0 & _T_19; // @[Types.scala 53:39]
  wire  _T_27 = io_in_flit_0_bits_flow_ingress_node == 2'h0 & _T_7; // @[Types.scala 53:39]
  wire  _T_39 = _T_20 | _T_27; // @[package.scala 73:59]
  wire  _T_40 = _T_20 | _T_27 | _T_8; // @[package.scala 73:59]
  wire  _GEN_29 = _T_4 & ~reset; // @[Monitor.scala 22:16]
  always @(posedge clock) begin
    if (reset) begin // @[Monitor.scala 16:26]
      in_flight_0 <= 1'h0; // @[Monitor.scala 16:26]
    end else if (io_in_flit_0_valid) begin // @[Monitor.scala 19:23]
      if (io_in_flit_0_bits_tail) begin // @[Monitor.scala 24:29]
        if (2'h0 == io_in_flit_0_bits_virt_channel_id) begin // @[Monitor.scala 25:46]
          in_flight_0 <= 1'h0; // @[Monitor.scala 25:46]
        end else begin
          in_flight_0 <= _GEN_8;
        end
      end else begin
        in_flight_0 <= _GEN_8;
      end
    end
    if (reset) begin // @[Monitor.scala 16:26]
      in_flight_1 <= 1'h0; // @[Monitor.scala 16:26]
    end else if (io_in_flit_0_valid) begin // @[Monitor.scala 19:23]
      if (io_in_flit_0_bits_tail) begin // @[Monitor.scala 24:29]
        if (2'h1 == io_in_flit_0_bits_virt_channel_id) begin // @[Monitor.scala 25:46]
          in_flight_1 <= 1'h0; // @[Monitor.scala 25:46]
        end else begin
          in_flight_1 <= _GEN_9;
        end
      end else begin
        in_flight_1 <= _GEN_9;
      end
    end
    if (reset) begin // @[Monitor.scala 16:26]
      in_flight_2 <= 1'h0; // @[Monitor.scala 16:26]
    end else if (io_in_flit_0_valid) begin // @[Monitor.scala 19:23]
      if (io_in_flit_0_bits_tail) begin // @[Monitor.scala 24:29]
        if (2'h2 == io_in_flit_0_bits_virt_channel_id) begin // @[Monitor.scala 25:46]
          in_flight_2 <= 1'h0; // @[Monitor.scala 25:46]
        end else begin
          in_flight_2 <= _GEN_10;
        end
      end else begin
        in_flight_2 <= _GEN_10;
      end
    end
    if (reset) begin // @[Monitor.scala 16:26]
      in_flight_3 <= 1'h0; // @[Monitor.scala 16:26]
    end else if (io_in_flit_0_valid) begin // @[Monitor.scala 19:23]
      if (io_in_flit_0_bits_tail) begin // @[Monitor.scala 24:29]
        if (2'h3 == io_in_flit_0_bits_virt_channel_id) begin // @[Monitor.scala 25:46]
          in_flight_3 <= 1'h0; // @[Monitor.scala 25:46]
        end else begin
          in_flight_3 <= _GEN_11;
        end
      end else begin
        in_flight_3 <= _GEN_11;
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_4 & ~reset & ~(~_GEN_7)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Flit head/tail sequencing is broken\n    at Monitor.scala:22 assert (!in_flight(flit.bits.virt_channel_id), \"Flit head/tail sequencing is broken\")\n"
            ); // @[Monitor.scala 22:16]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_29 & ~(io_in_flit_0_bits_virt_channel_id != 2'h0 | _T_8)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at Monitor.scala:32 assert(flit.bits.virt_channel_id =/= i.U || v.possibleFlows.toSeq.map(_.isFlow(flit.bits.flow)).orR)\n"
            ); // @[Monitor.scala 32:17]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_29 & ~(io_in_flit_0_bits_virt_channel_id != 2'h1 | _T_40)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at Monitor.scala:32 assert(flit.bits.virt_channel_id =/= i.U || v.possibleFlows.toSeq.map(_.isFlow(flit.bits.flow)).orR)\n"
            ); // @[Monitor.scala 32:17]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_29 & ~(io_in_flit_0_bits_virt_channel_id != 2'h2 | _T_40)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at Monitor.scala:32 assert(flit.bits.virt_channel_id =/= i.U || v.possibleFlows.toSeq.map(_.isFlow(flit.bits.flow)).orR)\n"
            ); // @[Monitor.scala 32:17]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_29 & ~(io_in_flit_0_bits_virt_channel_id != 2'h3 | _T_39)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at Monitor.scala:32 assert(flit.bits.virt_channel_id =/= i.U || v.possibleFlows.toSeq.map(_.isFlow(flit.bits.flow)).orR)\n"
            ); // @[Monitor.scala 32:17]
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
  in_flight_0 = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  in_flight_1 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  in_flight_2 = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  in_flight_3 = _RAND_3[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
  always @(posedge clock) begin
    //
    if (_T_4 & ~reset) begin
      assert(~_GEN_7); // @[Monitor.scala 22:16]
    end
    //
    if (_T_4 & _T_2) begin
      assert(io_in_flit_0_bits_virt_channel_id != 2'h0 | _T_8); // @[Monitor.scala 32:17]
    end
    //
    if (_T_4 & _T_2) begin
      assert(io_in_flit_0_bits_virt_channel_id != 2'h1 | _T_40); // @[Monitor.scala 32:17]
    end
    //
    if (_T_4 & _T_2) begin
      assert(io_in_flit_0_bits_virt_channel_id != 2'h2 | _T_40); // @[Monitor.scala 32:17]
    end
    //
    if (_T_4 & _T_2) begin
      assert(io_in_flit_0_bits_virt_channel_id != 2'h3 | _T_39); // @[Monitor.scala 32:17]
    end
  end
endmodule