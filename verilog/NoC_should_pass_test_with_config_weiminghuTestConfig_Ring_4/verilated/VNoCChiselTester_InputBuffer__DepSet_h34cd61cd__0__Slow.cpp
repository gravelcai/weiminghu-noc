// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNoCChiselTester.h for the primary calling header

#include "verilated.h"

#include "VNoCChiselTester_InputBuffer.h"
#include "VNoCChiselTester__Syms.h"

VL_ATTR_COLD void VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer__0(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer__0\n"); );
    // Init
    CData/*4:0*/ __PVT___GEN_2;
    // Body
    vlSelf->__PVT__empty_0 = ((IData)(vlSelf->__PVT__heads_0) 
                              == (IData)(vlSelf->__PVT__tails_0));
    vlSelf->__PVT__empty_1 = ((IData)(vlSelf->__PVT__heads_1) 
                              == (IData)(vlSelf->__PVT__tails_1));
    vlSelf->__PVT__empty_2 = ((IData)(vlSelf->__PVT__heads_2) 
                              == (IData)(vlSelf->__PVT__tails_2));
    vlSelf->__PVT__empty_3 = ((IData)(vlSelf->__PVT__heads_3) 
                              == (IData)(vlSelf->__PVT__tails_3));
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

VL_ATTR_COLD void VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer__0(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer__0\n"); );
    // Init
    CData/*4:0*/ __PVT___GEN_2;
    // Body
    vlSelf->__PVT__empty_0 = ((IData)(vlSelf->__PVT__heads_0) 
                              == (IData)(vlSelf->__PVT__tails_0));
    vlSelf->__PVT__empty_1 = ((IData)(vlSelf->__PVT__heads_1) 
                              == (IData)(vlSelf->__PVT__tails_1));
    vlSelf->__PVT__empty_2 = ((IData)(vlSelf->__PVT__heads_2) 
                              == (IData)(vlSelf->__PVT__tails_2));
    vlSelf->__PVT__empty_3 = ((IData)(vlSelf->__PVT__heads_3) 
                              == (IData)(vlSelf->__PVT__tails_3));
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

VL_ATTR_COLD void VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__0(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__0\n"); );
    // Init
    CData/*4:0*/ __PVT___GEN_2;
    // Body
    vlSelf->__PVT__empty_0 = ((IData)(vlSelf->__PVT__heads_0) 
                              == (IData)(vlSelf->__PVT__tails_0));
    vlSelf->__PVT__empty_1 = ((IData)(vlSelf->__PVT__heads_1) 
                              == (IData)(vlSelf->__PVT__tails_1));
    vlSelf->__PVT__empty_2 = ((IData)(vlSelf->__PVT__heads_2) 
                              == (IData)(vlSelf->__PVT__tails_2));
    vlSelf->__PVT__empty_3 = ((IData)(vlSelf->__PVT__heads_3) 
                              == (IData)(vlSelf->__PVT__tails_3));
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

VL_ATTR_COLD void VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer__0(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer__0\n"); );
    // Init
    CData/*4:0*/ __PVT___GEN_2;
    // Body
    vlSelf->__PVT__empty_0 = ((IData)(vlSelf->__PVT__heads_0) 
                              == (IData)(vlSelf->__PVT__tails_0));
    vlSelf->__PVT__empty_1 = ((IData)(vlSelf->__PVT__heads_1) 
                              == (IData)(vlSelf->__PVT__tails_1));
    vlSelf->__PVT__empty_2 = ((IData)(vlSelf->__PVT__heads_2) 
                              == (IData)(vlSelf->__PVT__tails_2));
    vlSelf->__PVT__empty_3 = ((IData)(vlSelf->__PVT__heads_3) 
                              == (IData)(vlSelf->__PVT__tails_3));
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

VL_ATTR_COLD void VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer__0(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer__0\n"); );
    // Init
    CData/*4:0*/ __PVT___GEN_2;
    // Body
    vlSelf->__PVT__empty_0 = ((IData)(vlSelf->__PVT__heads_0) 
                              == (IData)(vlSelf->__PVT__tails_0));
    vlSelf->__PVT__empty_1 = ((IData)(vlSelf->__PVT__heads_1) 
                              == (IData)(vlSelf->__PVT__tails_1));
    vlSelf->__PVT__empty_2 = ((IData)(vlSelf->__PVT__heads_2) 
                              == (IData)(vlSelf->__PVT__tails_2));
    vlSelf->__PVT__empty_3 = ((IData)(vlSelf->__PVT__heads_3) 
                              == (IData)(vlSelf->__PVT__tails_3));
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

VL_ATTR_COLD void VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer__0(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer__0\n"); );
    // Init
    CData/*4:0*/ __PVT___GEN_2;
    // Body
    vlSelf->__PVT__empty_0 = ((IData)(vlSelf->__PVT__heads_0) 
                              == (IData)(vlSelf->__PVT__tails_0));
    vlSelf->__PVT__empty_1 = ((IData)(vlSelf->__PVT__heads_1) 
                              == (IData)(vlSelf->__PVT__tails_1));
    vlSelf->__PVT__empty_2 = ((IData)(vlSelf->__PVT__heads_2) 
                              == (IData)(vlSelf->__PVT__tails_2));
    vlSelf->__PVT__empty_3 = ((IData)(vlSelf->__PVT__heads_3) 
                              == (IData)(vlSelf->__PVT__tails_3));
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

VL_ATTR_COLD void VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__0(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer__0\n"); );
    // Init
    CData/*4:0*/ __PVT___GEN_2;
    // Body
    vlSelf->__PVT__empty_0 = ((IData)(vlSelf->__PVT__heads_0) 
                              == (IData)(vlSelf->__PVT__tails_0));
    vlSelf->__PVT__empty_1 = ((IData)(vlSelf->__PVT__heads_1) 
                              == (IData)(vlSelf->__PVT__tails_1));
    vlSelf->__PVT__empty_2 = ((IData)(vlSelf->__PVT__heads_2) 
                              == (IData)(vlSelf->__PVT__tails_2));
    vlSelf->__PVT__empty_3 = ((IData)(vlSelf->__PVT__heads_3) 
                              == (IData)(vlSelf->__PVT__tails_3));
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

VL_ATTR_COLD void VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer__0(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___settle__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer__0\n"); );
    // Init
    CData/*4:0*/ __PVT___GEN_2;
    // Body
    vlSelf->__PVT__empty_0 = ((IData)(vlSelf->__PVT__heads_0) 
                              == (IData)(vlSelf->__PVT__tails_0));
    vlSelf->__PVT__empty_1 = ((IData)(vlSelf->__PVT__heads_1) 
                              == (IData)(vlSelf->__PVT__tails_1));
    vlSelf->__PVT__empty_2 = ((IData)(vlSelf->__PVT__heads_2) 
                              == (IData)(vlSelf->__PVT__tails_2));
    vlSelf->__PVT__empty_3 = ((IData)(vlSelf->__PVT__heads_3) 
                              == (IData)(vlSelf->__PVT__tails_3));
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
