// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim_swervolf_core.h"

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__14(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__14\n"); );
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_halt_req 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren_Q) 
           & (0x80000000U == (0x80000002U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)));
    if ((8U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_halt_req = 0U;
        } else if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_halt_req = 0U;
        }
    } else if ((1U & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)))) {
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_halt_req 
                    = (IData)((0x80000000U == (0x80000002U 
                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)));
            }
        }
    }
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__15(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__15\n"); );
    // Body
    vlSelf->__PVT__timer_ptcR__DOT__hrc_match = ((IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl) 
                                                 & (vlSelf->__PVT__timer_ptcR__DOT__rptc_cntr 
                                                    == vlSelf->__PVT__timer_ptcR__DOT__rptc_hrc));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__16(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__16\n"); );
    // Body
    vlSelf->__PVT__timer_ptcR__DOT__lrc_match = ((IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl) 
                                                 & (vlSelf->__PVT__timer_ptcR__DOT__rptc_cntr 
                                                    == vlSelf->__PVT__timer_ptcR__DOT__rptc_lrc));
    vlSelf->__PVT__timer_ptcR__DOT__restart = (1U & 
                                               (((~ 
                                                  ((IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl) 
                                                   >> 4U)) 
                                                 & (IData)(vlSelf->__PVT__timer_ptcR__DOT__lrc_match)) 
                                                | ((IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl) 
                                                   >> 7U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__17(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__17\n"); );
    // Body
    vlSelf->__PVT__timer_ptcG__DOT__hrc_match = ((IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl) 
                                                 & (vlSelf->__PVT__timer_ptcG__DOT__rptc_cntr 
                                                    == vlSelf->__PVT__timer_ptcG__DOT__rptc_hrc));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__18(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__18\n"); );
    // Body
    vlSelf->__PVT__timer_ptcG__DOT__lrc_match = ((IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl) 
                                                 & (vlSelf->__PVT__timer_ptcG__DOT__rptc_cntr 
                                                    == vlSelf->__PVT__timer_ptcG__DOT__rptc_lrc));
    vlSelf->__PVT__timer_ptcG__DOT__restart = (1U & 
                                               (((~ 
                                                  ((IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl) 
                                                   >> 4U)) 
                                                 & (IData)(vlSelf->__PVT__timer_ptcG__DOT__lrc_match)) 
                                                | ((IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl) 
                                                   >> 7U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__19(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__19\n"); );
    // Body
    vlSelf->__PVT__timer_ptcB__DOT__hrc_match = ((IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl) 
                                                 & (vlSelf->__PVT__timer_ptcB__DOT__rptc_cntr 
                                                    == vlSelf->__PVT__timer_ptcB__DOT__rptc_hrc));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__20(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__20\n"); );
    // Body
    vlSelf->__PVT__timer_ptcB__DOT__lrc_match = ((IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl) 
                                                 & (vlSelf->__PVT__timer_ptcB__DOT__rptc_cntr 
                                                    == vlSelf->__PVT__timer_ptcB__DOT__rptc_lrc));
    vlSelf->__PVT__timer_ptcB__DOT__restart = (1U & 
                                               (((~ 
                                                  ((IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl) 
                                                   >> 4U)) 
                                                 & (IData)(vlSelf->__PVT__timer_ptcB__DOT__lrc_match)) 
                                                | ((IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl) 
                                                   >> 7U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__22(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__22\n"); );
    // Body
    vlSelf->__PVT__timer_ptc__DOT__hrc_match = ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                                & (vlSelf->__PVT__timer_ptc__DOT__rptc_cntr 
                                                   == vlSelf->__PVT__timer_ptc__DOT__rptc_hrc));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__23(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__23\n"); );
    // Body
    vlSelf->__PVT__timer_ptc__DOT__lrc_match = ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                                & (vlSelf->__PVT__timer_ptc__DOT__rptc_cntr 
                                                   == vlSelf->__PVT__timer_ptc__DOT__rptc_lrc));
    vlSelf->__PVT__timer_ptc__DOT__restart = (1U & 
                                              (((~ 
                                                 ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                                  >> 4U)) 
                                                & (IData)(vlSelf->__PVT__timer_ptc__DOT__lrc_match)) 
                                               | ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                                  >> 7U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__24(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__24\n"); );
    // Body
    if ((8U & (IData)(vlSelf->__PVT__wb_adr))) {
        if ((4U & (IData)(vlSelf->__PVT__wb_adr))) {
            vlSelf->__PVT__gpio_module__DOT__wb_dat 
                = vlSelf->__PVT__gpio_module__DOT__rgpio_in;
            vlSelf->__PVT__gpio2_module__DOT__wb_dat 
                = vlSelf->__PVT__gpio2_module__DOT__rgpio_in;
        } else if ((2U & (IData)(vlSelf->__PVT__wb_adr))) {
            vlSelf->__PVT__gpio_module__DOT__wb_dat 
                = vlSelf->__PVT__gpio_module__DOT__rgpio_in;
            vlSelf->__PVT__gpio2_module__DOT__wb_dat 
                = vlSelf->__PVT__gpio2_module__DOT__rgpio_in;
        } else if ((1U & (IData)(vlSelf->__PVT__wb_adr))) {
            vlSelf->__PVT__gpio_module__DOT__wb_dat 
                = vlSelf->__PVT__gpio_module__DOT__rgpio_nec;
            vlSelf->__PVT__gpio2_module__DOT__wb_dat 
                = vlSelf->__PVT__gpio2_module__DOT__rgpio_nec;
        } else {
            vlSelf->__PVT__gpio_module__DOT__wb_dat 
                = vlSelf->__PVT__gpio_module__DOT__rgpio_eclk;
            vlSelf->__PVT__gpio2_module__DOT__wb_dat 
                = vlSelf->__PVT__gpio2_module__DOT__rgpio_eclk;
        }
    } else if ((4U & (IData)(vlSelf->__PVT__wb_adr))) {
        if ((2U & (IData)(vlSelf->__PVT__wb_adr))) {
            if ((1U & (IData)(vlSelf->__PVT__wb_adr))) {
                vlSelf->__PVT__gpio_module__DOT__wb_dat 
                    = vlSelf->__PVT__gpio_module__DOT__rgpio_ints;
                vlSelf->__PVT__gpio2_module__DOT__wb_dat 
                    = vlSelf->__PVT__gpio2_module__DOT__rgpio_ints;
            } else {
                vlSelf->__PVT__gpio_module__DOT__wb_dat 
                    = vlSelf->__PVT__gpio_module__DOT__rgpio_ctrl;
                vlSelf->__PVT__gpio2_module__DOT__wb_dat 
                    = vlSelf->__PVT__gpio2_module__DOT__rgpio_ctrl;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__wb_adr))) {
            vlSelf->__PVT__gpio_module__DOT__wb_dat 
                = vlSelf->__PVT__gpio_module__DOT__rgpio_aux;
            vlSelf->__PVT__gpio2_module__DOT__wb_dat 
                = vlSelf->__PVT__gpio2_module__DOT__rgpio_aux;
        } else {
            vlSelf->__PVT__gpio_module__DOT__wb_dat 
                = vlSelf->__PVT__gpio_module__DOT__rgpio_ptrig;
            vlSelf->__PVT__gpio2_module__DOT__wb_dat 
                = vlSelf->__PVT__gpio2_module__DOT__rgpio_ptrig;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__wb_adr))) {
        if ((1U & (IData)(vlSelf->__PVT__wb_adr))) {
            vlSelf->__PVT__gpio_module__DOT__wb_dat 
                = vlSelf->__PVT__gpio_module__DOT__rgpio_inte;
            vlSelf->__PVT__gpio2_module__DOT__wb_dat 
                = vlSelf->__PVT__gpio2_module__DOT__rgpio_inte;
        } else {
            vlSelf->__PVT__gpio_module__DOT__wb_dat 
                = vlSelf->__PVT__gpio_module__DOT__rgpio_oe;
            vlSelf->__PVT__gpio2_module__DOT__wb_dat 
                = vlSelf->__PVT__gpio2_module__DOT__rgpio_oe;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__wb_adr))) {
        vlSelf->__PVT__gpio_module__DOT__wb_dat = vlSelf->__PVT__gpio_module__DOT__rgpio_out;
        vlSelf->__PVT__gpio2_module__DOT__wb_dat = vlSelf->__PVT__gpio2_module__DOT__rgpio_out;
    } else {
        vlSelf->__PVT__gpio_module__DOT__wb_dat = vlSelf->__PVT__gpio_module__DOT__rgpio_in;
        vlSelf->__PVT__gpio2_module__DOT__wb_dat = vlSelf->__PVT__gpio2_module__DOT__rgpio_in;
    }
    vlSelf->__PVT__wb_s2m_io_err = (((0xaU >= (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)) 
                                     & ((((IData)(vlSelf->__PVT__wb_s2m_spi_accel_err) 
                                          << 7U) | 
                                         (((IData)(vlSelf->__PVT__wb_s2m_gpio_err) 
                                           << 2U) | 
                                          ((IData)(vlSelf->__PVT__wb_s2m_gpio2_err) 
                                           << 1U))) 
                                        >> (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel))) 
                                    | (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__wbm_err));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__25(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__25\n"); );
    // Body
    vlSelf->__PVT__wb_s2m_ptc_dat = ((1U == (7U & (IData)(vlSelf->__PVT__wb_adr)))
                                      ? vlSelf->__PVT__timer_ptc__DOT__rptc_hrc
                                      : ((2U == (7U 
                                                 & (IData)(vlSelf->__PVT__wb_adr)))
                                          ? vlSelf->__PVT__timer_ptc__DOT__rptc_lrc
                                          : ((3U == 
                                              (7U & (IData)(vlSelf->__PVT__wb_adr)))
                                              ? (IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl)
                                              : vlSelf->__PVT__timer_ptc__DOT__rptc_cntr)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__26(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__26\n"); );
    // Body
    vlSelf->__PVT__wb_s2m_ptcR_dat = ((1U == (7U & (IData)(vlSelf->__PVT__wb_adr)))
                                       ? vlSelf->__PVT__timer_ptcR__DOT__rptc_hrc
                                       : ((2U == (7U 
                                                  & (IData)(vlSelf->__PVT__wb_adr)))
                                           ? vlSelf->__PVT__timer_ptcR__DOT__rptc_lrc
                                           : ((3U == 
                                               (7U 
                                                & (IData)(vlSelf->__PVT__wb_adr)))
                                               ? (IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl)
                                               : vlSelf->__PVT__timer_ptcR__DOT__rptc_cntr)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__27(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__27\n"); );
    // Body
    vlSelf->__PVT__wb_s2m_ptcG_dat = ((1U == (7U & (IData)(vlSelf->__PVT__wb_adr)))
                                       ? vlSelf->__PVT__timer_ptcG__DOT__rptc_hrc
                                       : ((2U == (7U 
                                                  & (IData)(vlSelf->__PVT__wb_adr)))
                                           ? vlSelf->__PVT__timer_ptcG__DOT__rptc_lrc
                                           : ((3U == 
                                               (7U 
                                                & (IData)(vlSelf->__PVT__wb_adr)))
                                               ? (IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl)
                                               : vlSelf->__PVT__timer_ptcG__DOT__rptc_cntr)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__28(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__28\n"); );
    // Body
    vlSelf->__PVT__wb_s2m_ptcB_dat = ((1U == (7U & (IData)(vlSelf->__PVT__wb_adr)))
                                       ? vlSelf->__PVT__timer_ptcB__DOT__rptc_hrc
                                       : ((2U == (7U 
                                                  & (IData)(vlSelf->__PVT__wb_adr)))
                                           ? vlSelf->__PVT__timer_ptcB__DOT__rptc_lrc
                                           : ((3U == 
                                               (7U 
                                                & (IData)(vlSelf->__PVT__wb_adr)))
                                               ? (IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl)
                                               : vlSelf->__PVT__timer_ptcB__DOT__rptc_cntr)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__31(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__31\n"); );
    // Init
    CData/*0:0*/ swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h696f87fd__0;
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h696f87fd__0 = 0;
    CData/*0:0*/ swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4fabf379__0;
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4fabf379__0 = 0;
    CData/*0:0*/ swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hfd887dcb__0;
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hfd887dcb__0 = 0;
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f 
        = (1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_halt_req)) 
                 & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                    >> 0xdU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req 
        = (1U & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 3U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_halt_req) 
                                | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                   >> 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running 
        = (1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                 | (IData)((2U == (0x802U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_mp_e4) 
              | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_mp_e4) 
                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4) 
                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4) 
                       | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4) 
                          | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__fence_i_e4) 
                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4) 
                                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_rfnpc_dc4) 
                                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                                      | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_npc_wb) 
                                         | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_wr_pause_wb) 
                                            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req 
        = (((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                >> 3U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req)) 
           | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h5acd70c9__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__core_empty 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_halt_idle_any) 
           & (IData)((((0xc0000U == (0xc0400U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)) 
                       & (0U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                      & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_leak_one_wb 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 2U) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                            & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                >> 0x10U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers 
        = (1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running)) 
                 & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    >> 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_halt 
        = (1U & (((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                   >> 0xeU) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                               >> 3U)) & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                              >> 4U)) 
                                          & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4)) 
                                             & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4)) 
                                                & ((~ 
                                                    (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                     >> 0x15U)) 
                                                   & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_noredir_wb)) 
                                                      & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed)))))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h9147238d__0 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4) 
                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                     >> 0xcU) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                 | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted 
        = (1U & (((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                   >> 0xeU) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__core_empty) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__halt_taken))) 
                 | ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)) 
                    & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                       >> 0x11U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted 
        = ((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
               >> 0xeU)) & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                              >> 3U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__core_empty) 
                                        & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req)) 
                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__halt_taken)))) 
                            | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h22bacf35__0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i1_stall_in 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_leak_one_wb) 
           | ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 2U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i1_stall)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__coll_ff__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__branch_error_bank_conflict_f1) 
            << 9U) | (((((0x1ffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
                                    >> 6U)) == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_rd_tag_f1)) 
                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__exu_mp_valid) 
                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1) 
                              & ((3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U] 
                                        >> 0x16U)) 
                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))))) 
                       << 8U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_bank_decoded) 
                                  << 4U) | ((8U & (
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
                                                   << 3U)) 
                                            | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_way_wb) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((0x7ffffffeU 
                                                       & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_leak_one_wb) 
                                                           << 1U) 
                                                          & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                             >> 1U))) 
                                                      | (0xfffffffeU 
                                                         & (((~ 
                                                              ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                               >> 2U)) 
                                                             << 1U) 
                                                            & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout))))) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_wb) 
                  | (((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl0_ff__dout)) 
                      & (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state)) 
                          | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl0_ff__dout) 
                             >> 2U)) & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers)) 
                                        & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                               >> 2U)) 
                                           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl0_ff__dout) 
                                              >> 1U))))) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_timer_t0_pulse))))
            ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_timer_t0_pulse)
                ? 0U : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_wb)
                         ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                         : ((IData)(1U) + vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0)))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_wb) 
                  | (((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl1_ff__dout)) 
                      & (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state)) 
                          | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl1_ff__dout) 
                             >> 2U)) & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers)) 
                                        & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                               >> 2U)) 
                                           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl1_ff__dout) 
                                              >> 1U))))) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_timer_t1_pulse))))
            ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_timer_t1_pulse)
                ? 0U : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_wb)
                         ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                         : ((IData)(1U) + vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1)))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hbb909c4d__0 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                  >> 2U) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff) 
                            | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h9147238d__0))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted) 
           & (IData)((0U == (0x20004U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req) 
           & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted)) 
              | (IData)((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                          >> 3U) & (0x30U == (0x70U 
                                              & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req) 
                 | ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted)) 
                    & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                       >> 0xeU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns 
        = (1U & ((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 0xeU)) & ((((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                        >> 9U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_halt_req_sync_qual)) 
                                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mpmc_wb) 
                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                         & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                >> 9U)) 
                                            & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                  >> 0xeU)))))) 
                                  | ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted)) 
                                     & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                        >> 3U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x7fffffffU & ((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dpc_wb) 
                                 | ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 3U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc))))
                           ? (((- (IData)(((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                               >> 3U)) 
                                           & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dpc_wb))))) 
                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                  >> 1U)) | (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                             >> 3U)))) 
                                              & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pwbc_ff__dout) 
                                             | ((- (IData)(
                                                           ((~ 
                                                             (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                              >> 3U)) 
                                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc)))) 
                                                & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__npwbc_ff__dout)))
                           : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dpc_ff__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__dcsr_ff__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le)
            ? ((0x3f80U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
               | (((0x40U & ((- (IData)((1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                >> 0xbU) 
                                               & ((~ 
                                                   ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                    >> 7U)) 
                                                  & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb)) 
                                                     & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req)))))))) 
                             << 4U)) | ((0x30U & ((- (IData)(
                                                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req) 
                                                              & ((~ 
                                                                  ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                                   >> 7U)) 
                                                                 & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb)))))) 
                                                  << 4U)) 
                                        | ((0x10U & 
                                            ((- (IData)(
                                                        (1U 
                                                         & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb)) 
                                                            & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                               >> 7U))))) 
                                             << 4U)) 
                                           | (0x20U 
                                              & ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb))) 
                                                 << 4U))))) 
                  | (0xfU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout))))
            : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dcsr_wb)
                ? ((0x2000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                               >> 2U)) | ((0x300U & 
                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                            >> 2U)) 
                                          | ((0x70U 
                                              & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                                             | ((2U 
                                                 & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_in_debug_mode) 
                                                     << 1U) 
                                                    | (0xfffffffeU 
                                                       & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)))) 
                                                | (1U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                      >> 2U))))))
                : ((0x3ffcU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                   | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_in_debug_mode) 
                       << 1U) | (1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns) 
                 | ((~ ((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f))) 
                    & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                       >> 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns) 
                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                     >> 4U) & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)) 
                               & (~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 0xeU))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le) 
                  | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dcsr_wb) 
                     | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode) 
                        | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                           >> 1U))))) ? (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__dcsr_ff__din)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_int_detected) 
           & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode)) 
              & (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)) 
                  | (IData)((((2U == (0x802U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)) 
                              & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                 >> 9U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4))))) 
                 & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4)) 
                    & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4)) 
                       & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed)) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_e4))))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_he16576c4__0 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts 
        = (1U & ((IData)((0x10U == (0x14U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))) 
                 | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode) 
                     & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running)) 
                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4))) 
                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode) 
                       | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                           >> 9U) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi) 
                                     | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_e4) 
                                        | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h9147238d__0))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ce_int 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready) 
           & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready)) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4fabf379__0 
        = (1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready)) 
                 & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready)) 
                    & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready) 
           & (IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4fabf379__0));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hfd887dcb__0 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready)) 
           & (IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4fabf379__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hb224a17d__0) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible) 
              & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff)) 
                 & (IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hfd887dcb__0))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready) 
            | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible) 
              & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff)) 
                 & ((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hb224a17d__0)) 
                    & (IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hfd887dcb__0)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_cause_e4 
        = ((~ (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)))) 
           & ((0xbU & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int)))) 
              | ((7U & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int)))) 
                 | ((0x1dU & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)))) 
                    | ((0x1cU & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int)))) 
                       | ((0x1eU & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ce_int)))) 
                          | ((2U & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4)))) 
                             | ((0xbU & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ecall_e4)))) 
                                | ((1U & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4)))) 
                                   | ((3U & (- (IData)(
                                                       ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_e4) 
                                                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4))))) 
                                      | ((4U & (- (IData)(
                                                          ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4)) 
                                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_dc4))))) 
                                         | ((5U & (- (IData)(
                                                             ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4)) 
                                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_dc4))))) 
                                            | ((6U 
                                                & (- (IData)(
                                                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_dc4) 
                                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4))))) 
                                               | (7U 
                                                  & (- (IData)(
                                                               ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_dc4) 
                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4))))))))))))))))));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h696f87fd__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h6d3c4568__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int) 
           | (IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h696f87fd__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int) 
              | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi) 
                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ce_int) 
                    | (IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h696f87fd__0)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h31a9241c__0 
        = (1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid)) 
                 & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                       >> 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4) 
              | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4) 
                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_halt) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__exthaltff__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_halt_req_sync_qual) 
            << 9U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_sync_qual) 
                       << 8U) | ((0x80U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h22bacf35__0) 
                                            << 7U) 
                                           | (0xffffff80U 
                                              & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                 & (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)) 
                                                     & (~ 
                                                        ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                         >> 3U))) 
                                                    << 7U))))) 
                                 | (((IData)((0x204U 
                                              == (0x204U 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)))) 
                                     << 6U) | ((((IData)(
                                                         (0U 
                                                          != 
                                                          (0xa0U 
                                                           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)))) 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_sync_qual)) 
                                                << 5U) 
                                               | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted) 
                                                         << 2U) 
                                                        | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready) 
                                                              & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hbb909c4d__0)) 
                                                             << 1U) 
                                                            | (0xfffffffeU 
                                                               & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible) 
                                                                   << 1U) 
                                                                  & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                                     & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h31a9241c__0) 
                                                                        << 1U))))) 
                                                           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready) 
                                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hbb909c4d__0)) 
                                                              | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible) 
                                                                 & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h31a9241c__0)))))))))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__freeff__din 
        = ((0x200U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                      << 1U)) | ((0x100U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                            << 5U)) 
                                 | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze) 
                                     << 7U) | ((((~ 
                                                  ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                   >> 7U)) 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze)) 
                                                << 6U) 
                                               | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__e4_valid) 
                                                   << 5U) 
                                                  | ((((~ 
                                                        ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                         >> 2U)) 
                                                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__is_sideeffects_dc3) 
                                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze))) 
                                                      << 4U) 
                                                     | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode) 
                                                         << 3U) 
                                                        | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4) 
                                                            << 2U) 
                                                           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4) 
                                                                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4) 
                                                                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4) 
                                                                      | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h5d31a63a__0) 
                                                                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4))))) 
                                                               << 1U) 
                                                              | ((((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4) 
                                                                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                                                                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4)) 
                                                                     | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                                                        >> 9U)) 
                                                                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4)) 
                                                                   | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h5d31a63a__0)) 
                                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)) 
                                                                 | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4)))))))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu3inc_ff__din 
        = ((- (IData)((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mgpmc_b))))) 
           & ((1U & (- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6))))) 
              | ((1U & ((- (IData)((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                        & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                           >> 3U))) | ((1U & ((- (IData)(
                                                         (3U 
                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                              & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 4U))) 
                                       | (((- (IData)(
                                                      (4U 
                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hfe3e1960__0)) 
                                          | (((- (IData)(
                                                         (5U 
                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                              & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h36d36c80__0)) 
                                             | (((- (IData)(
                                                            (6U 
                                                             == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h21c133cf__0)) 
                                                | (((- (IData)(
                                                               (7U 
                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_instr_aligned)) 
                                                   | (((- (IData)(
                                                                  (8U 
                                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_instr_decoded)) 
                                                      | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hb663ef54__0) 
                                                         | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h8134bee9__0) 
                                                            | (((- (IData)(
                                                                           (9U 
                                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hdf8d7c0c__0)) 
                                                               | (((- (IData)(
                                                                              (0xaU 
                                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h100c5096__0)) 
                                                                  | (((- (IData)(
                                                                                (0xbU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                      & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h3b52d1c5__0)) 
                                                                     | (((- (IData)(
                                                                                (0xcU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                         & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h195dce9e__0)) 
                                                                        | (((- (IData)(
                                                                                (0xdU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                            & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h948f6a9c__0)) 
                                                                           | (((- (IData)(
                                                                                (0xeU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h32ed80bc__0)) 
                                                                              | (((- (IData)(
                                                                                (0xfU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h158a5246__0)) 
                                                                                | (((- (IData)(
                                                                                (0x10U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (5U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x12U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x11U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (7U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x13U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (8U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x14U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (9U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x15U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (0xaU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x16U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (0xbU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x17U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (0xcU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x18U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hb7f77ece__0)) 
                                                                                | (((- (IData)(
                                                                                (0x19U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h71282e59__0)) 
                                                                                | (((- (IData)(
                                                                                (0x1aU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hae98d430__0)) 
                                                                                | (((- (IData)(
                                                                                (0x1bU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_ha111207d__0)) 
                                                                                | (((- (IData)(
                                                                                (0x1cU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_fetch_stall)) 
                                                                                | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hb663ef54__0) 
                                                                                | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h8134bee9__0) 
                                                                                | (((- (IData)(
                                                                                (0x1fU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stall)) 
                                                                                | (((- (IData)(
                                                                                (0x20U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall)) 
                                                                                | (((- (IData)(
                                                                                (0x21U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze)) 
                                                                                | (((- (IData)(
                                                                                (0x22U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_store_stall_any)) 
                                                                                | (((- (IData)(
                                                                                (0x23U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any)) 
                                                                                | (((- (IData)(
                                                                                (0x24U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_iccm_stall_any)) 
                                                                                | (((- (IData)(
                                                                                (0x25U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hc39314fc__0)) 
                                                                                | (((- (IData)(
                                                                                (0x26U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h6d3c4568__0)) 
                                                                                | (((- (IData)(
                                                                                (0x27U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                                                                | (((- (IData)(
                                                                                (0x28U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4)) 
                                                                                | (((- (IData)(
                                                                                (0x29U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h323c9dd7__0)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x2aU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout))) 
                                                                                | (((- (IData)(
                                                                                (0x2bU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_trxn)) 
                                                                                | (((- (IData)(
                                                                                (0x2cU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_misaligned)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x2dU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 2U))) 
                                                                                | (((- (IData)(
                                                                                (0x2eU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_error)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x2fU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 1U))) 
                                                                                | (((- (IData)(
                                                                                (0x30U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_busy)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x31U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus)))) 
                                                                                | ((- (IData)(
                                                                                (0x32U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h38b6fe82__0))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu2inc_ff__din 
        = ((- (IData)((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mgpmc_b))))) 
           & ((1U & (- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5))))) 
              | ((1U & ((- (IData)((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                        & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                           >> 3U))) | ((1U & ((- (IData)(
                                                         (3U 
                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                              & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 4U))) 
                                       | (((- (IData)(
                                                      (4U 
                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hfe3e1960__0)) 
                                          | (((- (IData)(
                                                         (5U 
                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                              & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h36d36c80__0)) 
                                             | (((- (IData)(
                                                            (6U 
                                                             == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h21c133cf__0)) 
                                                | (((- (IData)(
                                                               (7U 
                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_instr_aligned)) 
                                                   | (((- (IData)(
                                                                  (8U 
                                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_instr_decoded)) 
                                                      | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1b902452__0) 
                                                         | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h5d2e8175__0) 
                                                            | (((- (IData)(
                                                                           (9U 
                                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hdf8d7c0c__0)) 
                                                               | (((- (IData)(
                                                                              (0xaU 
                                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h100c5096__0)) 
                                                                  | (((- (IData)(
                                                                                (0xbU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                      & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h3b52d1c5__0)) 
                                                                     | (((- (IData)(
                                                                                (0xcU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                         & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h195dce9e__0)) 
                                                                        | (((- (IData)(
                                                                                (0xdU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                            & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h948f6a9c__0)) 
                                                                           | (((- (IData)(
                                                                                (0xeU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h32ed80bc__0)) 
                                                                              | (((- (IData)(
                                                                                (0xfU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h158a5246__0)) 
                                                                                | (((- (IData)(
                                                                                (0x10U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (5U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x12U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x11U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (7U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x13U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (8U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x14U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (9U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x15U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (0xaU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x16U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (0xbU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x17U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (0xcU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x18U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hb7f77ece__0)) 
                                                                                | (((- (IData)(
                                                                                (0x19U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h71282e59__0)) 
                                                                                | (((- (IData)(
                                                                                (0x1aU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hae98d430__0)) 
                                                                                | (((- (IData)(
                                                                                (0x1bU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_ha111207d__0)) 
                                                                                | (((- (IData)(
                                                                                (0x1cU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_fetch_stall)) 
                                                                                | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1b902452__0) 
                                                                                | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h5d2e8175__0) 
                                                                                | (((- (IData)(
                                                                                (0x1fU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stall)) 
                                                                                | (((- (IData)(
                                                                                (0x20U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall)) 
                                                                                | (((- (IData)(
                                                                                (0x21U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze)) 
                                                                                | (((- (IData)(
                                                                                (0x22U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_store_stall_any)) 
                                                                                | (((- (IData)(
                                                                                (0x23U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any)) 
                                                                                | (((- (IData)(
                                                                                (0x24U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_iccm_stall_any)) 
                                                                                | (((- (IData)(
                                                                                (0x25U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hc39314fc__0)) 
                                                                                | (((- (IData)(
                                                                                (0x26U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h6d3c4568__0)) 
                                                                                | (((- (IData)(
                                                                                (0x27U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                                                                | (((- (IData)(
                                                                                (0x28U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4)) 
                                                                                | (((- (IData)(
                                                                                (0x29U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h323c9dd7__0)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x2aU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout))) 
                                                                                | (((- (IData)(
                                                                                (0x2bU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_trxn)) 
                                                                                | (((- (IData)(
                                                                                (0x2cU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_misaligned)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x2dU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 2U))) 
                                                                                | (((- (IData)(
                                                                                (0x2eU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_error)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x2fU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 1U))) 
                                                                                | (((- (IData)(
                                                                                (0x30U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_busy)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x31U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus)))) 
                                                                                | ((- (IData)(
                                                                                (0x32U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h38b6fe82__0))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu1inc_ff__din 
        = ((- (IData)((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mgpmc_b))))) 
           & ((1U & (- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4))))) 
              | ((1U & ((- (IData)((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                        & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                           >> 3U))) | ((1U & ((- (IData)(
                                                         (3U 
                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                              & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 4U))) 
                                       | (((- (IData)(
                                                      (4U 
                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hfe3e1960__0)) 
                                          | (((- (IData)(
                                                         (5U 
                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                              & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h36d36c80__0)) 
                                             | (((- (IData)(
                                                            (6U 
                                                             == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h21c133cf__0)) 
                                                | (((- (IData)(
                                                               (7U 
                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_instr_aligned)) 
                                                   | (((- (IData)(
                                                                  (8U 
                                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_instr_decoded)) 
                                                      | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h0790be56__0) 
                                                         | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h5b7ebbc5__0) 
                                                            | (((- (IData)(
                                                                           (9U 
                                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hdf8d7c0c__0)) 
                                                               | (((- (IData)(
                                                                              (0xaU 
                                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h100c5096__0)) 
                                                                  | (((- (IData)(
                                                                                (0xbU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                      & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h3b52d1c5__0)) 
                                                                     | (((- (IData)(
                                                                                (0xcU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                         & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h195dce9e__0)) 
                                                                        | (((- (IData)(
                                                                                (0xdU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                            & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h948f6a9c__0)) 
                                                                           | (((- (IData)(
                                                                                (0xeU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h32ed80bc__0)) 
                                                                              | (((- (IData)(
                                                                                (0xfU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h158a5246__0)) 
                                                                                | (((- (IData)(
                                                                                (0x10U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (5U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x12U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x11U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (7U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x13U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (8U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x14U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (9U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x15U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (0xaU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x16U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (0xbU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x17U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (0xcU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x18U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hb7f77ece__0)) 
                                                                                | (((- (IData)(
                                                                                (0x19U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h71282e59__0)) 
                                                                                | (((- (IData)(
                                                                                (0x1aU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hae98d430__0)) 
                                                                                | (((- (IData)(
                                                                                (0x1bU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_ha111207d__0)) 
                                                                                | (((- (IData)(
                                                                                (0x1cU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_fetch_stall)) 
                                                                                | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h0790be56__0) 
                                                                                | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h5b7ebbc5__0) 
                                                                                | (((- (IData)(
                                                                                (0x1fU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stall)) 
                                                                                | (((- (IData)(
                                                                                (0x20U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall)) 
                                                                                | (((- (IData)(
                                                                                (0x21U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze)) 
                                                                                | (((- (IData)(
                                                                                (0x22U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_store_stall_any)) 
                                                                                | (((- (IData)(
                                                                                (0x23U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any)) 
                                                                                | (((- (IData)(
                                                                                (0x24U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_iccm_stall_any)) 
                                                                                | (((- (IData)(
                                                                                (0x25U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hc39314fc__0)) 
                                                                                | (((- (IData)(
                                                                                (0x26U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h6d3c4568__0)) 
                                                                                | (((- (IData)(
                                                                                (0x27U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                                                                | (((- (IData)(
                                                                                (0x28U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4)) 
                                                                                | (((- (IData)(
                                                                                (0x29U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h323c9dd7__0)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x2aU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout))) 
                                                                                | (((- (IData)(
                                                                                (0x2bU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_trxn)) 
                                                                                | (((- (IData)(
                                                                                (0x2cU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_misaligned)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x2dU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 2U))) 
                                                                                | (((- (IData)(
                                                                                (0x2eU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_error)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x2fU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 1U))) 
                                                                                | (((- (IData)(
                                                                                (0x30U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_busy)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x31U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus)))) 
                                                                                | ((- (IData)(
                                                                                (0x32U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h38b6fe82__0))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu0inc_ff__din 
        = ((- (IData)((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mgpmc_b))))) 
           & ((1U & (- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3))))) 
              | ((1U & ((- (IData)((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                        & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                           >> 3U))) | ((1U & ((- (IData)(
                                                         (3U 
                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                              & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 4U))) 
                                       | (((- (IData)(
                                                      (4U 
                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hfe3e1960__0)) 
                                          | (((- (IData)(
                                                         (5U 
                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                              & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h36d36c80__0)) 
                                             | (((- (IData)(
                                                            (6U 
                                                             == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h21c133cf__0)) 
                                                | (((- (IData)(
                                                               (7U 
                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_instr_aligned)) 
                                                   | (((- (IData)(
                                                                  (8U 
                                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_instr_decoded)) 
                                                      | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h28aae5dc__0) 
                                                         | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h3d74ecc5__0) 
                                                            | (((- (IData)(
                                                                           (9U 
                                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hdf8d7c0c__0)) 
                                                               | (((- (IData)(
                                                                              (0xaU 
                                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h100c5096__0)) 
                                                                  | (((- (IData)(
                                                                                (0xbU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                      & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h3b52d1c5__0)) 
                                                                     | (((- (IData)(
                                                                                (0xcU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                         & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h195dce9e__0)) 
                                                                        | (((- (IData)(
                                                                                (0xdU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                            & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h948f6a9c__0)) 
                                                                           | (((- (IData)(
                                                                                (0xeU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h32ed80bc__0)) 
                                                                              | (((- (IData)(
                                                                                (0xfU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h158a5246__0)) 
                                                                                | (((- (IData)(
                                                                                (0x10U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (5U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x12U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x11U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (7U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x13U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (8U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x14U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (9U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x15U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (0xaU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x16U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (0xbU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x17U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (0xcU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((- (IData)(
                                                                                (0x18U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hb7f77ece__0)) 
                                                                                | (((- (IData)(
                                                                                (0x19U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h71282e59__0)) 
                                                                                | (((- (IData)(
                                                                                (0x1aU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hae98d430__0)) 
                                                                                | (((- (IData)(
                                                                                (0x1bU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_ha111207d__0)) 
                                                                                | (((- (IData)(
                                                                                (0x1cU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_fetch_stall)) 
                                                                                | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h28aae5dc__0) 
                                                                                | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h3d74ecc5__0) 
                                                                                | (((- (IData)(
                                                                                (0x1fU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stall)) 
                                                                                | (((- (IData)(
                                                                                (0x20U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall)) 
                                                                                | (((- (IData)(
                                                                                (0x21U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze)) 
                                                                                | (((- (IData)(
                                                                                (0x22U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_store_stall_any)) 
                                                                                | (((- (IData)(
                                                                                (0x23U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any)) 
                                                                                | (((- (IData)(
                                                                                (0x24U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_iccm_stall_any)) 
                                                                                | (((- (IData)(
                                                                                (0x25U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hc39314fc__0)) 
                                                                                | (((- (IData)(
                                                                                (0x26U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h6d3c4568__0)) 
                                                                                | (((- (IData)(
                                                                                (0x27U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                                                                | (((- (IData)(
                                                                                (0x28U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4)) 
                                                                                | (((- (IData)(
                                                                                (0x29U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h323c9dd7__0)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x2aU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout))) 
                                                                                | (((- (IData)(
                                                                                (0x2bU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_trxn)) 
                                                                                | (((- (IData)(
                                                                                (0x2cU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_misaligned)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x2dU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 2U))) 
                                                                                | (((- (IData)(
                                                                                (0x2eU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_error)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x2fU 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 1U))) 
                                                                                | (((- (IData)(
                                                                                (0x30U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_busy)) 
                                                                                | ((1U 
                                                                                & ((- (IData)(
                                                                                (0x31U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus)))) 
                                                                                | ((- (IData)(
                                                                                (0x32U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3)))) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h38b6fe82__0))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__35(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__35\n"); );
    // Body
    vlSelf->__PVT__timer_ptcR__DOT__int_match = (((IData)(vlSelf->__PVT__timer_ptcR__DOT__lrc_match) 
                                                  | (IData)(vlSelf->__PVT__timer_ptcR__DOT__hrc_match)) 
                                                 & ((IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl) 
                                                    >> 5U));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__36(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__36\n"); );
    // Body
    vlSelf->__PVT__timer_ptcG__DOT__int_match = (((IData)(vlSelf->__PVT__timer_ptcG__DOT__lrc_match) 
                                                  | (IData)(vlSelf->__PVT__timer_ptcG__DOT__hrc_match)) 
                                                 & ((IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl) 
                                                    >> 5U));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__37(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__37\n"); );
    // Body
    vlSelf->__PVT__timer_ptcB__DOT__int_match = (((IData)(vlSelf->__PVT__timer_ptcB__DOT__lrc_match) 
                                                  | (IData)(vlSelf->__PVT__timer_ptcB__DOT__hrc_match)) 
                                                 & ((IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl) 
                                                    >> 5U));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__38(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__38\n"); );
    // Body
    vlSelf->__PVT__timer_ptc__DOT__int_match = (((IData)(vlSelf->__PVT__timer_ptc__DOT__lrc_match) 
                                                 | (IData)(vlSelf->__PVT__timer_ptc__DOT__hrc_match)) 
                                                & ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                                   >> 5U));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__40(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__40\n"); );
    // Body
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__flush_lower_ff__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed)
            ? 0x40000000U : (0x7fffffffU & (((- (IData)(
                                                        ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_mp_e4)))) 
                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_flush_path_e4) 
                                            | (((- (IData)(
                                                           ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                            & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_mp_e4)) 
                                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_mp_e4) 
                                                                  & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)) 
                                                                     & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4)))))))) 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i1_flush_path_e4) 
                                               | (((- (IData)(
                                                              ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4) 
                                                                  | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_rfnpc_dc4) 
                                                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt)) 
                                                                     | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__fence_i_e4) 
                                                                        | ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid)) 
                                                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)))))))) 
                                                   & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__npwbc_ff__din) 
                                                  | (((- (IData)(
                                                                 ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)))) 
                                                      & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellinp__i0wbpcff__din) 
                                                     | (((- (IData)(
                                                                    ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)))) 
                                                         & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e4pcff__dout) 
                                                        | (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid))) 
                                                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)
                                                                ? 
                                                               (vlSelf->__PVT__nmi_vec 
                                                                >> 1U)
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec)
                                                                 ? 
                                                                ((0x7ffffffeU 
                                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec) 
                                                                 + 
                                                                 (0x3fU 
                                                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_cause_e4) 
                                                                     << 1U)))
                                                                 : 
                                                                (0x7ffffffeU 
                                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec)))) 
                                                           | ((0x7ffffffeU 
                                                               & ((- (IData)(
                                                                             ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid)) 
                                                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                                                                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4) 
                                                                                | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_e4)))))) 
                                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec)) 
                                                              | (((- (IData)(
                                                                             ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mepc_wb)) 
                                                                              & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_he16576c4__0)))) 
                                                                  & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mepc_ff__dout) 
                                                                 | (((- (IData)(
                                                                                ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)))) 
                                                                     & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dpc_ff__dout) 
                                                                    | (((- (IData)(
                                                                                ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_npc_wb)))) 
                                                                        & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__npwbc_ff__dout) 
                                                                       | ((- (IData)(
                                                                                ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_he16576c4__0) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mepc_wb)))) 
                                                                          & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                                             >> 1U))))))))))))));
}
