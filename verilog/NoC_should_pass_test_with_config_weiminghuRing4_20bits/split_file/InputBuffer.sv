module InputBuffer(
  input         clock,
  input         reset,
  input         io_enq_0_valid,
  input         io_enq_0_bits_head,
  input         io_enq_0_bits_tail,
  input  [19:0] io_enq_0_bits_payload,
  input  [1:0]  io_enq_0_bits_virt_channel_id,
  input         io_deq_0_ready,
  output        io_deq_0_valid,
  output        io_deq_0_bits_head,
  output        io_deq_0_bits_tail,
  output [19:0] io_deq_0_bits_payload,
  input         io_deq_1_ready,
  output        io_deq_1_valid,
  output        io_deq_1_bits_head,
  output        io_deq_1_bits_tail,
  output [19:0] io_deq_1_bits_payload,
  input         io_deq_2_ready,
  output        io_deq_2_valid,
  output        io_deq_2_bits_head,
  output        io_deq_2_bits_tail,
  output [19:0] io_deq_2_bits_payload,
  input         io_deq_3_ready,
  output        io_deq_3_valid,
  output        io_deq_3_bits_head,
  output        io_deq_3_bits_tail,
  output [19:0] io_deq_3_bits_payload
);
`ifdef RANDOMIZE_GARBAGE_ASSIGN
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
`endif // RANDOMIZE_GARBAGE_ASSIGN
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_10;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
`endif // RANDOMIZE_REG_INIT
  reg  mem_head [0:19]; // @[InputUnit.scala 85:18]
  wire  mem_head_qs_0_io_enq_bits_MPORT_en; // @[InputUnit.scala 85:18]
  wire [4:0] mem_head_qs_0_io_enq_bits_MPORT_addr; // @[InputUnit.scala 85:18]
  wire  mem_head_qs_0_io_enq_bits_MPORT_data; // @[InputUnit.scala 85:18]
  wire  mem_head_qs_1_io_enq_bits_MPORT_en; // @[InputUnit.scala 85:18]
  wire [4:0] mem_head_qs_1_io_enq_bits_MPORT_addr; // @[InputUnit.scala 85:18]
  wire  mem_head_qs_1_io_enq_bits_MPORT_data; // @[InputUnit.scala 85:18]
  wire  mem_head_qs_2_io_enq_bits_MPORT_en; // @[InputUnit.scala 85:18]
  wire [4:0] mem_head_qs_2_io_enq_bits_MPORT_addr; // @[InputUnit.scala 85:18]
  wire  mem_head_qs_2_io_enq_bits_MPORT_data; // @[InputUnit.scala 85:18]
  wire  mem_head_qs_3_io_enq_bits_MPORT_en; // @[InputUnit.scala 85:18]
  wire [4:0] mem_head_qs_3_io_enq_bits_MPORT_addr; // @[InputUnit.scala 85:18]
  wire  mem_head_qs_3_io_enq_bits_MPORT_data; // @[InputUnit.scala 85:18]
  wire  mem_head_MPORT_data; // @[InputUnit.scala 85:18]
  wire [4:0] mem_head_MPORT_addr; // @[InputUnit.scala 85:18]
  wire  mem_head_MPORT_mask; // @[InputUnit.scala 85:18]
  wire  mem_head_MPORT_en; // @[InputUnit.scala 85:18]
  reg  mem_tail [0:19]; // @[InputUnit.scala 85:18]
  wire  mem_tail_qs_0_io_enq_bits_MPORT_en; // @[InputUnit.scala 85:18]
  wire [4:0] mem_tail_qs_0_io_enq_bits_MPORT_addr; // @[InputUnit.scala 85:18]
  wire  mem_tail_qs_0_io_enq_bits_MPORT_data; // @[InputUnit.scala 85:18]
  wire  mem_tail_qs_1_io_enq_bits_MPORT_en; // @[InputUnit.scala 85:18]
  wire [4:0] mem_tail_qs_1_io_enq_bits_MPORT_addr; // @[InputUnit.scala 85:18]
  wire  mem_tail_qs_1_io_enq_bits_MPORT_data; // @[InputUnit.scala 85:18]
  wire  mem_tail_qs_2_io_enq_bits_MPORT_en; // @[InputUnit.scala 85:18]
  wire [4:0] mem_tail_qs_2_io_enq_bits_MPORT_addr; // @[InputUnit.scala 85:18]
  wire  mem_tail_qs_2_io_enq_bits_MPORT_data; // @[InputUnit.scala 85:18]
  wire  mem_tail_qs_3_io_enq_bits_MPORT_en; // @[InputUnit.scala 85:18]
  wire [4:0] mem_tail_qs_3_io_enq_bits_MPORT_addr; // @[InputUnit.scala 85:18]
  wire  mem_tail_qs_3_io_enq_bits_MPORT_data; // @[InputUnit.scala 85:18]
  wire  mem_tail_MPORT_data; // @[InputUnit.scala 85:18]
  wire [4:0] mem_tail_MPORT_addr; // @[InputUnit.scala 85:18]
  wire  mem_tail_MPORT_mask; // @[InputUnit.scala 85:18]
  wire  mem_tail_MPORT_en; // @[InputUnit.scala 85:18]
  reg [19:0] mem_payload [0:19]; // @[InputUnit.scala 85:18]
  wire  mem_payload_qs_0_io_enq_bits_MPORT_en; // @[InputUnit.scala 85:18]
  wire [4:0] mem_payload_qs_0_io_enq_bits_MPORT_addr; // @[InputUnit.scala 85:18]
  wire [19:0] mem_payload_qs_0_io_enq_bits_MPORT_data; // @[InputUnit.scala 85:18]
  wire  mem_payload_qs_1_io_enq_bits_MPORT_en; // @[InputUnit.scala 85:18]
  wire [4:0] mem_payload_qs_1_io_enq_bits_MPORT_addr; // @[InputUnit.scala 85:18]
  wire [19:0] mem_payload_qs_1_io_enq_bits_MPORT_data; // @[InputUnit.scala 85:18]
  wire  mem_payload_qs_2_io_enq_bits_MPORT_en; // @[InputUnit.scala 85:18]
  wire [4:0] mem_payload_qs_2_io_enq_bits_MPORT_addr; // @[InputUnit.scala 85:18]
  wire [19:0] mem_payload_qs_2_io_enq_bits_MPORT_data; // @[InputUnit.scala 85:18]
  wire  mem_payload_qs_3_io_enq_bits_MPORT_en; // @[InputUnit.scala 85:18]
  wire [4:0] mem_payload_qs_3_io_enq_bits_MPORT_addr; // @[InputUnit.scala 85:18]
  wire [19:0] mem_payload_qs_3_io_enq_bits_MPORT_data; // @[InputUnit.scala 85:18]
  wire [19:0] mem_payload_MPORT_data; // @[InputUnit.scala 85:18]
  wire [4:0] mem_payload_MPORT_addr; // @[InputUnit.scala 85:18]
  wire  mem_payload_MPORT_mask; // @[InputUnit.scala 85:18]
  wire  mem_payload_MPORT_en; // @[InputUnit.scala 85:18]
  wire  qs_0_clock; // @[InputUnit.scala 90:49]
  wire  qs_0_reset; // @[InputUnit.scala 90:49]
  wire  qs_0_io_enq_ready; // @[InputUnit.scala 90:49]
  wire  qs_0_io_enq_valid; // @[InputUnit.scala 90:49]
  wire  qs_0_io_enq_bits_head; // @[InputUnit.scala 90:49]
  wire  qs_0_io_enq_bits_tail; // @[InputUnit.scala 90:49]
  wire [19:0] qs_0_io_enq_bits_payload; // @[InputUnit.scala 90:49]
  wire  qs_0_io_deq_ready; // @[InputUnit.scala 90:49]
  wire  qs_0_io_deq_valid; // @[InputUnit.scala 90:49]
  wire  qs_0_io_deq_bits_head; // @[InputUnit.scala 90:49]
  wire  qs_0_io_deq_bits_tail; // @[InputUnit.scala 90:49]
  wire [19:0] qs_0_io_deq_bits_payload; // @[InputUnit.scala 90:49]
  wire  qs_1_clock; // @[InputUnit.scala 90:49]
  wire  qs_1_reset; // @[InputUnit.scala 90:49]
  wire  qs_1_io_enq_ready; // @[InputUnit.scala 90:49]
  wire  qs_1_io_enq_valid; // @[InputUnit.scala 90:49]
  wire  qs_1_io_enq_bits_head; // @[InputUnit.scala 90:49]
  wire  qs_1_io_enq_bits_tail; // @[InputUnit.scala 90:49]
  wire [19:0] qs_1_io_enq_bits_payload; // @[InputUnit.scala 90:49]
  wire  qs_1_io_deq_ready; // @[InputUnit.scala 90:49]
  wire  qs_1_io_deq_valid; // @[InputUnit.scala 90:49]
  wire  qs_1_io_deq_bits_head; // @[InputUnit.scala 90:49]
  wire  qs_1_io_deq_bits_tail; // @[InputUnit.scala 90:49]
  wire [19:0] qs_1_io_deq_bits_payload; // @[InputUnit.scala 90:49]
  wire  qs_2_clock; // @[InputUnit.scala 90:49]
  wire  qs_2_reset; // @[InputUnit.scala 90:49]
  wire  qs_2_io_enq_ready; // @[InputUnit.scala 90:49]
  wire  qs_2_io_enq_valid; // @[InputUnit.scala 90:49]
  wire  qs_2_io_enq_bits_head; // @[InputUnit.scala 90:49]
  wire  qs_2_io_enq_bits_tail; // @[InputUnit.scala 90:49]
  wire [19:0] qs_2_io_enq_bits_payload; // @[InputUnit.scala 90:49]
  wire  qs_2_io_deq_ready; // @[InputUnit.scala 90:49]
  wire  qs_2_io_deq_valid; // @[InputUnit.scala 90:49]
  wire  qs_2_io_deq_bits_head; // @[InputUnit.scala 90:49]
  wire  qs_2_io_deq_bits_tail; // @[InputUnit.scala 90:49]
  wire [19:0] qs_2_io_deq_bits_payload; // @[InputUnit.scala 90:49]
  wire  qs_3_clock; // @[InputUnit.scala 90:49]
  wire  qs_3_reset; // @[InputUnit.scala 90:49]
  wire  qs_3_io_enq_ready; // @[InputUnit.scala 90:49]
  wire  qs_3_io_enq_valid; // @[InputUnit.scala 90:49]
  wire  qs_3_io_enq_bits_head; // @[InputUnit.scala 90:49]
  wire  qs_3_io_enq_bits_tail; // @[InputUnit.scala 90:49]
  wire [19:0] qs_3_io_enq_bits_payload; // @[InputUnit.scala 90:49]
  wire  qs_3_io_deq_ready; // @[InputUnit.scala 90:49]
  wire  qs_3_io_deq_valid; // @[InputUnit.scala 90:49]
  wire  qs_3_io_deq_bits_head; // @[InputUnit.scala 90:49]
  wire  qs_3_io_deq_bits_tail; // @[InputUnit.scala 90:49]
  wire [19:0] qs_3_io_deq_bits_payload; // @[InputUnit.scala 90:49]
  reg [4:0] heads_0; // @[InputUnit.scala 86:24]
  reg [4:0] heads_1; // @[InputUnit.scala 86:24]
  reg [4:0] heads_2; // @[InputUnit.scala 86:24]
  reg [4:0] heads_3; // @[InputUnit.scala 86:24]
  reg [4:0] tails_0; // @[InputUnit.scala 87:24]
  reg [4:0] tails_1; // @[InputUnit.scala 87:24]
  reg [4:0] tails_2; // @[InputUnit.scala 87:24]
  reg [4:0] tails_3; // @[InputUnit.scala 87:24]
  wire  empty_0 = heads_0 == tails_0; // @[InputUnit.scala 88:49]
  wire  empty_1 = heads_1 == tails_1; // @[InputUnit.scala 88:49]
  wire  empty_2 = heads_2 == tails_2; // @[InputUnit.scala 88:49]
  wire  empty_3 = heads_3 == tails_3; // @[InputUnit.scala 88:49]
  wire [3:0] vc_sel = 4'h1 << io_enq_0_bits_virt_channel_id; // @[OneHot.scala 57:35]
  wire  _direct_to_q_T_10 = vc_sel[0] & qs_0_io_enq_ready | vc_sel[1] & qs_1_io_enq_ready | vc_sel[2] &
    qs_2_io_enq_ready | vc_sel[3] & qs_3_io_enq_ready; // @[Mux.scala 27:73]
  wire  _direct_to_q_T_21 = vc_sel[0] & empty_0 | vc_sel[1] & empty_1 | vc_sel[2] & empty_2 | vc_sel[3] & empty_3; // @[Mux.scala 27:73]
  wire  direct_to_q = _direct_to_q_T_10 & _direct_to_q_T_21; // @[InputUnit.scala 96:62]
  wire  _T = ~direct_to_q; // @[InputUnit.scala 100:30]
  wire [4:0] _GEN_1 = 2'h1 == io_enq_0_bits_virt_channel_id ? tails_1 : tails_0; // @[]
  wire [4:0] _GEN_2 = 2'h2 == io_enq_0_bits_virt_channel_id ? tails_2 : _GEN_1; // @[]
  wire [4:0] _GEN_3 = 2'h3 == io_enq_0_bits_virt_channel_id ? tails_3 : _GEN_2; // @[]
  wire [2:0] _tails_T_4 = vc_sel[0] ? 3'h4 : 3'h0; // @[Mux.scala 27:73]
  wire [3:0] _tails_T_5 = vc_sel[1] ? 4'h9 : 4'h0; // @[Mux.scala 27:73]
  wire [3:0] _tails_T_6 = vc_sel[2] ? 4'he : 4'h0; // @[Mux.scala 27:73]
  wire [4:0] _tails_T_7 = vc_sel[3] ? 5'h13 : 5'h0; // @[Mux.scala 27:73]
  wire [3:0] _GEN_131 = {{1'd0}, _tails_T_4}; // @[Mux.scala 27:73]
  wire [3:0] _tails_T_8 = _GEN_131 | _tails_T_5; // @[Mux.scala 27:73]
  wire [3:0] _tails_T_9 = _tails_T_8 | _tails_T_6; // @[Mux.scala 27:73]
  wire [4:0] _GEN_132 = {{1'd0}, _tails_T_9}; // @[Mux.scala 27:73]
  wire [4:0] _tails_T_10 = _GEN_132 | _tails_T_7; // @[Mux.scala 27:73]
  wire  _tails_T_11 = _GEN_3 == _tails_T_10; // @[InputUnit.scala 104:14]
  wire [2:0] _tails_T_17 = vc_sel[1] ? 3'h5 : 3'h0; // @[Mux.scala 27:73]
  wire [3:0] _tails_T_18 = vc_sel[2] ? 4'ha : 4'h0; // @[Mux.scala 27:73]
  wire [3:0] _tails_T_19 = vc_sel[3] ? 4'hf : 4'h0; // @[Mux.scala 27:73]
  wire [3:0] _GEN_133 = {{1'd0}, _tails_T_17}; // @[Mux.scala 27:73]
  wire [3:0] _tails_T_21 = _GEN_133 | _tails_T_18; // @[Mux.scala 27:73]
  wire [3:0] _tails_T_22 = _tails_T_21 | _tails_T_19; // @[Mux.scala 27:73]
  wire [4:0] _tails_T_24 = _GEN_3 + 5'h1; // @[InputUnit.scala 106:14]
  wire  _T_3 = io_enq_0_bits_virt_channel_id == 2'h0; // @[InputUnit.scala 109:46]
  wire  _T_4 = io_enq_0_bits_virt_channel_id == 2'h1; // @[InputUnit.scala 109:46]
  wire  _T_5 = io_enq_0_bits_virt_channel_id == 2'h2; // @[InputUnit.scala 109:46]
  wire  _T_6 = io_enq_0_bits_virt_channel_id == 2'h3; // @[InputUnit.scala 109:46]
  wire  _GEN_24 = io_enq_0_valid & direct_to_q & _T_3; // @[InputUnit.scala 107:50 91:31]
  wire  _GEN_28 = io_enq_0_valid & direct_to_q & _T_4; // @[InputUnit.scala 107:50 91:31]
  wire  _GEN_32 = io_enq_0_valid & direct_to_q & _T_5; // @[InputUnit.scala 107:50 91:31]
  wire  _GEN_36 = io_enq_0_valid & direct_to_q & _T_6; // @[InputUnit.scala 107:50 91:31]
  wire  _GEN_51 = io_enq_0_valid & ~direct_to_q ? 1'h0 : _GEN_24; // @[InputUnit.scala 100:44 91:31]
  wire  _GEN_55 = io_enq_0_valid & ~direct_to_q ? 1'h0 : _GEN_28; // @[InputUnit.scala 100:44 91:31]
  wire  _GEN_59 = io_enq_0_valid & ~direct_to_q ? 1'h0 : _GEN_32; // @[InputUnit.scala 100:44 91:31]
  wire  _GEN_63 = io_enq_0_valid & ~direct_to_q ? 1'h0 : _GEN_36; // @[InputUnit.scala 100:44 91:31]
  wire  can_to_q_0 = ~empty_0 & qs_0_io_enq_ready; // @[InputUnit.scala 117:70]
  wire  can_to_q_1 = ~empty_1 & qs_1_io_enq_ready; // @[InputUnit.scala 117:70]
  wire  can_to_q_2 = ~empty_2 & qs_2_io_enq_ready; // @[InputUnit.scala 117:70]
  wire  can_to_q_3 = ~empty_3 & qs_3_io_enq_ready; // @[InputUnit.scala 117:70]
  wire [3:0] _to_q_oh_enc_T = can_to_q_3 ? 4'h8 : 4'h0; // @[Mux.scala 47:70]
  wire [3:0] _to_q_oh_enc_T_1 = can_to_q_2 ? 4'h4 : _to_q_oh_enc_T; // @[Mux.scala 47:70]
  wire [3:0] _to_q_oh_enc_T_2 = can_to_q_1 ? 4'h2 : _to_q_oh_enc_T_1; // @[Mux.scala 47:70]
  wire [3:0] to_q_oh_enc = can_to_q_0 ? 4'h1 : _to_q_oh_enc_T_2; // @[Mux.scala 47:70]
  wire  to_q_oh_0 = to_q_oh_enc[0]; // @[OneHot.scala 82:30]
  wire  to_q_oh_1 = to_q_oh_enc[1]; // @[OneHot.scala 82:30]
  wire  to_q_oh_2 = to_q_oh_enc[2]; // @[OneHot.scala 82:30]
  wire  to_q_oh_3 = to_q_oh_enc[3]; // @[OneHot.scala 82:30]
  wire [3:0] _to_q_T = {to_q_oh_3,to_q_oh_2,to_q_oh_1,to_q_oh_0}; // @[Cat.scala 33:92]
  wire [1:0] to_q_hi_1 = _to_q_T[3:2]; // @[OneHot.scala 30:18]
  wire [1:0] to_q_lo_1 = _to_q_T[1:0]; // @[OneHot.scala 31:18]
  wire  _to_q_T_1 = |to_q_hi_1; // @[OneHot.scala 32:14]
  wire [1:0] _to_q_T_2 = to_q_hi_1 | to_q_lo_1; // @[OneHot.scala 32:28]
  wire [1:0] to_q = {_to_q_T_1,_to_q_T_2[1]}; // @[Cat.scala 33:92]
  wire  _T_9 = can_to_q_0 | can_to_q_1 | can_to_q_2 | can_to_q_3; // @[package.scala 73:59]
  wire [4:0] _head_T = to_q_oh_0 ? heads_0 : 5'h0; // @[Mux.scala 27:73]
  wire [4:0] _head_T_1 = to_q_oh_1 ? heads_1 : 5'h0; // @[Mux.scala 27:73]
  wire [4:0] _head_T_2 = to_q_oh_2 ? heads_2 : 5'h0; // @[Mux.scala 27:73]
  wire [4:0] _head_T_3 = to_q_oh_3 ? heads_3 : 5'h0; // @[Mux.scala 27:73]
  wire [4:0] _head_T_4 = _head_T | _head_T_1; // @[Mux.scala 27:73]
  wire [4:0] _head_T_5 = _head_T_4 | _head_T_2; // @[Mux.scala 27:73]
  wire [4:0] head = _head_T_5 | _head_T_3; // @[Mux.scala 27:73]
  wire [2:0] _heads_T = to_q_oh_0 ? 3'h4 : 3'h0; // @[Mux.scala 27:73]
  wire [3:0] _heads_T_1 = to_q_oh_1 ? 4'h9 : 4'h0; // @[Mux.scala 27:73]
  wire [3:0] _heads_T_2 = to_q_oh_2 ? 4'he : 4'h0; // @[Mux.scala 27:73]
  wire [4:0] _heads_T_3 = to_q_oh_3 ? 5'h13 : 5'h0; // @[Mux.scala 27:73]
  wire [3:0] _GEN_134 = {{1'd0}, _heads_T}; // @[Mux.scala 27:73]
  wire [3:0] _heads_T_4 = _GEN_134 | _heads_T_1; // @[Mux.scala 27:73]
  wire [3:0] _heads_T_5 = _heads_T_4 | _heads_T_2; // @[Mux.scala 27:73]
  wire [4:0] _GEN_135 = {{1'd0}, _heads_T_5}; // @[Mux.scala 27:73]
  wire [4:0] _heads_T_6 = _GEN_135 | _heads_T_3; // @[Mux.scala 27:73]
  wire  _heads_T_7 = head == _heads_T_6; // @[InputUnit.scala 123:16]
  wire [2:0] _heads_T_9 = to_q_oh_1 ? 3'h5 : 3'h0; // @[Mux.scala 27:73]
  wire [3:0] _heads_T_10 = to_q_oh_2 ? 4'ha : 4'h0; // @[Mux.scala 27:73]
  wire [3:0] _heads_T_11 = to_q_oh_3 ? 4'hf : 4'h0; // @[Mux.scala 27:73]
  wire [3:0] _GEN_136 = {{1'd0}, _heads_T_9}; // @[Mux.scala 27:73]
  wire [3:0] _heads_T_13 = _GEN_136 | _heads_T_10; // @[Mux.scala 27:73]
  wire [3:0] _heads_T_14 = _heads_T_13 | _heads_T_11; // @[Mux.scala 27:73]
  wire [4:0] _heads_T_16 = head + 5'h1; // @[InputUnit.scala 125:16]
  wire  _GEN_71 = to_q_oh_0 | _GEN_51; // @[InputUnit.scala 127:29 128:32]
  wire [19:0] _GEN_75 = to_q_oh_0 ? mem_payload_qs_0_io_enq_bits_MPORT_data : io_enq_0_bits_payload; // @[InputUnit.scala 127:29 129:31]
  wire  _GEN_76 = to_q_oh_0 ? mem_tail_qs_0_io_enq_bits_MPORT_data : io_enq_0_bits_tail; // @[InputUnit.scala 127:29 129:31]
  wire  _GEN_77 = to_q_oh_0 ? mem_head_qs_0_io_enq_bits_MPORT_data : io_enq_0_bits_head; // @[InputUnit.scala 127:29 129:31]
  wire  _GEN_78 = to_q_oh_1 | _GEN_55; // @[InputUnit.scala 127:29 128:32]
  wire [19:0] _GEN_82 = to_q_oh_1 ? mem_payload_qs_1_io_enq_bits_MPORT_data : io_enq_0_bits_payload; // @[InputUnit.scala 127:29 129:31]
  wire  _GEN_83 = to_q_oh_1 ? mem_tail_qs_1_io_enq_bits_MPORT_data : io_enq_0_bits_tail; // @[InputUnit.scala 127:29 129:31]
  wire  _GEN_84 = to_q_oh_1 ? mem_head_qs_1_io_enq_bits_MPORT_data : io_enq_0_bits_head; // @[InputUnit.scala 127:29 129:31]
  wire  _GEN_85 = to_q_oh_2 | _GEN_59; // @[InputUnit.scala 127:29 128:32]
  wire [19:0] _GEN_89 = to_q_oh_2 ? mem_payload_qs_2_io_enq_bits_MPORT_data : io_enq_0_bits_payload; // @[InputUnit.scala 127:29 129:31]
  wire  _GEN_90 = to_q_oh_2 ? mem_tail_qs_2_io_enq_bits_MPORT_data : io_enq_0_bits_tail; // @[InputUnit.scala 127:29 129:31]
  wire  _GEN_91 = to_q_oh_2 ? mem_head_qs_2_io_enq_bits_MPORT_data : io_enq_0_bits_head; // @[InputUnit.scala 127:29 129:31]
  wire  _GEN_92 = to_q_oh_3 | _GEN_63; // @[InputUnit.scala 127:29 128:32]
  wire [19:0] _GEN_96 = to_q_oh_3 ? mem_payload_qs_3_io_enq_bits_MPORT_data : io_enq_0_bits_payload; // @[InputUnit.scala 127:29 129:31]
  wire  _GEN_97 = to_q_oh_3 ? mem_tail_qs_3_io_enq_bits_MPORT_data : io_enq_0_bits_tail; // @[InputUnit.scala 127:29 129:31]
  wire  _GEN_98 = to_q_oh_3 ? mem_head_qs_3_io_enq_bits_MPORT_data : io_enq_0_bits_head; // @[InputUnit.scala 127:29 129:31]
  Queue qs_0 ( // @[InputUnit.scala 90:49]
    .clock(qs_0_clock),
    .reset(qs_0_reset),
    .io_enq_ready(qs_0_io_enq_ready),
    .io_enq_valid(qs_0_io_enq_valid),
    .io_enq_bits_head(qs_0_io_enq_bits_head),
    .io_enq_bits_tail(qs_0_io_enq_bits_tail),
    .io_enq_bits_payload(qs_0_io_enq_bits_payload),
    .io_deq_ready(qs_0_io_deq_ready),
    .io_deq_valid(qs_0_io_deq_valid),
    .io_deq_bits_head(qs_0_io_deq_bits_head),
    .io_deq_bits_tail(qs_0_io_deq_bits_tail),
    .io_deq_bits_payload(qs_0_io_deq_bits_payload)
  );
  Queue qs_1 ( // @[InputUnit.scala 90:49]
    .clock(qs_1_clock),
    .reset(qs_1_reset),
    .io_enq_ready(qs_1_io_enq_ready),
    .io_enq_valid(qs_1_io_enq_valid),
    .io_enq_bits_head(qs_1_io_enq_bits_head),
    .io_enq_bits_tail(qs_1_io_enq_bits_tail),
    .io_enq_bits_payload(qs_1_io_enq_bits_payload),
    .io_deq_ready(qs_1_io_deq_ready),
    .io_deq_valid(qs_1_io_deq_valid),
    .io_deq_bits_head(qs_1_io_deq_bits_head),
    .io_deq_bits_tail(qs_1_io_deq_bits_tail),
    .io_deq_bits_payload(qs_1_io_deq_bits_payload)
  );
  Queue qs_2 ( // @[InputUnit.scala 90:49]
    .clock(qs_2_clock),
    .reset(qs_2_reset),
    .io_enq_ready(qs_2_io_enq_ready),
    .io_enq_valid(qs_2_io_enq_valid),
    .io_enq_bits_head(qs_2_io_enq_bits_head),
    .io_enq_bits_tail(qs_2_io_enq_bits_tail),
    .io_enq_bits_payload(qs_2_io_enq_bits_payload),
    .io_deq_ready(qs_2_io_deq_ready),
    .io_deq_valid(qs_2_io_deq_valid),
    .io_deq_bits_head(qs_2_io_deq_bits_head),
    .io_deq_bits_tail(qs_2_io_deq_bits_tail),
    .io_deq_bits_payload(qs_2_io_deq_bits_payload)
  );
  Queue qs_3 ( // @[InputUnit.scala 90:49]
    .clock(qs_3_clock),
    .reset(qs_3_reset),
    .io_enq_ready(qs_3_io_enq_ready),
    .io_enq_valid(qs_3_io_enq_valid),
    .io_enq_bits_head(qs_3_io_enq_bits_head),
    .io_enq_bits_tail(qs_3_io_enq_bits_tail),
    .io_enq_bits_payload(qs_3_io_enq_bits_payload),
    .io_deq_ready(qs_3_io_deq_ready),
    .io_deq_valid(qs_3_io_deq_valid),
    .io_deq_bits_head(qs_3_io_deq_bits_head),
    .io_deq_bits_tail(qs_3_io_deq_bits_tail),
    .io_deq_bits_payload(qs_3_io_deq_bits_payload)
  );
  assign mem_head_qs_0_io_enq_bits_MPORT_en = _T_9 & to_q_oh_0;
  assign mem_head_qs_0_io_enq_bits_MPORT_addr = _head_T_5 | _head_T_3;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign mem_head_qs_0_io_enq_bits_MPORT_data = mem_head[mem_head_qs_0_io_enq_bits_MPORT_addr]; // @[InputUnit.scala 85:18]
  `else
  assign mem_head_qs_0_io_enq_bits_MPORT_data = mem_head_qs_0_io_enq_bits_MPORT_addr >= 5'h14 ? _RAND_1[0:0] :
    mem_head[mem_head_qs_0_io_enq_bits_MPORT_addr]; // @[InputUnit.scala 85:18]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign mem_head_qs_1_io_enq_bits_MPORT_en = _T_9 & to_q_oh_1;
  assign mem_head_qs_1_io_enq_bits_MPORT_addr = _head_T_5 | _head_T_3;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign mem_head_qs_1_io_enq_bits_MPORT_data = mem_head[mem_head_qs_1_io_enq_bits_MPORT_addr]; // @[InputUnit.scala 85:18]
  `else
  assign mem_head_qs_1_io_enq_bits_MPORT_data = mem_head_qs_1_io_enq_bits_MPORT_addr >= 5'h14 ? _RAND_2[0:0] :
    mem_head[mem_head_qs_1_io_enq_bits_MPORT_addr]; // @[InputUnit.scala 85:18]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign mem_head_qs_2_io_enq_bits_MPORT_en = _T_9 & to_q_oh_2;
  assign mem_head_qs_2_io_enq_bits_MPORT_addr = _head_T_5 | _head_T_3;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign mem_head_qs_2_io_enq_bits_MPORT_data = mem_head[mem_head_qs_2_io_enq_bits_MPORT_addr]; // @[InputUnit.scala 85:18]
  `else
  assign mem_head_qs_2_io_enq_bits_MPORT_data = mem_head_qs_2_io_enq_bits_MPORT_addr >= 5'h14 ? _RAND_3[0:0] :
    mem_head[mem_head_qs_2_io_enq_bits_MPORT_addr]; // @[InputUnit.scala 85:18]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign mem_head_qs_3_io_enq_bits_MPORT_en = _T_9 & to_q_oh_3;
  assign mem_head_qs_3_io_enq_bits_MPORT_addr = _head_T_5 | _head_T_3;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign mem_head_qs_3_io_enq_bits_MPORT_data = mem_head[mem_head_qs_3_io_enq_bits_MPORT_addr]; // @[InputUnit.scala 85:18]
  `else
  assign mem_head_qs_3_io_enq_bits_MPORT_data = mem_head_qs_3_io_enq_bits_MPORT_addr >= 5'h14 ? _RAND_4[0:0] :
    mem_head[mem_head_qs_3_io_enq_bits_MPORT_addr]; // @[InputUnit.scala 85:18]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign mem_head_MPORT_data = io_enq_0_bits_head;
  assign mem_head_MPORT_addr = 2'h3 == io_enq_0_bits_virt_channel_id ? tails_3 : _GEN_2;
  assign mem_head_MPORT_mask = 1'h1;
  assign mem_head_MPORT_en = io_enq_0_valid & _T;
  assign mem_tail_qs_0_io_enq_bits_MPORT_en = _T_9 & to_q_oh_0;
  assign mem_tail_qs_0_io_enq_bits_MPORT_addr = _head_T_5 | _head_T_3;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign mem_tail_qs_0_io_enq_bits_MPORT_data = mem_tail[mem_tail_qs_0_io_enq_bits_MPORT_addr]; // @[InputUnit.scala 85:18]
  `else
  assign mem_tail_qs_0_io_enq_bits_MPORT_data = mem_tail_qs_0_io_enq_bits_MPORT_addr >= 5'h14 ? _RAND_6[0:0] :
    mem_tail[mem_tail_qs_0_io_enq_bits_MPORT_addr]; // @[InputUnit.scala 85:18]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign mem_tail_qs_1_io_enq_bits_MPORT_en = _T_9 & to_q_oh_1;
  assign mem_tail_qs_1_io_enq_bits_MPORT_addr = _head_T_5 | _head_T_3;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign mem_tail_qs_1_io_enq_bits_MPORT_data = mem_tail[mem_tail_qs_1_io_enq_bits_MPORT_addr]; // @[InputUnit.scala 85:18]
  `else
  assign mem_tail_qs_1_io_enq_bits_MPORT_data = mem_tail_qs_1_io_enq_bits_MPORT_addr >= 5'h14 ? _RAND_7[0:0] :
    mem_tail[mem_tail_qs_1_io_enq_bits_MPORT_addr]; // @[InputUnit.scala 85:18]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign mem_tail_qs_2_io_enq_bits_MPORT_en = _T_9 & to_q_oh_2;
  assign mem_tail_qs_2_io_enq_bits_MPORT_addr = _head_T_5 | _head_T_3;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign mem_tail_qs_2_io_enq_bits_MPORT_data = mem_tail[mem_tail_qs_2_io_enq_bits_MPORT_addr]; // @[InputUnit.scala 85:18]
  `else
  assign mem_tail_qs_2_io_enq_bits_MPORT_data = mem_tail_qs_2_io_enq_bits_MPORT_addr >= 5'h14 ? _RAND_8[0:0] :
    mem_tail[mem_tail_qs_2_io_enq_bits_MPORT_addr]; // @[InputUnit.scala 85:18]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign mem_tail_qs_3_io_enq_bits_MPORT_en = _T_9 & to_q_oh_3;
  assign mem_tail_qs_3_io_enq_bits_MPORT_addr = _head_T_5 | _head_T_3;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign mem_tail_qs_3_io_enq_bits_MPORT_data = mem_tail[mem_tail_qs_3_io_enq_bits_MPORT_addr]; // @[InputUnit.scala 85:18]
  `else
  assign mem_tail_qs_3_io_enq_bits_MPORT_data = mem_tail_qs_3_io_enq_bits_MPORT_addr >= 5'h14 ? _RAND_9[0:0] :
    mem_tail[mem_tail_qs_3_io_enq_bits_MPORT_addr]; // @[InputUnit.scala 85:18]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign mem_tail_MPORT_data = io_enq_0_bits_tail;
  assign mem_tail_MPORT_addr = 2'h3 == io_enq_0_bits_virt_channel_id ? tails_3 : _GEN_2;
  assign mem_tail_MPORT_mask = 1'h1;
  assign mem_tail_MPORT_en = io_enq_0_valid & _T;
  assign mem_payload_qs_0_io_enq_bits_MPORT_en = _T_9 & to_q_oh_0;
  assign mem_payload_qs_0_io_enq_bits_MPORT_addr = _head_T_5 | _head_T_3;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign mem_payload_qs_0_io_enq_bits_MPORT_data = mem_payload[mem_payload_qs_0_io_enq_bits_MPORT_addr]; // @[InputUnit.scala 85:18]
  `else
  assign mem_payload_qs_0_io_enq_bits_MPORT_data = mem_payload_qs_0_io_enq_bits_MPORT_addr >= 5'h14 ? _RAND_11[19:0] :
    mem_payload[mem_payload_qs_0_io_enq_bits_MPORT_addr]; // @[InputUnit.scala 85:18]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign mem_payload_qs_1_io_enq_bits_MPORT_en = _T_9 & to_q_oh_1;
  assign mem_payload_qs_1_io_enq_bits_MPORT_addr = _head_T_5 | _head_T_3;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign mem_payload_qs_1_io_enq_bits_MPORT_data = mem_payload[mem_payload_qs_1_io_enq_bits_MPORT_addr]; // @[InputUnit.scala 85:18]
  `else
  assign mem_payload_qs_1_io_enq_bits_MPORT_data = mem_payload_qs_1_io_enq_bits_MPORT_addr >= 5'h14 ? _RAND_12[19:0] :
    mem_payload[mem_payload_qs_1_io_enq_bits_MPORT_addr]; // @[InputUnit.scala 85:18]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign mem_payload_qs_2_io_enq_bits_MPORT_en = _T_9 & to_q_oh_2;
  assign mem_payload_qs_2_io_enq_bits_MPORT_addr = _head_T_5 | _head_T_3;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign mem_payload_qs_2_io_enq_bits_MPORT_data = mem_payload[mem_payload_qs_2_io_enq_bits_MPORT_addr]; // @[InputUnit.scala 85:18]
  `else
  assign mem_payload_qs_2_io_enq_bits_MPORT_data = mem_payload_qs_2_io_enq_bits_MPORT_addr >= 5'h14 ? _RAND_13[19:0] :
    mem_payload[mem_payload_qs_2_io_enq_bits_MPORT_addr]; // @[InputUnit.scala 85:18]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign mem_payload_qs_3_io_enq_bits_MPORT_en = _T_9 & to_q_oh_3;
  assign mem_payload_qs_3_io_enq_bits_MPORT_addr = _head_T_5 | _head_T_3;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign mem_payload_qs_3_io_enq_bits_MPORT_data = mem_payload[mem_payload_qs_3_io_enq_bits_MPORT_addr]; // @[InputUnit.scala 85:18]
  `else
  assign mem_payload_qs_3_io_enq_bits_MPORT_data = mem_payload_qs_3_io_enq_bits_MPORT_addr >= 5'h14 ? _RAND_14[19:0] :
    mem_payload[mem_payload_qs_3_io_enq_bits_MPORT_addr]; // @[InputUnit.scala 85:18]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign mem_payload_MPORT_data = io_enq_0_bits_payload;
  assign mem_payload_MPORT_addr = 2'h3 == io_enq_0_bits_virt_channel_id ? tails_3 : _GEN_2;
  assign mem_payload_MPORT_mask = 1'h1;
  assign mem_payload_MPORT_en = io_enq_0_valid & _T;
  assign io_deq_0_valid = qs_0_io_deq_valid; // @[InputUnit.scala 134:19]
  assign io_deq_0_bits_head = qs_0_io_deq_bits_head; // @[InputUnit.scala 134:19]
  assign io_deq_0_bits_tail = qs_0_io_deq_bits_tail; // @[InputUnit.scala 134:19]
  assign io_deq_0_bits_payload = qs_0_io_deq_bits_payload; // @[InputUnit.scala 134:19]
  assign io_deq_1_valid = qs_1_io_deq_valid; // @[InputUnit.scala 134:19]
  assign io_deq_1_bits_head = qs_1_io_deq_bits_head; // @[InputUnit.scala 134:19]
  assign io_deq_1_bits_tail = qs_1_io_deq_bits_tail; // @[InputUnit.scala 134:19]
  assign io_deq_1_bits_payload = qs_1_io_deq_bits_payload; // @[InputUnit.scala 134:19]
  assign io_deq_2_valid = qs_2_io_deq_valid; // @[InputUnit.scala 134:19]
  assign io_deq_2_bits_head = qs_2_io_deq_bits_head; // @[InputUnit.scala 134:19]
  assign io_deq_2_bits_tail = qs_2_io_deq_bits_tail; // @[InputUnit.scala 134:19]
  assign io_deq_2_bits_payload = qs_2_io_deq_bits_payload; // @[InputUnit.scala 134:19]
  assign io_deq_3_valid = qs_3_io_deq_valid; // @[InputUnit.scala 134:19]
  assign io_deq_3_bits_head = qs_3_io_deq_bits_head; // @[InputUnit.scala 134:19]
  assign io_deq_3_bits_tail = qs_3_io_deq_bits_tail; // @[InputUnit.scala 134:19]
  assign io_deq_3_bits_payload = qs_3_io_deq_bits_payload; // @[InputUnit.scala 134:19]
  assign qs_0_clock = clock;
  assign qs_0_reset = reset;
  assign qs_0_io_enq_valid = _T_9 ? _GEN_71 : _GEN_51; // @[InputUnit.scala 120:27]
  assign qs_0_io_enq_bits_head = _T_9 ? _GEN_77 : io_enq_0_bits_head; // @[InputUnit.scala 120:27]
  assign qs_0_io_enq_bits_tail = _T_9 ? _GEN_76 : io_enq_0_bits_tail; // @[InputUnit.scala 120:27]
  assign qs_0_io_enq_bits_payload = _T_9 ? _GEN_75 : io_enq_0_bits_payload; // @[InputUnit.scala 120:27]
  assign qs_0_io_deq_ready = io_deq_0_ready; // @[InputUnit.scala 134:19]
  assign qs_1_clock = clock;
  assign qs_1_reset = reset;
  assign qs_1_io_enq_valid = _T_9 ? _GEN_78 : _GEN_55; // @[InputUnit.scala 120:27]
  assign qs_1_io_enq_bits_head = _T_9 ? _GEN_84 : io_enq_0_bits_head; // @[InputUnit.scala 120:27]
  assign qs_1_io_enq_bits_tail = _T_9 ? _GEN_83 : io_enq_0_bits_tail; // @[InputUnit.scala 120:27]
  assign qs_1_io_enq_bits_payload = _T_9 ? _GEN_82 : io_enq_0_bits_payload; // @[InputUnit.scala 120:27]
  assign qs_1_io_deq_ready = io_deq_1_ready; // @[InputUnit.scala 134:19]
  assign qs_2_clock = clock;
  assign qs_2_reset = reset;
  assign qs_2_io_enq_valid = _T_9 ? _GEN_85 : _GEN_59; // @[InputUnit.scala 120:27]
  assign qs_2_io_enq_bits_head = _T_9 ? _GEN_91 : io_enq_0_bits_head; // @[InputUnit.scala 120:27]
  assign qs_2_io_enq_bits_tail = _T_9 ? _GEN_90 : io_enq_0_bits_tail; // @[InputUnit.scala 120:27]
  assign qs_2_io_enq_bits_payload = _T_9 ? _GEN_89 : io_enq_0_bits_payload; // @[InputUnit.scala 120:27]
  assign qs_2_io_deq_ready = io_deq_2_ready; // @[InputUnit.scala 134:19]
  assign qs_3_clock = clock;
  assign qs_3_reset = reset;
  assign qs_3_io_enq_valid = _T_9 ? _GEN_92 : _GEN_63; // @[InputUnit.scala 120:27]
  assign qs_3_io_enq_bits_head = _T_9 ? _GEN_98 : io_enq_0_bits_head; // @[InputUnit.scala 120:27]
  assign qs_3_io_enq_bits_tail = _T_9 ? _GEN_97 : io_enq_0_bits_tail; // @[InputUnit.scala 120:27]
  assign qs_3_io_enq_bits_payload = _T_9 ? _GEN_96 : io_enq_0_bits_payload; // @[InputUnit.scala 120:27]
  assign qs_3_io_deq_ready = io_deq_3_ready; // @[InputUnit.scala 134:19]
  always @(posedge clock) begin
    if (mem_head_MPORT_en & mem_head_MPORT_mask) begin
      mem_head[mem_head_MPORT_addr] <= mem_head_MPORT_data; // @[InputUnit.scala 85:18]
    end
    if (mem_tail_MPORT_en & mem_tail_MPORT_mask) begin
      mem_tail[mem_tail_MPORT_addr] <= mem_tail_MPORT_data; // @[InputUnit.scala 85:18]
    end
    if (mem_payload_MPORT_en & mem_payload_MPORT_mask) begin
      mem_payload[mem_payload_MPORT_addr] <= mem_payload_MPORT_data; // @[InputUnit.scala 85:18]
    end
    if (reset) begin // @[InputUnit.scala 86:24]
      heads_0 <= 5'h0; // @[InputUnit.scala 86:24]
    end else if (_T_9) begin // @[InputUnit.scala 120:27]
      if (2'h0 == to_q) begin // @[InputUnit.scala 122:21]
        if (_heads_T_7) begin // @[InputUnit.scala 122:27]
          heads_0 <= {{1'd0}, _heads_T_14};
        end else begin
          heads_0 <= _heads_T_16;
        end
      end
    end
    if (reset) begin // @[InputUnit.scala 86:24]
      heads_1 <= 5'h5; // @[InputUnit.scala 86:24]
    end else if (_T_9) begin // @[InputUnit.scala 120:27]
      if (2'h1 == to_q) begin // @[InputUnit.scala 122:21]
        if (_heads_T_7) begin // @[InputUnit.scala 122:27]
          heads_1 <= {{1'd0}, _heads_T_14};
        end else begin
          heads_1 <= _heads_T_16;
        end
      end
    end
    if (reset) begin // @[InputUnit.scala 86:24]
      heads_2 <= 5'ha; // @[InputUnit.scala 86:24]
    end else if (_T_9) begin // @[InputUnit.scala 120:27]
      if (2'h2 == to_q) begin // @[InputUnit.scala 122:21]
        if (_heads_T_7) begin // @[InputUnit.scala 122:27]
          heads_2 <= {{1'd0}, _heads_T_14};
        end else begin
          heads_2 <= _heads_T_16;
        end
      end
    end
    if (reset) begin // @[InputUnit.scala 86:24]
      heads_3 <= 5'hf; // @[InputUnit.scala 86:24]
    end else if (_T_9) begin // @[InputUnit.scala 120:27]
      if (2'h3 == to_q) begin // @[InputUnit.scala 122:21]
        if (_heads_T_7) begin // @[InputUnit.scala 122:27]
          heads_3 <= {{1'd0}, _heads_T_14};
        end else begin
          heads_3 <= _heads_T_16;
        end
      end
    end
    if (reset) begin // @[InputUnit.scala 87:24]
      tails_0 <= 5'h0; // @[InputUnit.scala 87:24]
    end else if (io_enq_0_valid & ~direct_to_q) begin // @[InputUnit.scala 100:44]
      if (2'h0 == io_enq_0_bits_virt_channel_id) begin // @[InputUnit.scala 103:45]
        if (_tails_T_11) begin // @[InputUnit.scala 103:51]
          tails_0 <= {{1'd0}, _tails_T_22};
        end else begin
          tails_0 <= _tails_T_24;
        end
      end
    end
    if (reset) begin // @[InputUnit.scala 87:24]
      tails_1 <= 5'h5; // @[InputUnit.scala 87:24]
    end else if (io_enq_0_valid & ~direct_to_q) begin // @[InputUnit.scala 100:44]
      if (2'h1 == io_enq_0_bits_virt_channel_id) begin // @[InputUnit.scala 103:45]
        if (_tails_T_11) begin // @[InputUnit.scala 103:51]
          tails_1 <= {{1'd0}, _tails_T_22};
        end else begin
          tails_1 <= _tails_T_24;
        end
      end
    end
    if (reset) begin // @[InputUnit.scala 87:24]
      tails_2 <= 5'ha; // @[InputUnit.scala 87:24]
    end else if (io_enq_0_valid & ~direct_to_q) begin // @[InputUnit.scala 100:44]
      if (2'h2 == io_enq_0_bits_virt_channel_id) begin // @[InputUnit.scala 103:45]
        if (_tails_T_11) begin // @[InputUnit.scala 103:51]
          tails_2 <= {{1'd0}, _tails_T_22};
        end else begin
          tails_2 <= _tails_T_24;
        end
      end
    end
    if (reset) begin // @[InputUnit.scala 87:24]
      tails_3 <= 5'hf; // @[InputUnit.scala 87:24]
    end else if (io_enq_0_valid & ~direct_to_q) begin // @[InputUnit.scala 100:44]
      if (2'h3 == io_enq_0_bits_virt_channel_id) begin // @[InputUnit.scala 103:45]
        if (_tails_T_11) begin // @[InputUnit.scala 103:51]
          tails_3 <= {{1'd0}, _tails_T_22};
        end else begin
          tails_3 <= _tails_T_24;
        end
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
`ifdef RANDOMIZE_GARBAGE_ASSIGN
  _RAND_1 = {1{`RANDOM}};
  _RAND_2 = {1{`RANDOM}};
  _RAND_3 = {1{`RANDOM}};
  _RAND_4 = {1{`RANDOM}};
  _RAND_6 = {1{`RANDOM}};
  _RAND_7 = {1{`RANDOM}};
  _RAND_8 = {1{`RANDOM}};
  _RAND_9 = {1{`RANDOM}};
  _RAND_11 = {1{`RANDOM}};
  _RAND_12 = {1{`RANDOM}};
  _RAND_13 = {1{`RANDOM}};
  _RAND_14 = {1{`RANDOM}};
`endif // RANDOMIZE_GARBAGE_ASSIGN
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 20; initvar = initvar+1)
    mem_head[initvar] = _RAND_0[0:0];
  _RAND_5 = {1{`RANDOM}};
  for (initvar = 0; initvar < 20; initvar = initvar+1)
    mem_tail[initvar] = _RAND_5[0:0];
  _RAND_10 = {1{`RANDOM}};
  for (initvar = 0; initvar < 20; initvar = initvar+1)
    mem_payload[initvar] = _RAND_10[19:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  heads_0 = _RAND_15[4:0];
  _RAND_16 = {1{`RANDOM}};
  heads_1 = _RAND_16[4:0];
  _RAND_17 = {1{`RANDOM}};
  heads_2 = _RAND_17[4:0];
  _RAND_18 = {1{`RANDOM}};
  heads_3 = _RAND_18[4:0];
  _RAND_19 = {1{`RANDOM}};
  tails_0 = _RAND_19[4:0];
  _RAND_20 = {1{`RANDOM}};
  tails_1 = _RAND_20[4:0];
  _RAND_21 = {1{`RANDOM}};
  tails_2 = _RAND_21[4:0];
  _RAND_22 = {1{`RANDOM}};
  tails_3 = _RAND_22[4:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule