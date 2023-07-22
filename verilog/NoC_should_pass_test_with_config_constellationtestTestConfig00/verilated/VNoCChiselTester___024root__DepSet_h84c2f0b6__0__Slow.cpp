// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNoCChiselTester.h for the primary calling header

#include "verilated.h"

#include "VNoCChiselTester___024root.h"

VL_ATTR_COLD void VNoCChiselTester___024root___initial__TOP__0(VNoCChiselTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoCChiselTester___024root___initial__TOP__0\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_h8f6fe8ea__0;
    VlWide<6>/*191:0*/ __Vtemp_h26db3066__0;
    VlWide<6>/*191:0*/ __Vtemp_h26db3066__1;
    // Body
    __Vtemp_h8f6fe8ea__0[0U] = 0x743d2564U;
    __Vtemp_h8f6fe8ea__0[1U] = 0x7072696eU;
    __Vtemp_h8f6fe8ea__0[2U] = 0x626c655fU;
    __Vtemp_h8f6fe8ea__0[3U] = 0x5f656e61U;
    __Vtemp_h8f6fe8ea__0[4U] = 0x74657374U;
    __Vtemp_h8f6fe8ea__0[5U] = 0x6e6f63U;
    if ((! VL_VALUEPLUSARGS_INI(1, VL_CVT_PACK_STR_NW(6, __Vtemp_h8f6fe8ea__0), 
                                vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_h26db3066__0[0U] = 0x653d2564U;
    __Vtemp_h26db3066__0[1U] = 0x5f726174U;
    __Vtemp_h26db3066__0[2U] = 0x6d706c65U;
    __Vtemp_h26db3066__0[3U] = 0x6c5f7361U;
    __Vtemp_h26db3066__0[4U] = 0x5f757469U;
    __Vtemp_h26db3066__0[5U] = 0x6e6f63U;
    if ((! VL_VALUEPLUSARGS_INI(20, VL_CVT_PACK_STR_NW(6, __Vtemp_h26db3066__0), 
                                vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_h26db3066__1[0U] = 0x653d2564U;
    __Vtemp_h26db3066__1[1U] = 0x5f726174U;
    __Vtemp_h26db3066__1[2U] = 0x6d706c65U;
    __Vtemp_h26db3066__1[3U] = 0x6c5f7361U;
    __Vtemp_h26db3066__1[4U] = 0x5f757469U;
    __Vtemp_h26db3066__1[5U] = 0x6e6f63U;
    if ((! VL_VALUEPLUSARGS_INI(20, VL_CVT_PACK_STR_NW(6, __Vtemp_h26db3066__1), 
                                vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__plusarg_reader__DOT__myplus = 0U;
    }
}

extern const VlWide<2048>/*65535:0*/ VNoCChiselTester__ConstPool__CONST_hb37f0dc1_0;

VL_ATTR_COLD void VNoCChiselTester___024root___settle__TOP__0(VNoCChiselTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoCChiselTester___024root___settle__TOP__0\n"); );
    // Init
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer_io_deq_ready;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q_io_deq_ready;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT___vcalloc_buffer_io_enq_valid_T_1;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT___vcalloc_buffer_io_enq_valid_T_4;
    CData/*2:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT___c_T_2;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ptr_match;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__empty;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__ptr_match;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__empty;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__ptr_match;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__unassigned;
    CData/*1:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT___sel_T_2;
    CData/*1:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__sel;
    CData/*1:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT___choices_0_T_1;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_0;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_1;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_2;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_vals_0;
    CData/*1:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_2;
    CData/*1:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_filter;
    CData/*5:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full;
    CData/*5:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_oh;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0_io_vcalloc_req_valid;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_req_0_ready;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_vc_sel_0_0;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_33;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_34;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_35;
    CData/*2:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_51;
    CData/*2:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_52;
    CData/*2:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_53;
    CData/*5:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___vcalloc_filter_T_4;
    CData/*5:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__vcalloc_filter;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___io_in_credit_return_T;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__empty_0;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__empty_1;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__empty_2;
    CData/*3:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___GEN_1;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___GEN_40;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___GEN_44;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___GEN_48;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__can_to_q_0;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__can_to_q_1;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__can_to_q_2;
    CData/*3:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___head_T_2;
    CData/*3:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___head_T_3;
    CData/*2:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___unassigned_T;
    CData/*2:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__unassigned;
    CData/*5:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___sel_T_2;
    CData/*5:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__sel;
    CData/*5:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___choices_0_T_1;
    CData/*2:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___chosen_T;
    CData/*1:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_count;
    CData/*1:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__ptr_diff;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__unassigned;
    CData/*1:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT___sel_T_2;
    CData/*1:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__sel;
    CData/*1:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT___choices_0_T_1;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_0;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_vals_0;
    CData/*1:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_2;
    CData/*1:0*/ NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_filter;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_valid;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q_io_enq_ready;
    CData/*6:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___sels_0_T_144;
    CData/*6:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___sels_0_T_161;
    CData/*6:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___sels_0_T_178;
    CData/*6:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___sels_0_T_195;
    CData/*6:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___sels_0_T_212;
    CData/*6:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___sels_0_T_229;
    CData/*6:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___sels_0_T_246;
    CData/*6:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___sels_0_T_253;
    IData/*31:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2062;
    IData/*31:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2075;
    IData/*31:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2088;
    IData/*31:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2101;
    IData/*31:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2114;
    IData/*31:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2127;
    IData/*31:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2140;
    IData/*31:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2153;
    IData/*31:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2166;
    SData/*15:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2190;
    SData/*15:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2203;
    SData/*15:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2216;
    SData/*15:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2229;
    SData/*15:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2242;
    SData/*15:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2255;
    SData/*15:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2268;
    SData/*15:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2281;
    SData/*15:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2294;
    SData/*15:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2318;
    SData/*15:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2331;
    SData/*15:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2344;
    SData/*15:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2357;
    SData/*15:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2370;
    SData/*15:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2383;
    SData/*15:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2396;
    SData/*15:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2409;
    SData/*15:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2422;
    CData/*3:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2702;
    CData/*3:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2715;
    CData/*3:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2728;
    CData/*3:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2741;
    CData/*3:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2754;
    CData/*3:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2767;
    CData/*3:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2780;
    CData/*3:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2793;
    CData/*3:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2806;
    CData/*3:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2830;
    CData/*3:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2843;
    CData/*3:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2856;
    CData/*3:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2869;
    CData/*3:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2882;
    CData/*3:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2895;
    CData/*3:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2908;
    CData/*3:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2921;
    CData/*0:0*/ NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__can_fire;
    VlWide<2048>/*65535:0*/ __Vtemp_h787844f6__0;
    VlWide<2048>/*65535:0*/ __Vtemp_h18e388a4__0;
    VlWide<4>/*127:0*/ __Vtemp_h9ae78fe2__0;
    VlWide<4>/*127:0*/ __Vtemp_h1d0e0c1b__0;
    VlWide<4>/*127:0*/ __Vtemp_h4088c0d6__0;
    VlWide<4>/*127:0*/ __Vtemp_h09f8ce42__0;
    VlWide<2048>/*65535:0*/ __Vtemp_h731c81e5__0;
    VlWide<2048>/*65535:0*/ __Vtemp_haeff035b__0;
    VlWide<2048>/*65535:0*/ __Vtemp_h1a7401a7__0;
    VlWide<2048>/*65535:0*/ __Vtemp_h5126d7da__0;
    // Body
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT___debug_sample_T_1 
        = (1ULL + vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__debug_sample);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT___debug_sample_T_1 
        = (1ULL + vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__debug_sample);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT___flits_fired_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__flits_fired)));
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT___flits_left_T_1 
        = (0xfU & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__flits_left) 
                   - (IData)(1U)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_tail_io_deq_bits_MPORT_data 
        = vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_tail
        [vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__deq_ptr_value];
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_valid 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_outs_0_valid) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_sel_REG_0_0_0_0));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_valid 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_valid) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_sel_REG_0_0_0_0));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__empty_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__heads_0) 
           == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__tails_0));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__empty_1 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__heads_1) 
           == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__tails_1));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__empty_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__heads_2) 
           == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__tails_2));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_head_io_deq_bits_MPORT_data 
        = vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_head
        [vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__deq_ptr_value];
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__ptr_match 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__enq_ptr_value) 
           == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__deq_ptr_value));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ptr_match 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__enq_ptr_value) 
           == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__deq_ptr_value));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT___debug_tsc_T_1 
        = (1ULL + vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__debug_tsc);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT___debug_tsc_T_1 
        = (1ULL + vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__debug_tsc);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__wrap_1 
        = (2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__deq_ptr_value));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__deq_ptr_value)));
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___idle_counter_T_1 
        = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__idle_counter)));
    if ((1U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_0_g))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_bits_src_virt_id = 0U;
        NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_51 = 2U;
    } else {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_bits_src_virt_id 
            = ((1U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_1_g))
                ? 1U : 2U);
        NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_51 
            = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_valid) 
                & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_head))
                ? ((0U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))
                    ? ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_flow_egress_node)
                        ? 2U : 1U) : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_0_g))
                : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_0_g));
    }
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_valid 
        = (((1U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_0_g)) 
            | (1U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_1_g))) 
           | (1U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_2_g)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0_io_vcalloc_req_valid 
        = (((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_0_g)) 
            | (2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_1_g))) 
           | (2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_2_g)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___vcalloc_filter_T_4 
        = (((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_2_g)) 
            << 5U) | (((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_1_g)) 
                       << 4U) | (((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_0_g)) 
                                  << 3U) | ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_2_g)) 
                                              << 2U) 
                                             | (((2U 
                                                  == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_1_g)) 
                                                 << 1U) 
                                                | (2U 
                                                   == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_0_g)))) 
                                            & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__mask))))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__wrap 
        = (2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__enq_ptr_value));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__enq_ptr_value)));
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT__empty 
        = (1U & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT__maybe_full)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__ram_tail_io_deq_bits_MPORT_data 
        = vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__ram_tail
        [vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__deq_ptr_value];
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__ptr_match 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__enq_ptr_value) 
           == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__deq_ptr_value));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT___c_T 
        = ((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q__DOT__ram_vc_sel_0_2
            [0U] << 2U) | ((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q__DOT__ram_vc_sel_0_1
                            [0U] << 1U) | vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q__DOT__ram_vc_sel_0_0
                           [0U]));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__ptr_diff 
        = (3U & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__enq_ptr_value) 
                 - (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__deq_ptr_value)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__ptr_match 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__enq_ptr_value) 
           == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__deq_ptr_value));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___tails_T_16 
        = (((2U & ((IData)(1U) << (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)))
             ? 3U : 0U) | ((4U & ((IData)(1U) << (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)))
                            ? 6U : 0U));
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___tsc_T_1 
        = ((IData)(1U) + vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__tsc);
    if (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_head) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__monitor__DOT___GEN_6 
            = ((0U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
               | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__monitor__DOT__in_flight_0));
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__monitor__DOT___GEN_7 
            = ((1U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
               | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__monitor__DOT__in_flight_1));
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__monitor__DOT___GEN_8 
            = ((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
               | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__monitor__DOT__in_flight_2));
    } else {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__monitor__DOT___GEN_6 
            = vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__monitor__DOT__in_flight_0;
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__monitor__DOT___GEN_7 
            = vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__monitor__DOT__in_flight_1;
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__monitor__DOT___GEN_8 
            = vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__monitor__DOT__in_flight_2;
    }
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___GEN_1 
        = ((1U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))
            ? (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__tails_1)
            : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__tails_0));
    NoCChiselTester__DOT__th__DOT__noc_tester__DOT___sels_0_T_144 
        = ((0x4000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
            ? ((0x8000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                ? ((0x10000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                    ? ((0x20000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                        ? ((0x40000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                            ? ((0x80000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                ? ((0x100000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                    ? ((0x200000U & 
                                        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                        ? ((0x400000U 
                                            & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                            ? ((0x800000U 
                                                & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                                ? (
                                                   (0x1000000U 
                                                    & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                                    ? 
                                                   ((0x2000000U 
                                                     & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                                     ? 
                                                    ((0x4000000U 
                                                      & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                                      ? 
                                                     ((0x8000000U 
                                                       & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                                       ? 
                                                      ((0x10000000U 
                                                        & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                                        ? 
                                                       ((0x20000000U 
                                                         & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                                         ? 
                                                        ((0x40000000U 
                                                          & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                                          ? 0x7fU
                                                          : 0x7eU)
                                                         : 0x7dU)
                                                        : 0x7cU)
                                                       : 0x7bU)
                                                      : 0x7aU)
                                                     : 0x79U)
                                                    : 0x78U)
                                                : 0x77U)
                                            : 0x76U)
                                        : 0x75U) : 0x74U)
                                : 0x73U) : 0x72U) : 0x71U)
                    : 0x70U) : 0x6fU) : 0x6eU);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT___packet_remaining_T 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_19) 
             << 0x13U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_18) 
                           << 0x12U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_17) 
                                         << 0x11U) 
                                        | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_16) 
                                            << 0x10U) 
                                           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_15) 
                                               << 0xfU) 
                                              | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_14) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_13) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_12) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_11) 
                                                           << 0xbU) 
                                                          | ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_10) 
                                                             << 0xaU)))))))))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_9) 
               << 9U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_8) 
                          << 8U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_7) 
                                     << 7U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_6) 
                                                << 6U) 
                                               | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_5) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_4) 
                                                      << 4U) 
                                                     | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_3) 
                                                         << 3U) 
                                                        | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_2) 
                                                            << 2U) 
                                                           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_1) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_0)))))))))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT___T_2 
        = (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__debug_sample 
           == (QData)((IData)((0xfffffU & (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__plusarg_reader__DOT__myplus 
                                           - (IData)(1U))))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT___T_2 
        = (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__debug_sample 
           == (QData)((IData)((0xfffffU & (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__plusarg_reader__DOT__myplus 
                                           - (IData)(1U))))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT___util_ctr_T_1 
        = (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__util_ctr 
           + (QData)((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_valid)));
    if (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_valid) 
         & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_head))) {
        NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_33 
            = ((0U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
               | ((0U != (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
                  & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_0_vc_sel_0_0)));
        NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_34 
            = ((1U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
               | ((1U != (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
                  & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_1_vc_sel_0_0)));
        NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_35 
            = ((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
               | ((2U != (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
                  & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_2_vc_sel_0_0)));
    } else {
        NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_33 
            = vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_0_vc_sel_0_0;
        NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_34 
            = vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_1_vc_sel_0_0;
        NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_35 
            = vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_2_vc_sel_0_0;
    }
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_52 
        = (((1U != (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_0_g)) 
            & (1U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_1_g)))
            ? 2U : (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_valid) 
                     & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_head))
                     ? ((1U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))
                         ? ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_flow_egress_node)
                             ? 2U : 1U) : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_1_g))
                     : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_1_g)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_53 
        = (((~ ((1U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_0_g)) 
                | (1U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_1_g)))) 
            & (1U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_2_g)))
            ? 2U : (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_valid) 
                     & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_head))
                     ? ((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))
                         ? ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_flow_egress_node)
                             ? 2U : 1U) : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_2_g))
                     : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_2_g)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__full 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__ptr_match) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__maybe_full));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__empty 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__ptr_match) 
           & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__maybe_full)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__empty 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ptr_match) 
           & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__maybe_full)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__full 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ptr_match) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__maybe_full));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__vcalloc_filter 
        = ((1U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___vcalloc_filter_T_4))
            ? 1U : ((2U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___vcalloc_filter_T_4))
                     ? 2U : ((4U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___vcalloc_filter_T_4))
                              ? 4U : ((8U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___vcalloc_filter_T_4))
                                       ? 8U : ((0x10U 
                                                & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___vcalloc_filter_T_4))
                                                ? 0x10U
                                                : (
                                                   (0x20U 
                                                    & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___vcalloc_filter_T_4))
                                                    ? 0x20U
                                                    : 0U))))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__full 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__ptr_match) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__maybe_full));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__empty 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__ptr_match) 
           & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__maybe_full)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT___c_T_2 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT___c_T) 
           & (((0U != (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT__states_2_c)) 
               << 2U) | (((0U != (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT__states_1_c)) 
                          << 1U) | (0U != (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT__states_0_c)))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT___do_enq_T 
        = ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__ptr_match) 
               & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__maybe_full))) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_valid));
    if (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__ptr_match) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__empty 
            = (1U & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__maybe_full)));
        NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_count 
            = (3U & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__maybe_full)
                      ? 3U : 0U));
    } else {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__empty = 0U;
        NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_count 
            = (3U & (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__deq_ptr_value) 
                      > (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__enq_ptr_value))
                      ? ((IData)(3U) + (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__ptr_diff))
                      : (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__ptr_diff)));
    }
    if ((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_head_MPORT_addr 
            = vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__tails_2;
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_tail_MPORT_addr 
            = vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__tails_2;
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_payload_MPORT_addr 
            = vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__tails_2;
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___GEN_2 
            = vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__tails_2;
    } else {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_head_MPORT_addr 
            = NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___GEN_1;
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_tail_MPORT_addr 
            = NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___GEN_1;
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_payload_MPORT_addr 
            = NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___GEN_1;
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___GEN_2 
            = NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___GEN_1;
    }
    NoCChiselTester__DOT__th__DOT__noc_tester__DOT___sels_0_T_161 
        = ((0x20000000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
            ? ((0x40000000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                ? ((vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U] 
                    >> 0x1fU) ? ((1U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                  ? ((2U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                      ? ((4U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                          ? ((8U & 
                                              vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                              ? ((0x10U 
                                                  & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                                  ? 
                                                 ((0x20U 
                                                   & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                                   ? 
                                                  ((0x40U 
                                                    & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                                    ? 
                                                   ((0x80U 
                                                     & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                                     ? 
                                                    ((0x100U 
                                                      & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                                      ? 
                                                     ((0x200U 
                                                       & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                                       ? 
                                                      ((0x400U 
                                                        & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                                        ? 
                                                       ((0x800U 
                                                         & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                                         ? 
                                                        ((0x1000U 
                                                          & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                                          ? 
                                                         ((0x2000U 
                                                           & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])
                                                           ? (IData)(NoCChiselTester__DOT__th__DOT__noc_tester__DOT___sels_0_T_144)
                                                           : 0x6dU)
                                                          : 0x6cU)
                                                         : 0x6bU)
                                                        : 0x6aU)
                                                       : 0x69U)
                                                      : 0x68U)
                                                     : 0x67U)
                                                    : 0x66U)
                                                   : 0x65U)
                                                  : 0x64U)
                                              : 0x63U)
                                          : 0x62U) : 0x61U)
                                  : 0x60U) : 0x5fU)
                : 0x5eU) : 0x5dU);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_tail 
        = ((0U != (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__flits_left))
            ? (1U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__flits_left))
            : (0U == (7U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT___packet_remaining_T)));
    if (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_valid) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_66 
            = ((0U != (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_bits_src_virt_id)) 
               & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_33));
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_67 
            = ((1U != (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_bits_src_virt_id)) 
               & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_34));
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_68 
            = ((2U != (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_bits_src_virt_id)) 
               & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_35));
    } else {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_66 
            = NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_33;
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_67 
            = NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_34;
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_68 
            = NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_35;
    }
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT___vcalloc_buffer_io_enq_valid_T_1 
        = (1U & ((~ (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__empty)) 
                 | (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_head_io_deq_bits_MPORT_data))));
    NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q_io_enq_ready 
        = (1U & ((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__full)) 
                 | (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT__maybe_full))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__vcalloc_sel 
        = (7U & ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__vcalloc_filter) 
                 | ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__vcalloc_filter) 
                    >> 3U)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_in_0_valid 
        = ((((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__empty)) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q__DOT__maybe_full)) 
            & (0U != (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT___c_T_2))) 
           & ((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q__DOT__ram_vc_sel_0_0
               [0U] | vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q__DOT__ram_vc_sel_0_1
               [0U]) | vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q__DOT__ram_vc_sel_0_2
              [0U]));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__do_enq 
        = ((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__empty)) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT___do_enq_T));
    if (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__empty) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_head 
            = vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_outs_0_flit_head;
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_tail 
            = vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_outs_0_flit_tail;
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
            = vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_outs_0_flit_payload;
    } else if ((2U >= (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__deq_ptr_value))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_head 
            = (1U & vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__ram_head
               [vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__deq_ptr_value]);
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_tail 
            = (1U & vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__ram_tail
               [vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__deq_ptr_value]);
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
            = vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__ram_payload
            [vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__deq_ptr_value];
    } else {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_head = 0U;
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_tail = 0U;
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload = 0ULL;
    }
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_valid 
        = (1U & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_valid) 
                 | (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__empty))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_0_valid 
        = (((3U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_0_g)) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_0_vc_sel_0_0) 
               & (0U == (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_count)))) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0__DOT__maybe_full));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_1_valid 
        = (((3U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_1_g)) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_1_vc_sel_0_0) 
               & (0U == (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_count)))) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1__DOT__maybe_full));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_2_valid 
        = (((3U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_2_g)) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_2_vc_sel_0_0) 
               & (0U == (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_count)))) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2__DOT__maybe_full));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___tails_T_8 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___GEN_2) 
           == ((((1U & ((IData)(1U) << (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)))
                  ? 2U : 0U) | ((2U & ((IData)(1U) 
                                       << (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)))
                                 ? 5U : 0U)) | ((4U 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)))
                                                 ? 8U
                                                 : 0U)));
    NoCChiselTester__DOT__th__DOT__noc_tester__DOT___sels_0_T_178 
        = ((0x1000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
            ? ((0x2000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                ? ((0x4000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                    ? ((0x8000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                        ? ((0x10000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                            ? ((0x20000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                                ? ((0x40000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                                    ? ((0x80000U & 
                                        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                                        ? ((0x100000U 
                                            & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                                            ? ((0x200000U 
                                                & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                                                ? (
                                                   (0x400000U 
                                                    & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                                                    ? 
                                                   ((0x800000U 
                                                     & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                                                     ? 
                                                    ((0x1000000U 
                                                      & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                                                      ? 
                                                     ((0x2000000U 
                                                       & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                                                       ? 
                                                      ((0x4000000U 
                                                        & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                                                        ? 
                                                       ((0x8000000U 
                                                         & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                                                         ? 
                                                        ((0x10000000U 
                                                          & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                                                          ? (IData)(NoCChiselTester__DOT__th__DOT__noc_tester__DOT___sels_0_T_161)
                                                          : 0x5cU)
                                                         : 0x5bU)
                                                        : 0x5aU)
                                                       : 0x59U)
                                                      : 0x58U)
                                                     : 0x57U)
                                                    : 0x56U)
                                                : 0x55U)
                                            : 0x54U)
                                        : 0x53U) : 0x52U)
                                : 0x51U) : 0x50U) : 0x4fU)
                    : 0x4eU) : 0x4dU) : 0x4cU);
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_0 
        = (((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__vcalloc_sel) 
              & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_0_vc_sel_0_0)) 
             | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__vcalloc_sel) 
                 >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_1_vc_sel_0_0))) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__vcalloc_sel) 
                >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_2_vc_sel_0_0))) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__channel_empty));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__unassigned 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_in_0_valid) 
           & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__lock_0)));
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_3585 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_head) 
           | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__packet_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT___util_ctr_T_3 
        = (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__util_ctr_1 
           + (QData)((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_valid)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__do_deq 
        = ((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__empty)) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___flits_T_2 
        = (vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__flits 
           + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_3845 
        = (0xffffU & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_valid)
                       ? ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_head)
                           ? (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                      >> 0x10U)) : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__packet_rob_idx))
                       : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__packet_rob_idx)));
    VL_EXTEND_WI(65536,1, __Vtemp_h787844f6__0, ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_valid) 
                                                 & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_tail)));
    VL_SHIFTL_WWI(65536,65536,16, __Vtemp_h18e388a4__0, __Vtemp_h787844f6__0, 
                  (0xffffU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                      >> 0x10U))));
    VL_ASSIGN_W(65536,vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_frees, __Vtemp_h18e388a4__0);
    if ((0xdU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                   >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2830 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_13;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2702 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_13;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2062 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_13_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2190 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_13_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2318 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_13_flits_fired;
    } else if ((0xcU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                          >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2830 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_12;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2702 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_12;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2062 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_12_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2190 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_12_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2318 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_12_flits_fired;
    } else if ((0xbU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                          >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2830 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_11;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2702 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_11;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2062 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_11_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2190 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_11_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2318 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_11_flits_fired;
    } else if ((0xaU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                          >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2830 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_10;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2702 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_10;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2062 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_10_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2190 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_10_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2318 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_10_flits_fired;
    } else if ((9U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                        >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2830 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_9;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2702 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_9;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2062 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_9_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2190 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_9_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2318 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_9_flits_fired;
    } else if ((8U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                        >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2830 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_8;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2702 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_8;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2062 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_8_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2190 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_8_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2318 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_8_flits_fired;
    } else if ((7U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                        >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2830 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_7;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2702 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_7;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2062 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_7_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2190 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_7_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2318 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_7_flits_fired;
    } else if ((6U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                        >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2830 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_6;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2702 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_6;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2062 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_6_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2190 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_6_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2318 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_6_flits_fired;
    } else if ((5U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                        >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2830 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_5;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2702 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_5;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2062 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_5_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2190 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_5_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2318 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_5_flits_fired;
    } else if ((4U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                        >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2830 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_4;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2702 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_4;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2062 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_4_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2190 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_4_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2318 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_4_flits_fired;
    } else if ((3U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                        >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2830 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_3;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2702 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_3;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2062 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_3_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2190 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_3_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2318 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_3_flits_fired;
    } else if ((2U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                        >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2830 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_2;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2702 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_2;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2062 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_2_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2190 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_2_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2318 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_2_flits_fired;
    } else if ((1U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                        >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2830 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_1;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2702 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_1;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2062 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_1_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2190 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_1_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2318 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_1_flits_fired;
    } else {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2830 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_0;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2702 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_0;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2062 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_0_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2190 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_0_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2318 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_0_flits_fired;
    }
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___unassigned_T 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_2_valid) 
            << 2U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_1_valid) 
                       << 1U) | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_0_valid)));
    NoCChiselTester__DOT__th__DOT__noc_tester__DOT___sels_0_T_195 
        = ((0x8000000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
            ? ((0x10000000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                ? ((0x20000000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                    ? ((0x40000000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                        ? ((vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U] 
                            >> 0x1fU) ? ((1U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                                          ? ((2U & 
                                              vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                                              ? ((4U 
                                                  & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                                                  ? 
                                                 ((8U 
                                                   & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                                                   ? 
                                                  ((0x10U 
                                                    & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                                                    ? 
                                                   ((0x20U 
                                                     & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                                                     ? 
                                                    ((0x40U 
                                                      & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                                                      ? 
                                                     ((0x80U 
                                                       & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                                                       ? 
                                                      ((0x100U 
                                                        & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                                                        ? 
                                                       ((0x200U 
                                                         & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                                                         ? 
                                                        ((0x400U 
                                                          & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                                                          ? 
                                                         ((0x800U 
                                                           & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])
                                                           ? (IData)(NoCChiselTester__DOT__th__DOT__noc_tester__DOT___sels_0_T_178)
                                                           : 0x4bU)
                                                          : 0x4aU)
                                                         : 0x49U)
                                                        : 0x48U)
                                                       : 0x47U)
                                                      : 0x46U)
                                                     : 0x45U)
                                                    : 0x44U)
                                                   : 0x43U)
                                                  : 0x42U)
                                              : 0x41U)
                                          : 0x40U) : 0x3fU)
                        : 0x3eU) : 0x3dU) : 0x3cU) : 0x3bU);
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_vals_0 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0_io_vcalloc_req_valid) 
           & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_0));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT___sel_T_2 
        = (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__unassigned) 
            << 1U) | ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__unassigned) 
                      & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__mask))));
    if ((0x1aU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                    >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2843 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_26;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2715 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_26;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2075 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_26_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2203 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_26_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2331 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_26_flits_fired;
    } else if ((0x19U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2843 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_25;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2715 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_25;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2075 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_25_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2203 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_25_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2331 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_25_flits_fired;
    } else if ((0x18U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2843 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_24;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2715 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_24;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2075 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_24_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2203 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_24_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2331 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_24_flits_fired;
    } else if ((0x17U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2843 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_23;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2715 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_23;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2075 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_23_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2203 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_23_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2331 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_23_flits_fired;
    } else if ((0x16U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2843 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_22;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2715 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_22;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2075 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_22_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2203 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_22_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2331 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_22_flits_fired;
    } else if ((0x15U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2843 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_21;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2715 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_21;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2075 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_21_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2203 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_21_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2331 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_21_flits_fired;
    } else if ((0x14U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2843 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_20;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2715 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_20;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2075 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_20_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2203 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_20_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2331 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_20_flits_fired;
    } else if ((0x13U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2843 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_19;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2715 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_19;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2075 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_19_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2203 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_19_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2331 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_19_flits_fired;
    } else if ((0x12U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2843 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_18;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2715 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_18;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2075 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_18_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2203 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_18_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2331 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_18_flits_fired;
    } else if ((0x11U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2843 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_17;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2715 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_17;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2075 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_17_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2203 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_17_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2331 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_17_flits_fired;
    } else if ((0x10U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2843 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_16;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2715 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_16;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2075 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_16_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2203 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_16_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2331 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_16_flits_fired;
    } else if ((0xfU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                          >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2843 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_15;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2715 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_15;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2075 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_15_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2203 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_15_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2331 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_15_flits_fired;
    } else if ((0xeU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                          >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2843 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_14;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2715 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_14;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2075 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_14_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2203 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_14_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2331 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_14_flits_fired;
    } else {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2843 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2830;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2715 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2702;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2075 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2062;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2203 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2190;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2331 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2318;
    }
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___chosen_T 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___unassigned_T) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__lock_0));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__unassigned 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___unassigned_T) 
           & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__lock_0)));
    NoCChiselTester__DOT__th__DOT__noc_tester__DOT___sels_0_T_212 
        = ((0x400U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
            ? ((0x800U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                ? ((0x1000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                    ? ((0x2000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                        ? ((0x4000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                            ? ((0x8000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                                ? ((0x10000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                                    ? ((0x20000U & 
                                        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                                        ? ((0x40000U 
                                            & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                                            ? ((0x80000U 
                                                & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                                                ? (
                                                   (0x100000U 
                                                    & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                                                     ? 
                                                    ((0x400000U 
                                                      & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                                                      ? 
                                                     ((0x800000U 
                                                       & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                                                       ? 
                                                      ((0x1000000U 
                                                        & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                                                        ? 
                                                       ((0x2000000U 
                                                         & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                                                         ? 
                                                        ((0x4000000U 
                                                          & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                                                          ? (IData)(NoCChiselTester__DOT__th__DOT__noc_tester__DOT___sels_0_T_195)
                                                          : 0x3aU)
                                                         : 0x39U)
                                                        : 0x38U)
                                                       : 0x37U)
                                                      : 0x36U)
                                                     : 0x35U)
                                                    : 0x34U)
                                                : 0x33U)
                                            : 0x32U)
                                        : 0x31U) : 0x30U)
                                : 0x2fU) : 0x2eU) : 0x2dU)
                    : 0x2cU) : 0x2bU) : 0x2aU);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___GEN_0 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_vals_0) 
           | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__mask));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_0 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_vals_0) 
           & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_0));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_2 
        = (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_vals_0) 
            << 1U) | ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_vals_0) 
                      & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__mask))));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__sel 
        = ((1U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT___sel_T_2))
            ? 1U : ((2U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT___sel_T_2))
                     ? 2U : 0U));
    if ((0x27U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                    >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2856 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_39;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2728 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_39;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2088 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_39_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2216 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_39_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2344 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_39_flits_fired;
    } else if ((0x26U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2856 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_38;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2728 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_38;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2088 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_38_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2216 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_38_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2344 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_38_flits_fired;
    } else if ((0x25U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2856 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_37;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2728 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_37;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2088 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_37_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2216 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_37_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2344 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_37_flits_fired;
    } else if ((0x24U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2856 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_36;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2728 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_36;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2088 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_36_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2216 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_36_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2344 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_36_flits_fired;
    } else if ((0x23U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2856 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_35;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2728 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_35;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2088 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_35_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2216 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_35_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2344 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_35_flits_fired;
    } else if ((0x22U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2856 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_34;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2728 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_34;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2088 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_34_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2216 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_34_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2344 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_34_flits_fired;
    } else if ((0x21U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2856 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_33;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2728 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_33;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2088 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_33_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2216 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_33_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2344 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_33_flits_fired;
    } else if ((0x20U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2856 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_32;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2728 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_32;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2088 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_32_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2216 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_32_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2344 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_32_flits_fired;
    } else if ((0x1fU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2856 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_31;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2728 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_31;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2088 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_31_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2216 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_31_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2344 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_31_flits_fired;
    } else if ((0x1eU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2856 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_30;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2728 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_30;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2088 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_30_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2216 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_30_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2344 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_30_flits_fired;
    } else if ((0x1dU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2856 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_29;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2728 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_29;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2088 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_29_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2216 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_29_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2344 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_29_flits_fired;
    } else if ((0x1cU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2856 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_28;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2728 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_28;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2088 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_28_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2216 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_28_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2344 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_28_flits_fired;
    } else if ((0x1bU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2856 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_27;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2728 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_27;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2088 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_27_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2216 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_27_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2344 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_27_flits_fired;
    } else {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2856 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2843;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2728 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2715;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2088 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2075;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2216 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2203;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2344 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2331;
    }
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___sel_T_2 
        = (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__unassigned) 
            << 3U) | ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__unassigned) 
                      & (0U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__mask))));
    NoCChiselTester__DOT__th__DOT__noc_tester__DOT___sels_0_T_229 
        = ((0x2000000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
            ? ((0x4000000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                ? ((0x8000000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                    ? ((0x10000000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                        ? ((0x20000000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                            ? ((0x40000000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                                ? ((vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U] 
                                    >> 0x1fU) ? ((1U 
                                                  & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                                                   ? 
                                                  ((4U 
                                                    & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                                                     ? 
                                                    ((0x10U 
                                                      & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                                                      ? 
                                                     ((0x20U 
                                                       & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                                                       ? 
                                                      ((0x40U 
                                                        & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                                                        ? 
                                                       ((0x80U 
                                                         & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                                                         ? 
                                                        ((0x100U 
                                                          & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                                                          ? 
                                                         ((0x200U 
                                                           & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])
                                                           ? (IData)(NoCChiselTester__DOT__th__DOT__noc_tester__DOT___sels_0_T_212)
                                                           : 0x29U)
                                                          : 0x28U)
                                                         : 0x27U)
                                                        : 0x26U)
                                                       : 0x25U)
                                                      : 0x24U)
                                                     : 0x23U)
                                                    : 0x22U)
                                                   : 0x21U)
                                                  : 0x20U)
                                    : 0x1fU) : 0x1eU)
                            : 0x1dU) : 0x1cU) : 0x1bU)
                : 0x1aU) : 0x19U);
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_filter 
        = ((1U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_2))
            ? 1U : ((2U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_2))
                     ? 2U : 0U));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT___choices_0_T_1 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__sel) 
           | (1U & ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__sel) 
                    >> 1U)));
    if ((0x34U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                    >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2869 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_52;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2741 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_52;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2101 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_52_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2229 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_52_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2357 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_52_flits_fired;
    } else if ((0x33U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2869 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_51;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2741 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_51;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2101 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_51_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2229 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_51_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2357 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_51_flits_fired;
    } else if ((0x32U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2869 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_50;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2741 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_50;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2101 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_50_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2229 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_50_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2357 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_50_flits_fired;
    } else if ((0x31U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2869 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_49;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2741 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_49;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2101 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_49_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2229 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_49_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2357 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_49_flits_fired;
    } else if ((0x30U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2869 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_48;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2741 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_48;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2101 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_48_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2229 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_48_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2357 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_48_flits_fired;
    } else if ((0x2fU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2869 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_47;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2741 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_47;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2101 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_47_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2229 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_47_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2357 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_47_flits_fired;
    } else if ((0x2eU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2869 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_46;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2741 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_46;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2101 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_46_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2229 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_46_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2357 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_46_flits_fired;
    } else if ((0x2dU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2869 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_45;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2741 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_45;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2101 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_45_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2229 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_45_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2357 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_45_flits_fired;
    } else if ((0x2cU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2869 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_44;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2741 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_44;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2101 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_44_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2229 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_44_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2357 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_44_flits_fired;
    } else if ((0x2bU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2869 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_43;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2741 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_43;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2101 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_43_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2229 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_43_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2357 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_43_flits_fired;
    } else if ((0x2aU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2869 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_42;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2741 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_42;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2101 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_42_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2229 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_42_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2357 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_42_flits_fired;
    } else if ((0x29U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2869 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_41;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2741 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_41;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2101 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_41_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2229 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_41_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2357 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_41_flits_fired;
    } else if ((0x28U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2869 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_40;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2741 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_40;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2101 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_40_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2229 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_40_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2357 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_40_flits_fired;
    } else {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2869 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2856;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2741 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2728;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2101 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2088;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2229 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2216;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2357 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2344;
    }
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__sel 
        = ((1U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___sel_T_2))
            ? 1U : ((2U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___sel_T_2))
                     ? 2U : ((4U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___sel_T_2))
                              ? 4U : ((8U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___sel_T_2))
                                       ? 8U : ((0x10U 
                                                & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___sel_T_2))
                                                ? 0x10U
                                                : (
                                                   (0x20U 
                                                    & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___sel_T_2))
                                                    ? 0x20U
                                                    : 0U))))));
    NoCChiselTester__DOT__th__DOT__noc_tester__DOT___sels_0_T_246 
        = ((0x100U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
            ? ((0x200U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                ? ((0x400U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                    ? ((0x800U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                        ? ((0x1000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                            ? ((0x2000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                                ? ((0x4000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                                    ? ((0x8000U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                                        ? ((0x10000U 
                                            & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                                            ? ((0x20000U 
                                                & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                                                ? (
                                                   (0x40000U 
                                                    & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                                                    ? 
                                                   ((0x80000U 
                                                     & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                                                      ? 
                                                     ((0x200000U 
                                                       & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                                                       ? 
                                                      ((0x400000U 
                                                        & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                                                        ? 
                                                       ((0x800000U 
                                                         & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                                                         ? 
                                                        ((0x1000000U 
                                                          & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                                                          ? (IData)(NoCChiselTester__DOT__th__DOT__noc_tester__DOT___sels_0_T_229)
                                                          : 0x18U)
                                                         : 0x17U)
                                                        : 0x16U)
                                                       : 0x15U)
                                                      : 0x14U)
                                                     : 0x13U)
                                                    : 0x12U)
                                                : 0x11U)
                                            : 0x10U)
                                        : 0xfU) : 0xeU)
                                : 0xdU) : 0xcU) : 0xbU)
                    : 0xaU) : 9U) : 8U);
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_req_0_ready 
        = (IData)((0U != (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_filter)));
    if (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_in_0_valid) 
         & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__lock_0))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_chosen_oh_0 
            = (1U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__lock_0));
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__chosen 
            = (1U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__lock_0));
    } else {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_chosen_oh_0 
            = (1U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT___choices_0_T_1));
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__chosen 
            = (1U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT___choices_0_T_1));
    }
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer_io_deq_ready 
        = ((((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_in_0_valid) 
               & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__lock_0))
               ? (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__lock_0)
               : (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT___choices_0_T_1)) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_in_0_valid)) 
            & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q__DOT__maybe_full)) 
           & (0U != (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT___c_T_2)));
    if ((0x41U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                    >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2882 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_65;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2754 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_65;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2114 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_65_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2242 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_65_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2370 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_65_flits_fired;
    } else if ((0x40U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2882 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_64;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2754 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_64;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2114 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_64_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2242 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_64_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2370 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_64_flits_fired;
    } else if ((0x3fU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2882 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_63;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2754 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_63;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2114 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_63_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2242 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_63_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2370 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_63_flits_fired;
    } else if ((0x3eU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2882 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_62;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2754 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_62;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2114 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_62_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2242 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_62_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2370 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_62_flits_fired;
    } else if ((0x3dU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2882 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_61;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2754 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_61;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2114 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_61_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2242 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_61_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2370 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_61_flits_fired;
    } else if ((0x3cU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2882 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_60;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2754 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_60;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2114 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_60_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2242 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_60_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2370 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_60_flits_fired;
    } else if ((0x3bU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2882 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_59;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2754 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_59;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2114 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_59_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2242 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_59_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2370 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_59_flits_fired;
    } else if ((0x3aU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2882 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_58;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2754 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_58;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2114 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_58_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2242 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_58_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2370 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_58_flits_fired;
    } else if ((0x39U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2882 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_57;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2754 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_57;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2114 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_57_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2242 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_57_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2370 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_57_flits_fired;
    } else if ((0x38U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2882 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_56;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2754 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_56;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2114 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_56_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2242 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_56_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2370 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_56_flits_fired;
    } else if ((0x37U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2882 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_55;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2754 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_55;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2114 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_55_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2242 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_55_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2370 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_55_flits_fired;
    } else if ((0x36U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2882 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_54;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2754 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_54;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2114 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_54_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2242 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_54_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2370 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_54_flits_fired;
    } else if ((0x35U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2882 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_53;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2754 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_53;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2114 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_53_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2242 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_53_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2370 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_53_flits_fired;
    } else {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2882 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2869;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2754 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2741;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2114 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2101;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2242 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2229;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2370 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2357;
    }
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___choices_0_T_1 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__sel) 
           | (7U & ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__sel) 
                    >> 3U)));
    NoCChiselTester__DOT__th__DOT__noc_tester__DOT___sels_0_T_253 
        = ((2U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
            ? ((4U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                ? ((8U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                    ? ((0x10U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                        ? ((0x20U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                            ? ((0x40U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                                ? ((0x80U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])
                                    ? (IData)(NoCChiselTester__DOT__th__DOT__noc_tester__DOT___sels_0_T_246)
                                    : 7U) : 6U) : 5U)
                        : 4U) : 3U) : 2U) : 1U);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___T_33 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_req_0_ready) 
           & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0_io_vcalloc_req_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_71 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_0_g)) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__vcalloc_sel)) 
            & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_req_0_ready))
            ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_valid)
                     ? ((0U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_bits_src_virt_id))
                         ? 2U : (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_51))
                     : (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_51)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_72 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_1_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__vcalloc_sel) 
                >> 1U)) & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_req_0_ready))
            ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_valid)
                     ? ((1U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_bits_src_virt_id))
                         ? 2U : (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_52))
                     : (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_52)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_73 
        = ((((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_2_g)) 
             & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__vcalloc_sel) 
                >> 2U)) & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_req_0_ready))
            ? 3U : ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_valid)
                     ? ((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_bits_src_virt_id))
                         ? 2U : (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_53))
                     : (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_53)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_out_0_valid 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_in_0_valid) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__chosen));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__do_deq 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer_io_deq_ready) 
           & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__empty)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q_io_deq_ready 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__ram_tail_io_deq_bits_MPORT_data) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer_io_deq_ready) 
              & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__empty))));
    if ((0x4eU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                    >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2895 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_78;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2767 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_78;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2127 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_78_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2255 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_78_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2383 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_78_flits_fired;
    } else if ((0x4dU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2895 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_77;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2767 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_77;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2127 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_77_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2255 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_77_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2383 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_77_flits_fired;
    } else if ((0x4cU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2895 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_76;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2767 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_76;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2127 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_76_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2255 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_76_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2383 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_76_flits_fired;
    } else if ((0x4bU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2895 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_75;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2767 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_75;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2127 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_75_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2255 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_75_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2383 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_75_flits_fired;
    } else if ((0x4aU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2895 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_74;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2767 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_74;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2127 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_74_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2255 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_74_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2383 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_74_flits_fired;
    } else if ((0x49U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2895 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_73;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2767 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_73;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2127 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_73_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2255 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_73_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2383 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_73_flits_fired;
    } else if ((0x48U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2895 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_72;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2767 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_72;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2127 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_72_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2255 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_72_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2383 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_72_flits_fired;
    } else if ((0x47U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2895 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_71;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2767 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_71;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2127 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_71_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2255 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_71_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2383 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_71_flits_fired;
    } else if ((0x46U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2895 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_70;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2767 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_70;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2127 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_70_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2255 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_70_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2383 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_70_flits_fired;
    } else if ((0x45U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2895 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_69;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2767 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_69;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2127 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_69_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2255 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_69_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2383 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_69_flits_fired;
    } else if ((0x44U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2895 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_68;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2767 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_68;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2127 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_68_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2255 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_68_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2383 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_68_flits_fired;
    } else if ((0x43U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2895 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_67;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2767 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_67;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2127 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_67_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2255 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_67_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2383 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_67_flits_fired;
    } else if ((0x42U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2895 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_66;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2767 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_66;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2127 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_66_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2255 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_66_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2383 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_66_flits_fired;
    } else {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2895 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2882;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2767 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2754;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2127 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2114;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2255 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2242;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2383 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2370;
    }
    if ((0U != (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___chosen_T))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_chosen_oh_0 
            = (7U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__lock_0));
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__chosen 
            = (7U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__lock_0));
    } else {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_chosen_oh_0 
            = (7U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___choices_0_T_1));
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__chosen 
            = (7U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___choices_0_T_1));
    }
    if ((1U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U])) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_rob_idx 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___sels_0_T_253;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___sels_0_T_253;
    } else {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_rob_idx = 0U;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0 = 0U;
    }
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q__DOT__do_deq 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q_io_deq_ready) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q__DOT__maybe_full));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q_io_enq_ready 
        = (1U & ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q_io_deq_ready) 
                 | (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q__DOT__maybe_full))));
    if ((0x5bU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                    >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2908 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_91;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2780 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_91;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2140 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_91_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2268 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_91_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2396 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_91_flits_fired;
    } else if ((0x5aU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2908 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_90;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2780 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_90;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2140 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_90_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2268 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_90_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2396 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_90_flits_fired;
    } else if ((0x59U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2908 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_89;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2780 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_89;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2140 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_89_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2268 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_89_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2396 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_89_flits_fired;
    } else if ((0x58U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2908 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_88;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2780 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_88;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2140 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_88_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2268 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_88_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2396 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_88_flits_fired;
    } else if ((0x57U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2908 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_87;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2780 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_87;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2140 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_87_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2268 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_87_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2396 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_87_flits_fired;
    } else if ((0x56U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2908 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_86;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2780 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_86;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2140 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_86_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2268 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_86_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2396 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_86_flits_fired;
    } else if ((0x55U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2908 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_85;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2780 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_85;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2140 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_85_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2268 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_85_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2396 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_85_flits_fired;
    } else if ((0x54U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2908 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_84;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2780 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_84;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2140 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_84_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2268 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_84_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2396 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_84_flits_fired;
    } else if ((0x53U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2908 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_83;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2780 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_83;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2140 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_83_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2268 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_83_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2396 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_83_flits_fired;
    } else if ((0x52U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2908 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_82;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2780 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_82;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2140 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_82_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2268 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_82_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2396 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_82_flits_fired;
    } else if ((0x51U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2908 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_81;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2780 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_81;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2140 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_81_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2268 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_81_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2396 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_81_flits_fired;
    } else if ((0x50U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2908 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_80;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2780 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_80;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2140 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_80_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2268 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_80_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2396 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_80_flits_fired;
    } else if ((0x4fU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2908 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_79;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2780 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_79;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2140 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_79_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2268 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_79_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2396 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_79_flits_fired;
    } else {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2908 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2895;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2780 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2767;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2140 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2127;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2268 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2255;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2396 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2383;
    }
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_tail 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__chosen) 
             & vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0__DOT__ram_tail
             [0U]) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__chosen) 
                       >> 1U) & vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1__DOT__ram_tail
                      [0U])) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__chosen) 
                                 >> 2U) & vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2__DOT__ram_tail
                                [0U]));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_vc_sel_0_0 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__chosen) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_0_vc_sel_0_0)) 
            | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__chosen) 
                >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_1_vc_sel_0_0))) 
           | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__chosen) 
               >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_2_vc_sel_0_0)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___io_out_0_valid_T 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___unassigned_T) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__chosen));
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload 
        = (((QData)((IData)(((0U != (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__flits_left))
                              ? vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__payload_tsc
                              : vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__tsc))) 
            << 0x20U) | (QData)((IData)(((((0U != (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__flits_left))
                                            ? (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__payload_rob_idx)
                                            : (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_rob_idx)) 
                                          << 0x10U) 
                                         | ((0U != (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__flits_left))
                                             ? (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__flits_fired)
                                             : 0U)))));
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h9ae78fe2__0, vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids, (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0));
    NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__can_fire 
        = ((0U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__flits_left)) 
           & ((((~ __Vtemp_h9ae78fe2__0[0U]) & (0U 
                                                != 
                                                ((((~ 
                                                    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[0U]) 
                                                   | (~ 
                                                      vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[1U])) 
                                                  | (~ 
                                                     vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[2U])) 
                                                 | (~ 
                                                    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids[3U])))) 
               & (0xaU <= vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__tsc)) 
              & (0xc350U > vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__txs)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0_io_vcalloc_req_valid 
        = (((((~ (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__empty)) 
              & (~ (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__empty))) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_head_io_deq_bits_MPORT_data)) 
            & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__full))) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q_io_enq_ready));
    if ((0x68U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                    >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2921 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_104;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2793 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_104;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2153 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_104_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2281 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_104_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2409 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_104_flits_fired;
    } else if ((0x67U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2921 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_103;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2793 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_103;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2153 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_103_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2281 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_103_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2409 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_103_flits_fired;
    } else if ((0x66U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2921 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_102;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2793 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_102;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2153 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_102_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2281 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_102_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2409 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_102_flits_fired;
    } else if ((0x65U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2921 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_101;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2793 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_101;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2153 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_101_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2281 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_101_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2409 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_101_flits_fired;
    } else if ((0x64U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2921 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_100;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2793 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_100;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2153 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_100_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2281 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_100_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2409 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_100_flits_fired;
    } else if ((0x63U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2921 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_99;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2793 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_99;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2153 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_99_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2281 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_99_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2409 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_99_flits_fired;
    } else if ((0x62U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2921 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_98;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2793 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_98;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2153 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_98_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2281 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_98_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2409 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_98_flits_fired;
    } else if ((0x61U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2921 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_97;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2793 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_97;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2153 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_97_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2281 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_97_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2409 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_97_flits_fired;
    } else if ((0x60U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2921 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_96;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2793 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_96;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2153 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_96_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2281 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_96_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2409 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_96_flits_fired;
    } else if ((0x5fU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2921 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_95;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2793 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_95;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2153 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_95_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2281 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_95_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2409 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_95_flits_fired;
    } else if ((0x5eU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2921 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_94;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2793 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_94;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2153 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_94_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2281 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_94_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2409 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_94_flits_fired;
    } else if ((0x5dU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2921 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_93;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2793 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_93;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2153 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_93_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2281 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_93_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2409 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_93_flits_fired;
    } else if ((0x5cU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2921 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_92;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2793 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_92;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2153 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_92_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2281 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_92_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2409 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_92_flits_fired;
    } else {
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2921 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2908;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2793 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2780;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2153 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2140;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2281 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2268;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2409 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2396;
    }
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_in_0_valid 
        = ((0U != (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___io_out_0_valid_T)) 
           & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_vc_sel_0_0));
    NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_valid 
        = ((0U != (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__flits_left)) 
           | (IData)(NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__can_fire));
    if ((0x75U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                    >> 0x10U))))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2934 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_117;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2806 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_117;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2166 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_117_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2294 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_117_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2422 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_117_flits_fired;
    } else if ((0x74U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2934 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_116;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2806 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_116;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2166 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_116_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2294 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_116_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2422 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_116_flits_fired;
    } else if ((0x73U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2934 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_115;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2806 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_115;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2166 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_115_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2294 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_115_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2422 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_115_flits_fired;
    } else if ((0x72U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2934 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_114;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2806 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_114;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2166 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_114_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2294 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_114_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2422 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_114_flits_fired;
    } else if ((0x71U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2934 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_113;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2806 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_113;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2166 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_113_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2294 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_113_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2422 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_113_flits_fired;
    } else if ((0x70U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2934 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_112;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2806 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_112;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2166 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_112_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2294 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_112_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2422 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_112_flits_fired;
    } else if ((0x6fU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2934 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_111;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2806 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_111;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2166 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_111_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2294 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_111_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2422 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_111_flits_fired;
    } else if ((0x6eU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2934 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_110;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2806 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_110;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2166 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_110_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2294 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_110_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2422 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_110_flits_fired;
    } else if ((0x6dU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2934 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_109;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2806 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_109;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2166 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_109_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2294 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_109_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2422 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_109_flits_fired;
    } else if ((0x6cU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2934 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_108;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2806 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_108;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2166 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_108_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2294 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_108_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2422 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_108_flits_fired;
    } else if ((0x6bU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2934 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_107;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2806 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_107;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2166 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_107_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2294 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_107_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2422 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_107_flits_fired;
    } else if ((0x6aU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2934 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_106;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2806 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_106;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2166 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_106_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2294 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_106_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2422 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_106_flits_fired;
    } else if ((0x69U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2934 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_105;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2806 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_105;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2166 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_105_tsc;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2294 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_105_rob_idx;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2422 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_105_flits_fired;
    } else {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2934 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2921;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2806 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2793;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2166 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2153;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2294 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2281;
        NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2422 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2409;
    }
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__unassigned 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_in_0_valid) 
           & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__lock_0)));
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT___do_enq_T 
        = ((IData)(NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q_io_enq_ready) 
           & (IData)(NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q_io_deq_valid 
        = ((IData)(NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_valid) 
           | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT__maybe_full));
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT___io_fire_T 
        = ((IData)(NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q_io_enq_ready) 
           & (IData)(NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_valid));
    if ((0x7fU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                    >> 0x10U))))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2816 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_127;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2432 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_127_flits_fired;
    } else if ((0x7eU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2816 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_126;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2432 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_126_flits_fired;
    } else if ((0x7dU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2816 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_125;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2432 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_125_flits_fired;
    } else if ((0x7cU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2816 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_124;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2432 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_124_flits_fired;
    } else if ((0x7bU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2816 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_123;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2432 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_123_flits_fired;
    } else if ((0x7aU == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2816 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_122;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2432 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_122_flits_fired;
    } else if ((0x79U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2816 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_121;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2432 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_121_flits_fired;
    } else if ((0x78U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2816 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_120;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2432 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_120_flits_fired;
    } else if ((0x77U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2816 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_119;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2432 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_119_flits_fired;
    } else if ((0x76U == (0x7fU & (IData)((vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                           >> 0x10U))))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2816 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_118;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2432 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_118_flits_fired;
    } else {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2816 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2806;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2432 
            = NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2422;
    }
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT___sel_T_2 
        = (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__unassigned) 
            << 1U) | ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__unassigned) 
                      & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__mask))));
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT___GEN_12 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__full) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT___do_enq_T));
    if (vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT__maybe_full) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q_io_deq_bits_head 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT__ram_head
            [0U];
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT__do_enq 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT___do_enq_T;
    } else {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q_io_deq_bits_head 
            = (0U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__flits_left));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT__do_enq 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT___GEN_12;
    }
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__do_enq 
        = ((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__full)) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q_io_deq_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT__do_deq 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT__maybe_full) 
           & ((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__full)) 
              & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q_io_deq_valid)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT___T_3 
        = ((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__full)) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q_io_deq_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0_io_router_req_valid 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q_io_deq_valid) 
            & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__full))) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q_io_deq_bits_head));
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_fire 
        = ((IData)(NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__can_fire) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT___io_fire_T));
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___T_31 
        = (((QData)((IData)(((0x7fU == (0x7fU & (IData)(
                                                        (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                                         >> 0x10U))))
                              ? vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_127_tsc
                              : ((0x7eU == (0x7fU & (IData)(
                                                            (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                                             >> 0x10U))))
                                  ? vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_126_tsc
                                  : ((0x7dU == (0x7fU 
                                                & (IData)(
                                                          (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                                           >> 0x10U))))
                                      ? vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_125_tsc
                                      : ((0x7cU == 
                                          (0x7fU & (IData)(
                                                           (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                                            >> 0x10U))))
                                          ? vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_124_tsc
                                          : ((0x7bU 
                                              == (0x7fU 
                                                  & (IData)(
                                                            (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                                             >> 0x10U))))
                                              ? vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_123_tsc
                                              : ((0x7aU 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                                              >> 0x10U))))
                                                  ? vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_122_tsc
                                                  : 
                                                 ((0x79U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                                               >> 0x10U))))
                                                   ? vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_121_tsc
                                                   : 
                                                  ((0x78U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(
                                                               (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                                                >> 0x10U))))
                                                    ? vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_120_tsc
                                                    : 
                                                   ((0x77U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(
                                                                (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                                                 >> 0x10U))))
                                                     ? vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_119_tsc
                                                     : 
                                                    ((0x76U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(
                                                                 (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                                                  >> 0x10U))))
                                                      ? vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_118_tsc
                                                      : NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2166)))))))))))) 
            << 0x20U) | (QData)((IData)(((((0x7fU == 
                                            (0x7fU 
                                             & (IData)(
                                                       (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                                        >> 0x10U))))
                                            ? (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_127_rob_idx)
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                                            >> 0x10U))))
                                                ? (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_126_rob_idx)
                                                : (
                                                   (0x7dU 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(
                                                               (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                                                >> 0x10U))))
                                                    ? (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_125_rob_idx)
                                                    : 
                                                   ((0x7cU 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(
                                                                (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                                                 >> 0x10U))))
                                                     ? (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_124_rob_idx)
                                                     : 
                                                    ((0x7bU 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(
                                                                 (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                                                  >> 0x10U))))
                                                      ? (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_123_rob_idx)
                                                      : 
                                                     ((0x7aU 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(
                                                                  (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                                                   >> 0x10U))))
                                                       ? (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_122_rob_idx)
                                                       : 
                                                      ((0x79U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                                                    >> 0x10U))))
                                                        ? (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_121_rob_idx)
                                                        : 
                                                       ((0x78U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                                                     >> 0x10U))))
                                                         ? (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_120_rob_idx)
                                                         : 
                                                        ((0x77U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                                                      >> 0x10U))))
                                                          ? (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_119_rob_idx)
                                                          : 
                                                         ((0x76U 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload 
                                                                       >> 0x10U))))
                                                           ? (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_118_rob_idx)
                                                           : (IData)(NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2294))))))))))) 
                                          << 0x10U) 
                                         | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2432)))));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__sel 
        = ((1U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT___sel_T_2))
            ? 1U : ((2U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT___sel_T_2))
                     ? 2U : 0U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT___util_ctr_T_1 
        = (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__util_ctr 
           + (QData)((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT___T_3)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__full)) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0_io_router_req_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___txs_T_1 
        = (vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__txs 
           + (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_fire));
    if (vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_fire) {
        if ((0U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1793 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1281 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1793 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_0;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1281 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_0_flits_fired));
        }
        if ((1U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1794 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1282 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1794 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_1;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1282 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_1_flits_fired));
        }
        if ((2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1795 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1283 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1795 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_2;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1283 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_2_flits_fired));
        }
        if ((3U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1796 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1284 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1796 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_3;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1284 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_3_flits_fired));
        }
        if ((4U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1797 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1285 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1797 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_4;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1285 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_4_flits_fired));
        }
        if ((5U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1798 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1286 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1798 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_5;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1286 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_5_flits_fired));
        }
        if ((6U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1799 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1287 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1799 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_6;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1287 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_6_flits_fired));
        }
        if ((7U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1800 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1288 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1800 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_7;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1288 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_7_flits_fired));
        }
        if ((8U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1801 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1289 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1801 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_8;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1289 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_8_flits_fired));
        }
        if ((9U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1802 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1290 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1802 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_9;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1290 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_9_flits_fired));
        }
        if ((0xaU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1803 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1291 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1803 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_10;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1291 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_10_flits_fired));
        }
        if ((0xbU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1804 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1292 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1804 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_11;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1292 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_11_flits_fired));
        }
        if ((0xcU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1805 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1293 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1805 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_12;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1293 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_12_flits_fired));
        }
        if ((0xdU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1806 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1294 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1806 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_13;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1294 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_13_flits_fired));
        }
        if ((0xeU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1807 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1295 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1807 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_14;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1295 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_14_flits_fired));
        }
        if ((0xfU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1808 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1296 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1808 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_15;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1296 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_15_flits_fired));
        }
        if ((0x10U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1809 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1297 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1809 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_16;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1297 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_16_flits_fired));
        }
        if ((0x11U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1810 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1298 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1810 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_17;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1298 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_17_flits_fired));
        }
        if ((0x12U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1811 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1299 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1811 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_18;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1299 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_18_flits_fired));
        }
        if ((0x13U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1812 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1300 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1812 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_19;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1300 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_19_flits_fired));
        }
        if ((0x14U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1813 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1301 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1813 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_20;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1301 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_20_flits_fired));
        }
        if ((0x15U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1814 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1302 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1814 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_21;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1302 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_21_flits_fired));
        }
        if ((0x16U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1815 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1303 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1815 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_22;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1303 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_22_flits_fired));
        }
        if ((0x17U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1816 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1304 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1816 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_23;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1304 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_23_flits_fired));
        }
        if ((0x18U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1817 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1305 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1817 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_24;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1305 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_24_flits_fired));
        }
        if ((0x19U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1818 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1306 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1818 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_25;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1306 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_25_flits_fired));
        }
        if ((0x1aU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1819 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1307 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1819 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_26;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1307 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_26_flits_fired));
        }
        if ((0x1bU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1820 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1308 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1820 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_27;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1308 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_27_flits_fired));
        }
        if ((0x1cU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1821 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1309 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1821 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_28;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1309 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_28_flits_fired));
        }
        if ((0x1dU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1822 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1310 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1822 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_29;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1310 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_29_flits_fired));
        }
        if ((0x1eU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1823 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1311 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1823 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_30;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1311 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_30_flits_fired));
        }
        if ((0x1fU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1824 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1312 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1824 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_31;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1312 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_31_flits_fired));
        }
        if ((0x20U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1825 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1313 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1825 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_32;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1313 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_32_flits_fired));
        }
        if ((0x21U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1826 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1314 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1826 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_33;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1314 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_33_flits_fired));
        }
        if ((0x22U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1827 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1315 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1827 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_34;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1315 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_34_flits_fired));
        }
        if ((0x23U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1828 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1316 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1828 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_35;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1316 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_35_flits_fired));
        }
        if ((0x24U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1829 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1317 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1829 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_36;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1317 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_36_flits_fired));
        }
        if ((0x25U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1830 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1318 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1830 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_37;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1318 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_37_flits_fired));
        }
        if ((0x26U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1831 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1319 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1831 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_38;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1319 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_38_flits_fired));
        }
        if ((0x27U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1832 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1320 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1832 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_39;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1320 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_39_flits_fired));
        }
        if ((0x28U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1833 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1321 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1833 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_40;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1321 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_40_flits_fired));
        }
        if ((0x29U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1834 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1322 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1834 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_41;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1322 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_41_flits_fired));
        }
        if ((0x2aU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1835 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1323 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1835 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_42;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1323 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_42_flits_fired));
        }
        if ((0x2bU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1836 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1324 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1836 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_43;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1324 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_43_flits_fired));
        }
        if ((0x2cU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1837 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1325 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1837 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_44;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1325 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_44_flits_fired));
        }
        if ((0x2dU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1838 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1326 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1838 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_45;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1326 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_45_flits_fired));
        }
        if ((0x2eU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1839 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1327 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1839 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_46;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1327 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_46_flits_fired));
        }
        if ((0x2fU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1840 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1328 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1840 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_47;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1328 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_47_flits_fired));
        }
        if ((0x30U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1841 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1329 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1841 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_48;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1329 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_48_flits_fired));
        }
        if ((0x31U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1842 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1330 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1842 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_49;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1330 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_49_flits_fired));
        }
        if ((0x32U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1843 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1331 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1843 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_50;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1331 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_50_flits_fired));
        }
        if ((0x33U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1844 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1332 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1844 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_51;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1332 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_51_flits_fired));
        }
        if ((0x34U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1845 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1333 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1845 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_52;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1333 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_52_flits_fired));
        }
        if ((0x35U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1846 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1334 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1846 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_53;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1334 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_53_flits_fired));
        }
        if ((0x36U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1847 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1335 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1847 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_54;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1335 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_54_flits_fired));
        }
        if ((0x37U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1848 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1336 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1848 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_55;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1336 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_55_flits_fired));
        }
        if ((0x38U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1849 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1337 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1849 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_56;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1337 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_56_flits_fired));
        }
        if ((0x39U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1850 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1338 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1850 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_57;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1338 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_57_flits_fired));
        }
        if ((0x3aU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1851 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1339 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1851 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_58;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1339 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_58_flits_fired));
        }
        if ((0x3bU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1852 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1340 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1852 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_59;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1340 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_59_flits_fired));
        }
        if ((0x3cU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1853 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1341 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1853 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_60;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1341 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_60_flits_fired));
        }
        if ((0x3dU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1854 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1342 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1854 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_61;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1342 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_61_flits_fired));
        }
        if ((0x3eU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1855 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1343 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1855 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_62;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1343 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_62_flits_fired));
        }
        if ((0x3fU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1856 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1344 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1856 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_63;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1344 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_63_flits_fired));
        }
        if ((0x40U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1857 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1345 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1857 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_64;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1345 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_64_flits_fired));
        }
        if ((0x41U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1858 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1346 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1858 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_65;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1346 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_65_flits_fired));
        }
        if ((0x42U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1859 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1347 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1859 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_66;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1347 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_66_flits_fired));
        }
        if ((0x43U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1860 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1348 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1860 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_67;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1348 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_67_flits_fired));
        }
        if ((0x44U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1861 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1349 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1861 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_68;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1349 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_68_flits_fired));
        }
        if ((0x45U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1862 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1350 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1862 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_69;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1350 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_69_flits_fired));
        }
        if ((0x46U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1863 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1351 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1863 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_70;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1351 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_70_flits_fired));
        }
        if ((0x47U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1864 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1352 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1864 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_71;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1352 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_71_flits_fired));
        }
        if ((0x48U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1865 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1353 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1865 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_72;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1353 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_72_flits_fired));
        }
        if ((0x49U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1866 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1354 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1866 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_73;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1354 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_73_flits_fired));
        }
        if ((0x4aU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1867 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1355 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1867 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_74;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1355 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_74_flits_fired));
        }
        if ((0x4bU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1868 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1356 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1868 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_75;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1356 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_75_flits_fired));
        }
        if ((0x4cU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1869 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1357 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1869 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_76;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1357 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_76_flits_fired));
        }
        if ((0x4dU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1870 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1358 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1870 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_77;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1358 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_77_flits_fired));
        }
        if ((0x4eU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1871 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1359 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1871 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_78;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1359 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_78_flits_fired));
        }
        if ((0x4fU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1872 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1360 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1872 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_79;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1360 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_79_flits_fired));
        }
        if ((0x50U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1873 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1361 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1873 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_80;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1361 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_80_flits_fired));
        }
        if ((0x51U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1874 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1362 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1874 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_81;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1362 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_81_flits_fired));
        }
        if ((0x52U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1875 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1363 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1875 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_82;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1363 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_82_flits_fired));
        }
        if ((0x53U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1876 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1364 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1876 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_83;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1364 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_83_flits_fired));
        }
        if ((0x54U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1877 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1365 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1877 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_84;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1365 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_84_flits_fired));
        }
        if ((0x55U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1878 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1366 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1878 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_85;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1366 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_85_flits_fired));
        }
        if ((0x56U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1879 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1367 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1879 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_86;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1367 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_86_flits_fired));
        }
        if ((0x57U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1880 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1368 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1880 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_87;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1368 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_87_flits_fired));
        }
        if ((0x58U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1881 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1369 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1881 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_88;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1369 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_88_flits_fired));
        }
        if ((0x59U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1882 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1370 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1882 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_89;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1370 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_89_flits_fired));
        }
        if ((0x5aU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1883 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1371 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1883 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_90;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1371 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_90_flits_fired));
        }
        if ((0x5bU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1884 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1372 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1884 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_91;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1372 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_91_flits_fired));
        }
        if ((0x5cU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1885 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1373 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1885 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_92;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1373 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_92_flits_fired));
        }
        if ((0x5dU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1886 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1374 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1886 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_93;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1374 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_93_flits_fired));
        }
        if ((0x5eU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1887 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1375 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1887 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_94;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1375 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_94_flits_fired));
        }
        if ((0x5fU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1888 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1376 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1888 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_95;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1376 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_95_flits_fired));
        }
        if ((0x60U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1889 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1377 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1889 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_96;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1377 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_96_flits_fired));
        }
        if ((0x61U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1890 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1378 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1890 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_97;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1378 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_97_flits_fired));
        }
        if ((0x62U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1891 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1379 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1891 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_98;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1379 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_98_flits_fired));
        }
        if ((0x63U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1892 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1380 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1892 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_99;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1380 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_99_flits_fired));
        }
        if ((0x64U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1893 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1381 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1893 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_100;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1381 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_100_flits_fired));
        }
        if ((0x65U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1894 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1382 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1894 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_101;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1382 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_101_flits_fired));
        }
        if ((0x66U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1895 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1383 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1895 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_102;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1383 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_102_flits_fired));
        }
        if ((0x67U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1896 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1384 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1896 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_103;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1384 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_103_flits_fired));
        }
        if ((0x68U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1897 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1385 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1897 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_104;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1385 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_104_flits_fired));
        }
        if ((0x69U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1898 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1386 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1898 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_105;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1386 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_105_flits_fired));
        }
        if ((0x6aU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1899 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1387 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1899 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_106;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1387 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_106_flits_fired));
        }
        if ((0x6bU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1900 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1388 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1900 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_107;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1388 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_107_flits_fired));
        }
        if ((0x6cU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1901 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1389 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1901 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_108;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1389 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_108_flits_fired));
        }
        if ((0x6dU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1902 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1390 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1902 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_109;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1390 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_109_flits_fired));
        }
        if ((0x6eU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1903 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1391 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1903 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_110;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1391 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_110_flits_fired));
        }
        if ((0x6fU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1904 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1392 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1904 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_111;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1392 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_111_flits_fired));
        }
        if ((0x70U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1905 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1393 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1905 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_112;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1393 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_112_flits_fired));
        }
        if ((0x71U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1906 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1394 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1906 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_113;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1394 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_113_flits_fired));
        }
        if ((0x72U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1907 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1395 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1907 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_114;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1395 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_114_flits_fired));
        }
        if ((0x73U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1908 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1396 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1908 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_115;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1396 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_115_flits_fired));
        }
        if ((0x74U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1909 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1397 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1909 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_116;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1397 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_116_flits_fired));
        }
        if ((0x75U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1910 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1398 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1910 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_117;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1398 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_117_flits_fired));
        }
        if ((0x76U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1911 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1399 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1911 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_118;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1399 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_118_flits_fired));
        }
        if ((0x77U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1912 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1400 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1912 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_119;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1400 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_119_flits_fired));
        }
        if ((0x78U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1913 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1401 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1913 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_120;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1401 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_120_flits_fired));
        }
        if ((0x79U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1914 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1402 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1914 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_121;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1402 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_121_flits_fired));
        }
        if ((0x7aU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1915 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1403 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1915 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_122;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1403 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_122_flits_fired));
        }
        if ((0x7bU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1916 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1404 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1916 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_123;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1404 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_123_flits_fired));
        }
        if ((0x7cU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1917 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1405 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1917 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_124;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1405 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_124_flits_fired));
        }
        if ((0x7dU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1918 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1406 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1918 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_125;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1406 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_125_flits_fired));
        }
        if ((0x7eU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1919 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1407 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1919 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_126;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1407 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_126_flits_fired));
        }
        if ((0x7fU == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0))) {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1920 = 0U;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1408 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload));
        } else {
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1920 
                = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_127;
            vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1408 
                = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_127_flits_fired));
        }
    } else {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1793 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_0;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1794 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_1;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1795 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_2;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1796 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_3;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1797 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_4;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1798 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_5;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1799 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_6;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1800 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_7;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1801 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_8;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1802 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_9;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1803 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_10;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1804 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_11;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1805 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_12;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1806 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_13;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1807 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_14;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1808 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_15;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1809 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_16;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1810 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_17;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1811 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_18;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1812 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_19;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1813 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_20;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1814 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_21;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1815 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_22;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1816 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_23;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1817 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_24;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1818 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_25;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1819 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_26;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1820 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_27;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1821 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_28;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1822 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_29;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1823 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_30;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1824 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_31;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1825 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_32;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1826 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_33;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1827 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_34;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1828 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_35;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1829 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_36;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1830 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_37;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1831 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_38;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1832 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_39;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1833 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_40;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1834 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_41;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1835 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_42;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1836 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_43;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1837 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_44;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1838 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_45;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1839 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_46;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1840 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_47;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1841 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_48;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1842 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_49;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1843 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_50;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1844 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_51;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1845 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_52;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1846 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_53;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1847 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_54;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1848 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_55;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1849 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_56;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1850 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_57;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1851 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_58;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1852 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_59;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1853 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_60;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1854 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_61;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1855 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_62;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1856 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_63;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1857 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_64;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1858 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_65;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1859 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_66;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1860 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_67;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1861 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_68;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1862 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_69;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1863 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_70;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1864 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_71;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1865 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_72;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1866 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_73;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1867 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_74;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1868 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_75;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1869 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_76;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1870 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_77;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1871 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_78;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1872 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_79;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1873 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_80;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1874 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_81;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1875 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_82;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1876 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_83;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1877 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_84;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1878 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_85;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1879 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_86;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1880 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_87;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1881 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_88;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1882 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_89;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1883 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_90;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1884 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_91;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1885 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_92;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1886 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_93;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1887 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_94;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1888 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_95;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1889 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_96;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1890 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_97;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1891 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_98;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1892 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_99;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1893 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_100;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1894 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_101;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1895 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_102;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1896 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_103;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1897 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_104;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1898 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_105;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1899 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_106;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1900 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_107;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1901 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_108;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1902 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_109;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1903 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_110;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1904 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_111;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1905 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_112;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1906 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_113;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1907 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_114;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1908 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_115;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1909 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_116;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1910 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_117;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1911 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_118;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1912 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_119;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1913 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_120;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1914 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_121;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1915 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_122;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1916 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_123;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1917 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_124;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1918 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_125;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1919 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_126;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1920 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_127;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1281 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_0_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1282 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_1_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1283 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_2_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1284 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_3_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1285 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_4_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1286 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_5_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1287 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_6_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1288 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_7_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1289 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_8_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1290 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_9_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1291 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_10_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1292 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_11_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1293 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_12_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1294 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_13_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1295 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_14_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1296 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_15_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1297 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_16_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1298 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_17_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1299 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_18_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1300 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_19_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1301 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_20_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1302 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_21_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1303 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_22_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1304 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_23_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1305 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_24_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1306 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_25_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1307 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_26_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1308 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_27_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1309 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_28_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1310 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_29_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1311 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_30_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1312 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_31_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1313 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_32_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1314 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_33_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1315 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_34_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1316 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_35_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1317 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_36_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1318 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_37_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1319 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_38_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1320 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_39_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1321 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_40_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1322 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_41_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1323 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_42_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1324 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_43_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1325 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_44_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1326 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_45_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1327 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_46_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1328 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_47_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1329 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_48_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1330 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_49_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1331 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_50_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1332 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_51_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1333 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_52_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1334 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_53_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1335 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_54_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1336 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_55_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1337 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_56_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1338 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_57_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1339 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_58_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1340 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_59_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1341 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_60_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1342 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_61_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1343 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_62_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1344 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_63_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1345 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_64_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1346 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_65_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1347 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_66_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1348 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_67_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1349 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_68_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1350 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_69_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1351 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_70_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1352 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_71_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1353 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_72_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1354 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_73_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1355 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_74_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1356 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_75_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1357 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_76_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1358 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_77_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1359 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_78_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1360 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_79_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1361 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_80_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1362 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_81_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1363 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_82_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1364 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_83_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1365 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_84_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1366 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_85_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1367 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_86_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1368 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_87_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1369 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_88_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1370 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_89_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1371 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_90_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1372 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_91_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1373 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_92_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1374 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_93_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1375 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_94_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1376 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_95_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1377 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_96_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1378 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_97_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1379 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_98_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1380 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_99_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1381 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_100_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1382 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_101_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1383 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_102_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1384 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_103_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1385 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_104_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1386 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_105_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1387 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_106_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1388 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_107_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1389 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_108_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1390 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_109_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1391 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_110_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1392 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_111_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1393 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_112_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1394 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_113_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1395 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_114_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1396 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_115_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1397 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_116_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1398 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_117_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1399 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_118_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1400 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_119_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1401 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_120_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1402 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_121_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1403 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_122_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1404 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_123_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1405 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_124_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1406 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_125_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1407 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_126_flits_fired));
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1408 
            = (0xffffU & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_127_flits_fired));
    }
    VL_EXTEND_WI(128,1, __Vtemp_h1d0e0c1b__0, (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_fire));
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h4088c0d6__0, __Vtemp_h1d0e0c1b__0, (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0));
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_allocs[0U] 
        = __Vtemp_h4088c0d6__0[0U];
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_allocs[1U] 
        = __Vtemp_h4088c0d6__0[1U];
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_allocs[2U] 
        = __Vtemp_h4088c0d6__0[2U];
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_allocs[3U] 
        = __Vtemp_h4088c0d6__0[3U];
    if (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_fire) 
         & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_tail)))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT___GEN_5 = 1U;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT___GEN_0 
            = (7U & vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT___packet_remaining_T);
    } else {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT___GEN_5 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__flits_fired;
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT___GEN_0 
            = vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__flits_left;
    }
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT___choices_0_T_1 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__sel) 
           | (1U & ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__sel) 
                    >> 1U)));
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
    }
    VL_ASSIGN_W(65536,vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_517, __Vtemp_h5126d7da__0);
    if (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_in_0_valid) 
         & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__lock_0))) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_chosen_oh_0 
            = (1U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__lock_0));
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__chosen 
            = (1U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__lock_0));
    } else {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_chosen_oh_0 
            = (1U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT___choices_0_T_1));
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__chosen 
            = (1U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT___choices_0_T_1));
    }
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator_io_req_0_0_ready 
        = ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_in_0_valid) 
             & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__lock_0))
             ? (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__lock_0)
             : (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT___choices_0_T_1)) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_in_0_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_out_0_valid 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_in_0_valid) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__chosen));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___T_13 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator_io_req_0_0_ready) 
           & (0U != (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___io_out_0_valid_T)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_0_ready 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__chosen) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator_io_req_0_0_ready));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_1_ready 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__chosen) 
            >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator_io_req_0_0_ready));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_2_ready 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__chosen) 
            >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator_io_req_0_0_ready));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___io_in_credit_return_T 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator_io_req_0_0_ready) 
           & (0U != (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___io_out_0_valid_T)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT___GEN_1 
        = ((~ ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_vals_0) 
               & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_0))) 
           & ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_out_0_valid) 
                & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_vc_sel_0_0)) 
               & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_tail)) 
              | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__channel_empty)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0__DOT__do_deq 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_0_ready) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0__DOT__maybe_full));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0_io_enq_ready 
        = (1U & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_0_ready) 
                 | (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0__DOT__maybe_full))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1__DOT__do_deq 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_1_ready) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1__DOT__maybe_full));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1_io_enq_ready 
        = (1U & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_1_ready) 
                 | (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1__DOT__maybe_full))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2__DOT__do_deq 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_2_ready) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2__DOT__maybe_full));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2_io_enq_ready 
        = (1U & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_2_ready) 
                 | (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2__DOT__maybe_full))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0_io_in_credit_return 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___io_in_credit_return_T)
            ? (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_chosen_oh_0)
            : 0U);
    if (vlSelf->reset) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT___GEN_4 = 0U;
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___GEN_9 = 0U;
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_24 = 3U;
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_25 = 3U;
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_26 = 3U;
    } else {
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
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0_io_in_vc_free 
        = (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___io_in_credit_return_T) 
            & ((((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_chosen_oh_0) 
                 & vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0__DOT__ram_tail
                 [0U]) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_chosen_oh_0) 
                           >> 1U) & vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1__DOT__ram_tail
                          [0U])) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_chosen_oh_0) 
                                     >> 2U) & vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2__DOT__ram_tail
                                    [0U]))) ? (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_chosen_oh_0)
            : 0U);
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__can_to_q_0 
        = ((~ (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__empty_0)) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0_io_enq_ready));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__can_to_q_1 
        = ((~ (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__empty_1)) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1_io_enq_ready));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__direct_to_q 
        = ((((0xfU & (((IData)(1U) << (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
                      & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0_io_enq_ready))) 
             | (7U & ((((IData)(1U) << (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
                       >> 1U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1_io_enq_ready)))) 
            | (3U & ((((IData)(1U) << (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
                      >> 2U) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2_io_enq_ready)))) 
           & (((0xfU & (((IData)(1U) << (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
                        & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__empty_0))) 
               | (7U & ((((IData)(1U) << (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
                         >> 1U) & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__empty_1)))) 
              | (3U & ((((IData)(1U) << (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
                        >> 2U) & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__empty_2)))));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__can_to_q_2 
        = ((~ (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__empty_2)) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2_io_enq_ready));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_0 
        = (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__ram_vc_sel_0_0
           [vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__deq_ptr_value] 
           & (~ ((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0_io_in_vc_free)) 
                 & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT__states_0_occupied))));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_1 
        = (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__ram_vc_sel_0_1
           [vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__deq_ptr_value] 
           & (~ ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0_io_in_vc_free) 
                     >> 1U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT__states_1_occupied))));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_2 
        = (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__ram_vc_sel_0_2
           [vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__deq_ptr_value] 
           & (~ ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0_io_in_vc_free) 
                     >> 2U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT__states_2_occupied))));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___GEN_40 
        = ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_valid) 
               & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__direct_to_q)))) 
           & (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_valid) 
               & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__direct_to_q)) 
              & (0U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___GEN_44 
        = ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_valid) 
               & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__direct_to_q)))) 
           & (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_valid) 
               & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__direct_to_q)) 
              & (1U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___GEN_48 
        = ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_valid) 
               & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__direct_to_q)))) 
           & (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_valid) 
               & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__direct_to_q)) 
              & (2U == (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___T_7 
        = (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__can_to_q_0) 
            | (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__can_to_q_1)) 
           | (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__can_to_q_2));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__to_q_oh_enc 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__can_to_q_0)
            ? 1U : ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__can_to_q_1)
                     ? 2U : ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__can_to_q_2)
                              ? 4U : 0U)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full 
        = (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_2) 
            << 5U) | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_1) 
                       << 4U) | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_0) 
                                  << 3U) | ((((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_2) 
                                              << 2U) 
                                             | (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_1) 
                                                 << 1U) 
                                                | (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_0))) 
                                            & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_mask))))));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_vals_0 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0_io_vcalloc_req_valid) 
           & (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_0) 
               | (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_1)) 
              | (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_reqs_0_0_2)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__to_q 
        = ((2U & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__to_q_oh_enc) 
                  >> 1U)) | (1U & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__to_q_oh_enc) 
                                   >> 1U)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___heads_T_10 
        = (((2U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__to_q_oh_enc))
             ? 3U : 0U) | ((4U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__to_q_oh_enc))
                            ? 6U : 0U));
    if (vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___T_7) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0_io_enq_valid 
            = (1U & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__to_q_oh_enc) 
                     | (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___GEN_40)));
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1_io_enq_valid 
            = (1U & (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__to_q_oh_enc) 
                      >> 1U) | (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___GEN_44)));
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2_io_enq_valid 
            = (1U & (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__to_q_oh_enc) 
                      >> 2U) | (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___GEN_48)));
    } else {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0_io_enq_valid 
            = (1U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___GEN_40));
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1_io_enq_valid 
            = (1U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___GEN_44));
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2_io_enq_valid 
            = (1U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___GEN_48));
    }
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___head_T_2 
        = ((4U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__to_q_oh_enc))
            ? (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__heads_2)
            : 0U);
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___head_T_3 
        = (((1U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__to_q_oh_enc))
             ? (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__heads_0)
             : 0U) | ((2U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__to_q_oh_enc))
                       ? (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__heads_1)
                       : 0U));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_oh 
        = ((1U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full))
            ? 1U : ((2U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full))
                     ? 2U : ((4U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full))
                              ? 4U : ((8U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full))
                                       ? 8U : ((0x10U 
                                                & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full))
                                                ? 0x10U
                                                : (
                                                   (0x20U 
                                                    & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_full))
                                                    ? 0x20U
                                                    : 0U))))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___GEN_0 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_vals_0) 
           | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__mask));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_2 
        = (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_vals_0) 
            << 1U) | ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_vals_0) 
                      & (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__mask))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0__DOT__do_enq 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0_io_enq_ready) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0_io_enq_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1__DOT__do_enq 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1_io_enq_ready) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1_io_enq_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2__DOT__do_enq 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2_io_enq_ready) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2_io_enq_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_head_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___head_T_3) 
           | (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___head_T_2));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_head_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___head_T_3) 
           | (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___head_T_2));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_head_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___head_T_3) 
           | (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___head_T_2));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_tail_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___head_T_3) 
           | (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___head_T_2));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_tail_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___head_T_3) 
           | (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___head_T_2));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_tail_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___head_T_3) 
           | (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___head_T_2));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_payload_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___head_T_3) 
           | (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___head_T_2));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_payload_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___head_T_3) 
           | (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___head_T_2));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_payload_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___head_T_3) 
           | (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___head_T_2));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__head 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___head_T_3) 
           | (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___head_T_2));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel 
        = (7U & ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_oh) 
                 | ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_oh) 
                    >> 3U)));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_filter 
        = ((1U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_2))
            ? 1U : ((2U & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___in_arb_filter_T_2))
                     ? 2U : 0U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___heads_T_5 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__head) 
           == ((((1U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__to_q_oh_enc))
                  ? 2U : 0U) | ((2U & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__to_q_oh_enc))
                                 ? 5U : 0U)) | ((4U 
                                                 & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__to_q_oh_enc))
                                                 ? 8U
                                                 : 0U)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_3 
        = (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_vals_0) 
            & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel)) 
           | ((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0_io_in_vc_free)) 
              & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT__states_0_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_9 
        = (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_vals_0) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 1U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0_io_in_vc_free) 
                              >> 1U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT__states_1_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_15 
        = (((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_vals_0) 
            & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
               >> 2U)) | ((~ ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0_io_in_vc_free) 
                              >> 2U)) & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT__states_2_occupied)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_0 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_vals_0) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_1 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_vals_0) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 1U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_2 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_vals_0) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel) 
              >> 2U));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_req_0_ready 
        = (IData)((0U != (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_arb_filter)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T 
        = (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_2) 
            << 2U) | (((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_1) 
                       << 1U) | (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_0)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q_io_enq_valid 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_req_0_ready) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0_io_vcalloc_req_valid));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT___vcalloc_buffer_io_enq_valid_T_4 
        = (1U & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_req_0_ready) 
                 | (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_head_io_deq_bits_MPORT_data))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q__DOT__do_enq 
        = ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q_io_enq_ready) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q_io_enq_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer_io_enq_valid 
        = (((~ (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__empty)) 
            & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT___vcalloc_buffer_io_enq_valid_T_1)) 
           & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT___vcalloc_buffer_io_enq_valid_T_4));
    NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer_io_deq_ready 
        = ((((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__full)) 
             & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT___vcalloc_buffer_io_enq_valid_T_1)) 
            & (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT___vcalloc_buffer_io_enq_valid_T_4)) 
           & ((IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q_io_enq_ready) 
              | (~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_head_io_deq_bits_MPORT_data))));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__do_enq 
        = ((~ (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__full)) 
           & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer_io_enq_valid));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__do_deq 
        = ((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer_io_deq_ready) 
           & (~ (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__empty)));
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__do_deq 
        = ((((IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer_io_deq_ready) 
             & (~ (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__empty))) 
            & (IData)(vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_tail_io_deq_bits_MPORT_data)) 
           & (~ (IData)(NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__empty)));
}

