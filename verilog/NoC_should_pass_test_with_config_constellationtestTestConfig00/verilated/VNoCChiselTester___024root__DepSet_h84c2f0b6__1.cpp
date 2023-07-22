// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNoCChiselTester.h for the primary calling header

#include "verilated.h"

#include "VNoCChiselTester___024root.h"

extern const VlWide<2048>/*65535:0*/ VNoCChiselTester__ConstPool__CONST_hb37f0dc1_0;

VL_INLINE_OPT void VNoCChiselTester___024root___combo__TOP__0(VNoCChiselTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoCChiselTester___024root___combo__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h09f8ce42__0;
    VlWide<2048>/*65535:0*/ __Vtemp_h731c81e5__0;
    VlWide<2048>/*65535:0*/ __Vtemp_haeff035b__0;
    VlWide<2048>/*65535:0*/ __Vtemp_h1a7401a7__0;
    VlWide<2048>/*65535:0*/ __Vtemp_h5126d7da__0;
    // Body
    __Vtemp_h09f8ce42__0[0U] = (vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U] 
                                | vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_allocs[0U]);
    __Vtemp_h09f8ce42__0[1U] = (vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U] 
                                | vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_allocs[1U]);
    __Vtemp_h09f8ce42__0[2U] = (vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U] 
                                | vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_allocs[2U]);
    __Vtemp_h09f8ce42__0[3U] = (vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U] 
                                | vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_allocs[3U]);
    VL_EXTEND_WW(65536,128, __Vtemp_h731c81e5__0, __Vtemp_h09f8ce42__0);
    VL_NOT_W(2048, __Vtemp_haeff035b__0, vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_frees);
    VL_AND_W(2048, __Vtemp_h1a7401a7__0, __Vtemp_h731c81e5__0, __Vtemp_haeff035b__0);
    if (vlSelf->reset) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_36 = 0U;
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT___GEN_4 = 0U;
        VL_ASSIGN_W(65536,__Vtemp_h5126d7da__0, VNoCChiselTester__ConstPool__CONST_hb37f0dc1_0);
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT___GEN_4 = 0U;
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___GEN_9 = 0U;
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_24 = 3U;
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_25 = 3U;
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_26 = 3U;
    } else {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_36 
            = (0xfU & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_valid)
                        ? (((IData)(1U) << (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_bits_src_virt_id)) 
                           - (IData)(1U)) : ((((2U 
                                                == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_0_g)) 
                                               | (2U 
                                                  == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_1_g))) 
                                              | (2U 
                                                 == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_2_g)))
                                              ? (((1U 
                                                   & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__vcalloc_sel)) 
                                                  | ((2U 
                                                      & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__vcalloc_sel))
                                                      ? 3U
                                                      : 0U)) 
                                                 | ((4U 
                                                     & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__vcalloc_sel))
                                                     ? 7U
                                                     : 0U))
                                              : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__mask))));
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT___GEN_4 
            = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_out_0_valid)
                ? (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_chosen_oh_0)
                : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__mask)
                    ? 0U : (1U | ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__mask) 
                                  << 1U))));
        VL_ASSIGN_W(65536,__Vtemp_h5126d7da__0, __Vtemp_h1a7401a7__0);
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT___GEN_4 
            = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_out_0_valid)
                ? (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_chosen_oh_0)
                : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__mask)
                    ? 0U : (1U | ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__mask) 
                                  << 1U))));
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___GEN_9 
            = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___T_13)
                ? (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_chosen_oh_0) 
                    | (3U & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_chosen_oh_0) 
                             >> 1U))) | (1U & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_chosen_oh_0) 
                                               >> 2U)))
                : ((0U == (7U & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__mask))))
                    ? 0U : (1U | ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__mask) 
                                  << 1U))));
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_24 
            = (7U & (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT__states_0_c) 
                      + (1U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0_io_in_credit_return))) 
                     - ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_out_0_valid) 
                        & vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q__DOT__ram_vc_sel_0_0
                        [0U])));
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_25 
            = (7U & (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT__states_1_c) 
                      + (1U & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0_io_in_credit_return) 
                               >> 1U))) - ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_out_0_valid) 
                                           & vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q__DOT__ram_vc_sel_0_1
                                           [0U])));
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_26 
            = (7U & (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT__states_2_c) 
                      + (1U & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0_io_in_credit_return) 
                               >> 2U))) - ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_out_0_valid) 
                                           & vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q__DOT__ram_vc_sel_0_2
                                           [0U])));
    }
    VL_ASSIGN_W(65536,vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_517, __Vtemp_h5126d7da__0);
}

void VNoCChiselTester___024root___sequent__TOP__1(VNoCChiselTester___024root* vlSelf);
void VNoCChiselTester___024root___sequent__TOP__2(VNoCChiselTester___024root* vlSelf);

void VNoCChiselTester___024root___eval(VNoCChiselTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoCChiselTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VNoCChiselTester___024root___sequent__TOP__1(vlSelf);
        VNoCChiselTester___024root___sequent__TOP__2(vlSelf);
    }
    VNoCChiselTester___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VNoCChiselTester___024root___eval_debug_assertions(VNoCChiselTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoCChiselTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
