// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNoCChiselTester.h for the primary calling header

#include "verilated.h"

#include "VNoCChiselTester_InputUnit.h"
#include "VNoCChiselTester__Syms.h"

void VNoCChiselTester_InputUnit___ctor_var_reset(VNoCChiselTester_InputUnit* vlSelf);

VNoCChiselTester_InputUnit::VNoCChiselTester_InputUnit(VNoCChiselTester__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VNoCChiselTester_InputUnit___ctor_var_reset(this);
}

void VNoCChiselTester_InputUnit___configure_coverage(VNoCChiselTester_InputUnit* vlSelf, bool first);

void VNoCChiselTester_InputUnit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    VNoCChiselTester_InputUnit___configure_coverage(this, first);
}

VNoCChiselTester_InputUnit::~VNoCChiselTester_InputUnit() {
}

// Coverage
void VNoCChiselTester_InputUnit::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
