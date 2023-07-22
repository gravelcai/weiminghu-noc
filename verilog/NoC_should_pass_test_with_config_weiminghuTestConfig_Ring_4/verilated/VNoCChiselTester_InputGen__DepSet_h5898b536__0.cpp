// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNoCChiselTester.h for the primary calling header

#include "verilated.h"

#include "VNoCChiselTester_InputGen.h"
#include "VNoCChiselTester__Syms.h"

VL_INLINE_OPT void VNoCChiselTester_InputGen___sequent__TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__0(VNoCChiselTester_InputGen* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNoCChiselTester_InputGen___sequent__TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__0\n"); );
    // Init
    IData/*19:0*/ __PVT___io_out_bits_egress_id_T;
    CData/*3:0*/ __Vdly__flits_left;
    CData/*0:0*/ __Vdly__packet_remaining_prng__DOT__state_0;
    CData/*0:0*/ __Vdly__io_out_bits_egress_id_prng__DOT__state_0;
    // Body
    __Vdly__packet_remaining_prng__DOT__state_0 = vlSelf->__PVT__packet_remaining_prng__DOT__state_0;
    __Vdly__io_out_bits_egress_id_prng__DOT__state_0 
        = vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_0;
    __Vdly__flits_left = vlSelf->__PVT__flits_left;
    if (((IData)(vlSelf->io_fire) & (~ (IData)(vlSelf->io_out_bits_tail)))) {
        vlSelf->__PVT__egress = vlSelf->io_out_bits_egress_id;
        if ((0U == (IData)(vlSelf->__PVT__flits_left))) {
            vlSelf->__PVT__payload_tsc = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__tsc;
            vlSelf->__PVT__payload_rob_idx = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_rob_idx;
        }
    }
    __Vdly__packet_remaining_prng__DOT__state_0 = ((IData)(vlSymsp->TOP.reset) 
                                                   | ((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_19) 
                                                      ^ (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_16)));
    __Vdly__io_out_bits_egress_id_prng__DOT__state_0 
        = ((IData)(vlSymsp->TOP.reset) | ((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_19) 
                                          ^ (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_16)));
    if (vlSymsp->TOP.reset) {
        __Vdly__flits_left = 0U;
        vlSelf->__PVT__flits_fired = 0U;
    } else if ((0U != (IData)(vlSelf->__PVT__flits_left))) {
        if (vlSelf->__PVT___io_fire_T) {
            __Vdly__flits_left = vlSelf->__PVT___flits_left_T_1;
            vlSelf->__PVT__flits_fired = vlSelf->__PVT___flits_fired_T_1;
        } else {
            __Vdly__flits_left = vlSelf->__PVT___GEN_4;
            vlSelf->__PVT__flits_fired = vlSelf->__PVT___GEN_9;
        }
    } else {
        __Vdly__flits_left = vlSelf->__PVT___GEN_4;
        vlSelf->__PVT__flits_fired = vlSelf->__PVT___GEN_9;
    }
    vlSelf->__PVT__flits_left = __Vdly__flits_left;
    vlSelf->__PVT__packet_remaining_prng__DOT__state_19 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_18));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_19 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_18));
    vlSelf->__PVT___flits_fired_T_1 = (0xfU & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__flits_fired)));
    vlSelf->__PVT___flits_left_T_1 = (0xfU & ((IData)(vlSelf->__PVT__flits_left) 
                                              - (IData)(1U)));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_18 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_17));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_18 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_17));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_17 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_16));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_17 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_16));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_16 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_15));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_16 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_15));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_15 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_14));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_15 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_14));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_14 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_13));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_14 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_13));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_13 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_12));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_13 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_12));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_12 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_11));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_12 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_11));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_11 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_10));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_11 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_10));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_10 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_9));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_10 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_9));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_9 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_8));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_9 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_8));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_8 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_7));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_8 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_7));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_7 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_6));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_7 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_6));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_6 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_5));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_6 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_5));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_5 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_4));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_5 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_4));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_4 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_3));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_4 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_3));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_3 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_2));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_3 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_2));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_2 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_1));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_2 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_1));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_0));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_0));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_0 
        = __Vdly__packet_remaining_prng__DOT__state_0;
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_0 
        = __Vdly__io_out_bits_egress_id_prng__DOT__state_0;
    vlSelf->__PVT___packet_remaining_T = ((((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_19) 
                                            << 0x13U) 
                                           | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_18) 
                                               << 0x12U) 
                                              | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_17) 
                                                  << 0x11U) 
                                                 | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_16) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_15) 
                                                        << 0xfU) 
                                                       | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_14) 
                                                           << 0xeU) 
                                                          | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_13) 
                                                              << 0xdU) 
                                                             | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_12) 
                                                                 << 0xcU) 
                                                                | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_11) 
                                                                    << 0xbU) 
                                                                   | ((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_10) 
                                                                      << 0xaU)))))))))) 
                                          | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_9) 
                                              << 9U) 
                                             | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_8) 
                                                 << 8U) 
                                                | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_7) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_6) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_5) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_4) 
                                                             << 4U) 
                                                            | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_3) 
                                                                << 3U) 
                                                               | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_2) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_1) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_0)))))))))));
    __PVT___io_out_bits_egress_id_T = ((((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_19) 
                                         << 0x13U) 
                                        | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_18) 
                                            << 0x12U) 
                                           | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_17) 
                                               << 0x11U) 
                                              | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_16) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_15) 
                                                     << 0xfU) 
                                                    | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_14) 
                                                        << 0xeU) 
                                                       | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_13) 
                                                           << 0xdU) 
                                                          | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_12) 
                                                              << 0xcU) 
                                                             | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_11) 
                                                                 << 0xbU) 
                                                                | ((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_10) 
                                                                   << 0xaU)))))))))) 
                                       | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_9) 
                                           << 9U) | 
                                          (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_8) 
                                            << 8U) 
                                           | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_7) 
                                               << 7U) 
                                              | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_6) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_5) 
                                                     << 5U) 
                                                    | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_4) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_3) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_2) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_1) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_0)))))))))));
    if ((0U != (IData)(vlSelf->__PVT__flits_left))) {
        vlSelf->io_out_bits_tail = (1U == (IData)(vlSelf->__PVT__flits_left));
        vlSelf->io_out_bits_egress_id = vlSelf->__PVT__egress;
    } else {
        vlSelf->io_out_bits_tail = (0U == (7U & vlSelf->__PVT___packet_remaining_T));
        vlSelf->io_out_bits_egress_id = ((3U == (3U 
                                                 & __PVT___io_out_bits_egress_id_T))
                                          ? 3U : ((2U 
                                                   == 
                                                   (3U 
                                                    & __PVT___io_out_bits_egress_id_T))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & __PVT___io_out_bits_egress_id_T))
                                                    ? 1U
                                                    : 0U)));
    }
}

