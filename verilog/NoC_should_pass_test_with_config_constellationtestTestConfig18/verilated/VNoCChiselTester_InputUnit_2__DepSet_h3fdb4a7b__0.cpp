// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNoCChiselTester.h for the primary calling header

#include "verilated.h"

#include "VNoCChiselTester_InputUnit_2.h"
#include "VNoCChiselTester__Syms.h"

VL_INLINE_OPT void VNoCChiselTester_InputUnit_2___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__0(VNoCChiselTester_InputUnit_2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNoCChiselTester_InputUnit_2___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__0\n"); );
    // Init
    CData/*7:0*/ __PVT___vcalloc_filter_T_4;
    CData/*7:0*/ __PVT__vcalloc_filter;
    CData/*3:0*/ __PVT__salloc_arb__DOT___unassigned_T;
    CData/*3:0*/ __PVT__salloc_arb__DOT__unassigned;
    CData/*7:0*/ __PVT__salloc_arb__DOT___sel_T_2;
    CData/*7:0*/ __PVT__salloc_arb__DOT__sel;
    CData/*7:0*/ __PVT__salloc_arb__DOT___choices_0_T_1;
    CData/*3:0*/ __PVT__salloc_arb__DOT___chosen_T;
    CData/*3:0*/ __Vdlyvdim0__input_buffer__DOT__mem_tail__v0;
    CData/*0:0*/ __Vdlyvval__input_buffer__DOT__mem_tail__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__mem_tail__v0;
    CData/*3:0*/ __Vdlyvdim0__input_buffer__DOT__mem_head__v0;
    CData/*0:0*/ __Vdlyvval__input_buffer__DOT__mem_head__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__mem_head__v0;
    CData/*3:0*/ __Vdlyvdim0__input_buffer__DOT__mem_payload__v0;
    QData/*63:0*/ __Vdlyvval__input_buffer__DOT__mem_payload__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__mem_payload__v0;
    CData/*0:0*/ __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__qs_0__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__qs_0__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__qs_0__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__qs_1__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__qs_1__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__qs_1__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__qs_2__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__qs_2__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__qs_2__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__qs_3__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__qs_3__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__qs_3__DOT__ram_payload__v0;
    // Body
    __Vdlyvset__input_buffer__DOT__mem_tail__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__qs_1__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__qs_2__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__qs_3__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__qs_0__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__mem_payload__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__mem_head__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__qs_1__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__qs_2__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__qs_3__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__qs_1__DOT__ram_head__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__qs_2__DOT__ram_head__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__qs_3__DOT__ram_head__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__qs_0__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__qs_0__DOT__ram_head__v0 = 0U;
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
                       & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_head)) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (0U != ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))
                                ? (IData)(vlSelf->__PVT__states_3_g)
                                : ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))
                                    ? (IData)(vlSelf->__PVT__states_2_g)
                                    : ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))
                                        ? (IData)(vlSelf->__PVT__states_1_g)
                                        : 0U))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at InputUnit.scala:197 assert(states(id).g === g_i)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__route_arbiter_io_out_valid) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (1U != ((3U == (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id))
                                ? (IData)(vlSelf->__PVT__states_3_g)
                                : ((2U == (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id))
                                    ? (IData)(vlSelf->__PVT__states_2_g)
                                    : ((1U == (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id))
                                        ? (IData)(vlSelf->__PVT__states_1_g)
                                        : 0U))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at InputUnit.scala:224 assert(states(id).g === g_r)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT___T_35) 
                      & (IData)(vlSelf->__PVT__vcalloc_sel)) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at InputUnit.scala:274 assert(states(i).g === g_v)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT___T_35) 
                       & ((IData)(vlSelf->__PVT__vcalloc_sel) 
                          >> 1U)) & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (2U != (IData)(vlSelf->__PVT__states_1_g))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at InputUnit.scala:274 assert(states(i).g === g_v)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT___T_35) 
                       & ((IData)(vlSelf->__PVT__vcalloc_sel) 
                          >> 2U)) & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (2U != (IData)(vlSelf->__PVT__states_2_g))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at InputUnit.scala:274 assert(states(i).g === g_v)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT___T_35) 
                       & ((IData)(vlSelf->__PVT__vcalloc_sel) 
                          >> 3U)) & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (2U != (IData)(vlSelf->__PVT__states_3_g))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at InputUnit.scala:274 assert(states(i).g === g_v)\n");
    }
    if ((((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
          & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_head)) 
         & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((0U != ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))
                                     ? (IData)(vlSelf->__PVT__states_3_g)
                                     : ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))
                                         ? (IData)(vlSelf->__PVT__states_2_g)
                                         : ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))
                                             ? (IData)(vlSelf->__PVT__states_1_g)
                                             : 0U)))))) {
                VL_WRITEF("[%0t] %%Error: NoCChiselTester.sv:8734: Assertion failed in %NNoCChiselTester.th.lazyNoC.router_sink_domain_3.routers.input_unit_0_from_0: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("NoCChiselTester.sv", 8734, "");
            }
        }
    }
    if (((IData)(vlSelf->__PVT__route_arbiter_io_out_valid) 
         & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((1U != ((3U == (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id))
                                     ? (IData)(vlSelf->__PVT__states_3_g)
                                     : ((2U == (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id))
                                         ? (IData)(vlSelf->__PVT__states_2_g)
                                         : ((1U == (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id))
                                             ? (IData)(vlSelf->__PVT__states_1_g)
                                             : 0U)))))) {
                VL_WRITEF("[%0t] %%Error: NoCChiselTester.sv:8738: Assertion failed in %NNoCChiselTester.th.lazyNoC.router_sink_domain_3.routers.input_unit_0_from_0: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("NoCChiselTester.sv", 8738, "");
            }
        }
    }
    if ((((IData)(vlSelf->__PVT___T_35) & (IData)(vlSelf->__PVT__vcalloc_sel)) 
         & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("[%0t] %%Error: NoCChiselTester.sv:8742: Assertion failed in %NNoCChiselTester.th.lazyNoC.router_sink_domain_3.routers.input_unit_0_from_0: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("NoCChiselTester.sv", 8742, "");
        }
    }
    if ((((IData)(vlSelf->__PVT___T_35) & ((IData)(vlSelf->__PVT__vcalloc_sel) 
                                           >> 1U)) 
         & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((2U != (IData)(vlSelf->__PVT__states_1_g)))) {
                VL_WRITEF("[%0t] %%Error: NoCChiselTester.sv:8746: Assertion failed in %NNoCChiselTester.th.lazyNoC.router_sink_domain_3.routers.input_unit_0_from_0: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("NoCChiselTester.sv", 8746, "");
            }
        }
    }
    if ((((IData)(vlSelf->__PVT___T_35) & ((IData)(vlSelf->__PVT__vcalloc_sel) 
                                           >> 2U)) 
         & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((2U != (IData)(vlSelf->__PVT__states_2_g)))) {
                VL_WRITEF("[%0t] %%Error: NoCChiselTester.sv:8750: Assertion failed in %NNoCChiselTester.th.lazyNoC.router_sink_domain_3.routers.input_unit_0_from_0: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("NoCChiselTester.sv", 8750, "");
            }
        }
    }
    if ((((IData)(vlSelf->__PVT___T_35) & ((IData)(vlSelf->__PVT__vcalloc_sel) 
                                           >> 3U)) 
         & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((2U != (IData)(vlSelf->__PVT__states_3_g)))) {
                VL_WRITEF("[%0t] %%Error: NoCChiselTester.sv:8754: Assertion failed in %NNoCChiselTester.th.lazyNoC.router_sink_domain_3.routers.input_unit_0_from_0: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("NoCChiselTester.sv", 8754, "");
            }
        }
    }
    if (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
         & (~ (IData)(vlSelf->__PVT__input_buffer__DOT__direct_to_q)))) {
        vlSelf->input_buffer__DOT____Vlvbound_h821c6c4f__0 
            = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_tail;
        if ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_tail_MPORT_addr))) {
            __Vdlyvval__input_buffer__DOT__mem_tail__v0 
                = vlSelf->input_buffer__DOT____Vlvbound_h821c6c4f__0;
            __Vdlyvset__input_buffer__DOT__mem_tail__v0 = 1U;
            __Vdlyvdim0__input_buffer__DOT__mem_tail__v0 
                = vlSelf->__PVT__input_buffer__DOT__mem_tail_MPORT_addr;
        }
        vlSelf->input_buffer__DOT____Vlvbound_h111e8aad__0 
            = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_payload;
        if ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_payload_MPORT_addr))) {
            __Vdlyvval__input_buffer__DOT__mem_payload__v0 
                = vlSelf->input_buffer__DOT____Vlvbound_h111e8aad__0;
            __Vdlyvset__input_buffer__DOT__mem_payload__v0 = 1U;
            __Vdlyvdim0__input_buffer__DOT__mem_payload__v0 
                = vlSelf->__PVT__input_buffer__DOT__mem_payload_MPORT_addr;
        }
        vlSelf->input_buffer__DOT____Vlvbound_he49713b5__0 
            = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_head;
        if ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_head_MPORT_addr))) {
            __Vdlyvval__input_buffer__DOT__mem_head__v0 
                = vlSelf->input_buffer__DOT____Vlvbound_he49713b5__0;
            __Vdlyvset__input_buffer__DOT__mem_head__v0 = 1U;
            __Vdlyvdim0__input_buffer__DOT__mem_head__v0 
                = vlSelf->__PVT__input_buffer__DOT__mem_head_MPORT_addr;
        }
    }
    vlSelf->__PVT__salloc_outs_0_flit_head = (((((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                                 & vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__ram_head
                                                 [0U]) 
                                                | (((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                                    >> 1U) 
                                                   & vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__ram_head
                                                   [0U])) 
                                               | (((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                                   >> 2U) 
                                                  & vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__ram_head
                                                  [0U])) 
                                              | (((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                                  >> 3U) 
                                                 & vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__ram_head
                                                 [0U]));
    if (((IData)(vlSelf->__PVT__input_buffer__DOT__qs_1_io_enq_ready) 
         & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_1_io_enq_valid))) {
        if (vlSelf->__PVT__input_buffer__DOT___T_9) {
            if ((2U & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))) {
                __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_tail__v0 
                    = ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_1_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__input_buffer__DOT__mem_tail
                       [vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_1_io_enq_bits_MPORT_addr]);
                __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_payload__v0 
                    = ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_1_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__input_buffer__DOT__mem_payload
                       [vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_1_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_head__v0 
                    = ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_head_qs_1_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__input_buffer__DOT__mem_head
                       [vlSelf->__PVT__input_buffer__DOT__mem_head_qs_1_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_tail;
                __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_payload;
                __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_head;
            }
        } else {
            __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_tail__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_tail;
            __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_payload;
            __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_head__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_head;
        }
        __Vdlyvset__input_buffer__DOT__qs_1__DOT__ram_tail__v0 = 1U;
        __Vdlyvset__input_buffer__DOT__qs_1__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__input_buffer__DOT__qs_1__DOT__ram_head__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__input_buffer__DOT__qs_2_io_enq_ready) 
         & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_2_io_enq_valid))) {
        if (vlSelf->__PVT__input_buffer__DOT___T_9) {
            if ((4U & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))) {
                __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_tail__v0 
                    = ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_2_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__input_buffer__DOT__mem_tail
                       [vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_2_io_enq_bits_MPORT_addr]);
                __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_payload__v0 
                    = ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_2_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__input_buffer__DOT__mem_payload
                       [vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_2_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_head__v0 
                    = ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_head_qs_2_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__input_buffer__DOT__mem_head
                       [vlSelf->__PVT__input_buffer__DOT__mem_head_qs_2_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_tail;
                __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_payload;
                __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_head;
            }
        } else {
            __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_tail__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_tail;
            __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_payload;
            __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_head__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_head;
        }
        __Vdlyvset__input_buffer__DOT__qs_2__DOT__ram_tail__v0 = 1U;
        __Vdlyvset__input_buffer__DOT__qs_2__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__input_buffer__DOT__qs_2__DOT__ram_head__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__input_buffer__DOT__qs_3_io_enq_ready) 
         & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_3_io_enq_valid))) {
        if (vlSelf->__PVT__input_buffer__DOT___T_9) {
            if ((8U & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))) {
                __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_tail__v0 
                    = ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_3_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__input_buffer__DOT__mem_tail
                       [vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_3_io_enq_bits_MPORT_addr]);
                __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_payload__v0 
                    = ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_3_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__input_buffer__DOT__mem_payload
                       [vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_3_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_head__v0 
                    = ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_head_qs_3_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__input_buffer__DOT__mem_head
                       [vlSelf->__PVT__input_buffer__DOT__mem_head_qs_3_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_tail;
                __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_payload;
                __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_head;
            }
        } else {
            __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_tail__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_tail;
            __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_payload;
            __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_head__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_head;
        }
        __Vdlyvset__input_buffer__DOT__qs_3__DOT__ram_tail__v0 = 1U;
        __Vdlyvset__input_buffer__DOT__qs_3__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__input_buffer__DOT__qs_3__DOT__ram_head__v0 = 1U;
    }
    if (((~ (IData)(vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__maybe_full)) 
         & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_0_io_enq_valid))) {
        if (vlSelf->__PVT__input_buffer__DOT___T_9) {
            if ((1U & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))) {
                __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_tail__v0 
                    = ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_0_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__input_buffer__DOT__mem_tail
                       [vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_0_io_enq_bits_MPORT_addr]);
                __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_payload__v0 
                    = ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_0_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__input_buffer__DOT__mem_payload
                       [vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_0_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_head__v0 
                    = ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_head_qs_0_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__input_buffer__DOT__mem_head
                       [vlSelf->__PVT__input_buffer__DOT__mem_head_qs_0_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_tail;
                __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_payload;
                __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_head;
            }
        } else {
            __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_tail__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_tail;
            __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_payload;
            __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_head__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_head;
        }
        __Vdlyvset__input_buffer__DOT__qs_0__DOT__ram_tail__v0 = 1U;
        __Vdlyvset__input_buffer__DOT__qs_0__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__input_buffer__DOT__qs_0__DOT__ram_head__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__input_buffer__DOT__heads_3 = 0xaU;
        vlSelf->__PVT__input_buffer__DOT__heads_0 = 0U;
        vlSelf->__PVT__input_buffer__DOT__heads_2 = 5U;
        vlSelf->__PVT__input_buffer__DOT__heads_1 = 0U;
        vlSelf->__PVT__input_buffer__DOT__tails_3 = 0xaU;
        vlSelf->__PVT__input_buffer__DOT__tails_2 = 5U;
        vlSelf->__PVT__input_buffer__DOT__tails_1 = 0U;
        vlSelf->__PVT__input_buffer__DOT__tails_0 = 0U;
        vlSelf->__PVT__salloc_arb__DOT__lock_0 = 0U;
        vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__maybe_full = 0U;
        vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__maybe_full = 0U;
        vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__maybe_full = 0U;
        vlSelf->__PVT__mask = 0U;
        vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__maybe_full = 0U;
        vlSelf->__PVT__states_3_g = 0U;
        vlSelf->__PVT__states_2_g = 0U;
        vlSelf->__PVT__states_1_g = 0U;
    } else {
        if (vlSelf->__PVT__input_buffer__DOT___T_9) {
            if ((3U == (IData)(vlSelf->__PVT__input_buffer__DOT__to_q))) {
                vlSelf->__PVT__input_buffer__DOT__heads_3 
                    = (0xfU & ((IData)(vlSelf->__PVT__input_buffer__DOT___heads_T_7)
                                ? (IData)(vlSelf->__PVT__input_buffer__DOT___heads_T_14)
                                : ((IData)(1U) + (IData)(vlSelf->__PVT__input_buffer__DOT__head))));
            }
            if ((0U == (IData)(vlSelf->__PVT__input_buffer__DOT__to_q))) {
                vlSelf->__PVT__input_buffer__DOT__heads_0 
                    = (0xfU & ((IData)(vlSelf->__PVT__input_buffer__DOT___heads_T_7)
                                ? (IData)(vlSelf->__PVT__input_buffer__DOT___heads_T_14)
                                : ((IData)(1U) + (IData)(vlSelf->__PVT__input_buffer__DOT__head))));
            }
            if ((2U == (IData)(vlSelf->__PVT__input_buffer__DOT__to_q))) {
                vlSelf->__PVT__input_buffer__DOT__heads_2 
                    = (0xfU & ((IData)(vlSelf->__PVT__input_buffer__DOT___heads_T_7)
                                ? (IData)(vlSelf->__PVT__input_buffer__DOT___heads_T_14)
                                : ((IData)(1U) + (IData)(vlSelf->__PVT__input_buffer__DOT__head))));
            }
            if ((1U == (IData)(vlSelf->__PVT__input_buffer__DOT__to_q))) {
                vlSelf->__PVT__input_buffer__DOT__heads_1 
                    = (0xfU & ((IData)(vlSelf->__PVT__input_buffer__DOT___heads_T_7)
                                ? (IData)(vlSelf->__PVT__input_buffer__DOT___heads_T_14)
                                : ((IData)(1U) + (IData)(vlSelf->__PVT__input_buffer__DOT__head))));
            }
        }
        if (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
             & (~ (IData)(vlSelf->__PVT__input_buffer__DOT__direct_to_q)))) {
            if ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))) {
                vlSelf->__PVT__input_buffer__DOT__tails_3 
                    = (0xfU & ((IData)(vlSelf->__PVT__input_buffer__DOT___tails_T_11)
                                ? (IData)(vlSelf->__PVT__input_buffer__DOT___tails_T_22)
                                : ((IData)(1U) + (IData)(vlSelf->__PVT__input_buffer__DOT___GEN_3))));
            }
            if ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))) {
                vlSelf->__PVT__input_buffer__DOT__tails_2 
                    = (0xfU & ((IData)(vlSelf->__PVT__input_buffer__DOT___tails_T_11)
                                ? (IData)(vlSelf->__PVT__input_buffer__DOT___tails_T_22)
                                : ((IData)(1U) + (IData)(vlSelf->__PVT__input_buffer__DOT___GEN_3))));
            }
            if ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))) {
                vlSelf->__PVT__input_buffer__DOT__tails_1 
                    = (0xfU & ((IData)(vlSelf->__PVT__input_buffer__DOT___tails_T_11)
                                ? (IData)(vlSelf->__PVT__input_buffer__DOT___tails_T_22)
                                : ((IData)(1U) + (IData)(vlSelf->__PVT__input_buffer__DOT___GEN_3))));
            }
            if ((0U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))) {
                vlSelf->__PVT__input_buffer__DOT__tails_0 
                    = (0xfU & ((IData)(vlSelf->__PVT__input_buffer__DOT___tails_T_11)
                                ? (IData)(vlSelf->__PVT__input_buffer__DOT___tails_T_22)
                                : ((IData)(1U) + (IData)(vlSelf->__PVT__input_buffer__DOT___GEN_3))));
            }
        }
        if (vlSelf->__PVT__salloc_arb__DOT___T_17) {
            vlSelf->__PVT__salloc_arb__DOT__lock_0 
                = ((IData)(vlSelf->__PVT__salloc_arb__DOT__chosen) 
                   & (~ ((vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__ram_tail
                          [0U] << 3U) | ((vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__ram_tail
                                          [0U] << 2U) 
                                         | (vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__ram_tail
                                            [0U] << 1U)))));
        }
        if (((IData)(vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__do_deq))) {
            vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__maybe_full 
                = vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__do_deq))) {
            vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__maybe_full 
                = vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__do_deq))) {
            vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__maybe_full 
                = vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__do_enq;
        }
        if (vlSelf->__PVT__route_arbiter_io_out_valid) {
            vlSelf->__PVT__mask = (0xfU & (((IData)(1U) 
                                            << (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id)) 
                                           - (IData)(1U)));
        } else if ((((2U == (IData)(vlSelf->__PVT__states_1_g)) 
                     | (2U == (IData)(vlSelf->__PVT__states_2_g))) 
                    | (2U == (IData)(vlSelf->__PVT__states_3_g)))) {
            vlSelf->__PVT__mask = ((((1U & (IData)(vlSelf->__PVT__vcalloc_sel)) 
                                     | ((2U & (IData)(vlSelf->__PVT__vcalloc_sel))
                                         ? 3U : 0U)) 
                                    | ((4U & (IData)(vlSelf->__PVT__vcalloc_sel))
                                        ? 7U : 0U)) 
                                   | ((8U & (IData)(vlSelf->__PVT__vcalloc_sel))
                                       ? 0xfU : 0U));
        }
        if (vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__do_enq) {
            vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__maybe_full 
                = vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__do_enq;
        }
        vlSelf->__PVT__states_3_g = ((((IData)(vlSelf->__PVT__salloc_arb_io_in_3_ready) 
                                       & (IData)(vlSelf->__PVT__salloc_arb_io_in_3_valid)) 
                                      & vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__ram_tail
                                      [0U]) ? 0U : 
                                     ((IData)(vlSelf->__PVT___T_35)
                                       ? ((8U & (IData)(vlSelf->__PVT__vcalloc_sel))
                                           ? 3U : (IData)(vlSelf->__PVT___GEN_95))
                                       : (IData)(vlSelf->__PVT___GEN_95)));
        vlSelf->__PVT__states_2_g = ((((IData)(vlSelf->__PVT__salloc_arb_io_in_2_ready) 
                                       & (IData)(vlSelf->__PVT__salloc_arb_io_in_2_valid)) 
                                      & vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__ram_tail
                                      [0U]) ? 0U : 
                                     ((IData)(vlSelf->__PVT___T_35)
                                       ? ((4U & (IData)(vlSelf->__PVT__vcalloc_sel))
                                           ? 3U : (IData)(vlSelf->__PVT___GEN_94))
                                       : (IData)(vlSelf->__PVT___GEN_94)));
        vlSelf->__PVT__states_1_g = ((((IData)(vlSelf->__PVT__salloc_arb_io_in_1_ready) 
                                       & (IData)(vlSelf->__PVT__salloc_arb_io_in_1_valid)) 
                                      & vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__ram_tail
                                      [0U]) ? 0U : 
                                     ((IData)(vlSelf->__PVT___T_35)
                                       ? ((2U & (IData)(vlSelf->__PVT__vcalloc_sel))
                                           ? 3U : (IData)(vlSelf->__PVT___GEN_93))
                                       : (IData)(vlSelf->__PVT___GEN_93)));
    }
    vlSelf->__PVT__salloc_outs_0_flit_tail = (((((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                                 & vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__ram_tail
                                                 [0U]) 
                                                | (((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                                    >> 1U) 
                                                   & vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__ram_tail
                                                   [0U])) 
                                               | (((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                                   >> 2U) 
                                                  & vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__ram_tail
                                                  [0U])) 
                                              | (((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                                  >> 3U) 
                                                 & vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__ram_tail
                                                 [0U]));
    vlSelf->__PVT__salloc_outs_0_flit_payload = (((
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0))
                                                     ? 
                                                    vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__ram_payload
                                                    [0U]
                                                     : 0ULL) 
                                                   | ((2U 
                                                       & (IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0))
                                                       ? 
                                                      vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__ram_payload
                                                      [0U]
                                                       : 0ULL)) 
                                                  | ((4U 
                                                      & (IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0))
                                                      ? 
                                                     vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__ram_payload
                                                     [0U]
                                                      : 0ULL)) 
                                                 | ((8U 
                                                     & (IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0))
                                                     ? 
                                                    vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__ram_payload
                                                    [0U]
                                                     : 0ULL));
    vlSelf->__PVT__salloc_outs_0_valid = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator_io_req_0_0_ready) 
                                          & (0U != (IData)(vlSelf->__PVT__salloc_arb__DOT___io_out_0_valid_T)));
    vlSelf->__PVT__salloc_outs_0_flit_flow_ingress_node 
        = ((((2U & (IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0))
              ? (IData)(vlSelf->__PVT__states_1_flow_ingress_node)
              : 0U) | ((4U & (IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0))
                        ? (IData)(vlSelf->__PVT__states_2_flow_ingress_node)
                        : 0U)) | ((8U & (IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0))
                                   ? (IData)(vlSelf->__PVT__states_3_flow_ingress_node)
                                   : 0U));
    vlSelf->__PVT__salloc_arb__DOT__mask = (0xfU & (IData)(vlSelf->__PVT__salloc_arb__DOT___GEN_11));
    if (vlSelf->__PVT___T_35) {
        vlSelf->__PVT__states_2_vc_sel_0_0 = ((4U & (IData)(vlSelf->__PVT__vcalloc_sel))
                                               ? (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_0)
                                               : (IData)(vlSelf->__PVT___GEN_89));
        vlSelf->__PVT__states_1_vc_sel_0_0 = ((2U & (IData)(vlSelf->__PVT__vcalloc_sel))
                                               ? (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_0)
                                               : (IData)(vlSelf->__PVT___GEN_88));
        vlSelf->__PVT__states_3_vc_sel_0_0 = ((8U & (IData)(vlSelf->__PVT__vcalloc_sel))
                                               ? (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_0_vc_sel_0_0)
                                               : (IData)(vlSelf->__PVT___GEN_90));
    } else {
        vlSelf->__PVT__states_2_vc_sel_0_0 = vlSelf->__PVT___GEN_89;
        vlSelf->__PVT__states_1_vc_sel_0_0 = vlSelf->__PVT___GEN_88;
        vlSelf->__PVT__states_3_vc_sel_0_0 = vlSelf->__PVT___GEN_90;
    }
    if (__Vdlyvset__input_buffer__DOT__mem_tail__v0) {
        vlSelf->__PVT__input_buffer__DOT__mem_tail[__Vdlyvdim0__input_buffer__DOT__mem_tail__v0] 
            = __Vdlyvval__input_buffer__DOT__mem_tail__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__qs_0__DOT__ram_tail__v0) {
        vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__ram_tail[0U] 
            = __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__qs_1__DOT__ram_payload__v0) {
        vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__ram_payload[0U] 
            = __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__qs_2__DOT__ram_payload__v0) {
        vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__ram_payload[0U] 
            = __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__qs_3__DOT__ram_payload__v0) {
        vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__ram_payload[0U] 
            = __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__qs_1__DOT__ram_head__v0) {
        vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__ram_head[0U] 
            = __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_head__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__qs_2__DOT__ram_head__v0) {
        vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__ram_head[0U] 
            = __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_head__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__qs_3__DOT__ram_head__v0) {
        vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__ram_head[0U] 
            = __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_head__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__qs_0__DOT__ram_payload__v0) {
        vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__ram_payload[0U] 
            = __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__mem_payload__v0) {
        vlSelf->__PVT__input_buffer__DOT__mem_payload[__Vdlyvdim0__input_buffer__DOT__mem_payload__v0] 
            = __Vdlyvval__input_buffer__DOT__mem_payload__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__qs_0__DOT__ram_head__v0) {
        vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__ram_head[0U] 
            = __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_head__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__mem_head__v0) {
        vlSelf->__PVT__input_buffer__DOT__mem_head[__Vdlyvdim0__input_buffer__DOT__mem_head__v0] 
            = __Vdlyvval__input_buffer__DOT__mem_head__v0;
    }
    vlSelf->__PVT__input_buffer__DOT__empty_3 = ((IData)(vlSelf->__PVT__input_buffer__DOT__heads_3) 
                                                 == (IData)(vlSelf->__PVT__input_buffer__DOT__tails_3));
    vlSelf->__PVT__input_buffer__DOT__empty_2 = ((IData)(vlSelf->__PVT__input_buffer__DOT__heads_2) 
                                                 == (IData)(vlSelf->__PVT__input_buffer__DOT__tails_2));
    vlSelf->__PVT__input_buffer__DOT__empty_1 = ((IData)(vlSelf->__PVT__input_buffer__DOT__heads_1) 
                                                 == (IData)(vlSelf->__PVT__input_buffer__DOT__tails_1));
    vlSelf->__PVT__input_buffer__DOT__empty_0 = ((IData)(vlSelf->__PVT__input_buffer__DOT__heads_0) 
                                                 == (IData)(vlSelf->__PVT__input_buffer__DOT__tails_0));
    if (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
         & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_head))) {
        if ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))) {
            vlSelf->__PVT__states_1_flow_ingress_node 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_flow_ingress_node;
        }
        if ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))) {
            vlSelf->__PVT__states_2_flow_ingress_node 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_flow_ingress_node;
        }
        if ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))) {
            vlSelf->__PVT__states_3_flow_ingress_node 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_flow_ingress_node;
        }
    }
    if (__Vdlyvset__input_buffer__DOT__qs_3__DOT__ram_tail__v0) {
        vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__ram_tail[0U] 
            = __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__qs_2__DOT__ram_tail__v0) {
        vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__ram_tail[0U] 
            = __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__qs_1__DOT__ram_tail__v0) {
        vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__ram_tail[0U] 
            = __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_tail__v0;
    }
    vlSelf->__PVT__input_buffer__DOT__can_to_q_0 = 
        (1U & ((~ (IData)(vlSelf->__PVT__input_buffer__DOT__empty_0)) 
               & (~ (IData)(vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__maybe_full))));
    vlSelf->__PVT__salloc_arb_io_in_3_valid = (((3U 
                                                 == (IData)(vlSelf->__PVT__states_3_g)) 
                                                & ((IData)(vlSelf->__PVT__states_3_vc_sel_0_0) 
                                                   & (0U 
                                                      == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__egress_unit_0_to_1__DOT__q_io_count)))) 
                                               & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__maybe_full));
    vlSelf->__PVT__salloc_arb_io_in_2_valid = (((3U 
                                                 == (IData)(vlSelf->__PVT__states_2_g)) 
                                                & ((IData)(vlSelf->__PVT__states_2_vc_sel_0_0) 
                                                   & (0U 
                                                      == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__egress_unit_0_to_1__DOT__q_io_count)))) 
                                               & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__maybe_full));
    vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id 
        = ((1U == (IData)(vlSelf->__PVT__states_1_g))
            ? 1U : ((1U == (IData)(vlSelf->__PVT__states_2_g))
                     ? 2U : 3U));
    vlSelf->__PVT__route_arbiter_io_out_valid = (((1U 
                                                   == (IData)(vlSelf->__PVT__states_1_g)) 
                                                  | (1U 
                                                     == (IData)(vlSelf->__PVT__states_2_g))) 
                                                 | (1U 
                                                    == (IData)(vlSelf->__PVT__states_3_g)));
    vlSelf->io_vcalloc_req_valid = (((2U == (IData)(vlSelf->__PVT__states_1_g)) 
                                     | (2U == (IData)(vlSelf->__PVT__states_2_g))) 
                                    | (2U == (IData)(vlSelf->__PVT__states_3_g)));
    __PVT___vcalloc_filter_T_4 = (((2U == (IData)(vlSelf->__PVT__states_3_g)) 
                                   << 7U) | (((2U == (IData)(vlSelf->__PVT__states_2_g)) 
                                              << 6U) 
                                             | (((2U 
                                                  == (IData)(vlSelf->__PVT__states_1_g)) 
                                                 << 5U) 
                                                | ((((2U 
                                                      == (IData)(vlSelf->__PVT__states_3_g)) 
                                                     << 3U) 
                                                    | (((2U 
                                                         == (IData)(vlSelf->__PVT__states_2_g)) 
                                                        << 2U) 
                                                       | ((2U 
                                                           == (IData)(vlSelf->__PVT__states_1_g)) 
                                                          << 1U))) 
                                                   & (~ (IData)(vlSelf->__PVT__mask))))));
    vlSelf->__PVT__salloc_arb_io_in_1_valid = (((3U 
                                                 == (IData)(vlSelf->__PVT__states_1_g)) 
                                                & ((IData)(vlSelf->__PVT__states_1_vc_sel_0_0) 
                                                   & (0U 
                                                      == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__egress_unit_0_to_1__DOT__q_io_count)))) 
                                               & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__maybe_full));
    __PVT__vcalloc_filter = ((1U & (IData)(__PVT___vcalloc_filter_T_4))
                              ? 1U : ((2U & (IData)(__PVT___vcalloc_filter_T_4))
                                       ? 2U : ((4U 
                                                & (IData)(__PVT___vcalloc_filter_T_4))
                                                ? 4U
                                                : (
                                                   (8U 
                                                    & (IData)(__PVT___vcalloc_filter_T_4))
                                                    ? 8U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(__PVT___vcalloc_filter_T_4))
                                                     ? 0x10U
                                                     : 
                                                    ((0x20U 
                                                      & (IData)(__PVT___vcalloc_filter_T_4))
                                                      ? 0x20U
                                                      : 
                                                     ((0x40U 
                                                       & (IData)(__PVT___vcalloc_filter_T_4))
                                                       ? 0x40U
                                                       : 
                                                      ((0x80U 
                                                        & (IData)(__PVT___vcalloc_filter_T_4))
                                                        ? 0x80U
                                                        : 0U))))))));
    __PVT__salloc_arb__DOT___unassigned_T = (((IData)(vlSelf->__PVT__salloc_arb_io_in_3_valid) 
                                              << 3U) 
                                             | (((IData)(vlSelf->__PVT__salloc_arb_io_in_2_valid) 
                                                 << 2U) 
                                                | ((IData)(vlSelf->__PVT__salloc_arb_io_in_1_valid) 
                                                   << 1U)));
    vlSelf->__PVT__vcalloc_sel = (0xfU & ((IData)(__PVT__vcalloc_filter) 
                                          | ((IData)(__PVT__vcalloc_filter) 
                                             >> 4U)));
    __PVT__salloc_arb__DOT___chosen_T = ((IData)(__PVT__salloc_arb__DOT___unassigned_T) 
                                         & (IData)(vlSelf->__PVT__salloc_arb__DOT__lock_0));
    __PVT__salloc_arb__DOT__unassigned = ((IData)(__PVT__salloc_arb__DOT___unassigned_T) 
                                          & (~ (IData)(vlSelf->__PVT__salloc_arb__DOT__lock_0)));
    __PVT__salloc_arb__DOT___sel_T_2 = (((IData)(__PVT__salloc_arb__DOT__unassigned) 
                                         << 4U) | ((IData)(__PVT__salloc_arb__DOT__unassigned) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__salloc_arb__DOT__mask))));
    __PVT__salloc_arb__DOT__sel = ((1U & (IData)(__PVT__salloc_arb__DOT___sel_T_2))
                                    ? 1U : ((2U & (IData)(__PVT__salloc_arb__DOT___sel_T_2))
                                             ? 2U : 
                                            ((4U & (IData)(__PVT__salloc_arb__DOT___sel_T_2))
                                              ? 4U : 
                                             ((8U & (IData)(__PVT__salloc_arb__DOT___sel_T_2))
                                               ? 8U
                                               : ((0x10U 
                                                   & (IData)(__PVT__salloc_arb__DOT___sel_T_2))
                                                   ? 0x10U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(__PVT__salloc_arb__DOT___sel_T_2))
                                                    ? 0x20U
                                                    : 
                                                   ((0x40U 
                                                     & (IData)(__PVT__salloc_arb__DOT___sel_T_2))
                                                     ? 0x40U
                                                     : 
                                                    ((0x80U 
                                                      & (IData)(__PVT__salloc_arb__DOT___sel_T_2))
                                                      ? 0x80U
                                                      : 0U))))))));
    __PVT__salloc_arb__DOT___choices_0_T_1 = ((IData)(__PVT__salloc_arb__DOT__sel) 
                                              | (0xfU 
                                                 & ((IData)(__PVT__salloc_arb__DOT__sel) 
                                                    >> 4U)));
    if ((0U != (IData)(__PVT__salloc_arb__DOT___chosen_T))) {
        vlSelf->__PVT__salloc_arb_io_chosen_oh_0 = 
            (0xfU & (IData)(vlSelf->__PVT__salloc_arb__DOT__lock_0));
        vlSelf->__PVT__salloc_arb__DOT__chosen = (0xfU 
                                                  & (IData)(vlSelf->__PVT__salloc_arb__DOT__lock_0));
    } else {
        vlSelf->__PVT__salloc_arb_io_chosen_oh_0 = 
            (0xfU & (IData)(__PVT__salloc_arb__DOT___choices_0_T_1));
        vlSelf->__PVT__salloc_arb__DOT__chosen = (0xfU 
                                                  & (IData)(__PVT__salloc_arb__DOT___choices_0_T_1));
    }
    vlSelf->__PVT__salloc_arb_io_out_0_bits_tail = 
        (((((IData)(vlSelf->__PVT__salloc_arb__DOT__chosen) 
            >> 1U) & vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__ram_tail
           [0U]) | (((IData)(vlSelf->__PVT__salloc_arb__DOT__chosen) 
                     >> 2U) & vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__ram_tail
                    [0U])) | (((IData)(vlSelf->__PVT__salloc_arb__DOT__chosen) 
                               >> 3U) & vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__ram_tail
                              [0U]));
    vlSelf->__PVT__salloc_arb_io_out_0_bits_vc_sel_0_0 
        = (((((IData)(vlSelf->__PVT__salloc_arb__DOT__chosen) 
              >> 1U) & (IData)(vlSelf->__PVT__states_1_vc_sel_0_0)) 
            | (((IData)(vlSelf->__PVT__salloc_arb__DOT__chosen) 
                >> 2U) & (IData)(vlSelf->__PVT__states_2_vc_sel_0_0))) 
           | (((IData)(vlSelf->__PVT__salloc_arb__DOT__chosen) 
               >> 3U) & (IData)(vlSelf->__PVT__states_3_vc_sel_0_0)));
    vlSelf->__PVT__salloc_arb__DOT___io_out_0_valid_T 
        = ((IData)(__PVT__salloc_arb__DOT___unassigned_T) 
           & (IData)(vlSelf->__PVT__salloc_arb__DOT__chosen));
}

