// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNoCChiselTester.h for the primary calling header

#include "verilated.h"

#include "VNoCChiselTester_InputGen.h"
#include "VNoCChiselTester__Syms.h"

void VNoCChiselTester_InputGen___ctor_var_reset(VNoCChiselTester_InputGen* vlSelf);

VNoCChiselTester_InputGen::VNoCChiselTester_InputGen(VNoCChiselTester__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VNoCChiselTester_InputGen___ctor_var_reset(this);
}

void VNoCChiselTester_InputGen___configure_coverage(VNoCChiselTester_InputGen* vlSelf, bool first);

void VNoCChiselTester_InputGen::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    VNoCChiselTester_InputGen___configure_coverage(this, first);
}

VNoCChiselTester_InputGen::~VNoCChiselTester_InputGen() {
}

// Coverage
void VNoCChiselTester_InputGen::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