VL_INLINE_OPT void VNoCChiselTester_InputGen___sequent__TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__1(VNoCChiselTester_InputGen* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNoCChiselTester_InputGen___sequent__TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__1\n"); );
    // Init
    CData/*0:0*/ __PVT__can_fire;
    VlWide<4>/*127:0*/ __Vtemp_h473b37a8__0;
    // Body
    vlSelf->io_out_bits_payload = (((QData)((IData)(
                                                    ((0U 
                                                      != (IData)(vlSelf->__PVT__flits_left))
                                                      ? vlSelf->__PVT__payload_tsc
                                                      : vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__tsc))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((((0U 
                                                                    != (IData)(vlSelf->__PVT__flits_left))
                                                                    ? (IData)(vlSelf->__PVT__payload_rob_idx)
                                                                    : (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_rob_idx)) 
                                                                  << 0x10U) 
                                                                 | ((0U 
                                                                     != (IData)(vlSelf->__PVT__flits_left))
                                                                     ? (IData)(vlSelf->__PVT__flits_fired)
                                                                     : 0U)))));
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h473b37a8__0, vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids, (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0));
    __PVT__can_fire = ((0U == (IData)(vlSelf->__PVT__flits_left)) 
                       & ((((~ __Vtemp_h473b37a8__0[0U]) 
                            & (0U != ((((~ vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U]) 
                                        | (~ vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])) 
                                       | (~ vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])) 
                                      | (~ vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])))) 
                           & (0xaU <= vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__tsc)) 
                          & (0xc350U > vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__txs)));
    vlSelf->io_out_valid = ((0U != (IData)(vlSelf->__PVT__flits_left)) 
                            | (IData)(__PVT__can_fire));
    vlSelf->__PVT___io_fire_T = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q_io_enq_ready) 
                                 & (IData)(vlSelf->io_out_valid));
    vlSelf->io_fire = ((IData)(__PVT__can_fire) & (IData)(vlSelf->__PVT___io_fire_T));
    if (((IData)(vlSelf->io_fire) & (~ (IData)(vlSelf->io_out_bits_tail)))) {
        vlSelf->__PVT___GEN_9 = 1U;
        vlSelf->__PVT___GEN_4 = (7U & vlSelf->__PVT___packet_remaining_T);
    } else {
        vlSelf->__PVT___GEN_9 = vlSelf->__PVT__flits_fired;
        vlSelf->__PVT___GEN_4 = vlSelf->__PVT__flits_left;
    }
}

