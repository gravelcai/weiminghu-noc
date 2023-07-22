// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNoCChiselTester.h for the primary calling header

#include "verilated.h"

#include "VNoCChiselTester_SwitchAllocator.h"
#include "VNoCChiselTester__Syms.h"

void VNoCChiselTester_SwitchAllocator___ctor_var_reset(VNoCChiselTester_SwitchAllocator* vlSelf);

VNoCChiselTester_SwitchAllocator::VNoCChiselTester_SwitchAllocator(VNoCChiselTester__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VNoCChiselTester_SwitchAllocator___ctor_var_reset(this);
}

void VNoCChiselTester_SwitchAllocator___configure_coverage(VNoCChiselTester_SwitchAllocator* vlSelf, bool first);

void VNoCChiselTester_SwitchAllocator::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    VNoCChiselTester_SwitchAllocator___configure_coverage(this, first);
}

VNoCChiselTester_SwitchAllocator::~VNoCChiselTester_SwitchAllocator() {
}

// Coverage
void VNoCChiselTester_SwitchAllocator::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
