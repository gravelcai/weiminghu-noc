// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VNoCChiselTester__Syms.h"
#include "VNoCChiselTester.h"
#include "VNoCChiselTester___024root.h"
#include "VNoCChiselTester_InputGen.h"
#include "VNoCChiselTester_SwitchAllocator.h"
#include "VNoCChiselTester_InputBuffer.h"

// FUNCTIONS
VNoCChiselTester__Syms::~VNoCChiselTester__Syms()
{
}

VNoCChiselTester__Syms::VNoCChiselTester__Syms(VerilatedContext* contextp, const char* namep, VNoCChiselTester* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer{this, Verilated::catName(namep, "NoCChiselTester.th.lazyNoC.router_sink_domain_1.routers.input_unit_0_from_0.input_buffer")}
    , TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer{this, Verilated::catName(namep, "NoCChiselTester.th.lazyNoC.router_sink_domain_1.routers.input_unit_1_from_2.input_buffer")}
    , TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator{this, Verilated::catName(namep, "NoCChiselTester.th.lazyNoC.router_sink_domain_1.routers.switch_allocator")}
    , TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer{this, Verilated::catName(namep, "NoCChiselTester.th.lazyNoC.router_sink_domain_2.routers.input_unit_0_from_1.input_buffer")}
    , TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer{this, Verilated::catName(namep, "NoCChiselTester.th.lazyNoC.router_sink_domain_2.routers.input_unit_1_from_3.input_buffer")}
    , TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_allocator{this, Verilated::catName(namep, "NoCChiselTester.th.lazyNoC.router_sink_domain_2.routers.switch_allocator")}
    , TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer{this, Verilated::catName(namep, "NoCChiselTester.th.lazyNoC.router_sink_domain_3.routers.input_unit_0_from_0.input_buffer")}
    , TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer{this, Verilated::catName(namep, "NoCChiselTester.th.lazyNoC.router_sink_domain_3.routers.input_unit_1_from_2.input_buffer")}
    , TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator{this, Verilated::catName(namep, "NoCChiselTester.th.lazyNoC.router_sink_domain_3.routers.switch_allocator")}
    , TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer{this, Verilated::catName(namep, "NoCChiselTester.th.lazyNoC.router_sink_domain.routers.input_unit_0_from_1.input_buffer")}
    , TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer{this, Verilated::catName(namep, "NoCChiselTester.th.lazyNoC.router_sink_domain.routers.input_unit_1_from_3.input_buffer")}
    , TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator{this, Verilated::catName(namep, "NoCChiselTester.th.lazyNoC.router_sink_domain.routers.switch_allocator")}
    , TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen{this, Verilated::catName(namep, "NoCChiselTester.th.noc_tester.igen")}
    , TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_1{this, Verilated::catName(namep, "NoCChiselTester.th.noc_tester.igen_1")}
    , TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_2{this, Verilated::catName(namep, "NoCChiselTester.th.noc_tester.igen_2")}
    , TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_3{this, Verilated::catName(namep, "NoCChiselTester.th.noc_tester.igen_3")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer = &TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer;
    TOP.__PVT__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer = &TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer;
    TOP.__PVT__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator = &TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator;
    TOP.__PVT__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer = &TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer;
    TOP.__PVT__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer = &TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer;
    TOP.__PVT__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_allocator = &TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_allocator;
    TOP.__PVT__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer = &TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer;
    TOP.__PVT__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer = &TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer;
    TOP.__PVT__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator = &TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator;
    TOP.__PVT__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer = &TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer;
    TOP.__PVT__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer = &TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer;
    TOP.__PVT__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator = &TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator;
    TOP.__PVT__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen = &TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen;
    TOP.__PVT__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_1 = &TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_1;
    TOP.__PVT__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_2 = &TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_2;
    TOP.__PVT__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_3 = &TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_3;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer.__Vconfigure(true);
    TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer.__Vconfigure(false);
    TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator.__Vconfigure(true);
    TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer.__Vconfigure(false);
    TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer.__Vconfigure(false);
    TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_allocator.__Vconfigure(false);
    TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer.__Vconfigure(false);
    TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer.__Vconfigure(false);
    TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator.__Vconfigure(false);
    TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer.__Vconfigure(false);
    TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer.__Vconfigure(false);
    TOP__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator.__Vconfigure(false);
    TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen.__Vconfigure(true);
    TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_1.__Vconfigure(false);
    TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_2.__Vconfigure(false);
    TOP__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_3.__Vconfigure(false);
    // Setup scopes
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_1__routers__egress_unit_2_to_1.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_1.routers.egress_unit_2_to_1", "egress_unit_2_to_1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_1__routers__ingress_unit_2_from_1.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_1.routers.ingress_unit_2_from_1", "ingress_unit_2_from_1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_1__routers__input_unit_0_from_0.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_1.routers.input_unit_0_from_0", "input_unit_0_from_0", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_1__routers__input_unit_1_from_2.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_1.routers.input_unit_1_from_2", "input_unit_1_from_2", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_1__routers__monitor.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_1.routers.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_1__routers__monitor_1.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_1.routers.monitor_1", "monitor_1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_1__routers__output_unit_0_to_0.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_1.routers.output_unit_0_to_0", "output_unit_0_to_0", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_1__routers__output_unit_1_to_2.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_1.routers.output_unit_1_to_2", "output_unit_1_to_2", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_1__routers__switch.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_1.routers.switch", "switch", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_1__routers__vc_allocator.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_1.routers.vc_allocator", "vc_allocator", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_2__routers__egress_unit_2_to_2.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_2.routers.egress_unit_2_to_2", "egress_unit_2_to_2", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_2__routers__ingress_unit_2_from_2.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_2.routers.ingress_unit_2_from_2", "ingress_unit_2_from_2", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_2__routers__input_unit_0_from_1.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_2.routers.input_unit_0_from_1", "input_unit_0_from_1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_2__routers__input_unit_1_from_3.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_2.routers.input_unit_1_from_3", "input_unit_1_from_3", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_2__routers__monitor.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_2.routers.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_2__routers__monitor_1.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_2.routers.monitor_1", "monitor_1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_2__routers__output_unit_0_to_1.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_2.routers.output_unit_0_to_1", "output_unit_0_to_1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_2__routers__output_unit_1_to_3.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_2.routers.output_unit_1_to_3", "output_unit_1_to_3", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_2__routers__switch.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_2.routers.switch", "switch", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_2__routers__vc_allocator.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_2.routers.vc_allocator", "vc_allocator", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_3__routers__egress_unit_2_to_3.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_3.routers.egress_unit_2_to_3", "egress_unit_2_to_3", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_3__routers__ingress_unit_2_from_3.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_3.routers.ingress_unit_2_from_3", "ingress_unit_2_from_3", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_3__routers__input_unit_0_from_0.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_3.routers.input_unit_0_from_0", "input_unit_0_from_0", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_3__routers__input_unit_1_from_2.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_3.routers.input_unit_1_from_2", "input_unit_1_from_2", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_3__routers__monitor.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_3.routers.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_3__routers__monitor_1.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_3.routers.monitor_1", "monitor_1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_3__routers__output_unit_0_to_0.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_3.routers.output_unit_0_to_0", "output_unit_0_to_0", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_3__routers__output_unit_1_to_2.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_3.routers.output_unit_1_to_2", "output_unit_1_to_2", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_3__routers__switch.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_3.routers.switch", "switch", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_3__routers__vc_allocator.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_3.routers.vc_allocator", "vc_allocator", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain__routers__egress_unit_2_to_0.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain.routers.egress_unit_2_to_0", "egress_unit_2_to_0", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain__routers__ingress_unit_2_from_0.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain.routers.ingress_unit_2_from_0", "ingress_unit_2_from_0", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain__routers__input_unit_0_from_1.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain.routers.input_unit_0_from_1", "input_unit_0_from_1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain__routers__input_unit_1_from_3.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain.routers.input_unit_1_from_3", "input_unit_1_from_3", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain__routers__monitor.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain.routers.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain__routers__monitor_1.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain.routers.monitor_1", "monitor_1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain__routers__output_unit_0_to_1.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain.routers.output_unit_0_to_1", "output_unit_0_to_1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain__routers__output_unit_1_to_3.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain.routers.output_unit_1_to_3", "output_unit_1_to_3", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain__routers__switch.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain.routers.switch", "switch", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain__routers__vc_allocator.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain.routers.vc_allocator", "vc_allocator", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__noc_tester.configure(this, name(), "NoCChiselTester.th.noc_tester", "noc_tester", -12, VerilatedScope::SCOPE_OTHER);
}
