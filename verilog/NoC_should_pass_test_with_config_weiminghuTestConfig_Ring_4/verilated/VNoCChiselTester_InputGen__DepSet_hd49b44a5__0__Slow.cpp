// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNoCChiselTester.h for the primary calling header

#include "verilated.h"

#include "VNoCChiselTester_InputGen.h"

VL_ATTR_COLD void VNoCChiselTester_InputGen___ctor_var_reset(VNoCChiselTester_InputGen* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNoCChiselTester_InputGen___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_out_ready = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->io_out_bits_head = VL_RAND_RESET_I(1);
    vlSelf->io_out_bits_tail = VL_RAND_RESET_I(1);
    vlSelf->io_out_bits_payload = VL_RAND_RESET_Q(64);
    vlSelf->io_out_bits_egress_id = VL_RAND_RESET_I(2);
    vlSelf->io_rob_ready = VL_RAND_RESET_I(1);
    vlSelf->io_rob_idx = VL_RAND_RESET_I(7);
    vlSelf->io_tsc = VL_RAND_RESET_I(32);
    vlSelf->io_fire = VL_RAND_RESET_I(1);
    vlSelf->io_n_flits = VL_RAND_RESET_I(4);
    vlSelf->__PVT__flits_left = VL_RAND_RESET_I(4);
    vlSelf->__PVT__flits_fired = VL_RAND_RESET_I(4);
    vlSelf->__PVT__egress = VL_RAND_RESET_I(2);
    vlSelf->__PVT__payload_tsc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__payload_rob_idx = VL_RAND_RESET_I(16);
    vlSelf->__PVT___packet_remaining_T = VL_RAND_RESET_I(20);
    vlSelf->__PVT___io_fire_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_4 = VL_RAND_RESET_I(4);
    vlSelf->__PVT___GEN_9 = VL_RAND_RESET_I(4);
    vlSelf->__PVT___flits_fired_T_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT___flits_left_T_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__packet_remaining_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__packet_remaining_prng__DOT__state_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__packet_remaining_prng__DOT__state_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__packet_remaining_prng__DOT__state_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__packet_remaining_prng__DOT__state_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__packet_remaining_prng__DOT__state_5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__packet_remaining_prng__DOT__state_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__packet_remaining_prng__DOT__state_7 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__packet_remaining_prng__DOT__state_8 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__packet_remaining_prng__DOT__state_9 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__packet_remaining_prng__DOT__state_10 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__packet_remaining_prng__DOT__state_11 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__packet_remaining_prng__DOT__state_12 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__packet_remaining_prng__DOT__state_13 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__packet_remaining_prng__DOT__state_14 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__packet_remaining_prng__DOT__state_15 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__packet_remaining_prng__DOT__state_16 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__packet_remaining_prng__DOT__state_17 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__packet_remaining_prng__DOT__state_18 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__packet_remaining_prng__DOT__state_19 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_7 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_8 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_9 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_10 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_11 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_12 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_13 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_14 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_15 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_16 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_17 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_18 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_out_bits_egress_id_prng__DOT__state_19 = VL_RAND_RESET_I(1);
}

VL_ATTR_COLD void VNoCChiselTester_InputGen___configure_coverage(VNoCChiselTester_InputGen* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNoCChiselTester_InputGen___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
