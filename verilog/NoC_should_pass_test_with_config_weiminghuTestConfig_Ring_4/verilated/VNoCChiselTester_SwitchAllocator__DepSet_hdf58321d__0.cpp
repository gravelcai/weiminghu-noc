// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNoCChiselTester.h for the primary calling header

#include "verilated.h"

#include "VNoCChiselTester_SwitchAllocator.h"
#include "VNoCChiselTester__Syms.h"

VL_INLINE_OPT void VNoCChiselTester_SwitchAllocator___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__0(VNoCChiselTester_SwitchAllocator* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNoCChiselTester_SwitchAllocator___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__0\n"); );
    // Body
    vlSelf->__PVT__arbs_2_io_in_2_valid = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0_io_salloc_req_0_valid) 
                                           & vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__vcalloc_q__DOT__ram_vc_sel_2_0
                                           [0U]);
    vlSelf->__PVT__arbs_1_io_in_2_valid = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0_io_salloc_req_0_valid) 
                                           & (((vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__vcalloc_q__DOT__ram_vc_sel_1_0
                                                [0U] 
                                                | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__vcalloc_q__DOT__ram_vc_sel_1_1
                                                [0U]) 
                                               | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__vcalloc_q__DOT__ram_vc_sel_1_2
                                               [0U]) 
                                              | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__vcalloc_q__DOT__ram_vc_sel_1_3
                                              [0U]));
    vlSelf->__PVT__arbs_0_io_in_2_valid = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0_io_salloc_req_0_valid) 
                                           & (((vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__vcalloc_q__DOT__ram_vc_sel_0_0
                                                [0U] 
                                                | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__vcalloc_q__DOT__ram_vc_sel_0_1
                                                [0U]) 
                                               | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__vcalloc_q__DOT__ram_vc_sel_0_2
                                               [0U]) 
                                              | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__vcalloc_q__DOT__ram_vc_sel_0_3
                                              [0U]));
    vlSelf->__PVT__arbs_2__DOT__mask = (7U & (IData)(vlSelf->__PVT__arbs_2__DOT___GEN_9));
    vlSelf->__PVT__arbs_1__DOT__mask = (7U & (IData)(vlSelf->__PVT__arbs_1__DOT___GEN_9));
    vlSelf->__PVT__arbs_0__DOT__mask = (7U & (IData)(vlSelf->__PVT__arbs_0__DOT___GEN_9));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__arbs_2__DOT__lock_0 = 0U;
        vlSelf->__PVT__arbs_1__DOT__lock_0 = 0U;
        vlSelf->__PVT__arbs_0__DOT__lock_0 = 0U;
    } else {
        if ((0U != (IData)(vlSelf->__PVT__arbs_2__DOT___io_out_0_valid_T))) {
            vlSelf->__PVT__arbs_2__DOT__lock_0 = ((IData)(vlSelf->__PVT__arbs_2__DOT__chosen) 
                                                  & (~ 
                                                     (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__vcalloc_buffer__DOT__ram_tail_io_deq_bits_MPORT_data) 
                                                       << 2U) 
                                                      | (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_tail) 
                                                          << 1U) 
                                                         | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_tail)))));
        }
        if ((0U != (IData)(vlSelf->__PVT__arbs_1__DOT___io_out_0_valid_T))) {
            vlSelf->__PVT__arbs_1__DOT__lock_0 = ((IData)(vlSelf->__PVT__arbs_1__DOT__chosen) 
                                                  & (~ 
                                                     (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__vcalloc_buffer__DOT__ram_tail_io_deq_bits_MPORT_data) 
                                                       << 2U) 
                                                      | (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_tail) 
                                                          << 1U) 
                                                         | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_tail)))));
        }
        if ((0U != (IData)(vlSelf->__PVT__arbs_0__DOT___io_out_0_valid_T))) {
            vlSelf->__PVT__arbs_0__DOT__lock_0 = ((IData)(vlSelf->__PVT__arbs_0__DOT__chosen) 
                                                  & (~ 
                                                     (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__vcalloc_buffer__DOT__ram_tail_io_deq_bits_MPORT_data) 
                                                       << 2U) 
                                                      | (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_tail) 
                                                          << 1U) 
                                                         | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_tail)))));
        }
    }
}

