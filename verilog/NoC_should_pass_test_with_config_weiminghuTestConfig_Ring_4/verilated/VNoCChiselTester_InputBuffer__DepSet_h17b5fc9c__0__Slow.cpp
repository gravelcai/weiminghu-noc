// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNoCChiselTester.h for the primary calling header

#include "verilated.h"

#include "VNoCChiselTester_InputBuffer.h"

VL_ATTR_COLD void VNoCChiselTester_InputBuffer___ctor_var_reset(VNoCChiselTester_InputBuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_enq_0_valid = VL_RAND_RESET_I(1);
    vlSelf->io_enq_0_bits_head = VL_RAND_RESET_I(1);
    vlSelf->io_enq_0_bits_tail = VL_RAND_RESET_I(1);
    vlSelf->io_enq_0_bits_payload = VL_RAND_RESET_Q(64);
    vlSelf->io_enq_0_bits_virt_channel_id = VL_RAND_RESET_I(2);
    vlSelf->io_deq_0_ready = VL_RAND_RESET_I(1);
    vlSelf->io_deq_0_valid = VL_RAND_RESET_I(1);
    vlSelf->io_deq_0_bits_head = VL_RAND_RESET_I(1);
    vlSelf->io_deq_0_bits_tail = VL_RAND_RESET_I(1);
    vlSelf->io_deq_0_bits_payload = VL_RAND_RESET_Q(64);
    vlSelf->io_deq_1_ready = VL_RAND_RESET_I(1);
    vlSelf->io_deq_1_valid = VL_RAND_RESET_I(1);
    vlSelf->io_deq_1_bits_head = VL_RAND_RESET_I(1);
    vlSelf->io_deq_1_bits_tail = VL_RAND_RESET_I(1);
    vlSelf->io_deq_1_bits_payload = VL_RAND_RESET_Q(64);
    vlSelf->io_deq_2_ready = VL_RAND_RESET_I(1);
    vlSelf->io_deq_2_valid = VL_RAND_RESET_I(1);
    vlSelf->io_deq_2_bits_head = VL_RAND_RESET_I(1);
    vlSelf->io_deq_2_bits_tail = VL_RAND_RESET_I(1);
    vlSelf->io_deq_2_bits_payload = VL_RAND_RESET_Q(64);
    vlSelf->io_deq_3_ready = VL_RAND_RESET_I(1);
    vlSelf->io_deq_3_valid = VL_RAND_RESET_I(1);
    vlSelf->io_deq_3_bits_head = VL_RAND_RESET_I(1);
    vlSelf->io_deq_3_bits_tail = VL_RAND_RESET_I(1);
    vlSelf->io_deq_3_bits_payload = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<20; ++__Vi0) {
        vlSelf->__PVT__mem_head[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__mem_head_qs_0_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mem_head_qs_1_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mem_head_qs_2_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mem_head_qs_3_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mem_head_MPORT_addr = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<20; ++__Vi0) {
        vlSelf->__PVT__mem_tail[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mem_tail_MPORT_addr = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<20; ++__Vi0) {
        vlSelf->__PVT__mem_payload[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mem_payload_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__qs_0_io_enq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qs_0_io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qs_1_io_enq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qs_1_io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qs_2_io_enq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qs_2_io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qs_3_io_enq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qs_3_io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__heads_0 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__heads_1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__heads_2 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__heads_3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__tails_0 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__tails_1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__tails_2 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__tails_3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__empty_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__empty_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__empty_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__empty_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__direct_to_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT___tails_T_11 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___tails_T_22 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__to_q_oh_enc = VL_RAND_RESET_I(4);
    vlSelf->__PVT__to_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT___T_9 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__head = VL_RAND_RESET_I(5);
    vlSelf->__PVT___heads_T_7 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___heads_T_14 = VL_RAND_RESET_I(4);
    vlSelf->__Vlvbound_h44e885f1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vlvbound_had19c418__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vlvbound_hf210c3d8__0 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__qs_0__DOT__ram_head[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__qs_0__DOT__ram_tail[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__qs_0__DOT__ram_payload[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__qs_0__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qs_0__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qs_0__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__qs_1__DOT__ram_head[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__qs_1__DOT__ram_tail[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__qs_1__DOT__ram_payload[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__qs_1__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qs_1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qs_1__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__qs_2__DOT__ram_head[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__qs_2__DOT__ram_tail[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__qs_2__DOT__ram_payload[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__qs_2__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qs_2__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qs_2__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__qs_3__DOT__ram_head[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__qs_3__DOT__ram_tail[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__qs_3__DOT__ram_payload[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__qs_3__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qs_3__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qs_3__DOT__do_deq = VL_RAND_RESET_I(1);
}

VL_ATTR_COLD void VNoCChiselTester_InputBuffer___configure_coverage(VNoCChiselTester_InputBuffer* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNoCChiselTester_InputBuffer___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
