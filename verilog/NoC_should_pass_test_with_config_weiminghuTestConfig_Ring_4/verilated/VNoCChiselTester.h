// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VNOCCHISELTESTER_H_
#define VERILATED_VNOCCHISELTESTER_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class VNoCChiselTester__Syms;
class VNoCChiselTester___024root;
class VNoCChiselTester_SwitchAllocator;
class VNoCChiselTester_InputBuffer;
class VNoCChiselTester_InputGen;


// This class is the main interface to the Verilated model
class VNoCChiselTester VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VNoCChiselTester__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VNoCChiselTester_SwitchAllocator* const __PVT__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__switch_allocator;
    VNoCChiselTester_InputBuffer* const __PVT__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer;
    VNoCChiselTester_InputBuffer* const __PVT__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer;
    VNoCChiselTester_SwitchAllocator* const __PVT__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__switch_allocator;
    VNoCChiselTester_InputBuffer* const __PVT__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer;
    VNoCChiselTester_InputBuffer* const __PVT__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_1__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer;
    VNoCChiselTester_SwitchAllocator* const __PVT__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__switch_allocator;
    VNoCChiselTester_InputBuffer* const __PVT__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_0_from_1__DOT__input_buffer;
    VNoCChiselTester_InputBuffer* const __PVT__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_2__DOT__routers__DOT__input_unit_1_from_3__DOT__input_buffer;
    VNoCChiselTester_SwitchAllocator* const __PVT__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__switch_allocator;
    VNoCChiselTester_InputBuffer* const __PVT__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_0_from_0__DOT__input_buffer;
    VNoCChiselTester_InputBuffer* const __PVT__NoCChiselTester__DOT__th__DOT__lazyNoC__DOT__router_sink_domain_3__DOT__routers__DOT__input_unit_1_from_2__DOT__input_buffer;
    VNoCChiselTester_InputGen* const __PVT__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen;
    VNoCChiselTester_InputGen* const __PVT__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_1;
    VNoCChiselTester_InputGen* const __PVT__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_2;
    VNoCChiselTester_InputGen* const __PVT__NoCChiselTester__DOT__th__DOT__noc_tester__DOT__igen_3;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VNoCChiselTester___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VNoCChiselTester(VerilatedContext* contextp, const char* name = "TOP");
    explicit VNoCChiselTester(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VNoCChiselTester();
  private:
    VL_UNCOPYABLE(VNoCChiselTester);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