VL_INLINE_OPT void VNoCChiselTester_SwitchAllocator___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__1(VNoCChiselTester_SwitchAllocator* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNoCChiselTester_SwitchAllocator___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__1\n"); );
    // Init
    CData/*2:0*/ __PVT__arbs_0__DOT___unassigned_T;
    CData/*2:0*/ __PVT__arbs_0__DOT__unassigned;
    CData/*5:0*/ __PVT__arbs_0__DOT___sel_T_2;
    CData/*5:0*/ __PVT__arbs_0__DOT__sel;
    CData/*5:0*/ __PVT__arbs_0__DOT___choices_0_T_1;
    CData/*2:0*/ __PVT__arbs_0__DOT___chosen_T;
    CData/*2:0*/ __PVT__arbs_1__DOT___unassigned_T;
    CData/*2:0*/ __PVT__arbs_1__DOT__unassigned;
    CData/*5:0*/ __PVT__arbs_1__DOT___sel_T_2;
    CData/*5:0*/ __PVT__arbs_1__DOT__sel;
    CData/*5:0*/ __PVT__arbs_1__DOT___choices_0_T_1;
    CData/*2:0*/ __PVT__arbs_1__DOT___chosen_T;
    CData/*2:0*/ __PVT__arbs_2__DOT___unassigned_T;
    CData/*2:0*/ __PVT__arbs_2__DOT__unassigned;
    CData/*5:0*/ __PVT__arbs_2__DOT___sel_T_2;
    CData/*5:0*/ __PVT__arbs_2__DOT__sel;
    CData/*5:0*/ __PVT__arbs_2__DOT___choices_0_T_1;
    CData/*2:0*/ __PVT__arbs_2__DOT___chosen_T;
    // Body
    vlSelf->__PVT__arbs_2_io_in_0_valid = ((0U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb__DOT___io_out_0_valid_T)) 
                                           & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_vc_sel_2_0));
    vlSelf->__PVT__arbs_1_io_in_0_valid = ((0U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb__DOT___io_out_0_valid_T)) 
                                           & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_vc_sel_1_0) 
                                               | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_vc_sel_1_1)) 
                                              | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_vc_sel_1_2)));
    vlSelf->__PVT__arbs_0_io_in_0_valid = ((0U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb__DOT___io_out_0_valid_T)) 
                                           & ((((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_vc_sel_0_0) 
                                                | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_vc_sel_0_1)) 
                                               | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_vc_sel_0_2)) 
                                              | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_vc_sel_0_3)));
    vlSelf->__PVT__arbs_2_io_in_1_valid = ((0U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb__DOT___io_out_0_valid_T)) 
                                           & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_vc_sel_2_0));
    vlSelf->__PVT__arbs_1_io_in_1_valid = ((0U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb__DOT___io_out_0_valid_T)) 
                                           & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_vc_sel_1_0) 
                                               | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_vc_sel_1_1)) 
                                              | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_vc_sel_1_2)));
    vlSelf->__PVT__arbs_0_io_in_1_valid = ((0U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb__DOT___io_out_0_valid_T)) 
                                           & ((((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_vc_sel_0_0) 
                                                | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_vc_sel_0_1)) 
                                               | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_vc_sel_0_2)) 
                                              | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_vc_sel_0_3)));
    __PVT__arbs_2__DOT___unassigned_T = (((IData)(vlSelf->__PVT__arbs_2_io_in_2_valid) 
                                          << 2U) | 
                                         (((IData)(vlSelf->__PVT__arbs_2_io_in_1_valid) 
                                           << 1U) | (IData)(vlSelf->__PVT__arbs_2_io_in_0_valid)));
    __PVT__arbs_1__DOT___unassigned_T = (((IData)(vlSelf->__PVT__arbs_1_io_in_2_valid) 
                                          << 2U) | 
                                         (((IData)(vlSelf->__PVT__arbs_1_io_in_1_valid) 
                                           << 1U) | (IData)(vlSelf->__PVT__arbs_1_io_in_0_valid)));
    __PVT__arbs_0__DOT___unassigned_T = (((IData)(vlSelf->__PVT__arbs_0_io_in_2_valid) 
                                          << 2U) | 
                                         (((IData)(vlSelf->__PVT__arbs_0_io_in_1_valid) 
                                           << 1U) | (IData)(vlSelf->__PVT__arbs_0_io_in_0_valid)));
    __PVT__arbs_2__DOT___chosen_T = ((IData)(__PVT__arbs_2__DOT___unassigned_T) 
                                     & (IData)(vlSelf->__PVT__arbs_2__DOT__lock_0));
    __PVT__arbs_2__DOT__unassigned = ((IData)(__PVT__arbs_2__DOT___unassigned_T) 
                                      & (~ (IData)(vlSelf->__PVT__arbs_2__DOT__lock_0)));
    __PVT__arbs_1__DOT___chosen_T = ((IData)(__PVT__arbs_1__DOT___unassigned_T) 
                                     & (IData)(vlSelf->__PVT__arbs_1__DOT__lock_0));
    __PVT__arbs_1__DOT__unassigned = ((IData)(__PVT__arbs_1__DOT___unassigned_T) 
                                      & (~ (IData)(vlSelf->__PVT__arbs_1__DOT__lock_0)));
    __PVT__arbs_0__DOT___chosen_T = ((IData)(__PVT__arbs_0__DOT___unassigned_T) 
                                     & (IData)(vlSelf->__PVT__arbs_0__DOT__lock_0));
    __PVT__arbs_0__DOT__unassigned = ((IData)(__PVT__arbs_0__DOT___unassigned_T) 
                                      & (~ (IData)(vlSelf->__PVT__arbs_0__DOT__lock_0)));
    __PVT__arbs_2__DOT___sel_T_2 = (((IData)(__PVT__arbs_2__DOT__unassigned) 
                                     << 3U) | ((IData)(__PVT__arbs_2__DOT__unassigned) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__arbs_2__DOT__mask))));
    __PVT__arbs_1__DOT___sel_T_2 = (((IData)(__PVT__arbs_1__DOT__unassigned) 
                                     << 3U) | ((IData)(__PVT__arbs_1__DOT__unassigned) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__arbs_1__DOT__mask))));
    __PVT__arbs_0__DOT___sel_T_2 = (((IData)(__PVT__arbs_0__DOT__unassigned) 
                                     << 3U) | ((IData)(__PVT__arbs_0__DOT__unassigned) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__arbs_0__DOT__mask))));
    __PVT__arbs_2__DOT__sel = ((1U & (IData)(__PVT__arbs_2__DOT___sel_T_2))
                                ? 1U : ((2U & (IData)(__PVT__arbs_2__DOT___sel_T_2))
                                         ? 2U : ((4U 
                                                  & (IData)(__PVT__arbs_2__DOT___sel_T_2))
                                                  ? 4U
                                                  : 
                                                 ((8U 
                                                   & (IData)(__PVT__arbs_2__DOT___sel_T_2))
                                                   ? 8U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(__PVT__arbs_2__DOT___sel_T_2))
                                                    ? 0x10U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(__PVT__arbs_2__DOT___sel_T_2))
                                                     ? 0x20U
                                                     : 0U))))));
    __PVT__arbs_1__DOT__sel = ((1U & (IData)(__PVT__arbs_1__DOT___sel_T_2))
                                ? 1U : ((2U & (IData)(__PVT__arbs_1__DOT___sel_T_2))
                                         ? 2U : ((4U 
                                                  & (IData)(__PVT__arbs_1__DOT___sel_T_2))
                                                  ? 4U
                                                  : 
                                                 ((8U 
                                                   & (IData)(__PVT__arbs_1__DOT___sel_T_2))
                                                   ? 8U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(__PVT__arbs_1__DOT___sel_T_2))
                                                    ? 0x10U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(__PVT__arbs_1__DOT___sel_T_2))
                                                     ? 0x20U
                                                     : 0U))))));
    __PVT__arbs_0__DOT__sel = ((1U & (IData)(__PVT__arbs_0__DOT___sel_T_2))
                                ? 1U : ((2U & (IData)(__PVT__arbs_0__DOT___sel_T_2))
                                         ? 2U : ((4U 
                                                  & (IData)(__PVT__arbs_0__DOT___sel_T_2))
                                                  ? 4U
                                                  : 
                                                 ((8U 
                                                   & (IData)(__PVT__arbs_0__DOT___sel_T_2))
                                                   ? 8U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(__PVT__arbs_0__DOT___sel_T_2))
                                                    ? 0x10U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(__PVT__arbs_0__DOT___sel_T_2))
                                                     ? 0x20U
                                                     : 0U))))));
    __PVT__arbs_2__DOT___choices_0_T_1 = ((IData)(__PVT__arbs_2__DOT__sel) 
                                          | (7U & ((IData)(__PVT__arbs_2__DOT__sel) 
                                                   >> 3U)));
    __PVT__arbs_1__DOT___choices_0_T_1 = ((IData)(__PVT__arbs_1__DOT__sel) 
                                          | (7U & ((IData)(__PVT__arbs_1__DOT__sel) 
                                                   >> 3U)));
    __PVT__arbs_0__DOT___choices_0_T_1 = ((IData)(__PVT__arbs_0__DOT__sel) 
                                          | (7U & ((IData)(__PVT__arbs_0__DOT__sel) 
                                                   >> 3U)));
    if ((0U != (IData)(__PVT__arbs_2__DOT___chosen_T))) {
        vlSelf->__PVT__arbs_2_io_chosen_oh_0 = (7U 
                                                & (IData)(vlSelf->__PVT__arbs_2__DOT__lock_0));
        vlSelf->__PVT__arbs_2__DOT__chosen = (7U & (IData)(vlSelf->__PVT__arbs_2__DOT__lock_0));
    } else {
        vlSelf->__PVT__arbs_2_io_chosen_oh_0 = (7U 
                                                & (IData)(__PVT__arbs_2__DOT___choices_0_T_1));
        vlSelf->__PVT__arbs_2__DOT__chosen = (7U & (IData)(__PVT__arbs_2__DOT___choices_0_T_1));
    }
    if ((0U != (IData)(__PVT__arbs_1__DOT___chosen_T))) {
        vlSelf->__PVT__arbs_1_io_chosen_oh_0 = (7U 
                                                & (IData)(vlSelf->__PVT__arbs_1__DOT__lock_0));
        vlSelf->__PVT__arbs_1__DOT__chosen = (7U & (IData)(vlSelf->__PVT__arbs_1__DOT__lock_0));
    } else {
        vlSelf->__PVT__arbs_1_io_chosen_oh_0 = (7U 
                                                & (IData)(__PVT__arbs_1__DOT___choices_0_T_1));
        vlSelf->__PVT__arbs_1__DOT__chosen = (7U & (IData)(__PVT__arbs_1__DOT___choices_0_T_1));
    }
    if ((0U != (IData)(__PVT__arbs_0__DOT___chosen_T))) {
        vlSelf->__PVT__arbs_0_io_chosen_oh_0 = (7U 
                                                & (IData)(vlSelf->__PVT__arbs_0__DOT__lock_0));
        vlSelf->__PVT__arbs_0__DOT__chosen = (7U & (IData)(vlSelf->__PVT__arbs_0__DOT__lock_0));
    } else {
        vlSelf->__PVT__arbs_0_io_chosen_oh_0 = (7U 
                                                & (IData)(__PVT__arbs_0__DOT___choices_0_T_1));
        vlSelf->__PVT__arbs_0__DOT__chosen = (7U & (IData)(__PVT__arbs_0__DOT___choices_0_T_1));
    }
    vlSelf->__PVT__arbs_2_io_out_0_bits_vc_sel_2_0 
        = ((((IData)(vlSelf->__PVT__arbs_2__DOT__chosen) 
             & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_vc_sel_2_0)) 
            | (((IData)(vlSelf->__PVT__arbs_2__DOT__chosen) 
                >> 1U) & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_vc_sel_2_0))) 
           | (((IData)(vlSelf->__PVT__arbs_2__DOT__chosen) 
               >> 2U) & vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__vcalloc_q__DOT__ram_vc_sel_2_0
              [0U]));
    vlSelf->__PVT__arbs_2__DOT___io_out_0_valid_T = 
        ((IData)(__PVT__arbs_2__DOT___unassigned_T) 
         & (IData)(vlSelf->__PVT__arbs_2__DOT__chosen));
    vlSelf->__PVT__arbs_1__DOT___io_out_0_valid_T = 
        ((IData)(__PVT__arbs_1__DOT___unassigned_T) 
         & (IData)(vlSelf->__PVT__arbs_1__DOT__chosen));
    vlSelf->__PVT__arbs_0__DOT___io_out_0_valid_T = 
        ((IData)(__PVT__arbs_0__DOT___unassigned_T) 
         & (IData)(vlSelf->__PVT__arbs_0__DOT__chosen));
    vlSelf->io_req_1_0_ready = (((((IData)(vlSelf->__PVT__arbs_0__DOT__chosen) 
                                   >> 1U) & (IData)(vlSelf->__PVT__arbs_0_io_in_1_valid)) 
                                 | (((IData)(vlSelf->__PVT__arbs_1__DOT__chosen) 
                                     >> 1U) & (IData)(vlSelf->__PVT__arbs_1_io_in_1_valid))) 
                                | (((IData)(vlSelf->__PVT__arbs_2__DOT__chosen) 
                                    >> 1U) & (IData)(vlSelf->__PVT__arbs_2_io_in_1_valid)));
    vlSelf->io_req_0_0_ready = ((((IData)(vlSelf->__PVT__arbs_0__DOT__chosen) 
                                  & (IData)(vlSelf->__PVT__arbs_0_io_in_0_valid)) 
                                 | ((IData)(vlSelf->__PVT__arbs_1__DOT__chosen) 
                                    & (IData)(vlSelf->__PVT__arbs_1_io_in_0_valid))) 
                                | ((IData)(vlSelf->__PVT__arbs_2__DOT__chosen) 
                                   & (IData)(vlSelf->__PVT__arbs_2_io_in_0_valid)));
}