VL_INLINE_OPT void VNoCChiselTester_InputGen___sequent__TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_1__0(VNoCChiselTester_InputGen* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNoCChiselTester_InputGen___sequent__TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_1__0\n"); );
    // Init
    IData/*19:0*/ __PVT___io_out_bits_egress_id_T;
    CData/*3:0*/ __Vdly__flits_left;
    CData/*0:0*/ __Vdly__packet_remaining_prng__DOT__state_0;
    CData/*0:0*/ __Vdly__io_out_bits_egress_id_prng__DOT__state_0;
    // Body
    __Vdly__packet_remaining_prng__DOT__state_0 = vlSelf->__PVT__packet_remaining_prng__DOT__state_0;
    __Vdly__io_out_bits_egress_id_prng__DOT__state_0 
        = vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_0;
    __Vdly__flits_left = vlSelf->__PVT__flits_left;
    if (((IData)(vlSelf->io_fire) & (~ (IData)(vlSelf->io_out_bits_tail)))) {
        vlSelf->__PVT__egress = vlSelf->io_out_bits_egress_id;
        if ((0U == (IData)(vlSelf->__PVT__flits_left))) {
            vlSelf->__PVT__payload_tsc = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__tsc;
            vlSelf->__PVT__payload_rob_idx = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_1_io_rob_idx;
        }
    }
    __Vdly__packet_remaining_prng__DOT__state_0 = ((IData)(vlSymsp->TOP.reset) 
                                                   | ((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_19) 
                                                      ^ (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_16)));
    __Vdly__io_out_bits_egress_id_prng__DOT__state_0 
        = ((IData)(vlSymsp->TOP.reset) | ((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_19) 
                                          ^ (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_16)));
    if (vlSymsp->TOP.reset) {
        __Vdly__flits_left = 0U;
        vlSelf->__PVT__flits_fired = 0U;
    } else if ((0U != (IData)(vlSelf->__PVT__flits_left))) {
        if (vlSelf->__PVT___io_fire_T) {
            __Vdly__flits_left = vlSelf->__PVT___flits_left_T_1;
            vlSelf->__PVT__flits_fired = vlSelf->__PVT___flits_fired_T_1;
        } else {
            __Vdly__flits_left = vlSelf->__PVT___GEN_4;
            vlSelf->__PVT__flits_fired = vlSelf->__PVT___GEN_9;
        }
    } else {
        __Vdly__flits_left = vlSelf->__PVT___GEN_4;
        vlSelf->__PVT__flits_fired = vlSelf->__PVT___GEN_9;
    }
    vlSelf->__PVT__flits_left = __Vdly__flits_left;
    vlSelf->__PVT__packet_remaining_prng__DOT__state_19 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_18));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_19 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_18));
    vlSelf->__PVT___flits_fired_T_1 = (0xfU & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__flits_fired)));
    vlSelf->__PVT___flits_left_T_1 = (0xfU & ((IData)(vlSelf->__PVT__flits_left) 
                                              - (IData)(1U)));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_18 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_17));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_18 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_17));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_17 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_16));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_17 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_16));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_16 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_15));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_16 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_15));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_15 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_14));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_15 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_14));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_14 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_13));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_14 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_13));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_13 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_12));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_13 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_12));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_12 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_11));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_12 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_11));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_11 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_10));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_11 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_10));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_10 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_9));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_10 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_9));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_9 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_8));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_9 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_8));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_8 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_7));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_8 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_7));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_7 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_6));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_7 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_6));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_6 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_5));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_6 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_5));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_5 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_4));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_5 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_4));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_4 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_3));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_4 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_3));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_3 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_2));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_3 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_2));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_2 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_1));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_2 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_1));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_0));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_0));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_0 
        = __Vdly__packet_remaining_prng__DOT__state_0;
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_0 
        = __Vdly__io_out_bits_egress_id_prng__DOT__state_0;
    vlSelf->__PVT___packet_remaining_T = ((((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_19) 
                                            << 0x13U) 
                                           | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_18) 
                                               << 0x12U) 
                                              | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_17) 
                                                  << 0x11U) 
                                                 | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_16) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_15) 
                                                        << 0xfU) 
                                                       | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_14) 
                                                           << 0xeU) 
                                                          | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_13) 
                                                              << 0xdU) 
                                                             | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_12) 
                                                                 << 0xcU) 
                                                                | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_11) 
                                                                    << 0xbU) 
                                                                   | ((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_10) 
                                                                      << 0xaU)))))))))) 
                                          | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_9) 
                                              << 9U) 
                                             | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_8) 
                                                 << 8U) 
                                                | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_7) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_6) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_5) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_4) 
                                                             << 4U) 
                                                            | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_3) 
                                                                << 3U) 
                                                               | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_2) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_1) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_0)))))))))));
    __PVT___io_out_bits_egress_id_T = ((((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_19) 
                                         << 0x13U) 
                                        | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_18) 
                                            << 0x12U) 
                                           | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_17) 
                                               << 0x11U) 
                                              | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_16) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_15) 
                                                     << 0xfU) 
                                                    | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_14) 
                                                        << 0xeU) 
                                                       | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_13) 
                                                           << 0xdU) 
                                                          | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_12) 
                                                              << 0xcU) 
                                                             | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_11) 
                                                                 << 0xbU) 
                                                                | ((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_10) 
                                                                   << 0xaU)))))))))) 
                                       | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_9) 
                                           << 9U) | 
                                          (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_8) 
                                            << 8U) 
                                           | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_7) 
                                               << 7U) 
                                              | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_6) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_5) 
                                                     << 5U) 
                                                    | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_4) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_3) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_2) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_1) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_0)))))))))));
    if ((0U != (IData)(vlSelf->__PVT__flits_left))) {
        vlSelf->io_out_bits_tail = (1U == (IData)(vlSelf->__PVT__flits_left));
        vlSelf->io_out_bits_egress_id = vlSelf->__PVT__egress;
    } else {
        vlSelf->io_out_bits_tail = (0U == (7U & vlSelf->__PVT___packet_remaining_T));
        vlSelf->io_out_bits_egress_id = ((3U == (3U 
                                                 & __PVT___io_out_bits_egress_id_T))
                                          ? 3U : ((2U 
                                                   == 
                                                   (3U 
                                                    & __PVT___io_out_bits_egress_id_T))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & __PVT___io_out_bits_egress_id_T))
                                                    ? 1U
                                                    : 0U)));
    }
}

