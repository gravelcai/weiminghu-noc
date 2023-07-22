// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNoCChiselTester.h for the primary calling header

#include "verilated.h"

#include "VNoCChiselTester_InputBuffer.h"
#include "VNoCChiselTester__Syms.h"

VL_INLINE_OPT void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer__0(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__mem_tail__v0;
    CData/*0:0*/ __Vdlyvval__mem_tail__v0;
    CData/*0:0*/ __Vdlyvset__mem_tail__v0;
    CData/*4:0*/ __Vdlyvdim0__mem_head__v0;
    CData/*0:0*/ __Vdlyvval__mem_head__v0;
    CData/*0:0*/ __Vdlyvset__mem_head__v0;
    CData/*4:0*/ __Vdlyvdim0__mem_payload__v0;
    QData/*63:0*/ __Vdlyvval__mem_payload__v0;
    CData/*0:0*/ __Vdlyvset__mem_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_0__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_0__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_0__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_0__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_0__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_0__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_1__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_1__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_1__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_1__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_1__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_1__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_2__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_2__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_2__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_2__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_2__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_2__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_3__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_3__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_3__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_3__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_3__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_3__DOT__ram_payload__v0;
    // Body
    __Vdlyvset__mem_payload__v0 = 0U;
    __Vdlyvset__mem_tail__v0 = 0U;
    __Vdlyvset__mem_head__v0 = 0U;
    __Vdlyvset__qs_0__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_1__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_2__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_3__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_0__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_1__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_2__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_3__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_0__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__qs_1__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__qs_2__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__qs_3__DOT__ram_tail__v0 = 0U;
    if (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_valid) 
         & (~ (IData)(vlSelf->__PVT__direct_to_q)))) {
        vlSelf->__Vlvbound_hf210c3d8__0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
        if ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_MPORT_addr))) {
            __Vdlyvval__mem_payload__v0 = vlSelf->__Vlvbound_hf210c3d8__0;
            __Vdlyvset__mem_payload__v0 = 1U;
            __Vdlyvdim0__mem_payload__v0 = vlSelf->__PVT__mem_payload_MPORT_addr;
        }
        vlSelf->__Vlvbound_had19c418__0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
        if ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_MPORT_addr))) {
            __Vdlyvval__mem_tail__v0 = vlSelf->__Vlvbound_had19c418__0;
            __Vdlyvset__mem_tail__v0 = 1U;
            __Vdlyvdim0__mem_tail__v0 = vlSelf->__PVT__mem_tail_MPORT_addr;
        }
        vlSelf->__Vlvbound_h44e885f1__0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_head;
        if ((0x13U >= (IData)(vlSelf->__PVT__mem_head_MPORT_addr))) {
            __Vdlyvval__mem_head__v0 = vlSelf->__Vlvbound_h44e885f1__0;
            __Vdlyvset__mem_head__v0 = 1U;
            __Vdlyvdim0__mem_head__v0 = vlSelf->__PVT__mem_head_MPORT_addr;
        }
    }
    if (((IData)(vlSelf->__PVT__qs_0_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_0_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((1U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_0__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_0__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_0_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_0_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_0__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_0__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
                __Vdlyvval__qs_0__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_head;
                __Vdlyvval__qs_0__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_0__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
            __Vdlyvval__qs_0__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_head;
            __Vdlyvval__qs_0__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
        }
        __Vdlyvset__qs_0__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_0__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_0__DOT__ram_tail__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__qs_1_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_1_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_1__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_1__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_1_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_1_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_1__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_1__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
                __Vdlyvval__qs_1__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_head;
                __Vdlyvval__qs_1__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_1__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
            __Vdlyvval__qs_1__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_head;
            __Vdlyvval__qs_1__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
        }
        __Vdlyvset__qs_1__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_1__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_1__DOT__ram_tail__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__qs_2_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_2_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((4U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_2__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_2__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_2_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_2_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_2__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_2__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
                __Vdlyvval__qs_2__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_head;
                __Vdlyvval__qs_2__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_2__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
            __Vdlyvval__qs_2__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_head;
            __Vdlyvval__qs_2__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
        }
        __Vdlyvset__qs_2__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_2__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_2__DOT__ram_tail__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__qs_3_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_3_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_3__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_3__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_3_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_3_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_3__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_3__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
                __Vdlyvval__qs_3__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_head;
                __Vdlyvval__qs_3__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_3__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
            __Vdlyvval__qs_3__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_head;
            __Vdlyvval__qs_3__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
        }
        __Vdlyvset__qs_3__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_3__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_3__DOT__ram_tail__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__heads_3 = 0xfU;
        vlSelf->__PVT__heads_0 = 0U;
        vlSelf->__PVT__heads_2 = 0xaU;
        vlSelf->__PVT__heads_1 = 5U;
        vlSelf->__PVT__tails_3 = 0xfU;
        vlSelf->__PVT__tails_2 = 0xaU;
        vlSelf->__PVT__tails_1 = 5U;
        vlSelf->__PVT__tails_0 = 0U;
        vlSelf->__PVT__qs_0__DOT__maybe_full = 0U;
        vlSelf->__PVT__qs_1__DOT__maybe_full = 0U;
        vlSelf->__PVT__qs_2__DOT__maybe_full = 0U;
        vlSelf->__PVT__qs_3__DOT__maybe_full = 0U;
    } else {
        if (vlSelf->__PVT___T_9) {
            if ((3U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_3 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
            if ((0U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_0 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
            if ((2U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_2 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
            if ((1U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_1 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
        }
        if (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_valid) 
             & (~ (IData)(vlSelf->__PVT__direct_to_q)))) {
            if ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_3 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
            if ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_2 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
            if ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_1 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
            if ((0U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_0 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
        }
        if (((IData)(vlSelf->__PVT__qs_0__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_0__DOT__do_deq))) {
            vlSelf->__PVT__qs_0__DOT__maybe_full = vlSelf->__PVT__qs_0__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__qs_1__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_1__DOT__do_deq))) {
            vlSelf->__PVT__qs_1__DOT__maybe_full = vlSelf->__PVT__qs_1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__qs_2__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_2__DOT__do_deq))) {
            vlSelf->__PVT__qs_2__DOT__maybe_full = vlSelf->__PVT__qs_2__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__qs_3__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_3__DOT__do_deq))) {
            vlSelf->__PVT__qs_3__DOT__maybe_full = vlSelf->__PVT__qs_3__DOT__do_enq;
        }
    }
    if (__Vdlyvset__qs_0__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_0__DOT__ram_payload[0U] = __Vdlyvval__qs_0__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__qs_1__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_1__DOT__ram_payload[0U] = __Vdlyvval__qs_1__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__qs_2__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_2__DOT__ram_payload[0U] = __Vdlyvval__qs_2__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__qs_3__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_3__DOT__ram_payload[0U] = __Vdlyvval__qs_3__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__mem_payload__v0) {
        vlSelf->__PVT__mem_payload[__Vdlyvdim0__mem_payload__v0] 
            = __Vdlyvval__mem_payload__v0;
    }
    if (__Vdlyvset__qs_0__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_0__DOT__ram_head[0U] = __Vdlyvval__qs_0__DOT__ram_head__v0;
    }
    if (__Vdlyvset__qs_1__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_1__DOT__ram_head[0U] = __Vdlyvval__qs_1__DOT__ram_head__v0;
    }
    if (__Vdlyvset__qs_2__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_2__DOT__ram_head[0U] = __Vdlyvval__qs_2__DOT__ram_head__v0;
    }
    if (__Vdlyvset__qs_3__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_3__DOT__ram_head[0U] = __Vdlyvval__qs_3__DOT__ram_head__v0;
    }
    if (__Vdlyvset__mem_head__v0) {
        vlSelf->__PVT__mem_head[__Vdlyvdim0__mem_head__v0] 
            = __Vdlyvval__mem_head__v0;
    }
    if (__Vdlyvset__qs_0__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_0__DOT__ram_tail[0U] = __Vdlyvval__qs_0__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__qs_1__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_1__DOT__ram_tail[0U] = __Vdlyvval__qs_1__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__qs_2__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_2__DOT__ram_tail[0U] = __Vdlyvval__qs_2__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__mem_tail__v0) {
        vlSelf->__PVT__mem_tail[__Vdlyvdim0__mem_tail__v0] 
            = __Vdlyvval__mem_tail__v0;
    }
    if (__Vdlyvset__qs_3__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_3__DOT__ram_tail[0U] = __Vdlyvval__qs_3__DOT__ram_tail__v0;
    }
    vlSelf->__PVT__empty_3 = ((IData)(vlSelf->__PVT__heads_3) 
                              == (IData)(vlSelf->__PVT__tails_3));
    vlSelf->__PVT__empty_2 = ((IData)(vlSelf->__PVT__heads_2) 
                              == (IData)(vlSelf->__PVT__tails_2));
    vlSelf->__PVT__empty_1 = ((IData)(vlSelf->__PVT__heads_1) 
                              == (IData)(vlSelf->__PVT__tails_1));
    vlSelf->__PVT__empty_0 = ((IData)(vlSelf->__PVT__heads_0) 
                              == (IData)(vlSelf->__PVT__tails_0));
}

VL_INLINE_OPT void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer__1(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer__1\n"); );
    // Init
    CData/*4:0*/ __PVT___GEN_2;
    // Body
    vlSelf->__PVT___tails_T_22 = ((((2U & ((IData)(1U) 
                                           << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                     ? 5U : 0U) | (
                                                   (4U 
                                                    & ((IData)(1U) 
                                                       << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                                    ? 0xaU
                                                    : 0U)) 
                                  | ((8U & ((IData)(1U) 
                                            << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                      ? 0xfU : 0U));
    __PVT___GEN_2 = ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))
                      ? (IData)(vlSelf->__PVT__tails_2)
                      : ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))
                          ? (IData)(vlSelf->__PVT__tails_1)
                          : (IData)(vlSelf->__PVT__tails_0)));
    if ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))) {
        vlSelf->__PVT__mem_head_MPORT_addr = vlSelf->__PVT__tails_3;
        vlSelf->__PVT__mem_tail_MPORT_addr = vlSelf->__PVT__tails_3;
        vlSelf->__PVT__mem_payload_MPORT_addr = vlSelf->__PVT__tails_3;
        vlSelf->__PVT___GEN_3 = vlSelf->__PVT__tails_3;
    } else {
        vlSelf->__PVT__mem_head_MPORT_addr = __PVT___GEN_2;
        vlSelf->__PVT__mem_tail_MPORT_addr = __PVT___GEN_2;
        vlSelf->__PVT__mem_payload_MPORT_addr = __PVT___GEN_2;
        vlSelf->__PVT___GEN_3 = __PVT___GEN_2;
    }
    vlSelf->__PVT___tails_T_11 = ((IData)(vlSelf->__PVT___GEN_3) 
                                  == (((((1U & ((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                          ? 4U : 0U) 
                                        | ((2U & ((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                            ? 9U : 0U)) 
                                       | ((4U & ((IData)(1U) 
                                                 << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                           ? 0xeU : 0U)) 
                                      | ((8U & ((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                          ? 0x13U : 0U)));
}

VL_INLINE_OPT void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer__2(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer__2\n"); );
    // Init
    CData/*0:0*/ __PVT___GEN_51;
    CData/*0:0*/ __PVT___GEN_55;
    CData/*0:0*/ __PVT___GEN_59;
    CData/*0:0*/ __PVT___GEN_63;
    CData/*0:0*/ __PVT__can_to_q_0;
    CData/*0:0*/ __PVT__can_to_q_1;
    CData/*0:0*/ __PVT__can_to_q_2;
    CData/*0:0*/ __PVT__can_to_q_3;
    CData/*4:0*/ __PVT___head_T_3;
    CData/*4:0*/ __PVT___head_T_5;
    // Body
    vlSelf->__PVT__qs_0__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_in_0_ready) 
                                        & (IData)(vlSelf->__PVT__qs_0__DOT__maybe_full));
    vlSelf->__PVT__qs_0_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_in_0_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_0__DOT__maybe_full))));
    vlSelf->__PVT__qs_1__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_in_1_ready) 
                                        & (IData)(vlSelf->__PVT__qs_1__DOT__maybe_full));
    vlSelf->__PVT__qs_1_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_in_1_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_1__DOT__maybe_full))));
    vlSelf->__PVT__qs_2__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_in_2_ready) 
                                        & (IData)(vlSelf->__PVT__qs_2__DOT__maybe_full));
    vlSelf->__PVT__qs_2_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_in_2_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_2__DOT__maybe_full))));
    vlSelf->__PVT__qs_3__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_in_3_ready) 
                                        & (IData)(vlSelf->__PVT__qs_3__DOT__maybe_full));
    vlSelf->__PVT__qs_3_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_in_3_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_3__DOT__maybe_full))));
    __PVT__can_to_q_0 = ((~ (IData)(vlSelf->__PVT__empty_0)) 
                         & (IData)(vlSelf->__PVT__qs_0_io_enq_ready));
    __PVT__can_to_q_1 = ((~ (IData)(vlSelf->__PVT__empty_1)) 
                         & (IData)(vlSelf->__PVT__qs_1_io_enq_ready));
    __PVT__can_to_q_2 = ((~ (IData)(vlSelf->__PVT__empty_2)) 
                         & (IData)(vlSelf->__PVT__qs_2_io_enq_ready));
    vlSelf->__PVT__direct_to_q = (((((0xfU & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                              & (IData)(vlSelf->__PVT__qs_0_io_enq_ready))) 
                                     | (7U & ((((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                               >> 1U) 
                                              & (IData)(vlSelf->__PVT__qs_1_io_enq_ready)))) 
                                    | (3U & ((((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                              >> 2U) 
                                             & (IData)(vlSelf->__PVT__qs_2_io_enq_ready)))) 
                                   | ((IData)(vlSelf->__PVT__qs_3_io_enq_ready) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                         >> 3U))) & 
                                  ((((0xfU & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                              & (IData)(vlSelf->__PVT__empty_0))) 
                                     | (7U & ((((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                               >> 1U) 
                                              & (IData)(vlSelf->__PVT__empty_1)))) 
                                    | (3U & ((((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                              >> 2U) 
                                             & (IData)(vlSelf->__PVT__empty_2)))) 
                                   | ((IData)(vlSelf->__PVT__empty_3) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                         >> 3U))));
    __PVT__can_to_q_3 = ((~ (IData)(vlSelf->__PVT__empty_3)) 
                         & (IData)(vlSelf->__PVT__qs_3_io_enq_ready));
    __PVT___GEN_51 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (0U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))));
    __PVT___GEN_55 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))));
    __PVT___GEN_59 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))));
    __PVT___GEN_63 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))));
    vlSelf->__PVT___T_9 = ((((IData)(__PVT__can_to_q_0) 
                             | (IData)(__PVT__can_to_q_1)) 
                            | (IData)(__PVT__can_to_q_2)) 
                           | (IData)(__PVT__can_to_q_3));
    vlSelf->__PVT__to_q_oh_enc = ((IData)(__PVT__can_to_q_0)
                                   ? 1U : ((IData)(__PVT__can_to_q_1)
                                            ? 2U : 
                                           ((IData)(__PVT__can_to_q_2)
                                             ? 4U : 
                                            ((IData)(__PVT__can_to_q_3)
                                              ? 8U : 0U))));
    vlSelf->__PVT__to_q = (((IData)((0U != (3U & ((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                  >> 2U)))) 
                            << 1U) | (IData)((0U != 
                                              (0xaU 
                                               & (IData)(vlSelf->__PVT__to_q_oh_enc)))));
    vlSelf->__PVT___heads_T_14 = ((((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                     ? 5U : 0U) | (
                                                   (4U 
                                                    & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                                    ? 0xaU
                                                    : 0U)) 
                                  | ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                      ? 0xfU : 0U));
    if (vlSelf->__PVT___T_9) {
        vlSelf->__PVT__qs_0_io_enq_valid = (1U & ((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                  | (IData)(__PVT___GEN_51)));
        vlSelf->__PVT__qs_1_io_enq_valid = (1U & (((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                   >> 1U) 
                                                  | (IData)(__PVT___GEN_55)));
        vlSelf->__PVT__qs_2_io_enq_valid = (1U & (((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                   >> 2U) 
                                                  | (IData)(__PVT___GEN_59)));
        vlSelf->__PVT__qs_3_io_enq_valid = (1U & (((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                   >> 3U) 
                                                  | (IData)(__PVT___GEN_63)));
    } else {
        vlSelf->__PVT__qs_0_io_enq_valid = (1U & (IData)(__PVT___GEN_51));
        vlSelf->__PVT__qs_1_io_enq_valid = (1U & (IData)(__PVT___GEN_55));
        vlSelf->__PVT__qs_2_io_enq_valid = (1U & (IData)(__PVT___GEN_59));
        vlSelf->__PVT__qs_3_io_enq_valid = (1U & (IData)(__PVT___GEN_63));
    }
    __PVT___head_T_3 = ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                         ? (IData)(vlSelf->__PVT__heads_3)
                         : 0U);
    __PVT___head_T_5 = ((((1U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                           ? (IData)(vlSelf->__PVT__heads_0)
                           : 0U) | ((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                     ? (IData)(vlSelf->__PVT__heads_1)
                                     : 0U)) | ((4U 
                                                & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                                ? (IData)(vlSelf->__PVT__heads_2)
                                                : 0U));
    vlSelf->__PVT__qs_0__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_0_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_0_io_enq_valid));
    vlSelf->__PVT__qs_1__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_1_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_1_io_enq_valid));
    vlSelf->__PVT__qs_2__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_2_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_2_io_enq_valid));
    vlSelf->__PVT__qs_3__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_3_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_3_io_enq_valid));
    vlSelf->__PVT__mem_head_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_head_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_head_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_head_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__head = ((IData)(__PVT___head_T_5) 
                           | (IData)(__PVT___head_T_3));
    vlSelf->__PVT___heads_T_7 = ((IData)(vlSelf->__PVT__head) 
                                 == (((((1U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                         ? 4U : 0U) 
                                       | ((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                           ? 9U : 0U)) 
                                      | ((4U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                          ? 0xeU : 0U)) 
                                     | ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                         ? 0x13U : 0U)));
}

VL_INLINE_OPT void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer__0(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__mem_tail__v0;
    CData/*0:0*/ __Vdlyvval__mem_tail__v0;
    CData/*0:0*/ __Vdlyvset__mem_tail__v0;
    CData/*4:0*/ __Vdlyvdim0__mem_head__v0;
    CData/*0:0*/ __Vdlyvval__mem_head__v0;
    CData/*0:0*/ __Vdlyvset__mem_head__v0;
    CData/*4:0*/ __Vdlyvdim0__mem_payload__v0;
    QData/*63:0*/ __Vdlyvval__mem_payload__v0;
    CData/*0:0*/ __Vdlyvset__mem_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_0__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_0__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_0__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_0__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_0__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_0__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_1__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_1__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_1__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_1__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_1__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_1__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_2__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_2__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_2__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_2__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_2__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_2__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_3__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_3__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_3__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_3__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_3__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_3__DOT__ram_payload__v0;
    // Body
    __Vdlyvset__mem_payload__v0 = 0U;
    __Vdlyvset__mem_tail__v0 = 0U;
    __Vdlyvset__mem_head__v0 = 0U;
    __Vdlyvset__qs_0__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_1__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_2__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_3__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_0__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_1__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_2__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_3__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_0__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__qs_1__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__qs_2__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__qs_3__DOT__ram_tail__v0 = 0U;
    if (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_valid) 
         & (~ (IData)(vlSelf->__PVT__direct_to_q)))) {
        vlSelf->__Vlvbound_hf210c3d8__0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
        if ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_MPORT_addr))) {
            __Vdlyvval__mem_payload__v0 = vlSelf->__Vlvbound_hf210c3d8__0;
            __Vdlyvset__mem_payload__v0 = 1U;
            __Vdlyvdim0__mem_payload__v0 = vlSelf->__PVT__mem_payload_MPORT_addr;
        }
        vlSelf->__Vlvbound_had19c418__0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
        if ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_MPORT_addr))) {
            __Vdlyvval__mem_tail__v0 = vlSelf->__Vlvbound_had19c418__0;
            __Vdlyvset__mem_tail__v0 = 1U;
            __Vdlyvdim0__mem_tail__v0 = vlSelf->__PVT__mem_tail_MPORT_addr;
        }
        vlSelf->__Vlvbound_h44e885f1__0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_head;
        if ((0x13U >= (IData)(vlSelf->__PVT__mem_head_MPORT_addr))) {
            __Vdlyvval__mem_head__v0 = vlSelf->__Vlvbound_h44e885f1__0;
            __Vdlyvset__mem_head__v0 = 1U;
            __Vdlyvdim0__mem_head__v0 = vlSelf->__PVT__mem_head_MPORT_addr;
        }
    }
    if (((IData)(vlSelf->__PVT__qs_0_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_0_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((1U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_0__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_0__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_0_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_0_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_0__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_0__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
                __Vdlyvval__qs_0__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_head;
                __Vdlyvval__qs_0__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_0__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
            __Vdlyvval__qs_0__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_head;
            __Vdlyvval__qs_0__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
        }
        __Vdlyvset__qs_0__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_0__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_0__DOT__ram_tail__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__qs_1_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_1_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_1__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_1__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_1_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_1_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_1__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_1__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
                __Vdlyvval__qs_1__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_head;
                __Vdlyvval__qs_1__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_1__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
            __Vdlyvval__qs_1__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_head;
            __Vdlyvval__qs_1__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
        }
        __Vdlyvset__qs_1__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_1__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_1__DOT__ram_tail__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__qs_2_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_2_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((4U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_2__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_2__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_2_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_2_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_2__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_2__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
                __Vdlyvval__qs_2__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_head;
                __Vdlyvval__qs_2__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_2__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
            __Vdlyvval__qs_2__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_head;
            __Vdlyvval__qs_2__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
        }
        __Vdlyvset__qs_2__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_2__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_2__DOT__ram_tail__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__qs_3_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_3_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_3__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_3__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_3_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_3_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_3__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_3__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
                __Vdlyvval__qs_3__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_head;
                __Vdlyvval__qs_3__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_3__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
            __Vdlyvval__qs_3__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_head;
            __Vdlyvval__qs_3__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
        }
        __Vdlyvset__qs_3__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_3__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_3__DOT__ram_tail__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__heads_3 = 0xfU;
        vlSelf->__PVT__heads_0 = 0U;
        vlSelf->__PVT__heads_2 = 0xaU;
        vlSelf->__PVT__heads_1 = 5U;
        vlSelf->__PVT__tails_3 = 0xfU;
        vlSelf->__PVT__tails_2 = 0xaU;
        vlSelf->__PVT__tails_1 = 5U;
        vlSelf->__PVT__tails_0 = 0U;
        vlSelf->__PVT__qs_0__DOT__maybe_full = 0U;
        vlSelf->__PVT__qs_1__DOT__maybe_full = 0U;
        vlSelf->__PVT__qs_2__DOT__maybe_full = 0U;
        vlSelf->__PVT__qs_3__DOT__maybe_full = 0U;
    } else {
        if (vlSelf->__PVT___T_9) {
            if ((3U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_3 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
            if ((0U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_0 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
            if ((2U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_2 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
            if ((1U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_1 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
        }
        if (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_valid) 
             & (~ (IData)(vlSelf->__PVT__direct_to_q)))) {
            if ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_3 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
            if ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_2 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
            if ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_1 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
            if ((0U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_0 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
        }
        if (((IData)(vlSelf->__PVT__qs_0__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_0__DOT__do_deq))) {
            vlSelf->__PVT__qs_0__DOT__maybe_full = vlSelf->__PVT__qs_0__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__qs_1__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_1__DOT__do_deq))) {
            vlSelf->__PVT__qs_1__DOT__maybe_full = vlSelf->__PVT__qs_1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__qs_2__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_2__DOT__do_deq))) {
            vlSelf->__PVT__qs_2__DOT__maybe_full = vlSelf->__PVT__qs_2__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__qs_3__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_3__DOT__do_deq))) {
            vlSelf->__PVT__qs_3__DOT__maybe_full = vlSelf->__PVT__qs_3__DOT__do_enq;
        }
    }
    if (__Vdlyvset__qs_0__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_0__DOT__ram_payload[0U] = __Vdlyvval__qs_0__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__qs_1__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_1__DOT__ram_payload[0U] = __Vdlyvval__qs_1__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__qs_2__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_2__DOT__ram_payload[0U] = __Vdlyvval__qs_2__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__qs_3__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_3__DOT__ram_payload[0U] = __Vdlyvval__qs_3__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__mem_payload__v0) {
        vlSelf->__PVT__mem_payload[__Vdlyvdim0__mem_payload__v0] 
            = __Vdlyvval__mem_payload__v0;
    }
    if (__Vdlyvset__qs_0__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_0__DOT__ram_head[0U] = __Vdlyvval__qs_0__DOT__ram_head__v0;
    }
    if (__Vdlyvset__qs_1__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_1__DOT__ram_head[0U] = __Vdlyvval__qs_1__DOT__ram_head__v0;
    }
    if (__Vdlyvset__qs_2__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_2__DOT__ram_head[0U] = __Vdlyvval__qs_2__DOT__ram_head__v0;
    }
    if (__Vdlyvset__qs_3__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_3__DOT__ram_head[0U] = __Vdlyvval__qs_3__DOT__ram_head__v0;
    }
    if (__Vdlyvset__mem_head__v0) {
        vlSelf->__PVT__mem_head[__Vdlyvdim0__mem_head__v0] 
            = __Vdlyvval__mem_head__v0;
    }
    if (__Vdlyvset__qs_0__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_0__DOT__ram_tail[0U] = __Vdlyvval__qs_0__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__qs_1__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_1__DOT__ram_tail[0U] = __Vdlyvval__qs_1__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__qs_2__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_2__DOT__ram_tail[0U] = __Vdlyvval__qs_2__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__mem_tail__v0) {
        vlSelf->__PVT__mem_tail[__Vdlyvdim0__mem_tail__v0] 
            = __Vdlyvval__mem_tail__v0;
    }
    if (__Vdlyvset__qs_3__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_3__DOT__ram_tail[0U] = __Vdlyvval__qs_3__DOT__ram_tail__v0;
    }
    vlSelf->__PVT__empty_3 = ((IData)(vlSelf->__PVT__heads_3) 
                              == (IData)(vlSelf->__PVT__tails_3));
    vlSelf->__PVT__empty_2 = ((IData)(vlSelf->__PVT__heads_2) 
                              == (IData)(vlSelf->__PVT__tails_2));
    vlSelf->__PVT__empty_1 = ((IData)(vlSelf->__PVT__heads_1) 
                              == (IData)(vlSelf->__PVT__tails_1));
    vlSelf->__PVT__empty_0 = ((IData)(vlSelf->__PVT__heads_0) 
                              == (IData)(vlSelf->__PVT__tails_0));
}

VL_INLINE_OPT void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer__1(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer__1\n"); );
    // Init
    CData/*4:0*/ __PVT___GEN_2;
    // Body
    vlSelf->__PVT___tails_T_22 = ((((2U & ((IData)(1U) 
                                           << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                     ? 5U : 0U) | (
                                                   (4U 
                                                    & ((IData)(1U) 
                                                       << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                                    ? 0xaU
                                                    : 0U)) 
                                  | ((8U & ((IData)(1U) 
                                            << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                      ? 0xfU : 0U));
    __PVT___GEN_2 = ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))
                      ? (IData)(vlSelf->__PVT__tails_2)
                      : ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))
                          ? (IData)(vlSelf->__PVT__tails_1)
                          : (IData)(vlSelf->__PVT__tails_0)));
    if ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))) {
        vlSelf->__PVT__mem_head_MPORT_addr = vlSelf->__PVT__tails_3;
        vlSelf->__PVT__mem_tail_MPORT_addr = vlSelf->__PVT__tails_3;
        vlSelf->__PVT__mem_payload_MPORT_addr = vlSelf->__PVT__tails_3;
        vlSelf->__PVT___GEN_3 = vlSelf->__PVT__tails_3;
    } else {
        vlSelf->__PVT__mem_head_MPORT_addr = __PVT___GEN_2;
        vlSelf->__PVT__mem_tail_MPORT_addr = __PVT___GEN_2;
        vlSelf->__PVT__mem_payload_MPORT_addr = __PVT___GEN_2;
        vlSelf->__PVT___GEN_3 = __PVT___GEN_2;
    }
    vlSelf->__PVT___tails_T_11 = ((IData)(vlSelf->__PVT___GEN_3) 
                                  == (((((1U & ((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                          ? 4U : 0U) 
                                        | ((2U & ((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                            ? 9U : 0U)) 
                                       | ((4U & ((IData)(1U) 
                                                 << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                           ? 0xeU : 0U)) 
                                      | ((8U & ((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                          ? 0x13U : 0U)));
}

VL_INLINE_OPT void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer__2(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer__2\n"); );
    // Init
    CData/*0:0*/ __PVT___GEN_51;
    CData/*0:0*/ __PVT___GEN_55;
    CData/*0:0*/ __PVT___GEN_59;
    CData/*0:0*/ __PVT___GEN_63;
    CData/*0:0*/ __PVT__can_to_q_0;
    CData/*0:0*/ __PVT__can_to_q_1;
    CData/*0:0*/ __PVT__can_to_q_2;
    CData/*0:0*/ __PVT__can_to_q_3;
    CData/*4:0*/ __PVT___head_T_3;
    CData/*4:0*/ __PVT___head_T_5;
    // Body
    vlSelf->__PVT__qs_0__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_in_0_ready) 
                                        & (IData)(vlSelf->__PVT__qs_0__DOT__maybe_full));
    vlSelf->__PVT__qs_0_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_in_0_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_0__DOT__maybe_full))));
    vlSelf->__PVT__qs_1__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_in_1_ready) 
                                        & (IData)(vlSelf->__PVT__qs_1__DOT__maybe_full));
    vlSelf->__PVT__qs_1_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_in_1_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_1__DOT__maybe_full))));
    vlSelf->__PVT__qs_2__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_in_2_ready) 
                                        & (IData)(vlSelf->__PVT__qs_2__DOT__maybe_full));
    vlSelf->__PVT__qs_2_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_in_2_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_2__DOT__maybe_full))));
    vlSelf->__PVT__qs_3__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_in_3_ready) 
                                        & (IData)(vlSelf->__PVT__qs_3__DOT__maybe_full));
    vlSelf->__PVT__qs_3_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_in_3_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_3__DOT__maybe_full))));
    __PVT__can_to_q_0 = ((~ (IData)(vlSelf->__PVT__empty_0)) 
                         & (IData)(vlSelf->__PVT__qs_0_io_enq_ready));
    __PVT__can_to_q_1 = ((~ (IData)(vlSelf->__PVT__empty_1)) 
                         & (IData)(vlSelf->__PVT__qs_1_io_enq_ready));
    __PVT__can_to_q_2 = ((~ (IData)(vlSelf->__PVT__empty_2)) 
                         & (IData)(vlSelf->__PVT__qs_2_io_enq_ready));
    vlSelf->__PVT__direct_to_q = (((((0xfU & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                              & (IData)(vlSelf->__PVT__qs_0_io_enq_ready))) 
                                     | (7U & ((((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                               >> 1U) 
                                              & (IData)(vlSelf->__PVT__qs_1_io_enq_ready)))) 
                                    | (3U & ((((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                              >> 2U) 
                                             & (IData)(vlSelf->__PVT__qs_2_io_enq_ready)))) 
                                   | ((IData)(vlSelf->__PVT__qs_3_io_enq_ready) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                         >> 3U))) & 
                                  ((((0xfU & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                              & (IData)(vlSelf->__PVT__empty_0))) 
                                     | (7U & ((((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                               >> 1U) 
                                              & (IData)(vlSelf->__PVT__empty_1)))) 
                                    | (3U & ((((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                              >> 2U) 
                                             & (IData)(vlSelf->__PVT__empty_2)))) 
                                   | ((IData)(vlSelf->__PVT__empty_3) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                         >> 3U))));
    __PVT__can_to_q_3 = ((~ (IData)(vlSelf->__PVT__empty_3)) 
                         & (IData)(vlSelf->__PVT__qs_3_io_enq_ready));
    __PVT___GEN_51 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (0U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))));
    __PVT___GEN_55 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))));
    __PVT___GEN_59 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))));
    __PVT___GEN_63 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))));
    vlSelf->__PVT___T_9 = ((((IData)(__PVT__can_to_q_0) 
                             | (IData)(__PVT__can_to_q_1)) 
                            | (IData)(__PVT__can_to_q_2)) 
                           | (IData)(__PVT__can_to_q_3));
    vlSelf->__PVT__to_q_oh_enc = ((IData)(__PVT__can_to_q_0)
                                   ? 1U : ((IData)(__PVT__can_to_q_1)
                                            ? 2U : 
                                           ((IData)(__PVT__can_to_q_2)
                                             ? 4U : 
                                            ((IData)(__PVT__can_to_q_3)
                                              ? 8U : 0U))));
    vlSelf->__PVT__to_q = (((IData)((0U != (3U & ((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                  >> 2U)))) 
                            << 1U) | (IData)((0U != 
                                              (0xaU 
                                               & (IData)(vlSelf->__PVT__to_q_oh_enc)))));
    vlSelf->__PVT___heads_T_14 = ((((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                     ? 5U : 0U) | (
                                                   (4U 
                                                    & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                                    ? 0xaU
                                                    : 0U)) 
                                  | ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                      ? 0xfU : 0U));
    if (vlSelf->__PVT___T_9) {
        vlSelf->__PVT__qs_0_io_enq_valid = (1U & ((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                  | (IData)(__PVT___GEN_51)));
        vlSelf->__PVT__qs_1_io_enq_valid = (1U & (((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                   >> 1U) 
                                                  | (IData)(__PVT___GEN_55)));
        vlSelf->__PVT__qs_2_io_enq_valid = (1U & (((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                   >> 2U) 
                                                  | (IData)(__PVT___GEN_59)));
        vlSelf->__PVT__qs_3_io_enq_valid = (1U & (((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                   >> 3U) 
                                                  | (IData)(__PVT___GEN_63)));
    } else {
        vlSelf->__PVT__qs_0_io_enq_valid = (1U & (IData)(__PVT___GEN_51));
        vlSelf->__PVT__qs_1_io_enq_valid = (1U & (IData)(__PVT___GEN_55));
        vlSelf->__PVT__qs_2_io_enq_valid = (1U & (IData)(__PVT___GEN_59));
        vlSelf->__PVT__qs_3_io_enq_valid = (1U & (IData)(__PVT___GEN_63));
    }
    __PVT___head_T_3 = ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                         ? (IData)(vlSelf->__PVT__heads_3)
                         : 0U);
    __PVT___head_T_5 = ((((1U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                           ? (IData)(vlSelf->__PVT__heads_0)
                           : 0U) | ((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                     ? (IData)(vlSelf->__PVT__heads_1)
                                     : 0U)) | ((4U 
                                                & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                                ? (IData)(vlSelf->__PVT__heads_2)
                                                : 0U));
    vlSelf->__PVT__qs_0__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_0_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_0_io_enq_valid));
    vlSelf->__PVT__qs_1__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_1_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_1_io_enq_valid));
    vlSelf->__PVT__qs_2__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_2_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_2_io_enq_valid));
    vlSelf->__PVT__qs_3__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_3_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_3_io_enq_valid));
    vlSelf->__PVT__mem_head_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_head_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_head_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_head_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__head = ((IData)(__PVT___head_T_5) 
                           | (IData)(__PVT___head_T_3));
    vlSelf->__PVT___heads_T_7 = ((IData)(vlSelf->__PVT__head) 
                                 == (((((1U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                         ? 4U : 0U) 
                                       | ((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                           ? 9U : 0U)) 
                                      | ((4U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                          ? 0xeU : 0U)) 
                                     | ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                         ? 0x13U : 0U)));
}

VL_INLINE_OPT void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__0(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__mem_tail__v0;
    CData/*0:0*/ __Vdlyvval__mem_tail__v0;
    CData/*0:0*/ __Vdlyvset__mem_tail__v0;
    CData/*4:0*/ __Vdlyvdim0__mem_head__v0;
    CData/*0:0*/ __Vdlyvval__mem_head__v0;
    CData/*0:0*/ __Vdlyvset__mem_head__v0;
    CData/*4:0*/ __Vdlyvdim0__mem_payload__v0;
    QData/*63:0*/ __Vdlyvval__mem_payload__v0;
    CData/*0:0*/ __Vdlyvset__mem_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_0__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_0__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_0__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_0__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_0__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_0__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_1__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_1__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_1__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_1__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_1__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_1__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_2__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_2__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_2__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_2__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_2__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_2__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_3__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_3__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_3__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_3__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_3__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_3__DOT__ram_payload__v0;
    // Body
    __Vdlyvset__mem_payload__v0 = 0U;
    __Vdlyvset__mem_tail__v0 = 0U;
    __Vdlyvset__mem_head__v0 = 0U;
    __Vdlyvset__qs_0__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_1__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_2__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_3__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_0__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_1__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_2__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_3__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_0__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__qs_1__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__qs_2__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__qs_3__DOT__ram_tail__v0 = 0U;
    if (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_valid) 
         & (~ (IData)(vlSelf->__PVT__direct_to_q)))) {
        vlSelf->__Vlvbound_hf210c3d8__0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
        if ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_MPORT_addr))) {
            __Vdlyvval__mem_payload__v0 = vlSelf->__Vlvbound_hf210c3d8__0;
            __Vdlyvset__mem_payload__v0 = 1U;
            __Vdlyvdim0__mem_payload__v0 = vlSelf->__PVT__mem_payload_MPORT_addr;
        }
        vlSelf->__Vlvbound_had19c418__0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
        if ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_MPORT_addr))) {
            __Vdlyvval__mem_tail__v0 = vlSelf->__Vlvbound_had19c418__0;
            __Vdlyvset__mem_tail__v0 = 1U;
            __Vdlyvdim0__mem_tail__v0 = vlSelf->__PVT__mem_tail_MPORT_addr;
        }
        vlSelf->__Vlvbound_h44e885f1__0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_head;
        if ((0x13U >= (IData)(vlSelf->__PVT__mem_head_MPORT_addr))) {
            __Vdlyvval__mem_head__v0 = vlSelf->__Vlvbound_h44e885f1__0;
            __Vdlyvset__mem_head__v0 = 1U;
            __Vdlyvdim0__mem_head__v0 = vlSelf->__PVT__mem_head_MPORT_addr;
        }
    }
    if (((IData)(vlSelf->__PVT__qs_0_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_0_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((1U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_0__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_0__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_0_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_0_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_0__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_0__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
                __Vdlyvval__qs_0__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_head;
                __Vdlyvval__qs_0__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_0__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
            __Vdlyvval__qs_0__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_head;
            __Vdlyvval__qs_0__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
        }
        __Vdlyvset__qs_0__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_0__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_0__DOT__ram_tail__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__qs_1_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_1_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_1__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_1__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_1_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_1_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_1__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_1__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
                __Vdlyvval__qs_1__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_head;
                __Vdlyvval__qs_1__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_1__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
            __Vdlyvval__qs_1__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_head;
            __Vdlyvval__qs_1__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
        }
        __Vdlyvset__qs_1__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_1__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_1__DOT__ram_tail__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__qs_2_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_2_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((4U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_2__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_2__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_2_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_2_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_2__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_2__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
                __Vdlyvval__qs_2__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_head;
                __Vdlyvval__qs_2__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_2__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
            __Vdlyvval__qs_2__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_head;
            __Vdlyvval__qs_2__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
        }
        __Vdlyvset__qs_2__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_2__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_2__DOT__ram_tail__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__qs_3_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_3_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_3__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_3__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_3_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_3_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_3__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_3__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
                __Vdlyvval__qs_3__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_head;
                __Vdlyvval__qs_3__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_3__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
            __Vdlyvval__qs_3__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_head;
            __Vdlyvval__qs_3__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
        }
        __Vdlyvset__qs_3__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_3__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_3__DOT__ram_tail__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__heads_3 = 0xfU;
        vlSelf->__PVT__heads_0 = 0U;
        vlSelf->__PVT__heads_2 = 0xaU;
        vlSelf->__PVT__heads_1 = 5U;
        vlSelf->__PVT__tails_3 = 0xfU;
        vlSelf->__PVT__tails_2 = 0xaU;
        vlSelf->__PVT__tails_1 = 5U;
        vlSelf->__PVT__tails_0 = 0U;
        vlSelf->__PVT__qs_0__DOT__maybe_full = 0U;
        vlSelf->__PVT__qs_1__DOT__maybe_full = 0U;
        vlSelf->__PVT__qs_2__DOT__maybe_full = 0U;
        vlSelf->__PVT__qs_3__DOT__maybe_full = 0U;
    } else {
        if (vlSelf->__PVT___T_9) {
            if ((3U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_3 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
            if ((0U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_0 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
            if ((2U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_2 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
            if ((1U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_1 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
        }
        if (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_valid) 
             & (~ (IData)(vlSelf->__PVT__direct_to_q)))) {
            if ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_3 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
            if ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_2 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
            if ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_1 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
            if ((0U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_0 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
        }
        if (((IData)(vlSelf->__PVT__qs_0__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_0__DOT__do_deq))) {
            vlSelf->__PVT__qs_0__DOT__maybe_full = vlSelf->__PVT__qs_0__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__qs_1__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_1__DOT__do_deq))) {
            vlSelf->__PVT__qs_1__DOT__maybe_full = vlSelf->__PVT__qs_1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__qs_2__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_2__DOT__do_deq))) {
            vlSelf->__PVT__qs_2__DOT__maybe_full = vlSelf->__PVT__qs_2__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__qs_3__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_3__DOT__do_deq))) {
            vlSelf->__PVT__qs_3__DOT__maybe_full = vlSelf->__PVT__qs_3__DOT__do_enq;
        }
    }
    if (__Vdlyvset__qs_0__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_0__DOT__ram_payload[0U] = __Vdlyvval__qs_0__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__qs_1__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_1__DOT__ram_payload[0U] = __Vdlyvval__qs_1__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__qs_2__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_2__DOT__ram_payload[0U] = __Vdlyvval__qs_2__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__qs_3__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_3__DOT__ram_payload[0U] = __Vdlyvval__qs_3__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__mem_payload__v0) {
        vlSelf->__PVT__mem_payload[__Vdlyvdim0__mem_payload__v0] 
            = __Vdlyvval__mem_payload__v0;
    }
    if (__Vdlyvset__qs_0__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_0__DOT__ram_head[0U] = __Vdlyvval__qs_0__DOT__ram_head__v0;
    }
    if (__Vdlyvset__qs_1__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_1__DOT__ram_head[0U] = __Vdlyvval__qs_1__DOT__ram_head__v0;
    }
    if (__Vdlyvset__qs_2__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_2__DOT__ram_head[0U] = __Vdlyvval__qs_2__DOT__ram_head__v0;
    }
    if (__Vdlyvset__qs_3__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_3__DOT__ram_head[0U] = __Vdlyvval__qs_3__DOT__ram_head__v0;
    }
    if (__Vdlyvset__mem_head__v0) {
        vlSelf->__PVT__mem_head[__Vdlyvdim0__mem_head__v0] 
            = __Vdlyvval__mem_head__v0;
    }
    if (__Vdlyvset__qs_0__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_0__DOT__ram_tail[0U] = __Vdlyvval__qs_0__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__qs_1__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_1__DOT__ram_tail[0U] = __Vdlyvval__qs_1__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__qs_2__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_2__DOT__ram_tail[0U] = __Vdlyvval__qs_2__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__mem_tail__v0) {
        vlSelf->__PVT__mem_tail[__Vdlyvdim0__mem_tail__v0] 
            = __Vdlyvval__mem_tail__v0;
    }
    if (__Vdlyvset__qs_3__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_3__DOT__ram_tail[0U] = __Vdlyvval__qs_3__DOT__ram_tail__v0;
    }
    vlSelf->__PVT__empty_3 = ((IData)(vlSelf->__PVT__heads_3) 
                              == (IData)(vlSelf->__PVT__tails_3));
    vlSelf->__PVT__empty_2 = ((IData)(vlSelf->__PVT__heads_2) 
                              == (IData)(vlSelf->__PVT__tails_2));
    vlSelf->__PVT__empty_1 = ((IData)(vlSelf->__PVT__heads_1) 
                              == (IData)(vlSelf->__PVT__tails_1));
    vlSelf->__PVT__empty_0 = ((IData)(vlSelf->__PVT__heads_0) 
                              == (IData)(vlSelf->__PVT__tails_0));
}

VL_INLINE_OPT void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__1(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__1\n"); );
    // Init
    CData/*4:0*/ __PVT___GEN_2;
    // Body
    vlSelf->__PVT___tails_T_22 = ((((2U & ((IData)(1U) 
                                           << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                     ? 5U : 0U) | (
                                                   (4U 
                                                    & ((IData)(1U) 
                                                       << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                                    ? 0xaU
                                                    : 0U)) 
                                  | ((8U & ((IData)(1U) 
                                            << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                      ? 0xfU : 0U));
    __PVT___GEN_2 = ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))
                      ? (IData)(vlSelf->__PVT__tails_2)
                      : ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))
                          ? (IData)(vlSelf->__PVT__tails_1)
                          : (IData)(vlSelf->__PVT__tails_0)));
    if ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))) {
        vlSelf->__PVT__mem_head_MPORT_addr = vlSelf->__PVT__tails_3;
        vlSelf->__PVT__mem_tail_MPORT_addr = vlSelf->__PVT__tails_3;
        vlSelf->__PVT__mem_payload_MPORT_addr = vlSelf->__PVT__tails_3;
        vlSelf->__PVT___GEN_3 = vlSelf->__PVT__tails_3;
    } else {
        vlSelf->__PVT__mem_head_MPORT_addr = __PVT___GEN_2;
        vlSelf->__PVT__mem_tail_MPORT_addr = __PVT___GEN_2;
        vlSelf->__PVT__mem_payload_MPORT_addr = __PVT___GEN_2;
        vlSelf->__PVT___GEN_3 = __PVT___GEN_2;
    }
    vlSelf->__PVT___tails_T_11 = ((IData)(vlSelf->__PVT___GEN_3) 
                                  == (((((1U & ((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                          ? 4U : 0U) 
                                        | ((2U & ((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                            ? 9U : 0U)) 
                                       | ((4U & ((IData)(1U) 
                                                 << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                           ? 0xeU : 0U)) 
                                      | ((8U & ((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                          ? 0x13U : 0U)));
}

VL_INLINE_OPT void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__2(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__2\n"); );
    // Init
    CData/*0:0*/ __PVT___GEN_51;
    CData/*0:0*/ __PVT___GEN_55;
    CData/*0:0*/ __PVT___GEN_59;
    CData/*0:0*/ __PVT___GEN_63;
    CData/*0:0*/ __PVT__can_to_q_0;
    CData/*0:0*/ __PVT__can_to_q_1;
    CData/*0:0*/ __PVT__can_to_q_2;
    CData/*0:0*/ __PVT__can_to_q_3;
    CData/*4:0*/ __PVT___head_T_3;
    CData/*4:0*/ __PVT___head_T_5;
    // Body
    vlSelf->__PVT__qs_0__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_0_ready) 
                                        & (IData)(vlSelf->__PVT__qs_0__DOT__maybe_full));
    vlSelf->__PVT__qs_0_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_0_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_0__DOT__maybe_full))));
    vlSelf->__PVT__qs_1__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_1_ready) 
                                        & (IData)(vlSelf->__PVT__qs_1__DOT__maybe_full));
    vlSelf->__PVT__qs_1_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_1_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_1__DOT__maybe_full))));
    vlSelf->__PVT__qs_2__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_2_ready) 
                                        & (IData)(vlSelf->__PVT__qs_2__DOT__maybe_full));
    vlSelf->__PVT__qs_2_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_2_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_2__DOT__maybe_full))));
    vlSelf->__PVT__qs_3__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_3_ready) 
                                        & (IData)(vlSelf->__PVT__qs_3__DOT__maybe_full));
    vlSelf->__PVT__qs_3_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_3_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_3__DOT__maybe_full))));
    __PVT__can_to_q_0 = ((~ (IData)(vlSelf->__PVT__empty_0)) 
                         & (IData)(vlSelf->__PVT__qs_0_io_enq_ready));
    __PVT__can_to_q_1 = ((~ (IData)(vlSelf->__PVT__empty_1)) 
                         & (IData)(vlSelf->__PVT__qs_1_io_enq_ready));
    __PVT__can_to_q_2 = ((~ (IData)(vlSelf->__PVT__empty_2)) 
                         & (IData)(vlSelf->__PVT__qs_2_io_enq_ready));
    vlSelf->__PVT__direct_to_q = (((((0xfU & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                              & (IData)(vlSelf->__PVT__qs_0_io_enq_ready))) 
                                     | (7U & ((((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                               >> 1U) 
                                              & (IData)(vlSelf->__PVT__qs_1_io_enq_ready)))) 
                                    | (3U & ((((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                              >> 2U) 
                                             & (IData)(vlSelf->__PVT__qs_2_io_enq_ready)))) 
                                   | ((IData)(vlSelf->__PVT__qs_3_io_enq_ready) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                         >> 3U))) & 
                                  ((((0xfU & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                              & (IData)(vlSelf->__PVT__empty_0))) 
                                     | (7U & ((((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                               >> 1U) 
                                              & (IData)(vlSelf->__PVT__empty_1)))) 
                                    | (3U & ((((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                              >> 2U) 
                                             & (IData)(vlSelf->__PVT__empty_2)))) 
                                   | ((IData)(vlSelf->__PVT__empty_3) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                         >> 3U))));
    __PVT__can_to_q_3 = ((~ (IData)(vlSelf->__PVT__empty_3)) 
                         & (IData)(vlSelf->__PVT__qs_3_io_enq_ready));
    __PVT___GEN_51 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (0U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))));
    __PVT___GEN_55 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))));
    __PVT___GEN_59 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))));
    __PVT___GEN_63 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))));
    vlSelf->__PVT___T_9 = ((((IData)(__PVT__can_to_q_0) 
                             | (IData)(__PVT__can_to_q_1)) 
                            | (IData)(__PVT__can_to_q_2)) 
                           | (IData)(__PVT__can_to_q_3));
    vlSelf->__PVT__to_q_oh_enc = ((IData)(__PVT__can_to_q_0)
                                   ? 1U : ((IData)(__PVT__can_to_q_1)
                                            ? 2U : 
                                           ((IData)(__PVT__can_to_q_2)
                                             ? 4U : 
                                            ((IData)(__PVT__can_to_q_3)
                                              ? 8U : 0U))));
    vlSelf->__PVT__to_q = (((IData)((0U != (3U & ((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                  >> 2U)))) 
                            << 1U) | (IData)((0U != 
                                              (0xaU 
                                               & (IData)(vlSelf->__PVT__to_q_oh_enc)))));
    vlSelf->__PVT___heads_T_14 = ((((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                     ? 5U : 0U) | (
                                                   (4U 
                                                    & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                                    ? 0xaU
                                                    : 0U)) 
                                  | ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                      ? 0xfU : 0U));
    if (vlSelf->__PVT___T_9) {
        vlSelf->__PVT__qs_0_io_enq_valid = (1U & ((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                  | (IData)(__PVT___GEN_51)));
        vlSelf->__PVT__qs_1_io_enq_valid = (1U & (((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                   >> 1U) 
                                                  | (IData)(__PVT___GEN_55)));
        vlSelf->__PVT__qs_2_io_enq_valid = (1U & (((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                   >> 2U) 
                                                  | (IData)(__PVT___GEN_59)));
        vlSelf->__PVT__qs_3_io_enq_valid = (1U & (((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                   >> 3U) 
                                                  | (IData)(__PVT___GEN_63)));
    } else {
        vlSelf->__PVT__qs_0_io_enq_valid = (1U & (IData)(__PVT___GEN_51));
        vlSelf->__PVT__qs_1_io_enq_valid = (1U & (IData)(__PVT___GEN_55));
        vlSelf->__PVT__qs_2_io_enq_valid = (1U & (IData)(__PVT___GEN_59));
        vlSelf->__PVT__qs_3_io_enq_valid = (1U & (IData)(__PVT___GEN_63));
    }
    __PVT___head_T_3 = ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                         ? (IData)(vlSelf->__PVT__heads_3)
                         : 0U);
    __PVT___head_T_5 = ((((1U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                           ? (IData)(vlSelf->__PVT__heads_0)
                           : 0U) | ((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                     ? (IData)(vlSelf->__PVT__heads_1)
                                     : 0U)) | ((4U 
                                                & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                                ? (IData)(vlSelf->__PVT__heads_2)
                                                : 0U));
    vlSelf->__PVT__qs_0__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_0_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_0_io_enq_valid));
    vlSelf->__PVT__qs_1__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_1_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_1_io_enq_valid));
    vlSelf->__PVT__qs_2__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_2_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_2_io_enq_valid));
    vlSelf->__PVT__qs_3__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_3_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_3_io_enq_valid));
    vlSelf->__PVT__mem_head_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_head_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_head_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_head_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__head = ((IData)(__PVT___head_T_5) 
                           | (IData)(__PVT___head_T_3));
    vlSelf->__PVT___heads_T_7 = ((IData)(vlSelf->__PVT__head) 
                                 == (((((1U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                         ? 4U : 0U) 
                                       | ((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                           ? 9U : 0U)) 
                                      | ((4U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                          ? 0xeU : 0U)) 
                                     | ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                         ? 0x13U : 0U)));
}

VL_INLINE_OPT void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer__0(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__mem_tail__v0;
    CData/*0:0*/ __Vdlyvval__mem_tail__v0;
    CData/*0:0*/ __Vdlyvset__mem_tail__v0;
    CData/*4:0*/ __Vdlyvdim0__mem_head__v0;
    CData/*0:0*/ __Vdlyvval__mem_head__v0;
    CData/*0:0*/ __Vdlyvset__mem_head__v0;
    CData/*4:0*/ __Vdlyvdim0__mem_payload__v0;
    QData/*63:0*/ __Vdlyvval__mem_payload__v0;
    CData/*0:0*/ __Vdlyvset__mem_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_0__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_0__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_0__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_0__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_0__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_0__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_1__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_1__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_1__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_1__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_1__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_1__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_2__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_2__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_2__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_2__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_2__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_2__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_3__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_3__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_3__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_3__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_3__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_3__DOT__ram_payload__v0;
    // Body
    __Vdlyvset__mem_payload__v0 = 0U;
    __Vdlyvset__mem_tail__v0 = 0U;
    __Vdlyvset__mem_head__v0 = 0U;
    __Vdlyvset__qs_0__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_1__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_2__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_3__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_0__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_1__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_2__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_3__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_0__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__qs_1__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__qs_2__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__qs_3__DOT__ram_tail__v0 = 0U;
    if (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_valid) 
         & (~ (IData)(vlSelf->__PVT__direct_to_q)))) {
        vlSelf->__Vlvbound_hf210c3d8__0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
        if ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_MPORT_addr))) {
            __Vdlyvval__mem_payload__v0 = vlSelf->__Vlvbound_hf210c3d8__0;
            __Vdlyvset__mem_payload__v0 = 1U;
            __Vdlyvdim0__mem_payload__v0 = vlSelf->__PVT__mem_payload_MPORT_addr;
        }
        vlSelf->__Vlvbound_had19c418__0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
        if ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_MPORT_addr))) {
            __Vdlyvval__mem_tail__v0 = vlSelf->__Vlvbound_had19c418__0;
            __Vdlyvset__mem_tail__v0 = 1U;
            __Vdlyvdim0__mem_tail__v0 = vlSelf->__PVT__mem_tail_MPORT_addr;
        }
        vlSelf->__Vlvbound_h44e885f1__0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_head;
        if ((0x13U >= (IData)(vlSelf->__PVT__mem_head_MPORT_addr))) {
            __Vdlyvval__mem_head__v0 = vlSelf->__Vlvbound_h44e885f1__0;
            __Vdlyvset__mem_head__v0 = 1U;
            __Vdlyvdim0__mem_head__v0 = vlSelf->__PVT__mem_head_MPORT_addr;
        }
    }
    if (((IData)(vlSelf->__PVT__qs_0_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_0_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((1U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_0__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_0__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_0_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_0_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_0__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_0__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
                __Vdlyvval__qs_0__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_head;
                __Vdlyvval__qs_0__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_0__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
            __Vdlyvval__qs_0__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_head;
            __Vdlyvval__qs_0__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
        }
        __Vdlyvset__qs_0__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_0__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_0__DOT__ram_tail__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__qs_1_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_1_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_1__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_1__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_1_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_1_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_1__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_1__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
                __Vdlyvval__qs_1__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_head;
                __Vdlyvval__qs_1__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_1__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
            __Vdlyvval__qs_1__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_head;
            __Vdlyvval__qs_1__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
        }
        __Vdlyvset__qs_1__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_1__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_1__DOT__ram_tail__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__qs_2_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_2_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((4U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_2__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_2__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_2_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_2_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_2__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_2__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
                __Vdlyvval__qs_2__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_head;
                __Vdlyvval__qs_2__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_2__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
            __Vdlyvval__qs_2__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_head;
            __Vdlyvval__qs_2__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
        }
        __Vdlyvset__qs_2__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_2__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_2__DOT__ram_tail__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__qs_3_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_3_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_3__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_3__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_3_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_3_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_3__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_3__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
                __Vdlyvval__qs_3__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_head;
                __Vdlyvval__qs_3__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_3__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_payload;
            __Vdlyvval__qs_3__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_head;
            __Vdlyvval__qs_3__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_tail;
        }
        __Vdlyvset__qs_3__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_3__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_3__DOT__ram_tail__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__heads_3 = 0xfU;
        vlSelf->__PVT__heads_0 = 0U;
        vlSelf->__PVT__heads_2 = 0xaU;
        vlSelf->__PVT__heads_1 = 5U;
        vlSelf->__PVT__tails_3 = 0xfU;
        vlSelf->__PVT__tails_2 = 0xaU;
        vlSelf->__PVT__tails_1 = 5U;
        vlSelf->__PVT__tails_0 = 0U;
        vlSelf->__PVT__qs_0__DOT__maybe_full = 0U;
        vlSelf->__PVT__qs_1__DOT__maybe_full = 0U;
        vlSelf->__PVT__qs_2__DOT__maybe_full = 0U;
        vlSelf->__PVT__qs_3__DOT__maybe_full = 0U;
    } else {
        if (vlSelf->__PVT___T_9) {
            if ((3U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_3 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
            if ((0U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_0 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
            if ((2U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_2 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
            if ((1U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_1 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
        }
        if (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_valid) 
             & (~ (IData)(vlSelf->__PVT__direct_to_q)))) {
            if ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_3 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
            if ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_2 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
            if ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_1 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
            if ((0U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_0 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
        }
        if (((IData)(vlSelf->__PVT__qs_0__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_0__DOT__do_deq))) {
            vlSelf->__PVT__qs_0__DOT__maybe_full = vlSelf->__PVT__qs_0__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__qs_1__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_1__DOT__do_deq))) {
            vlSelf->__PVT__qs_1__DOT__maybe_full = vlSelf->__PVT__qs_1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__qs_2__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_2__DOT__do_deq))) {
            vlSelf->__PVT__qs_2__DOT__maybe_full = vlSelf->__PVT__qs_2__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__qs_3__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_3__DOT__do_deq))) {
            vlSelf->__PVT__qs_3__DOT__maybe_full = vlSelf->__PVT__qs_3__DOT__do_enq;
        }
    }
    if (__Vdlyvset__qs_0__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_0__DOT__ram_payload[0U] = __Vdlyvval__qs_0__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__qs_1__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_1__DOT__ram_payload[0U] = __Vdlyvval__qs_1__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__qs_2__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_2__DOT__ram_payload[0U] = __Vdlyvval__qs_2__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__qs_3__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_3__DOT__ram_payload[0U] = __Vdlyvval__qs_3__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__mem_payload__v0) {
        vlSelf->__PVT__mem_payload[__Vdlyvdim0__mem_payload__v0] 
            = __Vdlyvval__mem_payload__v0;
    }
    if (__Vdlyvset__qs_0__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_0__DOT__ram_head[0U] = __Vdlyvval__qs_0__DOT__ram_head__v0;
    }
    if (__Vdlyvset__qs_1__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_1__DOT__ram_head[0U] = __Vdlyvval__qs_1__DOT__ram_head__v0;
    }
    if (__Vdlyvset__qs_2__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_2__DOT__ram_head[0U] = __Vdlyvval__qs_2__DOT__ram_head__v0;
    }
    if (__Vdlyvset__qs_3__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_3__DOT__ram_head[0U] = __Vdlyvval__qs_3__DOT__ram_head__v0;
    }
    if (__Vdlyvset__mem_head__v0) {
        vlSelf->__PVT__mem_head[__Vdlyvdim0__mem_head__v0] 
            = __Vdlyvval__mem_head__v0;
    }
    if (__Vdlyvset__qs_0__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_0__DOT__ram_tail[0U] = __Vdlyvval__qs_0__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__qs_1__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_1__DOT__ram_tail[0U] = __Vdlyvval__qs_1__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__qs_2__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_2__DOT__ram_tail[0U] = __Vdlyvval__qs_2__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__mem_tail__v0) {
        vlSelf->__PVT__mem_tail[__Vdlyvdim0__mem_tail__v0] 
            = __Vdlyvval__mem_tail__v0;
    }
    if (__Vdlyvset__qs_3__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_3__DOT__ram_tail[0U] = __Vdlyvval__qs_3__DOT__ram_tail__v0;
    }
    vlSelf->__PVT__empty_3 = ((IData)(vlSelf->__PVT__heads_3) 
                              == (IData)(vlSelf->__PVT__tails_3));
    vlSelf->__PVT__empty_2 = ((IData)(vlSelf->__PVT__heads_2) 
                              == (IData)(vlSelf->__PVT__tails_2));
    vlSelf->__PVT__empty_1 = ((IData)(vlSelf->__PVT__heads_1) 
                              == (IData)(vlSelf->__PVT__tails_1));
    vlSelf->__PVT__empty_0 = ((IData)(vlSelf->__PVT__heads_0) 
                              == (IData)(vlSelf->__PVT__tails_0));
}

VL_INLINE_OPT void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer__1(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer__1\n"); );
    // Init
    CData/*4:0*/ __PVT___GEN_2;
    // Body
    vlSelf->__PVT___tails_T_22 = ((((2U & ((IData)(1U) 
                                           << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                     ? 5U : 0U) | (
                                                   (4U 
                                                    & ((IData)(1U) 
                                                       << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                                    ? 0xaU
                                                    : 0U)) 
                                  | ((8U & ((IData)(1U) 
                                            << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                      ? 0xfU : 0U));
    __PVT___GEN_2 = ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))
                      ? (IData)(vlSelf->__PVT__tails_2)
                      : ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))
                          ? (IData)(vlSelf->__PVT__tails_1)
                          : (IData)(vlSelf->__PVT__tails_0)));
    if ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))) {
        vlSelf->__PVT__mem_head_MPORT_addr = vlSelf->__PVT__tails_3;
        vlSelf->__PVT__mem_tail_MPORT_addr = vlSelf->__PVT__tails_3;
        vlSelf->__PVT__mem_payload_MPORT_addr = vlSelf->__PVT__tails_3;
        vlSelf->__PVT___GEN_3 = vlSelf->__PVT__tails_3;
    } else {
        vlSelf->__PVT__mem_head_MPORT_addr = __PVT___GEN_2;
        vlSelf->__PVT__mem_tail_MPORT_addr = __PVT___GEN_2;
        vlSelf->__PVT__mem_payload_MPORT_addr = __PVT___GEN_2;
        vlSelf->__PVT___GEN_3 = __PVT___GEN_2;
    }
    vlSelf->__PVT___tails_T_11 = ((IData)(vlSelf->__PVT___GEN_3) 
                                  == (((((1U & ((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                          ? 4U : 0U) 
                                        | ((2U & ((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                            ? 9U : 0U)) 
                                       | ((4U & ((IData)(1U) 
                                                 << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                           ? 0xeU : 0U)) 
                                      | ((8U & ((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)))
                                          ? 0x13U : 0U)));
}

VL_INLINE_OPT void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer__2(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer__2\n"); );
    // Init
    CData/*0:0*/ __PVT___GEN_51;
    CData/*0:0*/ __PVT___GEN_55;
    CData/*0:0*/ __PVT___GEN_59;
    CData/*0:0*/ __PVT___GEN_63;
    CData/*0:0*/ __PVT__can_to_q_0;
    CData/*0:0*/ __PVT__can_to_q_1;
    CData/*0:0*/ __PVT__can_to_q_2;
    CData/*0:0*/ __PVT__can_to_q_3;
    CData/*4:0*/ __PVT___head_T_3;
    CData/*4:0*/ __PVT___head_T_5;
    // Body
    vlSelf->__PVT__qs_0__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_in_0_ready) 
                                        & (IData)(vlSelf->__PVT__qs_0__DOT__maybe_full));
    vlSelf->__PVT__qs_0_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_in_0_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_0__DOT__maybe_full))));
    vlSelf->__PVT__qs_1__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_in_1_ready) 
                                        & (IData)(vlSelf->__PVT__qs_1__DOT__maybe_full));
    vlSelf->__PVT__qs_1_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_in_1_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_1__DOT__maybe_full))));
    vlSelf->__PVT__qs_2__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_in_2_ready) 
                                        & (IData)(vlSelf->__PVT__qs_2__DOT__maybe_full));
    vlSelf->__PVT__qs_2_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_in_2_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_2__DOT__maybe_full))));
    vlSelf->__PVT__qs_3__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_in_3_ready) 
                                        & (IData)(vlSelf->__PVT__qs_3__DOT__maybe_full));
    vlSelf->__PVT__qs_3_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_in_3_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_3__DOT__maybe_full))));
    __PVT__can_to_q_0 = ((~ (IData)(vlSelf->__PVT__empty_0)) 
                         & (IData)(vlSelf->__PVT__qs_0_io_enq_ready));
    __PVT__can_to_q_1 = ((~ (IData)(vlSelf->__PVT__empty_1)) 
                         & (IData)(vlSelf->__PVT__qs_1_io_enq_ready));
    __PVT__can_to_q_2 = ((~ (IData)(vlSelf->__PVT__empty_2)) 
                         & (IData)(vlSelf->__PVT__qs_2_io_enq_ready));
    vlSelf->__PVT__direct_to_q = (((((0xfU & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                              & (IData)(vlSelf->__PVT__qs_0_io_enq_ready))) 
                                     | (7U & ((((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                               >> 1U) 
                                              & (IData)(vlSelf->__PVT__qs_1_io_enq_ready)))) 
                                    | (3U & ((((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                              >> 2U) 
                                             & (IData)(vlSelf->__PVT__qs_2_io_enq_ready)))) 
                                   | ((IData)(vlSelf->__PVT__qs_3_io_enq_ready) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                         >> 3U))) & 
                                  ((((0xfU & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                              & (IData)(vlSelf->__PVT__empty_0))) 
                                     | (7U & ((((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                               >> 1U) 
                                              & (IData)(vlSelf->__PVT__empty_1)))) 
                                    | (3U & ((((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                              >> 2U) 
                                             & (IData)(vlSelf->__PVT__empty_2)))) 
                                   | ((IData)(vlSelf->__PVT__empty_3) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id)) 
                                         >> 3U))));
    __PVT__can_to_q_3 = ((~ (IData)(vlSelf->__PVT__empty_3)) 
                         & (IData)(vlSelf->__PVT__qs_3_io_enq_ready));
    __PVT___GEN_51 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (0U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))));
    __PVT___GEN_55 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))));
    __PVT___GEN_59 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))));
    __PVT___GEN_63 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_0_0_bits_virt_channel_id))));
    vlSelf->__PVT___T_9 = ((((IData)(__PVT__can_to_q_0) 
                             | (IData)(__PVT__can_to_q_1)) 
                            | (IData)(__PVT__can_to_q_2)) 
                           | (IData)(__PVT__can_to_q_3));
    vlSelf->__PVT__to_q_oh_enc = ((IData)(__PVT__can_to_q_0)
                                   ? 1U : ((IData)(__PVT__can_to_q_1)
                                            ? 2U : 
                                           ((IData)(__PVT__can_to_q_2)
                                             ? 4U : 
                                            ((IData)(__PVT__can_to_q_3)
                                              ? 8U : 0U))));
    vlSelf->__PVT__to_q = (((IData)((0U != (3U & ((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                  >> 2U)))) 
                            << 1U) | (IData)((0U != 
                                              (0xaU 
                                               & (IData)(vlSelf->__PVT__to_q_oh_enc)))));
    vlSelf->__PVT___heads_T_14 = ((((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                     ? 5U : 0U) | (
                                                   (4U 
                                                    & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                                    ? 0xaU
                                                    : 0U)) 
                                  | ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                      ? 0xfU : 0U));
    if (vlSelf->__PVT___T_9) {
        vlSelf->__PVT__qs_0_io_enq_valid = (1U & ((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                  | (IData)(__PVT___GEN_51)));
        vlSelf->__PVT__qs_1_io_enq_valid = (1U & (((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                   >> 1U) 
                                                  | (IData)(__PVT___GEN_55)));
        vlSelf->__PVT__qs_2_io_enq_valid = (1U & (((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                   >> 2U) 
                                                  | (IData)(__PVT___GEN_59)));
        vlSelf->__PVT__qs_3_io_enq_valid = (1U & (((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                   >> 3U) 
                                                  | (IData)(__PVT___GEN_63)));
    } else {
        vlSelf->__PVT__qs_0_io_enq_valid = (1U & (IData)(__PVT___GEN_51));
        vlSelf->__PVT__qs_1_io_enq_valid = (1U & (IData)(__PVT___GEN_55));
        vlSelf->__PVT__qs_2_io_enq_valid = (1U & (IData)(__PVT___GEN_59));
        vlSelf->__PVT__qs_3_io_enq_valid = (1U & (IData)(__PVT___GEN_63));
    }
    __PVT___head_T_3 = ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                         ? (IData)(vlSelf->__PVT__heads_3)
                         : 0U);
    __PVT___head_T_5 = ((((1U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                           ? (IData)(vlSelf->__PVT__heads_0)
                           : 0U) | ((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                     ? (IData)(vlSelf->__PVT__heads_1)
                                     : 0U)) | ((4U 
                                                & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                                ? (IData)(vlSelf->__PVT__heads_2)
                                                : 0U));
    vlSelf->__PVT__qs_0__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_0_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_0_io_enq_valid));
    vlSelf->__PVT__qs_1__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_1_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_1_io_enq_valid));
    vlSelf->__PVT__qs_2__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_2_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_2_io_enq_valid));
    vlSelf->__PVT__qs_3__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_3_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_3_io_enq_valid));
    vlSelf->__PVT__mem_head_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_head_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_head_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_head_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__head = ((IData)(__PVT___head_T_5) 
                           | (IData)(__PVT___head_T_3));
    vlSelf->__PVT___heads_T_7 = ((IData)(vlSelf->__PVT__head) 
                                 == (((((1U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                         ? 4U : 0U) 
                                       | ((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                           ? 9U : 0U)) 
                                      | ((4U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                          ? 0xeU : 0U)) 
                                     | ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                         ? 0x13U : 0U)));
}

VL_INLINE_OPT void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer__0(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__mem_tail__v0;
    CData/*0:0*/ __Vdlyvval__mem_tail__v0;
    CData/*0:0*/ __Vdlyvset__mem_tail__v0;
    CData/*4:0*/ __Vdlyvdim0__mem_head__v0;
    CData/*0:0*/ __Vdlyvval__mem_head__v0;
    CData/*0:0*/ __Vdlyvset__mem_head__v0;
    CData/*4:0*/ __Vdlyvdim0__mem_payload__v0;
    QData/*63:0*/ __Vdlyvval__mem_payload__v0;
    CData/*0:0*/ __Vdlyvset__mem_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_0__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_0__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_0__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_0__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_0__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_0__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_1__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_1__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_1__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_1__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_1__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_1__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_2__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_2__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_2__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_2__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_2__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_2__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_3__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_3__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_3__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_3__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_3__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_3__DOT__ram_payload__v0;
    // Body
    __Vdlyvset__mem_payload__v0 = 0U;
    __Vdlyvset__mem_tail__v0 = 0U;
    __Vdlyvset__mem_head__v0 = 0U;
    __Vdlyvset__qs_0__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_1__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_2__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_3__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_0__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_1__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_2__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_3__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_0__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__qs_1__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__qs_2__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__qs_3__DOT__ram_tail__v0 = 0U;
    if (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_valid) 
         & (~ (IData)(vlSelf->__PVT__direct_to_q)))) {
        vlSelf->__Vlvbound_hf210c3d8__0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
        if ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_MPORT_addr))) {
            __Vdlyvval__mem_payload__v0 = vlSelf->__Vlvbound_hf210c3d8__0;
            __Vdlyvset__mem_payload__v0 = 1U;
            __Vdlyvdim0__mem_payload__v0 = vlSelf->__PVT__mem_payload_MPORT_addr;
        }
        vlSelf->__Vlvbound_had19c418__0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
        if ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_MPORT_addr))) {
            __Vdlyvval__mem_tail__v0 = vlSelf->__Vlvbound_had19c418__0;
            __Vdlyvset__mem_tail__v0 = 1U;
            __Vdlyvdim0__mem_tail__v0 = vlSelf->__PVT__mem_tail_MPORT_addr;
        }
        vlSelf->__Vlvbound_h44e885f1__0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_head;
        if ((0x13U >= (IData)(vlSelf->__PVT__mem_head_MPORT_addr))) {
            __Vdlyvval__mem_head__v0 = vlSelf->__Vlvbound_h44e885f1__0;
            __Vdlyvset__mem_head__v0 = 1U;
            __Vdlyvdim0__mem_head__v0 = vlSelf->__PVT__mem_head_MPORT_addr;
        }
    }
    if (((IData)(vlSelf->__PVT__qs_0_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_0_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((1U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_0__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_0__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_0_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_0_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_0__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_0__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
                __Vdlyvval__qs_0__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_head;
                __Vdlyvval__qs_0__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_0__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
            __Vdlyvval__qs_0__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_head;
            __Vdlyvval__qs_0__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
        }
        __Vdlyvset__qs_0__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_0__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_0__DOT__ram_tail__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__qs_1_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_1_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_1__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_1__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_1_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_1_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_1__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_1__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
                __Vdlyvval__qs_1__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_head;
                __Vdlyvval__qs_1__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_1__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
            __Vdlyvval__qs_1__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_head;
            __Vdlyvval__qs_1__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
        }
        __Vdlyvset__qs_1__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_1__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_1__DOT__ram_tail__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__qs_2_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_2_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((4U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_2__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_2__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_2_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_2_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_2__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_2__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
                __Vdlyvval__qs_2__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_head;
                __Vdlyvval__qs_2__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_2__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
            __Vdlyvval__qs_2__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_head;
            __Vdlyvval__qs_2__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
        }
        __Vdlyvset__qs_2__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_2__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_2__DOT__ram_tail__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__qs_3_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_3_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_3__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_3__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_3_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_3_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_3__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_3__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
                __Vdlyvval__qs_3__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_head;
                __Vdlyvval__qs_3__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_3__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
            __Vdlyvval__qs_3__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_head;
            __Vdlyvval__qs_3__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
        }
        __Vdlyvset__qs_3__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_3__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_3__DOT__ram_tail__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__heads_3 = 0xfU;
        vlSelf->__PVT__heads_0 = 0U;
        vlSelf->__PVT__heads_2 = 0xaU;
        vlSelf->__PVT__heads_1 = 5U;
        vlSelf->__PVT__tails_3 = 0xfU;
        vlSelf->__PVT__tails_2 = 0xaU;
        vlSelf->__PVT__tails_1 = 5U;
        vlSelf->__PVT__tails_0 = 0U;
        vlSelf->__PVT__qs_0__DOT__maybe_full = 0U;
        vlSelf->__PVT__qs_1__DOT__maybe_full = 0U;
        vlSelf->__PVT__qs_2__DOT__maybe_full = 0U;
        vlSelf->__PVT__qs_3__DOT__maybe_full = 0U;
    } else {
        if (vlSelf->__PVT___T_9) {
            if ((3U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_3 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
            if ((0U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_0 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
            if ((2U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_2 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
            if ((1U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_1 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
        }
        if (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_valid) 
             & (~ (IData)(vlSelf->__PVT__direct_to_q)))) {
            if ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_3 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
            if ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_2 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
            if ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_1 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
            if ((0U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_0 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
        }
        if (((IData)(vlSelf->__PVT__qs_0__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_0__DOT__do_deq))) {
            vlSelf->__PVT__qs_0__DOT__maybe_full = vlSelf->__PVT__qs_0__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__qs_1__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_1__DOT__do_deq))) {
            vlSelf->__PVT__qs_1__DOT__maybe_full = vlSelf->__PVT__qs_1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__qs_2__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_2__DOT__do_deq))) {
            vlSelf->__PVT__qs_2__DOT__maybe_full = vlSelf->__PVT__qs_2__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__qs_3__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_3__DOT__do_deq))) {
            vlSelf->__PVT__qs_3__DOT__maybe_full = vlSelf->__PVT__qs_3__DOT__do_enq;
        }
    }
    if (__Vdlyvset__qs_0__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_0__DOT__ram_payload[0U] = __Vdlyvval__qs_0__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__qs_1__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_1__DOT__ram_payload[0U] = __Vdlyvval__qs_1__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__qs_2__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_2__DOT__ram_payload[0U] = __Vdlyvval__qs_2__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__qs_3__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_3__DOT__ram_payload[0U] = __Vdlyvval__qs_3__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__mem_payload__v0) {
        vlSelf->__PVT__mem_payload[__Vdlyvdim0__mem_payload__v0] 
            = __Vdlyvval__mem_payload__v0;
    }
    if (__Vdlyvset__qs_0__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_0__DOT__ram_head[0U] = __Vdlyvval__qs_0__DOT__ram_head__v0;
    }
    if (__Vdlyvset__qs_1__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_1__DOT__ram_head[0U] = __Vdlyvval__qs_1__DOT__ram_head__v0;
    }
    if (__Vdlyvset__qs_2__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_2__DOT__ram_head[0U] = __Vdlyvval__qs_2__DOT__ram_head__v0;
    }
    if (__Vdlyvset__qs_3__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_3__DOT__ram_head[0U] = __Vdlyvval__qs_3__DOT__ram_head__v0;
    }
    if (__Vdlyvset__mem_head__v0) {
        vlSelf->__PVT__mem_head[__Vdlyvdim0__mem_head__v0] 
            = __Vdlyvval__mem_head__v0;
    }
    if (__Vdlyvset__qs_0__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_0__DOT__ram_tail[0U] = __Vdlyvval__qs_0__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__qs_1__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_1__DOT__ram_tail[0U] = __Vdlyvval__qs_1__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__qs_2__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_2__DOT__ram_tail[0U] = __Vdlyvval__qs_2__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__mem_tail__v0) {
        vlSelf->__PVT__mem_tail[__Vdlyvdim0__mem_tail__v0] 
            = __Vdlyvval__mem_tail__v0;
    }
    if (__Vdlyvset__qs_3__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_3__DOT__ram_tail[0U] = __Vdlyvval__qs_3__DOT__ram_tail__v0;
    }
    vlSelf->__PVT__empty_3 = ((IData)(vlSelf->__PVT__heads_3) 
                              == (IData)(vlSelf->__PVT__tails_3));
    vlSelf->__PVT__empty_2 = ((IData)(vlSelf->__PVT__heads_2) 
                              == (IData)(vlSelf->__PVT__tails_2));
    vlSelf->__PVT__empty_1 = ((IData)(vlSelf->__PVT__heads_1) 
                              == (IData)(vlSelf->__PVT__tails_1));
    vlSelf->__PVT__empty_0 = ((IData)(vlSelf->__PVT__heads_0) 
                              == (IData)(vlSelf->__PVT__tails_0));
}

VL_INLINE_OPT void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer__1(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer__1\n"); );
    // Init
    CData/*4:0*/ __PVT___GEN_2;
    // Body
    vlSelf->__PVT___tails_T_22 = ((((2U & ((IData)(1U) 
                                           << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                     ? 5U : 0U) | (
                                                   (4U 
                                                    & ((IData)(1U) 
                                                       << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                                    ? 0xaU
                                                    : 0U)) 
                                  | ((8U & ((IData)(1U) 
                                            << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                      ? 0xfU : 0U));
    __PVT___GEN_2 = ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))
                      ? (IData)(vlSelf->__PVT__tails_2)
                      : ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))
                          ? (IData)(vlSelf->__PVT__tails_1)
                          : (IData)(vlSelf->__PVT__tails_0)));
    if ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))) {
        vlSelf->__PVT__mem_head_MPORT_addr = vlSelf->__PVT__tails_3;
        vlSelf->__PVT__mem_tail_MPORT_addr = vlSelf->__PVT__tails_3;
        vlSelf->__PVT__mem_payload_MPORT_addr = vlSelf->__PVT__tails_3;
        vlSelf->__PVT___GEN_3 = vlSelf->__PVT__tails_3;
    } else {
        vlSelf->__PVT__mem_head_MPORT_addr = __PVT___GEN_2;
        vlSelf->__PVT__mem_tail_MPORT_addr = __PVT___GEN_2;
        vlSelf->__PVT__mem_payload_MPORT_addr = __PVT___GEN_2;
        vlSelf->__PVT___GEN_3 = __PVT___GEN_2;
    }
    vlSelf->__PVT___tails_T_11 = ((IData)(vlSelf->__PVT___GEN_3) 
                                  == (((((1U & ((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                          ? 4U : 0U) 
                                        | ((2U & ((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                            ? 9U : 0U)) 
                                       | ((4U & ((IData)(1U) 
                                                 << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                           ? 0xeU : 0U)) 
                                      | ((8U & ((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                          ? 0x13U : 0U)));
}

VL_INLINE_OPT void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer__2(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer__2\n"); );
    // Init
    CData/*0:0*/ __PVT___GEN_51;
    CData/*0:0*/ __PVT___GEN_55;
    CData/*0:0*/ __PVT___GEN_59;
    CData/*0:0*/ __PVT___GEN_63;
    CData/*0:0*/ __PVT__can_to_q_0;
    CData/*0:0*/ __PVT__can_to_q_1;
    CData/*0:0*/ __PVT__can_to_q_2;
    CData/*0:0*/ __PVT__can_to_q_3;
    CData/*4:0*/ __PVT___head_T_3;
    CData/*4:0*/ __PVT___head_T_5;
    // Body
    vlSelf->__PVT__qs_0__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_in_0_ready) 
                                        & (IData)(vlSelf->__PVT__qs_0__DOT__maybe_full));
    vlSelf->__PVT__qs_0_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_in_0_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_0__DOT__maybe_full))));
    vlSelf->__PVT__qs_1__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_in_1_ready) 
                                        & (IData)(vlSelf->__PVT__qs_1__DOT__maybe_full));
    vlSelf->__PVT__qs_1_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_in_1_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_1__DOT__maybe_full))));
    vlSelf->__PVT__qs_2__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_in_2_ready) 
                                        & (IData)(vlSelf->__PVT__qs_2__DOT__maybe_full));
    vlSelf->__PVT__qs_2_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_in_2_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_2__DOT__maybe_full))));
    vlSelf->__PVT__qs_3__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_in_3_ready) 
                                        & (IData)(vlSelf->__PVT__qs_3__DOT__maybe_full));
    vlSelf->__PVT__qs_3_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__salloc_arb_io_in_3_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_3__DOT__maybe_full))));
    __PVT__can_to_q_0 = ((~ (IData)(vlSelf->__PVT__empty_0)) 
                         & (IData)(vlSelf->__PVT__qs_0_io_enq_ready));
    __PVT__can_to_q_1 = ((~ (IData)(vlSelf->__PVT__empty_1)) 
                         & (IData)(vlSelf->__PVT__qs_1_io_enq_ready));
    __PVT__can_to_q_2 = ((~ (IData)(vlSelf->__PVT__empty_2)) 
                         & (IData)(vlSelf->__PVT__qs_2_io_enq_ready));
    vlSelf->__PVT__direct_to_q = (((((0xfU & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                              & (IData)(vlSelf->__PVT__qs_0_io_enq_ready))) 
                                     | (7U & ((((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                               >> 1U) 
                                              & (IData)(vlSelf->__PVT__qs_1_io_enq_ready)))) 
                                    | (3U & ((((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                              >> 2U) 
                                             & (IData)(vlSelf->__PVT__qs_2_io_enq_ready)))) 
                                   | ((IData)(vlSelf->__PVT__qs_3_io_enq_ready) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                         >> 3U))) & 
                                  ((((0xfU & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                              & (IData)(vlSelf->__PVT__empty_0))) 
                                     | (7U & ((((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                               >> 1U) 
                                              & (IData)(vlSelf->__PVT__empty_1)))) 
                                    | (3U & ((((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                              >> 2U) 
                                             & (IData)(vlSelf->__PVT__empty_2)))) 
                                   | ((IData)(vlSelf->__PVT__empty_3) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                         >> 3U))));
    __PVT__can_to_q_3 = ((~ (IData)(vlSelf->__PVT__empty_3)) 
                         & (IData)(vlSelf->__PVT__qs_3_io_enq_ready));
    __PVT___GEN_51 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (0U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))));
    __PVT___GEN_55 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))));
    __PVT___GEN_59 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))));
    __PVT___GEN_63 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))));
    vlSelf->__PVT___T_9 = ((((IData)(__PVT__can_to_q_0) 
                             | (IData)(__PVT__can_to_q_1)) 
                            | (IData)(__PVT__can_to_q_2)) 
                           | (IData)(__PVT__can_to_q_3));
    vlSelf->__PVT__to_q_oh_enc = ((IData)(__PVT__can_to_q_0)
                                   ? 1U : ((IData)(__PVT__can_to_q_1)
                                            ? 2U : 
                                           ((IData)(__PVT__can_to_q_2)
                                             ? 4U : 
                                            ((IData)(__PVT__can_to_q_3)
                                              ? 8U : 0U))));
    vlSelf->__PVT__to_q = (((IData)((0U != (3U & ((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                  >> 2U)))) 
                            << 1U) | (IData)((0U != 
                                              (0xaU 
                                               & (IData)(vlSelf->__PVT__to_q_oh_enc)))));
    vlSelf->__PVT___heads_T_14 = ((((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                     ? 5U : 0U) | (
                                                   (4U 
                                                    & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                                    ? 0xaU
                                                    : 0U)) 
                                  | ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                      ? 0xfU : 0U));
    if (vlSelf->__PVT___T_9) {
        vlSelf->__PVT__qs_0_io_enq_valid = (1U & ((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                  | (IData)(__PVT___GEN_51)));
        vlSelf->__PVT__qs_1_io_enq_valid = (1U & (((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                   >> 1U) 
                                                  | (IData)(__PVT___GEN_55)));
        vlSelf->__PVT__qs_2_io_enq_valid = (1U & (((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                   >> 2U) 
                                                  | (IData)(__PVT___GEN_59)));
        vlSelf->__PVT__qs_3_io_enq_valid = (1U & (((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                   >> 3U) 
                                                  | (IData)(__PVT___GEN_63)));
    } else {
        vlSelf->__PVT__qs_0_io_enq_valid = (1U & (IData)(__PVT___GEN_51));
        vlSelf->__PVT__qs_1_io_enq_valid = (1U & (IData)(__PVT___GEN_55));
        vlSelf->__PVT__qs_2_io_enq_valid = (1U & (IData)(__PVT___GEN_59));
        vlSelf->__PVT__qs_3_io_enq_valid = (1U & (IData)(__PVT___GEN_63));
    }
    __PVT___head_T_3 = ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                         ? (IData)(vlSelf->__PVT__heads_3)
                         : 0U);
    __PVT___head_T_5 = ((((1U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                           ? (IData)(vlSelf->__PVT__heads_0)
                           : 0U) | ((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                     ? (IData)(vlSelf->__PVT__heads_1)
                                     : 0U)) | ((4U 
                                                & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                                ? (IData)(vlSelf->__PVT__heads_2)
                                                : 0U));
    vlSelf->__PVT__qs_0__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_0_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_0_io_enq_valid));
    vlSelf->__PVT__qs_1__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_1_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_1_io_enq_valid));
    vlSelf->__PVT__qs_2__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_2_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_2_io_enq_valid));
    vlSelf->__PVT__qs_3__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_3_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_3_io_enq_valid));
    vlSelf->__PVT__mem_head_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_head_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_head_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_head_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__head = ((IData)(__PVT___head_T_5) 
                           | (IData)(__PVT___head_T_3));
    vlSelf->__PVT___heads_T_7 = ((IData)(vlSelf->__PVT__head) 
                                 == (((((1U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                         ? 4U : 0U) 
                                       | ((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                           ? 9U : 0U)) 
                                      | ((4U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                          ? 0xeU : 0U)) 
                                     | ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                         ? 0x13U : 0U)));
}

VL_INLINE_OPT void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer__0(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__mem_tail__v0;
    CData/*0:0*/ __Vdlyvval__mem_tail__v0;
    CData/*0:0*/ __Vdlyvset__mem_tail__v0;
    CData/*4:0*/ __Vdlyvdim0__mem_head__v0;
    CData/*0:0*/ __Vdlyvval__mem_head__v0;
    CData/*0:0*/ __Vdlyvset__mem_head__v0;
    CData/*4:0*/ __Vdlyvdim0__mem_payload__v0;
    QData/*63:0*/ __Vdlyvval__mem_payload__v0;
    CData/*0:0*/ __Vdlyvset__mem_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_0__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_0__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_0__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_0__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_0__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_0__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_1__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_1__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_1__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_1__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_1__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_1__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_2__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_2__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_2__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_2__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_2__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_2__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_3__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_3__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_3__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_3__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_3__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_3__DOT__ram_payload__v0;
    // Body
    __Vdlyvset__mem_payload__v0 = 0U;
    __Vdlyvset__mem_tail__v0 = 0U;
    __Vdlyvset__mem_head__v0 = 0U;
    __Vdlyvset__qs_0__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_1__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_2__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_3__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_0__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_1__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_2__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_3__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_0__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__qs_1__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__qs_2__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__qs_3__DOT__ram_tail__v0 = 0U;
    if (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_valid) 
         & (~ (IData)(vlSelf->__PVT__direct_to_q)))) {
        vlSelf->__Vlvbound_hf210c3d8__0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
        if ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_MPORT_addr))) {
            __Vdlyvval__mem_payload__v0 = vlSelf->__Vlvbound_hf210c3d8__0;
            __Vdlyvset__mem_payload__v0 = 1U;
            __Vdlyvdim0__mem_payload__v0 = vlSelf->__PVT__mem_payload_MPORT_addr;
        }
        vlSelf->__Vlvbound_had19c418__0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
        if ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_MPORT_addr))) {
            __Vdlyvval__mem_tail__v0 = vlSelf->__Vlvbound_had19c418__0;
            __Vdlyvset__mem_tail__v0 = 1U;
            __Vdlyvdim0__mem_tail__v0 = vlSelf->__PVT__mem_tail_MPORT_addr;
        }
        vlSelf->__Vlvbound_h44e885f1__0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_head;
        if ((0x13U >= (IData)(vlSelf->__PVT__mem_head_MPORT_addr))) {
            __Vdlyvval__mem_head__v0 = vlSelf->__Vlvbound_h44e885f1__0;
            __Vdlyvset__mem_head__v0 = 1U;
            __Vdlyvdim0__mem_head__v0 = vlSelf->__PVT__mem_head_MPORT_addr;
        }
    }
    if (((IData)(vlSelf->__PVT__qs_0_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_0_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((1U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_0__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_0__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_0_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_0_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_0__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_0__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
                __Vdlyvval__qs_0__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_head;
                __Vdlyvval__qs_0__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_0__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
            __Vdlyvval__qs_0__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_head;
            __Vdlyvval__qs_0__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
        }
        __Vdlyvset__qs_0__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_0__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_0__DOT__ram_tail__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__qs_1_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_1_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_1__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_1__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_1_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_1_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_1__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_1__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
                __Vdlyvval__qs_1__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_head;
                __Vdlyvval__qs_1__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_1__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
            __Vdlyvval__qs_1__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_head;
            __Vdlyvval__qs_1__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
        }
        __Vdlyvset__qs_1__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_1__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_1__DOT__ram_tail__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__qs_2_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_2_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((4U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_2__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_2__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_2_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_2_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_2__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_2__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
                __Vdlyvval__qs_2__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_head;
                __Vdlyvval__qs_2__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_2__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
            __Vdlyvval__qs_2__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_head;
            __Vdlyvval__qs_2__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
        }
        __Vdlyvset__qs_2__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_2__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_2__DOT__ram_tail__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__qs_3_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_3_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_3__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_3__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_3_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_3_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_3__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_3__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
                __Vdlyvval__qs_3__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_head;
                __Vdlyvval__qs_3__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_3__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
            __Vdlyvval__qs_3__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_head;
            __Vdlyvval__qs_3__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
        }
        __Vdlyvset__qs_3__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_3__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_3__DOT__ram_tail__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__heads_3 = 0xfU;
        vlSelf->__PVT__heads_0 = 0U;
        vlSelf->__PVT__heads_2 = 0xaU;
        vlSelf->__PVT__heads_1 = 5U;
        vlSelf->__PVT__tails_3 = 0xfU;
        vlSelf->__PVT__tails_2 = 0xaU;
        vlSelf->__PVT__tails_1 = 5U;
        vlSelf->__PVT__tails_0 = 0U;
        vlSelf->__PVT__qs_0__DOT__maybe_full = 0U;
        vlSelf->__PVT__qs_1__DOT__maybe_full = 0U;
        vlSelf->__PVT__qs_2__DOT__maybe_full = 0U;
        vlSelf->__PVT__qs_3__DOT__maybe_full = 0U;
    } else {
        if (vlSelf->__PVT___T_9) {
            if ((3U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_3 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
            if ((0U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_0 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
            if ((2U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_2 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
            if ((1U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_1 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
        }
        if (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_valid) 
             & (~ (IData)(vlSelf->__PVT__direct_to_q)))) {
            if ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_3 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
            if ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_2 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
            if ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_1 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
            if ((0U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_0 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
        }
        if (((IData)(vlSelf->__PVT__qs_0__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_0__DOT__do_deq))) {
            vlSelf->__PVT__qs_0__DOT__maybe_full = vlSelf->__PVT__qs_0__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__qs_1__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_1__DOT__do_deq))) {
            vlSelf->__PVT__qs_1__DOT__maybe_full = vlSelf->__PVT__qs_1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__qs_2__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_2__DOT__do_deq))) {
            vlSelf->__PVT__qs_2__DOT__maybe_full = vlSelf->__PVT__qs_2__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__qs_3__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_3__DOT__do_deq))) {
            vlSelf->__PVT__qs_3__DOT__maybe_full = vlSelf->__PVT__qs_3__DOT__do_enq;
        }
    }
    if (__Vdlyvset__qs_0__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_0__DOT__ram_payload[0U] = __Vdlyvval__qs_0__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__qs_1__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_1__DOT__ram_payload[0U] = __Vdlyvval__qs_1__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__qs_2__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_2__DOT__ram_payload[0U] = __Vdlyvval__qs_2__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__qs_3__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_3__DOT__ram_payload[0U] = __Vdlyvval__qs_3__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__mem_payload__v0) {
        vlSelf->__PVT__mem_payload[__Vdlyvdim0__mem_payload__v0] 
            = __Vdlyvval__mem_payload__v0;
    }
    if (__Vdlyvset__qs_0__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_0__DOT__ram_head[0U] = __Vdlyvval__qs_0__DOT__ram_head__v0;
    }
    if (__Vdlyvset__qs_1__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_1__DOT__ram_head[0U] = __Vdlyvval__qs_1__DOT__ram_head__v0;
    }
    if (__Vdlyvset__qs_2__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_2__DOT__ram_head[0U] = __Vdlyvval__qs_2__DOT__ram_head__v0;
    }
    if (__Vdlyvset__qs_3__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_3__DOT__ram_head[0U] = __Vdlyvval__qs_3__DOT__ram_head__v0;
    }
    if (__Vdlyvset__mem_head__v0) {
        vlSelf->__PVT__mem_head[__Vdlyvdim0__mem_head__v0] 
            = __Vdlyvval__mem_head__v0;
    }
    if (__Vdlyvset__qs_0__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_0__DOT__ram_tail[0U] = __Vdlyvval__qs_0__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__qs_1__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_1__DOT__ram_tail[0U] = __Vdlyvval__qs_1__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__qs_2__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_2__DOT__ram_tail[0U] = __Vdlyvval__qs_2__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__mem_tail__v0) {
        vlSelf->__PVT__mem_tail[__Vdlyvdim0__mem_tail__v0] 
            = __Vdlyvval__mem_tail__v0;
    }
    if (__Vdlyvset__qs_3__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_3__DOT__ram_tail[0U] = __Vdlyvval__qs_3__DOT__ram_tail__v0;
    }
    vlSelf->__PVT__empty_3 = ((IData)(vlSelf->__PVT__heads_3) 
                              == (IData)(vlSelf->__PVT__tails_3));
    vlSelf->__PVT__empty_2 = ((IData)(vlSelf->__PVT__heads_2) 
                              == (IData)(vlSelf->__PVT__tails_2));
    vlSelf->__PVT__empty_1 = ((IData)(vlSelf->__PVT__heads_1) 
                              == (IData)(vlSelf->__PVT__tails_1));
    vlSelf->__PVT__empty_0 = ((IData)(vlSelf->__PVT__heads_0) 
                              == (IData)(vlSelf->__PVT__tails_0));
}

VL_INLINE_OPT void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer__1(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer__1\n"); );
    // Init
    CData/*4:0*/ __PVT___GEN_2;
    // Body
    vlSelf->__PVT___tails_T_22 = ((((2U & ((IData)(1U) 
                                           << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                     ? 5U : 0U) | (
                                                   (4U 
                                                    & ((IData)(1U) 
                                                       << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                                    ? 0xaU
                                                    : 0U)) 
                                  | ((8U & ((IData)(1U) 
                                            << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                      ? 0xfU : 0U));
    __PVT___GEN_2 = ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))
                      ? (IData)(vlSelf->__PVT__tails_2)
                      : ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))
                          ? (IData)(vlSelf->__PVT__tails_1)
                          : (IData)(vlSelf->__PVT__tails_0)));
    if ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))) {
        vlSelf->__PVT__mem_head_MPORT_addr = vlSelf->__PVT__tails_3;
        vlSelf->__PVT__mem_tail_MPORT_addr = vlSelf->__PVT__tails_3;
        vlSelf->__PVT__mem_payload_MPORT_addr = vlSelf->__PVT__tails_3;
        vlSelf->__PVT___GEN_3 = vlSelf->__PVT__tails_3;
    } else {
        vlSelf->__PVT__mem_head_MPORT_addr = __PVT___GEN_2;
        vlSelf->__PVT__mem_tail_MPORT_addr = __PVT___GEN_2;
        vlSelf->__PVT__mem_payload_MPORT_addr = __PVT___GEN_2;
        vlSelf->__PVT___GEN_3 = __PVT___GEN_2;
    }
    vlSelf->__PVT___tails_T_11 = ((IData)(vlSelf->__PVT___GEN_3) 
                                  == (((((1U & ((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                          ? 4U : 0U) 
                                        | ((2U & ((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                            ? 9U : 0U)) 
                                       | ((4U & ((IData)(1U) 
                                                 << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                           ? 0xeU : 0U)) 
                                      | ((8U & ((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                          ? 0x13U : 0U)));
}

VL_INLINE_OPT void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer__2(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer__2\n"); );
    // Init
    CData/*0:0*/ __PVT___GEN_51;
    CData/*0:0*/ __PVT___GEN_55;
    CData/*0:0*/ __PVT___GEN_59;
    CData/*0:0*/ __PVT___GEN_63;
    CData/*0:0*/ __PVT__can_to_q_0;
    CData/*0:0*/ __PVT__can_to_q_1;
    CData/*0:0*/ __PVT__can_to_q_2;
    CData/*0:0*/ __PVT__can_to_q_3;
    CData/*4:0*/ __PVT___head_T_3;
    CData/*4:0*/ __PVT___head_T_5;
    // Body
    vlSelf->__PVT__qs_0__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_in_0_ready) 
                                        & (IData)(vlSelf->__PVT__qs_0__DOT__maybe_full));
    vlSelf->__PVT__qs_0_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_in_0_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_0__DOT__maybe_full))));
    vlSelf->__PVT__qs_1__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_in_1_ready) 
                                        & (IData)(vlSelf->__PVT__qs_1__DOT__maybe_full));
    vlSelf->__PVT__qs_1_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_in_1_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_1__DOT__maybe_full))));
    vlSelf->__PVT__qs_2__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_in_2_ready) 
                                        & (IData)(vlSelf->__PVT__qs_2__DOT__maybe_full));
    vlSelf->__PVT__qs_2_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_in_2_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_2__DOT__maybe_full))));
    vlSelf->__PVT__qs_3__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_in_3_ready) 
                                        & (IData)(vlSelf->__PVT__qs_3__DOT__maybe_full));
    vlSelf->__PVT__qs_3_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__salloc_arb_io_in_3_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_3__DOT__maybe_full))));
    __PVT__can_to_q_0 = ((~ (IData)(vlSelf->__PVT__empty_0)) 
                         & (IData)(vlSelf->__PVT__qs_0_io_enq_ready));
    __PVT__can_to_q_1 = ((~ (IData)(vlSelf->__PVT__empty_1)) 
                         & (IData)(vlSelf->__PVT__qs_1_io_enq_ready));
    __PVT__can_to_q_2 = ((~ (IData)(vlSelf->__PVT__empty_2)) 
                         & (IData)(vlSelf->__PVT__qs_2_io_enq_ready));
    vlSelf->__PVT__direct_to_q = (((((0xfU & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                              & (IData)(vlSelf->__PVT__qs_0_io_enq_ready))) 
                                     | (7U & ((((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                               >> 1U) 
                                              & (IData)(vlSelf->__PVT__qs_1_io_enq_ready)))) 
                                    | (3U & ((((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                              >> 2U) 
                                             & (IData)(vlSelf->__PVT__qs_2_io_enq_ready)))) 
                                   | ((IData)(vlSelf->__PVT__qs_3_io_enq_ready) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                         >> 3U))) & 
                                  ((((0xfU & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                              & (IData)(vlSelf->__PVT__empty_0))) 
                                     | (7U & ((((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                               >> 1U) 
                                              & (IData)(vlSelf->__PVT__empty_1)))) 
                                    | (3U & ((((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                              >> 2U) 
                                             & (IData)(vlSelf->__PVT__empty_2)))) 
                                   | ((IData)(vlSelf->__PVT__empty_3) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                         >> 3U))));
    __PVT__can_to_q_3 = ((~ (IData)(vlSelf->__PVT__empty_3)) 
                         & (IData)(vlSelf->__PVT__qs_3_io_enq_ready));
    __PVT___GEN_51 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (0U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))));
    __PVT___GEN_55 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))));
    __PVT___GEN_59 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))));
    __PVT___GEN_63 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))));
    vlSelf->__PVT___T_9 = ((((IData)(__PVT__can_to_q_0) 
                             | (IData)(__PVT__can_to_q_1)) 
                            | (IData)(__PVT__can_to_q_2)) 
                           | (IData)(__PVT__can_to_q_3));
    vlSelf->__PVT__to_q_oh_enc = ((IData)(__PVT__can_to_q_0)
                                   ? 1U : ((IData)(__PVT__can_to_q_1)
                                            ? 2U : 
                                           ((IData)(__PVT__can_to_q_2)
                                             ? 4U : 
                                            ((IData)(__PVT__can_to_q_3)
                                              ? 8U : 0U))));
    vlSelf->__PVT__to_q = (((IData)((0U != (3U & ((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                  >> 2U)))) 
                            << 1U) | (IData)((0U != 
                                              (0xaU 
                                               & (IData)(vlSelf->__PVT__to_q_oh_enc)))));
    vlSelf->__PVT___heads_T_14 = ((((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                     ? 5U : 0U) | (
                                                   (4U 
                                                    & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                                    ? 0xaU
                                                    : 0U)) 
                                  | ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                      ? 0xfU : 0U));
    if (vlSelf->__PVT___T_9) {
        vlSelf->__PVT__qs_0_io_enq_valid = (1U & ((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                  | (IData)(__PVT___GEN_51)));
        vlSelf->__PVT__qs_1_io_enq_valid = (1U & (((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                   >> 1U) 
                                                  | (IData)(__PVT___GEN_55)));
        vlSelf->__PVT__qs_2_io_enq_valid = (1U & (((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                   >> 2U) 
                                                  | (IData)(__PVT___GEN_59)));
        vlSelf->__PVT__qs_3_io_enq_valid = (1U & (((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                   >> 3U) 
                                                  | (IData)(__PVT___GEN_63)));
    } else {
        vlSelf->__PVT__qs_0_io_enq_valid = (1U & (IData)(__PVT___GEN_51));
        vlSelf->__PVT__qs_1_io_enq_valid = (1U & (IData)(__PVT___GEN_55));
        vlSelf->__PVT__qs_2_io_enq_valid = (1U & (IData)(__PVT___GEN_59));
        vlSelf->__PVT__qs_3_io_enq_valid = (1U & (IData)(__PVT___GEN_63));
    }
    __PVT___head_T_3 = ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                         ? (IData)(vlSelf->__PVT__heads_3)
                         : 0U);
    __PVT___head_T_5 = ((((1U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                           ? (IData)(vlSelf->__PVT__heads_0)
                           : 0U) | ((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                     ? (IData)(vlSelf->__PVT__heads_1)
                                     : 0U)) | ((4U 
                                                & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                                ? (IData)(vlSelf->__PVT__heads_2)
                                                : 0U));
    vlSelf->__PVT__qs_0__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_0_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_0_io_enq_valid));
    vlSelf->__PVT__qs_1__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_1_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_1_io_enq_valid));
    vlSelf->__PVT__qs_2__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_2_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_2_io_enq_valid));
    vlSelf->__PVT__qs_3__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_3_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_3_io_enq_valid));
    vlSelf->__PVT__mem_head_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_head_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_head_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_head_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__head = ((IData)(__PVT___head_T_5) 
                           | (IData)(__PVT___head_T_3));
    vlSelf->__PVT___heads_T_7 = ((IData)(vlSelf->__PVT__head) 
                                 == (((((1U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                         ? 4U : 0U) 
                                       | ((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                           ? 9U : 0U)) 
                                      | ((4U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                          ? 0xeU : 0U)) 
                                     | ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                         ? 0x13U : 0U)));
}

VL_INLINE_OPT void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__0(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__mem_tail__v0;
    CData/*0:0*/ __Vdlyvval__mem_tail__v0;
    CData/*0:0*/ __Vdlyvset__mem_tail__v0;
    CData/*4:0*/ __Vdlyvdim0__mem_head__v0;
    CData/*0:0*/ __Vdlyvval__mem_head__v0;
    CData/*0:0*/ __Vdlyvset__mem_head__v0;
    CData/*4:0*/ __Vdlyvdim0__mem_payload__v0;
    QData/*63:0*/ __Vdlyvval__mem_payload__v0;
    CData/*0:0*/ __Vdlyvset__mem_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_0__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_0__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_0__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_0__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_0__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_0__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_1__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_1__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_1__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_1__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_1__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_1__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_2__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_2__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_2__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_2__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_2__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_2__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_3__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_3__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_3__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_3__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_3__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_3__DOT__ram_payload__v0;
    // Body
    __Vdlyvset__mem_payload__v0 = 0U;
    __Vdlyvset__mem_tail__v0 = 0U;
    __Vdlyvset__mem_head__v0 = 0U;
    __Vdlyvset__qs_0__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_1__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_2__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_3__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_0__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_1__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_2__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_3__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_0__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__qs_1__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__qs_2__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__qs_3__DOT__ram_tail__v0 = 0U;
    if (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
         & (~ (IData)(vlSelf->__PVT__direct_to_q)))) {
        vlSelf->__Vlvbound_hf210c3d8__0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
        if ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_MPORT_addr))) {
            __Vdlyvval__mem_payload__v0 = vlSelf->__Vlvbound_hf210c3d8__0;
            __Vdlyvset__mem_payload__v0 = 1U;
            __Vdlyvdim0__mem_payload__v0 = vlSelf->__PVT__mem_payload_MPORT_addr;
        }
        vlSelf->__Vlvbound_had19c418__0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
        if ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_MPORT_addr))) {
            __Vdlyvval__mem_tail__v0 = vlSelf->__Vlvbound_had19c418__0;
            __Vdlyvset__mem_tail__v0 = 1U;
            __Vdlyvdim0__mem_tail__v0 = vlSelf->__PVT__mem_tail_MPORT_addr;
        }
        vlSelf->__Vlvbound_h44e885f1__0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_head;
        if ((0x13U >= (IData)(vlSelf->__PVT__mem_head_MPORT_addr))) {
            __Vdlyvval__mem_head__v0 = vlSelf->__Vlvbound_h44e885f1__0;
            __Vdlyvset__mem_head__v0 = 1U;
            __Vdlyvdim0__mem_head__v0 = vlSelf->__PVT__mem_head_MPORT_addr;
        }
    }
    if (((IData)(vlSelf->__PVT__qs_0_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_0_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((1U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_0__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_0__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_0_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_0_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_0__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_0__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
                __Vdlyvval__qs_0__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_head;
                __Vdlyvval__qs_0__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_0__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
            __Vdlyvval__qs_0__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_head;
            __Vdlyvval__qs_0__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
        }
        __Vdlyvset__qs_0__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_0__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_0__DOT__ram_tail__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__qs_1_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_1_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_1__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_1__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_1_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_1_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_1__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_1__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
                __Vdlyvval__qs_1__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_head;
                __Vdlyvval__qs_1__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_1__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
            __Vdlyvval__qs_1__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_head;
            __Vdlyvval__qs_1__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
        }
        __Vdlyvset__qs_1__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_1__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_1__DOT__ram_tail__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__qs_2_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_2_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((4U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_2__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_2__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_2_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_2_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_2__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_2__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
                __Vdlyvval__qs_2__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_head;
                __Vdlyvval__qs_2__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_2__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
            __Vdlyvval__qs_2__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_head;
            __Vdlyvval__qs_2__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
        }
        __Vdlyvset__qs_2__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_2__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_2__DOT__ram_tail__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__qs_3_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_3_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_3__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_3__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_3_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_3_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_3__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_3__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
                __Vdlyvval__qs_3__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_head;
                __Vdlyvval__qs_3__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_3__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
            __Vdlyvval__qs_3__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_head;
            __Vdlyvval__qs_3__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
        }
        __Vdlyvset__qs_3__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_3__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_3__DOT__ram_tail__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__heads_3 = 0xfU;
        vlSelf->__PVT__heads_0 = 0U;
        vlSelf->__PVT__heads_2 = 0xaU;
        vlSelf->__PVT__heads_1 = 5U;
        vlSelf->__PVT__tails_3 = 0xfU;
        vlSelf->__PVT__tails_2 = 0xaU;
        vlSelf->__PVT__tails_1 = 5U;
        vlSelf->__PVT__tails_0 = 0U;
        vlSelf->__PVT__qs_0__DOT__maybe_full = 0U;
        vlSelf->__PVT__qs_1__DOT__maybe_full = 0U;
        vlSelf->__PVT__qs_2__DOT__maybe_full = 0U;
        vlSelf->__PVT__qs_3__DOT__maybe_full = 0U;
    } else {
        if (vlSelf->__PVT___T_9) {
            if ((3U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_3 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
            if ((0U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_0 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
            if ((2U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_2 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
            if ((1U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_1 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
        }
        if (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
             & (~ (IData)(vlSelf->__PVT__direct_to_q)))) {
            if ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_3 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
            if ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_2 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
            if ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_1 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
            if ((0U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_0 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
        }
        if (((IData)(vlSelf->__PVT__qs_0__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_0__DOT__do_deq))) {
            vlSelf->__PVT__qs_0__DOT__maybe_full = vlSelf->__PVT__qs_0__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__qs_1__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_1__DOT__do_deq))) {
            vlSelf->__PVT__qs_1__DOT__maybe_full = vlSelf->__PVT__qs_1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__qs_2__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_2__DOT__do_deq))) {
            vlSelf->__PVT__qs_2__DOT__maybe_full = vlSelf->__PVT__qs_2__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__qs_3__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_3__DOT__do_deq))) {
            vlSelf->__PVT__qs_3__DOT__maybe_full = vlSelf->__PVT__qs_3__DOT__do_enq;
        }
    }
    if (__Vdlyvset__qs_0__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_0__DOT__ram_payload[0U] = __Vdlyvval__qs_0__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__qs_1__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_1__DOT__ram_payload[0U] = __Vdlyvval__qs_1__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__qs_2__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_2__DOT__ram_payload[0U] = __Vdlyvval__qs_2__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__qs_3__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_3__DOT__ram_payload[0U] = __Vdlyvval__qs_3__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__mem_payload__v0) {
        vlSelf->__PVT__mem_payload[__Vdlyvdim0__mem_payload__v0] 
            = __Vdlyvval__mem_payload__v0;
    }
    if (__Vdlyvset__qs_0__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_0__DOT__ram_head[0U] = __Vdlyvval__qs_0__DOT__ram_head__v0;
    }
    if (__Vdlyvset__qs_1__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_1__DOT__ram_head[0U] = __Vdlyvval__qs_1__DOT__ram_head__v0;
    }
    if (__Vdlyvset__qs_2__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_2__DOT__ram_head[0U] = __Vdlyvval__qs_2__DOT__ram_head__v0;
    }
    if (__Vdlyvset__qs_3__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_3__DOT__ram_head[0U] = __Vdlyvval__qs_3__DOT__ram_head__v0;
    }
    if (__Vdlyvset__mem_head__v0) {
        vlSelf->__PVT__mem_head[__Vdlyvdim0__mem_head__v0] 
            = __Vdlyvval__mem_head__v0;
    }
    if (__Vdlyvset__qs_0__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_0__DOT__ram_tail[0U] = __Vdlyvval__qs_0__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__qs_1__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_1__DOT__ram_tail[0U] = __Vdlyvval__qs_1__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__qs_2__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_2__DOT__ram_tail[0U] = __Vdlyvval__qs_2__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__mem_tail__v0) {
        vlSelf->__PVT__mem_tail[__Vdlyvdim0__mem_tail__v0] 
            = __Vdlyvval__mem_tail__v0;
    }
    if (__Vdlyvset__qs_3__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_3__DOT__ram_tail[0U] = __Vdlyvval__qs_3__DOT__ram_tail__v0;
    }
    vlSelf->__PVT__empty_3 = ((IData)(vlSelf->__PVT__heads_3) 
                              == (IData)(vlSelf->__PVT__tails_3));
    vlSelf->__PVT__empty_2 = ((IData)(vlSelf->__PVT__heads_2) 
                              == (IData)(vlSelf->__PVT__tails_2));
    vlSelf->__PVT__empty_1 = ((IData)(vlSelf->__PVT__heads_1) 
                              == (IData)(vlSelf->__PVT__tails_1));
    vlSelf->__PVT__empty_0 = ((IData)(vlSelf->__PVT__heads_0) 
                              == (IData)(vlSelf->__PVT__tails_0));
}

VL_INLINE_OPT void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__1(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__1\n"); );
    // Init
    CData/*4:0*/ __PVT___GEN_2;
    // Body
    vlSelf->__PVT___tails_T_22 = ((((2U & ((IData)(1U) 
                                           << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                     ? 5U : 0U) | (
                                                   (4U 
                                                    & ((IData)(1U) 
                                                       << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                                    ? 0xaU
                                                    : 0U)) 
                                  | ((8U & ((IData)(1U) 
                                            << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                      ? 0xfU : 0U));
    __PVT___GEN_2 = ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))
                      ? (IData)(vlSelf->__PVT__tails_2)
                      : ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))
                          ? (IData)(vlSelf->__PVT__tails_1)
                          : (IData)(vlSelf->__PVT__tails_0)));
    if ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))) {
        vlSelf->__PVT__mem_head_MPORT_addr = vlSelf->__PVT__tails_3;
        vlSelf->__PVT__mem_tail_MPORT_addr = vlSelf->__PVT__tails_3;
        vlSelf->__PVT__mem_payload_MPORT_addr = vlSelf->__PVT__tails_3;
        vlSelf->__PVT___GEN_3 = vlSelf->__PVT__tails_3;
    } else {
        vlSelf->__PVT__mem_head_MPORT_addr = __PVT___GEN_2;
        vlSelf->__PVT__mem_tail_MPORT_addr = __PVT___GEN_2;
        vlSelf->__PVT__mem_payload_MPORT_addr = __PVT___GEN_2;
        vlSelf->__PVT___GEN_3 = __PVT___GEN_2;
    }
    vlSelf->__PVT___tails_T_11 = ((IData)(vlSelf->__PVT___GEN_3) 
                                  == (((((1U & ((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                          ? 4U : 0U) 
                                        | ((2U & ((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                            ? 9U : 0U)) 
                                       | ((4U & ((IData)(1U) 
                                                 << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                           ? 0xeU : 0U)) 
                                      | ((8U & ((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                          ? 0x13U : 0U)));
}

VL_INLINE_OPT void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__2(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__2\n"); );
    // Init
    CData/*0:0*/ __PVT___GEN_51;
    CData/*0:0*/ __PVT___GEN_55;
    CData/*0:0*/ __PVT___GEN_59;
    CData/*0:0*/ __PVT___GEN_63;
    CData/*0:0*/ __PVT__can_to_q_0;
    CData/*0:0*/ __PVT__can_to_q_1;
    CData/*0:0*/ __PVT__can_to_q_2;
    CData/*0:0*/ __PVT__can_to_q_3;
    CData/*4:0*/ __PVT___head_T_3;
    CData/*4:0*/ __PVT___head_T_5;
    // Body
    vlSelf->__PVT__qs_0__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_0_ready) 
                                        & (IData)(vlSelf->__PVT__qs_0__DOT__maybe_full));
    vlSelf->__PVT__qs_0_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_0_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_0__DOT__maybe_full))));
    vlSelf->__PVT__qs_1__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_1_ready) 
                                        & (IData)(vlSelf->__PVT__qs_1__DOT__maybe_full));
    vlSelf->__PVT__qs_1_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_1_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_1__DOT__maybe_full))));
    vlSelf->__PVT__qs_2__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_2_ready) 
                                        & (IData)(vlSelf->__PVT__qs_2__DOT__maybe_full));
    vlSelf->__PVT__qs_2_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_2_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_2__DOT__maybe_full))));
    vlSelf->__PVT__qs_3__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_3_ready) 
                                        & (IData)(vlSelf->__PVT__qs_3__DOT__maybe_full));
    vlSelf->__PVT__qs_3_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__salloc_arb_io_in_3_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_3__DOT__maybe_full))));
    __PVT__can_to_q_0 = ((~ (IData)(vlSelf->__PVT__empty_0)) 
                         & (IData)(vlSelf->__PVT__qs_0_io_enq_ready));
    __PVT__can_to_q_1 = ((~ (IData)(vlSelf->__PVT__empty_1)) 
                         & (IData)(vlSelf->__PVT__qs_1_io_enq_ready));
    __PVT__can_to_q_2 = ((~ (IData)(vlSelf->__PVT__empty_2)) 
                         & (IData)(vlSelf->__PVT__qs_2_io_enq_ready));
    vlSelf->__PVT__direct_to_q = (((((0xfU & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                              & (IData)(vlSelf->__PVT__qs_0_io_enq_ready))) 
                                     | (7U & ((((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                               >> 1U) 
                                              & (IData)(vlSelf->__PVT__qs_1_io_enq_ready)))) 
                                    | (3U & ((((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                              >> 2U) 
                                             & (IData)(vlSelf->__PVT__qs_2_io_enq_ready)))) 
                                   | ((IData)(vlSelf->__PVT__qs_3_io_enq_ready) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                         >> 3U))) & 
                                  ((((0xfU & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                              & (IData)(vlSelf->__PVT__empty_0))) 
                                     | (7U & ((((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                               >> 1U) 
                                              & (IData)(vlSelf->__PVT__empty_1)))) 
                                    | (3U & ((((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                              >> 2U) 
                                             & (IData)(vlSelf->__PVT__empty_2)))) 
                                   | ((IData)(vlSelf->__PVT__empty_3) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                         >> 3U))));
    __PVT__can_to_q_3 = ((~ (IData)(vlSelf->__PVT__empty_3)) 
                         & (IData)(vlSelf->__PVT__qs_3_io_enq_ready));
    __PVT___GEN_51 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (0U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))));
    __PVT___GEN_55 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))));
    __PVT___GEN_59 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))));
    __PVT___GEN_63 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))));
    vlSelf->__PVT___T_9 = ((((IData)(__PVT__can_to_q_0) 
                             | (IData)(__PVT__can_to_q_1)) 
                            | (IData)(__PVT__can_to_q_2)) 
                           | (IData)(__PVT__can_to_q_3));
    vlSelf->__PVT__to_q_oh_enc = ((IData)(__PVT__can_to_q_0)
                                   ? 1U : ((IData)(__PVT__can_to_q_1)
                                            ? 2U : 
                                           ((IData)(__PVT__can_to_q_2)
                                             ? 4U : 
                                            ((IData)(__PVT__can_to_q_3)
                                              ? 8U : 0U))));
    vlSelf->__PVT__to_q = (((IData)((0U != (3U & ((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                  >> 2U)))) 
                            << 1U) | (IData)((0U != 
                                              (0xaU 
                                               & (IData)(vlSelf->__PVT__to_q_oh_enc)))));
    vlSelf->__PVT___heads_T_14 = ((((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                     ? 5U : 0U) | (
                                                   (4U 
                                                    & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                                    ? 0xaU
                                                    : 0U)) 
                                  | ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                      ? 0xfU : 0U));
    if (vlSelf->__PVT___T_9) {
        vlSelf->__PVT__qs_0_io_enq_valid = (1U & ((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                  | (IData)(__PVT___GEN_51)));
        vlSelf->__PVT__qs_1_io_enq_valid = (1U & (((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                   >> 1U) 
                                                  | (IData)(__PVT___GEN_55)));
        vlSelf->__PVT__qs_2_io_enq_valid = (1U & (((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                   >> 2U) 
                                                  | (IData)(__PVT___GEN_59)));
        vlSelf->__PVT__qs_3_io_enq_valid = (1U & (((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                   >> 3U) 
                                                  | (IData)(__PVT___GEN_63)));
    } else {
        vlSelf->__PVT__qs_0_io_enq_valid = (1U & (IData)(__PVT___GEN_51));
        vlSelf->__PVT__qs_1_io_enq_valid = (1U & (IData)(__PVT___GEN_55));
        vlSelf->__PVT__qs_2_io_enq_valid = (1U & (IData)(__PVT___GEN_59));
        vlSelf->__PVT__qs_3_io_enq_valid = (1U & (IData)(__PVT___GEN_63));
    }
    __PVT___head_T_3 = ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                         ? (IData)(vlSelf->__PVT__heads_3)
                         : 0U);
    __PVT___head_T_5 = ((((1U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                           ? (IData)(vlSelf->__PVT__heads_0)
                           : 0U) | ((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                     ? (IData)(vlSelf->__PVT__heads_1)
                                     : 0U)) | ((4U 
                                                & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                                ? (IData)(vlSelf->__PVT__heads_2)
                                                : 0U));
    vlSelf->__PVT__qs_0__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_0_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_0_io_enq_valid));
    vlSelf->__PVT__qs_1__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_1_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_1_io_enq_valid));
    vlSelf->__PVT__qs_2__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_2_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_2_io_enq_valid));
    vlSelf->__PVT__qs_3__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_3_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_3_io_enq_valid));
    vlSelf->__PVT__mem_head_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_head_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_head_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_head_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__head = ((IData)(__PVT___head_T_5) 
                           | (IData)(__PVT___head_T_3));
    vlSelf->__PVT___heads_T_7 = ((IData)(vlSelf->__PVT__head) 
                                 == (((((1U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                         ? 4U : 0U) 
                                       | ((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                           ? 9U : 0U)) 
                                      | ((4U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                          ? 0xeU : 0U)) 
                                     | ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                         ? 0x13U : 0U)));
}

VL_INLINE_OPT void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer__0(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__mem_tail__v0;
    CData/*0:0*/ __Vdlyvval__mem_tail__v0;
    CData/*0:0*/ __Vdlyvset__mem_tail__v0;
    CData/*4:0*/ __Vdlyvdim0__mem_head__v0;
    CData/*0:0*/ __Vdlyvval__mem_head__v0;
    CData/*0:0*/ __Vdlyvset__mem_head__v0;
    CData/*4:0*/ __Vdlyvdim0__mem_payload__v0;
    QData/*63:0*/ __Vdlyvval__mem_payload__v0;
    CData/*0:0*/ __Vdlyvset__mem_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_0__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_0__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_0__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_0__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_0__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_0__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_1__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_1__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_1__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_1__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_1__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_1__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_2__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_2__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_2__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_2__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_2__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_2__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__qs_3__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__qs_3__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__qs_3__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__qs_3__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__qs_3__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__qs_3__DOT__ram_payload__v0;
    // Body
    __Vdlyvset__mem_payload__v0 = 0U;
    __Vdlyvset__mem_tail__v0 = 0U;
    __Vdlyvset__mem_head__v0 = 0U;
    __Vdlyvset__qs_0__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_1__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_2__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_3__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__qs_0__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_1__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_2__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_3__DOT__ram_head__v0 = 0U;
    __Vdlyvset__qs_0__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__qs_1__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__qs_2__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__qs_3__DOT__ram_tail__v0 = 0U;
    if (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
         & (~ (IData)(vlSelf->__PVT__direct_to_q)))) {
        vlSelf->__Vlvbound_hf210c3d8__0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
        if ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_MPORT_addr))) {
            __Vdlyvval__mem_payload__v0 = vlSelf->__Vlvbound_hf210c3d8__0;
            __Vdlyvset__mem_payload__v0 = 1U;
            __Vdlyvdim0__mem_payload__v0 = vlSelf->__PVT__mem_payload_MPORT_addr;
        }
        vlSelf->__Vlvbound_had19c418__0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
        if ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_MPORT_addr))) {
            __Vdlyvval__mem_tail__v0 = vlSelf->__Vlvbound_had19c418__0;
            __Vdlyvset__mem_tail__v0 = 1U;
            __Vdlyvdim0__mem_tail__v0 = vlSelf->__PVT__mem_tail_MPORT_addr;
        }
        vlSelf->__Vlvbound_h44e885f1__0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_head;
        if ((0x13U >= (IData)(vlSelf->__PVT__mem_head_MPORT_addr))) {
            __Vdlyvval__mem_head__v0 = vlSelf->__Vlvbound_h44e885f1__0;
            __Vdlyvset__mem_head__v0 = 1U;
            __Vdlyvdim0__mem_head__v0 = vlSelf->__PVT__mem_head_MPORT_addr;
        }
    }
    if (((IData)(vlSelf->__PVT__qs_0_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_0_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((1U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_0__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_0__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_0_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_0_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_0__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_0__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
                __Vdlyvval__qs_0__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_head;
                __Vdlyvval__qs_0__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_0__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
            __Vdlyvval__qs_0__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_head;
            __Vdlyvval__qs_0__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
        }
        __Vdlyvset__qs_0__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_0__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_0__DOT__ram_tail__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__qs_1_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_1_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_1__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_1__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_1_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_1_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_1__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_1__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
                __Vdlyvval__qs_1__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_head;
                __Vdlyvval__qs_1__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_1__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
            __Vdlyvval__qs_1__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_head;
            __Vdlyvval__qs_1__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
        }
        __Vdlyvset__qs_1__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_1__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_1__DOT__ram_tail__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__qs_2_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_2_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((4U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_2__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_2__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_2_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_2_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_2__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_2__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
                __Vdlyvval__qs_2__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_head;
                __Vdlyvval__qs_2__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_2__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
            __Vdlyvval__qs_2__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_head;
            __Vdlyvval__qs_2__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
        }
        __Vdlyvset__qs_2__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_2__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_2__DOT__ram_tail__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__qs_3_io_enq_ready) 
         & (IData)(vlSelf->__PVT__qs_3_io_enq_valid))) {
        if (vlSelf->__PVT___T_9) {
            if ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))) {
                __Vdlyvval__qs_3__DOT__ram_payload__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__mem_payload
                       [vlSelf->__PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__qs_3__DOT__ram_head__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_head_qs_3_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_head[vlSelf->__PVT__mem_head_qs_3_io_enq_bits_MPORT_addr]);
                __Vdlyvval__qs_3__DOT__ram_tail__v0 
                    = ((0x13U >= (IData)(vlSelf->__PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__mem_tail[vlSelf->__PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__qs_3__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
                __Vdlyvval__qs_3__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_head;
                __Vdlyvval__qs_3__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
            }
        } else {
            __Vdlyvval__qs_3__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_payload;
            __Vdlyvval__qs_3__DOT__ram_head__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_head;
            __Vdlyvval__qs_3__DOT__ram_tail__v0 = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_tail;
        }
        __Vdlyvset__qs_3__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__qs_3__DOT__ram_head__v0 = 1U;
        __Vdlyvset__qs_3__DOT__ram_tail__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__heads_3 = 0xfU;
        vlSelf->__PVT__heads_0 = 0U;
        vlSelf->__PVT__heads_2 = 0xaU;
        vlSelf->__PVT__heads_1 = 5U;
        vlSelf->__PVT__tails_3 = 0xfU;
        vlSelf->__PVT__tails_2 = 0xaU;
        vlSelf->__PVT__tails_1 = 5U;
        vlSelf->__PVT__tails_0 = 0U;
        vlSelf->__PVT__qs_0__DOT__maybe_full = 0U;
        vlSelf->__PVT__qs_1__DOT__maybe_full = 0U;
        vlSelf->__PVT__qs_2__DOT__maybe_full = 0U;
        vlSelf->__PVT__qs_3__DOT__maybe_full = 0U;
    } else {
        if (vlSelf->__PVT___T_9) {
            if ((3U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_3 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
            if ((0U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_0 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
            if ((2U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_2 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
            if ((1U == (IData)(vlSelf->__PVT__to_q))) {
                vlSelf->__PVT__heads_1 = (0x1fU & ((IData)(vlSelf->__PVT___heads_T_7)
                                                    ? (IData)(vlSelf->__PVT___heads_T_14)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__head))));
            }
        }
        if (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
             & (~ (IData)(vlSelf->__PVT__direct_to_q)))) {
            if ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_3 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
            if ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_2 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
            if ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_1 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
            if ((0U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))) {
                vlSelf->__PVT__tails_0 = (0x1fU & ((IData)(vlSelf->__PVT___tails_T_11)
                                                    ? (IData)(vlSelf->__PVT___tails_T_22)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT___GEN_3))));
            }
        }
        if (((IData)(vlSelf->__PVT__qs_0__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_0__DOT__do_deq))) {
            vlSelf->__PVT__qs_0__DOT__maybe_full = vlSelf->__PVT__qs_0__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__qs_1__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_1__DOT__do_deq))) {
            vlSelf->__PVT__qs_1__DOT__maybe_full = vlSelf->__PVT__qs_1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__qs_2__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_2__DOT__do_deq))) {
            vlSelf->__PVT__qs_2__DOT__maybe_full = vlSelf->__PVT__qs_2__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__qs_3__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__qs_3__DOT__do_deq))) {
            vlSelf->__PVT__qs_3__DOT__maybe_full = vlSelf->__PVT__qs_3__DOT__do_enq;
        }
    }
    if (__Vdlyvset__qs_0__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_0__DOT__ram_payload[0U] = __Vdlyvval__qs_0__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__qs_1__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_1__DOT__ram_payload[0U] = __Vdlyvval__qs_1__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__qs_2__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_2__DOT__ram_payload[0U] = __Vdlyvval__qs_2__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__qs_3__DOT__ram_payload__v0) {
        vlSelf->__PVT__qs_3__DOT__ram_payload[0U] = __Vdlyvval__qs_3__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__mem_payload__v0) {
        vlSelf->__PVT__mem_payload[__Vdlyvdim0__mem_payload__v0] 
            = __Vdlyvval__mem_payload__v0;
    }
    if (__Vdlyvset__qs_0__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_0__DOT__ram_head[0U] = __Vdlyvval__qs_0__DOT__ram_head__v0;
    }
    if (__Vdlyvset__qs_1__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_1__DOT__ram_head[0U] = __Vdlyvval__qs_1__DOT__ram_head__v0;
    }
    if (__Vdlyvset__qs_2__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_2__DOT__ram_head[0U] = __Vdlyvval__qs_2__DOT__ram_head__v0;
    }
    if (__Vdlyvset__qs_3__DOT__ram_head__v0) {
        vlSelf->__PVT__qs_3__DOT__ram_head[0U] = __Vdlyvval__qs_3__DOT__ram_head__v0;
    }
    if (__Vdlyvset__mem_head__v0) {
        vlSelf->__PVT__mem_head[__Vdlyvdim0__mem_head__v0] 
            = __Vdlyvval__mem_head__v0;
    }
    if (__Vdlyvset__qs_0__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_0__DOT__ram_tail[0U] = __Vdlyvval__qs_0__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__qs_1__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_1__DOT__ram_tail[0U] = __Vdlyvval__qs_1__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__qs_2__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_2__DOT__ram_tail[0U] = __Vdlyvval__qs_2__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__mem_tail__v0) {
        vlSelf->__PVT__mem_tail[__Vdlyvdim0__mem_tail__v0] 
            = __Vdlyvval__mem_tail__v0;
    }
    if (__Vdlyvset__qs_3__DOT__ram_tail__v0) {
        vlSelf->__PVT__qs_3__DOT__ram_tail[0U] = __Vdlyvval__qs_3__DOT__ram_tail__v0;
    }
    vlSelf->__PVT__empty_3 = ((IData)(vlSelf->__PVT__heads_3) 
                              == (IData)(vlSelf->__PVT__tails_3));
    vlSelf->__PVT__empty_2 = ((IData)(vlSelf->__PVT__heads_2) 
                              == (IData)(vlSelf->__PVT__tails_2));
    vlSelf->__PVT__empty_1 = ((IData)(vlSelf->__PVT__heads_1) 
                              == (IData)(vlSelf->__PVT__tails_1));
    vlSelf->__PVT__empty_0 = ((IData)(vlSelf->__PVT__heads_0) 
                              == (IData)(vlSelf->__PVT__tails_0));
}