VL_INLINE_OPT void VNoCChiselTester_SwitchAllocator___combo__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__0(VNoCChiselTester_SwitchAllocator* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNoCChiselTester_SwitchAllocator___combo__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__0\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__arbs_2__DOT___GEN_9 = 0U;
        vlSelf->__PVT__arbs_1__DOT___GEN_9 = 0U;
        vlSelf->__PVT__arbs_0__DOT___GEN_9 = 0U;
    } else {
        vlSelf->__PVT__arbs_2__DOT___GEN_9 = ((0U != (IData)(vlSelf->__PVT__arbs_2__DOT___io_out_0_valid_T))
                                               ? (((IData)(vlSelf->__PVT__arbs_2_io_chosen_oh_0) 
                                                   | (3U 
                                                      & ((IData)(vlSelf->__PVT__arbs_2_io_chosen_oh_0) 
                                                         >> 1U))) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->__PVT__arbs_2_io_chosen_oh_0) 
                                                        >> 2U)))
                                               : ((0U 
                                                   == 
                                                   (7U 
                                                    & (~ (IData)(vlSelf->__PVT__arbs_2__DOT__mask))))
                                                   ? 0U
                                                   : 
                                                  (1U 
                                                   | ((IData)(vlSelf->__PVT__arbs_2__DOT__mask) 
                                                      << 1U))));
        vlSelf->__PVT__arbs_1__DOT___GEN_9 = ((0U != (IData)(vlSelf->__PVT__arbs_1__DOT___io_out_0_valid_T))
                                               ? (((IData)(vlSelf->__PVT__arbs_1_io_chosen_oh_0) 
                                                   | (3U 
                                                      & ((IData)(vlSelf->__PVT__arbs_1_io_chosen_oh_0) 
                                                         >> 1U))) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->__PVT__arbs_1_io_chosen_oh_0) 
                                                        >> 2U)))
                                               : ((0U 
                                                   == 
                                                   (7U 
                                                    & (~ (IData)(vlSelf->__PVT__arbs_1__DOT__mask))))
                                                   ? 0U
                                                   : 
                                                  (1U 
                                                   | ((IData)(vlSelf->__PVT__arbs_1__DOT__mask) 
                                                      << 1U))));
        vlSelf->__PVT__arbs_0__DOT___GEN_9 = ((0U != (IData)(vlSelf->__PVT__arbs_0__DOT___io_out_0_valid_T))
                                               ? (((IData)(vlSelf->__PVT__arbs_0_io_chosen_oh_0) 
                                                   | (3U 
                                                      & ((IData)(vlSelf->__PVT__arbs_0_io_chosen_oh_0) 
                                                         >> 1U))) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->__PVT__arbs_0_io_chosen_oh_0) 
                                                        >> 2U)))
                                               : ((0U 
                                                   == 
                                                   (7U 
                                                    & (~ (IData)(vlSelf->__PVT__arbs_0__DOT__mask))))
                                                   ? 0U
                                                   : 
                                                  (1U 
                                                   | ((IData)(vlSelf->__PVT__arbs_0__DOT__mask) 
                                                      << 1U))));
    }
}

VL_INLINE_OPT void VNoCChiselTester_SwitchAllocator___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__0(VNoCChiselTester_SwitchAllocator* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNoCChiselTester_SwitchAllocator___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__0\n"); );
    // Body
    vlSelf->__PVT__arbs_2_io_in_2_valid = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1_io_salloc_req_0_valid) 
                                           & vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__vcalloc_q__DOT__ram_vc_sel_2_0
                                           [0U]);
    vlSelf->__PVT__arbs_0_io_in_2_valid = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1_io_salloc_req_0_valid) 
                                           & (((vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__vcalloc_q__DOT__ram_vc_sel_0_0
                                                [0U] 
                                                | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__vcalloc_q__DOT__ram_vc_sel_0_1
                                                [0U]) 
                                               | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__vcalloc_q__DOT__ram_vc_sel_0_2
                                               [0U]) 
                                              | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__vcalloc_q__DOT__ram_vc_sel_0_3
                                              [0U]));
    vlSelf->__PVT__arbs_1_io_in_2_valid = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1_io_salloc_req_0_valid) 
                                           & (((vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__vcalloc_q__DOT__ram_vc_sel_1_0
                                                [0U] 
                                                | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__vcalloc_q__DOT__ram_vc_sel_1_1
                                                [0U]) 
                                               | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__vcalloc_q__DOT__ram_vc_sel_1_2
                                               [0U]) 
                                              | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__vcalloc_q__DOT__ram_vc_sel_1_3
                                              [0U]));
    vlSelf->__PVT__arbs_2__DOT__mask = (7U & (IData)(vlSelf->__PVT__arbs_2__DOT___GEN_9));
    vlSelf->__PVT__arbs_0__DOT__mask = (7U & (IData)(vlSelf->__PVT__arbs_0__DOT___GEN_9));
    vlSelf->__PVT__arbs_1__DOT__mask = (7U & (IData)(vlSelf->__PVT__arbs_1__DOT___GEN_9));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__arbs_2__DOT__lock_0 = 0U;
        vlSelf->__PVT__arbs_0__DOT__lock_0 = 0U;
        vlSelf->__PVT__arbs_1__DOT__lock_0 = 0U;
    } else {
        if ((0U != (IData)(vlSelf->__PVT__arbs_2__DOT___io_out_0_valid_T))) {
            vlSelf->__PVT__arbs_2__DOT__lock_0 = ((IData)(vlSelf->__PVT__arbs_2__DOT__chosen) 
                                                  & (~ 
                                                     (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__vcalloc_buffer__DOT__ram_tail_io_deq_bits_MPORT_data) 
                                                       << 2U) 
                                                      | (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_tail) 
                                                          << 1U) 
                                                         | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_tail)))));
        }
        if ((0U != (IData)(vlSelf->__PVT__arbs_0__DOT___io_out_0_valid_T))) {
            vlSelf->__PVT__arbs_0__DOT__lock_0 = ((IData)(vlSelf->__PVT__arbs_0__DOT__chosen) 
                                                  & (~ 
                                                     (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__vcalloc_buffer__DOT__ram_tail_io_deq_bits_MPORT_data) 
                                                       << 2U) 
                                                      | (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_tail) 
                                                          << 1U) 
                                                         | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_tail)))));
        }
        if ((0U != (IData)(vlSelf->__PVT__arbs_1__DOT___io_out_0_valid_T))) {
            vlSelf->__PVT__arbs_1__DOT__lock_0 = ((IData)(vlSelf->__PVT__arbs_1__DOT__chosen) 
                                                  & (~ 
                                                     (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__vcalloc_buffer__DOT__ram_tail_io_deq_bits_MPORT_data) 
                                                       << 2U) 
                                                      | (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_tail) 
                                                          << 1U) 
                                                         | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_tail)))));
        }
    }
}

