// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNoCChiselTester.h for the primary calling header

#ifndef VERILATED_VNOCCHISELTESTER_SWITCHALLOCATOR_H_
#define VERILATED_VNOCCHISELTESTER_SWITCHALLOCATOR_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class VNoCChiselTester__Syms;

class VNoCChiselTester_SwitchAllocator final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(io_req_2_0_ready,0,0);
        VL_IN8(io_req_2_0_valid,0,0);
        VL_IN8(io_req_2_0_bits_vc_sel_2_0,0,0);
        VL_IN8(io_req_2_0_bits_vc_sel_1_0,0,0);
        VL_IN8(io_req_2_0_bits_vc_sel_1_1,0,0);
        VL_IN8(io_req_2_0_bits_vc_sel_1_2,0,0);
        VL_IN8(io_req_2_0_bits_vc_sel_1_3,0,0);
        VL_IN8(io_req_2_0_bits_vc_sel_0_0,0,0);
        VL_IN8(io_req_2_0_bits_vc_sel_0_1,0,0);
        VL_IN8(io_req_2_0_bits_vc_sel_0_2,0,0);
        VL_IN8(io_req_2_0_bits_vc_sel_0_3,0,0);
        VL_IN8(io_req_2_0_bits_tail,0,0);
        VL_OUT8(io_req_1_0_ready,0,0);
        VL_IN8(io_req_1_0_valid,0,0);
        VL_IN8(io_req_1_0_bits_vc_sel_2_0,0,0);
        VL_IN8(io_req_1_0_bits_vc_sel_1_0,0,0);
        VL_IN8(io_req_1_0_bits_vc_sel_1_1,0,0);
        VL_IN8(io_req_1_0_bits_vc_sel_1_2,0,0);
        VL_IN8(io_req_1_0_bits_vc_sel_1_3,0,0);
        VL_IN8(io_req_1_0_bits_vc_sel_0_0,0,0);
        VL_IN8(io_req_1_0_bits_vc_sel_0_1,0,0);
        VL_IN8(io_req_1_0_bits_vc_sel_0_2,0,0);
        VL_IN8(io_req_1_0_bits_vc_sel_0_3,0,0);
        VL_IN8(io_req_1_0_bits_tail,0,0);
        VL_OUT8(io_req_0_0_ready,0,0);
        VL_IN8(io_req_0_0_valid,0,0);
        VL_IN8(io_req_0_0_bits_vc_sel_2_0,0,0);
        VL_IN8(io_req_0_0_bits_vc_sel_1_0,0,0);
        VL_IN8(io_req_0_0_bits_vc_sel_1_1,0,0);
        VL_IN8(io_req_0_0_bits_vc_sel_1_2,0,0);
        VL_IN8(io_req_0_0_bits_vc_sel_1_3,0,0);
        VL_IN8(io_req_0_0_bits_vc_sel_0_0,0,0);
        VL_IN8(io_req_0_0_bits_vc_sel_0_1,0,0);
        VL_IN8(io_req_0_0_bits_vc_sel_0_2,0,0);
        VL_IN8(io_req_0_0_bits_vc_sel_0_3,0,0);
        VL_IN8(io_req_0_0_bits_tail,0,0);
        VL_OUT8(io_credit_alloc_2_0_alloc,0,0);
        VL_OUT8(io_credit_alloc_2_0_tail,0,0);
        VL_OUT8(io_credit_alloc_1_0_alloc,0,0);
        VL_OUT8(io_credit_alloc_1_1_alloc,0,0);
        VL_OUT8(io_credit_alloc_1_2_alloc,0,0);
        VL_OUT8(io_credit_alloc_1_3_alloc,0,0);
        VL_OUT8(io_credit_alloc_0_0_alloc,0,0);
        VL_OUT8(io_credit_alloc_0_1_alloc,0,0);
        VL_OUT8(io_credit_alloc_0_2_alloc,0,0);
        VL_OUT8(io_credit_alloc_0_3_alloc,0,0);
        VL_OUT8(io_switch_sel_2_0_2_0,0,0);
        VL_OUT8(io_switch_sel_2_0_1_0,0,0);
        VL_OUT8(io_switch_sel_2_0_0_0,0,0);
        VL_OUT8(io_switch_sel_1_0_2_0,0,0);
        VL_OUT8(io_switch_sel_1_0_1_0,0,0);
        VL_OUT8(io_switch_sel_1_0_0_0,0,0);
        VL_OUT8(io_switch_sel_0_0_2_0,0,0);
        VL_OUT8(io_switch_sel_0_0_1_0,0,0);
        VL_OUT8(io_switch_sel_0_0_0_0,0,0);
        CData/*0:0*/ __PVT__arbs_0_io_in_0_valid;
        CData/*0:0*/ __PVT__arbs_0_io_in_1_valid;
        CData/*0:0*/ __PVT__arbs_0_io_in_2_valid;
        CData/*2:0*/ __PVT__arbs_0_io_chosen_oh_0;
        CData/*0:0*/ __PVT__arbs_1_io_in_0_valid;
        CData/*0:0*/ __PVT__arbs_1_io_in_1_valid;
        CData/*0:0*/ __PVT__arbs_1_io_in_2_valid;
    };
    struct {
        CData/*2:0*/ __PVT__arbs_1_io_chosen_oh_0;
        CData/*0:0*/ __PVT__arbs_2_io_in_0_valid;
        CData/*0:0*/ __PVT__arbs_2_io_in_1_valid;
        CData/*0:0*/ __PVT__arbs_2_io_in_2_valid;
        CData/*0:0*/ __PVT__arbs_2_io_out_0_bits_vc_sel_2_0;
        CData/*2:0*/ __PVT__arbs_2_io_chosen_oh_0;
        CData/*2:0*/ __PVT__arbs_0__DOT__lock_0;
        CData/*2:0*/ __PVT__arbs_0__DOT__mask;
        CData/*2:0*/ __PVT__arbs_0__DOT__chosen;
        CData/*2:0*/ __PVT__arbs_0__DOT___io_out_0_valid_T;
        CData/*3:0*/ __PVT__arbs_0__DOT___GEN_9;
        CData/*2:0*/ __PVT__arbs_1__DOT__lock_0;
        CData/*2:0*/ __PVT__arbs_1__DOT__mask;
        CData/*2:0*/ __PVT__arbs_1__DOT__chosen;
        CData/*2:0*/ __PVT__arbs_1__DOT___io_out_0_valid_T;
        CData/*3:0*/ __PVT__arbs_1__DOT___GEN_9;
        CData/*2:0*/ __PVT__arbs_2__DOT__lock_0;
        CData/*2:0*/ __PVT__arbs_2__DOT__mask;
        CData/*2:0*/ __PVT__arbs_2__DOT__chosen;
        CData/*2:0*/ __PVT__arbs_2__DOT___io_out_0_valid_T;
        CData/*3:0*/ __PVT__arbs_2__DOT___GEN_9;
    };

    // INTERNAL VARIABLES
    VNoCChiselTester__Syms* const vlSymsp;

    // CONSTRUCTORS
    VNoCChiselTester_SwitchAllocator(VNoCChiselTester__Syms* symsp, const char* name);
    ~VNoCChiselTester_SwitchAllocator();
    VL_UNCOPYABLE(VNoCChiselTester_SwitchAllocator);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