VL_INLINE_OPT void VNoCChiselTester_InputGen___sequent__TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_1__1(VNoCChiselTester_InputGen* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNoCChiselTester_InputGen___sequent__TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_1__1\n"); );
    // Init
    CData/*0:0*/ __PVT__can_fire;
    VlWide<4>/*127:0*/ __Vtemp_h2a63c711__0;
    // Body
    vlSelf->io_out_bits_payload = (((QData)((IData)(
                                                    ((0U 
                                                      != (IData)(vlSelf->__PVT__flits_left))
                                                      ? vlSelf->__PVT__payload_tsc
                                                      : vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__tsc))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((((0U 
                                                                    != (IData)(vlSelf->__PVT__flits_left))
                                                                    ? (IData)(vlSelf->__PVT__payload_rob_idx)
                                                                    : (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_1_io_rob_idx)) 
                                                                  << 0x10U) 
                                                                 | ((0U 
                                                                     != (IData)(vlSelf->__PVT__flits_left))
                                                                     ? (IData)(vlSelf->__PVT__flits_fired)
                                                                     : 0U)))));
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h2a63c711__0, vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids, (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_1));
    __PVT__can_fire = ((0U == (IData)(vlSelf->__PVT__flits_left)) 
                       & ((((~ __Vtemp_h2a63c711__0[0U]) 
                            & (0U != (((vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT___T_8[0U] 
                                        | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT___T_8[1U]) 
                                       | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT___T_8[2U]) 
                                      | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT___T_8[3U]))) 
                           & (0xaU <= vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__tsc)) 
                          & (0xc350U > vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__txs)));
    vlSelf->io_out_valid = ((0U != (IData)(vlSelf->__PVT__flits_left)) 
                            | (IData)(__PVT__can_fire));
    vlSelf->__PVT___io_fire_T = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_1_flit_q_io_enq_ready) 
                                 & (IData)(vlSelf->io_out_valid));
    vlSelf->io_fire = ((IData)(__PVT__can_fire) & (IData)(vlSelf->__PVT___io_fire_T));
    if (((IData)(vlSelf->io_fire) & (~ (IData)(vlSelf->io_out_bits_tail)))) {
        vlSelf->__PVT___GEN_9 = 1U;
        vlSelf->__PVT___GEN_4 = (7U & vlSelf->__PVT___packet_remaining_T);
    } else {
        vlSelf->__PVT___GEN_9 = vlSelf->__PVT__flits_fired;
        vlSelf->__PVT___GEN_4 = vlSelf->__PVT__flits_left;
    }
}