VL_ATTR_COLD void VNoCChiselTester___024root___eval_initial(VNoCChiselTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoCChiselTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    VNoCChiselTester___024root___initial__TOP__0(vlSelf);
}

VL_ATTR_COLD void VNoCChiselTester___024root___eval_settle(VNoCChiselTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoCChiselTester___024root___eval_settle\n"); );
    // Body
    VNoCChiselTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VNoCChiselTester___024root___final(VNoCChiselTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoCChiselTester___024root___final\n"); );
}

VL_ATTR_COLD void VNoCChiselTester___024root___ctor_var_reset(VNoCChiselTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoCChiselTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0_io_router_req_valid = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0_io_vcalloc_req_valid = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_valid = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_req_0_ready = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_0 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_1 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_2 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_sel_REG_0_0_0_0 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__debug_tsc = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT___debug_tsc_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__debug_sample = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT___debug_sample_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__util_ctr = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__fired = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT___util_ctr_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer_io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer_io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q_io_enq_ready = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q_io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT___c_T = VL_RAND_RESET_I(3);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_valid = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_head = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_tail = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_payload = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_flow_ingress_node = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_flow_egress_node = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_head[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_head_io_deq_bits_MPORT_data = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_tail[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_tail_io_deq_bits_MPORT_data = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_payload[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_flow_ingress_node[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_flow_egress_node[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__enq_ptr_value = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__deq_ptr_value = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__ram_vc_sel_0_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__ram_vc_sel_0_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__ram_vc_sel_0_2[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__enq_ptr_value = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__deq_ptr_value = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__ram_head[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__ram_tail[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__ram_tail_io_deq_bits_MPORT_data = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__ram_payload[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__ram_flow_ingress_node[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__ram_flow_egress_node[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__enq_ptr_value = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__deq_ptr_value = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q__DOT__ram_vc_sel_0_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q__DOT__ram_vc_sel_0_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q__DOT__ram_vc_sel_0_2[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT__states_2_occupied = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT__states_2_c = VL_RAND_RESET_I(2);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT__states_1_occupied = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT__states_1_c = VL_RAND_RESET_I(2);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT__states_0_occupied = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT__states_0_c = VL_RAND_RESET_I(2);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_24 = VL_RAND_RESET_I(3);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_25 = VL_RAND_RESET_I(3);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__output_unit_0_to_1__DOT___GEN_26 = VL_RAND_RESET_I(3);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_in_0_valid = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_out_0_valid = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_chosen_oh_0 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__lock_0 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__mask = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__chosen = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT___GEN_4 = VL_RAND_RESET_I(2);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__mask = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_mask = VL_RAND_RESET_I(3);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT__in_alloc_sel = VL_RAND_RESET_I(3);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__vc_allocator__DOT___T = VL_RAND_RESET_I(3);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__plusarg_reader__DOT__myplus = VL_RAND_RESET_I(20);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0_io_in_credit_return = VL_RAND_RESET_I(3);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0_io_in_vc_free = VL_RAND_RESET_I(3);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_valid = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator_io_req_0_0_ready = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_0 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_sel_REG_0_0_0_0 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__debug_tsc = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT___debug_tsc_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__debug_sample = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT___debug_sample_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__util_ctr = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__fired = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT___util_ctr_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__util_ctr_1 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__fired_1 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT___util_ctr_T_3 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__monitor__DOT__in_flight_0 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__monitor__DOT__in_flight_1 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__monitor__DOT__in_flight_2 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__monitor__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__monitor__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__monitor__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__route_arbiter_io_out_bits_src_virt_id = VL_RAND_RESET_I(2);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_0_ready = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_0_valid = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_1_ready = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_1_valid = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_2_ready = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_2_valid = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_out_0_bits_tail = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_chosen_oh_0 = VL_RAND_RESET_I(3);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_0_g = VL_RAND_RESET_I(3);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_0_vc_sel_0_0 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_1_g = VL_RAND_RESET_I(3);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_1_vc_sel_0_0 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_2_g = VL_RAND_RESET_I(3);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__states_2_vc_sel_0_0 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_66 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_67 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_68 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__mask = VL_RAND_RESET_I(3);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__vcalloc_sel = VL_RAND_RESET_I(3);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_71 = VL_RAND_RESET_I(3);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_72 = VL_RAND_RESET_I(3);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_73 = VL_RAND_RESET_I(3);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___T_33 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_outs_0_valid = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_outs_0_flit_head = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_outs_0_flit_tail = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_outs_0_flit_payload = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT___GEN_36 = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<9; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_head[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_head_qs_0_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_head_qs_1_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_head_qs_2_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_head_MPORT_addr = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<9; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_tail[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_tail_qs_0_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_tail_qs_1_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_tail_qs_2_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_tail_MPORT_addr = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<9; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_payload[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_payload_qs_0_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_payload_qs_1_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_payload_qs_2_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_payload_MPORT_addr = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0_io_enq_ready = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0_io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1_io_enq_ready = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1_io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2_io_enq_ready = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2_io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__heads_0 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__heads_1 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__heads_2 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__tails_0 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__tails_1 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__tails_2 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__direct_to_q = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___GEN_2 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___tails_T_8 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___tails_T_16 = VL_RAND_RESET_I(3);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__to_q_oh_enc = VL_RAND_RESET_I(3);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__to_q = VL_RAND_RESET_I(2);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__head = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___heads_T_5 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT___heads_T_10 = VL_RAND_RESET_I(3);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT____Vlvbound_he36531f5__0 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT____Vlvbound_h815a7ac7__0 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT____Vlvbound_h5f9589c1__0 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0__DOT__ram_head[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0__DOT__ram_tail[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0__DOT__ram_payload[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1__DOT__ram_head[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1__DOT__ram_tail[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1__DOT__ram_payload[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2__DOT__ram_head[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2__DOT__ram_tail[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2__DOT__ram_payload[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__lock_0 = VL_RAND_RESET_I(3);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__mask = VL_RAND_RESET_I(3);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT__chosen = VL_RAND_RESET_I(3);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___io_out_0_valid_T = VL_RAND_RESET_I(3);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___T_13 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb__DOT___GEN_9 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_valid = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_head = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_tail = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q_io_deq_bits_payload = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__channel_empty = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT___GEN_1 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__ram_head[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__ram_tail[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__ram_payload[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__ram_ingress_id[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__enq_ptr_value = VL_RAND_RESET_I(2);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__deq_ptr_value = VL_RAND_RESET_I(2);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT___do_enq_T = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__wrap = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT___value_T_1 = VL_RAND_RESET_I(2);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__wrap_1 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT___value_T_3 = VL_RAND_RESET_I(2);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT____Vlvbound_hf516231f__0 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT____Vlvbound_h4804d31f__0 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT____Vlvbound_h0afa1ed5__0 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT____Vlvbound_hcdbe9f21__0 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_in_0_valid = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_out_0_valid = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0_io_chosen_oh_0 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__lock_0 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__mask = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT__chosen = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator__DOT__arbs_0__DOT___GEN_4 = VL_RAND_RESET_I(2);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT__mask = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__vc_allocator__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__plusarg_reader__DOT__myplus = VL_RAND_RESET_I(20);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_tail = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_out_bits_payload = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_rob_idx = VL_RAND_RESET_I(7);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_io_fire = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q_io_deq_valid = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q_io_deq_bits_head = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__txs = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__flits = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___tsc_T_1 = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__idle_counter = VL_RAND_RESET_I(11);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___idle_counter_T_1 = VL_RAND_RESET_I(11);
    VL_RAND_RESET_W(128, vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_valids);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_alloc_ids_0 = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(128, vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_allocs);
    VL_RAND_RESET_W(65536, vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_frees);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_0_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_0_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_0_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_1_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_1_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_1_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_2_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_2_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_2_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_3_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_3_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_3_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_4_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_4_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_4_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_5_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_5_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_5_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_6_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_6_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_6_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_7_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_7_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_7_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_8_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_8_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_8_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_9_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_9_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_9_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_10_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_10_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_10_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_11_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_11_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_11_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_12_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_12_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_12_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_13_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_13_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_13_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_14_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_14_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_14_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_15_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_15_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_15_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_16_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_16_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_16_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_17_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_17_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_17_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_18_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_18_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_18_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_19_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_19_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_19_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_20_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_20_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_20_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_21_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_21_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_21_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_22_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_22_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_22_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_23_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_23_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_23_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_24_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_24_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_24_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_25_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_25_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_25_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_26_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_26_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_26_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_27_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_27_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_27_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_28_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_28_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_28_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_29_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_29_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_29_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_30_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_30_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_30_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_31_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_31_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_31_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_32_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_32_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_32_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_33_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_33_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_33_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_34_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_34_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_34_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_35_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_35_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_35_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_36_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_36_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_36_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_37_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_37_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_37_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_38_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_38_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_38_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_39_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_39_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_39_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_40_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_40_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_40_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_41_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_41_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_41_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_42_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_42_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_42_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_43_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_43_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_43_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_44_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_44_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_44_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_45_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_45_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_45_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_46_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_46_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_46_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_47_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_47_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_47_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_48_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_48_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_48_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_49_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_49_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_49_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_50_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_50_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_50_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_51_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_51_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_51_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_52_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_52_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_52_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_53_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_53_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_53_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_54_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_54_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_54_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_55_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_55_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_55_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_56_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_56_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_56_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_57_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_57_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_57_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_58_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_58_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_58_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_59_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_59_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_59_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_60_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_60_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_60_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_61_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_61_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_61_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_62_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_62_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_62_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_63_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_63_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_63_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_64_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_64_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_64_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_65_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_65_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_65_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_66_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_66_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_66_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_67_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_67_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_67_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_68_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_68_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_68_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_69_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_69_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_69_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_70_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_70_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_70_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_71_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_71_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_71_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_72_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_72_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_72_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_73_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_73_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_73_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_74_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_74_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_74_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_75_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_75_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_75_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_76_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_76_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_76_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_77_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_77_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_77_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_78_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_78_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_78_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_79_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_79_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_79_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_80_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_80_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_80_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_81_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_81_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_81_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_82_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_82_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_82_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_83_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_83_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_83_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_84_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_84_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_84_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_85_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_85_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_85_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_86_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_86_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_86_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_87_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_87_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_87_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_88_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_88_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_88_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_89_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_89_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_89_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_90_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_90_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_90_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_91_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_91_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_91_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_92_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_92_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_92_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_93_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_93_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_93_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_94_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_94_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_94_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_95_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_95_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_95_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_96_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_96_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_96_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_97_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_97_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_97_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_98_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_98_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_98_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_99_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_99_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_99_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_100_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_100_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_100_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_101_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_101_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_101_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_102_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_102_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_102_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_103_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_103_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_103_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_104_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_104_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_104_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_105_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_105_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_105_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_106_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_106_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_106_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_107_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_107_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_107_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_108_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_108_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_108_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_109_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_109_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_109_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_110_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_110_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_110_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_111_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_111_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_111_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_112_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_112_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_112_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_113_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_113_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_113_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_114_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_114_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_114_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_115_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_115_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_115_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_116_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_116_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_116_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_117_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_117_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_117_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_118_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_118_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_118_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_119_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_119_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_119_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_120_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_120_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_120_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_121_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_121_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_121_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_122_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_122_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_122_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_123_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_123_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_123_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_124_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_124_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_124_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_125_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_125_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_125_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_126_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_126_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_126_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_127_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_127_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_payload_127_flits_fired = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_0 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_1 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_2 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_3 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_4 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_5 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_6 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_7 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_8 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_9 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_10 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_11 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_12 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_13 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_14 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_15 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_16 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_17 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_18 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_19 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_20 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_21 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_22 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_23 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_24 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_25 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_26 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_27 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_28 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_29 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_30 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_31 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_32 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_33 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_34 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_35 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_36 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_37 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_38 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_39 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_40 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_41 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_42 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_43 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_44 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_45 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_46 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_47 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_48 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_49 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_50 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_51 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_52 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_53 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_54 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_55 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_56 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_57 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_58 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_59 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_60 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_61 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_62 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_63 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_64 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_65 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_66 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_67 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_68 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_69 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_70 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_71 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_72 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_73 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_74 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_75 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_76 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_77 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_78 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_79 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_80 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_81 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_82 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_83 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_84 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_85 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_86 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_87 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_88 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_89 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_90 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_91 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_92 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_93 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_94 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_95 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_96 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_97 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_98 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_99 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_100 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_101 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_102 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_103 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_104 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_105 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_106 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_107 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_108 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_109 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_110 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_111 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_112 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_113 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_114 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_115 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_116 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_117 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_118 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_119 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_120 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_121 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_122 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_123 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_124 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_125 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_126 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_n_flits_127 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_0 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_1 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_2 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_3 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_4 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_5 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_6 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_7 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_8 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_9 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_10 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_11 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_12 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_13 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_14 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_15 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_16 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_17 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_18 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_19 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_20 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_21 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_22 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_23 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_24 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_25 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_26 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_27 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_28 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_29 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_30 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_31 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_32 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_33 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_34 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_35 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_36 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_37 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_38 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_39 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_40 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_41 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_42 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_43 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_44 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_45 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_46 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_47 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_48 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_49 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_50 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_51 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_52 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_53 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_54 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_55 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_56 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_57 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_58 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_59 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_60 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_61 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_62 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_63 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_64 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_65 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_66 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_67 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_68 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_69 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_70 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_71 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_72 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_73 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_74 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_75 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_76 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_77 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_78 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_79 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_80 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_81 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_82 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_83 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_84 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_85 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_86 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_87 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_88 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_89 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_90 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_91 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_92 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_93 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_94 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_95 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_96 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_97 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_98 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_99 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_100 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_101 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_102 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_103 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_104 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_105 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_106 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_107 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_108 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_109 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_110 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_111 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_112 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_113 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_114 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_115 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_116 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_117 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_118 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_119 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_120 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_121 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_122 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_123 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_124 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_125 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_126 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_flits_returned_127 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_0 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_1 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_2 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_3 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_4 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_5 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_6 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_7 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_8 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_9 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_10 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_11 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_12 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_13 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_14 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_15 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_16 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_17 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_18 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_19 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_20 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_21 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_22 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_23 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_24 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_25 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_26 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_27 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_28 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_29 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_30 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_31 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_32 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_33 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_34 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_35 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_36 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_37 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_38 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_39 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_40 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_41 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_42 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_43 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_44 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_45 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_46 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_47 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_48 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_49 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_50 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_51 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_52 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_53 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_54 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_55 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_56 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_57 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_58 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_59 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_60 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_61 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_62 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_63 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_64 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_65 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_66 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_67 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_68 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_69 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_70 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_71 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_72 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_73 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_74 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_75 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_76 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_77 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_78 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_79 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_80 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_81 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_82 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_83 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_84 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_85 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_86 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_87 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_88 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_89 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_90 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_91 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_92 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_93 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_94 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_95 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_96 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_97 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_98 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_99 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_100 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_101 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_102 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_103 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_104 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_105 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_106 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_107 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_108 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_109 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_110 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_111 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_112 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_113 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_114 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_115 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_116 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_117 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_118 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_119 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_120 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_121 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_122 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_123 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_124 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_125 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_126 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__rob_tscs_127 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_success_REG = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1281 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1282 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1283 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1284 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1285 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1286 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1287 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1288 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1289 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1290 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1291 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1292 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1293 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1294 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1295 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1296 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1297 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1298 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1299 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1300 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1301 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1302 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1303 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1304 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1305 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1306 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1307 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1308 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1309 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1310 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1311 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1312 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1313 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1314 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1315 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1316 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1317 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1318 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1319 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1320 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1321 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1322 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1323 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1324 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1325 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1326 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1327 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1328 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1329 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1330 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1331 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1332 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1333 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1334 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1335 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1336 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1337 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1338 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1339 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1340 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1341 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1342 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1343 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1344 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1345 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1346 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1347 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1348 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1349 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1350 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1351 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1352 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1353 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1354 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1355 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1356 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1357 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1358 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1359 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1360 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1361 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1362 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1363 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1364 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1365 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1366 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1367 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1368 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1369 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1370 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1371 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1372 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1373 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1374 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1375 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1376 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1377 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1378 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1379 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1380 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1381 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1382 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1383 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1384 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1385 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1386 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1387 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1388 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1389 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1390 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1391 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1392 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1393 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1394 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1395 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1396 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1397 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1398 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1399 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1400 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1401 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1402 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1403 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1404 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1405 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1406 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1407 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1408 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1793 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1794 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1795 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1796 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1797 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1798 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1799 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1800 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1801 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1802 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1803 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1804 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1805 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1806 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1807 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1808 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1809 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1810 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1811 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1812 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1813 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1814 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1815 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1816 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1817 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1818 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1819 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1820 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1821 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1822 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1823 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1824 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1825 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1826 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1827 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1828 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1829 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1830 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1831 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1832 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1833 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1834 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1835 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1836 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1837 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1838 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1839 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1840 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1841 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1842 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1843 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1844 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1845 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1846 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1847 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1848 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1849 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1850 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1851 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1852 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1853 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1854 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1855 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1856 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1857 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1858 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1859 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1860 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1861 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1862 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1863 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1864 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1865 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1866 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1867 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1868 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1869 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1870 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1871 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1872 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1873 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1874 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1875 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1876 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1877 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1878 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1879 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1880 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1881 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1882 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1883 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1884 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1885 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1886 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1887 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1888 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1889 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1890 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1891 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1892 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1893 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1894 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1895 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1896 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1897 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1898 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1899 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1900 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1901 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1902 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1903 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1904 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1905 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1906 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1907 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1908 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1909 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1910 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1911 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1912 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1913 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1914 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1915 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1916 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1917 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1918 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1919 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_1920 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__packet_valid = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__packet_rob_idx = VL_RAND_RESET_I(7);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2432 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___T_31 = VL_RAND_RESET_Q(64);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2816 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_2934 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_3585 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_3845 = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___flits_T_2 = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___txs_T_1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65536, vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT___GEN_517);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__flits_left = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__flits_fired = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__payload_tsc = VL_RAND_RESET_I(32);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__payload_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT___packet_remaining_T = VL_RAND_RESET_I(20);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT___io_fire_T = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT___GEN_5 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT___flits_fired_T_1 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT___flits_left_T_1 = VL_RAND_RESET_I(4);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_1 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_2 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_3 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_4 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_5 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_6 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_7 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_8 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_9 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_10 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_11 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_12 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_13 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_14 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_15 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_16 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_17 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_18 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_19 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT__ram_head[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT__ram_tail[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT__ram_payload[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT__ram_egress_id[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT___do_enq_T = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->NoCChiselTester__DOT__th__DOT__noc_tester__DOT__plusarg_reader__DOT__myplus = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_tail__v0 = 0;
    vlSelf->__Vdlyvval__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_tail__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_tail__v0 = 0;
    vlSelf->__Vdlyvdim0__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_flow_ingress_node__v0 = 0;
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_flow_ingress_node__v0 = 0;
    vlSelf->__Vdlyvdim0__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_flow_egress_node__v0 = 0;
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_flow_egress_node__v0 = 0;
    vlSelf->__Vdlyvdim0__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_payload__v0 = 0;
    vlSelf->__Vdlyvval__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_payload__v0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_payload__v0 = 0;
    vlSelf->__Vdly__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__enq_ptr_value = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_head__v0 = 0;
    vlSelf->__Vdlyvval__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_head__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__ram_head__v0 = 0;
    vlSelf->__Vdly__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_buffer__DOT__deq_ptr_value = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__enq_ptr_value = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__deq_ptr_value = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__ram_vc_sel_0_2__v0 = 0;
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__ram_vc_sel_0_2__v0 = 0;
    vlSelf->__Vdlyvdim0__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__ram_vc_sel_0_1__v0 = 0;
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__ram_vc_sel_0_1__v0 = 0;
    vlSelf->__Vdlyvdim0__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__ram_vc_sel_0_0__v0 = 0;
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__route_q__DOT__ram_vc_sel_0_0__v0 = 0;
    vlSelf->__Vdly__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__enq_ptr_value = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__ram_flow_egress_node__v0 = 0;
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__ram_flow_ingress_node__v0 = 0;
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__ram_payload__v0 = 0;
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__ram_tail__v0 = 0;
    vlSelf->__Vdlyvdim0__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__ram_head__v0 = 0;
    vlSelf->__Vdlyvval__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__ram_head__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__ram_head__v0 = 0;
    vlSelf->__Vdly__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_buffer__DOT__deq_ptr_value = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q__DOT__ram_vc_sel_0_0__v0 = 0;
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q__DOT__ram_vc_sel_0_1__v0 = 0;
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__vcalloc_q__DOT__ram_vc_sel_0_2__v0 = 0;
    vlSelf->__Vdlyvdim0__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_tail__v0 = 0;
    vlSelf->__Vdlyvval__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_tail__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_tail__v0 = 0;
    vlSelf->__Vdlyvdim0__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_head__v0 = 0;
    vlSelf->__Vdlyvval__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_head__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_head__v0 = 0;
    vlSelf->__Vdlyvdim0__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_payload__v0 = 0;
    vlSelf->__Vdlyvval__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_payload__v0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__mem_payload__v0 = 0;
    vlSelf->__Vdlyvval__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0__DOT__ram_head__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0__DOT__ram_head__v0 = 0;
    vlSelf->__Vdlyvval__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0__DOT__ram_tail__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0__DOT__ram_tail__v0 = 0;
    vlSelf->__Vdlyvval__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0__DOT__ram_payload__v0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_0__DOT__ram_payload__v0 = 0;
    vlSelf->__Vdlyvval__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1__DOT__ram_head__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1__DOT__ram_head__v0 = 0;
    vlSelf->__Vdlyvval__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1__DOT__ram_tail__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1__DOT__ram_tail__v0 = 0;
    vlSelf->__Vdlyvval__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1__DOT__ram_payload__v0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_1__DOT__ram_payload__v0 = 0;
    vlSelf->__Vdlyvval__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2__DOT__ram_head__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2__DOT__ram_head__v0 = 0;
    vlSelf->__Vdlyvval__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2__DOT__ram_tail__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2__DOT__ram_tail__v0 = 0;
    vlSelf->__Vdlyvval__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2__DOT__ram_payload__v0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__DOT__qs_2__DOT__ram_payload__v0 = 0;
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__ram_ingress_id__v0 = 0;
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__ram_payload__v0 = 0;
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__ram_tail__v0 = 0;
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__egress_unit_0_to_0__DOT__q__DOT__ram_head__v0 = 0;
    vlSelf->__Vdly__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__flits_left = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen__DOT__packet_remaining_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT__ram_head__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT__ram_head__v0 = 0;
    vlSelf->__Vdlyvval__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT__ram_tail__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT__ram_tail__v0 = 0;
    vlSelf->__Vdlyvval__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT__ram_payload__v0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT__ram_payload__v0 = 0;
    vlSelf->__Vdlyvset__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__io_to_noc_0_flit_q__DOT__ram_egress_id__v0 = 0;
}

VL_ATTR_COLD void VNoCChiselTester___024root___configure_coverage(VNoCChiselTester___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoCChiselTester___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