VL_INLINE_OPT void VNoCChiselTester_SwitchAllocator___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__1(VNoCChiselTester_SwitchAllocator* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNoCChiselTester_SwitchAllocator___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__1\n"); );
    // Init
    CData/*2:0*/ __PVT__arbs_0__DOT___unassigned_T;
    CData/*2:0*/ __PVT__arbs_0__DOT__unassigned;
    CData/*5:0*/ __PVT__arbs_0__DOT___sel_T_2;
    CData/*5:0*/ __PVT__arbs_0__DOT__sel;
    CData/*5:0*/ __PVT__arbs_0__DOT___choices_0_T_1;
    CData/*2:0*/ __PVT__arbs_0__DOT___chosen_T;
    CData/*2:0*/ __PVT__arbs_1__DOT___unassigned_T;
    CData/*2:0*/ __PVT__arbs_1__DOT__unassigned;
    CData/*5:0*/ __PVT__arbs_1__DOT___sel_T_2;
    CData/*5:0*/ __PVT__arbs_1__DOT__sel;
    CData/*5:0*/ __PVT__arbs_1__DOT___choices_0_T_1;
    CData/*2:0*/ __PVT__arbs_1__DOT___chosen_T;
    CData/*2:0*/ __PVT__arbs_2__DOT___unassigned_T;
    CData/*2:0*/ __PVT__arbs_2__DOT__unassigned;
    CData/*5:0*/ __PVT__arbs_2__DOT___sel_T_2;
    CData/*5:0*/ __PVT__arbs_2__DOT__sel;
    CData/*5:0*/ __PVT__arbs_2__DOT___choices_0_T_1;
    CData/*2:0*/ __PVT__arbs_2__DOT___chosen_T;
    // Body
    vlSelf->__PVT__arbs_2_io_in_0_valid = ((0U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___io_out_0_valid_T)) 
                                           & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_vc_sel_2_0));
    vlSelf->__PVT__arbs_0_io_in_0_valid = ((0U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___io_out_0_valid_T)) 
                                           & ((((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_vc_sel_0_0) 
                                                | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_vc_sel_0_1)) 
                                               | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_vc_sel_0_2)) 
                                              | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_vc_sel_0_3)));
    vlSelf->__PVT__arbs_1_io_in_0_valid = ((0U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___io_out_0_valid_T)) 
                                           & ((((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_vc_sel_1_0) 
                                                | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_vc_sel_1_1)) 
                                               | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_vc_sel_1_2)) 
                                              | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_vc_sel_1_3)));
    vlSelf->__PVT__arbs_2_io_in_1_valid = ((0U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb__DOT___io_out_0_valid_T)) 
                                           & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_vc_sel_2_0));
    vlSelf->__PVT__arbs_0_io_in_1_valid = ((0U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb__DOT___io_out_0_valid_T)) 
                                           & ((((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_vc_sel_0_0) 
                                                | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_vc_sel_0_1)) 
                                               | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_vc_sel_0_2)) 
                                              | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_vc_sel_0_3)));
    vlSelf->__PVT__arbs_1_io_in_1_valid = ((0U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb__DOT___io_out_0_valid_T)) 
                                           & ((((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_vc_sel_1_0) 
                                                | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_vc_sel_1_1)) 
                                               | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_vc_sel_1_2)) 
                                              | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_vc_sel_1_3)));
    __PVT__arbs_2__DOT___unassigned_T = (((IData)(vlSelf->__PVT__arbs_2_io_in_2_valid) 
                                          << 2U) | 
                                         (((IData)(vlSelf->__PVT__arbs_2_io_in_1_valid) 
                                           << 1U) | (IData)(vlSelf->__PVT__arbs_2_io_in_0_valid)));
    __PVT__arbs_0__DOT___unassigned_T = (((IData)(vlSelf->__PVT__arbs_0_io_in_2_valid) 
                                          << 2U) | 
                                         (((IData)(vlSelf->__PVT__arbs_0_io_in_1_valid) 
                                           << 1U) | (IData)(vlSelf->__PVT__arbs_0_io_in_0_valid)));
    __PVT__arbs_1__DOT___unassigned_T = (((IData)(vlSelf->__PVT__arbs_1_io_in_2_valid) 
                                          << 2U) | 
                                         (((IData)(vlSelf->__PVT__arbs_1_io_in_1_valid) 
                                           << 1U) | (IData)(vlSelf->__PVT__arbs_1_io_in_0_valid)));
    __PVT__arbs_2__DOT___chosen_T = ((IData)(__PVT__arbs_2__DOT___unassigned_T) 
                                     & (IData)(vlSelf->__PVT__arbs_2__DOT__lock_0));
    __PVT__arbs_2__DOT__unassigned = ((IData)(__PVT__arbs_2__DOT___unassigned_T) 
                                      & (~ (IData)(vlSelf->__PVT__arbs_2__DOT__lock_0)));
    __PVT__arbs_0__DOT___chosen_T = ((IData)(__PVT__arbs_0__DOT___unassigned_T) 
                                     & (IData)(vlSelf->__PVT__arbs_0__DOT__lock_0));
    __PVT__arbs_0__DOT__unassigned = ((IData)(__PVT__arbs_0__DOT___unassigned_T) 
                                      & (~ (IData)(vlSelf->__PVT__arbs_0__DOT__lock_0)));
    __PVT__arbs_1__DOT___chosen_T = ((IData)(__PVT__arbs_1__DOT___unassigned_T) 
                                     & (IData)(vlSelf->__PVT__arbs_1__DOT__lock_0));
    __PVT__arbs_1__DOT__unassigned = ((IData)(__PVT__arbs_1__DOT___unassigned_T) 
                                      & (~ (IData)(vlSelf->__PVT__arbs_1__DOT__lock_0)));
    __PVT__arbs_2__DOT___sel_T_2 = (((IData)(__PVT__arbs_2__DOT__unassigned) 
                                     << 3U) | ((IData)(__PVT__arbs_2__DOT__unassigned) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__arbs_2__DOT__mask))));
    __PVT__arbs_0__DOT___sel_T_2 = (((IData)(__PVT__arbs_0__DOT__unassigned) 
                                     << 3U) | ((IData)(__PVT__arbs_0__DOT__unassigned) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__arbs_0__DOT__mask))));
    __PVT__arbs_1__DOT___sel_T_2 = (((IData)(__PVT__arbs_1__DOT__unassigned) 
                                     << 3U) | ((IData)(__PVT__arbs_1__DOT__unassigned) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__arbs_1__DOT__mask))));
    __PVT__arbs_2__DOT__sel = ((1U & (IData)(__PVT__arbs_2__DOT___sel_T_2))
                                ? 1U : ((2U & (IData)(__PVT__arbs_2__DOT___sel_T_2))
                                         ? 2U : ((4U 
                                                  & (IData)(__PVT__arbs_2__DOT___sel_T_2))
                                                  ? 4U
                                                  : 
                                                 ((8U 
                                                   & (IData)(__PVT__arbs_2__DOT___sel_T_2))
                                                   ? 8U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(__PVT__arbs_2__DOT___sel_T_2))
                                                    ? 0x10U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(__PVT__arbs_2__DOT___sel_T_2))
                                                     ? 0x20U
                                                     : 0U))))));
    __PVT__arbs_0__DOT__sel = ((1U & (IData)(__PVT__arbs_0__DOT___sel_T_2))
                                ? 1U : ((2U & (IData)(__PVT__arbs_0__DOT___sel_T_2))
                                         ? 2U : ((4U 
                                                  & (IData)(__PVT__arbs_0__DOT___sel_T_2))
                                                  ? 4U
                                                  : 
                                                 ((8U 
                                                   & (IData)(__PVT__arbs_0__DOT___sel_T_2))
                                                   ? 8U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(__PVT__arbs_0__DOT___sel_T_2))
                                                    ? 0x10U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(__PVT__arbs_0__DOT___sel_T_2))
                                                     ? 0x20U
                                                     : 0U))))));
    __PVT__arbs_1__DOT__sel = ((1U & (IData)(__PVT__arbs_1__DOT___sel_T_2))
                                ? 1U : ((2U & (IData)(__PVT__arbs_1__DOT___sel_T_2))
                                         ? 2U : ((4U 
                                                  & (IData)(__PVT__arbs_1__DOT___sel_T_2))
                                                  ? 4U
                                                  : 
                                                 ((8U 
                                                   & (IData)(__PVT__arbs_1__DOT___sel_T_2))
                                                   ? 8U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(__PVT__arbs_1__DOT___sel_T_2))
                                                    ? 0x10U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(__PVT__arbs_1__DOT___sel_T_2))
                                                     ? 0x20U
                                                     : 0U))))));
    __PVT__arbs_2__DOT___choices_0_T_1 = ((IData)(__PVT__arbs_2__DOT__sel) 
                                          | (7U & ((IData)(__PVT__arbs_2__DOT__sel) 
                                                   >> 3U)));
    __PVT__arbs_0__DOT___choices_0_T_1 = ((IData)(__PVT__arbs_0__DOT__sel) 
                                          | (7U & ((IData)(__PVT__arbs_0__DOT__sel) 
                                                   >> 3U)));
    __PVT__arbs_1__DOT___choices_0_T_1 = ((IData)(__PVT__arbs_1__DOT__sel) 
                                          | (7U & ((IData)(__PVT__arbs_1__DOT__sel) 
                                                   >> 3U)));
    if ((0U != (IData)(__PVT__arbs_2__DOT___chosen_T))) {
        vlSelf->__PVT__arbs_2_io_chosen_oh_0 = (7U 
                                                & (IData)(vlSelf->__PVT__arbs_2__DOT__lock_0));
        vlSelf->__PVT__arbs_2__DOT__chosen = (7U & (IData)(vlSelf->__PVT__arbs_2__DOT__lock_0));
    } else {
        vlSelf->__PVT__arbs_2_io_chosen_oh_0 = (7U 
                                                & (IData)(__PVT__arbs_2__DOT___choices_0_T_1));
        vlSelf->__PVT__arbs_2__DOT__chosen = (7U & (IData)(__PVT__arbs_2__DOT___choices_0_T_1));
    }
    if ((0U != (IData)(__PVT__arbs_0__DOT___chosen_T))) {
        vlSelf->__PVT__arbs_0_io_chosen_oh_0 = (7U 
                                                & (IData)(vlSelf->__PVT__arbs_0__DOT__lock_0));
        vlSelf->__PVT__arbs_0__DOT__chosen = (7U & (IData)(vlSelf->__PVT__arbs_0__DOT__lock_0));
    } else {
        vlSelf->__PVT__arbs_0_io_chosen_oh_0 = (7U 
                                                & (IData)(__PVT__arbs_0__DOT___choices_0_T_1));
        vlSelf->__PVT__arbs_0__DOT__chosen = (7U & (IData)(__PVT__arbs_0__DOT___choices_0_T_1));
    }
    if ((0U != (IData)(__PVT__arbs_1__DOT___chosen_T))) {
        vlSelf->__PVT__arbs_1_io_chosen_oh_0 = (7U 
                                                & (IData)(vlSelf->__PVT__arbs_1__DOT__lock_0));
        vlSelf->__PVT__arbs_1__DOT__chosen = (7U & (IData)(vlSelf->__PVT__arbs_1__DOT__lock_0));
    } else {
        vlSelf->__PVT__arbs_1_io_chosen_oh_0 = (7U 
                                                & (IData)(__PVT__arbs_1__DOT___choices_0_T_1));
        vlSelf->__PVT__arbs_1__DOT__chosen = (7U & (IData)(__PVT__arbs_1__DOT___choices_0_T_1));
    }
    vlSelf->__PVT__arbs_2_io_out_0_bits_vc_sel_2_0 
        = ((((IData)(vlSelf->__PVT__arbs_2__DOT__chosen) 
             & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_vc_sel_2_0)) 
            | (((IData)(vlSelf->__PVT__arbs_2__DOT__chosen) 
                >> 1U) & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_vc_sel_2_0))) 
           | (((IData)(vlSelf->__PVT__arbs_2__DOT__chosen) 
               >> 2U) & vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__vcalloc_q__DOT__ram_vc_sel_2_0
              [0U]));
    vlSelf->__PVT__arbs_2__DOT___io_out_0_valid_T = 
        ((IData)(__PVT__arbs_2__DOT___unassigned_T) 
         & (IData)(vlSelf->__PVT__arbs_2__DOT__chosen));
    vlSelf->__PVT__arbs_0__DOT___io_out_0_valid_T = 
        ((IData)(__PVT__arbs_0__DOT___unassigned_T) 
         & (IData)(vlSelf->__PVT__arbs_0__DOT__chosen));
    vlSelf->__PVT__arbs_1__DOT___io_out_0_valid_T = 
        ((IData)(__PVT__arbs_1__DOT___unassigned_T) 
         & (IData)(vlSelf->__PVT__arbs_1__DOT__chosen));
    vlSelf->io_req_0_0_ready = ((((IData)(vlSelf->__PVT__arbs_0__DOT__chosen) 
                                  & (IData)(vlSelf->__PVT__arbs_0_io_in_0_valid)) 
                                 | ((IData)(vlSelf->__PVT__arbs_1__DOT__chosen) 
                                    & (IData)(vlSelf->__PVT__arbs_1_io_in_0_valid))) 
                                | ((IData)(vlSelf->__PVT__arbs_2__DOT__chosen) 
                                   & (IData)(vlSelf->__PVT__arbs_2_io_in_0_valid)));
    vlSelf->io_req_1_0_ready = (((((IData)(vlSelf->__PVT__arbs_0__DOT__chosen) 
                                   >> 1U) & (IData)(vlSelf->__PVT__arbs_0_io_in_1_valid)) 
                                 | (((IData)(vlSelf->__PVT__arbs_1__DOT__chosen) 
                                     >> 1U) & (IData)(vlSelf->__PVT__arbs_1_io_in_1_valid))) 
                                | (((IData)(vlSelf->__PVT__arbs_2__DOT__chosen) 
                                    >> 1U) & (IData)(vlSelf->__PVT__arbs_2_io_in_1_valid)));
}

