// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim_rvfpgasim.h"

VL_ATTR_COLD void Vrvfpgasim_rvfpgasim___ctor_var_reset(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->i_jtag_tck = VL_RAND_RESET_I(1);
    vlSelf->i_jtag_tms = VL_RAND_RESET_I(1);
    vlSelf->i_jtag_tdi = VL_RAND_RESET_I(1);
    vlSelf->i_jtag_trst_n = VL_RAND_RESET_I(1);
    vlSelf->o_jtag_tdo = VL_RAND_RESET_I(1);
    vlSelf->o_uart_tx = VL_RAND_RESET_I(1);
    vlSelf->o_gpio = VL_RAND_RESET_I(1);
    vlSelf->i_sw0 = VL_RAND_RESET_I(1);
    vlSelf->i_btn0 = VL_RAND_RESET_I(1);
    vlSelf->i_btn1 = VL_RAND_RESET_I(1);
    vlSelf->i_btn2 = VL_RAND_RESET_I(1);
    vlSelf->i_btn3 = VL_RAND_RESET_I(1);
    vlSelf->i_btn4 = VL_RAND_RESET_I(1);
    vlSelf->i_led16R = VL_RAND_RESET_I(1);
    vlSelf->i_led16G = VL_RAND_RESET_I(1);
    vlSelf->i_led16B = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->__PVT__ram_init_file);
    VL_RAND_RESET_W(1024, vlSelf->__PVT__rom_init_file);
    vlSelf->__PVT__dmi_reg_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmi_hard_reset = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__dmi_wrapper__core_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinpt__swervolf__io_data = VL_RAND_RESET_Q(37);
    vlSelf->i_btn0__en = VL_RAND_RESET_I(1);
    vlSelf->i_btn1__en = VL_RAND_RESET_I(1);
    vlSelf->i_btn2__en = VL_RAND_RESET_I(1);
    vlSelf->i_btn3__en = VL_RAND_RESET_I(1);
    vlSelf->i_btn4__en = VL_RAND_RESET_I(1);
    vlSelf->i_led16R__en = VL_RAND_RESET_I(1);
    vlSelf->i_led16G__en = VL_RAND_RESET_I(1);
    vlSelf->i_led16B__en = VL_RAND_RESET_I(1);
    vlSelf->i_led16G__out = VL_RAND_RESET_I(1);
    vlSelf->i_led16R__out = VL_RAND_RESET_I(1);
    vlSelf->i_btn3__out = VL_RAND_RESET_I(1);
    vlSelf->i_btn2__out = VL_RAND_RESET_I(1);
    vlSelf->i_btn0__out = VL_RAND_RESET_I(1);
    vlSelf->i_btn4__out = VL_RAND_RESET_I(1);
    vlSelf->i_led16B__out = VL_RAND_RESET_I(1);
    vlSelf->i_btn1__out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmi_wrapper__DOT__dmireset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir = VL_RAND_RESET_I(5);
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr = VL_RAND_RESET_Q(41);
}
