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
	VNoCChiselTester___024root__DepSet_h84c2f0b6__0 \
	VNoCChiselTester___024root__DepSet_h84c2f0b6__1 \
	VNoCChiselTester_InputUnit__DepSet_h7e35a447__0 \
	VNoCChiselTester_InputUnit_2__DepSet_h3fdb4a7b__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VNoCChiselTester__ConstPool_0 \
	VNoCChiselTester___024root__Slow \
	VNoCChiselTester___024root__DepSet_ha3c84e2a__0__Slow \
	VNoCChiselTester___024root__DepSet_h84c2f0b6__0__Slow \
	VNoCChiselTester___024root__DepSet_h84c2f0b6__1__Slow \
	VNoCChiselTester_InputUnit__Slow \
	VNoCChiselTester_InputUnit__DepSet_h3c0ca78b__0__Slow \
	VNoCChiselTester_InputUnit__DepSet_h7e35a447__0__Slow \
	VNoCChiselTester_InputUnit_2__Slow \
	VNoCChiselTester_InputUnit_2__DepSet_hddeaad14__0__Slow \
	VNoCChiselTester_InputUnit_2__DepSet_h3fdb4a7b__0__Slow \

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