VL_INLINE_OPT void VNoCChiselTester_SwitchAllocator___combo__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__0(VNoCChiselTester_SwitchAllocator* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNoCChiselTester_SwitchAllocator___combo__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__0\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__arbs_2__DOT___GEN_9 = 0U;
        vlSelf->__PVT__arbs_0__DOT___GEN_9 = 0U;
        vlSelf->__PVT__arbs_1__DOT___GEN_9 = 0U;
    } else {
        vlSelf->__PVT__arbs_2__DOT___GEN_9 = ((0U != (IData)(vlSelf->__PVT__arbs_2__DOT___io_out_0_valid_T))
                                               ? (((IData)(vlSelf->__PVT__arbs_2_io_chosen_oh_0) 
                                                   | (3U 
                                                      & ((IData)(vlSelf->__PVT__arbs_2_io_chosen_oh_0) 
                                                         >> 1U))) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->__PVT__arbs_2_io_chosen_oh_0) 
                                                        >> 2U)))
                                               : ((0U 
                                                   == 
                                                   (7U 
                                                    & (~ (IData)(vlSelf->__PVT__arbs_2__DOT__mask))))
                                                   ? 0U
                                                   : 
                                                  (1U 
                                                   | ((IData)(vlSelf->__PVT__arbs_2__DOT__mask) 
                                                      << 1U))));
        vlSelf->__PVT__arbs_0__DOT___GEN_9 = ((0U != (IData)(vlSelf->__PVT__arbs_0__DOT___io_out_0_valid_T))
                                               ? (((IData)(vlSelf->__PVT__arbs_0_io_chosen_oh_0) 
                                                   | (3U 
                                                      & ((IData)(vlSelf->__PVT__arbs_0_io_chosen_oh_0) 
                                                         >> 1U))) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->__PVT__arbs_0_io_chosen_oh_0) 
                                                        >> 2U)))
                                               : ((0U 
                                                   == 
                                                   (7U 
                                                    & (~ (IData)(vlSelf->__PVT__arbs_0__DOT__mask))))
                                                   ? 0U
                                                   : 
                                                  (1U 
                                                   | ((IData)(vlSelf->__PVT__arbs_0__DOT__mask) 
                                                      << 1U))));
        vlSelf->__PVT__arbs_1__DOT___GEN_9 = ((0U != (IData)(vlSelf->__PVT__arbs_1__DOT___io_out_0_valid_T))
                                               ? (((IData)(vlSelf->__PVT__arbs_1_io_chosen_oh_0) 
                                                   | (3U 
                                                      & ((IData)(vlSelf->__PVT__arbs_1_io_chosen_oh_0) 
                                                         >> 1U))) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->__PVT__arbs_1_io_chosen_oh_0) 
                                                        >> 2U)))
                                               : ((0U 
                                                   == 
                                                   (7U 
                                                    & (~ (IData)(vlSelf->__PVT__arbs_1__DOT__mask))))
                                                   ? 0U
                                                   : 
                                                  (1U 
                                                   | ((IData)(vlSelf->__PVT__arbs_1__DOT__mask) 
                                                      << 1U))));
    }
}

VL_INLINE_OPT void VNoCChiselTester_SwitchAllocator___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_allocator__0(VNoCChiselTester_SwitchAllocator* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNoCChiselTester_SwitchAllocator___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_allocator__0\n"); );
    // Body
    vlSelf->__PVT__arbs_2_io_in_2_valid = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2_io_salloc_req_0_valid) 
                                           & vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__vcalloc_q__DOT__ram_vc_sel_2_0
                                           [0U]);
    vlSelf->__PVT__arbs_0_io_in_2_valid = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2_io_salloc_req_0_valid) 
                                           & (((vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__vcalloc_q__DOT__ram_vc_sel_0_0
                                                [0U] 
                                                | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__vcalloc_q__DOT__ram_vc_sel_0_1
                                                [0U]) 
                                               | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__vcalloc_q__DOT__ram_vc_sel_0_2
                                               [0U]) 
                                              | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__vcalloc_q__DOT__ram_vc_sel_0_3
                                              [0U]));
    vlSelf->__PVT__arbs_1_io_in_2_valid = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2_io_salloc_req_0_valid) 
                                           & (((vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__vcalloc_q__DOT__ram_vc_sel_1_0
                                                [0U] 
                                                | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__vcalloc_q__DOT__ram_vc_sel_1_1
                                                [0U]) 
                                               | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__vcalloc_q__DOT__ram_vc_sel_1_2
                                               [0U]) 
                                              | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__vcalloc_q__DOT__ram_vc_sel_1_3
                                              [0U]));
    vlSelf->__PVT__arbs_2__DOT__mask = (7U & (IData)(vlSelf->__PVT__arbs_2__DOT___GEN_9));
    vlSelf->__PVT__arbs_0__DOT__mask = (7U & (IData)(vlSelf->__PVT__arbs_0__DOT___GEN_9));
    vlSelf->__PVT__arbs_1__DOT__mask = (7U & (IData)(vlSelf->__PVT__arbs_1__DOT___GEN_9));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__arbs_2__DOT__lock_0 = 0U;
        vlSelf->__PVT__arbs_0__DOT__lock_0 = 0U;
        vlSelf->__PVT__arbs_1__DOT__lock_0 = 0U;
    } else {
        if ((0U != (IData)(vlSelf->__PVT__arbs_2__DOT___io_out_0_valid_T))) {
            vlSelf->__PVT__arbs_2__DOT__lock_0 = ((IData)(vlSelf->__PVT__arbs_2__DOT__chosen) 
                                                  & (~ 
                                                     (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__vcalloc_buffer__DOT__ram_tail_io_deq_bits_MPORT_data) 
                                                       << 2U) 
                                                      | (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_tail) 
                                                          << 1U) 
                                                         | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_tail)))));
        }
        if ((0U != (IData)(vlSelf->__PVT__arbs_0__DOT___io_out_0_valid_T))) {
            vlSelf->__PVT__arbs_0__DOT__lock_0 = ((IData)(vlSelf->__PVT__arbs_0__DOT__chosen) 
                                                  & (~ 
                                                     (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__vcalloc_buffer__DOT__ram_tail_io_deq_bits_MPORT_data) 
                                                       << 2U) 
                                                      | (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_tail) 
                                                          << 1U) 
                                                         | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_tail)))));
        }
        if ((0U != (IData)(vlSelf->__PVT__arbs_1__DOT___io_out_0_valid_T))) {
            vlSelf->__PVT__arbs_1__DOT__lock_0 = ((IData)(vlSelf->__PVT__arbs_1__DOT__chosen) 
                                                  & (~ 
                                                     (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__vcalloc_buffer__DOT__ram_tail_io_deq_bits_MPORT_data) 
                                                       << 2U) 
                                                      | (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_tail) 
                                                          << 1U) 
                                                         | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_tail)))));
        }
    }
}

