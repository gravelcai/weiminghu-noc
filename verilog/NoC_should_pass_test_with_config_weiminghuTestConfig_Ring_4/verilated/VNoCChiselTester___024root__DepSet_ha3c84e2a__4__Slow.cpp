// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNoCChiselTester.h for the primary calling header

#include "verilated.h"

#include "VNoCChiselTester__Syms.h"
#include "VNoCChiselTester___024root.h"

VL_ATTR_COLD void VNoCChiselTester___024root___settle__TOP__6(VNoCChiselTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoCChiselTester___024root___settle__TOP__6\n"); );
    // Init
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__route_buffer_io_deq_ready;
    CData/*5:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_filter;
    IData/*17:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full;
    IData/*17:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___in_alloc_oh_T_34;
    IData/*17:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_oh;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__route_buffer_io_deq_ready;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT___vcalloc_buffer_io_enq_valid_T_4;
    CData/*5:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_filter;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_0;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_1;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_2;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_3;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_0;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_1;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_2;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_3;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_2_0;
    IData/*17:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full;
    IData/*17:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___in_alloc_oh_T_34;
    IData/*17:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_oh;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__route_buffer_io_deq_ready;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT___vcalloc_buffer_io_enq_valid_T_4;
    CData/*5:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_filter;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_0;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_1;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_2;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_3;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_0;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_1;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_2;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_3;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_2_0;
    IData/*17:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full;
    IData/*17:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___in_alloc_oh_T_34;
    IData/*17:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_oh;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__route_buffer_io_deq_ready;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT___vcalloc_buffer_io_enq_valid_T_4;
    CData/*5:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_filter;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_0;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_1;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_2;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_3;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_0;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_1;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_2;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_3;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_2_0;
    IData/*17:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full;
    IData/*17:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___in_alloc_oh_T_34;
    IData/*17:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_oh;
    // Body
    if (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_valid) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13494 
            = (0xffffU & ((0x28U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11697)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13495 
            = (0xffffU & ((0x29U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11698)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13496 
            = (0xffffU & ((0x2aU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11699)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13497 
            = (0xffffU & ((0x2bU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11700)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13498 
            = (0xffffU & ((0x2cU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11701)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13499 
            = (0xffffU & ((0x2dU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11702)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13500 
            = (0xffffU & ((0x2eU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11703)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13501 
            = (0xffffU & ((0x2fU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11704)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13502 
            = (0xffffU & ((0x30U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11705)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13503 
            = (0xffffU & ((0x31U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11706)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13504 
            = (0xffffU & ((0x32U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11707)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13505 
            = (0xffffU & ((0x33U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11708)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13506 
            = (0xffffU & ((0x34U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11709)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13507 
            = (0xffffU & ((0x35U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11710)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13508 
            = (0xffffU & ((0x36U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11711)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13509 
            = (0xffffU & ((0x37U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11712)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13510 
            = (0xffffU & ((0x38U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11713)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13511 
            = (0xffffU & ((0x39U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11714)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13512 
            = (0xffffU & ((0x3aU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11715)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13513 
            = (0xffffU & ((0x3bU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11716)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13514 
            = (0xffffU & ((0x3cU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11717)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13515 
            = (0xffffU & ((0x3dU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11718)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13516 
            = (0xffffU & ((0x3eU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11719)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13517 
            = (0xffffU & ((0x3fU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11720)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13518 
            = (0xffffU & ((0x40U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11721)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13519 
            = (0xffffU & ((0x41U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11722)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13520 
            = (0xffffU & ((0x42U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11723)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13521 
            = (0xffffU & ((0x43U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11724)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13522 
            = (0xffffU & ((0x44U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11725)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13523 
            = (0xffffU & ((0x45U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11726)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13524 
            = (0xffffU & ((0x46U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11727)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13525 
            = (0xffffU & ((0x47U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11728)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13526 
            = (0xffffU & ((0x48U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11729)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13527 
            = (0xffffU & ((0x49U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11730)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13528 
            = (0xffffU & ((0x4aU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11731)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13529 
            = (0xffffU & ((0x4bU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11732)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13530 
            = (0xffffU & ((0x4cU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11733)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13531 
            = (0xffffU & ((0x4dU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11734)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13532 
            = (0xffffU & ((0x4eU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11735)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13533 
            = (0xffffU & ((0x4fU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11736)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13534 
            = (0xffffU & ((0x50U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11737)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13535 
            = (0xffffU & ((0x51U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11738)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13536 
            = (0xffffU & ((0x52U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11739)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13537 
            = (0xffffU & ((0x53U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11740)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13538 
            = (0xffffU & ((0x54U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11741)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13539 
            = (0xffffU & ((0x55U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11742)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13540 
            = (0xffffU & ((0x56U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11743)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13541 
            = (0xffffU & ((0x57U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11744)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13542 
            = (0xffffU & ((0x58U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11745)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13543 
            = (0xffffU & ((0x59U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11746)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13544 
            = (0xffffU & ((0x5aU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11747)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13545 
            = (0xffffU & ((0x5bU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11748)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13546 
            = (0xffffU & ((0x5cU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11749)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13547 
            = (0xffffU & ((0x5dU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11750)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13548 
            = (0xffffU & ((0x5eU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11751)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13549 
            = (0xffffU & ((0x5fU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11752)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13550 
            = (0xffffU & ((0x60U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11753)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13551 
            = (0xffffU & ((0x61U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11754)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13552 
            = (0xffffU & ((0x62U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11755)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13553 
            = (0xffffU & ((0x63U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11756)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13554 
            = (0xffffU & ((0x64U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11757)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13555 
            = (0xffffU & ((0x65U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11758)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13556 
            = (0xffffU & ((0x66U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11759)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13557 
            = (0xffffU & ((0x67U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11760)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13558 
            = (0xffffU & ((0x68U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11761)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13559 
            = (0xffffU & ((0x69U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11762)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13560 
            = (0xffffU & ((0x6aU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11763)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13561 
            = (0xffffU & ((0x6bU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11764)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13562 
            = (0xffffU & ((0x6cU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11765)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13563 
            = (0xffffU & ((0x6dU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11766)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13564 
            = (0xffffU & ((0x6eU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11767)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13565 
            = (0xffffU & ((0x6fU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11768)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13566 
            = (0xffffU & ((0x70U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11769)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13567 
            = (0xffffU & ((0x71U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11770)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13568 
            = (0xffffU & ((0x72U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11771)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13569 
            = (0xffffU & ((0x73U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11772)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13570 
            = (0xffffU & ((0x74U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11773)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13571 
            = (0xffffU & ((0x75U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11774)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13572 
            = (0xffffU & ((0x76U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11775)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13573 
            = (0xffffU & ((0x77U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11776)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13574 
            = (0xffffU & ((0x78U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11777)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13575 
            = (0xffffU & ((0x79U == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11778)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13576 
            = (0xffffU & ((0x7aU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11779)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13577 
            = (0xffffU & ((0x7bU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11780)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13578 
            = (0xffffU & ((0x7cU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11781)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13579 
            = (0xffffU & ((0x7dU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11782)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13580 
            = (0xffffU & ((0x7eU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11783)));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13581 
            = (0xffffU & ((0x7fU == (0x7fU & (IData)(
                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__q_io_deq_bits_payload 
                                                      >> 0x10U))))
                           ? ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_12170))
                           : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11784)));
    } else {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13494 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11697));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13495 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11698));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13496 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11699));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13497 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11700));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13498 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11701));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13499 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11702));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13500 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11703));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13501 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11704));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13502 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11705));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13503 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11706));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13504 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11707));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13505 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11708));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13506 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11709));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13507 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11710));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13508 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11711));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13509 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11712));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13510 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11713));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13511 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11714));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13512 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11715));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13513 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11716));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13514 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11717));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13515 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11718));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13516 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11719));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13517 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11720));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13518 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11721));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13519 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11722));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13520 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11723));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13521 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11724));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13522 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11725));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13523 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11726));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13524 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11727));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13525 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11728));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13526 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11729));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13527 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11730));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13528 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11731));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13529 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11732));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13530 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11733));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13531 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11734));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13532 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11735));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13533 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11736));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13534 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11737));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13535 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11738));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13536 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11739));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13537 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11740));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13538 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11741));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13539 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11742));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13540 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11743));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13541 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11744));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13542 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11745));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13543 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11746));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13544 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11747));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13545 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11748));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13546 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11749));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13547 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11750));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13548 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11751));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13549 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11752));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13550 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11753));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13551 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11754));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13552 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11755));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13553 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11756));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13554 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11757));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13555 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11758));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13556 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11759));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13557 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11760));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13558 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11761));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13559 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11762));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13560 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11763));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13561 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11764));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13562 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11765));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13563 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11766));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13564 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11767));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13565 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11768));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13566 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11769));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13567 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11770));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13568 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11771));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13569 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11772));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13570 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11773));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13571 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11774));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13572 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11775));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13573 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11776));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13574 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11777));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13575 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11778));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13576 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11779));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13577 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11780));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13578 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11781));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13579 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11782));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13580 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11783));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_13581 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_11784));
    }
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_filter 
        = ((1U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_4))
            ? 1U : ((2U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_4))
                     ? 2U : ((4U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_4))
                              ? 4U : ((8U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_4))
                                       ? 8U : ((0x10U 
                                                & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_4))
                                                ? 0x10U
                                                : (
                                                   (0x20U 
                                                    & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_4))
                                                    ? 0x20U
                                                    : 0U))))));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_filter 
        = ((1U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_4))
            ? 1U : ((2U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_4))
                     ? 2U : ((4U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_4))
                              ? 4U : ((8U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_4))
                                       ? 8U : ((0x10U 
                                                & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_4))
                                                ? 0x10U
                                                : (
                                                   (0x20U 
                                                    & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_4))
                                                    ? 0x20U
                                                    : 0U))))));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_filter 
        = ((1U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_4))
            ? 1U : ((2U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_4))
                     ? 2U : ((4U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_4))
                              ? 4U : ((8U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_4))
                                       ? 8U : ((0x10U 
                                                & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_4))
                                                ? 0x10U
                                                : (
                                                   (0x20U 
                                                    & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_4))
                                                    ? 0x20U
                                                    : 0U))))));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_filter 
        = ((1U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_4))
            ? 1U : ((2U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_4))
                     ? 2U : ((4U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_4))
                              ? 4U : ((8U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_4))
                                       ? 8U : ((0x10U 
                                                & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_4))
                                                ? 0x10U
                                                : (
                                                   (0x20U 
                                                    & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_4))
                                                    ? 0x20U
                                                    : 0U))))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel 
        = (7U & ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_filter) 
                 | ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_filter) 
                    >> 3U)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel 
        = (7U & ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_filter) 
                 | ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_filter) 
                    >> 3U)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel 
        = (7U & ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_filter) 
                 | ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_filter) 
                    >> 3U)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel 
        = (7U & ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_filter) 
                 | ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_filter) 
                    >> 3U)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT___T_39 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0_io_vcalloc_req_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT___T_39 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
            >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2_io_vcalloc_req_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_222 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__states_0_g)) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__vcalloc_sel)) 
            & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel))
            ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_valid)
                     ? ((0U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_bits_src_virt_id))
                         ? 2U : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_132))
                     : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_132)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_223 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__states_1_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__vcalloc_sel) 
                >> 1U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel))
            ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_valid)
                     ? ((1U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_bits_src_virt_id))
                         ? 2U : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_133))
                     : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_133)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_224 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__states_2_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__vcalloc_sel) 
                >> 2U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel))
            ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_valid)
                     ? ((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_bits_src_virt_id))
                         ? 2U : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_134))
                     : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_134)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_225 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__states_3_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__vcalloc_sel) 
                >> 3U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel))
            ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_valid)
                     ? ((3U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_bits_src_virt_id))
                         ? 2U : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_135))
                     : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_135)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT___GEN_222 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__states_0_g)) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__vcalloc_sel)) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 1U)) ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__route_arbiter_io_out_valid)
                                ? ((0U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__route_arbiter_io_out_bits_src_virt_id))
                                    ? 2U : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT___GEN_132))
                                : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT___GEN_132)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT___GEN_223 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__states_1_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__vcalloc_sel) 
                >> 1U)) & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                           >> 1U)) ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__route_arbiter_io_out_valid)
                                            ? ((1U 
                                                == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__route_arbiter_io_out_bits_src_virt_id))
                                                ? 2U
                                                : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT___GEN_133))
                                            : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT___GEN_133)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT___GEN_224 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__states_2_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__vcalloc_sel) 
                >> 2U)) & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                           >> 1U)) ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__route_arbiter_io_out_valid)
                                            ? ((2U 
                                                == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__route_arbiter_io_out_bits_src_virt_id))
                                                ? 2U
                                                : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT___GEN_134))
                                            : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT___GEN_134)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT___GEN_225 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__states_3_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__vcalloc_sel) 
                >> 3U)) & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                           >> 1U)) ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__route_arbiter_io_out_valid)
                                            ? ((3U 
                                                == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__route_arbiter_io_out_bits_src_virt_id))
                                                ? 2U
                                                : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT___GEN_135))
                                            : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT___GEN_135)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__vcalloc_q_io_enq_valid 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
            >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3_io_vcalloc_req_valid));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT___vcalloc_buffer_io_enq_valid_T_4 
        = (1U & (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                  >> 2U) | (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__route_buffer__DOT__ram_head_io_deq_bits_MPORT_data))));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_3 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
            >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_0_3));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_0 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_0)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_0_0))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_0_0)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_1 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_1)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_0_1))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_0_1)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_2 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_2)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_0_2))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_0_2)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_0 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_1_0)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_1_0))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_1_0)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_1 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_1_1)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_1_1))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_1_1)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_2 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_1_2)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_1_2))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_1_2)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_3 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_1_3)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_1_3))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_1_3)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_2_0 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_2_0)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_2_0))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_2_0)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___T_39 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0_io_vcalloc_req_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT___T_39 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
            >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2_io_vcalloc_req_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_222 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_0_g)) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__vcalloc_sel)) 
            & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel))
            ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_valid)
                     ? ((0U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_bits_src_virt_id))
                         ? 2U : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_132))
                     : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_132)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_223 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_1_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__vcalloc_sel) 
                >> 1U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel))
            ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_valid)
                     ? ((1U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_bits_src_virt_id))
                         ? 2U : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_133))
                     : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_133)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_224 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_2_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__vcalloc_sel) 
                >> 2U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel))
            ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_valid)
                     ? ((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_bits_src_virt_id))
                         ? 2U : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_134))
                     : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_134)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_225 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_3_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__vcalloc_sel) 
                >> 3U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel))
            ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_valid)
                     ? ((3U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_bits_src_virt_id))
                         ? 2U : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_135))
                     : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_135)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT___GEN_222 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__states_0_g)) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__vcalloc_sel)) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 1U)) ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__route_arbiter_io_out_valid)
                                ? ((0U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__route_arbiter_io_out_bits_src_virt_id))
                                    ? 2U : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT___GEN_132))
                                : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT___GEN_132)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT___GEN_223 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__states_1_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__vcalloc_sel) 
                >> 1U)) & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                           >> 1U)) ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__route_arbiter_io_out_valid)
                                            ? ((1U 
                                                == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__route_arbiter_io_out_bits_src_virt_id))
                                                ? 2U
                                                : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT___GEN_133))
                                            : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT___GEN_133)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT___GEN_224 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__states_2_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__vcalloc_sel) 
                >> 2U)) & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                           >> 1U)) ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__route_arbiter_io_out_valid)
                                            ? ((2U 
                                                == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__route_arbiter_io_out_bits_src_virt_id))
                                                ? 2U
                                                : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT___GEN_134))
                                            : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT___GEN_134)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT___GEN_225 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__states_3_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__vcalloc_sel) 
                >> 3U)) & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                           >> 1U)) ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__route_arbiter_io_out_valid)
                                            ? ((3U 
                                                == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__route_arbiter_io_out_bits_src_virt_id))
                                                ? 2U
                                                : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT___GEN_135))
                                            : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT___GEN_135)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__vcalloc_q_io_enq_valid 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
            >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1_io_vcalloc_req_valid));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT___vcalloc_buffer_io_enq_valid_T_4 
        = (1U & (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                  >> 2U) | (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__route_buffer__DOT__ram_head_io_deq_bits_MPORT_data))));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_0 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_0)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_0_0))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_0_0)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_1 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_1)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_0_1))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_0_1)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_2 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_2)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_0_2))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_0_2)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_3 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_3)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_0_3))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_0_3)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_0 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_1_0)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_1_0))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_1_0)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_1 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_1_1)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_1_1))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_1_1)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_2 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_1_2)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_1_2))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_1_2)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_3 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_1_3)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_1_3))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_1_3)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_2_0 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_2_0)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_2_0))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_2_0)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT___T_39 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1_io_vcalloc_req_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT___T_39 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
            >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3_io_vcalloc_req_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT___GEN_222 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__states_0_g)) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__vcalloc_sel)) 
            & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel))
            ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__route_arbiter_io_out_valid)
                     ? ((0U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__route_arbiter_io_out_bits_src_virt_id))
                         ? 2U : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT___GEN_132))
                     : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT___GEN_132)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT___GEN_223 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__states_1_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__vcalloc_sel) 
                >> 1U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel))
            ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__route_arbiter_io_out_valid)
                     ? ((1U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__route_arbiter_io_out_bits_src_virt_id))
                         ? 2U : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT___GEN_133))
                     : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT___GEN_133)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT___GEN_224 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__states_2_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__vcalloc_sel) 
                >> 2U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel))
            ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__route_arbiter_io_out_valid)
                     ? ((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__route_arbiter_io_out_bits_src_virt_id))
                         ? 2U : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT___GEN_134))
                     : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT___GEN_134)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT___GEN_225 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__states_3_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__vcalloc_sel) 
                >> 3U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel))
            ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__route_arbiter_io_out_valid)
                     ? ((3U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__route_arbiter_io_out_bits_src_virt_id))
                         ? 2U : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT___GEN_135))
                     : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT___GEN_135)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT___GEN_222 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__states_0_g)) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__vcalloc_sel)) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 1U)) ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__route_arbiter_io_out_valid)
                                ? ((0U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__route_arbiter_io_out_bits_src_virt_id))
                                    ? 2U : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT___GEN_132))
                                : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT___GEN_132)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT___GEN_223 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__states_1_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__vcalloc_sel) 
                >> 1U)) & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                           >> 1U)) ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__route_arbiter_io_out_valid)
                                            ? ((1U 
                                                == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__route_arbiter_io_out_bits_src_virt_id))
                                                ? 2U
                                                : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT___GEN_133))
                                            : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT___GEN_133)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT___GEN_224 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__states_2_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__vcalloc_sel) 
                >> 2U)) & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                           >> 1U)) ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__route_arbiter_io_out_valid)
                                            ? ((2U 
                                                == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__route_arbiter_io_out_bits_src_virt_id))
                                                ? 2U
                                                : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT___GEN_134))
                                            : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT___GEN_134)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT___GEN_225 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__states_3_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__vcalloc_sel) 
                >> 3U)) & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                           >> 1U)) ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__route_arbiter_io_out_valid)
                                            ? ((3U 
                                                == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__route_arbiter_io_out_bits_src_virt_id))
                                                ? 2U
                                                : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT___GEN_135))
                                            : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT___GEN_135)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__vcalloc_q_io_enq_valid 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
            >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0_io_vcalloc_req_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT___vcalloc_buffer_io_enq_valid_T_4 
        = (1U & (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                  >> 2U) | (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__route_buffer__DOT__ram_head_io_deq_bits_MPORT_data))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_3 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
            >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_1_3));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_0 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_0)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_0_0))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_0_0)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_1 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_1)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_0_1))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_0_1)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_2 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_2)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_0_2))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_0_2)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_3 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_3)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_0_3))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_0_3)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_0 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_1_0)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_1_0))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_1_0)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_1 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_1_1)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_1_1))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_1_1)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_2 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_1_2)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_1_2))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_1_2)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_2_0 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_2_0)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_2_0))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_2_0)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT___T_39 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1_io_vcalloc_req_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT___T_39 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
            >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3_io_vcalloc_req_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT___GEN_222 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__states_0_g)) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__vcalloc_sel)) 
            & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel))
            ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__route_arbiter_io_out_valid)
                     ? ((0U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__route_arbiter_io_out_bits_src_virt_id))
                         ? 2U : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT___GEN_132))
                     : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT___GEN_132)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT___GEN_223 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__states_1_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__vcalloc_sel) 
                >> 1U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel))
            ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__route_arbiter_io_out_valid)
                     ? ((1U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__route_arbiter_io_out_bits_src_virt_id))
                         ? 2U : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT___GEN_133))
                     : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT___GEN_133)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT___GEN_224 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__states_2_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__vcalloc_sel) 
                >> 2U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel))
            ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__route_arbiter_io_out_valid)
                     ? ((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__route_arbiter_io_out_bits_src_virt_id))
                         ? 2U : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT___GEN_134))
                     : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT___GEN_134)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT___GEN_225 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__states_3_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__vcalloc_sel) 
                >> 3U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel))
            ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__route_arbiter_io_out_valid)
                     ? ((3U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__route_arbiter_io_out_bits_src_virt_id))
                         ? 2U : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT___GEN_135))
                     : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT___GEN_135)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT___GEN_222 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__states_0_g)) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__vcalloc_sel)) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 1U)) ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__route_arbiter_io_out_valid)
                                ? ((0U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__route_arbiter_io_out_bits_src_virt_id))
                                    ? 2U : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT___GEN_132))
                                : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT___GEN_132)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT___GEN_223 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__states_1_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__vcalloc_sel) 
                >> 1U)) & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                           >> 1U)) ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__route_arbiter_io_out_valid)
                                            ? ((1U 
                                                == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__route_arbiter_io_out_bits_src_virt_id))
                                                ? 2U
                                                : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT___GEN_133))
                                            : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT___GEN_133)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT___GEN_224 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__states_2_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__vcalloc_sel) 
                >> 2U)) & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                           >> 1U)) ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__route_arbiter_io_out_valid)
                                            ? ((2U 
                                                == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__route_arbiter_io_out_bits_src_virt_id))
                                                ? 2U
                                                : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT___GEN_134))
                                            : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT___GEN_134)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT___GEN_225 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__states_3_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__vcalloc_sel) 
                >> 3U)) & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                           >> 1U)) ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__route_arbiter_io_out_valid)
                                            ? ((3U 
                                                == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__route_arbiter_io_out_bits_src_virt_id))
                                                ? 2U
                                                : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT___GEN_135))
                                            : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT___GEN_135)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__vcalloc_q_io_enq_valid 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
            >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2_io_vcalloc_req_valid));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT___vcalloc_buffer_io_enq_valid_T_4 
        = (1U & (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                  >> 2U) | (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__route_buffer__DOT__ram_head_io_deq_bits_MPORT_data))));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_0 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_0)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_0_0))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_0_0)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_1 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_1)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_0_1))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_0_1)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_2 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_2)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_0_2))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_0_2)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_3 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_3)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_0_3))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_0_3)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_0 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_1_0)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_1_0))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_1_0)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_1 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_1_1)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_1_1))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_1_1)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_2 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_1_2)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_1_2))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_1_2)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_3 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_1_3)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_1_3))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_1_3)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_2_0 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_2_0)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_1_2_0))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_2_2_0)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__vcalloc_q__DOT__do_enq 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__vcalloc_q_io_enq_ready) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__vcalloc_q_io_enq_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__vcalloc_buffer_io_enq_valid 
        = (((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__route_buffer__DOT__empty)) 
            & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT___vcalloc_buffer_io_enq_valid_T_1)) 
           & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT___vcalloc_buffer_io_enq_valid_T_4));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__route_buffer_io_deq_ready 
        = ((((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__vcalloc_buffer__DOT__full)) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT___vcalloc_buffer_io_enq_valid_T_1)) 
            & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT___vcalloc_buffer_io_enq_valid_T_4)) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__vcalloc_q_io_enq_ready) 
              | (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__route_buffer__DOT__ram_head_io_deq_bits_MPORT_data))));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full 
        = (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_2_0) 
            << 0x11U) | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_3) 
                          << 0x10U) | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_2) 
                                        << 0xfU) | 
                                       (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_1) 
                                         << 0xeU) | 
                                        (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_0) 
                                          << 0xdU) 
                                         | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_3) 
                                             << 0xcU) 
                                            | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_2) 
                                                << 0xbU) 
                                               | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_1) 
                                                   << 0xaU) 
                                                  | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_0) 
                                                      << 9U) 
                                                     | ((((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_2_0) 
                                                          << 8U) 
                                                         | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_3) 
                                                             << 7U) 
                                                            | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_2) 
                                                                << 6U) 
                                                               | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_1) 
                                                                   << 5U) 
                                                                  | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_0) 
                                                                      << 4U) 
                                                                     | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_3) 
                                                                         << 3U) 
                                                                        | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_2) 
                                                                            << 2U) 
                                                                           | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_1) 
                                                                               << 1U) 
                                                                              | (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_0))))))))) 
                                                        & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_mask))))))))))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__vcalloc_q__DOT__do_enq 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__vcalloc_q_io_enq_ready) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__vcalloc_q_io_enq_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__vcalloc_buffer_io_enq_valid 
        = (((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__route_buffer__DOT__empty)) 
            & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT___vcalloc_buffer_io_enq_valid_T_1)) 
           & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT___vcalloc_buffer_io_enq_valid_T_4));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__route_buffer_io_deq_ready 
        = ((((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__vcalloc_buffer__DOT__full)) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT___vcalloc_buffer_io_enq_valid_T_1)) 
            & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT___vcalloc_buffer_io_enq_valid_T_4)) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__vcalloc_q_io_enq_ready) 
              | (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__route_buffer__DOT__ram_head_io_deq_bits_MPORT_data))));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full 
        = (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_2_0) 
            << 0x11U) | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_3) 
                          << 0x10U) | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_2) 
                                        << 0xfU) | 
                                       (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_1) 
                                         << 0xeU) | 
                                        (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_0) 
                                          << 0xdU) 
                                         | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_3) 
                                             << 0xcU) 
                                            | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_2) 
                                                << 0xbU) 
                                               | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_1) 
                                                   << 0xaU) 
                                                  | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_0) 
                                                      << 9U) 
                                                     | ((((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_2_0) 
                                                          << 8U) 
                                                         | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_3) 
                                                             << 7U) 
                                                            | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_2) 
                                                                << 6U) 
                                                               | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_1) 
                                                                   << 5U) 
                                                                  | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_0) 
                                                                      << 4U) 
                                                                     | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_3) 
                                                                         << 3U) 
                                                                        | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_2) 
                                                                            << 2U) 
                                                                           | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_1) 
                                                                               << 1U) 
                                                                              | (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_0))))))))) 
                                                        & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_mask))))))))))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__vcalloc_q__DOT__do_enq 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__vcalloc_q_io_enq_ready) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__vcalloc_q_io_enq_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__vcalloc_buffer_io_enq_valid 
        = (((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__route_buffer__DOT__empty)) 
            & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT___vcalloc_buffer_io_enq_valid_T_1)) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT___vcalloc_buffer_io_enq_valid_T_4));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__route_buffer_io_deq_ready 
        = ((((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__vcalloc_buffer__DOT__full)) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT___vcalloc_buffer_io_enq_valid_T_1)) 
            & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT___vcalloc_buffer_io_enq_valid_T_4)) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__vcalloc_q_io_enq_ready) 
              | (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__route_buffer__DOT__ram_head_io_deq_bits_MPORT_data))));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_2_0) 
            << 0x11U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_3) 
                          << 0x10U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_2) 
                                        << 0xfU) | 
                                       (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_1) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_0) 
                                          << 0xdU) 
                                         | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_3) 
                                             << 0xcU) 
                                            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_2) 
                                                << 0xbU) 
                                               | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_1) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_0) 
                                                      << 9U) 
                                                     | ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_2_0) 
                                                          << 8U) 
                                                         | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_3) 
                                                             << 7U) 
                                                            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_2) 
                                                                << 6U) 
                                                               | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_1) 
                                                                   << 5U) 
                                                                  | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_0) 
                                                                      << 4U) 
                                                                     | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_3) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_2) 
                                                                            << 2U) 
                                                                           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_1) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_0))))))))) 
                                                        & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_mask))))))))))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__vcalloc_q__DOT__do_enq 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__vcalloc_q_io_enq_ready) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__vcalloc_q_io_enq_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__vcalloc_buffer_io_enq_valid 
        = (((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__route_buffer__DOT__empty)) 
            & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT___vcalloc_buffer_io_enq_valid_T_1)) 
           & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT___vcalloc_buffer_io_enq_valid_T_4));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__route_buffer_io_deq_ready 
        = ((((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__vcalloc_buffer__DOT__full)) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT___vcalloc_buffer_io_enq_valid_T_1)) 
            & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT___vcalloc_buffer_io_enq_valid_T_4)) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__vcalloc_q_io_enq_ready) 
              | (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__route_buffer__DOT__ram_head_io_deq_bits_MPORT_data))));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full 
        = (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_2_0) 
            << 0x11U) | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_3) 
                          << 0x10U) | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_2) 
                                        << 0xfU) | 
                                       (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_1) 
                                         << 0xeU) | 
                                        (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_0) 
                                          << 0xdU) 
                                         | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_3) 
                                             << 0xcU) 
                                            | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_2) 
                                                << 0xbU) 
                                               | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_1) 
                                                   << 0xaU) 
                                                  | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_0) 
                                                      << 9U) 
                                                     | ((((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_2_0) 
                                                          << 8U) 
                                                         | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_3) 
                                                             << 7U) 
                                                            | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_2) 
                                                                << 6U) 
                                                               | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_1) 
                                                                   << 5U) 
                                                                  | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_1_0) 
                                                                      << 4U) 
                                                                     | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_3) 
                                                                         << 3U) 
                                                                        | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_2) 
                                                                            << 2U) 
                                                                           | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_1) 
                                                                               << 1U) 
                                                                              | (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_vc_sel_0_0))))))))) 
                                                        & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_mask))))))))))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__vcalloc_buffer__DOT__do_enq 
        = ((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__vcalloc_buffer__DOT__full)) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__vcalloc_buffer_io_enq_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__route_buffer__DOT__do_deq 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__route_buffer_io_deq_ready) 
           & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__route_buffer__DOT__empty)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__route_q__DOT__do_deq 
        = ((((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__route_buffer_io_deq_ready) 
             & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__route_buffer__DOT__empty))) 
            & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__route_buffer__DOT__ram_tail_io_deq_bits_MPORT_data)) 
           & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__route_q__DOT__empty)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___in_alloc_oh_T_34 
        = ((2U & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
            ? 2U : ((4U & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                     ? 4U : ((8U & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                              ? 8U : ((0x10U & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                       ? 0x10U : ((0x20U 
                                                   & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                   ? 0x20U
                                                   : 
                                                  ((0x40U 
                                                    & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                    ? 0x40U
                                                    : 
                                                   ((0x80U 
                                                     & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                     ? 0x80U
                                                     : 
                                                    ((0x100U 
                                                      & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                      ? 0x100U
                                                      : 
                                                     ((0x200U 
                                                       & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                       ? 0x200U
                                                       : 
                                                      ((0x400U 
                                                        & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                        ? 0x400U
                                                        : 
                                                       ((0x800U 
                                                         & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                         ? 0x800U
                                                         : 
                                                        ((0x1000U 
                                                          & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                          ? 0x1000U
                                                          : 
                                                         ((0x2000U 
                                                           & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                           ? 0x2000U
                                                           : 
                                                          ((0x4000U 
                                                            & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                            ? 0x4000U
                                                            : 
                                                           ((0x8000U 
                                                             & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                             ? 0x8000U
                                                             : 
                                                            ((0x10000U 
                                                              & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                              ? 0x10000U
                                                              : 
                                                             ((0x20000U 
                                                               & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                               ? 0x20000U
                                                               : 0U)))))))))))))))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__vcalloc_buffer__DOT__do_enq 
        = ((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__vcalloc_buffer__DOT__full)) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__vcalloc_buffer_io_enq_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__route_buffer__DOT__do_deq 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__route_buffer_io_deq_ready) 
           & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__route_buffer__DOT__empty)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__route_q__DOT__do_deq 
        = ((((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__route_buffer_io_deq_ready) 
             & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__route_buffer__DOT__empty))) 
            & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__route_buffer__DOT__ram_tail_io_deq_bits_MPORT_data)) 
           & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__route_q__DOT__empty)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___in_alloc_oh_T_34 
        = ((2U & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
            ? 2U : ((4U & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                     ? 4U : ((8U & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                              ? 8U : ((0x10U & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                       ? 0x10U : ((0x20U 
                                                   & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                   ? 0x20U
                                                   : 
                                                  ((0x40U 
                                                    & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                    ? 0x40U
                                                    : 
                                                   ((0x80U 
                                                     & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                     ? 0x80U
                                                     : 
                                                    ((0x100U 
                                                      & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                      ? 0x100U
                                                      : 
                                                     ((0x200U 
                                                       & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                       ? 0x200U
                                                       : 
                                                      ((0x400U 
                                                        & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                        ? 0x400U
                                                        : 
                                                       ((0x800U 
                                                         & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                         ? 0x800U
                                                         : 
                                                        ((0x1000U 
                                                          & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                          ? 0x1000U
                                                          : 
                                                         ((0x2000U 
                                                           & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                           ? 0x2000U
                                                           : 
                                                          ((0x4000U 
                                                            & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                            ? 0x4000U
                                                            : 
                                                           ((0x8000U 
                                                             & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                             ? 0x8000U
                                                             : 
                                                            ((0x10000U 
                                                              & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                              ? 0x10000U
                                                              : 
                                                             ((0x20000U 
                                                               & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                               ? 0x20000U
                                                               : 0U)))))))))))))))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__vcalloc_buffer__DOT__do_enq 
        = ((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__vcalloc_buffer__DOT__full)) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__vcalloc_buffer_io_enq_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__route_buffer__DOT__do_deq 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__route_buffer_io_deq_ready) 
           & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__route_buffer__DOT__empty)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__route_q__DOT__do_deq 
        = ((((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__route_buffer_io_deq_ready) 
             & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__route_buffer__DOT__empty))) 
            & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__route_buffer__DOT__ram_tail_io_deq_bits_MPORT_data)) 
           & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__route_q__DOT__empty)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___in_alloc_oh_T_34 
        = ((2U & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
            ? 2U : ((4U & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                     ? 4U : ((8U & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                              ? 8U : ((0x10U & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                       ? 0x10U : ((0x20U 
                                                   & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                   ? 0x20U
                                                   : 
                                                  ((0x40U 
                                                    & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                    ? 0x40U
                                                    : 
                                                   ((0x80U 
                                                     & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                     ? 0x80U
                                                     : 
                                                    ((0x100U 
                                                      & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                      ? 0x100U
                                                      : 
                                                     ((0x200U 
                                                       & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                       ? 0x200U
                                                       : 
                                                      ((0x400U 
                                                        & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                        ? 0x400U
                                                        : 
                                                       ((0x800U 
                                                         & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                         ? 0x800U
                                                         : 
                                                        ((0x1000U 
                                                          & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                          ? 0x1000U
                                                          : 
                                                         ((0x2000U 
                                                           & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                           ? 0x2000U
                                                           : 
                                                          ((0x4000U 
                                                            & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                            ? 0x4000U
                                                            : 
                                                           ((0x8000U 
                                                             & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                             ? 0x8000U
                                                             : 
                                                            ((0x10000U 
                                                              & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                              ? 0x10000U
                                                              : 
                                                             ((0x20000U 
                                                               & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                               ? 0x20000U
                                                               : 0U)))))))))))))))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__vcalloc_buffer__DOT__do_enq 
        = ((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__vcalloc_buffer__DOT__full)) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__vcalloc_buffer_io_enq_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__route_buffer__DOT__do_deq 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__route_buffer_io_deq_ready) 
           & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__route_buffer__DOT__empty)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__route_q__DOT__do_deq 
        = ((((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__route_buffer_io_deq_ready) 
             & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__route_buffer__DOT__empty))) 
            & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__route_buffer__DOT__ram_tail_io_deq_bits_MPORT_data)) 
           & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__route_q__DOT__empty)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___in_alloc_oh_T_34 
        = ((2U & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
            ? 2U : ((4U & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                     ? 4U : ((8U & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                              ? 8U : ((0x10U & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                       ? 0x10U : ((0x20U 
                                                   & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                   ? 0x20U
                                                   : 
                                                  ((0x40U 
                                                    & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                    ? 0x40U
                                                    : 
                                                   ((0x80U 
                                                     & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                     ? 0x80U
                                                     : 
                                                    ((0x100U 
                                                      & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                      ? 0x100U
                                                      : 
                                                     ((0x200U 
                                                       & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                       ? 0x200U
                                                       : 
                                                      ((0x400U 
                                                        & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                        ? 0x400U
                                                        : 
                                                       ((0x800U 
                                                         & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                         ? 0x800U
                                                         : 
                                                        ((0x1000U 
                                                          & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                          ? 0x1000U
                                                          : 
                                                         ((0x2000U 
                                                           & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                           ? 0x2000U
                                                           : 
                                                          ((0x4000U 
                                                            & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                            ? 0x4000U
                                                            : 
                                                           ((0x8000U 
                                                             & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                             ? 0x8000U
                                                             : 
                                                            ((0x10000U 
                                                              & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                              ? 0x10000U
                                                              : 
                                                             ((0x20000U 
                                                               & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
                                                               ? 0x20000U
                                                               : 0U)))))))))))))))));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_oh 
        = ((1U & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
            ? 1U : NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___in_alloc_oh_T_34);
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_oh 
        = ((1U & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
            ? 1U : NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___in_alloc_oh_T_34);
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_oh 
        = ((1U & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
            ? 1U : NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___in_alloc_oh_T_34);
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_oh 
        = ((1U & NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full)
            ? 1U : NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___in_alloc_oh_T_34);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel 
        = (0x1ffU & (NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_oh 
                     | (NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_oh 
                        >> 9U)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel 
        = (0x1ffU & (NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_oh 
                     | (NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_oh 
                        >> 9U)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel 
        = (0x1ffU & (NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_oh 
                     | (NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_oh 
                        >> 9U)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel 
        = (0x1ffU & (NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_oh 
                     | (NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_oh 
                        >> 9U)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__output_unit_0_to_0__DOT___GEN_4 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel)) 
           | ((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3_io_in_vc_free)) 
              & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__output_unit_0_to_0__DOT__states_0_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__output_unit_0_to_0__DOT___GEN_10 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 1U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3_io_in_vc_free) 
                              >> 1U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__output_unit_0_to_0__DOT__states_1_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__output_unit_0_to_0__DOT___GEN_16 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 2U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3_io_in_vc_free) 
                              >> 2U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__output_unit_0_to_0__DOT__states_2_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__output_unit_0_to_0__DOT___GEN_22 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 3U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3_io_in_vc_free) 
                              >> 3U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__output_unit_0_to_0__DOT__states_3_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__output_unit_1_to_2__DOT___GEN_4 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 4U)) | ((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3_io_in_vc_free)) 
                          & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__output_unit_1_to_2__DOT__states_0_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__output_unit_1_to_2__DOT___GEN_10 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 5U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3_io_in_vc_free) 
                              >> 1U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__output_unit_1_to_2__DOT__states_1_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__output_unit_1_to_2__DOT___GEN_16 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 6U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3_io_in_vc_free) 
                              >> 2U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__output_unit_1_to_2__DOT__states_2_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__output_unit_1_to_2__DOT___GEN_22 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 7U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3_io_in_vc_free) 
                              >> 3U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__output_unit_1_to_2__DOT__states_3_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__egress_unit_2_to_3__DOT___GEN_1 
        = ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
               & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
                  >> 8U))) & (((IData)(vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator.__PVT__arbs_2_io_out_0_bits_vc_sel_2_0) 
                               & (((0U != (IData)(vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator.__PVT__arbs_2__DOT___io_out_0_valid_T)) 
                                   & (0U != (IData)(vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator.__PVT__arbs_2__DOT___io_out_0_valid_T))) 
                                  & ((((IData)(vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator.__PVT__arbs_2__DOT__chosen) 
                                       & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_tail)) 
                                      | (((IData)(vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator.__PVT__arbs_2__DOT__chosen) 
                                          >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_tail))) 
                                     | (((IData)(vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator.__PVT__arbs_2__DOT__chosen) 
                                         >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__ingress_unit_2_from_3__DOT__vcalloc_buffer__DOT__ram_tail_io_deq_bits_MPORT_data))))) 
                              | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__egress_unit_2_to_3__DOT__channel_empty)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_2_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 8U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 4U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_1 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 5U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 6U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_3 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 7U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_1 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 1U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 2U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_3 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 3U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_2_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 8U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 4U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_1 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 5U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 6U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_3 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 7U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_1 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 1U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 2U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_2_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 8U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 4U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_1 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 5U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 6U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_3 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 7U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_1 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 1U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 2U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__output_unit_0_to_0__DOT___GEN_4 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel)) 
           | ((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1_io_in_vc_free)) 
              & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__output_unit_0_to_0__DOT__states_0_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__output_unit_0_to_0__DOT___GEN_10 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 1U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1_io_in_vc_free) 
                              >> 1U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__output_unit_0_to_0__DOT__states_1_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__output_unit_0_to_0__DOT___GEN_16 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 2U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1_io_in_vc_free) 
                              >> 2U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__output_unit_0_to_0__DOT__states_2_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__output_unit_0_to_0__DOT___GEN_22 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 3U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1_io_in_vc_free) 
                              >> 3U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__output_unit_0_to_0__DOT__states_3_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__output_unit_1_to_2__DOT___GEN_4 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 4U)) | ((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1_io_in_vc_free)) 
                          & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__output_unit_1_to_2__DOT__states_0_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__output_unit_1_to_2__DOT___GEN_10 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 5U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1_io_in_vc_free) 
                              >> 1U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__output_unit_1_to_2__DOT__states_1_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__output_unit_1_to_2__DOT___GEN_16 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 6U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1_io_in_vc_free) 
                              >> 2U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__output_unit_1_to_2__DOT__states_2_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__output_unit_1_to_2__DOT___GEN_22 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 7U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1_io_in_vc_free) 
                              >> 3U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__output_unit_1_to_2__DOT__states_3_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_2_to_1__DOT___GEN_1 
        = ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
               & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
                  >> 8U))) & (((IData)(vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator.__PVT__arbs_2_io_out_0_bits_vc_sel_2_0) 
                               & (((0U != (IData)(vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator.__PVT__arbs_2__DOT___io_out_0_valid_T)) 
                                   & (0U != (IData)(vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator.__PVT__arbs_2__DOT___io_out_0_valid_T))) 
                                  & ((((IData)(vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator.__PVT__arbs_2__DOT__chosen) 
                                       & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_tail)) 
                                      | (((IData)(vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator.__PVT__arbs_2__DOT__chosen) 
                                          >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_out_0_bits_tail))) 
                                     | (((IData)(vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator.__PVT__arbs_2__DOT__chosen) 
                                         >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__ingress_unit_2_from_1__DOT__vcalloc_buffer__DOT__ram_tail_io_deq_bits_MPORT_data))))) 
                              | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_2_to_1__DOT__channel_empty)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_2_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 8U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 4U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_1 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 5U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 6U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_3 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 7U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_1 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 1U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 2U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_3 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 3U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_2_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 8U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 4U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_1 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 5U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 6U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_3 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 7U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_1 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 1U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 2U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_3 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 3U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_2_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 8U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 4U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_1 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 5U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 6U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_3 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 7U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_1 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 1U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 2U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_3 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 3U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_4 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel)) 
           | ((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0_io_in_vc_free)) 
              & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT__states_0_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_10 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 1U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0_io_in_vc_free) 
                              >> 1U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT__states_1_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_16 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 2U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0_io_in_vc_free) 
                              >> 2U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT__states_2_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_22 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 3U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0_io_in_vc_free) 
                              >> 3U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT__states_3_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_1_to_3__DOT___GEN_4 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 4U)) | ((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0_io_in_vc_free)) 
                          & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_1_to_3__DOT__states_0_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_1_to_3__DOT___GEN_10 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 5U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0_io_in_vc_free) 
                              >> 1U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_1_to_3__DOT__states_1_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_1_to_3__DOT___GEN_16 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 6U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0_io_in_vc_free) 
                              >> 2U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_1_to_3__DOT__states_2_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_1_to_3__DOT___GEN_22 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 7U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0_io_in_vc_free) 
                              >> 3U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_1_to_3__DOT__states_3_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__egress_unit_2_to_0__DOT___GEN_1 
        = ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
               & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
                  >> 8U))) & (((IData)(vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator.__PVT__arbs_2_io_out_0_bits_vc_sel_2_0) 
                               & (((0U != (IData)(vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator.__PVT__arbs_2__DOT___io_out_0_valid_T)) 
                                   & (0U != (IData)(vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator.__PVT__arbs_2__DOT___io_out_0_valid_T))) 
                                  & ((((IData)(vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator.__PVT__arbs_2__DOT__chosen) 
                                       & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_tail)) 
                                      | (((IData)(vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator.__PVT__arbs_2__DOT__chosen) 
                                          >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_tail))) 
                                     | (((IData)(vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator.__PVT__arbs_2__DOT__chosen) 
                                         >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_2_from_0__DOT__vcalloc_buffer__DOT__ram_tail_io_deq_bits_MPORT_data))))) 
                              | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__egress_unit_2_to_0__DOT__channel_empty)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_2_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 8U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 4U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_1 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 5U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 6U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_3 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 7U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_1 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 1U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 2U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_3 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 3U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_2_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 8U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 4U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_1 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 5U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 6U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_1 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 1U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 2U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_3 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 3U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_2_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 8U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 4U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_1 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 5U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 6U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_1 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 1U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 2U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_3 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 3U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_4 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel)) 
           | ((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2_io_in_vc_free)) 
              & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__output_unit_0_to_1__DOT__states_0_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_10 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 1U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2_io_in_vc_free) 
                              >> 1U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__output_unit_0_to_1__DOT__states_1_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_16 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 2U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2_io_in_vc_free) 
                              >> 2U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__output_unit_0_to_1__DOT__states_2_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_22 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 3U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2_io_in_vc_free) 
                              >> 3U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__output_unit_0_to_1__DOT__states_3_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__output_unit_1_to_3__DOT___GEN_4 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 4U)) | ((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2_io_in_vc_free)) 
                          & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__output_unit_1_to_3__DOT__states_0_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__output_unit_1_to_3__DOT___GEN_10 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 5U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2_io_in_vc_free) 
                              >> 1U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__output_unit_1_to_3__DOT__states_1_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__output_unit_1_to_3__DOT___GEN_16 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 6U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2_io_in_vc_free) 
                              >> 2U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__output_unit_1_to_3__DOT__states_2_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__output_unit_1_to_3__DOT___GEN_22 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 7U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2_io_in_vc_free) 
                              >> 3U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__output_unit_1_to_3__DOT__states_3_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT___GEN_1 
        = ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
               & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
                  >> 8U))) & (((IData)(vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_allocator.__PVT__arbs_2_io_out_0_bits_vc_sel_2_0) 
                               & (((0U != (IData)(vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_allocator.__PVT__arbs_2__DOT___io_out_0_valid_T)) 
                                   & (0U != (IData)(vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_allocator.__PVT__arbs_2__DOT___io_out_0_valid_T))) 
                                  & ((((IData)(vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_allocator.__PVT__arbs_2__DOT__chosen) 
                                       & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_out_0_bits_tail)) 
                                      | (((IData)(vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_allocator.__PVT__arbs_2__DOT__chosen) 
                                          >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_out_0_bits_tail))) 
                                     | (((IData)(vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_allocator.__PVT__arbs_2__DOT__chosen) 
                                         >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_2_from_2__DOT__vcalloc_buffer__DOT__ram_tail_io_deq_bits_MPORT_data))))) 
                              | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__egress_unit_2_to_2__DOT__channel_empty)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_2_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 8U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 4U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_1 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 5U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 6U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_3 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 7U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_1 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 1U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 2U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_3 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 3U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_2_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 8U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 4U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_1 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 5U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 6U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_3 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 7U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_1 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 1U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 2U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_3 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 3U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_2_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 8U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 4U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_1 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 5U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 6U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_3 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 7U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_1 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 1U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 2U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_3 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_1) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 3U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_62 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_2_0) 
            << 8U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_3) 
                       << 7U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_2) 
                                  << 6U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_1) 
                                             << 5U) 
                                            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_0) 
                                                << 4U) 
                                               | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_3) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_2) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_1) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_0)))))))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_32 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_2_0) 
            << 8U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_3) 
                       << 7U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_2) 
                                  << 6U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_1) 
                                             << 5U) 
                                            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_0) 
                                                << 4U) 
                                               | ((0xfffffff8U 
                                                   & (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
                                                       << 3U) 
                                                      & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel))) 
                                                  | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_2) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_1) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_0)))))))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_2 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_2_0) 
            << 8U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_3) 
                       << 7U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_2) 
                                  << 6U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_1) 
                                             << 5U) 
                                            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_0) 
                                                << 4U) 
                                               | ((0xfffffff8U 
                                                   & (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT___T_1) 
                                                       << 3U) 
                                                      & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel))) 
                                                  | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_2) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_1) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_0)))))))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_62 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_2_0) 
            << 8U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_3) 
                       << 7U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_2) 
                                  << 6U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_1) 
                                             << 5U) 
                                            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_0) 
                                                << 4U) 
                                               | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_3) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_2) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_1) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_0)))))))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_32 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_2_0) 
            << 8U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_3) 
                       << 7U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_2) 
                                  << 6U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_1) 
                                             << 5U) 
                                            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_0) 
                                                << 4U) 
                                               | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_3) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_2) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_1) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_0)))))))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___T_2 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_2_0) 
            << 8U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_3) 
                       << 7U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_2) 
                                  << 6U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_1) 
                                             << 5U) 
                                            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_0) 
                                                << 4U) 
                                               | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_3) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_2) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_1) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_0)))))))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_62 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_2_0) 
            << 8U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_3) 
                       << 7U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_2) 
                                  << 6U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_1) 
                                             << 5U) 
                                            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_0) 
                                                << 4U) 
                                               | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_3) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_2) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_1) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_0)))))))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_32 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_2_0) 
            << 8U) | ((0xffffff80U & (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
                                       << 7U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel))) 
                      | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_2) 
                          << 6U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_1) 
                                     << 5U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_0) 
                                                << 4U) 
                                               | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_3) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_2) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_1) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_0)))))))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_2 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_2_0) 
            << 8U) | ((0xffffff80U & (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T_1) 
                                       << 7U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel))) 
                      | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_2) 
                          << 6U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_1) 
                                     << 5U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_0) 
                                                << 4U) 
                                               | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_3) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_2) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_1) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_0)))))))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_62 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_2_0) 
            << 8U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_3) 
                       << 7U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_2) 
                                  << 6U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_1) 
                                             << 5U) 
                                            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_1_0) 
                                                << 4U) 
                                               | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_3) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_2) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_1) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_2_vc_sel_0_0)))))))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_32 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_2_0) 
            << 8U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_3) 
                       << 7U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_2) 
                                  << 6U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_1) 
                                             << 5U) 
                                            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_1_0) 
                                                << 4U) 
                                               | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_3) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_2) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_1) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_0)))))))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator__DOT___T_2 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_2_0) 
            << 8U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_3) 
                       << 7U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_2) 
                                  << 6U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_1) 
                                             << 5U) 
                                            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_1_0) 
                                                << 4U) 
                                               | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_3) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_2) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_1) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_0)))))))));
}

VL_ATTR_COLD void VNoCChiselTester___024root___settle__TOP__0(VNoCChiselTester___024root* vlSelf);
VL_ATTR_COLD void VNoCChiselTester___024root___settle__TOP__1(VNoCChiselTester___024root* vlSelf);
VL_ATTR_COLD void VNoCChiselTester___024root___settle__TOP__2(VNoCChiselTester___024root* vlSelf);
VL_ATTR_COLD void VNoCChiselTester_InputGen___settle__TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__0(VNoCChiselTester_InputGen* vlSelf);
VL_ATTR_COLD void VNoCChiselTester_InputGen___settle__TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_1__0(VNoCChiselTester_InputGen* vlSelf);
VL_ATTR_COLD void VNoCChiselTester_InputGen___settle__TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_2__0(VNoCChiselTester_InputGen* vlSelf);
VL_ATTR_COLD void VNoCChiselTester_InputGen___settle__TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_3__0(VNoCChiselTester_InputGen* vlSelf);
VL_ATTR_COLD void VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer__0(VNoCChiselTester_InputBuffer* vlSelf);
VL_ATTR_COLD void VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer__0(VNoCChiselTester_InputBuffer* vlSelf);
VL_ATTR_COLD void VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__0(VNoCChiselTester_InputBuffer* vlSelf);
VL_ATTR_COLD void VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer__0(VNoCChiselTester_InputBuffer* vlSelf);
VL_ATTR_COLD void VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer__0(VNoCChiselTester_InputBuffer* vlSelf);
VL_ATTR_COLD void VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer__0(VNoCChiselTester_InputBuffer* vlSelf);
VL_ATTR_COLD void VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__0(VNoCChiselTester_InputBuffer* vlSelf);
VL_ATTR_COLD void VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer__0(VNoCChiselTester_InputBuffer* vlSelf);
VL_ATTR_COLD void VNoCChiselTester_SwitchAllocator___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator__0(VNoCChiselTester_SwitchAllocator* vlSelf);
VL_ATTR_COLD void VNoCChiselTester_SwitchAllocator___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__0(VNoCChiselTester_SwitchAllocator* vlSelf);
VL_ATTR_COLD void VNoCChiselTester_SwitchAllocator___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_allocator__0(VNoCChiselTester_SwitchAllocator* vlSelf);
VL_ATTR_COLD void VNoCChiselTester_SwitchAllocator___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__0(VNoCChiselTester_SwitchAllocator* vlSelf);
VL_ATTR_COLD void VNoCChiselTester___024root___settle__TOP__3(VNoCChiselTester___024root* vlSelf);
VL_ATTR_COLD void VNoCChiselTester___024root___settle__TOP__4(VNoCChiselTester___024root* vlSelf);
VL_ATTR_COLD void VNoCChiselTester___024root___settle__TOP__5(VNoCChiselTester___024root* vlSelf);
void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__2(VNoCChiselTester_InputBuffer* vlSelf);
void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer__2(VNoCChiselTester_InputBuffer* vlSelf);
void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer__2(VNoCChiselTester_InputBuffer* vlSelf);
void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer__2(VNoCChiselTester_InputBuffer* vlSelf);
void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer__2(VNoCChiselTester_InputBuffer* vlSelf);
void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer__2(VNoCChiselTester_InputBuffer* vlSelf);
void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__2(VNoCChiselTester_InputBuffer* vlSelf);
void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer__2(VNoCChiselTester_InputBuffer* vlSelf);

VL_ATTR_COLD void VNoCChiselTester___024root___eval_settle(VNoCChiselTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoCChiselTester___024root___eval_settle\n"); );
    // Body
    VNoCChiselTester___024root___settle__TOP__0(vlSelf);
    VNoCChiselTester___024root___settle__TOP__1(vlSelf);
    VNoCChiselTester___024root___settle__TOP__2(vlSelf);
    VNoCChiselTester_InputGen___settle__TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__0((&vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen));
    VNoCChiselTester_InputGen___settle__TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_1__0((&vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_1));
    VNoCChiselTester_InputGen___settle__TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_2__0((&vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_2));
    VNoCChiselTester_InputGen___settle__TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_3__0((&vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_3));
    VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer__0((&vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer));
    VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer__0((&vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer));
    VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__0((&vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer));
    VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer__0((&vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer));
    VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer__0((&vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer));
    VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer__0((&vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer));
    VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__0((&vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer));
    VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer__0((&vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer));
    VNoCChiselTester_SwitchAllocator___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator__0((&vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator));
    VNoCChiselTester_SwitchAllocator___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__0((&vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator));
    VNoCChiselTester_SwitchAllocator___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_allocator__0((&vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_allocator));
    VNoCChiselTester_SwitchAllocator___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__0((&vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator));
    VNoCChiselTester___024root___settle__TOP__3(vlSelf);
    VNoCChiselTester___024root___settle__TOP__4(vlSelf);
    VNoCChiselTester___024root___settle__TOP__5(vlSelf);
    VNoCChiselTester___024root___settle__TOP__6(vlSelf);
    VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__2((&vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer));
    VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer__2((&vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer));
    VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer__2((&vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer));
    VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer__2((&vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer));
    VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer__2((&vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer));
    VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer__2((&vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer));
    VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__2((&vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer));
    VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer__2((&vlSymsp->TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer));
}
