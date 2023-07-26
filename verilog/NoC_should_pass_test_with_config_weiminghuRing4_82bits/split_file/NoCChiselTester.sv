module NoCChiselTester(
  input   clock,
  input   reset
);
  wire  th_clock; // @[NocTests.scala 11:18]
  wire  th_reset; // @[NocTests.scala 11:18]
  wire  th_io_success; // @[NocTests.scala 11:18]
  TestHarness th ( // @[NocTests.scala 11:18]
    .clock(th_clock),
    .reset(th_reset),
    .io_success(th_io_success)
  );
  assign th_clock = clock;
  assign th_reset = reset;
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (th_io_success & ~reset) begin
          $finish; // @[NocTests.scala 12:30]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule