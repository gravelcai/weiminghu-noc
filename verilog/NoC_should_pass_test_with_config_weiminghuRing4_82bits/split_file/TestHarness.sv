module TestHarness(
  input   clock,
  input   reset,
  output  io_success
);
  wire  lazyNoC_clock; // @[TestHarness.scala 238:19]
  wire  lazyNoC_reset; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_ingress_3_flit_ready; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_ingress_3_flit_valid; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_ingress_3_flit_bits_head; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_ingress_3_flit_bits_tail; // @[TestHarness.scala 238:19]
  wire [81:0] lazyNoC_io_ingress_3_flit_bits_payload; // @[TestHarness.scala 238:19]
  wire [1:0] lazyNoC_io_ingress_3_flit_bits_egress_id; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_ingress_2_flit_ready; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_ingress_2_flit_valid; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_ingress_2_flit_bits_head; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_ingress_2_flit_bits_tail; // @[TestHarness.scala 238:19]
  wire [81:0] lazyNoC_io_ingress_2_flit_bits_payload; // @[TestHarness.scala 238:19]
  wire [1:0] lazyNoC_io_ingress_2_flit_bits_egress_id; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_ingress_1_flit_ready; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_ingress_1_flit_valid; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_ingress_1_flit_bits_head; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_ingress_1_flit_bits_tail; // @[TestHarness.scala 238:19]
  wire [81:0] lazyNoC_io_ingress_1_flit_bits_payload; // @[TestHarness.scala 238:19]
  wire [1:0] lazyNoC_io_ingress_1_flit_bits_egress_id; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_ingress_0_flit_ready; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_ingress_0_flit_valid; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_ingress_0_flit_bits_head; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_ingress_0_flit_bits_tail; // @[TestHarness.scala 238:19]
  wire [81:0] lazyNoC_io_ingress_0_flit_bits_payload; // @[TestHarness.scala 238:19]
  wire [1:0] lazyNoC_io_ingress_0_flit_bits_egress_id; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_egress_3_flit_valid; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_egress_3_flit_bits_head; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_egress_3_flit_bits_tail; // @[TestHarness.scala 238:19]
  wire [81:0] lazyNoC_io_egress_3_flit_bits_payload; // @[TestHarness.scala 238:19]
  wire [1:0] lazyNoC_io_egress_3_flit_bits_ingress_id; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_egress_2_flit_valid; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_egress_2_flit_bits_head; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_egress_2_flit_bits_tail; // @[TestHarness.scala 238:19]
  wire [81:0] lazyNoC_io_egress_2_flit_bits_payload; // @[TestHarness.scala 238:19]
  wire [1:0] lazyNoC_io_egress_2_flit_bits_ingress_id; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_egress_1_flit_valid; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_egress_1_flit_bits_head; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_egress_1_flit_bits_tail; // @[TestHarness.scala 238:19]
  wire [81:0] lazyNoC_io_egress_1_flit_bits_payload; // @[TestHarness.scala 238:19]
  wire [1:0] lazyNoC_io_egress_1_flit_bits_ingress_id; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_egress_0_flit_valid; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_egress_0_flit_bits_head; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_egress_0_flit_bits_tail; // @[TestHarness.scala 238:19]
  wire [81:0] lazyNoC_io_egress_0_flit_bits_payload; // @[TestHarness.scala 238:19]
  wire [1:0] lazyNoC_io_egress_0_flit_bits_ingress_id; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_router_clocks_0_clock; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_router_clocks_0_reset; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_router_clocks_1_clock; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_router_clocks_1_reset; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_router_clocks_2_clock; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_router_clocks_2_reset; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_router_clocks_3_clock; // @[TestHarness.scala 238:19]
  wire  lazyNoC_io_router_clocks_3_reset; // @[TestHarness.scala 238:19]
  wire  noc_tester_clock; // @[TestHarness.scala 269:26]
  wire  noc_tester_reset; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_to_noc_3_flit_ready; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_to_noc_3_flit_valid; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_to_noc_3_flit_bits_head; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_to_noc_3_flit_bits_tail; // @[TestHarness.scala 269:26]
  wire [81:0] noc_tester_io_to_noc_3_flit_bits_payload; // @[TestHarness.scala 269:26]
  wire [1:0] noc_tester_io_to_noc_3_flit_bits_egress_id; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_to_noc_2_flit_ready; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_to_noc_2_flit_valid; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_to_noc_2_flit_bits_head; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_to_noc_2_flit_bits_tail; // @[TestHarness.scala 269:26]
  wire [81:0] noc_tester_io_to_noc_2_flit_bits_payload; // @[TestHarness.scala 269:26]
  wire [1:0] noc_tester_io_to_noc_2_flit_bits_egress_id; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_to_noc_1_flit_ready; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_to_noc_1_flit_valid; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_to_noc_1_flit_bits_head; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_to_noc_1_flit_bits_tail; // @[TestHarness.scala 269:26]
  wire [81:0] noc_tester_io_to_noc_1_flit_bits_payload; // @[TestHarness.scala 269:26]
  wire [1:0] noc_tester_io_to_noc_1_flit_bits_egress_id; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_to_noc_0_flit_ready; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_to_noc_0_flit_valid; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_to_noc_0_flit_bits_head; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_to_noc_0_flit_bits_tail; // @[TestHarness.scala 269:26]
  wire [81:0] noc_tester_io_to_noc_0_flit_bits_payload; // @[TestHarness.scala 269:26]
  wire [1:0] noc_tester_io_to_noc_0_flit_bits_egress_id; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_from_noc_3_flit_ready; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_from_noc_3_flit_valid; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_from_noc_3_flit_bits_head; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_from_noc_3_flit_bits_tail; // @[TestHarness.scala 269:26]
  wire [81:0] noc_tester_io_from_noc_3_flit_bits_payload; // @[TestHarness.scala 269:26]
  wire [1:0] noc_tester_io_from_noc_3_flit_bits_ingress_id; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_from_noc_2_flit_ready; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_from_noc_2_flit_valid; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_from_noc_2_flit_bits_head; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_from_noc_2_flit_bits_tail; // @[TestHarness.scala 269:26]
  wire [81:0] noc_tester_io_from_noc_2_flit_bits_payload; // @[TestHarness.scala 269:26]
  wire [1:0] noc_tester_io_from_noc_2_flit_bits_ingress_id; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_from_noc_1_flit_ready; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_from_noc_1_flit_valid; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_from_noc_1_flit_bits_head; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_from_noc_1_flit_bits_tail; // @[TestHarness.scala 269:26]
  wire [81:0] noc_tester_io_from_noc_1_flit_bits_payload; // @[TestHarness.scala 269:26]
  wire [1:0] noc_tester_io_from_noc_1_flit_bits_ingress_id; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_from_noc_0_flit_ready; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_from_noc_0_flit_valid; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_from_noc_0_flit_bits_head; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_from_noc_0_flit_bits_tail; // @[TestHarness.scala 269:26]
  wire [81:0] noc_tester_io_from_noc_0_flit_bits_payload; // @[TestHarness.scala 269:26]
  wire [1:0] noc_tester_io_from_noc_0_flit_bits_ingress_id; // @[TestHarness.scala 269:26]
  wire  noc_tester_io_success; // @[TestHarness.scala 269:26]
  NoC lazyNoC ( // @[TestHarness.scala 238:19]
    .clock(lazyNoC_clock),
    .reset(lazyNoC_reset),
    .io_ingress_3_flit_ready(lazyNoC_io_ingress_3_flit_ready),
    .io_ingress_3_flit_valid(lazyNoC_io_ingress_3_flit_valid),
    .io_ingress_3_flit_bits_head(lazyNoC_io_ingress_3_flit_bits_head),
    .io_ingress_3_flit_bits_tail(lazyNoC_io_ingress_3_flit_bits_tail),
    .io_ingress_3_flit_bits_payload(lazyNoC_io_ingress_3_flit_bits_payload),
    .io_ingress_3_flit_bits_egress_id(lazyNoC_io_ingress_3_flit_bits_egress_id),
    .io_ingress_2_flit_ready(lazyNoC_io_ingress_2_flit_ready),
    .io_ingress_2_flit_valid(lazyNoC_io_ingress_2_flit_valid),
    .io_ingress_2_flit_bits_head(lazyNoC_io_ingress_2_flit_bits_head),
    .io_ingress_2_flit_bits_tail(lazyNoC_io_ingress_2_flit_bits_tail),
    .io_ingress_2_flit_bits_payload(lazyNoC_io_ingress_2_flit_bits_payload),
    .io_ingress_2_flit_bits_egress_id(lazyNoC_io_ingress_2_flit_bits_egress_id),
    .io_ingress_1_flit_ready(lazyNoC_io_ingress_1_flit_ready),
    .io_ingress_1_flit_valid(lazyNoC_io_ingress_1_flit_valid),
    .io_ingress_1_flit_bits_head(lazyNoC_io_ingress_1_flit_bits_head),
    .io_ingress_1_flit_bits_tail(lazyNoC_io_ingress_1_flit_bits_tail),
    .io_ingress_1_flit_bits_payload(lazyNoC_io_ingress_1_flit_bits_payload),
    .io_ingress_1_flit_bits_egress_id(lazyNoC_io_ingress_1_flit_bits_egress_id),
    .io_ingress_0_flit_ready(lazyNoC_io_ingress_0_flit_ready),
    .io_ingress_0_flit_valid(lazyNoC_io_ingress_0_flit_valid),
    .io_ingress_0_flit_bits_head(lazyNoC_io_ingress_0_flit_bits_head),
    .io_ingress_0_flit_bits_tail(lazyNoC_io_ingress_0_flit_bits_tail),
    .io_ingress_0_flit_bits_payload(lazyNoC_io_ingress_0_flit_bits_payload),
    .io_ingress_0_flit_bits_egress_id(lazyNoC_io_ingress_0_flit_bits_egress_id),
    .io_egress_3_flit_valid(lazyNoC_io_egress_3_flit_valid),
    .io_egress_3_flit_bits_head(lazyNoC_io_egress_3_flit_bits_head),
    .io_egress_3_flit_bits_tail(lazyNoC_io_egress_3_flit_bits_tail),
    .io_egress_3_flit_bits_payload(lazyNoC_io_egress_3_flit_bits_payload),
    .io_egress_3_flit_bits_ingress_id(lazyNoC_io_egress_3_flit_bits_ingress_id),
    .io_egress_2_flit_valid(lazyNoC_io_egress_2_flit_valid),
    .io_egress_2_flit_bits_head(lazyNoC_io_egress_2_flit_bits_head),
    .io_egress_2_flit_bits_tail(lazyNoC_io_egress_2_flit_bits_tail),
    .io_egress_2_flit_bits_payload(lazyNoC_io_egress_2_flit_bits_payload),
    .io_egress_2_flit_bits_ingress_id(lazyNoC_io_egress_2_flit_bits_ingress_id),
    .io_egress_1_flit_valid(lazyNoC_io_egress_1_flit_valid),
    .io_egress_1_flit_bits_head(lazyNoC_io_egress_1_flit_bits_head),
    .io_egress_1_flit_bits_tail(lazyNoC_io_egress_1_flit_bits_tail),
    .io_egress_1_flit_bits_payload(lazyNoC_io_egress_1_flit_bits_payload),
    .io_egress_1_flit_bits_ingress_id(lazyNoC_io_egress_1_flit_bits_ingress_id),
    .io_egress_0_flit_valid(lazyNoC_io_egress_0_flit_valid),
    .io_egress_0_flit_bits_head(lazyNoC_io_egress_0_flit_bits_head),
    .io_egress_0_flit_bits_tail(lazyNoC_io_egress_0_flit_bits_tail),
    .io_egress_0_flit_bits_payload(lazyNoC_io_egress_0_flit_bits_payload),
    .io_egress_0_flit_bits_ingress_id(lazyNoC_io_egress_0_flit_bits_ingress_id),
    .io_router_clocks_0_clock(lazyNoC_io_router_clocks_0_clock),
    .io_router_clocks_0_reset(lazyNoC_io_router_clocks_0_reset),
    .io_router_clocks_1_clock(lazyNoC_io_router_clocks_1_clock),
    .io_router_clocks_1_reset(lazyNoC_io_router_clocks_1_reset),
    .io_router_clocks_2_clock(lazyNoC_io_router_clocks_2_clock),
    .io_router_clocks_2_reset(lazyNoC_io_router_clocks_2_reset),
    .io_router_clocks_3_clock(lazyNoC_io_router_clocks_3_clock),
    .io_router_clocks_3_reset(lazyNoC_io_router_clocks_3_reset)
  );
  NoCTester noc_tester ( // @[TestHarness.scala 269:26]
    .clock(noc_tester_clock),
    .reset(noc_tester_reset),
    .io_to_noc_3_flit_ready(noc_tester_io_to_noc_3_flit_ready),
    .io_to_noc_3_flit_valid(noc_tester_io_to_noc_3_flit_valid),
    .io_to_noc_3_flit_bits_head(noc_tester_io_to_noc_3_flit_bits_head),
    .io_to_noc_3_flit_bits_tail(noc_tester_io_to_noc_3_flit_bits_tail),
    .io_to_noc_3_flit_bits_payload(noc_tester_io_to_noc_3_flit_bits_payload),
    .io_to_noc_3_flit_bits_egress_id(noc_tester_io_to_noc_3_flit_bits_egress_id),
    .io_to_noc_2_flit_ready(noc_tester_io_to_noc_2_flit_ready),
    .io_to_noc_2_flit_valid(noc_tester_io_to_noc_2_flit_valid),
    .io_to_noc_2_flit_bits_head(noc_tester_io_to_noc_2_flit_bits_head),
    .io_to_noc_2_flit_bits_tail(noc_tester_io_to_noc_2_flit_bits_tail),
    .io_to_noc_2_flit_bits_payload(noc_tester_io_to_noc_2_flit_bits_payload),
    .io_to_noc_2_flit_bits_egress_id(noc_tester_io_to_noc_2_flit_bits_egress_id),
    .io_to_noc_1_flit_ready(noc_tester_io_to_noc_1_flit_ready),
    .io_to_noc_1_flit_valid(noc_tester_io_to_noc_1_flit_valid),
    .io_to_noc_1_flit_bits_head(noc_tester_io_to_noc_1_flit_bits_head),
    .io_to_noc_1_flit_bits_tail(noc_tester_io_to_noc_1_flit_bits_tail),
    .io_to_noc_1_flit_bits_payload(noc_tester_io_to_noc_1_flit_bits_payload),
    .io_to_noc_1_flit_bits_egress_id(noc_tester_io_to_noc_1_flit_bits_egress_id),
    .io_to_noc_0_flit_ready(noc_tester_io_to_noc_0_flit_ready),
    .io_to_noc_0_flit_valid(noc_tester_io_to_noc_0_flit_valid),
    .io_to_noc_0_flit_bits_head(noc_tester_io_to_noc_0_flit_bits_head),
    .io_to_noc_0_flit_bits_tail(noc_tester_io_to_noc_0_flit_bits_tail),
    .io_to_noc_0_flit_bits_payload(noc_tester_io_to_noc_0_flit_bits_payload),
    .io_to_noc_0_flit_bits_egress_id(noc_tester_io_to_noc_0_flit_bits_egress_id),
    .io_from_noc_3_flit_ready(noc_tester_io_from_noc_3_flit_ready),
    .io_from_noc_3_flit_valid(noc_tester_io_from_noc_3_flit_valid),
    .io_from_noc_3_flit_bits_head(noc_tester_io_from_noc_3_flit_bits_head),
    .io_from_noc_3_flit_bits_tail(noc_tester_io_from_noc_3_flit_bits_tail),
    .io_from_noc_3_flit_bits_payload(noc_tester_io_from_noc_3_flit_bits_payload),
    .io_from_noc_3_flit_bits_ingress_id(noc_tester_io_from_noc_3_flit_bits_ingress_id),
    .io_from_noc_2_flit_ready(noc_tester_io_from_noc_2_flit_ready),
    .io_from_noc_2_flit_valid(noc_tester_io_from_noc_2_flit_valid),
    .io_from_noc_2_flit_bits_head(noc_tester_io_from_noc_2_flit_bits_head),
    .io_from_noc_2_flit_bits_tail(noc_tester_io_from_noc_2_flit_bits_tail),
    .io_from_noc_2_flit_bits_payload(noc_tester_io_from_noc_2_flit_bits_payload),
    .io_from_noc_2_flit_bits_ingress_id(noc_tester_io_from_noc_2_flit_bits_ingress_id),
    .io_from_noc_1_flit_ready(noc_tester_io_from_noc_1_flit_ready),
    .io_from_noc_1_flit_valid(noc_tester_io_from_noc_1_flit_valid),
    .io_from_noc_1_flit_bits_head(noc_tester_io_from_noc_1_flit_bits_head),
    .io_from_noc_1_flit_bits_tail(noc_tester_io_from_noc_1_flit_bits_tail),
    .io_from_noc_1_flit_bits_payload(noc_tester_io_from_noc_1_flit_bits_payload),
    .io_from_noc_1_flit_bits_ingress_id(noc_tester_io_from_noc_1_flit_bits_ingress_id),
    .io_from_noc_0_flit_ready(noc_tester_io_from_noc_0_flit_ready),
    .io_from_noc_0_flit_valid(noc_tester_io_from_noc_0_flit_valid),
    .io_from_noc_0_flit_bits_head(noc_tester_io_from_noc_0_flit_bits_head),
    .io_from_noc_0_flit_bits_tail(noc_tester_io_from_noc_0_flit_bits_tail),
    .io_from_noc_0_flit_bits_payload(noc_tester_io_from_noc_0_flit_bits_payload),
    .io_from_noc_0_flit_bits_ingress_id(noc_tester_io_from_noc_0_flit_bits_ingress_id),
    .io_success(noc_tester_io_success)
  );
  assign io_success = noc_tester_io_success; // @[TestHarness.scala 272:14]
  assign lazyNoC_clock = clock;
  assign lazyNoC_reset = reset;
  assign lazyNoC_io_ingress_3_flit_valid = noc_tester_io_to_noc_3_flit_valid; // @[TestHarness.scala 270:18]
  assign lazyNoC_io_ingress_3_flit_bits_head = noc_tester_io_to_noc_3_flit_bits_head; // @[TestHarness.scala 270:18]
  assign lazyNoC_io_ingress_3_flit_bits_tail = noc_tester_io_to_noc_3_flit_bits_tail; // @[TestHarness.scala 270:18]
  assign lazyNoC_io_ingress_3_flit_bits_payload = noc_tester_io_to_noc_3_flit_bits_payload; // @[TestHarness.scala 270:18]
  assign lazyNoC_io_ingress_3_flit_bits_egress_id = noc_tester_io_to_noc_3_flit_bits_egress_id; // @[TestHarness.scala 270:18]
  assign lazyNoC_io_ingress_2_flit_valid = noc_tester_io_to_noc_2_flit_valid; // @[TestHarness.scala 270:18]
  assign lazyNoC_io_ingress_2_flit_bits_head = noc_tester_io_to_noc_2_flit_bits_head; // @[TestHarness.scala 270:18]
  assign lazyNoC_io_ingress_2_flit_bits_tail = noc_tester_io_to_noc_2_flit_bits_tail; // @[TestHarness.scala 270:18]
  assign lazyNoC_io_ingress_2_flit_bits_payload = noc_tester_io_to_noc_2_flit_bits_payload; // @[TestHarness.scala 270:18]
  assign lazyNoC_io_ingress_2_flit_bits_egress_id = noc_tester_io_to_noc_2_flit_bits_egress_id; // @[TestHarness.scala 270:18]
  assign lazyNoC_io_ingress_1_flit_valid = noc_tester_io_to_noc_1_flit_valid; // @[TestHarness.scala 270:18]
  assign lazyNoC_io_ingress_1_flit_bits_head = noc_tester_io_to_noc_1_flit_bits_head; // @[TestHarness.scala 270:18]
  assign lazyNoC_io_ingress_1_flit_bits_tail = noc_tester_io_to_noc_1_flit_bits_tail; // @[TestHarness.scala 270:18]
  assign lazyNoC_io_ingress_1_flit_bits_payload = noc_tester_io_to_noc_1_flit_bits_payload; // @[TestHarness.scala 270:18]
  assign lazyNoC_io_ingress_1_flit_bits_egress_id = noc_tester_io_to_noc_1_flit_bits_egress_id; // @[TestHarness.scala 270:18]
  assign lazyNoC_io_ingress_0_flit_valid = noc_tester_io_to_noc_0_flit_valid; // @[TestHarness.scala 270:18]
  assign lazyNoC_io_ingress_0_flit_bits_head = noc_tester_io_to_noc_0_flit_bits_head; // @[TestHarness.scala 270:18]
  assign lazyNoC_io_ingress_0_flit_bits_tail = noc_tester_io_to_noc_0_flit_bits_tail; // @[TestHarness.scala 270:18]
  assign lazyNoC_io_ingress_0_flit_bits_payload = noc_tester_io_to_noc_0_flit_bits_payload; // @[TestHarness.scala 270:18]
  assign lazyNoC_io_ingress_0_flit_bits_egress_id = noc_tester_io_to_noc_0_flit_bits_egress_id; // @[TestHarness.scala 270:18]
  assign lazyNoC_io_router_clocks_0_clock = clock; // @[TestHarness.scala 239:40]
  assign lazyNoC_io_router_clocks_0_reset = reset; // @[TestHarness.scala 240:40]
  assign lazyNoC_io_router_clocks_1_clock = clock; // @[TestHarness.scala 239:40]
  assign lazyNoC_io_router_clocks_1_reset = reset; // @[TestHarness.scala 240:40]
  assign lazyNoC_io_router_clocks_2_clock = clock; // @[TestHarness.scala 239:40]
  assign lazyNoC_io_router_clocks_2_reset = reset; // @[TestHarness.scala 240:40]
  assign lazyNoC_io_router_clocks_3_clock = clock; // @[TestHarness.scala 239:40]
  assign lazyNoC_io_router_clocks_3_reset = reset; // @[TestHarness.scala 240:40]
  assign noc_tester_clock = clock;
  assign noc_tester_reset = reset;
  assign noc_tester_io_to_noc_3_flit_ready = lazyNoC_io_ingress_3_flit_ready; // @[TestHarness.scala 270:18]
  assign noc_tester_io_to_noc_2_flit_ready = lazyNoC_io_ingress_2_flit_ready; // @[TestHarness.scala 270:18]
  assign noc_tester_io_to_noc_1_flit_ready = lazyNoC_io_ingress_1_flit_ready; // @[TestHarness.scala 270:18]
  assign noc_tester_io_to_noc_0_flit_ready = lazyNoC_io_ingress_0_flit_ready; // @[TestHarness.scala 270:18]
  assign noc_tester_io_from_noc_3_flit_valid = lazyNoC_io_egress_3_flit_valid; // @[TestHarness.scala 271:26]
  assign noc_tester_io_from_noc_3_flit_bits_head = lazyNoC_io_egress_3_flit_bits_head; // @[TestHarness.scala 271:26]
  assign noc_tester_io_from_noc_3_flit_bits_tail = lazyNoC_io_egress_3_flit_bits_tail; // @[TestHarness.scala 271:26]
  assign noc_tester_io_from_noc_3_flit_bits_payload = lazyNoC_io_egress_3_flit_bits_payload; // @[TestHarness.scala 271:26]
  assign noc_tester_io_from_noc_3_flit_bits_ingress_id = lazyNoC_io_egress_3_flit_bits_ingress_id; // @[TestHarness.scala 271:26]
  assign noc_tester_io_from_noc_2_flit_valid = lazyNoC_io_egress_2_flit_valid; // @[TestHarness.scala 271:26]
  assign noc_tester_io_from_noc_2_flit_bits_head = lazyNoC_io_egress_2_flit_bits_head; // @[TestHarness.scala 271:26]
  assign noc_tester_io_from_noc_2_flit_bits_tail = lazyNoC_io_egress_2_flit_bits_tail; // @[TestHarness.scala 271:26]
  assign noc_tester_io_from_noc_2_flit_bits_payload = lazyNoC_io_egress_2_flit_bits_payload; // @[TestHarness.scala 271:26]
  assign noc_tester_io_from_noc_2_flit_bits_ingress_id = lazyNoC_io_egress_2_flit_bits_ingress_id; // @[TestHarness.scala 271:26]
  assign noc_tester_io_from_noc_1_flit_valid = lazyNoC_io_egress_1_flit_valid; // @[TestHarness.scala 271:26]
  assign noc_tester_io_from_noc_1_flit_bits_head = lazyNoC_io_egress_1_flit_bits_head; // @[TestHarness.scala 271:26]
  assign noc_tester_io_from_noc_1_flit_bits_tail = lazyNoC_io_egress_1_flit_bits_tail; // @[TestHarness.scala 271:26]
  assign noc_tester_io_from_noc_1_flit_bits_payload = lazyNoC_io_egress_1_flit_bits_payload; // @[TestHarness.scala 271:26]
  assign noc_tester_io_from_noc_1_flit_bits_ingress_id = lazyNoC_io_egress_1_flit_bits_ingress_id; // @[TestHarness.scala 271:26]
  assign noc_tester_io_from_noc_0_flit_valid = lazyNoC_io_egress_0_flit_valid; // @[TestHarness.scala 271:26]
  assign noc_tester_io_from_noc_0_flit_bits_head = lazyNoC_io_egress_0_flit_bits_head; // @[TestHarness.scala 271:26]
  assign noc_tester_io_from_noc_0_flit_bits_tail = lazyNoC_io_egress_0_flit_bits_tail; // @[TestHarness.scala 271:26]
  assign noc_tester_io_from_noc_0_flit_bits_payload = lazyNoC_io_egress_0_flit_bits_payload; // @[TestHarness.scala 271:26]
  assign noc_tester_io_from_noc_0_flit_bits_ingress_id = lazyNoC_io_egress_0_flit_bits_ingress_id; // @[TestHarness.scala 271:26]
endmodule