VL_INLINE_OPT void VNoCChiselTester_InputUnit_2___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__1(VNoCChiselTester_InputUnit_2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNoCChiselTester_InputUnit_2___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__1\n"); );
    // Init
    CData/*0:0*/ __PVT___GEN_45;
    CData/*0:0*/ __PVT___GEN_46;
    CData/*0:0*/ __PVT___GEN_47;
    CData/*0:0*/ __PVT___io_in_credit_return_T;
    CData/*3:0*/ __PVT__input_buffer__DOT___GEN_2;
    CData/*0:0*/ __PVT__input_buffer__DOT___GEN_51;
    CData/*0:0*/ __PVT__input_buffer__DOT___GEN_55;
    CData/*0:0*/ __PVT__input_buffer__DOT___GEN_59;
    CData/*0:0*/ __PVT__input_buffer__DOT___GEN_63;
    CData/*0:0*/ __PVT__input_buffer__DOT__can_to_q_1;
    CData/*0:0*/ __PVT__input_buffer__DOT__can_to_q_2;
    CData/*0:0*/ __PVT__input_buffer__DOT__can_to_q_3;
    CData/*3:0*/ __PVT__input_buffer__DOT___head_T_3;
    CData/*3:0*/ __PVT__input_buffer__DOT___head_T_5;
    // Body
    vlSelf->__PVT__input_buffer__DOT___tails_T_22 = 
        (((4U & ((IData)(1U) << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)))
           ? 5U : 0U) | ((8U & ((IData)(1U) << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)))
                          ? 0xaU : 0U));
    if (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
         & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_head))) {
        __PVT___GEN_45 = ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
                          | ((1U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
                             & (IData)(vlSelf->__PVT__states_1_vc_sel_0_0)));
        __PVT___GEN_46 = ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
                          | ((2U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
                             & (IData)(vlSelf->__PVT__states_2_vc_sel_0_0)));
        __PVT___GEN_47 = ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
                          | ((3U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
                             & (IData)(vlSelf->__PVT__states_3_vc_sel_0_0)));
    } else {
        __PVT___GEN_45 = vlSelf->__PVT__states_1_vc_sel_0_0;
        __PVT___GEN_46 = vlSelf->__PVT__states_2_vc_sel_0_0;
        __PVT___GEN_47 = vlSelf->__PVT__states_3_vc_sel_0_0;
    }
    vlSelf->__PVT___GEN_68 = ((1U == (IData)(vlSelf->__PVT__states_1_g))
                               ? 2U : (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
                                        & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_head))
                                        ? ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))
                                            ? ((3U 
                                                == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_flow_egress_node))
                                                ? 2U
                                                : 1U)
                                            : (IData)(vlSelf->__PVT__states_1_g))
                                        : (IData)(vlSelf->__PVT__states_1_g)));
    vlSelf->__PVT___GEN_69 = (((1U != (IData)(vlSelf->__PVT__states_1_g)) 
                               & (1U == (IData)(vlSelf->__PVT__states_2_g)))
                               ? 2U : (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
                                        & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_head))
                                        ? ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))
                                            ? ((3U 
                                                == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_flow_egress_node))
                                                ? 2U
                                                : 1U)
                                            : (IData)(vlSelf->__PVT__states_2_g))
                                        : (IData)(vlSelf->__PVT__states_2_g)));
    vlSelf->__PVT___GEN_70 = (((~ ((1U == (IData)(vlSelf->__PVT__states_1_g)) 
                                   | (1U == (IData)(vlSelf->__PVT__states_2_g)))) 
                               & (1U == (IData)(vlSelf->__PVT__states_3_g)))
                               ? 2U : (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
                                        & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_head))
                                        ? ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))
                                            ? ((3U 
                                                == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_flit_flow_egress_node))
                                                ? 2U
                                                : 1U)
                                            : (IData)(vlSelf->__PVT__states_3_g))
                                        : (IData)(vlSelf->__PVT__states_3_g)));
    __PVT__input_buffer__DOT___GEN_2 = ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))
                                         ? (IData)(vlSelf->__PVT__input_buffer__DOT__tails_2)
                                         : ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))
                                             ? (IData)(vlSelf->__PVT__input_buffer__DOT__tails_1)
                                             : (IData)(vlSelf->__PVT__input_buffer__DOT__tails_0)));
    vlSelf->__PVT___T_35 = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                            & (IData)(vlSelf->io_vcalloc_req_valid));
    vlSelf->__PVT__salloc_arb__DOT___T_17 = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator_io_req_0_0_ready) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__salloc_arb__DOT___io_out_0_valid_T)));
    vlSelf->__PVT__salloc_arb_io_in_1_ready = (((IData)(vlSelf->__PVT__salloc_arb__DOT__chosen) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator_io_req_0_0_ready));
    vlSelf->__PVT__salloc_arb_io_in_2_ready = (((IData)(vlSelf->__PVT__salloc_arb__DOT__chosen) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator_io_req_0_0_ready));
    vlSelf->__PVT__salloc_arb_io_in_3_ready = (((IData)(vlSelf->__PVT__salloc_arb__DOT__chosen) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator_io_req_0_0_ready));
    __PVT___io_in_credit_return_T = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator_io_req_0_0_ready) 
                                     & (0U != (IData)(vlSelf->__PVT__salloc_arb__DOT___io_out_0_valid_T)));
    if (vlSelf->__PVT__route_arbiter_io_out_valid) {
        vlSelf->__PVT___GEN_88 = ((1U != (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id)) 
                                  & (IData)(__PVT___GEN_45));
        vlSelf->__PVT___GEN_89 = ((2U != (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id)) 
                                  & (IData)(__PVT___GEN_46));
        vlSelf->__PVT___GEN_90 = ((3U != (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id)) 
                                  & (IData)(__PVT___GEN_47));
    } else {
        vlSelf->__PVT___GEN_88 = __PVT___GEN_45;
        vlSelf->__PVT___GEN_89 = __PVT___GEN_46;
        vlSelf->__PVT___GEN_90 = __PVT___GEN_47;
    }
    vlSelf->__PVT___GEN_93 = ((((2U == (IData)(vlSelf->__PVT__states_1_g)) 
                                & ((IData)(vlSelf->__PVT__vcalloc_sel) 
                                   >> 1U)) & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel))
                               ? 3U : ((IData)(vlSelf->__PVT__route_arbiter_io_out_valid)
                                        ? ((1U == (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id))
                                            ? 2U : (IData)(vlSelf->__PVT___GEN_68))
                                        : (IData)(vlSelf->__PVT___GEN_68)));
    vlSelf->__PVT___GEN_94 = ((((2U == (IData)(vlSelf->__PVT__states_2_g)) 
                                & ((IData)(vlSelf->__PVT__vcalloc_sel) 
                                   >> 2U)) & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel))
                               ? 3U : ((IData)(vlSelf->__PVT__route_arbiter_io_out_valid)
                                        ? ((2U == (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id))
                                            ? 2U : (IData)(vlSelf->__PVT___GEN_69))
                                        : (IData)(vlSelf->__PVT___GEN_69)));
    vlSelf->__PVT___GEN_95 = ((((2U == (IData)(vlSelf->__PVT__states_3_g)) 
                                & ((IData)(vlSelf->__PVT__vcalloc_sel) 
                                   >> 3U)) & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel))
                               ? 3U : ((IData)(vlSelf->__PVT__route_arbiter_io_out_valid)
                                        ? ((3U == (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id))
                                            ? 2U : (IData)(vlSelf->__PVT___GEN_70))
                                        : (IData)(vlSelf->__PVT___GEN_70)));
    if ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))) {
        vlSelf->__PVT__input_buffer__DOT__mem_head_MPORT_addr 
            = vlSelf->__PVT__input_buffer__DOT__tails_3;
        vlSelf->__PVT__input_buffer__DOT__mem_tail_MPORT_addr 
            = vlSelf->__PVT__input_buffer__DOT__tails_3;
        vlSelf->__PVT__input_buffer__DOT__mem_payload_MPORT_addr 
            = vlSelf->__PVT__input_buffer__DOT__tails_3;
        vlSelf->__PVT__input_buffer__DOT___GEN_3 = vlSelf->__PVT__input_buffer__DOT__tails_3;
    } else {
        vlSelf->__PVT__input_buffer__DOT__mem_head_MPORT_addr 
            = __PVT__input_buffer__DOT___GEN_2;
        vlSelf->__PVT__input_buffer__DOT__mem_tail_MPORT_addr 
            = __PVT__input_buffer__DOT___GEN_2;
        vlSelf->__PVT__input_buffer__DOT__mem_payload_MPORT_addr 
            = __PVT__input_buffer__DOT___GEN_2;
        vlSelf->__PVT__input_buffer__DOT___GEN_3 = __PVT__input_buffer__DOT___GEN_2;
    }
    vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__do_deq 
        = ((IData)(vlSelf->__PVT__salloc_arb_io_in_1_ready) 
           & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__maybe_full));
    vlSelf->__PVT__input_buffer__DOT__qs_1_io_enq_ready 
        = (1U & ((IData)(vlSelf->__PVT__salloc_arb_io_in_1_ready) 
                 | (~ (IData)(vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__maybe_full))));
    vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__do_deq 
        = ((IData)(vlSelf->__PVT__salloc_arb_io_in_2_ready) 
           & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__maybe_full));
    vlSelf->__PVT__input_buffer__DOT__qs_2_io_enq_ready 
        = (1U & ((IData)(vlSelf->__PVT__salloc_arb_io_in_2_ready) 
                 | (~ (IData)(vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__maybe_full))));
    vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__do_deq 
        = ((IData)(vlSelf->__PVT__salloc_arb_io_in_3_ready) 
           & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__maybe_full));
    vlSelf->__PVT__input_buffer__DOT__qs_3_io_enq_ready 
        = (1U & ((IData)(vlSelf->__PVT__salloc_arb_io_in_3_ready) 
                 | (~ (IData)(vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__maybe_full))));
    vlSelf->io_in_credit_return = ((IData)(__PVT___io_in_credit_return_T)
                                    ? (IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0)
                                    : 0U);
    vlSelf->io_in_vc_free = (((IData)(__PVT___io_in_credit_return_T) 
                              & (((((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                    & vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__ram_tail
                                    [0U]) | (((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                              >> 1U) 
                                             & vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__ram_tail
                                             [0U])) 
                                  | (((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                      >> 2U) & vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__ram_tail
                                     [0U])) | (((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                                >> 3U) 
                                               & vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__ram_tail
                                               [0U])))
                              ? (IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0)
                              : 0U);
    vlSelf->__PVT__input_buffer__DOT___tails_T_11 = 
        ((IData)(vlSelf->__PVT__input_buffer__DOT___GEN_3) 
         == ((((2U & ((IData)(1U) << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)))
                ? 4U : 0U) | ((4U & ((IData)(1U) << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)))
                               ? 9U : 0U)) | ((8U & 
                                               ((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)))
                                               ? 0xeU
                                               : 0U)));
    __PVT__input_buffer__DOT__can_to_q_1 = ((~ (IData)(vlSelf->__PVT__input_buffer__DOT__empty_1)) 
                                            & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_1_io_enq_ready));
    __PVT__input_buffer__DOT__can_to_q_2 = ((~ (IData)(vlSelf->__PVT__input_buffer__DOT__empty_2)) 
                                            & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_2_io_enq_ready));
    vlSelf->__PVT__input_buffer__DOT__direct_to_q = 
        (((((0xfU & (((IData)(1U) << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
                     & (~ (IData)(vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__maybe_full)))) 
            | (7U & ((((IData)(1U) << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
                      >> 1U) & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_1_io_enq_ready)))) 
           | (3U & ((((IData)(1U) << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
                     >> 2U) & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_2_io_enq_ready)))) 
          | ((IData)(vlSelf->__PVT__input_buffer__DOT__qs_3_io_enq_ready) 
             & (((IData)(1U) << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
                >> 3U))) & ((((0xfU & (((IData)(1U) 
                                        << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
                                       & (IData)(vlSelf->__PVT__input_buffer__DOT__empty_0))) 
                              | (7U & ((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
                                        >> 1U) & (IData)(vlSelf->__PVT__input_buffer__DOT__empty_1)))) 
                             | (3U & ((((IData)(1U) 
                                        << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
                                       >> 2U) & (IData)(vlSelf->__PVT__input_buffer__DOT__empty_2)))) 
                            | ((IData)(vlSelf->__PVT__input_buffer__DOT__empty_3) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel)) 
                                  >> 3U))));
    __PVT__input_buffer__DOT__can_to_q_3 = ((~ (IData)(vlSelf->__PVT__input_buffer__DOT__empty_3)) 
                                            & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_3_io_enq_ready));
    __PVT__input_buffer__DOT___GEN_51 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
                                             & (~ (IData)(vlSelf->__PVT__input_buffer__DOT__direct_to_q)))) 
                                         & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
                                             & (IData)(vlSelf->__PVT__input_buffer__DOT__direct_to_q)) 
                                            & (0U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))));
    __PVT__input_buffer__DOT___GEN_55 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
                                             & (~ (IData)(vlSelf->__PVT__input_buffer__DOT__direct_to_q)))) 
                                         & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
                                             & (IData)(vlSelf->__PVT__input_buffer__DOT__direct_to_q)) 
                                            & (1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))));
    __PVT__input_buffer__DOT___GEN_59 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
                                             & (~ (IData)(vlSelf->__PVT__input_buffer__DOT__direct_to_q)))) 
                                         & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
                                             & (IData)(vlSelf->__PVT__input_buffer__DOT__direct_to_q)) 
                                            & (2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))));
    __PVT__input_buffer__DOT___GEN_63 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
                                             & (~ (IData)(vlSelf->__PVT__input_buffer__DOT__direct_to_q)))) 
                                         & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_io_out_1_0_valid) 
                                             & (IData)(vlSelf->__PVT__input_buffer__DOT__direct_to_q)) 
                                            & (3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__ingress_unit_0_from_0__DOT__out_bundle_bits_out_virt_channel))));
    vlSelf->__PVT__input_buffer__DOT___T_9 = ((((IData)(vlSelf->__PVT__input_buffer__DOT__can_to_q_0) 
                                                | (IData)(__PVT__input_buffer__DOT__can_to_q_1)) 
                                               | (IData)(__PVT__input_buffer__DOT__can_to_q_2)) 
                                              | (IData)(__PVT__input_buffer__DOT__can_to_q_3));
    vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc = 
        ((IData)(vlSelf->__PVT__input_buffer__DOT__can_to_q_0)
          ? 1U : ((IData)(__PVT__input_buffer__DOT__can_to_q_1)
                   ? 2U : ((IData)(__PVT__input_buffer__DOT__can_to_q_2)
                            ? 4U : ((IData)(__PVT__input_buffer__DOT__can_to_q_3)
                                     ? 8U : 0U))));
    vlSelf->__PVT__input_buffer__DOT__to_q = (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & ((IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc) 
                                                            >> 2U)))) 
                                               << 1U) 
                                              | (IData)(
                                                        (0U 
                                                         != 
                                                         (0xaU 
                                                          & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc)))));
    vlSelf->__PVT__input_buffer__DOT___heads_T_14 = 
        (((4U & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))
           ? 5U : 0U) | ((8U & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))
                          ? 0xaU : 0U));
    if (vlSelf->__PVT__input_buffer__DOT___T_9) {
        vlSelf->__PVT__input_buffer__DOT__qs_0_io_enq_valid 
            = (1U & ((IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc) 
                     | (IData)(__PVT__input_buffer__DOT___GEN_51)));
        vlSelf->__PVT__input_buffer__DOT__qs_1_io_enq_valid 
            = (1U & (((IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc) 
                      >> 1U) | (IData)(__PVT__input_buffer__DOT___GEN_55)));
        vlSelf->__PVT__input_buffer__DOT__qs_2_io_enq_valid 
            = (1U & (((IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc) 
                      >> 2U) | (IData)(__PVT__input_buffer__DOT___GEN_59)));
        vlSelf->__PVT__input_buffer__DOT__qs_3_io_enq_valid 
            = (1U & (((IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc) 
                      >> 3U) | (IData)(__PVT__input_buffer__DOT___GEN_63)));
    } else {
        vlSelf->__PVT__input_buffer__DOT__qs_0_io_enq_valid 
            = (1U & (IData)(__PVT__input_buffer__DOT___GEN_51));
        vlSelf->__PVT__input_buffer__DOT__qs_1_io_enq_valid 
            = (1U & (IData)(__PVT__input_buffer__DOT___GEN_55));
        vlSelf->__PVT__input_buffer__DOT__qs_2_io_enq_valid 
            = (1U & (IData)(__PVT__input_buffer__DOT___GEN_59));
        vlSelf->__PVT__input_buffer__DOT__qs_3_io_enq_valid 
            = (1U & (IData)(__PVT__input_buffer__DOT___GEN_63));
    }
    __PVT__input_buffer__DOT___head_T_3 = ((8U & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))
                                            ? (IData)(vlSelf->__PVT__input_buffer__DOT__heads_3)
                                            : 0U);
    __PVT__input_buffer__DOT___head_T_5 = ((((1U & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))
                                              ? (IData)(vlSelf->__PVT__input_buffer__DOT__heads_0)
                                              : 0U) 
                                            | ((2U 
                                                & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))
                                                ? (IData)(vlSelf->__PVT__input_buffer__DOT__heads_1)
                                                : 0U)) 
                                           | ((4U & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))
                                               ? (IData)(vlSelf->__PVT__input_buffer__DOT__heads_2)
                                               : 0U));
    vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__do_enq 
        = ((~ (IData)(vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__maybe_full)) 
           & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_0_io_enq_valid));
    vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__do_enq 
        = ((IData)(vlSelf->__PVT__input_buffer__DOT__qs_1_io_enq_ready) 
           & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_1_io_enq_valid));
    vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__do_enq 
        = ((IData)(vlSelf->__PVT__input_buffer__DOT__qs_2_io_enq_ready) 
           & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_2_io_enq_valid));
    vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__do_enq 
        = ((IData)(vlSelf->__PVT__input_buffer__DOT__qs_3_io_enq_ready) 
           & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_3_io_enq_valid));
    vlSelf->__PVT__input_buffer__DOT__mem_head_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
           | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT__mem_head_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
           | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT__mem_head_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
           | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT__mem_head_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
           | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
           | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
           | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
           | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
           | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
           | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
           | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
           | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
           | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT__head = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
                                              | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT___heads_T_7 = 
        ((IData)(vlSelf->__PVT__input_buffer__DOT__head) 
         == ((((2U & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))
                ? 4U : 0U) | ((4U & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))
                               ? 9U : 0U)) | ((8U & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))
                                               ? 0xeU
                                               : 0U)));
}