VL_INLINE_OPT void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer__1(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer__1\n"); );
    // Init
    CData/*4:0*/ __PVT___GEN_2;
    // Body
    vlSelf->__PVT___tails_T_22 = ((((2U & ((IData)(1U) 
                                           << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                     ? 5U : 0U) | (
                                                   (4U 
                                                    & ((IData)(1U) 
                                                       << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                                    ? 0xaU
                                                    : 0U)) 
                                  | ((8U & ((IData)(1U) 
                                            << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                      ? 0xfU : 0U));
    __PVT___GEN_2 = ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))
                      ? (IData)(vlSelf->__PVT__tails_2)
                      : ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))
                          ? (IData)(vlSelf->__PVT__tails_1)
                          : (IData)(vlSelf->__PVT__tails_0)));
    if ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))) {
        vlSelf->__PVT__mem_head_MPORT_addr = vlSelf->__PVT__tails_3;
        vlSelf->__PVT__mem_tail_MPORT_addr = vlSelf->__PVT__tails_3;
        vlSelf->__PVT__mem_payload_MPORT_addr = vlSelf->__PVT__tails_3;
        vlSelf->__PVT___GEN_3 = vlSelf->__PVT__tails_3;
    } else {
        vlSelf->__PVT__mem_head_MPORT_addr = __PVT___GEN_2;
        vlSelf->__PVT__mem_tail_MPORT_addr = __PVT___GEN_2;
        vlSelf->__PVT__mem_payload_MPORT_addr = __PVT___GEN_2;
        vlSelf->__PVT___GEN_3 = __PVT___GEN_2;
    }
    vlSelf->__PVT___tails_T_11 = ((IData)(vlSelf->__PVT___GEN_3) 
                                  == (((((1U & ((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                          ? 4U : 0U) 
                                        | ((2U & ((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                            ? 9U : 0U)) 
                                       | ((4U & ((IData)(1U) 
                                                 << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                           ? 0xeU : 0U)) 
                                      | ((8U & ((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)))
                                          ? 0x13U : 0U)));
}

VL_INLINE_OPT void VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer__2(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer__2\n"); );
    // Init
    CData/*0:0*/ __PVT___GEN_51;
    CData/*0:0*/ __PVT___GEN_55;
    CData/*0:0*/ __PVT___GEN_59;
    CData/*0:0*/ __PVT___GEN_63;
    CData/*0:0*/ __PVT__can_to_q_0;
    CData/*0:0*/ __PVT__can_to_q_1;
    CData/*0:0*/ __PVT__can_to_q_2;
    CData/*0:0*/ __PVT__can_to_q_3;
    CData/*4:0*/ __PVT___head_T_3;
    CData/*4:0*/ __PVT___head_T_5;
    // Body
    vlSelf->__PVT__qs_0__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_in_0_ready) 
                                        & (IData)(vlSelf->__PVT__qs_0__DOT__maybe_full));
    vlSelf->__PVT__qs_0_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_in_0_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_0__DOT__maybe_full))));
    vlSelf->__PVT__qs_1__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_in_1_ready) 
                                        & (IData)(vlSelf->__PVT__qs_1__DOT__maybe_full));
    vlSelf->__PVT__qs_1_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_in_1_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_1__DOT__maybe_full))));
    vlSelf->__PVT__qs_2__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_in_2_ready) 
                                        & (IData)(vlSelf->__PVT__qs_2__DOT__maybe_full));
    vlSelf->__PVT__qs_2_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_in_2_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_2__DOT__maybe_full))));
    vlSelf->__PVT__qs_3__DOT__do_deq = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_in_3_ready) 
                                        & (IData)(vlSelf->__PVT__qs_3__DOT__maybe_full));
    vlSelf->__PVT__qs_3_io_enq_ready = (1U & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__salloc_arb_io_in_3_ready) 
                                              | (~ (IData)(vlSelf->__PVT__qs_3__DOT__maybe_full))));
    __PVT__can_to_q_0 = ((~ (IData)(vlSelf->__PVT__empty_0)) 
                         & (IData)(vlSelf->__PVT__qs_0_io_enq_ready));
    __PVT__can_to_q_1 = ((~ (IData)(vlSelf->__PVT__empty_1)) 
                         & (IData)(vlSelf->__PVT__qs_1_io_enq_ready));
    __PVT__can_to_q_2 = ((~ (IData)(vlSelf->__PVT__empty_2)) 
                         & (IData)(vlSelf->__PVT__qs_2_io_enq_ready));
    vlSelf->__PVT__direct_to_q = (((((0xfU & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                              & (IData)(vlSelf->__PVT__qs_0_io_enq_ready))) 
                                     | (7U & ((((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                               >> 1U) 
                                              & (IData)(vlSelf->__PVT__qs_1_io_enq_ready)))) 
                                    | (3U & ((((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                              >> 2U) 
                                             & (IData)(vlSelf->__PVT__qs_2_io_enq_ready)))) 
                                   | ((IData)(vlSelf->__PVT__qs_3_io_enq_ready) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                         >> 3U))) & 
                                  ((((0xfU & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                              & (IData)(vlSelf->__PVT__empty_0))) 
                                     | (7U & ((((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                               >> 1U) 
                                              & (IData)(vlSelf->__PVT__empty_1)))) 
                                    | (3U & ((((IData)(1U) 
                                               << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                              >> 2U) 
                                             & (IData)(vlSelf->__PVT__empty_2)))) 
                                   | ((IData)(vlSelf->__PVT__empty_3) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id)) 
                                         >> 3U))));
    __PVT__can_to_q_3 = ((~ (IData)(vlSelf->__PVT__empty_3)) 
                         & (IData)(vlSelf->__PVT__qs_3_io_enq_ready));
    __PVT___GEN_51 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (0U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))));
    __PVT___GEN_55 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))));
    __PVT___GEN_59 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))));
    __PVT___GEN_63 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (~ (IData)(vlSelf->__PVT__direct_to_q)))) 
                      & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
                          & (IData)(vlSelf->__PVT__direct_to_q)) 
                         & (3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_bits_virt_channel_id))));
    vlSelf->__PVT___T_9 = ((((IData)(__PVT__can_to_q_0) 
                             | (IData)(__PVT__can_to_q_1)) 
                            | (IData)(__PVT__can_to_q_2)) 
                           | (IData)(__PVT__can_to_q_3));
    vlSelf->__PVT__to_q_oh_enc = ((IData)(__PVT__can_to_q_0)
                                   ? 1U : ((IData)(__PVT__can_to_q_1)
                                            ? 2U : 
                                           ((IData)(__PVT__can_to_q_2)
                                             ? 4U : 
                                            ((IData)(__PVT__can_to_q_3)
                                              ? 8U : 0U))));
    vlSelf->__PVT__to_q = (((IData)((0U != (3U & ((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                  >> 2U)))) 
                            << 1U) | (IData)((0U != 
                                              (0xaU 
                                               & (IData)(vlSelf->__PVT__to_q_oh_enc)))));
    vlSelf->__PVT___heads_T_14 = ((((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                     ? 5U : 0U) | (
                                                   (4U 
                                                    & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                                    ? 0xaU
                                                    : 0U)) 
                                  | ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                      ? 0xfU : 0U));
    if (vlSelf->__PVT___T_9) {
        vlSelf->__PVT__qs_0_io_enq_valid = (1U & ((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                  | (IData)(__PVT___GEN_51)));
        vlSelf->__PVT__qs_1_io_enq_valid = (1U & (((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                   >> 1U) 
                                                  | (IData)(__PVT___GEN_55)));
        vlSelf->__PVT__qs_2_io_enq_valid = (1U & (((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                   >> 2U) 
                                                  | (IData)(__PVT___GEN_59)));
        vlSelf->__PVT__qs_3_io_enq_valid = (1U & (((IData)(vlSelf->__PVT__to_q_oh_enc) 
                                                   >> 3U) 
                                                  | (IData)(__PVT___GEN_63)));
    } else {
        vlSelf->__PVT__qs_0_io_enq_valid = (1U & (IData)(__PVT___GEN_51));
        vlSelf->__PVT__qs_1_io_enq_valid = (1U & (IData)(__PVT___GEN_55));
        vlSelf->__PVT__qs_2_io_enq_valid = (1U & (IData)(__PVT___GEN_59));
        vlSelf->__PVT__qs_3_io_enq_valid = (1U & (IData)(__PVT___GEN_63));
    }
    __PVT___head_T_3 = ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                         ? (IData)(vlSelf->__PVT__heads_3)
                         : 0U);
    __PVT___head_T_5 = ((((1U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                           ? (IData)(vlSelf->__PVT__heads_0)
                           : 0U) | ((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                     ? (IData)(vlSelf->__PVT__heads_1)
                                     : 0U)) | ((4U 
                                                & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                                ? (IData)(vlSelf->__PVT__heads_2)
                                                : 0U));
    vlSelf->__PVT__qs_0__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_0_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_0_io_enq_valid));
    vlSelf->__PVT__qs_1__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_1_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_1_io_enq_valid));
    vlSelf->__PVT__qs_2__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_2_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_2_io_enq_valid));
    vlSelf->__PVT__qs_3__DOT__do_enq = ((IData)(vlSelf->__PVT__qs_3_io_enq_ready) 
                                        & (IData)(vlSelf->__PVT__qs_3_io_enq_valid));
    vlSelf->__PVT__mem_head_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_head_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_head_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_head_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT___head_T_5) | (IData)(__PVT___head_T_3));
    vlSelf->__PVT__head = ((IData)(__PVT___head_T_5) 
                           | (IData)(__PVT___head_T_3));
    vlSelf->__PVT___heads_T_7 = ((IData)(vlSelf->__PVT__head) 
                                 == (((((1U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                         ? 4U : 0U) 
                                       | ((2U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                           ? 9U : 0U)) 
                                      | ((4U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                          ? 0xeU : 0U)) 
                                     | ((8U & (IData)(vlSelf->__PVT__to_q_oh_enc))
                                         ? 0x13U : 0U)));
}
