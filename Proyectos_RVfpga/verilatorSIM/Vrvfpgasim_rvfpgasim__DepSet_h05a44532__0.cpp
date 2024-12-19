// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_rvfpgasim.h"

extern const VlUnpacked<CData/*3:0*/, 32> Vrvfpgasim__ConstPool__TABLE_h34f31d2e_0;

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim___ico_sequent__TOP__rvfpgasim__0(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___ico_sequent__TOP__rvfpgasim__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSymsp->TOP.i_jtag_tms) 
                     << 4U) | (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state));
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate 
        = Vrvfpgasim__ConstPool__TABLE_h34f31d2e_0[__Vtableidx1];
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
        = vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr;
    if ((4U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = ((2U & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))
                ? (((QData)((IData)(vlSymsp->TOP.i_jtag_tdi)) 
                    << 0x28U) | (0xffffffffffULL & 
                                 (vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                  >> 1U))) : ((1U & 
                                               ((IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en) 
                                                | (1U 
                                                   == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir))))
                                               ? (((QData)((IData)(vlSymsp->TOP.i_jtag_tdi)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                                                >> 1U))))))
                                               : (QData)((IData)(vlSymsp->TOP.i_jtag_tdi))));
    } else if ((3U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = (0x1fffffffffeULL & vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr);
        if ((1U & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
            vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 0x71ULL;
        } else if ((2U & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
            vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
                = ((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__dmi_reg_rdata)) 
                   << 2U);
        } else if ((1U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir))) {
            vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 1ULL;
        }
    } else if ((0xbU == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = (((QData)((IData)(vlSymsp->TOP.i_jtag_tdi)) 
                << 4U) | (QData)((IData)((0xfU & (IData)(
                                                         (vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                          >> 1U))))));
    } else if ((0xaU == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 1ULL;
    }
    vlSelf->__Vcellinpt__swervolf__io_data = (0x1fffff0000ULL 
                                              & (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((((IData)(vlSymsp->TOP.i_btn0) 
                                                                        << 4U) 
                                                                       | (((IData)(vlSymsp->TOP.i_btn1) 
                                                                           << 3U) 
                                                                          | (((IData)(vlSymsp->TOP.i_btn2) 
                                                                              << 2U) 
                                                                             | (((IData)(vlSymsp->TOP.i_btn3) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP.i_btn4))))) 
                                                                      | ((IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.io_data__out 
                                                                                >> 0x20U)) 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.io_data__en 
                                                                                >> 0x20U))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (0xffff0000U 
                                                                    & (0xfe340000U 
                                                                       | (((IData)(vlSymsp->TOP.i_sw0) 
                                                                           | ((IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.io_data__out 
                                                                                >> 0x10U)) 
                                                                              & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.io_data__en 
                                                                                >> 0x10U)))) 
                                                                          << 0x10U)))))));
    vlSelf->__Vcellinp__dmi_wrapper__core_rst_n = (1U 
                                                   & (~ (IData)(vlSymsp->TOP.rst)));
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim___nba_sequent__TOP__rvfpgasim__1(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___nba_sequent__TOP__rvfpgasim__1\n"); );
    // Body
    vlSelf->__Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
        = vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr;
    if (vlSymsp->TOP.i_jtag_trst_n) {
        vlSelf->__Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
            = (((8U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state)) 
                & ((IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en) 
                   >> 1U)) ? vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr
                : (0x1fffffffffcULL & vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr));
        vlSelf->__PVT__dmi_wrapper__DOT__dmireset = 
            (((8U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state)) 
              & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en)) 
             & (IData)((vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                        >> 0x10U)));
        vlSelf->__PVT__dmi_hard_reset = (((8U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state)) 
                                          & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en)) 
                                         & (IData)(
                                                   (vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                    >> 0x11U)));
    } else {
        vlSelf->__Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr = 0ULL;
        vlSelf->__PVT__dmi_wrapper__DOT__dmireset = 0U;
        vlSelf->__PVT__dmi_hard_reset = 0U;
    }
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim___nba_sequent__TOP__rvfpgasim__3(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___nba_sequent__TOP__rvfpgasim__3\n"); );
    // Body
    if (vlSymsp->TOP.i_jtag_trst_n) {
        if ((0U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
            vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir = 1U;
        } else if ((0xfU == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
            vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir 
                = ((0U == (0x1fU & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr)))
                    ? 0x1fU : (0x1fU & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr)));
        }
    } else {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir = 1U;
    }
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en 
        = (((0x11U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)) 
            << 1U) | (0x10U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)));
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim___nba_sequent__TOP__rvfpgasim__4(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___nba_sequent__TOP__rvfpgasim__4\n"); );
    // Body
    vlSelf->__Vcellinpt__swervolf__io_data = (0x1fffff0000ULL 
                                              & (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((((IData)(vlSymsp->TOP.i_btn0) 
                                                                        << 4U) 
                                                                       | (((IData)(vlSymsp->TOP.i_btn1) 
                                                                           << 3U) 
                                                                          | (((IData)(vlSymsp->TOP.i_btn2) 
                                                                              << 2U) 
                                                                             | (((IData)(vlSymsp->TOP.i_btn3) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP.i_btn4))))) 
                                                                      | ((IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.io_data__out 
                                                                                >> 0x20U)) 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.io_data__en 
                                                                                >> 0x20U))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (0xffff0000U 
                                                                    & (0xfe340000U 
                                                                       | (((IData)(vlSymsp->TOP.i_sw0) 
                                                                           | ((IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.io_data__out 
                                                                                >> 0x10U)) 
                                                                              & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.io_data__en 
                                                                                >> 0x10U)))) 
                                                                          << 0x10U)))))));
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim___nba_sequent__TOP__rvfpgasim__6(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___nba_sequent__TOP__rvfpgasim__6\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
        = vlSelf->__Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr;
    if (vlSymsp->TOP.i_jtag_trst_n) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
            = vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr;
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state 
            = vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate;
    } else {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr = 0ULL;
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state = 0U;
    }
    __Vtableidx1 = (((IData)(vlSymsp->TOP.i_jtag_tms) 
                     << 4U) | (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state));
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate 
        = Vrvfpgasim__ConstPool__TABLE_h34f31d2e_0[__Vtableidx1];
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim___nba_comb__TOP__rvfpgasim__0(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___nba_comb__TOP__rvfpgasim__0\n"); );
    // Body
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
        = vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr;
    if ((4U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = ((2U & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))
                ? (((QData)((IData)(vlSymsp->TOP.i_jtag_tdi)) 
                    << 0x28U) | (0xffffffffffULL & 
                                 (vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                  >> 1U))) : ((1U & 
                                               ((IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en) 
                                                | (1U 
                                                   == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir))))
                                               ? (((QData)((IData)(vlSymsp->TOP.i_jtag_tdi)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                                                >> 1U))))))
                                               : (QData)((IData)(vlSymsp->TOP.i_jtag_tdi))));
    } else if ((3U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = (0x1fffffffffeULL & vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr);
        if ((1U & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
            vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 0x71ULL;
        } else if ((2U & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
            vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
                = ((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__dmi_reg_rdata)) 
                   << 2U);
        } else if ((1U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir))) {
            vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 1ULL;
        }
    } else if ((0xbU == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = (((QData)((IData)(vlSymsp->TOP.i_jtag_tdi)) 
                << 4U) | (QData)((IData)((0xfU & (IData)(
                                                         (vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                          >> 1U))))));
    } else if ((0xaU == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 1ULL;
    }
}