VL_INLINE_OPT void VNoCChiselTester_InputGen___sequent__TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_2__0(VNoCChiselTester_InputGen* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNoCChiselTester_InputGen___sequent__TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_2__0\n"); );
    // Init
    IData/*19:0*/ __PVT___io_out_bits_egress_id_T;
    CData/*3:0*/ __Vdly__flits_left;
    CData/*0:0*/ __Vdly__packet_remaining_prng__DOT__state_0;
    CData/*0:0*/ __Vdly__io_out_bits_egress_id_prng__DOT__state_0;
    // Body
    __Vdly__packet_remaining_prng__DOT__state_0 = vlSelf->__PVT__packet_remaining_prng__DOT__state_0;
    __Vdly__io_out_bits_egress_id_prng__DOT__state_0 
        = vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_0;
    __Vdly__flits_left = vlSelf->__PVT__flits_left;
    if (((IData)(vlSelf->io_fire) & (~ (IData)(vlSelf->io_out_bits_tail)))) {
        vlSelf->__PVT__egress = vlSelf->io_out_bits_egress_id;
        if ((0U == (IData)(vlSelf->__PVT__flits_left))) {
            vlSelf->__PVT__payload_tsc = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__tsc;
            vlSelf->__PVT__payload_rob_idx = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_2_io_rob_idx;
        }
    }
    __Vdly__packet_remaining_prng__DOT__state_0 = ((IData)(vlSymsp->TOP.reset) 
                                                   | ((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_19) 
                                                      ^ (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_16)));
    __Vdly__io_out_bits_egress_id_prng__DOT__state_0 
        = ((IData)(vlSymsp->TOP.reset) | ((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_19) 
                                          ^ (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_16)));
    if (vlSymsp->TOP.reset) {
        __Vdly__flits_left = 0U;
        vlSelf->__PVT__flits_fired = 0U;
    } else if ((0U != (IData)(vlSelf->__PVT__flits_left))) {
        if (vlSelf->__PVT___io_fire_T) {
            __Vdly__flits_left = vlSelf->__PVT___flits_left_T_1;
            vlSelf->__PVT__flits_fired = vlSelf->__PVT___flits_fired_T_1;
        } else {
            __Vdly__flits_left = vlSelf->__PVT___GEN_4;
            vlSelf->__PVT__flits_fired = vlSelf->__PVT___GEN_9;
        }
    } else {
        __Vdly__flits_left = vlSelf->__PVT___GEN_4;
        vlSelf->__PVT__flits_fired = vlSelf->__PVT___GEN_9;
    }
    vlSelf->__PVT__flits_left = __Vdly__flits_left;
    vlSelf->__PVT__packet_remaining_prng__DOT__state_19 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_18));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_19 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_18));
    vlSelf->__PVT___flits_fired_T_1 = (0xfU & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__flits_fired)));
    vlSelf->__PVT___flits_left_T_1 = (0xfU & ((IData)(vlSelf->__PVT__flits_left) 
                                              - (IData)(1U)));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_18 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_17));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_18 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_17));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_17 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_16));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_17 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_16));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_16 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_15));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_16 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_15));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_15 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_14));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_15 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_14));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_14 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_13));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_14 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_13));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_13 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_12));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_13 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_12));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_12 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_11));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_12 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_11));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_11 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_10));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_11 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_10));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_10 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_9));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_10 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_9));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_9 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_8));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_9 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_8));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_8 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_7));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_8 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_7));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_7 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_6));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_7 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_6));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_6 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_5));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_6 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_5));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_5 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_4));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_5 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_4));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_4 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_3));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_4 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_3));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_3 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_2));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_3 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_2));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_2 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_1));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_2 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_1));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_0));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_0));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_0 
        = __Vdly__packet_remaining_prng__DOT__state_0;
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_0 
        = __Vdly__io_out_bits_egress_id_prng__DOT__state_0;
    vlSelf->__PVT___packet_remaining_T = ((((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_19) 
                                            << 0x13U) 
                                           | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_18) 
                                               << 0x12U) 
                                              | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_17) 
                                                  << 0x11U) 
                                                 | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_16) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_15) 
                                                        << 0xfU) 
                                                       | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_14) 
                                                           << 0xeU) 
                                                          | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_13) 
                                                              << 0xdU) 
                                                             | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_12) 
                                                                 << 0xcU) 
                                                                | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_11) 
                                                                    << 0xbU) 
                                                                   | ((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_10) 
                                                                      << 0xaU)))))))))) 
                                          | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_9) 
                                              << 9U) 
                                             | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_8) 
                                                 << 8U) 
                                                | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_7) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_6) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_5) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_4) 
                                                             << 4U) 
                                                            | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_3) 
                                                                << 3U) 
                                                               | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_2) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_1) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_0)))))))))));
    __PVT___io_out_bits_egress_id_T = ((((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_19) 
                                         << 0x13U) 
                                        | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_18) 
                                            << 0x12U) 
                                           | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_17) 
                                               << 0x11U) 
                                              | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_16) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_15) 
                                                     << 0xfU) 
                                                    | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_14) 
                                                        << 0xeU) 
                                                       | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_13) 
                                                           << 0xdU) 
                                                          | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_12) 
                                                              << 0xcU) 
                                                             | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_11) 
                                                                 << 0xbU) 
                                                                | ((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_10) 
                                                                   << 0xaU)))))))))) 
                                       | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_9) 
                                           << 9U) | 
                                          (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_8) 
                                            << 8U) 
                                           | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_7) 
                                               << 7U) 
                                              | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_6) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_5) 
                                                     << 5U) 
                                                    | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_4) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_3) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_2) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_1) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_0)))))))))));
    if ((0U != (IData)(vlSelf->__PVT__flits_left))) {
        vlSelf->io_out_bits_tail = (1U == (IData)(vlSelf->__PVT__flits_left));
        vlSelf->io_out_bits_egress_id = vlSelf->__PVT__egress;
    } else {
        vlSelf->io_out_bits_tail = (0U == (7U & vlSelf->__PVT___packet_remaining_T));
        vlSelf->io_out_bits_egress_id = ((3U == (3U 
                                                 & __PVT___io_out_bits_egress_id_T))
                                          ? 3U : ((2U 
                                                   == 
                                                   (3U 
                                                    & __PVT___io_out_bits_egress_id_T))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & __PVT___io_out_bits_egress_id_T))
                                                    ? 1U
                                                    : 0U)));
    }
}