VL_INLINE_OPT void VNoCChiselTester_SwitchAllocator___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_allocator__1(VNoCChiselTester_SwitchAllocator* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNoCChiselTester_SwitchAllocator___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_allocator__1\n"); );
    // Init
    CData/*2:0*/ __PVT__arbs_0__DOT___unassigned_T;
    CData/*2:0*/ __PVT__arbs_0__DOT__unassigned;
    CData/*5:0*/ __PVT__arbs_0__DOT___sel_T_2;
    CData/*5:0*/ __PVT__arbs_0__DOT__sel;
    CData/*5:0*/ __PVT__arbs_0__DOT___choices_0_T_1;
    CData/*2:0*/ __PVT__arbs_0__DOT___chosen_T;
    CData/*2:0*/ __PVT__arbs_1__DOT___unassigned_T;
    CData/*2:0*/ __PVT__arbs_1__DOT__unassigned;
    CData/*5:0*/ __PVT__arbs_1__DOT___sel_T_2;
    CData/*5:0*/ __PVT__arbs_1__DOT__sel;
    CData/*5:0*/ __PVT__arbs_1__DOT___choices_0_T_1;
    CData/*2:0*/ __PVT__arbs_1__DOT___chosen_T;
    CData/*2:0*/ __PVT__arbs_2__DOT___unassigned_T;
    CData/*2:0*/ __PVT__arbs_2__DOT__unassigned;
    CData/*5:0*/ __PVT__arbs_2__DOT___sel_T_2;
    CData/*5:0*/ __PVT__arbs_2__DOT__sel;
    CData/*5:0*/ __PVT__arbs_2__DOT___choices_0_T_1;
    CData/*2:0*/ __PVT__arbs_2__DOT___chosen_T;
    // Body
    vlSelf->__PVT__arbs_2_io_in_0_valid = ((0U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb__DOT___io_out_0_valid_T)) 
                                           & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_vc_sel_2_0));
    vlSelf->__PVT__arbs_0_io_in_0_valid = ((0U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb__DOT___io_out_0_valid_T)) 
                                           & ((((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_vc_sel_0_0) 
                                                | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_vc_sel_0_1)) 
                                               | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_vc_sel_0_2)) 
                                              | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_vc_sel_0_3)));
    vlSelf->__PVT__arbs_1_io_in_0_valid = ((0U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb__DOT___io_out_0_valid_T)) 
                                           & ((((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_vc_sel_1_0) 
                                                | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_vc_sel_1_1)) 
                                               | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_vc_sel_1_2)) 
                                              | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_vc_sel_1_3)));
    vlSelf->__PVT__arbs_2_io_in_1_valid = ((0U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb__DOT___io_out_0_valid_T)) 
                                           & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_vc_sel_2_0));
    vlSelf->__PVT__arbs_0_io_in_1_valid = ((0U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb__DOT___io_out_0_valid_T)) 
                                           & ((((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_vc_sel_0_0) 
                                                | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_vc_sel_0_1)) 
                                               | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_vc_sel_0_2)) 
                                              | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_vc_sel_0_3)));
    vlSelf->__PVT__arbs_1_io_in_1_valid = ((0U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb__DOT___io_out_0_valid_T)) 
                                           & ((((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_vc_sel_1_0) 
                                                | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_vc_sel_1_1)) 
                                               | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_vc_sel_1_2)) 
                                              | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_vc_sel_1_3)));
    __PVT__arbs_2__DOT___unassigned_T = (((IData)(vlSelf->__PVT__arbs_2_io_in_2_valid) 
                                          << 2U) | 
                                         (((IData)(vlSelf->__PVT__arbs_2_io_in_1_valid) 
                                           << 1U) | (IData)(vlSelf->__PVT__arbs_2_io_in_0_valid)));
    __PVT__arbs_0__DOT___unassigned_T = (((IData)(vlSelf->__PVT__arbs_0_io_in_2_valid) 
                                          << 2U) | 
                                         (((IData)(vlSelf->__PVT__arbs_0_io_in_1_valid) 
                                           << 1U) | (IData)(vlSelf->__PVT__arbs_0_io_in_0_valid)));
    __PVT__arbs_1__DOT___unassigned_T = (((IData)(vlSelf->__PVT__arbs_1_io_in_2_valid) 
                                          << 2U) | 
                                         (((IData)(vlSelf->__PVT__arbs_1_io_in_1_valid) 
                                           << 1U) | (IData)(vlSelf->__PVT__arbs_1_io_in_0_valid)));
    __PVT__arbs_2__DOT___chosen_T = ((IData)(__PVT__arbs_2__DOT___unassigned_T) 
                                     & (IData)(vlSelf->__PVT__arbs_2__DOT__lock_0));
    __PVT__arbs_2__DOT__unassigned = ((IData)(__PVT__arbs_2__DOT___unassigned_T) 
                                      & (~ (IData)(vlSelf->__PVT__arbs_2__DOT__lock_0)));
    __PVT__arbs_0__DOT___chosen_T = ((IData)(__PVT__arbs_0__DOT___unassigned_T) 
                                     & (IData)(vlSelf->__PVT__arbs_0__DOT__lock_0));
    __PVT__arbs_0__DOT__unassigned = ((IData)(__PVT__arbs_0__DOT___unassigned_T) 
                                      & (~ (IData)(vlSelf->__PVT__arbs_0__DOT__lock_0)));
    __PVT__arbs_1__DOT___chosen_T = ((IData)(__PVT__arbs_1__DOT___unassigned_T) 
                                     & (IData)(vlSelf->__PVT__arbs_1__DOT__lock_0));
    __PVT__arbs_1__DOT__unassigned = ((IData)(__PVT__arbs_1__DOT___unassigned_T) 
                                      & (~ (IData)(vlSelf->__PVT__arbs_1__DOT__lock_0)));
    __PVT__arbs_2__DOT___sel_T_2 = (((IData)(__PVT__arbs_2__DOT__unassigned) 
                                     << 3U) | ((IData)(__PVT__arbs_2__DOT__unassigned) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__arbs_2__DOT__mask))));
    __PVT__arbs_0__DOT___sel_T_2 = (((IData)(__PVT__arbs_0__DOT__unassigned) 
                                     << 3U) | ((IData)(__PVT__arbs_0__DOT__unassigned) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__arbs_0__DOT__mask))));
    __PVT__arbs_1__DOT___sel_T_2 = (((IData)(__PVT__arbs_1__DOT__unassigned) 
                                     << 3U) | ((IData)(__PVT__arbs_1__DOT__unassigned) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__arbs_1__DOT__mask))));
    __PVT__arbs_2__DOT__sel = ((1U & (IData)(__PVT__arbs_2__DOT___sel_T_2))
                                ? 1U : ((2U & (IData)(__PVT__arbs_2__DOT___sel_T_2))
                                         ? 2U : ((4U 
                                                  & (IData)(__PVT__arbs_2__DOT___sel_T_2))
                                                  ? 4U
                                                  : 
                                                 ((8U 
                                                   & (IData)(__PVT__arbs_2__DOT___sel_T_2))
                                                   ? 8U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(__PVT__arbs_2__DOT___sel_T_2))
                                                    ? 0x10U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(__PVT__arbs_2__DOT___sel_T_2))
                                                     ? 0x20U
                                                     : 0U))))));
    __PVT__arbs_0__DOT__sel = ((1U & (IData)(__PVT__arbs_0__DOT___sel_T_2))
                                ? 1U : ((2U & (IData)(__PVT__arbs_0__DOT___sel_T_2))
                                         ? 2U : ((4U 
                                                  & (IData)(__PVT__arbs_0__DOT___sel_T_2))
                                                  ? 4U
                                                  : 
                                                 ((8U 
                                                   & (IData)(__PVT__arbs_0__DOT___sel_T_2))
                                                   ? 8U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(__PVT__arbs_0__DOT___sel_T_2))
                                                    ? 0x10U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(__PVT__arbs_0__DOT___sel_T_2))
                                                     ? 0x20U
                                                     : 0U))))));
    __PVT__arbs_1__DOT__sel = ((1U & (IData)(__PVT__arbs_1__DOT___sel_T_2))
                                ? 1U : ((2U & (IData)(__PVT__arbs_1__DOT___sel_T_2))
                                         ? 2U : ((4U 
                                                  & (IData)(__PVT__arbs_1__DOT___sel_T_2))
                                                  ? 4U
                                                  : 
                                                 ((8U 
                                                   & (IData)(__PVT__arbs_1__DOT___sel_T_2))
                                                   ? 8U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(__PVT__arbs_1__DOT___sel_T_2))
                                                    ? 0x10U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(__PVT__arbs_1__DOT___sel_T_2))
                                                     ? 0x20U
                                                     : 0U))))));
    __PVT__arbs_2__DOT___choices_0_T_1 = ((IData)(__PVT__arbs_2__DOT__sel) 
                                          | (7U & ((IData)(__PVT__arbs_2__DOT__sel) 
                                                   >> 3U)));
    __PVT__arbs_0__DOT___choices_0_T_1 = ((IData)(__PVT__arbs_0__DOT__sel) 
                                          | (7U & ((IData)(__PVT__arbs_0__DOT__sel) 
                                                   >> 3U)));
    __PVT__arbs_1__DOT___choices_0_T_1 = ((IData)(__PVT__arbs_1__DOT__sel) 
                                          | (7U & ((IData)(__PVT__arbs_1__DOT__sel) 
                                                   >> 3U)));
    if ((0U != (IData)(__PVT__arbs_2__DOT___chosen_T))) {
        vlSelf->__PVT__arbs_2_io_chosen_oh_0 = (7U 
                                                & (IData)(vlSelf->__PVT__arbs_2__DOT__lock_0));
        vlSelf->__PVT__arbs_2__DOT__chosen = (7U & (IData)(vlSelf->__PVT__arbs_2__DOT__lock_0));
    } else {
        vlSelf->__PVT__arbs_2_io_chosen_oh_0 = (7U 
                                                & (IData)(__PVT__arbs_2__DOT___choices_0_T_1));
        vlSelf->__PVT__arbs_2__DOT__chosen = (7U & (IData)(__PVT__arbs_2__DOT___choices_0_T_1));
    }
    if ((0U != (IData)(__PVT__arbs_0__DOT___chosen_T))) {
        vlSelf->__PVT__arbs_0_io_chosen_oh_0 = (7U 
                                                & (IData)(vlSelf->__PVT__arbs_0__DOT__lock_0));
        vlSelf->__PVT__arbs_0__DOT__chosen = (7U & (IData)(vlSelf->__PVT__arbs_0__DOT__lock_0));
    } else {
        vlSelf->__PVT__arbs_0_io_chosen_oh_0 = (7U 
                                                & (IData)(__PVT__arbs_0__DOT___choices_0_T_1));
        vlSelf->__PVT__arbs_0__DOT__chosen = (7U & (IData)(__PVT__arbs_0__DOT___choices_0_T_1));
    }
    if ((0U != (IData)(__PVT__arbs_1__DOT___chosen_T))) {
        vlSelf->__PVT__arbs_1_io_chosen_oh_0 = (7U 
                                                & (IData)(vlSelf->__PVT__arbs_1__DOT__lock_0));
        vlSelf->__PVT__arbs_1__DOT__chosen = (7U & (IData)(vlSelf->__PVT__arbs_1__DOT__lock_0));
    } else {
        vlSelf->__PVT__arbs_1_io_chosen_oh_0 = (7U 
                                                & (IData)(__PVT__arbs_1__DOT___choices_0_T_1));
        vlSelf->__PVT__arbs_1__DOT__chosen = (7U & (IData)(__PVT__arbs_1__DOT___choices_0_T_1));
    }
    vlSelf->__PVT__arbs_2_io_out_0_bits_vc_sel_2_0 
        = ((((IData)(vlSelf->__PVT__arbs_2__DOT__chosen) 
             & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_vc_sel_2_0)) 
            | (((IData)(vlSelf->__PVT__arbs_2__DOT__chosen) 
                >> 1U) & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_vc_sel_2_0))) 
           | (((IData)(vlSelf->__PVT__arbs_2__DOT__chosen) 
               >> 2U) & vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__vcalloc_q__DOT__ram_vc_sel_2_0
              [0U]));
    vlSelf->__PVT__arbs_2__DOT___io_out_0_valid_T = 
        ((IData)(__PVT__arbs_2__DOT___unassigned_T) 
         & (IData)(vlSelf->__PVT__arbs_2__DOT__chosen));
    vlSelf->__PVT__arbs_0__DOT___io_out_0_valid_T = 
        ((IData)(__PVT__arbs_0__DOT___unassigned_T) 
         & (IData)(vlSelf->__PVT__arbs_0__DOT__chosen));
    vlSelf->__PVT__arbs_1__DOT___io_out_0_valid_T = 
        ((IData)(__PVT__arbs_1__DOT___unassigned_T) 
         & (IData)(vlSelf->__PVT__arbs_1__DOT__chosen));
    vlSelf->io_req_1_0_ready = (((((IData)(vlSelf->__PVT__arbs_0__DOT__chosen) 
                                   >> 1U) & (IData)(vlSelf->__PVT__arbs_0_io_in_1_valid)) 
                                 | (((IData)(vlSelf->__PVT__arbs_1__DOT__chosen) 
                                     >> 1U) & (IData)(vlSelf->__PVT__arbs_1_io_in_1_valid))) 
                                | (((IData)(vlSelf->__PVT__arbs_2__DOT__chosen) 
                                    >> 1U) & (IData)(vlSelf->__PVT__arbs_2_io_in_1_valid)));
    vlSelf->io_req_0_0_ready = ((((IData)(vlSelf->__PVT__arbs_0__DOT__chosen) 
                                  & (IData)(vlSelf->__PVT__arbs_0_io_in_0_valid)) 
                                 | ((IData)(vlSelf->__PVT__arbs_1__DOT__chosen) 
                                    & (IData)(vlSelf->__PVT__arbs_1_io_in_0_valid))) 
                                | ((IData)(vlSelf->__PVT__arbs_2__DOT__chosen) 
                                   & (IData)(vlSelf->__PVT__arbs_2_io_in_0_valid)));
}

