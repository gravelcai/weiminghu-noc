// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VNoCChiselTester__Syms.h"
#include "VNoCChiselTester.h"
#include "VNoCChiselTester___024root.h"

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
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_1__routers__egress_unit_0_to_0.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_1.routers.egress_unit_0_to_0", "egress_unit_0_to_0", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_1__routers__input_unit_0_from_0.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_1.routers.input_unit_0_from_0", "input_unit_0_from_0", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_1__routers__monitor.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_1.routers.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain_1__routers__route_computer.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain_1.routers.route_computer", "route_computer", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain__routers__ingress_unit_0_from_0.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain.routers.ingress_unit_0_from_0", "ingress_unit_0_from_0", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain__routers__output_unit_0_to_1.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain.routers.output_unit_0_to_1", "output_unit_0_to_1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__lazyNoC__router_sink_domain__routers__vc_allocator.configure(this, name(), "NoCChiselTester.th.lazyNoC.router_sink_domain.routers.vc_allocator", "vc_allocator", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NoCChiselTester__th__noc_tester.configure(this, name(), "NoCChiselTester.th.noc_tester", "noc_tester", -12, VerilatedScope::SCOPE_OTHER);
}
