module Switch(
  input         clock,
  input         reset,
  input         io_in_2_0_valid,
  input         io_in_2_0_bits_flit_head,
  input         io_in_2_0_bits_flit_tail,
  input  [19:0] io_in_2_0_bits_flit_payload,
  input  [1:0]  io_in_2_0_bits_flit_flow_ingress_node,
  input  [1:0]  io_in_2_0_bits_flit_flow_egress_node,
  input  [1:0]  io_in_2_0_bits_out_virt_channel,
  input         io_in_1_0_valid,
  input         io_in_1_0_bits_flit_head,
  input         io_in_1_0_bits_flit_tail,
  input  [19:0] io_in_1_0_bits_flit_payload,
  input  [1:0]  io_in_1_0_bits_flit_flow_ingress_node,
  input  [1:0]  io_in_1_0_bits_flit_flow_egress_node,
  input  [1:0]  io_in_1_0_bits_out_virt_channel,
  input         io_in_0_0_valid,
  input         io_in_0_0_bits_flit_head,
  input         io_in_0_0_bits_flit_tail,
  input  [19:0] io_in_0_0_bits_flit_payload,
  input  [1:0]  io_in_0_0_bits_flit_flow_ingress_node,
  input  [1:0]  io_in_0_0_bits_flit_flow_egress_node,
  input  [1:0]  io_in_0_0_bits_out_virt_channel,
  output        io_out_2_0_valid,
  output        io_out_2_0_bits_head,
  output        io_out_2_0_bits_tail,
  output [19:0] io_out_2_0_bits_payload,
  output [1:0]  io_out_2_0_bits_flow_ingress_node,
  output        io_out_1_0_valid,
  output        io_out_1_0_bits_head,
  output        io_out_1_0_bits_tail,
  output [19:0] io_out_1_0_bits_payload,
  output [1:0]  io_out_1_0_bits_flow_ingress_node,
  output [1:0]  io_out_1_0_bits_flow_egress_node,
  output [1:0]  io_out_1_0_bits_virt_channel_id,
  output        io_out_0_0_valid,
  output        io_out_0_0_bits_head,
  output        io_out_0_0_bits_tail,
  output [19:0] io_out_0_0_bits_payload,
  output [1:0]  io_out_0_0_bits_flow_ingress_node,
  output [1:0]  io_out_0_0_bits_flow_egress_node,
  output [1:0]  io_out_0_0_bits_virt_channel_id,
  input         io_sel_2_0_2_0,
  input         io_sel_2_0_1_0,
  input         io_sel_2_0_0_0,
  input         io_sel_1_0_2_0,
  input         io_sel_1_0_1_0,
  input         io_sel_1_0_0_0,
  input         io_sel_0_0_2_0,
  input         io_sel_0_0_1_0,
  input         io_sel_0_0_0_0
);
  wire [2:0] sel_flat = {io_sel_0_0_2_0,io_sel_0_0_1_0,io_sel_0_0_0_0}; // @[Switch.scala 46:35]
  wire [1:0] _T_3 = sel_flat[1] + sel_flat[2]; // @[Bitwise.scala 51:90]
  wire [1:0] _GEN_0 = {{1'd0}, sel_flat[0]}; // @[Bitwise.scala 51:90]
  wire [2:0] _T_5 = _GEN_0 + _T_3; // @[Bitwise.scala 51:90]
  wire  _io_out_0_0_valid_T_7 = sel_flat[0] & io_in_0_0_valid | sel_flat[1] & io_in_1_0_valid | sel_flat[2] &
    io_in_2_0_valid; // @[Mux.scala 27:73]
  wire [1:0] _io_out_0_0_bits_T_13 = sel_flat[0] ? io_in_0_0_bits_flit_flow_egress_node : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _io_out_0_0_bits_T_14 = sel_flat[1] ? io_in_1_0_bits_flit_flow_egress_node : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _io_out_0_0_bits_T_15 = sel_flat[2] ? io_in_2_0_bits_flit_flow_egress_node : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _io_out_0_0_bits_T_16 = _io_out_0_0_bits_T_13 | _io_out_0_0_bits_T_14; // @[Mux.scala 27:73]
  wire [1:0] _io_out_0_0_bits_T_23 = sel_flat[0] ? io_in_0_0_bits_flit_flow_ingress_node : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _io_out_0_0_bits_T_24 = sel_flat[1] ? io_in_1_0_bits_flit_flow_ingress_node : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _io_out_0_0_bits_T_25 = sel_flat[2] ? io_in_2_0_bits_flit_flow_ingress_node : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _io_out_0_0_bits_T_26 = _io_out_0_0_bits_T_23 | _io_out_0_0_bits_T_24; // @[Mux.scala 27:73]
  wire [19:0] _io_out_0_0_bits_T_33 = sel_flat[0] ? io_in_0_0_bits_flit_payload : 20'h0; // @[Mux.scala 27:73]
  wire [19:0] _io_out_0_0_bits_T_34 = sel_flat[1] ? io_in_1_0_bits_flit_payload : 20'h0; // @[Mux.scala 27:73]
  wire [19:0] _io_out_0_0_bits_T_35 = sel_flat[2] ? io_in_2_0_bits_flit_payload : 20'h0; // @[Mux.scala 27:73]
  wire [19:0] _io_out_0_0_bits_T_36 = _io_out_0_0_bits_T_33 | _io_out_0_0_bits_T_34; // @[Mux.scala 27:73]
  wire [1:0] _io_out_0_0_bits_virt_channel_id_T_3 = sel_flat[0] ? io_in_0_0_bits_out_virt_channel : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _io_out_0_0_bits_virt_channel_id_T_4 = sel_flat[1] ? io_in_1_0_bits_out_virt_channel : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _io_out_0_0_bits_virt_channel_id_T_5 = sel_flat[2] ? io_in_2_0_bits_out_virt_channel : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _io_out_0_0_bits_virt_channel_id_T_6 = _io_out_0_0_bits_virt_channel_id_T_3 |
    _io_out_0_0_bits_virt_channel_id_T_4; // @[Mux.scala 27:73]
  wire [2:0] sel_flat_1 = {io_sel_1_0_2_0,io_sel_1_0_1_0,io_sel_1_0_0_0}; // @[Switch.scala 46:35]
  wire [1:0] _T_14 = sel_flat_1[1] + sel_flat_1[2]; // @[Bitwise.scala 51:90]
  wire [1:0] _GEN_1 = {{1'd0}, sel_flat_1[0]}; // @[Bitwise.scala 51:90]
  wire [2:0] _T_16 = _GEN_1 + _T_14; // @[Bitwise.scala 51:90]
  wire  _io_out_1_0_valid_T_7 = sel_flat_1[0] & io_in_0_0_valid | sel_flat_1[1] & io_in_1_0_valid | sel_flat_1[2] &
    io_in_2_0_valid; // @[Mux.scala 27:73]
  wire [1:0] _io_out_1_0_bits_T_13 = sel_flat_1[0] ? io_in_0_0_bits_flit_flow_egress_node : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _io_out_1_0_bits_T_14 = sel_flat_1[1] ? io_in_1_0_bits_flit_flow_egress_node : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _io_out_1_0_bits_T_15 = sel_flat_1[2] ? io_in_2_0_bits_flit_flow_egress_node : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _io_out_1_0_bits_T_16 = _io_out_1_0_bits_T_13 | _io_out_1_0_bits_T_14; // @[Mux.scala 27:73]
  wire [1:0] _io_out_1_0_bits_T_23 = sel_flat_1[0] ? io_in_0_0_bits_flit_flow_ingress_node : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _io_out_1_0_bits_T_24 = sel_flat_1[1] ? io_in_1_0_bits_flit_flow_ingress_node : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _io_out_1_0_bits_T_25 = sel_flat_1[2] ? io_in_2_0_bits_flit_flow_ingress_node : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _io_out_1_0_bits_T_26 = _io_out_1_0_bits_T_23 | _io_out_1_0_bits_T_24; // @[Mux.scala 27:73]
  wire [19:0] _io_out_1_0_bits_T_33 = sel_flat_1[0] ? io_in_0_0_bits_flit_payload : 20'h0; // @[Mux.scala 27:73]
  wire [19:0] _io_out_1_0_bits_T_34 = sel_flat_1[1] ? io_in_1_0_bits_flit_payload : 20'h0; // @[Mux.scala 27:73]
  wire [19:0] _io_out_1_0_bits_T_35 = sel_flat_1[2] ? io_in_2_0_bits_flit_payload : 20'h0; // @[Mux.scala 27:73]
  wire [19:0] _io_out_1_0_bits_T_36 = _io_out_1_0_bits_T_33 | _io_out_1_0_bits_T_34; // @[Mux.scala 27:73]
  wire [1:0] _io_out_1_0_bits_virt_channel_id_T_3 = sel_flat_1[0] ? io_in_0_0_bits_out_virt_channel : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _io_out_1_0_bits_virt_channel_id_T_4 = sel_flat_1[1] ? io_in_1_0_bits_out_virt_channel : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _io_out_1_0_bits_virt_channel_id_T_5 = sel_flat_1[2] ? io_in_2_0_bits_out_virt_channel : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _io_out_1_0_bits_virt_channel_id_T_6 = _io_out_1_0_bits_virt_channel_id_T_3 |
    _io_out_1_0_bits_virt_channel_id_T_4; // @[Mux.scala 27:73]
  wire [2:0] sel_flat_2 = {io_sel_2_0_2_0,io_sel_2_0_1_0,io_sel_2_0_0_0}; // @[Switch.scala 46:35]
  wire [1:0] _T_25 = sel_flat_2[1] + sel_flat_2[2]; // @[Bitwise.scala 51:90]
  wire [1:0] _GEN_2 = {{1'd0}, sel_flat_2[0]}; // @[Bitwise.scala 51:90]
  wire [2:0] _T_27 = _GEN_2 + _T_25; // @[Bitwise.scala 51:90]
  wire  _io_out_2_0_valid_T_7 = sel_flat_2[0] & io_in_0_0_valid | sel_flat_2[1] & io_in_1_0_valid | sel_flat_2[2] &
    io_in_2_0_valid; // @[Mux.scala 27:73]
  wire [1:0] _io_out_2_0_bits_T_23 = sel_flat_2[0] ? io_in_0_0_bits_flit_flow_ingress_node : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _io_out_2_0_bits_T_24 = sel_flat_2[1] ? io_in_1_0_bits_flit_flow_ingress_node : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _io_out_2_0_bits_T_25 = sel_flat_2[2] ? io_in_2_0_bits_flit_flow_ingress_node : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _io_out_2_0_bits_T_26 = _io_out_2_0_bits_T_23 | _io_out_2_0_bits_T_24; // @[Mux.scala 27:73]
  wire [19:0] _io_out_2_0_bits_T_33 = sel_flat_2[0] ? io_in_0_0_bits_flit_payload : 20'h0; // @[Mux.scala 27:73]
  wire [19:0] _io_out_2_0_bits_T_34 = sel_flat_2[1] ? io_in_1_0_bits_flit_payload : 20'h0; // @[Mux.scala 27:73]
  wire [19:0] _io_out_2_0_bits_T_35 = sel_flat_2[2] ? io_in_2_0_bits_flit_payload : 20'h0; // @[Mux.scala 27:73]
  wire [19:0] _io_out_2_0_bits_T_36 = _io_out_2_0_bits_T_33 | _io_out_2_0_bits_T_34; // @[Mux.scala 27:73]
  assign io_out_2_0_valid = _io_out_2_0_valid_T_7 & sel_flat_2 != 3'h0; // @[Switch.scala 48:67]
  assign io_out_2_0_bits_head = sel_flat_2[0] & io_in_0_0_bits_flit_head | sel_flat_2[1] & io_in_1_0_bits_flit_head |
    sel_flat_2[2] & io_in_2_0_bits_flit_head; // @[Mux.scala 27:73]
  assign io_out_2_0_bits_tail = sel_flat_2[0] & io_in_0_0_bits_flit_tail | sel_flat_2[1] & io_in_1_0_bits_flit_tail |
    sel_flat_2[2] & io_in_2_0_bits_flit_tail; // @[Mux.scala 27:73]
  assign io_out_2_0_bits_payload = _io_out_2_0_bits_T_36 | _io_out_2_0_bits_T_35; // @[Mux.scala 27:73]
  assign io_out_2_0_bits_flow_ingress_node = _io_out_2_0_bits_T_26 | _io_out_2_0_bits_T_25; // @[Mux.scala 27:73]
  assign io_out_1_0_valid = _io_out_1_0_valid_T_7 & sel_flat_1 != 3'h0; // @[Switch.scala 48:67]
  assign io_out_1_0_bits_head = sel_flat_1[0] & io_in_0_0_bits_flit_head | sel_flat_1[1] & io_in_1_0_bits_flit_head |
    sel_flat_1[2] & io_in_2_0_bits_flit_head; // @[Mux.scala 27:73]
  assign io_out_1_0_bits_tail = sel_flat_1[0] & io_in_0_0_bits_flit_tail | sel_flat_1[1] & io_in_1_0_bits_flit_tail |
    sel_flat_1[2] & io_in_2_0_bits_flit_tail; // @[Mux.scala 27:73]
  assign io_out_1_0_bits_payload = _io_out_1_0_bits_T_36 | _io_out_1_0_bits_T_35; // @[Mux.scala 27:73]
  assign io_out_1_0_bits_flow_ingress_node = _io_out_1_0_bits_T_26 | _io_out_1_0_bits_T_25; // @[Mux.scala 27:73]
  assign io_out_1_0_bits_flow_egress_node = _io_out_1_0_bits_T_16 | _io_out_1_0_bits_T_15; // @[Mux.scala 27:73]
  assign io_out_1_0_bits_virt_channel_id = _io_out_1_0_bits_virt_channel_id_T_6 | _io_out_1_0_bits_virt_channel_id_T_5; // @[Mux.scala 27:73]
  assign io_out_0_0_valid = _io_out_0_0_valid_T_7 & sel_flat != 3'h0; // @[Switch.scala 48:67]
  assign io_out_0_0_bits_head = sel_flat[0] & io_in_0_0_bits_flit_head | sel_flat[1] & io_in_1_0_bits_flit_head |
    sel_flat[2] & io_in_2_0_bits_flit_head; // @[Mux.scala 27:73]
  assign io_out_0_0_bits_tail = sel_flat[0] & io_in_0_0_bits_flit_tail | sel_flat[1] & io_in_1_0_bits_flit_tail |
    sel_flat[2] & io_in_2_0_bits_flit_tail; // @[Mux.scala 27:73]
  assign io_out_0_0_bits_payload = _io_out_0_0_bits_T_36 | _io_out_0_0_bits_T_35; // @[Mux.scala 27:73]
  assign io_out_0_0_bits_flow_ingress_node = _io_out_0_0_bits_T_26 | _io_out_0_0_bits_T_25; // @[Mux.scala 27:73]
  assign io_out_0_0_bits_flow_egress_node = _io_out_0_0_bits_T_16 | _io_out_0_0_bits_T_15; // @[Mux.scala 27:73]
  assign io_out_0_0_bits_virt_channel_id = _io_out_0_0_bits_virt_channel_id_T_6 | _io_out_0_0_bits_virt_channel_id_T_5; // @[Mux.scala 27:73]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(_T_5[1:0] <= 2'h1)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Switch.scala:47 assert(PopCount(sel_flat) <= 1.U)\n"); // @[Switch.scala 47:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(_T_16[1:0] <= 2'h1)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Switch.scala:47 assert(PopCount(sel_flat) <= 1.U)\n"); // @[Switch.scala 47:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(_T_27[1:0] <= 2'h1)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Switch.scala:47 assert(PopCount(sel_flat) <= 1.U)\n"); // @[Switch.scala 47:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
  always @(posedge clock) begin
    //
    if (~reset) begin
      assert(_T_5[1:0] <= 2'h1); // @[Switch.scala 47:13]
    end
    //
    if (~reset) begin
      assert(_T_16[1:0] <= 2'h1); // @[Switch.scala 47:13]
    end
    //
    if (~reset) begin
      assert(_T_27[1:0] <= 2'h1); // @[Switch.scala 47:13]
    end
  end
endmodule