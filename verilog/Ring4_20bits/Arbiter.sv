module Arbiter(
  input        io_in_0_valid,
  input  [1:0] io_in_0_bits_flow_ingress_node,
  input  [1:0] io_in_0_bits_flow_egress_node,
  output       io_in_1_ready,
  input        io_in_1_valid,
  input  [1:0] io_in_1_bits_flow_ingress_node,
  input  [1:0] io_in_1_bits_flow_egress_node,
  output       io_in_2_ready,
  input        io_in_2_valid,
  input  [1:0] io_in_2_bits_flow_ingress_node,
  input  [1:0] io_in_2_bits_flow_egress_node,
  output       io_in_3_ready,
  input        io_in_3_valid,
  input  [1:0] io_in_3_bits_flow_ingress_node,
  input  [1:0] io_in_3_bits_flow_egress_node,
  output       io_out_valid,
  output [1:0] io_out_bits_src_virt_id,
  output [1:0] io_out_bits_flow_ingress_node,
  output [1:0] io_out_bits_flow_egress_node
);
  wire [1:0] _GEN_0 = io_in_2_valid ? 2'h2 : 2'h3; // @[Arbiter.scala 135:13 138:26 139:17]
  wire [1:0] _GEN_3 = io_in_2_valid ? io_in_2_bits_flow_ingress_node : io_in_3_bits_flow_ingress_node; // @[Arbiter.scala 136:15 138:26 140:19]
  wire [1:0] _GEN_5 = io_in_2_valid ? io_in_2_bits_flow_egress_node : io_in_3_bits_flow_egress_node; // @[Arbiter.scala 136:15 138:26 140:19]
  wire [1:0] _GEN_7 = io_in_1_valid ? 2'h1 : _GEN_0; // @[Arbiter.scala 138:26 139:17]
  wire [1:0] _GEN_10 = io_in_1_valid ? io_in_1_bits_flow_ingress_node : _GEN_3; // @[Arbiter.scala 138:26 140:19]
  wire [1:0] _GEN_12 = io_in_1_valid ? io_in_1_bits_flow_egress_node : _GEN_5; // @[Arbiter.scala 138:26 140:19]
  wire  grant_3 = ~(io_in_0_valid | io_in_1_valid | io_in_2_valid); // @[Arbiter.scala 45:78]
  assign io_in_1_ready = ~io_in_0_valid; // @[Arbiter.scala 45:78]
  assign io_in_2_ready = ~(io_in_0_valid | io_in_1_valid); // @[Arbiter.scala 45:78]
  assign io_in_3_ready = ~(io_in_0_valid | io_in_1_valid | io_in_2_valid); // @[Arbiter.scala 45:78]
  assign io_out_valid = ~grant_3 | io_in_3_valid; // @[Arbiter.scala 147:31]
  assign io_out_bits_src_virt_id = io_in_0_valid ? 2'h0 : _GEN_7; // @[Arbiter.scala 138:26 140:19]
  assign io_out_bits_flow_ingress_node = io_in_0_valid ? io_in_0_bits_flow_ingress_node : _GEN_10; // @[Arbiter.scala 138:26 140:19]
  assign io_out_bits_flow_egress_node = io_in_0_valid ? io_in_0_bits_flow_egress_node : _GEN_12; // @[Arbiter.scala 138:26 140:19]
endmodule