VL_INLINE_OPT void VNoCChiselTester_InputGen___sequent__TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_2__1(VNoCChiselTester_InputGen* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNoCChiselTester_InputGen___sequent__TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_2__1\n"); );
    // Init
    CData/*0:0*/ __PVT__can_fire;
    VlWide<4>/*127:0*/ __Vtemp_h46dccb0f__0;
    // Body
    vlSelf->io_out_bits_payload = (((QData)((IData)(
                                                    ((0U 
                                                      != (IData)(vlSelf->__PVT__flits_left))
                                                      ? vlSelf->__PVT__payload_tsc
                                                      : vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__tsc))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((((0U 
                                                                    != (IData)(vlSelf->__PVT__flits_left))
                                                                    ? (IData)(vlSelf->__PVT__payload_rob_idx)
                                                                    : (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_2_io_rob_idx)) 
                                                                  << 0x10U) 
                                                                 | ((0U 
                                                                     != (IData)(vlSelf->__PVT__flits_left))
                                                                     ? (IData)(vlSelf->__PVT__flits_fired)
                                                                     : 0U)))));
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h46dccb0f__0, vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids, (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_2));
    __PVT__can_fire = ((0U == (IData)(vlSelf->__PVT__flits_left)) 
                       & ((((~ __Vtemp_h46dccb0f__0[0U]) 
                            & (0U != (((vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT___T_11[0U] 
                                        | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT___T_11[1U]) 
                                       | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT___T_11[2U]) 
                                      | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT___T_11[3U]))) 
                           & (0xaU <= vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__tsc)) 
                          & (0xc350U > vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__txs)));
    vlSelf->io_out_valid = ((0U != (IData)(vlSelf->__PVT__flits_left)) 
                            | (IData)(__PVT__can_fire));
    vlSelf->__PVT___io_fire_T = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_2_flit_q_io_enq_ready) 
                                 & (IData)(vlSelf->io_out_valid));
    vlSelf->io_fire = ((IData)(__PVT__can_fire) & (IData)(vlSelf->__PVT___io_fire_T));
    if (((IData)(vlSelf->io_fire) & (~ (IData)(vlSelf->io_out_bits_tail)))) {
        vlSelf->__PVT___GEN_9 = 1U;
        vlSelf->__PVT___GEN_4 = (7U & vlSelf->__PVT___packet_remaining_T);
    } else {
        vlSelf->__PVT___GEN_9 = vlSelf->__PVT__flits_fired;
        vlSelf->__PVT___GEN_4 = vlSelf->__PVT__flits_left;
    }
}

