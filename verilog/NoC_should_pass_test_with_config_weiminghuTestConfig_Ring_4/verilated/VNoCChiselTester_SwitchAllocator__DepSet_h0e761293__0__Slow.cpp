// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNoCChiselTester.h for the primary calling header

#include "verilated.h"

#include "VNoCChiselTester_SwitchAllocator.h"

VL_ATTR_COLD void VNoCChiselTester_SwitchAllocator___ctor_var_reset(VNoCChiselTester_SwitchAllocator* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNoCChiselTester_SwitchAllocator___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_req_2_0_ready = VL_RAND_RESET_I(1);
    vlSelf->io_req_2_0_valid = VL_RAND_RESET_I(1);
    vlSelf->io_req_2_0_bits_vc_sel_2_0 = VL_RAND_RESET_I(1);
    vlSelf->io_req_2_0_bits_vc_sel_1_0 = VL_RAND_RESET_I(1);
    vlSelf->io_req_2_0_bits_vc_sel_1_1 = VL_RAND_RESET_I(1);
    vlSelf->io_req_2_0_bits_vc_sel_1_2 = VL_RAND_RESET_I(1);
    vlSelf->io_req_2_0_bits_vc_sel_1_3 = VL_RAND_RESET_I(1);
    vlSelf->io_req_2_0_bits_vc_sel_0_0 = VL_RAND_RESET_I(1);
    vlSelf->io_req_2_0_bits_vc_sel_0_1 = VL_RAND_RESET_I(1);
    vlSelf->io_req_2_0_bits_vc_sel_0_2 = VL_RAND_RESET_I(1);
    vlSelf->io_req_2_0_bits_vc_sel_0_3 = VL_RAND_RESET_I(1);
    vlSelf->io_req_2_0_bits_tail = VL_RAND_RESET_I(1);
    vlSelf->io_req_1_0_ready = VL_RAND_RESET_I(1);
    vlSelf->io_req_1_0_valid = VL_RAND_RESET_I(1);
    vlSelf->io_req_1_0_bits_vc_sel_2_0 = VL_RAND_RESET_I(1);
    vlSelf->io_req_1_0_bits_vc_sel_1_0 = VL_RAND_RESET_I(1);
    vlSelf->io_req_1_0_bits_vc_sel_1_1 = VL_RAND_RESET_I(1);
    vlSelf->io_req_1_0_bits_vc_sel_1_2 = VL_RAND_RESET_I(1);
    vlSelf->io_req_1_0_bits_vc_sel_1_3 = VL_RAND_RESET_I(1);
    vlSelf->io_req_1_0_bits_vc_sel_0_0 = VL_RAND_RESET_I(1);
    vlSelf->io_req_1_0_bits_vc_sel_0_1 = VL_RAND_RESET_I(1);
    vlSelf->io_req_1_0_bits_vc_sel_0_2 = VL_RAND_RESET_I(1);
    vlSelf->io_req_1_0_bits_vc_sel_0_3 = VL_RAND_RESET_I(1);
    vlSelf->io_req_1_0_bits_tail = VL_RAND_RESET_I(1);
    vlSelf->io_req_0_0_ready = VL_RAND_RESET_I(1);
    vlSelf->io_req_0_0_valid = VL_RAND_RESET_I(1);
    vlSelf->io_req_0_0_bits_vc_sel_2_0 = VL_RAND_RESET_I(1);
    vlSelf->io_req_0_0_bits_vc_sel_1_0 = VL_RAND_RESET_I(1);
    vlSelf->io_req_0_0_bits_vc_sel_1_1 = VL_RAND_RESET_I(1);
    vlSelf->io_req_0_0_bits_vc_sel_1_2 = VL_RAND_RESET_I(1);
    vlSelf->io_req_0_0_bits_vc_sel_1_3 = VL_RAND_RESET_I(1);
    vlSelf->io_req_0_0_bits_vc_sel_0_0 = VL_RAND_RESET_I(1);
    vlSelf->io_req_0_0_bits_vc_sel_0_1 = VL_RAND_RESET_I(1);
    vlSelf->io_req_0_0_bits_vc_sel_0_2 = VL_RAND_RESET_I(1);
    vlSelf->io_req_0_0_bits_vc_sel_0_3 = VL_RAND_RESET_I(1);
    vlSelf->io_req_0_0_bits_tail = VL_RAND_RESET_I(1);
    vlSelf->io_credit_alloc_2_0_alloc = VL_RAND_RESET_I(1);
    vlSelf->io_credit_alloc_2_0_tail = VL_RAND_RESET_I(1);
    vlSelf->io_credit_alloc_1_0_alloc = VL_RAND_RESET_I(1);
    vlSelf->io_credit_alloc_1_1_alloc = VL_RAND_RESET_I(1);
    vlSelf->io_credit_alloc_1_2_alloc = VL_RAND_RESET_I(1);
    vlSelf->io_credit_alloc_1_3_alloc = VL_RAND_RESET_I(1);
    vlSelf->io_credit_alloc_0_0_alloc = VL_RAND_RESET_I(1);
    vlSelf->io_credit_alloc_0_1_alloc = VL_RAND_RESET_I(1);
    vlSelf->io_credit_alloc_0_2_alloc = VL_RAND_RESET_I(1);
    vlSelf->io_credit_alloc_0_3_alloc = VL_RAND_RESET_I(1);
    vlSelf->io_switch_sel_2_0_2_0 = VL_RAND_RESET_I(1);
    vlSelf->io_switch_sel_2_0_1_0 = VL_RAND_RESET_I(1);
    vlSelf->io_switch_sel_2_0_0_0 = VL_RAND_RESET_I(1);
    vlSelf->io_switch_sel_1_0_2_0 = VL_RAND_RESET_I(1);
    vlSelf->io_switch_sel_1_0_1_0 = VL_RAND_RESET_I(1);
    vlSelf->io_switch_sel_1_0_0_0 = VL_RAND_RESET_I(1);
    vlSelf->io_switch_sel_0_0_2_0 = VL_RAND_RESET_I(1);
    vlSelf->io_switch_sel_0_0_1_0 = VL_RAND_RESET_I(1);
    vlSelf->io_switch_sel_0_0_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arbs_0_io_in_0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arbs_0_io_in_1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arbs_0_io_in_2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arbs_0_io_chosen_oh_0 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__arbs_1_io_in_0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arbs_1_io_in_1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arbs_1_io_in_2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arbs_1_io_chosen_oh_0 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__arbs_2_io_in_0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arbs_2_io_in_1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arbs_2_io_in_2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arbs_2_io_out_0_bits_vc_sel_2_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arbs_2_io_chosen_oh_0 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__arbs_0__DOT__lock_0 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__arbs_0__DOT__mask = VL_RAND_RESET_I(3);
    vlSelf->__PVT__arbs_0__DOT__chosen = VL_RAND_RESET_I(3);
    vlSelf->__PVT__arbs_0__DOT___io_out_0_valid_T = VL_RAND_RESET_I(3);
    vlSelf->__PVT__arbs_0__DOT___GEN_9 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__arbs_1__DOT__lock_0 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__arbs_1__DOT__mask = VL_RAND_RESET_I(3);
    vlSelf->__PVT__arbs_1__DOT__chosen = VL_RAND_RESET_I(3);
    vlSelf->__PVT__arbs_1__DOT___io_out_0_valid_T = VL_RAND_RESET_I(3);
    vlSelf->__PVT__arbs_1__DOT___GEN_9 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__arbs_2__DOT__lock_0 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__arbs_2__DOT__mask = VL_RAND_RESET_I(3);
    vlSelf->__PVT__arbs_2__DOT__chosen = VL_RAND_RESET_I(3);
    vlSelf->__PVT__arbs_2__DOT___io_out_0_valid_T = VL_RAND_RESET_I(3);
    vlSelf->__PVT__arbs_2__DOT___GEN_9 = VL_RAND_RESET_I(4);
}

VL_ATTR_COLD void VNoCChiselTester_SwitchAllocator___configure_coverage(VNoCChiselTester_SwitchAllocator* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNoCChiselTester_SwitchAllocator___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