VL_INLINE_OPT void VNoCChiselTester_SwitchAllocator___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator__0(VNoCChiselTester_SwitchAllocator* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNoCChiselTester_SwitchAllocator___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator__0\n"); );
    // Body
    vlSelf->__PVT__arbs_2_io_in_2_valid = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3_io_salloc_req_0_valid) 
                                           & vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__vcalloc_q__DOT__ram_vc_sel_2_0
                                           [0U]);
    vlSelf->__PVT__arbs_0_io_in_2_valid = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3_io_salloc_req_0_valid) 
                                           & (((vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__vcalloc_q__DOT__ram_vc_sel_0_0
                                                [0U] 
                                                | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__vcalloc_q__DOT__ram_vc_sel_0_1
                                                [0U]) 
                                               | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__vcalloc_q__DOT__ram_vc_sel_0_2
                                               [0U]) 
                                              | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__vcalloc_q__DOT__ram_vc_sel_0_3
                                              [0U]));
    vlSelf->__PVT__arbs_1_io_in_2_valid = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3_io_salloc_req_0_valid) 
                                           & (((vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__vcalloc_q__DOT__ram_vc_sel_1_0
                                                [0U] 
                                                | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__vcalloc_q__DOT__ram_vc_sel_1_1
                                                [0U]) 
                                               | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__vcalloc_q__DOT__ram_vc_sel_1_2
                                               [0U]) 
                                              | vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__vcalloc_q__DOT__ram_vc_sel_1_3
                                              [0U]));
    vlSelf->__PVT__arbs_2__DOT__mask = (7U & (IData)(vlSelf->__PVT__arbs_2__DOT___GEN_9));
    vlSelf->__PVT__arbs_0__DOT__mask = (7U & (IData)(vlSelf->__PVT__arbs_0__DOT___GEN_9));
    vlSelf->__PVT__arbs_1__DOT__mask = (7U & (IData)(vlSelf->__PVT__arbs_1__DOT___GEN_9));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__arbs_2__DOT__lock_0 = 0U;
        vlSelf->__PVT__arbs_0__DOT__lock_0 = 0U;
        vlSelf->__PVT__arbs_1__DOT__lock_0 = 0U;
    } else {
        if ((0U != (IData)(vlSelf->__PVT__arbs_2__DOT___io_out_0_valid_T))) {
            vlSelf->__PVT__arbs_2__DOT__lock_0 = ((IData)(vlSelf->__PVT__arbs_2__DOT__chosen) 
                                                  & (~ 
                                                     (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__vcalloc_buffer__DOT__ram_tail_io_deq_bits_MPORT_data) 
                                                       << 2U) 
                                                      | (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_tail) 
                                                          << 1U) 
                                                         | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_tail)))));
        }
        if ((0U != (IData)(vlSelf->__PVT__arbs_0__DOT___io_out_0_valid_T))) {
            vlSelf->__PVT__arbs_0__DOT__lock_0 = ((IData)(vlSelf->__PVT__arbs_0__DOT__chosen) 
                                                  & (~ 
                                                     (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__vcalloc_buffer__DOT__ram_tail_io_deq_bits_MPORT_data) 
                                                       << 2U) 
                                                      | (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_tail) 
                                                          << 1U) 
                                                         | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_tail)))));
        }
        if ((0U != (IData)(vlSelf->__PVT__arbs_1__DOT___io_out_0_valid_T))) {
            vlSelf->__PVT__arbs_1__DOT__lock_0 = ((IData)(vlSelf->__PVT__arbs_1__DOT__chosen) 
                                                  & (~ 
                                                     (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__vcalloc_buffer__DOT__ram_tail_io_deq_bits_MPORT_data) 
                                                       << 2U) 
                                                      | (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_tail) 
                                                          << 1U) 
                                                         | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_tail)))));
        }
    }
}