VL_INLINE_OPT void VNoCChiselTester_InputUnit_2___combo__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__0(VNoCChiselTester_InputUnit_2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNoCChiselTester_InputUnit_2___combo__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__0\n"); );
    // Body
    vlSelf->__PVT__salloc_arb__DOT___GEN_11 = ((IData)(vlSymsp->TOP.reset)
                                                ? 0U
                                                : ((IData)(vlSelf->__PVT__salloc_arb__DOT___T_17)
                                                    ? 
                                                   ((((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                                      | (7U 
                                                         & ((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                                            >> 1U))) 
                                                     | (3U 
                                                        & ((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                                           >> 2U))) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                                          >> 3U)))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0xfU 
                                                      & (~ (IData)(vlSelf->__PVT__salloc_arb__DOT__mask))))
                                                     ? 0U
                                                     : 
                                                    (1U 
                                                     | ((IData)(vlSelf->__PVT__salloc_arb__DOT__mask) 
                                                        << 1U)))));
}

VL_INLINE_OPT void VNoCChiselTester_InputUnit_2___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__0(VNoCChiselTester_InputUnit_2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNoCChiselTester_InputUnit_2___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__0\n"); );
    // Init
    CData/*7:0*/ __PVT___vcalloc_filter_T_4;
    CData/*7:0*/ __PVT__vcalloc_filter;
    CData/*3:0*/ __PVT__salloc_arb__DOT___unassigned_T;
    CData/*3:0*/ __PVT__salloc_arb__DOT__unassigned;
    CData/*7:0*/ __PVT__salloc_arb__DOT___sel_T_2;
    CData/*7:0*/ __PVT__salloc_arb__DOT__sel;
    CData/*7:0*/ __PVT__salloc_arb__DOT___choices_0_T_1;
    CData/*3:0*/ __PVT__salloc_arb__DOT___chosen_T;
    CData/*3:0*/ __Vdlyvdim0__input_buffer__DOT__mem_tail__v0;
    CData/*0:0*/ __Vdlyvval__input_buffer__DOT__mem_tail__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__mem_tail__v0;
    CData/*3:0*/ __Vdlyvdim0__input_buffer__DOT__mem_head__v0;
    CData/*0:0*/ __Vdlyvval__input_buffer__DOT__mem_head__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__mem_head__v0;
    CData/*3:0*/ __Vdlyvdim0__input_buffer__DOT__mem_payload__v0;
    QData/*63:0*/ __Vdlyvval__input_buffer__DOT__mem_payload__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__mem_payload__v0;
    CData/*0:0*/ __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__qs_0__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__qs_0__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__qs_0__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__qs_1__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__qs_1__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__qs_1__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__qs_2__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__qs_2__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__qs_2__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__qs_3__DOT__ram_head__v0;
    CData/*0:0*/ __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_tail__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__qs_3__DOT__ram_tail__v0;
    QData/*63:0*/ __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_payload__v0;
    CData/*0:0*/ __Vdlyvset__input_buffer__DOT__qs_3__DOT__ram_payload__v0;
    // Body
    __Vdlyvset__input_buffer__DOT__mem_tail__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__qs_1__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__qs_2__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__qs_3__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__qs_0__DOT__ram_tail__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__mem_payload__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__mem_head__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__qs_1__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__qs_2__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__qs_3__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__qs_1__DOT__ram_head__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__qs_2__DOT__ram_head__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__qs_3__DOT__ram_head__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__qs_0__DOT__ram_payload__v0 = 0U;
    __Vdlyvset__input_buffer__DOT__qs_0__DOT__ram_head__v0 = 0U;
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
                       & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_head)) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (0U != ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel))
                                ? (IData)(vlSelf->__PVT__states_3_g)
                                : ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel))
                                    ? (IData)(vlSelf->__PVT__states_2_g)
                                    : ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel))
                                        ? (IData)(vlSelf->__PVT__states_1_g)
                                        : 0U))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at InputUnit.scala:197 assert(states(id).g === g_i)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__route_arbiter_io_out_valid) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (1U != ((3U == (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id))
                                ? (IData)(vlSelf->__PVT__states_3_g)
                                : ((2U == (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id))
                                    ? (IData)(vlSelf->__PVT__states_2_g)
                                    : ((1U == (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id))
                                        ? (IData)(vlSelf->__PVT__states_1_g)
                                        : 0U))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at InputUnit.scala:224 assert(states(id).g === g_r)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT___T_35) 
                      & (IData)(vlSelf->__PVT__vcalloc_sel)) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at InputUnit.scala:274 assert(states(i).g === g_v)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT___T_35) 
                       & ((IData)(vlSelf->__PVT__vcalloc_sel) 
                          >> 1U)) & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (2U != (IData)(vlSelf->__PVT__states_1_g))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at InputUnit.scala:274 assert(states(i).g === g_v)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT___T_35) 
                       & ((IData)(vlSelf->__PVT__vcalloc_sel) 
                          >> 2U)) & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (2U != (IData)(vlSelf->__PVT__states_2_g))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at InputUnit.scala:274 assert(states(i).g === g_v)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT___T_35) 
                       & ((IData)(vlSelf->__PVT__vcalloc_sel) 
                          >> 3U)) & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (2U != (IData)(vlSelf->__PVT__states_3_g))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at InputUnit.scala:274 assert(states(i).g === g_v)\n");
    }
    if ((((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
          & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_head)) 
         & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((0U != ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel))
                                     ? (IData)(vlSelf->__PVT__states_3_g)
                                     : ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel))
                                         ? (IData)(vlSelf->__PVT__states_2_g)
                                         : ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel))
                                             ? (IData)(vlSelf->__PVT__states_1_g)
                                             : 0U)))))) {
                VL_WRITEF("[%0t] %%Error: NoCChiselTester.sv:8734: Assertion failed in %NNoCChiselTester.th.lazyNoC.router_sink_domain_3.routers.input_unit_1_from_2: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("NoCChiselTester.sv", 8734, "");
            }
        }
    }
    if (((IData)(vlSelf->__PVT__route_arbiter_io_out_valid) 
         & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((1U != ((3U == (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id))
                                     ? (IData)(vlSelf->__PVT__states_3_g)
                                     : ((2U == (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id))
                                         ? (IData)(vlSelf->__PVT__states_2_g)
                                         : ((1U == (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id))
                                             ? (IData)(vlSelf->__PVT__states_1_g)
                                             : 0U)))))) {
                VL_WRITEF("[%0t] %%Error: NoCChiselTester.sv:8738: Assertion failed in %NNoCChiselTester.th.lazyNoC.router_sink_domain_3.routers.input_unit_1_from_2: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("NoCChiselTester.sv", 8738, "");
            }
        }
    }
    if ((((IData)(vlSelf->__PVT___T_35) & (IData)(vlSelf->__PVT__vcalloc_sel)) 
         & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("[%0t] %%Error: NoCChiselTester.sv:8742: Assertion failed in %NNoCChiselTester.th.lazyNoC.router_sink_domain_3.routers.input_unit_1_from_2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("NoCChiselTester.sv", 8742, "");
        }
    }
    if ((((IData)(vlSelf->__PVT___T_35) & ((IData)(vlSelf->__PVT__vcalloc_sel) 
                                           >> 1U)) 
         & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((2U != (IData)(vlSelf->__PVT__states_1_g)))) {
                VL_WRITEF("[%0t] %%Error: NoCChiselTester.sv:8746: Assertion failed in %NNoCChiselTester.th.lazyNoC.router_sink_domain_3.routers.input_unit_1_from_2: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("NoCChiselTester.sv", 8746, "");
            }
        }
    }
    if ((((IData)(vlSelf->__PVT___T_35) & ((IData)(vlSelf->__PVT__vcalloc_sel) 
                                           >> 2U)) 
         & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((2U != (IData)(vlSelf->__PVT__states_2_g)))) {
                VL_WRITEF("[%0t] %%Error: NoCChiselTester.sv:8750: Assertion failed in %NNoCChiselTester.th.lazyNoC.router_sink_domain_3.routers.input_unit_1_from_2: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("NoCChiselTester.sv", 8750, "");
            }
        }
    }
    if ((((IData)(vlSelf->__PVT___T_35) & ((IData)(vlSelf->__PVT__vcalloc_sel) 
                                           >> 3U)) 
         & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((2U != (IData)(vlSelf->__PVT__states_3_g)))) {
                VL_WRITEF("[%0t] %%Error: NoCChiselTester.sv:8754: Assertion failed in %NNoCChiselTester.th.lazyNoC.router_sink_domain_3.routers.input_unit_1_from_2: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("NoCChiselTester.sv", 8754, "");
            }
        }
    }
    if (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
         & (~ (IData)(vlSelf->__PVT__input_buffer__DOT__direct_to_q)))) {
        vlSelf->input_buffer__DOT____Vlvbound_h821c6c4f__0 
            = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_tail;
        if ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_tail_MPORT_addr))) {
            __Vdlyvval__input_buffer__DOT__mem_tail__v0 
                = vlSelf->input_buffer__DOT____Vlvbound_h821c6c4f__0;
            __Vdlyvset__input_buffer__DOT__mem_tail__v0 = 1U;
            __Vdlyvdim0__input_buffer__DOT__mem_tail__v0 
                = vlSelf->__PVT__input_buffer__DOT__mem_tail_MPORT_addr;
        }
        vlSelf->input_buffer__DOT____Vlvbound_h111e8aad__0 
            = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_payload;
        if ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_payload_MPORT_addr))) {
            __Vdlyvval__input_buffer__DOT__mem_payload__v0 
                = vlSelf->input_buffer__DOT____Vlvbound_h111e8aad__0;
            __Vdlyvset__input_buffer__DOT__mem_payload__v0 = 1U;
            __Vdlyvdim0__input_buffer__DOT__mem_payload__v0 
                = vlSelf->__PVT__input_buffer__DOT__mem_payload_MPORT_addr;
        }
        vlSelf->input_buffer__DOT____Vlvbound_he49713b5__0 
            = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_head;
        if ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_head_MPORT_addr))) {
            __Vdlyvval__input_buffer__DOT__mem_head__v0 
                = vlSelf->input_buffer__DOT____Vlvbound_he49713b5__0;
            __Vdlyvset__input_buffer__DOT__mem_head__v0 = 1U;
            __Vdlyvdim0__input_buffer__DOT__mem_head__v0 
                = vlSelf->__PVT__input_buffer__DOT__mem_head_MPORT_addr;
        }
    }
    vlSelf->__PVT__salloc_outs_0_flit_head = (((((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                                 & vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__ram_head
                                                 [0U]) 
                                                | (((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                                    >> 1U) 
                                                   & vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__ram_head
                                                   [0U])) 
                                               | (((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                                   >> 2U) 
                                                  & vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__ram_head
                                                  [0U])) 
                                              | (((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                                  >> 3U) 
                                                 & vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__ram_head
                                                 [0U]));
    if (((IData)(vlSelf->__PVT__input_buffer__DOT__qs_1_io_enq_ready) 
         & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_1_io_enq_valid))) {
        if (vlSelf->__PVT__input_buffer__DOT___T_9) {
            if ((2U & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))) {
                __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_tail__v0 
                    = ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_1_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__input_buffer__DOT__mem_tail
                       [vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_1_io_enq_bits_MPORT_addr]);
                __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_payload__v0 
                    = ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_1_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__input_buffer__DOT__mem_payload
                       [vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_1_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_head__v0 
                    = ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_head_qs_1_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__input_buffer__DOT__mem_head
                       [vlSelf->__PVT__input_buffer__DOT__mem_head_qs_1_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_tail;
                __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_payload;
                __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_head;
            }
        } else {
            __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_tail__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_tail;
            __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_payload;
            __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_head__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_head;
        }
        __Vdlyvset__input_buffer__DOT__qs_1__DOT__ram_tail__v0 = 1U;
        __Vdlyvset__input_buffer__DOT__qs_1__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__input_buffer__DOT__qs_1__DOT__ram_head__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__input_buffer__DOT__qs_2_io_enq_ready) 
         & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_2_io_enq_valid))) {
        if (vlSelf->__PVT__input_buffer__DOT___T_9) {
            if ((4U & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))) {
                __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_tail__v0 
                    = ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_2_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__input_buffer__DOT__mem_tail
                       [vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_2_io_enq_bits_MPORT_addr]);
                __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_payload__v0 
                    = ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_2_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__input_buffer__DOT__mem_payload
                       [vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_2_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_head__v0 
                    = ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_head_qs_2_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__input_buffer__DOT__mem_head
                       [vlSelf->__PVT__input_buffer__DOT__mem_head_qs_2_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_tail;
                __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_payload;
                __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_head;
            }
        } else {
            __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_tail__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_tail;
            __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_payload;
            __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_head__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_head;
        }
        __Vdlyvset__input_buffer__DOT__qs_2__DOT__ram_tail__v0 = 1U;
        __Vdlyvset__input_buffer__DOT__qs_2__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__input_buffer__DOT__qs_2__DOT__ram_head__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__input_buffer__DOT__qs_3_io_enq_ready) 
         & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_3_io_enq_valid))) {
        if (vlSelf->__PVT__input_buffer__DOT___T_9) {
            if ((8U & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))) {
                __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_tail__v0 
                    = ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_3_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__input_buffer__DOT__mem_tail
                       [vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_3_io_enq_bits_MPORT_addr]);
                __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_payload__v0 
                    = ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_3_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__input_buffer__DOT__mem_payload
                       [vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_3_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_head__v0 
                    = ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_head_qs_3_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__input_buffer__DOT__mem_head
                       [vlSelf->__PVT__input_buffer__DOT__mem_head_qs_3_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_tail;
                __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_payload;
                __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_head;
            }
        } else {
            __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_tail__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_tail;
            __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_payload;
            __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_head__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_head;
        }
        __Vdlyvset__input_buffer__DOT__qs_3__DOT__ram_tail__v0 = 1U;
        __Vdlyvset__input_buffer__DOT__qs_3__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__input_buffer__DOT__qs_3__DOT__ram_head__v0 = 1U;
    }
    if (((~ (IData)(vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__maybe_full)) 
         & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_0_io_enq_valid))) {
        if (vlSelf->__PVT__input_buffer__DOT___T_9) {
            if ((1U & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))) {
                __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_tail__v0 
                    = ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_0_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__input_buffer__DOT__mem_tail
                       [vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_0_io_enq_bits_MPORT_addr]);
                __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_payload__v0 
                    = ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_0_io_enq_bits_MPORT_addr))
                        ? vlSelf->__PVT__input_buffer__DOT__mem_payload
                       [vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_0_io_enq_bits_MPORT_addr]
                        : 0ULL);
                __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_head__v0 
                    = ((0xeU >= (IData)(vlSelf->__PVT__input_buffer__DOT__mem_head_qs_0_io_enq_bits_MPORT_addr)) 
                       & vlSelf->__PVT__input_buffer__DOT__mem_head
                       [vlSelf->__PVT__input_buffer__DOT__mem_head_qs_0_io_enq_bits_MPORT_addr]);
            } else {
                __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_tail__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_tail;
                __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_payload__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_payload;
                __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_head__v0 
                    = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_head;
            }
        } else {
            __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_tail__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_tail;
            __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_payload__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_payload;
            __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_head__v0 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_head;
        }
        __Vdlyvset__input_buffer__DOT__qs_0__DOT__ram_tail__v0 = 1U;
        __Vdlyvset__input_buffer__DOT__qs_0__DOT__ram_payload__v0 = 1U;
        __Vdlyvset__input_buffer__DOT__qs_0__DOT__ram_head__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__input_buffer__DOT__heads_3 = 0xaU;
        vlSelf->__PVT__input_buffer__DOT__heads_0 = 0U;
        vlSelf->__PVT__input_buffer__DOT__heads_2 = 5U;
        vlSelf->__PVT__input_buffer__DOT__heads_1 = 0U;
        vlSelf->__PVT__input_buffer__DOT__tails_3 = 0xaU;
        vlSelf->__PVT__input_buffer__DOT__tails_2 = 5U;
        vlSelf->__PVT__input_buffer__DOT__tails_1 = 0U;
        vlSelf->__PVT__input_buffer__DOT__tails_0 = 0U;
        vlSelf->__PVT__salloc_arb__DOT__lock_0 = 0U;
        vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__maybe_full = 0U;
        vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__maybe_full = 0U;
        vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__maybe_full = 0U;
        vlSelf->__PVT__mask = 0U;
        vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__maybe_full = 0U;
        vlSelf->__PVT__states_3_g = 0U;
        vlSelf->__PVT__states_2_g = 0U;
        vlSelf->__PVT__states_1_g = 0U;
    } else {
        if (vlSelf->__PVT__input_buffer__DOT___T_9) {
            if ((3U == (IData)(vlSelf->__PVT__input_buffer__DOT__to_q))) {
                vlSelf->__PVT__input_buffer__DOT__heads_3 
                    = (0xfU & ((IData)(vlSelf->__PVT__input_buffer__DOT___heads_T_7)
                                ? (IData)(vlSelf->__PVT__input_buffer__DOT___heads_T_14)
                                : ((IData)(1U) + (IData)(vlSelf->__PVT__input_buffer__DOT__head))));
            }
            if ((0U == (IData)(vlSelf->__PVT__input_buffer__DOT__to_q))) {
                vlSelf->__PVT__input_buffer__DOT__heads_0 
                    = (0xfU & ((IData)(vlSelf->__PVT__input_buffer__DOT___heads_T_7)
                                ? (IData)(vlSelf->__PVT__input_buffer__DOT___heads_T_14)
                                : ((IData)(1U) + (IData)(vlSelf->__PVT__input_buffer__DOT__head))));
            }
            if ((2U == (IData)(vlSelf->__PVT__input_buffer__DOT__to_q))) {
                vlSelf->__PVT__input_buffer__DOT__heads_2 
                    = (0xfU & ((IData)(vlSelf->__PVT__input_buffer__DOT___heads_T_7)
                                ? (IData)(vlSelf->__PVT__input_buffer__DOT___heads_T_14)
                                : ((IData)(1U) + (IData)(vlSelf->__PVT__input_buffer__DOT__head))));
            }
            if ((1U == (IData)(vlSelf->__PVT__input_buffer__DOT__to_q))) {
                vlSelf->__PVT__input_buffer__DOT__heads_1 
                    = (0xfU & ((IData)(vlSelf->__PVT__input_buffer__DOT___heads_T_7)
                                ? (IData)(vlSelf->__PVT__input_buffer__DOT___heads_T_14)
                                : ((IData)(1U) + (IData)(vlSelf->__PVT__input_buffer__DOT__head))));
            }
        }
        if (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
             & (~ (IData)(vlSelf->__PVT__input_buffer__DOT__direct_to_q)))) {
            if ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel))) {
                vlSelf->__PVT__input_buffer__DOT__tails_3 
                    = (0xfU & ((IData)(vlSelf->__PVT__input_buffer__DOT___tails_T_11)
                                ? (IData)(vlSelf->__PVT__input_buffer__DOT___tails_T_22)
                                : ((IData)(1U) + (IData)(vlSelf->__PVT__input_buffer__DOT___GEN_3))));
            }
            if ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel))) {
                vlSelf->__PVT__input_buffer__DOT__tails_2 
                    = (0xfU & ((IData)(vlSelf->__PVT__input_buffer__DOT___tails_T_11)
                                ? (IData)(vlSelf->__PVT__input_buffer__DOT___tails_T_22)
                                : ((IData)(1U) + (IData)(vlSelf->__PVT__input_buffer__DOT___GEN_3))));
            }
            if ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel))) {
                vlSelf->__PVT__input_buffer__DOT__tails_1 
                    = (0xfU & ((IData)(vlSelf->__PVT__input_buffer__DOT___tails_T_11)
                                ? (IData)(vlSelf->__PVT__input_buffer__DOT___tails_T_22)
                                : ((IData)(1U) + (IData)(vlSelf->__PVT__input_buffer__DOT___GEN_3))));
            }
            if ((0U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel))) {
                vlSelf->__PVT__input_buffer__DOT__tails_0 
                    = (0xfU & ((IData)(vlSelf->__PVT__input_buffer__DOT___tails_T_11)
                                ? (IData)(vlSelf->__PVT__input_buffer__DOT___tails_T_22)
                                : ((IData)(1U) + (IData)(vlSelf->__PVT__input_buffer__DOT___GEN_3))));
            }
        }
        if (vlSelf->__PVT__salloc_arb__DOT___T_17) {
            vlSelf->__PVT__salloc_arb__DOT__lock_0 
                = ((IData)(vlSelf->__PVT__salloc_arb__DOT__chosen) 
                   & (~ ((vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__ram_tail
                          [0U] << 3U) | ((vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__ram_tail
                                          [0U] << 2U) 
                                         | (vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__ram_tail
                                            [0U] << 1U)))));
        }
        if (((IData)(vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__do_deq))) {
            vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__maybe_full 
                = vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__do_deq))) {
            vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__maybe_full 
                = vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__do_deq))) {
            vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__maybe_full 
                = vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__do_enq;
        }
        if (vlSelf->__PVT__route_arbiter_io_out_valid) {
            vlSelf->__PVT__mask = (0xfU & (((IData)(1U) 
                                            << (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id)) 
                                           - (IData)(1U)));
        } else if ((((2U == (IData)(vlSelf->__PVT__states_1_g)) 
                     | (2U == (IData)(vlSelf->__PVT__states_2_g))) 
                    | (2U == (IData)(vlSelf->__PVT__states_3_g)))) {
            vlSelf->__PVT__mask = ((((1U & (IData)(vlSelf->__PVT__vcalloc_sel)) 
                                     | ((2U & (IData)(vlSelf->__PVT__vcalloc_sel))
                                         ? 3U : 0U)) 
                                    | ((4U & (IData)(vlSelf->__PVT__vcalloc_sel))
                                        ? 7U : 0U)) 
                                   | ((8U & (IData)(vlSelf->__PVT__vcalloc_sel))
                                       ? 0xfU : 0U));
        }
        if (vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__do_enq) {
            vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__maybe_full 
                = vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__do_enq;
        }
        vlSelf->__PVT__states_3_g = ((((IData)(vlSelf->__PVT__salloc_arb_io_in_3_ready) 
                                       & (IData)(vlSelf->__PVT__salloc_arb_io_in_3_valid)) 
                                      & vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__ram_tail
                                      [0U]) ? 0U : 
                                     ((IData)(vlSelf->__PVT___T_35)
                                       ? ((8U & (IData)(vlSelf->__PVT__vcalloc_sel))
                                           ? 3U : (IData)(vlSelf->__PVT___GEN_95))
                                       : (IData)(vlSelf->__PVT___GEN_95)));
        vlSelf->__PVT__states_2_g = ((((IData)(vlSelf->__PVT__salloc_arb_io_in_2_ready) 
                                       & (IData)(vlSelf->__PVT__salloc_arb_io_in_2_valid)) 
                                      & vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__ram_tail
                                      [0U]) ? 0U : 
                                     ((IData)(vlSelf->__PVT___T_35)
                                       ? ((4U & (IData)(vlSelf->__PVT__vcalloc_sel))
                                           ? 3U : (IData)(vlSelf->__PVT___GEN_94))
                                       : (IData)(vlSelf->__PVT___GEN_94)));
        vlSelf->__PVT__states_1_g = ((((IData)(vlSelf->__PVT__salloc_arb_io_in_1_ready) 
                                       & (IData)(vlSelf->__PVT__salloc_arb_io_in_1_valid)) 
                                      & vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__ram_tail
                                      [0U]) ? 0U : 
                                     ((IData)(vlSelf->__PVT___T_35)
                                       ? ((2U & (IData)(vlSelf->__PVT__vcalloc_sel))
                                           ? 3U : (IData)(vlSelf->__PVT___GEN_93))
                                       : (IData)(vlSelf->__PVT___GEN_93)));
    }
    vlSelf->__PVT__salloc_outs_0_flit_tail = (((((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                                 & vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__ram_tail
                                                 [0U]) 
                                                | (((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                                    >> 1U) 
                                                   & vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__ram_tail
                                                   [0U])) 
                                               | (((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                                   >> 2U) 
                                                  & vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__ram_tail
                                                  [0U])) 
                                              | (((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                                  >> 3U) 
                                                 & vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__ram_tail
                                                 [0U]));
    vlSelf->__PVT__salloc_outs_0_flit_payload = (((
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0))
                                                     ? 
                                                    vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__ram_payload
                                                    [0U]
                                                     : 0ULL) 
                                                   | ((2U 
                                                       & (IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0))
                                                       ? 
                                                      vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__ram_payload
                                                      [0U]
                                                       : 0ULL)) 
                                                  | ((4U 
                                                      & (IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0))
                                                      ? 
                                                     vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__ram_payload
                                                     [0U]
                                                      : 0ULL)) 
                                                 | ((8U 
                                                     & (IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0))
                                                     ? 
                                                    vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__ram_payload
                                                    [0U]
                                                     : 0ULL));
    vlSelf->__PVT__salloc_outs_0_valid = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator_io_req_1_0_ready) 
                                          & (0U != (IData)(vlSelf->__PVT__salloc_arb__DOT___io_out_0_valid_T)));
    vlSelf->__PVT__salloc_outs_0_flit_flow_ingress_node 
        = ((((2U & (IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0))
              ? (IData)(vlSelf->__PVT__states_1_flow_ingress_node)
              : 0U) | ((4U & (IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0))
                        ? (IData)(vlSelf->__PVT__states_2_flow_ingress_node)
                        : 0U)) | ((8U & (IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0))
                                   ? (IData)(vlSelf->__PVT__states_3_flow_ingress_node)
                                   : 0U));
    vlSelf->__PVT__salloc_arb__DOT__mask = (0xfU & (IData)(vlSelf->__PVT__salloc_arb__DOT___GEN_11));
    if (vlSelf->__PVT___T_35) {
        vlSelf->__PVT__states_2_vc_sel_0_0 = ((4U & (IData)(vlSelf->__PVT__vcalloc_sel))
                                               ? (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_0)
                                               : (IData)(vlSelf->__PVT___GEN_89));
        vlSelf->__PVT__states_1_vc_sel_0_0 = ((2U & (IData)(vlSelf->__PVT__vcalloc_sel))
                                               ? (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_0)
                                               : (IData)(vlSelf->__PVT___GEN_88));
        vlSelf->__PVT__states_3_vc_sel_0_0 = ((8U & (IData)(vlSelf->__PVT__vcalloc_sel))
                                               ? (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator_io_resp_1_vc_sel_0_0)
                                               : (IData)(vlSelf->__PVT___GEN_90));
    } else {
        vlSelf->__PVT__states_2_vc_sel_0_0 = vlSelf->__PVT___GEN_89;
        vlSelf->__PVT__states_1_vc_sel_0_0 = vlSelf->__PVT___GEN_88;
        vlSelf->__PVT__states_3_vc_sel_0_0 = vlSelf->__PVT___GEN_90;
    }
    if (__Vdlyvset__input_buffer__DOT__mem_tail__v0) {
        vlSelf->__PVT__input_buffer__DOT__mem_tail[__Vdlyvdim0__input_buffer__DOT__mem_tail__v0] 
            = __Vdlyvval__input_buffer__DOT__mem_tail__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__qs_0__DOT__ram_tail__v0) {
        vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__ram_tail[0U] 
            = __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__qs_1__DOT__ram_payload__v0) {
        vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__ram_payload[0U] 
            = __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__qs_2__DOT__ram_payload__v0) {
        vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__ram_payload[0U] 
            = __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__qs_3__DOT__ram_payload__v0) {
        vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__ram_payload[0U] 
            = __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__qs_1__DOT__ram_head__v0) {
        vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__ram_head[0U] 
            = __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_head__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__qs_2__DOT__ram_head__v0) {
        vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__ram_head[0U] 
            = __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_head__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__qs_3__DOT__ram_head__v0) {
        vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__ram_head[0U] 
            = __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_head__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__qs_0__DOT__ram_payload__v0) {
        vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__ram_payload[0U] 
            = __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_payload__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__mem_payload__v0) {
        vlSelf->__PVT__input_buffer__DOT__mem_payload[__Vdlyvdim0__input_buffer__DOT__mem_payload__v0] 
            = __Vdlyvval__input_buffer__DOT__mem_payload__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__qs_0__DOT__ram_head__v0) {
        vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__ram_head[0U] 
            = __Vdlyvval__input_buffer__DOT__qs_0__DOT__ram_head__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__mem_head__v0) {
        vlSelf->__PVT__input_buffer__DOT__mem_head[__Vdlyvdim0__input_buffer__DOT__mem_head__v0] 
            = __Vdlyvval__input_buffer__DOT__mem_head__v0;
    }
    vlSelf->__PVT__input_buffer__DOT__empty_3 = ((IData)(vlSelf->__PVT__input_buffer__DOT__heads_3) 
                                                 == (IData)(vlSelf->__PVT__input_buffer__DOT__tails_3));
    vlSelf->__PVT__input_buffer__DOT__empty_2 = ((IData)(vlSelf->__PVT__input_buffer__DOT__heads_2) 
                                                 == (IData)(vlSelf->__PVT__input_buffer__DOT__tails_2));
    vlSelf->__PVT__input_buffer__DOT__empty_1 = ((IData)(vlSelf->__PVT__input_buffer__DOT__heads_1) 
                                                 == (IData)(vlSelf->__PVT__input_buffer__DOT__tails_1));
    vlSelf->__PVT__input_buffer__DOT__empty_0 = ((IData)(vlSelf->__PVT__input_buffer__DOT__heads_0) 
                                                 == (IData)(vlSelf->__PVT__input_buffer__DOT__tails_0));
    if (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
         & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_head))) {
        if ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel))) {
            vlSelf->__PVT__states_1_flow_ingress_node 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_flow_ingress_node;
        }
        if ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel))) {
            vlSelf->__PVT__states_2_flow_ingress_node 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_flow_ingress_node;
        }
        if ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel))) {
            vlSelf->__PVT__states_3_flow_ingress_node 
                = vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_flow_ingress_node;
        }
    }
    if (__Vdlyvset__input_buffer__DOT__qs_3__DOT__ram_tail__v0) {
        vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__ram_tail[0U] 
            = __Vdlyvval__input_buffer__DOT__qs_3__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__qs_2__DOT__ram_tail__v0) {
        vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__ram_tail[0U] 
            = __Vdlyvval__input_buffer__DOT__qs_2__DOT__ram_tail__v0;
    }
    if (__Vdlyvset__input_buffer__DOT__qs_1__DOT__ram_tail__v0) {
        vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__ram_tail[0U] 
            = __Vdlyvval__input_buffer__DOT__qs_1__DOT__ram_tail__v0;
    }
    vlSelf->__PVT__input_buffer__DOT__can_to_q_0 = 
        (1U & ((~ (IData)(vlSelf->__PVT__input_buffer__DOT__empty_0)) 
               & (~ (IData)(vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__maybe_full))));
    vlSelf->__PVT__salloc_arb_io_in_3_valid = (((3U 
                                                 == (IData)(vlSelf->__PVT__states_3_g)) 
                                                & ((IData)(vlSelf->__PVT__states_3_vc_sel_0_0) 
                                                   & (0U 
                                                      == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__egress_unit_0_to_1__DOT__q_io_count)))) 
                                               & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__maybe_full));
    vlSelf->__PVT__salloc_arb_io_in_2_valid = (((3U 
                                                 == (IData)(vlSelf->__PVT__states_2_g)) 
                                                & ((IData)(vlSelf->__PVT__states_2_vc_sel_0_0) 
                                                   & (0U 
                                                      == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__egress_unit_0_to_1__DOT__q_io_count)))) 
                                               & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__maybe_full));
    vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id 
        = ((1U == (IData)(vlSelf->__PVT__states_1_g))
            ? 1U : ((1U == (IData)(vlSelf->__PVT__states_2_g))
                     ? 2U : 3U));
    vlSelf->__PVT__route_arbiter_io_out_valid = (((1U 
                                                   == (IData)(vlSelf->__PVT__states_1_g)) 
                                                  | (1U 
                                                     == (IData)(vlSelf->__PVT__states_2_g))) 
                                                 | (1U 
                                                    == (IData)(vlSelf->__PVT__states_3_g)));
    vlSelf->io_vcalloc_req_valid = (((2U == (IData)(vlSelf->__PVT__states_1_g)) 
                                     | (2U == (IData)(vlSelf->__PVT__states_2_g))) 
                                    | (2U == (IData)(vlSelf->__PVT__states_3_g)));
    __PVT___vcalloc_filter_T_4 = (((2U == (IData)(vlSelf->__PVT__states_3_g)) 
                                   << 7U) | (((2U == (IData)(vlSelf->__PVT__states_2_g)) 
                                              << 6U) 
                                             | (((2U 
                                                  == (IData)(vlSelf->__PVT__states_1_g)) 
                                                 << 5U) 
                                                | ((((2U 
                                                      == (IData)(vlSelf->__PVT__states_3_g)) 
                                                     << 3U) 
                                                    | (((2U 
                                                         == (IData)(vlSelf->__PVT__states_2_g)) 
                                                        << 2U) 
                                                       | ((2U 
                                                           == (IData)(vlSelf->__PVT__states_1_g)) 
                                                          << 1U))) 
                                                   & (~ (IData)(vlSelf->__PVT__mask))))));
    vlSelf->__PVT__salloc_arb_io_in_1_valid = (((3U 
                                                 == (IData)(vlSelf->__PVT__states_1_g)) 
                                                & ((IData)(vlSelf->__PVT__states_1_vc_sel_0_0) 
                                                   & (0U 
                                                      == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__egress_unit_0_to_1__DOT__q_io_count)))) 
                                               & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__maybe_full));
    __PVT__vcalloc_filter = ((1U & (IData)(__PVT___vcalloc_filter_T_4))
                              ? 1U : ((2U & (IData)(__PVT___vcalloc_filter_T_4))
                                       ? 2U : ((4U 
                                                & (IData)(__PVT___vcalloc_filter_T_4))
                                                ? 4U
                                                : (
                                                   (8U 
                                                    & (IData)(__PVT___vcalloc_filter_T_4))
                                                    ? 8U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(__PVT___vcalloc_filter_T_4))
                                                     ? 0x10U
                                                     : 
                                                    ((0x20U 
                                                      & (IData)(__PVT___vcalloc_filter_T_4))
                                                      ? 0x20U
                                                      : 
                                                     ((0x40U 
                                                       & (IData)(__PVT___vcalloc_filter_T_4))
                                                       ? 0x40U
                                                       : 
                                                      ((0x80U 
                                                        & (IData)(__PVT___vcalloc_filter_T_4))
                                                        ? 0x80U
                                                        : 0U))))))));
    __PVT__salloc_arb__DOT___unassigned_T = (((IData)(vlSelf->__PVT__salloc_arb_io_in_3_valid) 
                                              << 3U) 
                                             | (((IData)(vlSelf->__PVT__salloc_arb_io_in_2_valid) 
                                                 << 2U) 
                                                | ((IData)(vlSelf->__PVT__salloc_arb_io_in_1_valid) 
                                                   << 1U)));
    vlSelf->__PVT__vcalloc_sel = (0xfU & ((IData)(__PVT__vcalloc_filter) 
                                          | ((IData)(__PVT__vcalloc_filter) 
                                             >> 4U)));
    __PVT__salloc_arb__DOT___chosen_T = ((IData)(__PVT__salloc_arb__DOT___unassigned_T) 
                                         & (IData)(vlSelf->__PVT__salloc_arb__DOT__lock_0));
    __PVT__salloc_arb__DOT__unassigned = ((IData)(__PVT__salloc_arb__DOT___unassigned_T) 
                                          & (~ (IData)(vlSelf->__PVT__salloc_arb__DOT__lock_0)));
    __PVT__salloc_arb__DOT___sel_T_2 = (((IData)(__PVT__salloc_arb__DOT__unassigned) 
                                         << 4U) | ((IData)(__PVT__salloc_arb__DOT__unassigned) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__salloc_arb__DOT__mask))));
    __PVT__salloc_arb__DOT__sel = ((1U & (IData)(__PVT__salloc_arb__DOT___sel_T_2))
                                    ? 1U : ((2U & (IData)(__PVT__salloc_arb__DOT___sel_T_2))
                                             ? 2U : 
                                            ((4U & (IData)(__PVT__salloc_arb__DOT___sel_T_2))
                                              ? 4U : 
                                             ((8U & (IData)(__PVT__salloc_arb__DOT___sel_T_2))
                                               ? 8U
                                               : ((0x10U 
                                                   & (IData)(__PVT__salloc_arb__DOT___sel_T_2))
                                                   ? 0x10U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(__PVT__salloc_arb__DOT___sel_T_2))
                                                    ? 0x20U
                                                    : 
                                                   ((0x40U 
                                                     & (IData)(__PVT__salloc_arb__DOT___sel_T_2))
                                                     ? 0x40U
                                                     : 
                                                    ((0x80U 
                                                      & (IData)(__PVT__salloc_arb__DOT___sel_T_2))
                                                      ? 0x80U
                                                      : 0U))))))));
    __PVT__salloc_arb__DOT___choices_0_T_1 = ((IData)(__PVT__salloc_arb__DOT__sel) 
                                              | (0xfU 
                                                 & ((IData)(__PVT__salloc_arb__DOT__sel) 
                                                    >> 4U)));
    if ((0U != (IData)(__PVT__salloc_arb__DOT___chosen_T))) {
        vlSelf->__PVT__salloc_arb_io_chosen_oh_0 = 
            (0xfU & (IData)(vlSelf->__PVT__salloc_arb__DOT__lock_0));
        vlSelf->__PVT__salloc_arb__DOT__chosen = (0xfU 
                                                  & (IData)(vlSelf->__PVT__salloc_arb__DOT__lock_0));
    } else {
        vlSelf->__PVT__salloc_arb_io_chosen_oh_0 = 
            (0xfU & (IData)(__PVT__salloc_arb__DOT___choices_0_T_1));
        vlSelf->__PVT__salloc_arb__DOT__chosen = (0xfU 
                                                  & (IData)(__PVT__salloc_arb__DOT___choices_0_T_1));
    }
    vlSelf->__PVT__salloc_arb_io_out_0_bits_tail = 
        (((((IData)(vlSelf->__PVT__salloc_arb__DOT__chosen) 
            >> 1U) & vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__ram_tail
           [0U]) | (((IData)(vlSelf->__PVT__salloc_arb__DOT__chosen) 
                     >> 2U) & vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__ram_tail
                    [0U])) | (((IData)(vlSelf->__PVT__salloc_arb__DOT__chosen) 
                               >> 3U) & vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__ram_tail
                              [0U]));
    vlSelf->__PVT__salloc_arb_io_out_0_bits_vc_sel_0_0 
        = (((((IData)(vlSelf->__PVT__salloc_arb__DOT__chosen) 
              >> 1U) & (IData)(vlSelf->__PVT__states_1_vc_sel_0_0)) 
            | (((IData)(vlSelf->__PVT__salloc_arb__DOT__chosen) 
                >> 2U) & (IData)(vlSelf->__PVT__states_2_vc_sel_0_0))) 
           | (((IData)(vlSelf->__PVT__salloc_arb__DOT__chosen) 
               >> 3U) & (IData)(vlSelf->__PVT__states_3_vc_sel_0_0)));
    vlSelf->__PVT__salloc_arb__DOT___io_out_0_valid_T 
        = ((IData)(__PVT__salloc_arb__DOT___unassigned_T) 
           & (IData)(vlSelf->__PVT__salloc_arb__DOT__chosen));
}

