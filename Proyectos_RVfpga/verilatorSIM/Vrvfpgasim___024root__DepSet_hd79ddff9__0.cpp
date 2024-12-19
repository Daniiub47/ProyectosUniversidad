// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim___024root.h"

void Vrvfpgasim___024root___eval_triggers__ico(Vrvfpgasim___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrvfpgasim___024root___dump_triggers__ico(Vrvfpgasim___024root* vlSelf);
#endif  // VL_DEBUG
void Vrvfpgasim___024root___eval_ico(Vrvfpgasim___024root* vlSelf);
void Vrvfpgasim___024root___eval_triggers__act(Vrvfpgasim___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrvfpgasim___024root___dump_triggers__act(Vrvfpgasim___024root* vlSelf);
#endif  // VL_DEBUG
void Vrvfpgasim___024root___timing_resume(Vrvfpgasim___024root* vlSelf);
void Vrvfpgasim___024root___eval_act(Vrvfpgasim___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrvfpgasim___024root___dump_triggers__nba(Vrvfpgasim___024root* vlSelf);
#endif  // VL_DEBUG
void Vrvfpgasim___024root___eval_nba(Vrvfpgasim___024root* vlSelf);

void Vrvfpgasim___024root___eval(Vrvfpgasim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvfpgasim___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<128> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vrvfpgasim___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vrvfpgasim___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("../src/rvfpgasim.v", 25, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vrvfpgasim___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vrvfpgasim___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vrvfpgasim___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("../src/rvfpgasim.v", 25, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vrvfpgasim___024root___timing_resume(vlSelf);
                Vrvfpgasim___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vrvfpgasim___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("../src/rvfpgasim.v", 25, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vrvfpgasim___024root___eval_nba(vlSelf);
        }
    }
}

void Vrvfpgasim___024root___timing_resume(Vrvfpgasim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvfpgasim___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0x7fU)) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vrvfpgasim___024root___eval_debug_assertions(Vrvfpgasim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvfpgasim___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->i_jtag_tck & 0xfeU))) {
        Verilated::overWidthError("i_jtag_tck");}
    if (VL_UNLIKELY((vlSelf->i_jtag_tms & 0xfeU))) {
        Verilated::overWidthError("i_jtag_tms");}
    if (VL_UNLIKELY((vlSelf->i_jtag_tdi & 0xfeU))) {
        Verilated::overWidthError("i_jtag_tdi");}
    if (VL_UNLIKELY((vlSelf->i_jtag_trst_n & 0xfeU))) {
        Verilated::overWidthError("i_jtag_trst_n");}
    if (VL_UNLIKELY((vlSelf->i_sw0 & 0xfeU))) {
        Verilated::overWidthError("i_sw0");}
    if (VL_UNLIKELY((vlSelf->i_btn0 & 0xfeU))) {
        Verilated::overWidthError("i_btn0");}
    if (VL_UNLIKELY((vlSelf->i_btn1 & 0xfeU))) {
        Verilated::overWidthError("i_btn1");}
    if (VL_UNLIKELY((vlSelf->i_btn2 & 0xfeU))) {
        Verilated::overWidthError("i_btn2");}
    if (VL_UNLIKELY((vlSelf->i_btn3 & 0xfeU))) {
        Verilated::overWidthError("i_btn3");}
    if (VL_UNLIKELY((vlSelf->i_btn4 & 0xfeU))) {
        Verilated::overWidthError("i_btn4");}
    if (VL_UNLIKELY((vlSelf->i_led16R & 0xfeU))) {
        Verilated::overWidthError("i_led16R");}
    if (VL_UNLIKELY((vlSelf->i_led16G & 0xfeU))) {
        Verilated::overWidthError("i_led16G");}
    if (VL_UNLIKELY((vlSelf->i_led16B & 0xfeU))) {
        Verilated::overWidthError("i_led16B");}
}
#endif  // VL_DEBUG
