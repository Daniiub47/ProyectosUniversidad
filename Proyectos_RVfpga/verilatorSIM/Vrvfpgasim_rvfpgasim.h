// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvfpgasim.h for the primary calling header

#ifndef VERILATED_VRVFPGASIM_RVFPGASIM_H_
#define VERILATED_VRVFPGASIM_RVFPGASIM_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vrvfpgasim__Syms;
class Vrvfpgasim_axi_mem_wrapper__I6_M10000;
class Vrvfpgasim_swervolf_core;


class Vrvfpgasim_rvfpgasim final : public VerilatedModule {
  public:
    // CELLS
    Vrvfpgasim_axi_mem_wrapper__I6_M10000* ram;
    Vrvfpgasim_swervolf_core* swervolf;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(i_jtag_tck,0,0);
    VL_IN8(i_jtag_trst_n,0,0);
    CData/*0:0*/ __Vcellinp__dmi_wrapper__core_rst_n;
    VL_IN8(rst,0,0);
    VL_IN8(i_jtag_tms,0,0);
    VL_IN8(i_jtag_tdi,0,0);
    VL_OUT8(o_jtag_tdo,0,0);
    VL_OUT8(o_uart_tx,0,0);
    VL_OUT8(o_gpio,0,0);
    VL_IN8(i_sw0,0,0);
    VL_IN8(i_btn0,0,0);
    VL_IN8(i_btn1,0,0);
    VL_IN8(i_btn2,0,0);
    VL_IN8(i_btn3,0,0);
    VL_IN8(i_btn4,0,0);
    VL_IN8(i_led16R,0,0);
    VL_IN8(i_led16G,0,0);
    VL_IN8(i_led16B,0,0);
    CData/*0:0*/ __PVT__dmi_reg_en;
    CData/*0:0*/ __PVT__dmi_hard_reset;
    VL_OUT8(i_btn0__en,0,0);
    VL_OUT8(i_btn1__en,0,0);
    VL_OUT8(i_btn2__en,0,0);
    VL_OUT8(i_btn3__en,0,0);
    VL_OUT8(i_btn4__en,0,0);
    VL_OUT8(i_led16R__en,0,0);
    VL_OUT8(i_led16G__en,0,0);
    VL_OUT8(i_led16B__en,0,0);
    VL_OUT8(i_led16G__out,0,0);
    VL_OUT8(i_led16R__out,0,0);
    VL_OUT8(i_btn3__out,0,0);
    VL_OUT8(i_btn2__out,0,0);
    VL_OUT8(i_btn0__out,0,0);
    VL_OUT8(i_btn4__out,0,0);
    VL_OUT8(i_led16B__out,0,0);
    VL_OUT8(i_btn1__out,0,0);
    CData/*0:0*/ __PVT__dmi_wrapper__DOT__dmireset;
    CData/*3:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state;
    CData/*3:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate;
    CData/*4:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir;
    CData/*1:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en;
    CData/*0:0*/ __PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en;
    CData/*2:0*/ __PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden;
    CData/*2:0*/ __PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren;
    VlWide<32>/*1023:0*/ __PVT__ram_init_file;
    VlWide<32>/*1023:0*/ __PVT__rom_init_file;
    QData/*36:0*/ __Vcellinpt__swervolf__io_data;
    QData/*40:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr;
    QData/*40:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr;
    QData/*40:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr;
    QData/*40:0*/ __Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr;

    // INTERNAL VARIABLES
    Vrvfpgasim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrvfpgasim_rvfpgasim(Vrvfpgasim__Syms* symsp, const char* v__name);
    ~Vrvfpgasim_rvfpgasim();
    VL_UNCOPYABLE(Vrvfpgasim_rvfpgasim);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