VL_INLINE_OPT void VNoCChiselTester_InputGen___sequent__TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_3__0(VNoCChiselTester_InputGen* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNoCChiselTester_InputGen___sequent__TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_3__0\n"); );
    // Init
    IData/*19:0*/ __PVT___io_out_bits_egress_id_T;
    CData/*3:0*/ __Vdly__flits_left;
    CData/*0:0*/ __Vdly__packet_remaining_prng__DOT__state_0;
    CData/*0:0*/ __Vdly__io_out_bits_egress_id_prng__DOT__state_0;
    // Body
    __Vdly__packet_remaining_prng__DOT__state_0 = vlSelf->__PVT__packet_remaining_prng__DOT__state_0;
    __Vdly__io_out_bits_egress_id_prng__DOT__state_0 
        = vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_0;
    __Vdly__flits_left = vlSelf->__PVT__flits_left;
    __Vdly__packet_remaining_prng__DOT__state_0 = ((IData)(vlSymsp->TOP.reset) 
                                                   | ((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_19) 
                                                      ^ (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_16)));
    if (((IData)(vlSelf->io_fire) & (~ (IData)(vlSelf->io_out_bits_tail)))) {
        vlSelf->__PVT__egress = vlSelf->io_out_bits_egress_id;
        if ((0U == (IData)(vlSelf->__PVT__flits_left))) {
            vlSelf->__PVT__payload_tsc = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__tsc;
            vlSelf->__PVT__payload_rob_idx = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_3_io_rob_idx;
        }
    }
    __Vdly__io_out_bits_egress_id_prng__DOT__state_0 
        = ((IData)(vlSymsp->TOP.reset) | ((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_19) 
                                          ^ (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_16)));
    if (vlSymsp->TOP.reset) {
        __Vdly__flits_left = 0U;
        vlSelf->__PVT__flits_fired = 0U;
    } else if ((0U != (IData)(vlSelf->__PVT__flits_left))) {
        if (vlSelf->__PVT___io_fire_T) {
            __Vdly__flits_left = vlSelf->__PVT___flits_left_T_1;
            vlSelf->__PVT__flits_fired = vlSelf->__PVT___flits_fired_T_1;
        } else {
            __Vdly__flits_left = vlSelf->__PVT___GEN_4;
            vlSelf->__PVT__flits_fired = vlSelf->__PVT___GEN_9;
        }
    } else {
        __Vdly__flits_left = vlSelf->__PVT___GEN_4;
        vlSelf->__PVT__flits_fired = vlSelf->__PVT___GEN_9;
    }
    vlSelf->__PVT__flits_left = __Vdly__flits_left;
    vlSelf->__PVT__packet_remaining_prng__DOT__state_19 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_18));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_19 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_18));
    vlSelf->__PVT___flits_fired_T_1 = (0xfU & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__flits_fired)));
    vlSelf->__PVT___flits_left_T_1 = (0xfU & ((IData)(vlSelf->__PVT__flits_left) 
                                              - (IData)(1U)));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_18 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_17));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_18 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_17));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_17 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_16));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_17 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_16));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_16 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_15));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_16 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_15));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_15 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_14));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_15 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_14));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_14 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_13));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_14 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_13));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_13 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_12));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_13 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_12));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_12 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_11));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_12 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_11));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_11 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_10));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_11 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_10));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_10 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_9));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_10 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_9));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_9 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_8));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_9 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_8));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_8 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_7));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_8 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_7));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_7 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_6));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_7 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_6));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_6 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_5));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_6 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_5));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_5 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_4));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_5 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_4));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_4 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_3));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_4 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_3));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_3 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_2));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_3 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_2));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_2 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_1));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_2 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_1));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_0));
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_0));
    vlSelf->__PVT__packet_remaining_prng__DOT__state_0 
        = __Vdly__packet_remaining_prng__DOT__state_0;
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_0 
        = __Vdly__io_out_bits_egress_id_prng__DOT__state_0;
    vlSelf->__PVT___packet_remaining_T = ((((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_19) 
                                            << 0x13U) 
                                           | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_18) 
                                               << 0x12U) 
                                              | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_17) 
                                                  << 0x11U) 
                                                 | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_16) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_15) 
                                                        << 0xfU) 
                                                       | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_14) 
                                                           << 0xeU) 
                                                          | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_13) 
                                                              << 0xdU) 
                                                             | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_12) 
                                                                 << 0xcU) 
                                                                | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_11) 
                                                                    << 0xbU) 
                                                                   | ((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_10) 
                                                                      << 0xaU)))))))))) 
                                          | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_9) 
                                              << 9U) 
                                             | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_8) 
                                                 << 8U) 
                                                | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_7) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_6) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_5) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_4) 
                                                             << 4U) 
                                                            | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_3) 
                                                                << 3U) 
                                                               | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_2) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_1) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->__PVT__packet_remaining_prng__DOT__state_0)))))))))));
    __PVT___io_out_bits_egress_id_T = ((((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_19) 
                                         << 0x13U) 
                                        | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_18) 
                                            << 0x12U) 
                                           | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_17) 
                                               << 0x11U) 
                                              | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_16) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_15) 
                                                     << 0xfU) 
                                                    | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_14) 
                                                        << 0xeU) 
                                                       | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_13) 
                                                           << 0xdU) 
                                                          | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_12) 
                                                              << 0xcU) 
                                                             | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_11) 
                                                                 << 0xbU) 
                                                                | ((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_10) 
                                                                   << 0xaU)))))))))) 
                                       | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_9) 
                                           << 9U) | 
                                          (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_8) 
                                            << 8U) 
                                           | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_7) 
                                               << 7U) 
                                              | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_6) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_5) 
                                                     << 5U) 
                                                    | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_4) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_3) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_2) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_1) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_0)))))))))));
    if ((0U != (IData)(vlSelf->__PVT__flits_left))) {
        vlSelf->io_out_bits_tail = (1U == (IData)(vlSelf->__PVT__flits_left));
        vlSelf->io_out_bits_egress_id = vlSelf->__PVT__egress;
    } else {
        vlSelf->io_out_bits_tail = (0U == (7U & vlSelf->__PVT___packet_remaining_T));
        vlSelf->io_out_bits_egress_id = ((3U == (3U 
                                                 & __PVT___io_out_bits_egress_id_T))
                                          ? 3U : ((2U 
                                                   == 
                                                   (3U 
                                                    & __PVT___io_out_bits_egress_id_T))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & __PVT___io_out_bits_egress_id_T))
                                                    ? 1U
                                                    : 0U)));
    }
}

