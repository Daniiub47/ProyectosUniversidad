# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vrvfpgasim.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vrvfpgasim \
	Vrvfpgasim___024root__DepSet_h98fbe5a2__0 \
	Vrvfpgasim___024root__DepSet_hd79ddff9__0 \
	Vrvfpgasim_rvfpgasim__DepSet_h05a44532__0 \
	Vrvfpgasim_rvfpgasim__DepSet_h54793f69__0 \
	Vrvfpgasim_swervolf_core__DepSet_h195b7a7f__0 \
	Vrvfpgasim_swervolf_core__DepSet_h195b7a7f__1 \
	Vrvfpgasim_swervolf_core__DepSet_h593e5a2e__0 \
	Vrvfpgasim_swervolf_core__DepSet_h593e5a2e__1 \
	Vrvfpgasim_swervolf_core__DepSet_h593e5a2e__2 \
	Vrvfpgasim_swervolf_core__DepSet_h593e5a2e__3 \
	Vrvfpgasim_swervolf_core__DepSet_h593e5a2e__4 \
	Vrvfpgasim_swervolf_core__DepSet_h593e5a2e__5 \
	Vrvfpgasim_swervolf_core__DepSet_h593e5a2e__6 \
	Vrvfpgasim_axi_mem_wrapper__I6_M10000__DepSet_hd9fe21d1__0 \
	Vrvfpgasim_wb_mem_wrapper__M1000__DepSet_h10e38c30__0 \
	Vrvfpgasim_dpram64__S10000__DepSet_hc5afab67__0 \
	Vrvfpgasim_dpram64__S1000__DepSet_h737dbd02__0 \
	Vrvfpgasim_axi_demux__pi2__DepSet_h259290f3__0 \
	Vrvfpgasim_axi_demux__pi2__DepSet_h48024f9b__0 \
	Vrvfpgasim_axi_demux__pi2__DepSet_h3486f4aa__0 \
	Vrvfpgasim_axi_demux__pi2__DepSet_h1ae012bc__0 \
	Vrvfpgasim_axi_mux__pi4__DepSet_h6a9e4b6d__0 \
	Vrvfpgasim_axi_mux__pi4__DepSet_h6983493c__0 \
	Vrvfpgasim_axi_demux_id_counters__pi5__DepSet_hf095863d__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vrvfpgasim__ConstPool_0 \
	Vrvfpgasim__ConstPool_1 \
	Vrvfpgasim___024root__Slow \
	Vrvfpgasim___024root__DepSet_h98fbe5a2__0__Slow \
	Vrvfpgasim___024root__DepSet_hd79ddff9__0__Slow \
	Vrvfpgasim_rvfpgasim__Slow \
	Vrvfpgasim_rvfpgasim__DepSet_h05a44532__0__Slow \
	Vrvfpgasim_rvfpgasim__DepSet_h54793f69__0__Slow \
	Vrvfpgasim___024unit__Slow \
	Vrvfpgasim___024unit__DepSet_h8ec872cd__0__Slow \
	Vrvfpgasim_swervolf_core__Slow \
	Vrvfpgasim_swervolf_core__DepSet_h195b7a7f__0__Slow \
	Vrvfpgasim_swervolf_core__DepSet_h195b7a7f__1__Slow \
	Vrvfpgasim_swervolf_core__DepSet_h195b7a7f__2__Slow \
	Vrvfpgasim_swervolf_core__DepSet_h195b7a7f__3__Slow \
	Vrvfpgasim_swervolf_core__DepSet_h593e5a2e__0__Slow \
	Vrvfpgasim_swervolf_core__DepSet_h593e5a2e__1__Slow \
	Vrvfpgasim_swervolf_core__DepSet_h593e5a2e__2__Slow \
	Vrvfpgasim_swervolf_core__DepSet_h593e5a2e__3__Slow \
	Vrvfpgasim_axi_mem_wrapper__I6_M10000__Slow \
	Vrvfpgasim_axi_mem_wrapper__I6_M10000__DepSet_hd9fe21d1__0__Slow \
	Vrvfpgasim_axi_mem_wrapper__I6_M10000__DepSet_h18a3a3c8__0__Slow \
	Vrvfpgasim_wb_mem_wrapper__M1000__Slow \
	Vrvfpgasim_wb_mem_wrapper__M1000__DepSet_h5fb60867__0__Slow \
	Vrvfpgasim_dpram64__S10000__Slow \
	Vrvfpgasim_dpram64__S10000__DepSet_h14722936__0__Slow \
	Vrvfpgasim_dpram64__S1000__Slow \
	Vrvfpgasim_dpram64__S1000__DepSet_h83201799__0__Slow \
	Vrvfpgasim_axi_demux__pi2__Slow \
	Vrvfpgasim_axi_demux__pi2__DepSet_h259290f3__0__Slow \
	Vrvfpgasim_axi_demux__pi2__DepSet_h3486f4aa__0__Slow \
	Vrvfpgasim_axi_demux__pi2__DepSet_h1ae012bc__0__Slow \
	Vrvfpgasim_axi_mux__pi4__Slow \
	Vrvfpgasim_axi_mux__pi4__DepSet_h6a9e4b6d__0__Slow \
	Vrvfpgasim_axi_mux__pi4__DepSet_h6983493c__0__Slow \
	Vrvfpgasim_axi_demux_id_counters__pi5__Slow \
	Vrvfpgasim_axi_demux_id_counters__pi5__DepSet_hf095863d__0__Slow \
	Vrvfpgasim_axi_demux_id_counters__pi5__DepSet_hff87fe6c__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vrvfpgasim__Dpi \
	Vrvfpgasim__Trace__0 \
	Vrvfpgasim__Trace__1 \
	Vrvfpgasim__Trace__2 \
	Vrvfpgasim__Trace__3 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vrvfpgasim__Syms \
	Vrvfpgasim__Trace__0__Slow \
	Vrvfpgasim__Trace__1__Slow \
	Vrvfpgasim__Trace__2__Slow \
	Vrvfpgasim__Trace__3__Slow \
	Vrvfpgasim__Trace__4__Slow \
	Vrvfpgasim__Trace__5__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
