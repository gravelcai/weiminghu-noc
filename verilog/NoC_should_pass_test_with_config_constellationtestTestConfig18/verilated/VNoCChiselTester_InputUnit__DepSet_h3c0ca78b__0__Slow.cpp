// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNoCChiselTester.h for the primary calling header

#include "verilated.h"

#include "VNoCChiselTester_InputUnit.h"

VL_ATTR_COLD void VNoCChiselTester_InputUnit___ctor_var_reset(VNoCChiselTester_InputUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNoCChiselTester_InputUnit___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_router_req_valid = VL_RAND_RESET_I(1);
    vlSelf->io_router_req_bits_src_virt_id = VL_RAND_RESET_I(2);
    vlSelf->io_vcalloc_req_ready = VL_RAND_RESET_I(1);
    vlSelf->io_vcalloc_req_valid = VL_RAND_RESET_I(1);
    vlSelf->io_vcalloc_req_bits_vc_sel_0_0 = VL_RAND_RESET_I(1);
    vlSelf->io_vcalloc_resp_vc_sel_0_0 = VL_RAND_RESET_I(1);
    vlSelf->io_out_credit_available_0_0 = VL_RAND_RESET_I(1);
    vlSelf->io_salloc_req_0_ready = VL_RAND_RESET_I(1);
    vlSelf->io_salloc_req_0_valid = VL_RAND_RESET_I(1);
    vlSelf->io_salloc_req_0_bits_vc_sel_0_0 = VL_RAND_RESET_I(1);
    vlSelf->io_salloc_req_0_bits_tail = VL_RAND_RESET_I(1);
    vlSelf->io_out_0_valid = VL_RAND_RESET_I(1);
    vlSelf->io_out_0_bits_flit_head = VL_RAND_RESET_I(1);
    vlSelf->io_out_0_bits_flit_tail = VL_RAND_RESET_I(1);
    vlSelf->io_out_0_bits_flit_payload = VL_RAND_RESET_Q(64);
    vlSelf->io_out_0_bits_flit_flow_ingress_node = VL_RAND_RESET_I(2);
    vlSelf->io_debug_va_stall = VL_RAND_RESET_I(2);
    vlSelf->io_debug_sa_stall = VL_RAND_RESET_I(2);
    vlSelf->io_in_flit_0_valid = VL_RAND_RESET_I(1);
    vlSelf->io_in_flit_0_bits_head = VL_RAND_RESET_I(1);
    vlSelf->io_in_flit_0_bits_tail = VL_RAND_RESET_I(1);
    vlSelf->io_in_flit_0_bits_payload = VL_RAND_RESET_Q(64);
    vlSelf->io_in_flit_0_bits_flow_ingress_node = VL_RAND_RESET_I(2);
    vlSelf->io_in_flit_0_bits_flow_egress_node = VL_RAND_RESET_I(2);
    vlSelf->io_in_flit_0_bits_virt_channel_id = VL_RAND_RESET_I(2);
    vlSelf->io_in_credit_return = VL_RAND_RESET_I(4);
    vlSelf->io_in_vc_free = VL_RAND_RESET_I(4);
    vlSelf->__PVT__route_arbiter_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id = VL_RAND_RESET_I(2);
    vlSelf->__PVT__salloc_arb_io_in_1_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__salloc_arb_io_in_1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__salloc_arb_io_in_2_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__salloc_arb_io_in_2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__salloc_arb_io_in_3_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__salloc_arb_io_in_3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__salloc_arb_io_out_0_bits_vc_sel_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__salloc_arb_io_out_0_bits_tail = VL_RAND_RESET_I(1);
    vlSelf->__PVT__salloc_arb_io_chosen_oh_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__states_1_g = VL_RAND_RESET_I(3);
    vlSelf->__PVT__states_1_vc_sel_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__states_1_flow_ingress_node = VL_RAND_RESET_I(2);
    vlSelf->__PVT__states_2_g = VL_RAND_RESET_I(3);
    vlSelf->__PVT__states_2_vc_sel_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__states_2_flow_ingress_node = VL_RAND_RESET_I(2);
    vlSelf->__PVT__states_3_g = VL_RAND_RESET_I(3);
    vlSelf->__PVT__states_3_vc_sel_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__states_3_flow_ingress_node = VL_RAND_RESET_I(2);
    vlSelf->__PVT___GEN_68 = VL_RAND_RESET_I(3);
    vlSelf->__PVT___GEN_69 = VL_RAND_RESET_I(3);
    vlSelf->__PVT___GEN_70 = VL_RAND_RESET_I(3);
    vlSelf->__PVT___GEN_88 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_89 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_90 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__vcalloc_sel = VL_RAND_RESET_I(4);
    vlSelf->__PVT___GEN_93 = VL_RAND_RESET_I(3);
    vlSelf->__PVT___GEN_94 = VL_RAND_RESET_I(3);
    vlSelf->__PVT___GEN_95 = VL_RAND_RESET_I(3);
    vlSelf->__PVT___T_35 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__salloc_outs_0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__salloc_outs_0_flit_head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__salloc_outs_0_flit_tail = VL_RAND_RESET_I(1);
    vlSelf->__PVT__salloc_outs_0_flit_payload = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__salloc_outs_0_flit_flow_ingress_node = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->__PVT__input_buffer__DOT__mem_head[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__input_buffer__DOT__mem_head_qs_0_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__input_buffer__DOT__mem_head_qs_1_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__input_buffer__DOT__mem_head_qs_2_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__input_buffer__DOT__mem_head_qs_3_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__input_buffer__DOT__mem_head_MPORT_addr = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->__PVT__input_buffer__DOT__mem_tail[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_0_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_1_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_2_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_3_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__input_buffer__DOT__mem_tail_MPORT_addr = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->__PVT__input_buffer__DOT__mem_payload[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_0_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_1_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_2_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_3_io_enq_bits_MPORT_addr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__input_buffer__DOT__mem_payload_MPORT_addr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__input_buffer__DOT__qs_0_io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_buffer__DOT__qs_1_io_enq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_buffer__DOT__qs_1_io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_buffer__DOT__qs_2_io_enq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_buffer__DOT__qs_2_io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_buffer__DOT__qs_3_io_enq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_buffer__DOT__qs_3_io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_buffer__DOT__heads_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__input_buffer__DOT__heads_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__input_buffer__DOT__heads_2 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__input_buffer__DOT__heads_3 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__input_buffer__DOT__tails_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__input_buffer__DOT__tails_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__input_buffer__DOT__tails_2 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__input_buffer__DOT__tails_3 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__input_buffer__DOT__empty_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_buffer__DOT__empty_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_buffer__DOT__empty_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_buffer__DOT__empty_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_buffer__DOT__direct_to_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_buffer__DOT___GEN_3 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__input_buffer__DOT___tails_T_11 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_buffer__DOT___tails_T_22 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__input_buffer__DOT__can_to_q_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc = VL_RAND_RESET_I(4);
    vlSelf->__PVT__input_buffer__DOT__to_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__input_buffer__DOT___T_9 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_buffer__DOT__head = VL_RAND_RESET_I(4);
    vlSelf->__PVT__input_buffer__DOT___heads_T_7 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_buffer__DOT___heads_T_14 = VL_RAND_RESET_I(4);
    vlSelf->input_buffer__DOT____Vlvbound_he49713b5__0 = VL_RAND_RESET_I(1);
    vlSelf->input_buffer__DOT____Vlvbound_h821c6c4f__0 = VL_RAND_RESET_I(1);
    vlSelf->input_buffer__DOT____Vlvbound_h111e8aad__0 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__ram_head[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__ram_tail[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__ram_payload[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__do_enq = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__ram_head[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__ram_tail[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__ram_payload[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__ram_head[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__ram_tail[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__ram_payload[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__ram_head[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__ram_tail[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__ram_payload[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__salloc_arb__DOT__lock_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__salloc_arb__DOT__mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__salloc_arb__DOT__chosen = VL_RAND_RESET_I(4);
    vlSelf->__PVT__salloc_arb__DOT___io_out_0_valid_T = VL_RAND_RESET_I(4);
    vlSelf->__PVT__salloc_arb__DOT___T_17 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__salloc_arb__DOT___GEN_11 = VL_RAND_RESET_I(5);
}

VL_ATTR_COLD void VNoCChiselTester_InputUnit___configure_coverage(VNoCChiselTester_InputUnit* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNoCChiselTester_InputUnit___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
