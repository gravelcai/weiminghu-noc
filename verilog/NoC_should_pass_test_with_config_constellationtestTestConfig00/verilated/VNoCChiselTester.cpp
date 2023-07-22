// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VNoCChiselTester.h"
#include "VNoCChiselTester__Syms.h"

//============================================================
// Constructors

VNoCChiselTester::VNoCChiselTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VNoCChiselTester__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VNoCChiselTester::VNoCChiselTester(const char* _vcname__)
    : VNoCChiselTester(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VNoCChiselTester::~VNoCChiselTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VNoCChiselTester___024root___eval_initial(VNoCChiselTester___024root* vlSelf);
void VNoCChiselTester___024root___eval_settle(VNoCChiselTester___024root* vlSelf);
void VNoCChiselTester___024root___eval(VNoCChiselTester___024root* vlSelf);
#ifdef VL_DEBUG
void VNoCChiselTester___024root___eval_debug_assertions(VNoCChiselTester___024root* vlSelf);
#endif  // VL_DEBUG
void VNoCChiselTester___024root___final(VNoCChiselTester___024root* vlSelf);

static void _eval_initial_loop(VNoCChiselTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VNoCChiselTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VNoCChiselTester___024root___eval_settle(&(vlSymsp->TOP));
        VNoCChiselTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VNoCChiselTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VNoCChiselTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VNoCChiselTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VNoCChiselTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VNoCChiselTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VNoCChiselTester::final() {
    VNoCChiselTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VNoCChiselTester::hierName() const { return vlSymsp->name(); }
const char* VNoCChiselTester::modelName() const { return "VNoCChiselTester"; }
unsigned VNoCChiselTester::threads() const { return 1; }
