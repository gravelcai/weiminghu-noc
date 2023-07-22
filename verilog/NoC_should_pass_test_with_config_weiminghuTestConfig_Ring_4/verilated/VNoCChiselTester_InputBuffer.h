// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNoCChiselTester.h for the primary calling header

#ifndef VERILATED_VNOCCHISELTESTER_INPUTBUFFER_H_
#define VERILATED_VNOCCHISELTESTER_INPUTBUFFER_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class VNoCChiselTester__Syms;

class VNoCChiselTester_InputBuffer final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_enq_0_valid,0,0);
        VL_IN8(io_enq_0_bits_head,0,0);
        VL_IN8(io_enq_0_bits_tail,0,0);
        VL_IN8(io_enq_0_bits_virt_channel_id,1,0);
        VL_IN8(io_deq_0_ready,0,0);
        VL_OUT8(io_deq_0_valid,0,0);
        VL_OUT8(io_deq_0_bits_head,0,0);
        VL_OUT8(io_deq_0_bits_tail,0,0);
        VL_IN8(io_deq_1_ready,0,0);
        VL_OUT8(io_deq_1_valid,0,0);
        VL_OUT8(io_deq_1_bits_head,0,0);
        VL_OUT8(io_deq_1_bits_tail,0,0);
        VL_IN8(io_deq_2_ready,0,0);
        VL_OUT8(io_deq_2_valid,0,0);
        VL_OUT8(io_deq_2_bits_head,0,0);
        VL_OUT8(io_deq_2_bits_tail,0,0);
        VL_IN8(io_deq_3_ready,0,0);
        VL_OUT8(io_deq_3_valid,0,0);
        VL_OUT8(io_deq_3_bits_head,0,0);
        VL_OUT8(io_deq_3_bits_tail,0,0);
        CData/*4:0*/ __PVT__mem_head_qs_0_io_enq_bits_MPORT_addr;
        CData/*4:0*/ __PVT__mem_head_qs_1_io_enq_bits_MPORT_addr;
        CData/*4:0*/ __PVT__mem_head_qs_2_io_enq_bits_MPORT_addr;
        CData/*4:0*/ __PVT__mem_head_qs_3_io_enq_bits_MPORT_addr;
        CData/*4:0*/ __PVT__mem_head_MPORT_addr;
        CData/*4:0*/ __PVT__mem_tail_qs_0_io_enq_bits_MPORT_addr;
        CData/*4:0*/ __PVT__mem_tail_qs_1_io_enq_bits_MPORT_addr;
        CData/*4:0*/ __PVT__mem_tail_qs_2_io_enq_bits_MPORT_addr;
        CData/*4:0*/ __PVT__mem_tail_qs_3_io_enq_bits_MPORT_addr;
        CData/*4:0*/ __PVT__mem_tail_MPORT_addr;
        CData/*4:0*/ __PVT__mem_payload_qs_0_io_enq_bits_MPORT_addr;
        CData/*4:0*/ __PVT__mem_payload_qs_1_io_enq_bits_MPORT_addr;
        CData/*4:0*/ __PVT__mem_payload_qs_2_io_enq_bits_MPORT_addr;
        CData/*4:0*/ __PVT__mem_payload_qs_3_io_enq_bits_MPORT_addr;
        CData/*4:0*/ __PVT__mem_payload_MPORT_addr;
        CData/*0:0*/ __PVT__qs_0_io_enq_ready;
        CData/*0:0*/ __PVT__qs_0_io_enq_valid;
        CData/*0:0*/ __PVT__qs_1_io_enq_ready;
        CData/*0:0*/ __PVT__qs_1_io_enq_valid;
        CData/*0:0*/ __PVT__qs_2_io_enq_ready;
        CData/*0:0*/ __PVT__qs_2_io_enq_valid;
        CData/*0:0*/ __PVT__qs_3_io_enq_ready;
        CData/*0:0*/ __PVT__qs_3_io_enq_valid;
        CData/*4:0*/ __PVT__heads_0;
        CData/*4:0*/ __PVT__heads_1;
        CData/*4:0*/ __PVT__heads_2;
        CData/*4:0*/ __PVT__heads_3;
        CData/*4:0*/ __PVT__tails_0;
        CData/*4:0*/ __PVT__tails_1;
        CData/*4:0*/ __PVT__tails_2;
        CData/*4:0*/ __PVT__tails_3;
        CData/*0:0*/ __PVT__empty_0;
        CData/*0:0*/ __PVT__empty_1;
        CData/*0:0*/ __PVT__empty_2;
        CData/*0:0*/ __PVT__empty_3;
        CData/*0:0*/ __PVT__direct_to_q;
        CData/*4:0*/ __PVT___GEN_3;
        CData/*0:0*/ __PVT___tails_T_11;
        CData/*3:0*/ __PVT___tails_T_22;
        CData/*3:0*/ __PVT__to_q_oh_enc;
        CData/*1:0*/ __PVT__to_q;
        CData/*0:0*/ __PVT___T_9;
    };
    struct {
        CData/*4:0*/ __PVT__head;
        CData/*0:0*/ __PVT___heads_T_7;
        CData/*3:0*/ __PVT___heads_T_14;
        CData/*0:0*/ __Vlvbound_h44e885f1__0;
        CData/*0:0*/ __Vlvbound_had19c418__0;
        CData/*0:0*/ __PVT__qs_0__DOT__maybe_full;
        CData/*0:0*/ __PVT__qs_0__DOT__do_enq;
        CData/*0:0*/ __PVT__qs_0__DOT__do_deq;
        CData/*0:0*/ __PVT__qs_1__DOT__maybe_full;
        CData/*0:0*/ __PVT__qs_1__DOT__do_enq;
        CData/*0:0*/ __PVT__qs_1__DOT__do_deq;
        CData/*0:0*/ __PVT__qs_2__DOT__maybe_full;
        CData/*0:0*/ __PVT__qs_2__DOT__do_enq;
        CData/*0:0*/ __PVT__qs_2__DOT__do_deq;
        CData/*0:0*/ __PVT__qs_3__DOT__maybe_full;
        CData/*0:0*/ __PVT__qs_3__DOT__do_enq;
        CData/*0:0*/ __PVT__qs_3__DOT__do_deq;
        VL_IN64(io_enq_0_bits_payload,63,0);
        VL_OUT64(io_deq_0_bits_payload,63,0);
        VL_OUT64(io_deq_1_bits_payload,63,0);
        VL_OUT64(io_deq_2_bits_payload,63,0);
        VL_OUT64(io_deq_3_bits_payload,63,0);
        QData/*63:0*/ __Vlvbound_hf210c3d8__0;
        VlUnpacked<CData/*0:0*/, 20> __PVT__mem_head;
        VlUnpacked<CData/*0:0*/, 20> __PVT__mem_tail;
        VlUnpacked<QData/*63:0*/, 20> __PVT__mem_payload;
        VlUnpacked<CData/*0:0*/, 1> __PVT__qs_0__DOT__ram_head;
        VlUnpacked<CData/*0:0*/, 1> __PVT__qs_0__DOT__ram_tail;
        VlUnpacked<QData/*63:0*/, 1> __PVT__qs_0__DOT__ram_payload;
        VlUnpacked<CData/*0:0*/, 1> __PVT__qs_1__DOT__ram_head;
        VlUnpacked<CData/*0:0*/, 1> __PVT__qs_1__DOT__ram_tail;
        VlUnpacked<QData/*63:0*/, 1> __PVT__qs_1__DOT__ram_payload;
        VlUnpacked<CData/*0:0*/, 1> __PVT__qs_2__DOT__ram_head;
        VlUnpacked<CData/*0:0*/, 1> __PVT__qs_2__DOT__ram_tail;
        VlUnpacked<QData/*63:0*/, 1> __PVT__qs_2__DOT__ram_payload;
        VlUnpacked<CData/*0:0*/, 1> __PVT__qs_3__DOT__ram_head;
        VlUnpacked<CData/*0:0*/, 1> __PVT__qs_3__DOT__ram_tail;
        VlUnpacked<QData/*63:0*/, 1> __PVT__qs_3__DOT__ram_payload;
    };

    // INTERNAL VARIABLES
    VNoCChiselTester__Syms* const vlSymsp;

    // CONSTRUCTORS
    VNoCChiselTester_InputBuffer(VNoCChiselTester__Syms* symsp, const char* name);
    ~VNoCChiselTester_InputBuffer();
    VL_UNCOPYABLE(VNoCChiselTester_InputBuffer);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
