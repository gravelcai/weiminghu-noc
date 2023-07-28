module NoC_Wrapper(
  input clk,
  input rst,
//XP_0 to RN_Wrapper
  //AW Interface
  output         xp0_rn_aw_ready,
  input          xp0_rn_aw_valid,
  input  [81:0]  xp0_rn_aw_payload,
  input  [1:0]   xp0_rn_aw_tgtid,
  //W Interface
  output         xp0_rn_w_ready,
  input          xp0_rn_w_valid,
  input          xp0_rn_w_head,
  input          xp0_rn_w_tail,
  input  [81:0]  xp0_rn_w_payload,
  input  [1:0]   xp0_rn_w_tgtid,
  //B Interface
  input          xp0_rn_b_ready,//悬空
  output         xp0_rn_b_valid,
  output [19:0]  xp0_rn_b_payload,
  output [1:0]   xp0_rn_b_srcid,
  //AR Interface
  output         xp0_rn_ar_ready,
  input          xp0_rn_ar_valid,
  input  [81:0]  xp0_rn_ar_payload,
  input  [1:0]   xp0_rn_ar_tgtid,
  //R Interface
  input          xp0_rn_r_ready,//悬空
  output         xp0_rn_r_valid,
  input          xp0_rn_r_head,
  input          xp0_rn_r_tail,
  output [81:0]  xp0_rn_r_payload,
  output [1:0]   xp0_rn_r_srcid,
//XP_1 to RN_Wrapper
  //AW Interface
  output         xp1_rn_aw_ready,
  input          xp1_rn_aw_valid,
  input  [81:0]  xp1_rn_aw_payload,
  input  [1:0]   xp1_rn_aw_tgtid,
  //W Interface
  output         xp1_rn_w_ready,
  input          xp1_rn_w_valid,
  input          xp1_rn_w_head,
  input          xp1_rn_w_tail,
  input  [81:0]  xp1_rn_w_payload,
  input  [1:0]   xp1_rn_w_tgtid,
  //B Interface
  input          xp1_rn_b_ready,//悬空
  output         xp1_rn_b_valid,
  output [19:0]  xp1_rn_b_payload,
  output [1:0]   xp1_rn_b_srcid,
  //AR Interface
  output         xp1_rn_ar_ready,
  input          xp1_rn_ar_valid,
  input  [81:0]  xp1_rn_ar_payload,
  input  [1:0]   xp1_rn_ar_tgtid,
  //R Interface
  input          xp1_rn_r_ready,//悬空
  output         xp1_rn_r_valid,
  input          xp1_rn_r_head,
  input          xp1_rn_r_tail,
  output [81:0]  xp1_rn_r_payload,
  output [1:0]   xp1_rn_r_srcid,
//XP_2 to RN_Wrapper
  //AW Interface
  output         xp2_rn_aw_ready,
  input          xp2_rn_aw_valid,
  input  [81:0]  xp2_rn_aw_payload,
  input  [1:0]   xp2_rn_aw_tgtid,
  //W Interface
  output         xp2_rn_w_ready,
  input          xp2_rn_w_valid,
  input          xp2_rn_w_head,
  input          xp2_rn_w_tail,
  input  [81:0]  xp2_rn_w_payload,
  input  [1:0]   xp2_rn_w_tgtid,
  //B Interface
  input          xp2_rn_b_ready,//悬空
  output         xp2_rn_b_valid,
  output [19:0]  xp2_rn_b_payload,
  output [1:0]   xp2_rn_b_srcid,
  //AR Interface
  output         xp2_rn_ar_ready,
  input          xp2_rn_ar_valid,
  input  [81:0]  xp2_rn_ar_payload,
  input  [1:0]   xp2_rn_ar_tgtid,
  //R Interface
  input          xp2_rn_r_ready,//悬空
  output         xp2_rn_r_valid,
  input          xp2_rn_r_head,
  input          xp2_rn_r_tail,
  output [81:0]  xp2_rn_r_payload,
  output [1:0]   xp2_rn_r_srcid,
//XP_3 to RN_Wrapper
  //AW Interface
  output         xp3_rn_aw_ready,
  input          xp3_rn_aw_valid,
  input  [81:0]  xp3_rn_aw_payload,
  input  [1:0]   xp3_rn_aw_tgtid,
  //W Interface
  output         xp3_rn_w_ready,
  input          xp3_rn_w_valid,
  input          xp3_rn_w_head,
  input          xp3_rn_w_tail,
  input  [81:0]  xp3_rn_w_payload,
  input  [1:0]   xp3_rn_w_tgtid,
  //B Interface
  input          xp3_rn_b_ready,//悬空
  output         xp3_rn_b_valid,
  output [19:0]  xp3_rn_b_payload,
  output [1:0]   xp3_rn_b_srcid,
  //AR Interface
  output         xp3_rn_ar_ready,
  input          xp3_rn_ar_valid,
  input  [81:0]  xp3_rn_ar_payload,
  input  [1:0]   xp3_rn_ar_tgtid,
  //R Interface
  input          xp3_rn_r_ready,//悬空
  output         xp3_rn_r_valid,
  input          xp3_rn_r_head,
  input          xp3_rn_r_tail,
  output [81:0]  xp3_rn_r_payload,
  output [1:0]   xp3_rn_r_srcid

//XP_0 to SN_Wrapper
  //AW Interface
  input          xp0_sn_aw_ready,//悬空
  output         xp0_sn_aw_valid,
  output  [81:0] xp0_sn_aw_payload,
  output  [1:0]  xp0_sn_aw_srcid,
  //W Interface
  input          xp0_sn_w_ready,//悬空
  output         xp0_sn_w_valid,
  output         xp0_sn_w_head,
  output         xp0_sn_w_tail,
  output  [81:0] xp0_sn_w_payload,
  output  [1:0]  xp0_sn_w_srcid,
  //B Interface
  output         xp0_sn_b_ready,
  input          xp0_sn_b_valid,
  input [19:0]   xp0_sn_b_payload,
  input [1:0]    xp0_sn_b_tgtid,
  //AR Interface
  input          xp0_sn_ar_ready,//悬空
  output         xp0_sn_ar_valid,
  output  [81:0] xp0_sn_ar_payload,
  output  [1:0]  xp0_sn_ar_srcid,
  //R Interface
  output         xp0_sn_r_ready,
  input          xp0_sn_r_valid,
  input          xp0_sn_r_head,
  input          xp0_sn_r_tail,
  input [81:0]   xp0_sn_r_payload,
  input [1:0]    xp0_sn_r_tgtid,
//XP_1 to SN_Wrapper
  //AW Interface
  input          xp1_sn_aw_ready,//悬空
  output         xp1_sn_aw_valid,
  output [81:0]  xp1_sn_aw_payload,
  output [1:0]   xp1_sn_aw_srcid,
  //W Interface
  input          xp1_sn_w_ready,//悬空
  output         xp1_sn_w_valid,
  output         xp1_sn_w_head,
  output         xp1_sn_w_tail,
  output [81:0]  xp1_sn_w_payload,
  output [1:0]   xp1_sn_w_srcid,
  //B Interface
  output         xp1_sn_b_ready,
  input          xp1_sn_b_valid,
  input  [19:0]  xp1_sn_b_payload,
  input  [1:0]   xp1_sn_b_tgtid,
  //AR Interface
  input          xp1_sn_ar_ready,//悬空
  output         xp1_sn_ar_valid,
  output [81:0]  xp1_sn_ar_payload,
  output [1:0]   xp1_sn_ar_srcid,
  //R Interface
  output         xp1_sn_r_ready,
  input          xp1_sn_r_valid,
  input          xp1_sn_r_head,
  input          xp1_sn_r_tail,
  input  [81:0]  xp1_sn_r_payload,
  input  [1:0]   xp1_sn_r_tgtid,
//XP_2 to SN_Wrapper
  //AW Interface
  input          xp2_sn_aw_ready,//悬空
  output         xp2_sn_aw_valid,
  output [81:0]  xp2_sn_aw_payload,
  output [1:0]   xp2_sn_aw_srcid,
  //W Interface
  input          xp2_sn_w_ready,//悬空
  output         xp2_sn_w_valid,
  output         xp2_sn_w_head,
  output         xp2_sn_w_tail,
  output [81:0]  xp2_sn_w_payload,
  output [1:0]   xp2_sn_w_srcid,
  //B Interface
  output         xp2_sn_b_ready,
  input          xp2_sn_b_valid,
  input  [19:0]  xp2_sn_b_payload,
  input  [1:0]   xp2_sn_b_tgtid,
  //AR Interface
  input          xp2_sn_ar_ready,//悬空
  output         xp2_sn_ar_valid,
  output [81:0]  xp2_sn_ar_payload,
  output [1:0]   xp2_sn_ar_srcid,
  //R Interface
  output         xp2_sn_r_ready,
  input          xp2_sn_r_valid,
  input          xp2_sn_r_head,
  input          xp2_sn_r_tail,
  input  [81:0]  xp2_sn_r_payload,
  input  [1:0]   xp2_sn_r_tgtid,
//XP_3 to SN_Wrapper
  //AW Interface
  input          xp3_sn_aw_ready,//悬空
  output         xp3_sn_aw_valid,
  output [81:0]  xp3_sn_aw_payload,
  output [1:0]   xp3_sn_aw_srcid,
  //W Interface
  input          xp3_sn_w_ready,//悬空
  output         xp3_sn_w_valid,
  output         xp3_sn_w_head,
  output         xp3_sn_w_tail,
  output [81:0]  xp3_sn_w_payload,
  output [1:0]   xp3_sn_w_srcid,
  //B Interface
  output         xp3_sn_b_ready,
  input          xp3_sn_b_valid,
  input  [19:0]  xp3_sn_b_payload,
  input  [1:0]   xp3_sn_b_tgtid,
  //AR Interface
  input          xp3_sn_ar_ready,//悬空
  output         xp3_sn_ar_valid,
  output [81:0]  xp3_sn_ar_payload,
  output [1:0]   xp3_sn_ar_srcid,
  //R Interface
  output         xp3_sn_r_ready,
  input          xp3_sn_r_valid,
  input          xp3_sn_r_head,
  input          xp3_sn_r_tail,
  input  [81:0]  xp3_sn_r_payload,
  input  [1:0]   xp3_sn_r_tgtid
);

//AW AR B 对应的 head 和 tail 是 valid 和 valid 信号一起拉高，但是持续时间和数据保持同步
//xp0_rn_b_ready 没有用，因为网络 egress 没有反压信号