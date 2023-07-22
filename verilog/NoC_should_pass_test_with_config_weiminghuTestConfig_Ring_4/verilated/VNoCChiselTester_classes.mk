# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VNoCChiselTester.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 1
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VNoCChiselTester \
	VNoCChiselTester___024root__DepSet_ha3c84e2a__0 \
	VNoCChiselTester___024root__DepSet_ha3c84e2a__1 \
	VNoCChiselTester___024root__DepSet_ha3c84e2a__2 \
	VNoCChiselTester___024root__DepSet_ha3c84e2a__3 \
	VNoCChiselTester___024root__DepSet_ha3c84e2a__4 \
	VNoCChiselTester___024root__DepSet_ha3c84e2a__5 \
	VNoCChiselTester___024root__DepSet_h84c2f0b6__0 \
	VNoCChiselTester___024root__DepSet_h84c2f0b6__1 \
	VNoCChiselTester_InputGen__DepSet_h5898b536__0 \
	VNoCChiselTester_SwitchAllocator__DepSet_hdf58321d__0 \
	VNoCChiselTester_InputBuffer__DepSet_h34cd61cd__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VNoCChiselTester__ConstPool_0 \
	VNoCChiselTester___024root__Slow \
	VNoCChiselTester___024root__DepSet_ha3c84e2a__0__Slow \
	VNoCChiselTester___024root__DepSet_ha3c84e2a__1__Slow \
	VNoCChiselTester___024root__DepSet_ha3c84e2a__2__Slow \
	VNoCChiselTester___024root__DepSet_ha3c84e2a__3__Slow \
	VNoCChiselTester___024root__DepSet_ha3c84e2a__4__Slow \
	VNoCChiselTester___024root__DepSet_h84c2f0b6__0__Slow \
	VNoCChiselTester_InputGen__Slow \
	VNoCChiselTester_InputGen__DepSet_hd49b44a5__0__Slow \
	VNoCChiselTester_InputGen__DepSet_h5898b536__0__Slow \
	VNoCChiselTester_SwitchAllocator__Slow \
	VNoCChiselTester_SwitchAllocator__DepSet_h0e761293__0__Slow \
	VNoCChiselTester_SwitchAllocator__DepSet_hdf58321d__0__Slow \
	VNoCChiselTester_InputBuffer__Slow \
	VNoCChiselTester_InputBuffer__DepSet_h17b5fc9c__0__Slow \
	VNoCChiselTester_InputBuffer__DepSet_h34cd61cd__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VNoCChiselTester__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_cov \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
