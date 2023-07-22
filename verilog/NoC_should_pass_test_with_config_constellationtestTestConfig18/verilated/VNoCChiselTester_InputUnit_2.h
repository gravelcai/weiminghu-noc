// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNoCChiselTester.h for the primary calling header

#ifndef VERILATED_VNOCCHISELTESTER_INPUTUNIT_2_H_
#define VERILATED_VNOCCHISELTESTER_INPUTUNIT_2_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class VNoCChiselTester__Syms;

class VNoCChiselTester_InputUnit_2 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(io_router_req_valid,0,0);
        VL_OUT8(io_router_req_bits_src_virt_id,1,0);
        VL_IN8(io_vcalloc_req_ready,0,0);
        VL_OUT8(io_vcalloc_req_valid,0,0);
        VL_OUT8(io_vcalloc_req_bits_vc_sel_0_0,0,0);
        VL_IN8(io_vcalloc_resp_vc_sel_0_0,0,0);
        VL_IN8(io_out_credit_available_0_0,0,0);
        VL_IN8(io_salloc_req_0_ready,0,0);
        VL_OUT8(io_salloc_req_0_valid,0,0);
        VL_OUT8(io_salloc_req_0_bits_vc_sel_0_0,0,0);
        VL_OUT8(io_salloc_req_0_bits_tail,0,0);
        VL_OUT8(io_out_0_valid,0,0);
        VL_OUT8(io_out_0_bits_flit_head,0,0);
        VL_OUT8(io_out_0_bits_flit_tail,0,0);
        VL_OUT8(io_out_0_bits_flit_flow_ingress_node,1,0);
        VL_OUT8(io_debug_va_stall,1,0);
        VL_OUT8(io_debug_sa_stall,1,0);
        VL_IN8(io_in_flit_0_valid,0,0);
        VL_IN8(io_in_flit_0_bits_head,0,0);
        VL_IN8(io_in_flit_0_bits_tail,0,0);
        VL_IN8(io_in_flit_0_bits_flow_ingress_node,1,0);
        VL_IN8(io_in_flit_0_bits_flow_egress_node,1,0);
        VL_IN8(io_in_flit_0_bits_virt_channel_id,1,0);
        VL_OUT8(io_in_credit_return,3,0);
        VL_OUT8(io_in_vc_free,3,0);
        CData/*0:0*/ __PVT__route_arbiter_io_out_valid;
        CData/*1:0*/ __PVT__route_arbiter_io_out_bits_src_virt_id;
        CData/*0:0*/ __PVT__salloc_arb_io_in_1_ready;
        CData/*0:0*/ __PVT__salloc_arb_io_in_1_valid;
        CData/*0:0*/ __PVT__salloc_arb_io_in_2_ready;
        CData/*0:0*/ __PVT__salloc_arb_io_in_2_valid;
        CData/*0:0*/ __PVT__salloc_arb_io_in_3_ready;
        CData/*0:0*/ __PVT__salloc_arb_io_in_3_valid;
        CData/*0:0*/ __PVT__salloc_arb_io_out_0_bits_vc_sel_0_0;
        CData/*0:0*/ __PVT__salloc_arb_io_out_0_bits_tail;
        CData/*3:0*/ __PVT__salloc_arb_io_chosen_oh_0;
        CData/*2:0*/ __PVT__states_1_g;
        CData/*0:0*/ __PVT__states_1_vc_sel_0_0;
        CData/*1:0*/ __PVT__states_1_flow_ingress_node;
        CData/*2:0*/ __PVT__states_2_g;
        CData/*0:0*/ __PVT__states_2_vc_sel_0_0;
        CData/*1:0*/ __PVT__states_2_flow_ingress_node;
        CData/*2:0*/ __PVT__states_3_g;
        CData/*0:0*/ __PVT__states_3_vc_sel_0_0;
        CData/*1:0*/ __PVT__states_3_flow_ingress_node;
        CData/*2:0*/ __PVT___GEN_68;
        CData/*2:0*/ __PVT___GEN_69;
        CData/*2:0*/ __PVT___GEN_70;
        CData/*0:0*/ __PVT___GEN_88;
        CData/*0:0*/ __PVT___GEN_89;
        CData/*0:0*/ __PVT___GEN_90;
        CData/*3:0*/ __PVT__mask;
        CData/*3:0*/ __PVT__vcalloc_sel;
        CData/*2:0*/ __PVT___GEN_93;
        CData/*2:0*/ __PVT___GEN_94;
        CData/*2:0*/ __PVT___GEN_95;
        CData/*0:0*/ __PVT___T_35;
        CData/*0:0*/ __PVT__salloc_outs_0_valid;
        CData/*0:0*/ __PVT__salloc_outs_0_flit_head;
        CData/*0:0*/ __PVT__salloc_outs_0_flit_tail;
        CData/*1:0*/ __PVT__salloc_outs_0_flit_flow_ingress_node;
        CData/*3:0*/ __PVT__input_buffer__DOT__mem_head_qs_0_io_enq_bits_MPORT_addr;
    };
    struct {
        CData/*3:0*/ __PVT__input_buffer__DOT__mem_head_qs_1_io_enq_bits_MPORT_addr;
        CData/*3:0*/ __PVT__input_buffer__DOT__mem_head_qs_2_io_enq_bits_MPORT_addr;
        CData/*3:0*/ __PVT__input_buffer__DOT__mem_head_qs_3_io_enq_bits_MPORT_addr;
        CData/*3:0*/ __PVT__input_buffer__DOT__mem_head_MPORT_addr;
        CData/*3:0*/ __PVT__input_buffer__DOT__mem_tail_qs_0_io_enq_bits_MPORT_addr;
        CData/*3:0*/ __PVT__input_buffer__DOT__mem_tail_qs_1_io_enq_bits_MPORT_addr;
        CData/*3:0*/ __PVT__input_buffer__DOT__mem_tail_qs_2_io_enq_bits_MPORT_addr;
        CData/*3:0*/ __PVT__input_buffer__DOT__mem_tail_qs_3_io_enq_bits_MPORT_addr;
        CData/*3:0*/ __PVT__input_buffer__DOT__mem_tail_MPORT_addr;
        CData/*3:0*/ __PVT__input_buffer__DOT__mem_payload_qs_0_io_enq_bits_MPORT_addr;
        CData/*3:0*/ __PVT__input_buffer__DOT__mem_payload_qs_1_io_enq_bits_MPORT_addr;
        CData/*3:0*/ __PVT__input_buffer__DOT__mem_payload_qs_2_io_enq_bits_MPORT_addr;
        CData/*3:0*/ __PVT__input_buffer__DOT__mem_payload_qs_3_io_enq_bits_MPORT_addr;
        CData/*3:0*/ __PVT__input_buffer__DOT__mem_payload_MPORT_addr;
        CData/*0:0*/ __PVT__input_buffer__DOT__qs_0_io_enq_valid;
        CData/*0:0*/ __PVT__input_buffer__DOT__qs_1_io_enq_ready;
        CData/*0:0*/ __PVT__input_buffer__DOT__qs_1_io_enq_valid;
        CData/*0:0*/ __PVT__input_buffer__DOT__qs_2_io_enq_ready;
        CData/*0:0*/ __PVT__input_buffer__DOT__qs_2_io_enq_valid;
        CData/*0:0*/ __PVT__input_buffer__DOT__qs_3_io_enq_ready;
        CData/*0:0*/ __PVT__input_buffer__DOT__qs_3_io_enq_valid;
        CData/*3:0*/ __PVT__input_buffer__DOT__heads_0;
        CData/*3:0*/ __PVT__input_buffer__DOT__heads_1;
        CData/*3:0*/ __PVT__input_buffer__DOT__heads_2;
        CData/*3:0*/ __PVT__input_buffer__DOT__heads_3;
        CData/*3:0*/ __PVT__input_buffer__DOT__tails_0;
        CData/*3:0*/ __PVT__input_buffer__DOT__tails_1;
        CData/*3:0*/ __PVT__input_buffer__DOT__tails_2;
        CData/*3:0*/ __PVT__input_buffer__DOT__tails_3;
        CData/*0:0*/ __PVT__input_buffer__DOT__empty_0;
        CData/*0:0*/ __PVT__input_buffer__DOT__empty_1;
        CData/*0:0*/ __PVT__input_buffer__DOT__empty_2;
        CData/*0:0*/ __PVT__input_buffer__DOT__empty_3;
        CData/*0:0*/ __PVT__input_buffer__DOT__direct_to_q;
        CData/*3:0*/ __PVT__input_buffer__DOT___GEN_3;
        CData/*0:0*/ __PVT__input_buffer__DOT___tails_T_11;
        CData/*3:0*/ __PVT__input_buffer__DOT___tails_T_22;
        CData/*0:0*/ __PVT__input_buffer__DOT__can_to_q_0;
        CData/*3:0*/ __PVT__input_buffer__DOT__to_q_oh_enc;
        CData/*1:0*/ __PVT__input_buffer__DOT__to_q;
        CData/*0:0*/ __PVT__input_buffer__DOT___T_9;
        CData/*3:0*/ __PVT__input_buffer__DOT__head;
        CData/*0:0*/ __PVT__input_buffer__DOT___heads_T_7;
        CData/*3:0*/ __PVT__input_buffer__DOT___heads_T_14;
        CData/*0:0*/ input_buffer__DOT____Vlvbound_he49713b5__0;
        CData/*0:0*/ input_buffer__DOT____Vlvbound_h821c6c4f__0;
        CData/*0:0*/ __PVT__input_buffer__DOT__qs_0__DOT__maybe_full;
        CData/*0:0*/ __PVT__input_buffer__DOT__qs_0__DOT__do_enq;
        CData/*0:0*/ __PVT__input_buffer__DOT__qs_1__DOT__maybe_full;
        CData/*0:0*/ __PVT__input_buffer__DOT__qs_1__DOT__do_enq;
        CData/*0:0*/ __PVT__input_buffer__DOT__qs_1__DOT__do_deq;
        CData/*0:0*/ __PVT__input_buffer__DOT__qs_2__DOT__maybe_full;
        CData/*0:0*/ __PVT__input_buffer__DOT__qs_2__DOT__do_enq;
        CData/*0:0*/ __PVT__input_buffer__DOT__qs_2__DOT__do_deq;
        CData/*0:0*/ __PVT__input_buffer__DOT__qs_3__DOT__maybe_full;
        CData/*0:0*/ __PVT__input_buffer__DOT__qs_3__DOT__do_enq;
        CData/*0:0*/ __PVT__input_buffer__DOT__qs_3__DOT__do_deq;
        CData/*3:0*/ __PVT__salloc_arb__DOT__lock_0;
        CData/*3:0*/ __PVT__salloc_arb__DOT__mask;
        CData/*3:0*/ __PVT__salloc_arb__DOT__chosen;
        CData/*3:0*/ __PVT__salloc_arb__DOT___io_out_0_valid_T;
        CData/*0:0*/ __PVT__salloc_arb__DOT___T_17;
        CData/*4:0*/ __PVT__salloc_arb__DOT___GEN_11;
        VL_OUT64(io_out_0_bits_flit_payload,63,0);
    };
    struct {
        VL_IN64(io_in_flit_0_bits_payload,63,0);
        QData/*63:0*/ __PVT__salloc_outs_0_flit_payload;
        QData/*63:0*/ input_buffer__DOT____Vlvbound_h111e8aad__0;
        VlUnpacked<CData/*0:0*/, 15> __PVT__input_buffer__DOT__mem_head;
        VlUnpacked<CData/*0:0*/, 15> __PVT__input_buffer__DOT__mem_tail;
        VlUnpacked<QData/*63:0*/, 15> __PVT__input_buffer__DOT__mem_payload;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_buffer__DOT__qs_0__DOT__ram_head;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_buffer__DOT__qs_0__DOT__ram_tail;
        VlUnpacked<QData/*63:0*/, 1> __PVT__input_buffer__DOT__qs_0__DOT__ram_payload;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_buffer__DOT__qs_1__DOT__ram_head;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_buffer__DOT__qs_1__DOT__ram_tail;
        VlUnpacked<QData/*63:0*/, 1> __PVT__input_buffer__DOT__qs_1__DOT__ram_payload;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_buffer__DOT__qs_2__DOT__ram_head;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_buffer__DOT__qs_2__DOT__ram_tail;
        VlUnpacked<QData/*63:0*/, 1> __PVT__input_buffer__DOT__qs_2__DOT__ram_payload;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_buffer__DOT__qs_3__DOT__ram_head;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_buffer__DOT__qs_3__DOT__ram_tail;
        VlUnpacked<QData/*63:0*/, 1> __PVT__input_buffer__DOT__qs_3__DOT__ram_payload;
    };

    // INTERNAL VARIABLES
    VNoCChiselTester__Syms* const vlSymsp;

    // CONSTRUCTORS
    VNoCChiselTester_InputUnit_2(VNoCChiselTester__Syms* symsp, const char* name);
    ~VNoCChiselTester_InputUnit_2();
    VL_UNCOPYABLE(VNoCChiselTester_InputUnit_2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