VL_INLINE_OPT void VNoCChiselTester_SwitchAllocator___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator__1(VNoCChiselTester_SwitchAllocator* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNoCChiselTester_SwitchAllocator___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator__1\n"); );
    // Init
    CData/*2:0*/ __PVT__arbs_0__DOT___unassigned_T;
    CData/*2:0*/ __PVT__arbs_0__DOT__unassigned;
    CData/*5:0*/ __PVT__arbs_0__DOT___sel_T_2;
    CData/*5:0*/ __PVT__arbs_0__DOT__sel;
    CData/*5:0*/ __PVT__arbs_0__DOT___choices_0_T_1;
    CData/*2:0*/ __PVT__arbs_0__DOT___chosen_T;
    CData/*2:0*/ __PVT__arbs_1__DOT___unassigned_T;
    CData/*2:0*/ __PVT__arbs_1__DOT__unassigned;
    CData/*5:0*/ __PVT__arbs_1__DOT___sel_T_2;
    CData/*5:0*/ __PVT__arbs_1__DOT__sel;
    CData/*5:0*/ __PVT__arbs_1__DOT___choices_0_T_1;
    CData/*2:0*/ __PVT__arbs_1__DOT___chosen_T;
    CData/*2:0*/ __PVT__arbs_2__DOT___unassigned_T;
    CData/*2:0*/ __PVT__arbs_2__DOT__unassigned;
    CData/*5:0*/ __PVT__arbs_2__DOT___sel_T_2;
    CData/*5:0*/ __PVT__arbs_2__DOT__sel;
    CData/*5:0*/ __PVT__arbs_2__DOT___choices_0_T_1;
    CData/*2:0*/ __PVT__arbs_2__DOT___chosen_T;
    // Body
    vlSelf->__PVT__arbs_2_io_in_1_valid = ((0U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb__DOT___io_out_0_valid_T)) 
                                           & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_vc_sel_2_0));
    vlSelf->__PVT__arbs_0_io_in_1_valid = ((0U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb__DOT___io_out_0_valid_T)) 
                                           & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_vc_sel_0_0) 
                                               | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_vc_sel_0_1)) 
                                              | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_vc_sel_0_2)));
    vlSelf->__PVT__arbs_1_io_in_1_valid = ((0U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb__DOT___io_out_0_valid_T)) 
                                           & ((((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_vc_sel_1_0) 
                                                | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_vc_sel_1_1)) 
                                               | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_vc_sel_1_2)) 
                                              | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_vc_sel_1_3)));
    vlSelf->__PVT__arbs_2_io_in_0_valid = ((0U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___io_out_0_valid_T)) 
                                           & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_vc_sel_2_0));
    vlSelf->__PVT__arbs_0_io_in_0_valid = ((0U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___io_out_0_valid_T)) 
                                           & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_vc_sel_0_0) 
                                               | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_vc_sel_0_1)) 
                                              | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_vc_sel_0_2)));
    vlSelf->__PVT__arbs_1_io_in_0_valid = ((0U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___io_out_0_valid_T)) 
                                           & ((((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_vc_sel_1_0) 
                                                | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_vc_sel_1_1)) 
                                               | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_vc_sel_1_2)) 
                                              | (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_vc_sel_1_3)));
    __PVT__arbs_2__DOT___unassigned_T = (((IData)(vlSelf->__PVT__arbs_2_io_in_2_valid) 
                                          << 2U) | 
                                         (((IData)(vlSelf->__PVT__arbs_2_io_in_1_valid) 
                                           << 1U) | (IData)(vlSelf->__PVT__arbs_2_io_in_0_valid)));
    __PVT__arbs_0__DOT___unassigned_T = (((IData)(vlSelf->__PVT__arbs_0_io_in_2_valid) 
                                          << 2U) | 
                                         (((IData)(vlSelf->__PVT__arbs_0_io_in_1_valid) 
                                           << 1U) | (IData)(vlSelf->__PVT__arbs_0_io_in_0_valid)));
    __PVT__arbs_1__DOT___unassigned_T = (((IData)(vlSelf->__PVT__arbs_1_io_in_2_valid) 
                                          << 2U) | 
                                         (((IData)(vlSelf->__PVT__arbs_1_io_in_1_valid) 
                                           << 1U) | (IData)(vlSelf->__PVT__arbs_1_io_in_0_valid)));
    __PVT__arbs_2__DOT___chosen_T = ((IData)(__PVT__arbs_2__DOT___unassigned_T) 
                                     & (IData)(vlSelf->__PVT__arbs_2__DOT__lock_0));
    __PVT__arbs_2__DOT__unassigned = ((IData)(__PVT__arbs_2__DOT___unassigned_T) 
                                      & (~ (IData)(vlSelf->__PVT__arbs_2__DOT__lock_0)));
    __PVT__arbs_0__DOT___chosen_T = ((IData)(__PVT__arbs_0__DOT___unassigned_T) 
                                     & (IData)(vlSelf->__PVT__arbs_0__DOT__lock_0));
    __PVT__arbs_0__DOT__unassigned = ((IData)(__PVT__arbs_0__DOT___unassigned_T) 
                                      & (~ (IData)(vlSelf->__PVT__arbs_0__DOT__lock_0)));
    __PVT__arbs_1__DOT___chosen_T = ((IData)(__PVT__arbs_1__DOT___unassigned_T) 
                                     & (IData)(vlSelf->__PVT__arbs_1__DOT__lock_0));
    __PVT__arbs_1__DOT__unassigned = ((IData)(__PVT__arbs_1__DOT___unassigned_T) 
                                      & (~ (IData)(vlSelf->__PVT__arbs_1__DOT__lock_0)));
    __PVT__arbs_2__DOT___sel_T_2 = (((IData)(__PVT__arbs_2__DOT__unassigned) 
                                     << 3U) | ((IData)(__PVT__arbs_2__DOT__unassigned) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__arbs_2__DOT__mask))));
    __PVT__arbs_0__DOT___sel_T_2 = (((IData)(__PVT__arbs_0__DOT__unassigned) 
                                     << 3U) | ((IData)(__PVT__arbs_0__DOT__unassigned) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__arbs_0__DOT__mask))));
    __PVT__arbs_1__DOT___sel_T_2 = (((IData)(__PVT__arbs_1__DOT__unassigned) 
                                     << 3U) | ((IData)(__PVT__arbs_1__DOT__unassigned) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__arbs_1__DOT__mask))));
    __PVT__arbs_2__DOT__sel = ((1U & (IData)(__PVT__arbs_2__DOT___sel_T_2))
                                ? 1U : ((2U & (IData)(__PVT__arbs_2__DOT___sel_T_2))
                                         ? 2U : ((4U 
                                                  & (IData)(__PVT__arbs_2__DOT___sel_T_2))
                                                  ? 4U
                                                  : 
                                                 ((8U 
                                                   & (IData)(__PVT__arbs_2__DOT___sel_T_2))
                                                   ? 8U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(__PVT__arbs_2__DOT___sel_T_2))
                                                    ? 0x10U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(__PVT__arbs_2__DOT___sel_T_2))
                                                     ? 0x20U
                                                     : 0U))))));
    __PVT__arbs_0__DOT__sel = ((1U & (IData)(__PVT__arbs_0__DOT___sel_T_2))
                                ? 1U : ((2U & (IData)(__PVT__arbs_0__DOT___sel_T_2))
                                         ? 2U : ((4U 
                                                  & (IData)(__PVT__arbs_0__DOT___sel_T_2))
                                                  ? 4U
                                                  : 
                                                 ((8U 
                                                   & (IData)(__PVT__arbs_0__DOT___sel_T_2))
                                                   ? 8U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(__PVT__arbs_0__DOT___sel_T_2))
                                                    ? 0x10U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(__PVT__arbs_0__DOT___sel_T_2))
                                                     ? 0x20U
                                                     : 0U))))));
    __PVT__arbs_1__DOT__sel = ((1U & (IData)(__PVT__arbs_1__DOT___sel_T_2))
                                ? 1U : ((2U & (IData)(__PVT__arbs_1__DOT___sel_T_2))
                                         ? 2U : ((4U 
                                                  & (IData)(__PVT__arbs_1__DOT___sel_T_2))
                                                  ? 4U
                                                  : 
                                                 ((8U 
                                                   & (IData)(__PVT__arbs_1__DOT___sel_T_2))
                                                   ? 8U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(__PVT__arbs_1__DOT___sel_T_2))
                                                    ? 0x10U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(__PVT__arbs_1__DOT___sel_T_2))
                                                     ? 0x20U
                                                     : 0U))))));
    __PVT__arbs_2__DOT___choices_0_T_1 = ((IData)(__PVT__arbs_2__DOT__sel) 
                                          | (7U & ((IData)(__PVT__arbs_2__DOT__sel) 
                                                   >> 3U)));
    __PVT__arbs_0__DOT___choices_0_T_1 = ((IData)(__PVT__arbs_0__DOT__sel) 
                                          | (7U & ((IData)(__PVT__arbs_0__DOT__sel) 
                                                   >> 3U)));
    __PVT__arbs_1__DOT___choices_0_T_1 = ((IData)(__PVT__arbs_1__DOT__sel) 
                                          | (7U & ((IData)(__PVT__arbs_1__DOT__sel) 
                                                   >> 3U)));
    if ((0U != (IData)(__PVT__arbs_2__DOT___chosen_T))) {
        vlSelf->__PVT__arbs_2_io_chosen_oh_0 = (7U 
                                                & (IData)(vlSelf->__PVT__arbs_2__DOT__lock_0));
        vlSelf->__PVT__arbs_2__DOT__chosen = (7U & (IData)(vlSelf->__PVT__arbs_2__DOT__lock_0));
    } else {
        vlSelf->__PVT__arbs_2_io_chosen_oh_0 = (7U 
                                                & (IData)(__PVT__arbs_2__DOT___choices_0_T_1));
        vlSelf->__PVT__arbs_2__DOT__chosen = (7U & (IData)(__PVT__arbs_2__DOT___choices_0_T_1));
    }
    if ((0U != (IData)(__PVT__arbs_0__DOT___chosen_T))) {
        vlSelf->__PVT__arbs_0_io_chosen_oh_0 = (7U 
                                                & (IData)(vlSelf->__PVT__arbs_0__DOT__lock_0));
        vlSelf->__PVT__arbs_0__DOT__chosen = (7U & (IData)(vlSelf->__PVT__arbs_0__DOT__lock_0));
    } else {
        vlSelf->__PVT__arbs_0_io_chosen_oh_0 = (7U 
                                                & (IData)(__PVT__arbs_0__DOT___choices_0_T_1));
        vlSelf->__PVT__arbs_0__DOT__chosen = (7U & (IData)(__PVT__arbs_0__DOT___choices_0_T_1));
    }
    if ((0U != (IData)(__PVT__arbs_1__DOT___chosen_T))) {
        vlSelf->__PVT__arbs_1_io_chosen_oh_0 = (7U 
                                                & (IData)(vlSelf->__PVT__arbs_1__DOT__lock_0));
        vlSelf->__PVT__arbs_1__DOT__chosen = (7U & (IData)(vlSelf->__PVT__arbs_1__DOT__lock_0));
    } else {
        vlSelf->__PVT__arbs_1_io_chosen_oh_0 = (7U 
                                                & (IData)(__PVT__arbs_1__DOT___choices_0_T_1));
        vlSelf->__PVT__arbs_1__DOT__chosen = (7U & (IData)(__PVT__arbs_1__DOT___choices_0_T_1));
    }
    vlSelf->__PVT__arbs_2_io_out_0_bits_vc_sel_2_0 
        = ((((IData)(vlSelf->__PVT__arbs_2__DOT__chosen) 
             & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_vc_sel_2_0)) 
            | (((IData)(vlSelf->__PVT__arbs_2__DOT__chosen) 
                >> 1U) & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_vc_sel_2_0))) 
           | (((IData)(vlSelf->__PVT__arbs_2__DOT__chosen) 
               >> 2U) & vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__vcalloc_q__DOT__ram_vc_sel_2_0
              [0U]));
    vlSelf->__PVT__arbs_2__DOT___io_out_0_valid_T = 
        ((IData)(__PVT__arbs_2__DOT___unassigned_T) 
         & (IData)(vlSelf->__PVT__arbs_2__DOT__chosen));
    vlSelf->__PVT__arbs_0__DOT___io_out_0_valid_T = 
        ((IData)(__PVT__arbs_0__DOT___unassigned_T) 
         & (IData)(vlSelf->__PVT__arbs_0__DOT__chosen));
    vlSelf->__PVT__arbs_1__DOT___io_out_0_valid_T = 
        ((IData)(__PVT__arbs_1__DOT___unassigned_T) 
         & (IData)(vlSelf->__PVT__arbs_1__DOT__chosen));
    vlSelf->io_req_0_0_ready = ((((IData)(vlSelf->__PVT__arbs_0__DOT__chosen) 
                                  & (IData)(vlSelf->__PVT__arbs_0_io_in_0_valid)) 
                                 | ((IData)(vlSelf->__PVT__arbs_1__DOT__chosen) 
                                    & (IData)(vlSelf->__PVT__arbs_1_io_in_0_valid))) 
                                | ((IData)(vlSelf->__PVT__arbs_2__DOT__chosen) 
                                   & (IData)(vlSelf->__PVT__arbs_2_io_in_0_valid)));
    vlSelf->io_req_1_0_ready = (((((IData)(vlSelf->__PVT__arbs_0__DOT__chosen) 
                                   >> 1U) & (IData)(vlSelf->__PVT__arbs_0_io_in_1_valid)) 
                                 | (((IData)(vlSelf->__PVT__arbs_1__DOT__chosen) 
                                     >> 1U) & (IData)(vlSelf->__PVT__arbs_1_io_in_1_valid))) 
                                | (((IData)(vlSelf->__PVT__arbs_2__DOT__chosen) 
                                    >> 1U) & (IData)(vlSelf->__PVT__arbs_2_io_in_1_valid)));
}
