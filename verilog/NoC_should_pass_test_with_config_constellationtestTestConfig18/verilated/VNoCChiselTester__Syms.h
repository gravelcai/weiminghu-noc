// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VNOCCHISELTESTER__SYMS_H_
#define VERILATED_VNOCCHISELTESTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VNoCChiselTester.h"

// INCLUDE MODULE CLASSES
#include "VNoCChiselTester___024root.h"
#include "VNoCChiselTester_InputUnit.h"
#include "VNoCChiselTester_InputUnit_2.h"

// SYMS CLASS (contains all model state)
class VNoCChiselTester__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VNoCChiselTester* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VNoCChiselTester___024root     TOP;
    VNoCChiselTester_InputUnit     TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0;
    VNoCChiselTester_InputUnit     TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2;
    VNoCChiselTester_InputUnit_2   TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0;
    VNoCChiselTester_InputUnit_2   TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2;

    // SCOPE NAMES
    VerilatedScope __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_1__routers__egress_unit_0_to_0;
    VerilatedScope __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_1__routers__input_unit_0_from_0;
    VerilatedScope __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_1__routers__input_unit_1_from_2;
    VerilatedScope __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_1__routers__monitor;
    VerilatedScope __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_1__routers__monitor_1;
    VerilatedScope __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_1__routers__route_computer;
    VerilatedScope __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_1__routers__switch;
    VerilatedScope __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_2__routers__ingress_unit_0_from_1;
    VerilatedScope __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_2__routers__output_unit_0_to_1;
    VerilatedScope __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_2__routers__output_unit_1_to_3;
    VerilatedScope __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_2__routers__vc_allocator;
    VerilatedScope __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_3__routers__egress_unit_0_to_1;
    VerilatedScope __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_3__routers__input_unit_0_from_0;
    VerilatedScope __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_3__routers__input_unit_1_from_2;
    VerilatedScope __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_3__routers__monitor;
    VerilatedScope __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_3__routers__monitor_1;
    VerilatedScope __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_3__routers__route_computer;
    VerilatedScope __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_3__routers__switch;
    VerilatedScope __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain__routers__ingress_unit_0_from_0;
    VerilatedScope __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain__routers__output_unit_0_to_1;
    VerilatedScope __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain__routers__output_unit_1_to_3;
    VerilatedScope __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain__routers__vc_allocator;
    VerilatedScope __Vscope_NoCChiselTester__th__noc_tester;

    // CONSTRUCTORS
    VNoCChiselTester__Syms(VerilatedContext* contextp, const char* namep, VNoCChiselTester* modelp);
    ~VNoCChiselTester__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