VL_INLINE_OPT void VNoCChiselTester_InputGen___sequent__TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_3__1(VNoCChiselTester_InputGen* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNoCChiselTester_InputGen___sequent__TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_3__1\n"); );
    // Init
    CData/*0:0*/ __PVT__can_fire;
    VlWide<4>/*127:0*/ __Vtemp_h659adb4f__0;
    // Body
    vlSelf->io_out_bits_payload = (((QData)((IData)(
                                                    ((0U 
                                                      != (IData)(vlSelf->__PVT__flits_left))
                                                      ? vlSelf->__PVT__payload_tsc
                                                      : vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__tsc))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((((0U 
                                                                    != (IData)(vlSelf->__PVT__flits_left))
                                                                    ? (IData)(vlSelf->__PVT__payload_rob_idx)
                                                                    : (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_3_io_rob_idx)) 
                                                                  << 0x10U) 
                                                                 | ((0U 
                                                                     != (IData)(vlSelf->__PVT__flits_left))
                                                                     ? (IData)(vlSelf->__PVT__flits_fired)
                                                                     : 0U)))));
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h659adb4f__0, vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids, (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_3));
    __PVT__can_fire = ((0U == (IData)(vlSelf->__PVT__flits_left)) 
                       & ((((~ __Vtemp_h659adb4f__0[0U]) 
                            & (0U != (((vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT___T_14[0U] 
                                        | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT___T_14[1U]) 
                                       | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT___T_14[2U]) 
                                      | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT___T_14[3U]))) 
                           & (0xaU <= vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__tsc)) 
                          & (0xc350U > vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__txs)));
    vlSelf->io_out_valid = ((0U != (IData)(vlSelf->__PVT__flits_left)) 
                            | (IData)(__PVT__can_fire));
    vlSelf->__PVT___io_fire_T = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_3_flit_q_io_enq_ready) 
                                 & (IData)(vlSelf->io_out_valid));
    vlSelf->io_fire = ((IData)(__PVT__can_fire) & (IData)(vlSelf->__PVT___io_fire_T));
    if (((IData)(vlSelf->io_fire) & (~ (IData)(vlSelf->io_out_bits_tail)))) {
        vlSelf->__PVT___GEN_9 = 1U;
        vlSelf->__PVT___GEN_4 = (7U & vlSelf->__PVT___packet_remaining_T);
    } else {
        vlSelf->__PVT___GEN_9 = vlSelf->__PVT__flits_fired;
        vlSelf->__PVT___GEN_4 = vlSelf->__PVT__flits_left;
    }
}
