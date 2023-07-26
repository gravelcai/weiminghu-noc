module RouteComputer_3(
  input  [1:0] io_req_2_bits_flow_ingress_node,
  input  [1:0] io_req_2_bits_flow_egress_node,
  input  [1:0] io_req_1_bits_src_virt_id,
  input  [1:0] io_req_1_bits_flow_ingress_node,
  input  [1:0] io_req_1_bits_flow_egress_node,
  input  [1:0] io_req_0_bits_src_virt_id,
  input  [1:0] io_req_0_bits_flow_ingress_node,
  input  [1:0] io_req_0_bits_flow_egress_node,
  output       io_resp_2_vc_sel_1_0,
  output       io_resp_2_vc_sel_1_1,
  output       io_resp_2_vc_sel_1_2,
  output       io_resp_2_vc_sel_1_3,
  output       io_resp_2_vc_sel_0_0,
  output       io_resp_2_vc_sel_0_1,
  output       io_resp_2_vc_sel_0_2,
  output       io_resp_2_vc_sel_0_3,
  output       io_resp_1_vc_sel_1_0,
  output       io_resp_1_vc_sel_1_1,
  output       io_resp_1_vc_sel_1_2,
  output       io_resp_1_vc_sel_1_3,
  output       io_resp_1_vc_sel_0_0,
  output       io_resp_1_vc_sel_0_1,
  output       io_resp_1_vc_sel_0_2,
  output       io_resp_0_vc_sel_1_0,
  output       io_resp_0_vc_sel_1_1,
  output       io_resp_0_vc_sel_1_2,
  output       io_resp_0_vc_sel_1_3,
  output       io_resp_0_vc_sel_0_0,
  output       io_resp_0_vc_sel_0_1,
  output       io_resp_0_vc_sel_0_2
);
  wire [5:0] addr = {io_req_0_bits_src_virt_id,io_req_0_bits_flow_ingress_node,io_req_0_bits_flow_egress_node}; // @[RouteComputer.scala 74:27]
  wire [5:0] decoded_invInputs = ~addr; // @[pla.scala 78:21]
  wire  decoded_andMatrixInput_0 = decoded_invInputs[4]; // @[pla.scala 91:29]
  wire  decoded_andMatrixInput_1 = decoded_invInputs[5]; // @[pla.scala 91:29]
  wire [1:0] _decoded_T = {decoded_andMatrixInput_0,decoded_andMatrixInput_1}; // @[Cat.scala 33:92]
  wire  _decoded_T_1 = &_decoded_T; // @[pla.scala 98:74]
  wire  decoded_andMatrixInput_0_1 = decoded_invInputs[0]; // @[pla.scala 91:29]
  wire  decoded_andMatrixInput_1_1 = addr[1]; // @[pla.scala 90:45]
  wire [1:0] _decoded_T_2 = {decoded_andMatrixInput_0_1,decoded_andMatrixInput_1_1}; // @[Cat.scala 33:92]
  wire  _decoded_T_3 = &_decoded_T_2; // @[pla.scala 98:74]
  wire  decoded_andMatrixInput_0_2 = addr[0]; // @[pla.scala 90:45]
  wire [1:0] _decoded_T_4 = {decoded_andMatrixInput_0_2,decoded_andMatrixInput_1_1}; // @[Cat.scala 33:92]
  wire  _decoded_T_5 = &_decoded_T_4; // @[pla.scala 98:74]
  wire  decoded_andMatrixInput_1_3 = addr[4]; // @[pla.scala 90:45]
  wire [1:0] _decoded_T_6 = {decoded_andMatrixInput_1_1,decoded_andMatrixInput_1_3}; // @[Cat.scala 33:92]
  wire  _decoded_T_7 = &_decoded_T_6; // @[pla.scala 98:74]
  wire  decoded_andMatrixInput_1_4 = addr[5]; // @[pla.scala 90:45]
  wire [1:0] _decoded_T_8 = {decoded_andMatrixInput_1_1,decoded_andMatrixInput_1_4}; // @[Cat.scala 33:92]
  wire  _decoded_T_9 = &_decoded_T_8; // @[pla.scala 98:74]
  wire  decoded_andMatrixInput_2 = decoded_invInputs[3]; // @[pla.scala 91:29]
  wire [3:0] _decoded_T_10 = {decoded_andMatrixInput_0_2,decoded_andMatrixInput_1_1,decoded_andMatrixInput_2,
    decoded_andMatrixInput_1_4}; // @[Cat.scala 33:92]
  wire  _decoded_T_11 = &_decoded_T_10; // @[pla.scala 98:74]
  wire [1:0] _decoded_T_12 = {decoded_andMatrixInput_1_3,decoded_andMatrixInput_1_4}; // @[Cat.scala 33:92]
  wire  _decoded_T_13 = &_decoded_T_12; // @[pla.scala 98:74]
  wire [3:0] _decoded_T_14 = {decoded_andMatrixInput_0_2,decoded_andMatrixInput_2,decoded_andMatrixInput_1_3,
    decoded_andMatrixInput_1_4}; // @[Cat.scala 33:92]
  wire  _decoded_T_15 = &_decoded_T_14; // @[pla.scala 98:74]
  wire  _decoded_orMatrixOutputs_T = |_decoded_T_13; // @[pla.scala 114:39]
  wire  _decoded_orMatrixOutputs_T_1 = |_decoded_T_9; // @[pla.scala 114:39]
  wire [1:0] _decoded_orMatrixOutputs_T_2 = {_decoded_T_7,_decoded_T_9}; // @[Cat.scala 33:92]
  wire  _decoded_orMatrixOutputs_T_3 = |_decoded_orMatrixOutputs_T_2; // @[pla.scala 114:39]
  wire [1:0] _decoded_orMatrixOutputs_T_4 = {_decoded_T_1,_decoded_T_3}; // @[Cat.scala 33:92]
  wire  _decoded_orMatrixOutputs_T_5 = |_decoded_orMatrixOutputs_T_4; // @[pla.scala 114:39]
  wire  _decoded_orMatrixOutputs_T_6 = |_decoded_T_15; // @[pla.scala 114:39]
  wire  _decoded_orMatrixOutputs_T_7 = |_decoded_T_11; // @[pla.scala 114:39]
  wire  _decoded_orMatrixOutputs_T_8 = |_decoded_T_5; // @[pla.scala 114:39]
  wire [7:0] decoded_orMatrixOutputs = {_decoded_orMatrixOutputs_T_8,_decoded_orMatrixOutputs_T_7,
    _decoded_orMatrixOutputs_T_6,1'h0,_decoded_orMatrixOutputs_T_5,_decoded_orMatrixOutputs_T_3,
    _decoded_orMatrixOutputs_T_1,_decoded_orMatrixOutputs_T}; // @[Cat.scala 33:92]
  wire [7:0] decoded_invMatrixOutputs = {decoded_orMatrixOutputs[7],decoded_orMatrixOutputs[6],decoded_orMatrixOutputs[5
    ],decoded_orMatrixOutputs[4],decoded_orMatrixOutputs[3],decoded_orMatrixOutputs[2],decoded_orMatrixOutputs[1],
    decoded_orMatrixOutputs[0]}; // @[Cat.scala 33:92]
  wire [7:0] _GEN_0 = {{4'd0}, decoded_invMatrixOutputs[7:4]}; // @[Bitwise.scala 108:31]
  wire [7:0] _decoded_T_19 = _GEN_0 & 8'hf; // @[Bitwise.scala 108:31]
  wire [7:0] _decoded_T_21 = {decoded_invMatrixOutputs[3:0], 4'h0}; // @[Bitwise.scala 108:70]
  wire [7:0] _decoded_T_23 = _decoded_T_21 & 8'hf0; // @[Bitwise.scala 108:80]
  wire [7:0] _decoded_T_24 = _decoded_T_19 | _decoded_T_23; // @[Bitwise.scala 108:39]
  wire [7:0] _GEN_1 = {{2'd0}, _decoded_T_24[7:2]}; // @[Bitwise.scala 108:31]
  wire [7:0] _decoded_T_29 = _GEN_1 & 8'h33; // @[Bitwise.scala 108:31]
  wire [7:0] _decoded_T_31 = {_decoded_T_24[5:0], 2'h0}; // @[Bitwise.scala 108:70]
  wire [7:0] _decoded_T_33 = _decoded_T_31 & 8'hcc; // @[Bitwise.scala 108:80]
  wire [7:0] _decoded_T_34 = _decoded_T_29 | _decoded_T_33; // @[Bitwise.scala 108:39]
  wire [7:0] _GEN_2 = {{1'd0}, _decoded_T_34[7:1]}; // @[Bitwise.scala 108:31]
  wire [7:0] _decoded_T_39 = _GEN_2 & 8'h55; // @[Bitwise.scala 108:31]
  wire [7:0] _decoded_T_41 = {_decoded_T_34[6:0], 1'h0}; // @[Bitwise.scala 108:70]
  wire [7:0] _decoded_T_43 = _decoded_T_41 & 8'haa; // @[Bitwise.scala 108:80]
  wire [7:0] decoded = _decoded_T_39 | _decoded_T_43; // @[Bitwise.scala 108:39]
  wire [5:0] addr_1 = {io_req_1_bits_src_virt_id,io_req_1_bits_flow_ingress_node,io_req_1_bits_flow_egress_node}; // @[RouteComputer.scala 74:27]
  wire [5:0] decoded_invInputs_1 = ~addr_1; // @[pla.scala 78:21]
  wire  decoded_andMatrixInput_0_8 = decoded_invInputs_1[0]; // @[pla.scala 91:29]
  wire  decoded_andMatrixInput_1_8 = decoded_invInputs_1[1]; // @[pla.scala 91:29]
  wire [1:0] _decoded_T_44 = {decoded_andMatrixInput_0_8,decoded_andMatrixInput_1_8}; // @[Cat.scala 33:92]
  wire  _decoded_T_45 = &_decoded_T_44; // @[pla.scala 98:74]
  wire  decoded_andMatrixInput_0_9 = decoded_invInputs_1[3]; // @[pla.scala 91:29]
  wire  decoded_andMatrixInput_1_9 = decoded_invInputs_1[4]; // @[pla.scala 91:29]
  wire  decoded_andMatrixInput_2_2 = decoded_invInputs_1[5]; // @[pla.scala 91:29]
  wire [2:0] _decoded_T_46 = {decoded_andMatrixInput_0_9,decoded_andMatrixInput_1_9,decoded_andMatrixInput_2_2}; // @[Cat.scala 33:92]
  wire  _decoded_T_47 = &_decoded_T_46; // @[pla.scala 98:74]
  wire  decoded_andMatrixInput_0_10 = addr_1[0]; // @[pla.scala 90:45]
  wire  decoded_andMatrixInput_1_10 = addr_1[1]; // @[pla.scala 90:45]
  wire [1:0] _decoded_T_48 = {decoded_andMatrixInput_0_10,decoded_andMatrixInput_1_10}; // @[Cat.scala 33:92]
  wire  _decoded_T_49 = &_decoded_T_48; // @[pla.scala 98:74]
  wire  decoded_andMatrixInput_1_11 = decoded_invInputs_1[2]; // @[pla.scala 91:29]
  wire  decoded_andMatrixInput_2_3 = addr_1[3]; // @[pla.scala 90:45]
  wire [4:0] _decoded_T_50 = {decoded_andMatrixInput_1_10,decoded_andMatrixInput_1_11,decoded_andMatrixInput_2_3,
    decoded_andMatrixInput_1_9,decoded_andMatrixInput_2_2}; // @[Cat.scala 33:92]
  wire  _decoded_T_51 = &_decoded_T_50; // @[pla.scala 98:74]
  wire  decoded_andMatrixInput_1_12 = addr_1[4]; // @[pla.scala 90:45]
  wire [1:0] _decoded_T_52 = {decoded_andMatrixInput_0_10,decoded_andMatrixInput_1_12}; // @[Cat.scala 33:92]
  wire  _decoded_T_53 = &_decoded_T_52; // @[pla.scala 98:74]
  wire  decoded_andMatrixInput_1_13 = addr_1[5]; // @[pla.scala 90:45]
  wire [1:0] _decoded_T_54 = {decoded_andMatrixInput_1_11,decoded_andMatrixInput_1_13}; // @[Cat.scala 33:92]
  wire  _decoded_T_55 = &_decoded_T_54; // @[pla.scala 98:74]
  wire [1:0] _decoded_T_56 = {decoded_andMatrixInput_0_10,decoded_andMatrixInput_1_13}; // @[Cat.scala 33:92]
  wire  _decoded_T_57 = &_decoded_T_56; // @[pla.scala 98:74]
  wire [1:0] _decoded_T_58 = {decoded_andMatrixInput_1_12,decoded_andMatrixInput_1_13}; // @[Cat.scala 33:92]
  wire  _decoded_T_59 = &_decoded_T_58; // @[pla.scala 98:74]
  wire [2:0] _decoded_T_60 = {decoded_andMatrixInput_0_9,decoded_andMatrixInput_1_12,decoded_andMatrixInput_1_13}; // @[Cat.scala 33:92]
  wire  _decoded_T_61 = &_decoded_T_60; // @[pla.scala 98:74]
  wire [4:0] _decoded_T_62 = {decoded_andMatrixInput_1_10,decoded_andMatrixInput_1_11,decoded_andMatrixInput_2_3,
    decoded_andMatrixInput_1_12,decoded_andMatrixInput_1_13}; // @[Cat.scala 33:92]
  wire  _decoded_T_63 = &_decoded_T_62; // @[pla.scala 98:74]
  wire [1:0] _decoded_orMatrixOutputs_T_9 = {_decoded_T_61,_decoded_T_63}; // @[Cat.scala 33:92]
  wire  _decoded_orMatrixOutputs_T_10 = |_decoded_orMatrixOutputs_T_9; // @[pla.scala 114:39]
  wire  _decoded_orMatrixOutputs_T_11 = |_decoded_T_57; // @[pla.scala 114:39]
  wire [1:0] _decoded_orMatrixOutputs_T_12 = {_decoded_T_53,_decoded_T_57}; // @[Cat.scala 33:92]
  wire  _decoded_orMatrixOutputs_T_13 = |_decoded_orMatrixOutputs_T_12; // @[pla.scala 114:39]
  wire [1:0] _decoded_orMatrixOutputs_T_14 = {_decoded_T_47,_decoded_T_51}; // @[Cat.scala 33:92]
  wire  _decoded_orMatrixOutputs_T_15 = |_decoded_orMatrixOutputs_T_14; // @[pla.scala 114:39]
  wire  _decoded_orMatrixOutputs_T_16 = |_decoded_T_59; // @[pla.scala 114:39]
  wire [1:0] _decoded_orMatrixOutputs_T_17 = {_decoded_T_55,_decoded_T_57}; // @[Cat.scala 33:92]
  wire  _decoded_orMatrixOutputs_T_18 = |_decoded_orMatrixOutputs_T_17; // @[pla.scala 114:39]
  wire [1:0] _decoded_orMatrixOutputs_T_19 = {_decoded_T_45,_decoded_T_49}; // @[Cat.scala 33:92]
  wire  _decoded_orMatrixOutputs_T_20 = |_decoded_orMatrixOutputs_T_19; // @[pla.scala 114:39]
  wire [7:0] decoded_orMatrixOutputs_1 = {_decoded_orMatrixOutputs_T_20,_decoded_orMatrixOutputs_T_18,
    _decoded_orMatrixOutputs_T_16,1'h0,_decoded_orMatrixOutputs_T_15,_decoded_orMatrixOutputs_T_13,
    _decoded_orMatrixOutputs_T_11,_decoded_orMatrixOutputs_T_10}; // @[Cat.scala 33:92]
  wire [7:0] decoded_invMatrixOutputs_1 = {decoded_orMatrixOutputs_1[7],decoded_orMatrixOutputs_1[6],
    decoded_orMatrixOutputs_1[5],decoded_orMatrixOutputs_1[4],decoded_orMatrixOutputs_1[3],decoded_orMatrixOutputs_1[2],
    decoded_orMatrixOutputs_1[1],decoded_orMatrixOutputs_1[0]}; // @[Cat.scala 33:92]
  wire [7:0] _GEN_3 = {{4'd0}, decoded_invMatrixOutputs_1[7:4]}; // @[Bitwise.scala 108:31]
  wire [7:0] _decoded_T_67 = _GEN_3 & 8'hf; // @[Bitwise.scala 108:31]
  wire [7:0] _decoded_T_69 = {decoded_invMatrixOutputs_1[3:0], 4'h0}; // @[Bitwise.scala 108:70]
  wire [7:0] _decoded_T_71 = _decoded_T_69 & 8'hf0; // @[Bitwise.scala 108:80]
  wire [7:0] _decoded_T_72 = _decoded_T_67 | _decoded_T_71; // @[Bitwise.scala 108:39]
  wire [7:0] _GEN_4 = {{2'd0}, _decoded_T_72[7:2]}; // @[Bitwise.scala 108:31]
  wire [7:0] _decoded_T_77 = _GEN_4 & 8'h33; // @[Bitwise.scala 108:31]
  wire [7:0] _decoded_T_79 = {_decoded_T_72[5:0], 2'h0}; // @[Bitwise.scala 108:70]
  wire [7:0] _decoded_T_81 = _decoded_T_79 & 8'hcc; // @[Bitwise.scala 108:80]
  wire [7:0] _decoded_T_82 = _decoded_T_77 | _decoded_T_81; // @[Bitwise.scala 108:39]
  wire [7:0] _GEN_5 = {{1'd0}, _decoded_T_82[7:1]}; // @[Bitwise.scala 108:31]
  wire [7:0] _decoded_T_87 = _GEN_5 & 8'h55; // @[Bitwise.scala 108:31]
  wire [7:0] _decoded_T_89 = {_decoded_T_82[6:0], 1'h0}; // @[Bitwise.scala 108:70]
  wire [7:0] _decoded_T_91 = _decoded_T_89 & 8'haa; // @[Bitwise.scala 108:80]
  wire [7:0] decoded_1 = _decoded_T_87 | _decoded_T_91; // @[Bitwise.scala 108:39]
  wire [5:0] addr_2 = {2'h0,io_req_2_bits_flow_ingress_node,io_req_2_bits_flow_egress_node}; // @[RouteComputer.scala 74:27]
  wire [5:0] decoded_invInputs_2 = ~addr_2; // @[pla.scala 78:21]
  wire  decoded_andMatrixInput_0_18 = decoded_invInputs_2[1]; // @[pla.scala 91:29]
  wire  decoded_andMatrixInput_1_18 = addr_2[2]; // @[pla.scala 90:45]
  wire  decoded_andMatrixInput_2_6 = addr_2[3]; // @[pla.scala 90:45]
  wire  decoded_andMatrixInput_3_4 = decoded_invInputs_2[4]; // @[pla.scala 91:29]
  wire  decoded_andMatrixInput_4_2 = decoded_invInputs_2[5]; // @[pla.scala 91:29]
  wire [4:0] _decoded_T_92 = {decoded_andMatrixInput_0_18,decoded_andMatrixInput_1_18,decoded_andMatrixInput_2_6,
    decoded_andMatrixInput_3_4,decoded_andMatrixInput_4_2}; // @[Cat.scala 33:92]
  wire  _decoded_T_93 = &_decoded_T_92; // @[pla.scala 98:74]
  wire  decoded_andMatrixInput_0_19 = addr_2[0]; // @[pla.scala 90:45]
  wire [4:0] _decoded_T_94 = {decoded_andMatrixInput_0_19,decoded_andMatrixInput_1_18,decoded_andMatrixInput_2_6,
    decoded_andMatrixInput_3_4,decoded_andMatrixInput_4_2}; // @[Cat.scala 33:92]
  wire  _decoded_T_95 = &_decoded_T_94; // @[pla.scala 98:74]
  wire  decoded_andMatrixInput_0_20 = addr_2[1]; // @[pla.scala 90:45]
  wire [4:0] _decoded_T_96 = {decoded_andMatrixInput_0_20,decoded_andMatrixInput_1_18,decoded_andMatrixInput_2_6,
    decoded_andMatrixInput_3_4,decoded_andMatrixInput_4_2}; // @[Cat.scala 33:92]
  wire  _decoded_T_97 = &_decoded_T_96; // @[pla.scala 98:74]
  wire [1:0] _decoded_orMatrixOutputs_T_21 = {_decoded_T_95,_decoded_T_97}; // @[Cat.scala 33:92]
  wire  _decoded_orMatrixOutputs_T_22 = |_decoded_orMatrixOutputs_T_21; // @[pla.scala 114:39]
  wire [1:0] _decoded_orMatrixOutputs_T_27 = {_decoded_T_93,_decoded_T_95}; // @[Cat.scala 33:92]
  wire  _decoded_orMatrixOutputs_T_28 = |_decoded_orMatrixOutputs_T_27; // @[pla.scala 114:39]
  wire [7:0] decoded_orMatrixOutputs_2 = {1'h0,_decoded_orMatrixOutputs_T_28,_decoded_orMatrixOutputs_T_28,
    _decoded_orMatrixOutputs_T_28,1'h0,_decoded_orMatrixOutputs_T_22,_decoded_orMatrixOutputs_T_22,
    _decoded_orMatrixOutputs_T_22}; // @[Cat.scala 33:92]
  wire [7:0] decoded_invMatrixOutputs_2 = {decoded_orMatrixOutputs_2[7],decoded_orMatrixOutputs_2[6],
    decoded_orMatrixOutputs_2[5],decoded_orMatrixOutputs_2[4],decoded_orMatrixOutputs_2[3],decoded_orMatrixOutputs_2[2],
    decoded_orMatrixOutputs_2[1],decoded_orMatrixOutputs_2[0]}; // @[Cat.scala 33:92]
  wire [7:0] _GEN_6 = {{4'd0}, decoded_invMatrixOutputs_2[7:4]}; // @[Bitwise.scala 108:31]
  wire [7:0] _decoded_T_101 = _GEN_6 & 8'hf; // @[Bitwise.scala 108:31]
  wire [7:0] _decoded_T_103 = {decoded_invMatrixOutputs_2[3:0], 4'h0}; // @[Bitwise.scala 108:70]
  wire [7:0] _decoded_T_105 = _decoded_T_103 & 8'hf0; // @[Bitwise.scala 108:80]
  wire [7:0] _decoded_T_106 = _decoded_T_101 | _decoded_T_105; // @[Bitwise.scala 108:39]
  wire [7:0] _GEN_7 = {{2'd0}, _decoded_T_106[7:2]}; // @[Bitwise.scala 108:31]
  wire [7:0] _decoded_T_111 = _GEN_7 & 8'h33; // @[Bitwise.scala 108:31]
  wire [7:0] _decoded_T_113 = {_decoded_T_106[5:0], 2'h0}; // @[Bitwise.scala 108:70]
  wire [7:0] _decoded_T_115 = _decoded_T_113 & 8'hcc; // @[Bitwise.scala 108:80]
  wire [7:0] _decoded_T_116 = _decoded_T_111 | _decoded_T_115; // @[Bitwise.scala 108:39]
  wire [7:0] _GEN_8 = {{1'd0}, _decoded_T_116[7:1]}; // @[Bitwise.scala 108:31]
  wire [7:0] _decoded_T_121 = _GEN_8 & 8'h55; // @[Bitwise.scala 108:31]
  wire [7:0] _decoded_T_123 = {_decoded_T_116[6:0], 1'h0}; // @[Bitwise.scala 108:70]
  wire [7:0] _decoded_T_125 = _decoded_T_123 & 8'haa; // @[Bitwise.scala 108:80]
  wire [7:0] decoded_2 = _decoded_T_121 | _decoded_T_125; // @[Bitwise.scala 108:39]
  assign io_resp_2_vc_sel_1_0 = decoded_2[4]; // @[RouteComputer.scala 90:46]
  assign io_resp_2_vc_sel_1_1 = decoded_2[5]; // @[RouteComputer.scala 90:46]
  assign io_resp_2_vc_sel_1_2 = decoded_2[6]; // @[RouteComputer.scala 90:46]
  assign io_resp_2_vc_sel_1_3 = decoded_2[7]; // @[RouteComputer.scala 90:46]
  assign io_resp_2_vc_sel_0_0 = decoded_2[0]; // @[RouteComputer.scala 90:46]
  assign io_resp_2_vc_sel_0_1 = decoded_2[1]; // @[RouteComputer.scala 90:46]
  assign io_resp_2_vc_sel_0_2 = decoded_2[2]; // @[RouteComputer.scala 90:46]
  assign io_resp_2_vc_sel_0_3 = decoded_2[3]; // @[RouteComputer.scala 90:46]
  assign io_resp_1_vc_sel_1_0 = decoded_1[4]; // @[RouteComputer.scala 90:46]
  assign io_resp_1_vc_sel_1_1 = decoded_1[5]; // @[RouteComputer.scala 90:46]
  assign io_resp_1_vc_sel_1_2 = decoded_1[6]; // @[RouteComputer.scala 90:46]
  assign io_resp_1_vc_sel_1_3 = decoded_1[7]; // @[RouteComputer.scala 90:46]
  assign io_resp_1_vc_sel_0_0 = decoded_1[0]; // @[RouteComputer.scala 90:46]
  assign io_resp_1_vc_sel_0_1 = decoded_1[1]; // @[RouteComputer.scala 90:46]
  assign io_resp_1_vc_sel_0_2 = decoded_1[2]; // @[RouteComputer.scala 90:46]
  assign io_resp_0_vc_sel_1_0 = decoded[4]; // @[RouteComputer.scala 90:46]
  assign io_resp_0_vc_sel_1_1 = decoded[5]; // @[RouteComputer.scala 90:46]
  assign io_resp_0_vc_sel_1_2 = decoded[6]; // @[RouteComputer.scala 90:46]
  assign io_resp_0_vc_sel_1_3 = decoded[7]; // @[RouteComputer.scala 90:46]
  assign io_resp_0_vc_sel_0_0 = decoded[0]; // @[RouteComputer.scala 90:46]
  assign io_resp_0_vc_sel_0_1 = decoded[1]; // @[RouteComputer.scala 90:46]
  assign io_resp_0_vc_sel_0_2 = decoded[2]; // @[RouteComputer.scala 90:46]
endmodule