VL_INLINE_OPT void VNoCChiselTester_InputUnit_2___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__1(VNoCChiselTester_InputUnit_2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoCChiselTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNoCChiselTester_InputUnit_2___sequent__TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__1\n"); );
    // Init
    CData/*0:0*/ __PVT___GEN_45;
    CData/*0:0*/ __PVT___GEN_46;
    CData/*0:0*/ __PVT___GEN_47;
    CData/*0:0*/ __PVT___io_in_credit_return_T;
    CData/*3:0*/ __PVT__input_buffer__DOT___GEN_2;
    CData/*0:0*/ __PVT__input_buffer__DOT___GEN_51;
    CData/*0:0*/ __PVT__input_buffer__DOT___GEN_55;
    CData/*0:0*/ __PVT__input_buffer__DOT___GEN_59;
    CData/*0:0*/ __PVT__input_buffer__DOT___GEN_63;
    CData/*0:0*/ __PVT__input_buffer__DOT__can_to_q_1;
    CData/*0:0*/ __PVT__input_buffer__DOT__can_to_q_2;
    CData/*0:0*/ __PVT__input_buffer__DOT__can_to_q_3;
    CData/*3:0*/ __PVT__input_buffer__DOT___head_T_3;
    CData/*3:0*/ __PVT__input_buffer__DOT___head_T_5;
    // Body
    vlSelf->__PVT__input_buffer__DOT___tails_T_22 = 
        (((4U & ((IData)(1U) << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel)))
           ? 5U : 0U) | ((8U & ((IData)(1U) << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel)))
                          ? 0xaU : 0U));
    if (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
         & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_head))) {
        __PVT___GEN_45 = ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel)) 
                          | ((1U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel)) 
                             & (IData)(vlSelf->__PVT__states_1_vc_sel_0_0)));
        __PVT___GEN_46 = ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel)) 
                          | ((2U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel)) 
                             & (IData)(vlSelf->__PVT__states_2_vc_sel_0_0)));
        __PVT___GEN_47 = ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel)) 
                          | ((3U != (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel)) 
                             & (IData)(vlSelf->__PVT__states_3_vc_sel_0_0)));
    } else {
        __PVT___GEN_45 = vlSelf->__PVT__states_1_vc_sel_0_0;
        __PVT___GEN_46 = vlSelf->__PVT__states_2_vc_sel_0_0;
        __PVT___GEN_47 = vlSelf->__PVT__states_3_vc_sel_0_0;
    }
    vlSelf->__PVT___GEN_68 = ((1U == (IData)(vlSelf->__PVT__states_1_g))
                               ? 2U : (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
                                        & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_head))
                                        ? ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel))
                                            ? ((3U 
                                                == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_flow_egress_node))
                                                ? 2U
                                                : 1U)
                                            : (IData)(vlSelf->__PVT__states_1_g))
                                        : (IData)(vlSelf->__PVT__states_1_g)));
    vlSelf->__PVT___GEN_69 = (((1U != (IData)(vlSelf->__PVT__states_1_g)) 
                               & (1U == (IData)(vlSelf->__PVT__states_2_g)))
                               ? 2U : (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
                                        & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_head))
                                        ? ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel))
                                            ? ((3U 
                                                == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_flow_egress_node))
                                                ? 2U
                                                : 1U)
                                            : (IData)(vlSelf->__PVT__states_2_g))
                                        : (IData)(vlSelf->__PVT__states_2_g)));
    vlSelf->__PVT___GEN_70 = (((~ ((1U == (IData)(vlSelf->__PVT__states_1_g)) 
                                   | (1U == (IData)(vlSelf->__PVT__states_2_g)))) 
                               & (1U == (IData)(vlSelf->__PVT__states_3_g)))
                               ? 2U : (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
                                        & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_head))
                                        ? ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel))
                                            ? ((3U 
                                                == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_flit_flow_egress_node))
                                                ? 2U
                                                : 1U)
                                            : (IData)(vlSelf->__PVT__states_3_g))
                                        : (IData)(vlSelf->__PVT__states_3_g)));
    __PVT__input_buffer__DOT___GEN_2 = ((2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel))
                                         ? (IData)(vlSelf->__PVT__input_buffer__DOT__tails_2)
                                         : ((1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel))
                                             ? (IData)(vlSelf->__PVT__input_buffer__DOT__tails_1)
                                             : (IData)(vlSelf->__PVT__input_buffer__DOT__tails_0)));
    vlSelf->__PVT___T_35 = (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                             >> 1U) & (IData)(vlSelf->io_vcalloc_req_valid));
    vlSelf->__PVT__salloc_arb__DOT___T_17 = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator_io_req_1_0_ready) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__salloc_arb__DOT___io_out_0_valid_T)));
    vlSelf->__PVT__salloc_arb_io_in_1_ready = (((IData)(vlSelf->__PVT__salloc_arb__DOT__chosen) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator_io_req_1_0_ready));
    vlSelf->__PVT__salloc_arb_io_in_2_ready = (((IData)(vlSelf->__PVT__salloc_arb__DOT__chosen) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator_io_req_1_0_ready));
    vlSelf->__PVT__salloc_arb_io_in_3_ready = (((IData)(vlSelf->__PVT__salloc_arb__DOT__chosen) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator_io_req_1_0_ready));
    __PVT___io_in_credit_return_T = ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator_io_req_1_0_ready) 
                                     & (0U != (IData)(vlSelf->__PVT__salloc_arb__DOT___io_out_0_valid_T)));
    if (vlSelf->__PVT__route_arbiter_io_out_valid) {
        vlSelf->__PVT___GEN_88 = ((1U != (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id)) 
                                  & (IData)(__PVT___GEN_45));
        vlSelf->__PVT___GEN_89 = ((2U != (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id)) 
                                  & (IData)(__PVT___GEN_46));
        vlSelf->__PVT___GEN_90 = ((3U != (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id)) 
                                  & (IData)(__PVT___GEN_47));
    } else {
        vlSelf->__PVT___GEN_88 = __PVT___GEN_45;
        vlSelf->__PVT___GEN_89 = __PVT___GEN_46;
        vlSelf->__PVT___GEN_90 = __PVT___GEN_47;
    }
    vlSelf->__PVT___GEN_93 = ((((2U == (IData)(vlSelf->__PVT__states_1_g)) 
                                & ((IData)(vlSelf->__PVT__vcalloc_sel) 
                                   >> 1U)) & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                                              >> 1U))
                               ? 3U : ((IData)(vlSelf->__PVT__route_arbiter_io_out_valid)
                                        ? ((1U == (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id))
                                            ? 2U : (IData)(vlSelf->__PVT___GEN_68))
                                        : (IData)(vlSelf->__PVT___GEN_68)));
    vlSelf->__PVT___GEN_94 = ((((2U == (IData)(vlSelf->__PVT__states_2_g)) 
                                & ((IData)(vlSelf->__PVT__vcalloc_sel) 
                                   >> 2U)) & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                                              >> 1U))
                               ? 3U : ((IData)(vlSelf->__PVT__route_arbiter_io_out_valid)
                                        ? ((2U == (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id))
                                            ? 2U : (IData)(vlSelf->__PVT___GEN_69))
                                        : (IData)(vlSelf->__PVT___GEN_69)));
    vlSelf->__PVT___GEN_95 = ((((2U == (IData)(vlSelf->__PVT__states_3_g)) 
                                & ((IData)(vlSelf->__PVT__vcalloc_sel) 
                                   >> 3U)) & ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__vc_allocator__DOT__in_arb_sel) 
                                              >> 1U))
                               ? 3U : ((IData)(vlSelf->__PVT__route_arbiter_io_out_valid)
                                        ? ((3U == (IData)(vlSelf->__PVT__route_arbiter_io_out_bits_src_virt_id))
                                            ? 2U : (IData)(vlSelf->__PVT___GEN_70))
                                        : (IData)(vlSelf->__PVT___GEN_70)));
    if ((3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel))) {
        vlSelf->__PVT__input_buffer__DOT__mem_head_MPORT_addr 
            = vlSelf->__PVT__input_buffer__DOT__tails_3;
        vlSelf->__PVT__input_buffer__DOT__mem_tail_MPORT_addr 
            = vlSelf->__PVT__input_buffer__DOT__tails_3;
        vlSelf->__PVT__input_buffer__DOT__mem_payload_MPORT_addr 
            = vlSelf->__PVT__input_buffer__DOT__tails_3;
        vlSelf->__PVT__input_buffer__DOT___GEN_3 = vlSelf->__PVT__input_buffer__DOT__tails_3;
    } else {
        vlSelf->__PVT__input_buffer__DOT__mem_head_MPORT_addr 
            = __PVT__input_buffer__DOT___GEN_2;
        vlSelf->__PVT__input_buffer__DOT__mem_tail_MPORT_addr 
            = __PVT__input_buffer__DOT___GEN_2;
        vlSelf->__PVT__input_buffer__DOT__mem_payload_MPORT_addr 
            = __PVT__input_buffer__DOT___GEN_2;
        vlSelf->__PVT__input_buffer__DOT___GEN_3 = __PVT__input_buffer__DOT___GEN_2;
    }
    vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__do_deq 
        = ((IData)(vlSelf->__PVT__salloc_arb_io_in_1_ready) 
           & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__maybe_full));
    vlSelf->__PVT__input_buffer__DOT__qs_1_io_enq_ready 
        = (1U & ((IData)(vlSelf->__PVT__salloc_arb_io_in_1_ready) 
                 | (~ (IData)(vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__maybe_full))));
    vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__do_deq 
        = ((IData)(vlSelf->__PVT__salloc_arb_io_in_2_ready) 
           & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__maybe_full));
    vlSelf->__PVT__input_buffer__DOT__qs_2_io_enq_ready 
        = (1U & ((IData)(vlSelf->__PVT__salloc_arb_io_in_2_ready) 
                 | (~ (IData)(vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__maybe_full))));
    vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__do_deq 
        = ((IData)(vlSelf->__PVT__salloc_arb_io_in_3_ready) 
           & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__maybe_full));
    vlSelf->__PVT__input_buffer__DOT__qs_3_io_enq_ready 
        = (1U & ((IData)(vlSelf->__PVT__salloc_arb_io_in_3_ready) 
                 | (~ (IData)(vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__maybe_full))));
    vlSelf->io_in_credit_return = ((IData)(__PVT___io_in_credit_return_T)
                                    ? (IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0)
                                    : 0U);
    vlSelf->io_in_vc_free = (((IData)(__PVT___io_in_credit_return_T) 
                              & (((((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                    & vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__ram_tail
                                    [0U]) | (((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                              >> 1U) 
                                             & vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__ram_tail
                                             [0U])) 
                                  | (((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                      >> 2U) & vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__ram_tail
                                     [0U])) | (((IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0) 
                                                >> 3U) 
                                               & vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__ram_tail
                                               [0U])))
                              ? (IData)(vlSelf->__PVT__salloc_arb_io_chosen_oh_0)
                              : 0U);
    vlSelf->__PVT__input_buffer__DOT___tails_T_11 = 
        ((IData)(vlSelf->__PVT__input_buffer__DOT___GEN_3) 
         == ((((2U & ((IData)(1U) << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel)))
                ? 4U : 0U) | ((4U & ((IData)(1U) << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel)))
                               ? 9U : 0U)) | ((8U & 
                                               ((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel)))
                                               ? 0xeU
                                               : 0U)));
    __PVT__input_buffer__DOT__can_to_q_1 = ((~ (IData)(vlSelf->__PVT__input_buffer__DOT__empty_1)) 
                                            & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_1_io_enq_ready));
    __PVT__input_buffer__DOT__can_to_q_2 = ((~ (IData)(vlSelf->__PVT__input_buffer__DOT__empty_2)) 
                                            & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_2_io_enq_ready));
    vlSelf->__PVT__input_buffer__DOT__direct_to_q = 
        (((((0xfU & (((IData)(1U) << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel)) 
                     & (~ (IData)(vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__maybe_full)))) 
            | (7U & ((((IData)(1U) << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel)) 
                      >> 1U) & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_1_io_enq_ready)))) 
           | (3U & ((((IData)(1U) << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel)) 
                     >> 2U) & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_2_io_enq_ready)))) 
          | ((IData)(vlSelf->__PVT__input_buffer__DOT__qs_3_io_enq_ready) 
             & (((IData)(1U) << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel)) 
                >> 3U))) & ((((0xfU & (((IData)(1U) 
                                        << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel)) 
                                       & (IData)(vlSelf->__PVT__input_buffer__DOT__empty_0))) 
                              | (7U & ((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel)) 
                                        >> 1U) & (IData)(vlSelf->__PVT__input_buffer__DOT__empty_1)))) 
                             | (3U & ((((IData)(1U) 
                                        << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel)) 
                                       >> 2U) & (IData)(vlSelf->__PVT__input_buffer__DOT__empty_2)))) 
                            | ((IData)(vlSelf->__PVT__input_buffer__DOT__empty_3) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel)) 
                                  >> 3U))));
    __PVT__input_buffer__DOT__can_to_q_3 = ((~ (IData)(vlSelf->__PVT__input_buffer__DOT__empty_3)) 
                                            & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_3_io_enq_ready));
    __PVT__input_buffer__DOT___GEN_51 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
                                             & (~ (IData)(vlSelf->__PVT__input_buffer__DOT__direct_to_q)))) 
                                         & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
                                             & (IData)(vlSelf->__PVT__input_buffer__DOT__direct_to_q)) 
                                            & (0U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel))));
    __PVT__input_buffer__DOT___GEN_55 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
                                             & (~ (IData)(vlSelf->__PVT__input_buffer__DOT__direct_to_q)))) 
                                         & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
                                             & (IData)(vlSelf->__PVT__input_buffer__DOT__direct_to_q)) 
                                            & (1U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel))));
    __PVT__input_buffer__DOT___GEN_59 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
                                             & (~ (IData)(vlSelf->__PVT__input_buffer__DOT__direct_to_q)))) 
                                         & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
                                             & (IData)(vlSelf->__PVT__input_buffer__DOT__direct_to_q)) 
                                            & (2U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel))));
    __PVT__input_buffer__DOT___GEN_63 = ((~ ((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
                                             & (~ (IData)(vlSelf->__PVT__input_buffer__DOT__direct_to_q)))) 
                                         & (((IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_io_out_1_0_valid) 
                                             & (IData)(vlSelf->__PVT__input_buffer__DOT__direct_to_q)) 
                                            & (3U == (IData)(vlSymsp->TOP.NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__ingress_unit_0_from_1__DOT__out_bundle_bits_out_virt_channel))));
    vlSelf->__PVT__input_buffer__DOT___T_9 = ((((IData)(vlSelf->__PVT__input_buffer__DOT__can_to_q_0) 
                                                | (IData)(__PVT__input_buffer__DOT__can_to_q_1)) 
                                               | (IData)(__PVT__input_buffer__DOT__can_to_q_2)) 
                                              | (IData)(__PVT__input_buffer__DOT__can_to_q_3));
    vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc = 
        ((IData)(vlSelf->__PVT__input_buffer__DOT__can_to_q_0)
          ? 1U : ((IData)(__PVT__input_buffer__DOT__can_to_q_1)
                   ? 2U : ((IData)(__PVT__input_buffer__DOT__can_to_q_2)
                            ? 4U : ((IData)(__PVT__input_buffer__DOT__can_to_q_3)
                                     ? 8U : 0U))));
    vlSelf->__PVT__input_buffer__DOT__to_q = (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & ((IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc) 
                                                            >> 2U)))) 
                                               << 1U) 
                                              | (IData)(
                                                        (0U 
                                                         != 
                                                         (0xaU 
                                                          & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc)))));
    vlSelf->__PVT__input_buffer__DOT___heads_T_14 = 
        (((4U & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))
           ? 5U : 0U) | ((8U & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))
                          ? 0xaU : 0U));
    if (vlSelf->__PVT__input_buffer__DOT___T_9) {
        vlSelf->__PVT__input_buffer__DOT__qs_0_io_enq_valid 
            = (1U & ((IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc) 
                     | (IData)(__PVT__input_buffer__DOT___GEN_51)));
        vlSelf->__PVT__input_buffer__DOT__qs_1_io_enq_valid 
            = (1U & (((IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc) 
                      >> 1U) | (IData)(__PVT__input_buffer__DOT___GEN_55)));
        vlSelf->__PVT__input_buffer__DOT__qs_2_io_enq_valid 
            = (1U & (((IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc) 
                      >> 2U) | (IData)(__PVT__input_buffer__DOT___GEN_59)));
        vlSelf->__PVT__input_buffer__DOT__qs_3_io_enq_valid 
            = (1U & (((IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc) 
                      >> 3U) | (IData)(__PVT__input_buffer__DOT___GEN_63)));
    } else {
        vlSelf->__PVT__input_buffer__DOT__qs_0_io_enq_valid 
            = (1U & (IData)(__PVT__input_buffer__DOT___GEN_51));
        vlSelf->__PVT__input_buffer__DOT__qs_1_io_enq_valid 
            = (1U & (IData)(__PVT__input_buffer__DOT___GEN_55));
        vlSelf->__PVT__input_buffer__DOT__qs_2_io_enq_valid 
            = (1U & (IData)(__PVT__input_buffer__DOT___GEN_59));
        vlSelf->__PVT__input_buffer__DOT__qs_3_io_enq_valid 
            = (1U & (IData)(__PVT__input_buffer__DOT___GEN_63));
    }
    __PVT__input_buffer__DOT___head_T_3 = ((8U & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))
                                            ? (IData)(vlSelf->__PVT__input_buffer__DOT__heads_3)
                                            : 0U);
    __PVT__input_buffer__DOT___head_T_5 = ((((1U & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))
                                              ? (IData)(vlSelf->__PVT__input_buffer__DOT__heads_0)
                                              : 0U) 
                                            | ((2U 
                                                & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))
                                                ? (IData)(vlSelf->__PVT__input_buffer__DOT__heads_1)
                                                : 0U)) 
                                           | ((4U & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))
                                               ? (IData)(vlSelf->__PVT__input_buffer__DOT__heads_2)
                                               : 0U));
    vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__do_enq 
        = ((~ (IData)(vlSelf->__PVT__input_buffer__DOT__qs_0__DOT__maybe_full)) 
           & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_0_io_enq_valid));
    vlSelf->__PVT__input_buffer__DOT__qs_1__DOT__do_enq 
        = ((IData)(vlSelf->__PVT__input_buffer__DOT__qs_1_io_enq_ready) 
           & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_1_io_enq_valid));
    vlSelf->__PVT__input_buffer__DOT__qs_2__DOT__do_enq 
        = ((IData)(vlSelf->__PVT__input_buffer__DOT__qs_2_io_enq_ready) 
           & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_2_io_enq_valid));
    vlSelf->__PVT__input_buffer__DOT__qs_3__DOT__do_enq 
        = ((IData)(vlSelf->__PVT__input_buffer__DOT__qs_3_io_enq_ready) 
           & (IData)(vlSelf->__PVT__input_buffer__DOT__qs_3_io_enq_valid));
    vlSelf->__PVT__input_buffer__DOT__mem_head_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
           | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT__mem_head_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
           | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT__mem_head_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
           | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT__mem_head_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
           | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
           | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
           | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
           | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT__mem_tail_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
           | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_0_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
           | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_1_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
           | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_2_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
           | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT__mem_payload_qs_3_io_enq_bits_MPORT_addr 
        = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
           | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT__head = ((IData)(__PVT__input_buffer__DOT___head_T_5) 
                                              | (IData)(__PVT__input_buffer__DOT___head_T_3));
    vlSelf->__PVT__input_buffer__DOT___heads_T_7 = 
        ((IData)(vlSelf->__PVT__input_buffer__DOT__head) 
         == ((((2U & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))
                ? 4U : 0U) | ((4U & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))
                               ? 9U : 0U)) | ((8U & (IData)(vlSelf->__PVT__input_buffer__DOT__to_q_oh_enc))
                                               ? 0xeU
                                               : 0U)));
}
