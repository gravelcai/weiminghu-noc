// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNoCChiselTester.h for the primary calling header

#ifndef VERILATED_VNOCCHISELTESTER_INPUTGEN_H_
#define VERILATED_VNOCCHISELTESTER_INPUTGEN_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class VNoCChiselTester__Syms;

class VNoCChiselTester_InputGen final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_out_ready,0,0);
    VL_OUT8(io_out_valid,0,0);
    VL_OUT8(io_out_bits_head,0,0);
    VL_OUT8(io_out_bits_tail,0,0);
    VL_OUT8(io_out_bits_egress_id,1,0);
    VL_IN8(io_rob_ready,0,0);
    VL_IN8(io_rob_idx,6,0);
    VL_OUT8(io_fire,0,0);
    VL_OUT8(io_n_flits,3,0);
    CData/*3:0*/ __PVT__flits_left;
    CData/*3:0*/ __PVT__flits_fired;
    CData/*1:0*/ __PVT__egress;
    CData/*0:0*/ __PVT___io_fire_T;
    CData/*3:0*/ __PVT___GEN_4;
    CData/*3:0*/ __PVT___GEN_9;
    CData/*3:0*/ __PVT___flits_fired_T_1;
    CData/*3:0*/ __PVT___flits_left_T_1;
    CData/*0:0*/ __PVT__packet_remaining_prng__DOT__state_0;
    CData/*0:0*/ __PVT__packet_remaining_prng__DOT__state_1;
    CData/*0:0*/ __PVT__packet_remaining_prng__DOT__state_2;
    CData/*0:0*/ __PVT__packet_remaining_prng__DOT__state_3;
    CData/*0:0*/ __PVT__packet_remaining_prng__DOT__state_4;
    CData/*0:0*/ __PVT__packet_remaining_prng__DOT__state_5;
    CData/*0:0*/ __PVT__packet_remaining_prng__DOT__state_6;
    CData/*0:0*/ __PVT__packet_remaining_prng__DOT__state_7;
    CData/*0:0*/ __PVT__packet_remaining_prng__DOT__state_8;
    CData/*0:0*/ __PVT__packet_remaining_prng__DOT__state_9;
    CData/*0:0*/ __PVT__packet_remaining_prng__DOT__state_10;
    CData/*0:0*/ __PVT__packet_remaining_prng__DOT__state_11;
    CData/*0:0*/ __PVT__packet_remaining_prng__DOT__state_12;
    CData/*0:0*/ __PVT__packet_remaining_prng__DOT__state_13;
    CData/*0:0*/ __PVT__packet_remaining_prng__DOT__state_14;
    CData/*0:0*/ __PVT__packet_remaining_prng__DOT__state_15;
    CData/*0:0*/ __PVT__packet_remaining_prng__DOT__state_16;
    CData/*0:0*/ __PVT__packet_remaining_prng__DOT__state_17;
    CData/*0:0*/ __PVT__packet_remaining_prng__DOT__state_18;
    CData/*0:0*/ __PVT__packet_remaining_prng__DOT__state_19;
    CData/*0:0*/ __PVT__io_out_bits_egress_id_prng__DOT__state_0;
    CData/*0:0*/ __PVT__io_out_bits_egress_id_prng__DOT__state_1;
    CData/*0:0*/ __PVT__io_out_bits_egress_id_prng__DOT__state_2;
    CData/*0:0*/ __PVT__io_out_bits_egress_id_prng__DOT__state_3;
    CData/*0:0*/ __PVT__io_out_bits_egress_id_prng__DOT__state_4;
    CData/*0:0*/ __PVT__io_out_bits_egress_id_prng__DOT__state_5;
    CData/*0:0*/ __PVT__io_out_bits_egress_id_prng__DOT__state_6;
    CData/*0:0*/ __PVT__io_out_bits_egress_id_prng__DOT__state_7;
    CData/*0:0*/ __PVT__io_out_bits_egress_id_prng__DOT__state_8;
    CData/*0:0*/ __PVT__io_out_bits_egress_id_prng__DOT__state_9;
    CData/*0:0*/ __PVT__io_out_bits_egress_id_prng__DOT__state_10;
    CData/*0:0*/ __PVT__io_out_bits_egress_id_prng__DOT__state_11;
    CData/*0:0*/ __PVT__io_out_bits_egress_id_prng__DOT__state_12;
    CData/*0:0*/ __PVT__io_out_bits_egress_id_prng__DOT__state_13;
    CData/*0:0*/ __PVT__io_out_bits_egress_id_prng__DOT__state_14;
    CData/*0:0*/ __PVT__io_out_bits_egress_id_prng__DOT__state_15;
    CData/*0:0*/ __PVT__io_out_bits_egress_id_prng__DOT__state_16;
    CData/*0:0*/ __PVT__io_out_bits_egress_id_prng__DOT__state_17;
    CData/*0:0*/ __PVT__io_out_bits_egress_id_prng__DOT__state_18;
    CData/*0:0*/ __PVT__io_out_bits_egress_id_prng__DOT__state_19;
    SData/*15:0*/ __PVT__payload_rob_idx;
    VL_IN(io_tsc,31,0);
    IData/*31:0*/ __PVT__payload_tsc;
    IData/*19:0*/ __PVT___packet_remaining_T;
    VL_OUT64(io_out_bits_payload,63,0);

    // INTERNAL VARIABLES
    VNoCChiselTester__Syms* const vlSymsp;

    // CONSTRUCTORS
    VNoCChiselTester_InputGen(VNoCChiselTester__Syms* symsp, const char* name);
    ~VNoCChiselTester_InputGen();
    VL_UNCOPYABLE(VNoCChiselTester_InputGen);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
