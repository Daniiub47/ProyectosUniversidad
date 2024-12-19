// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_swervolf_core.h"

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__10(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__10\n"); );
    // Body
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_rready_q = 1U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_bready_q = 1U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_reg__DOT____Vcellinp__dffs__din;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusyerror_reg__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_rvalid_q 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                     >> 8U));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_bvalid_q 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                     >> 0x10U));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_arready_q 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                     >> 0x12U));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wready_q 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                     >> 0x11U));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_awready_q 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                     >> 0x13U));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbreadonaddr_reg__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_havereset 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_havereset_reg__DOT__din_new;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack_reg__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command 
            = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren) 
               | ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                  & ((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout)) 
                     & ((IData)(((0x1000000000ULL == 
                                  (0x1fc00000000ULL 
                                   & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractauto_reg))) 
                        | (IData)(((0x1400000000ULL 
                                    == (0x1fc00000000ULL 
                                        & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractauto_reg) 
                                      >> 1U)))))));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_rresp_q 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_rresp_ff__DOT__dffs__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_bresp_q 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_bresp_ff__DOT__dffs__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__dmi_reg_rdata = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmi_rddata_reg__DOT____Vcellinp__dffs__din;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_error_reg__DOT____Vcellinp__dffs__din;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcommand_regno_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_error_din;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrolff__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sbdata1_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sbdata0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_data0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sbaddress0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_misc_reg__DOT____Vcellinp__dffs__din;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_reg__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_data1_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcommand_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractauto_reg 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_abstractauto_reg__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren_Q 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wvalid_q 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_wvalid_ff__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_awvalid_q 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_awvalid_ff__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_arvalid_q 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_arvalid_ff__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_halted 
            = (1U & ((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)) 
                     & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                        >> 0x11U)));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_doneff__DOT____Vcellinp__dffs__din;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_doneff__DOT____Vcellinp__dffs__din;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmabstractcs_busy_reg__DOT____Vcellinp__dffs__din;
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_rready_q = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_bready_q = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_rvalid_q = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_bvalid_q = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_arready_q = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wready_q = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_awready_q = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_havereset = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_rresp_q = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_bresp_q = 0U;
        vlSelf->__PVT__dmi_reg_rdata = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractauto_reg = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren_Q = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wvalid_q = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_awvalid_q = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_arvalid_q = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_halted = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout = 0U;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__resumereq 
        = (IData)(((4U == (0xcU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren_Q)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_unavail 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)) 
                 | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
        = (0x2000040fU | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout) 
                           << 0x16U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout) 
                                         << 0x15U) 
                                        | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout) 
                                            << 0x14U) 
                                           | ((0x80000U 
                                               & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                                                  << 0xfU)) 
                                              | ((0x40000U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                                                       >> 3U)) 
                                                     << 0x12U)) 
                                                 | ((0x38000U 
                                                     & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                                                        << 0xfU)) 
                                                    | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout) 
                                                       << 0xcU))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_cmd_size 
        = ((4U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                  >> 2U)) | ((2U & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                                        >> 3U)) << 1U)) 
                             | (1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                                      >> 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_cmd_next_addr 
        = (((2U == (0xffU & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                             >> 8U))) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg
             : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout)) 
           + ((2U == (0xffU & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                               >> 8U))) ? (0xfU & ((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                       >> 4U))))
               : 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
            << 0x10U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout));
    if ((2U == (0xffU & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                         >> 8U)))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type = 2U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg;
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type 
            = (0U == (0xfU & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout) 
                              >> 0xcU)));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
            = (0xfffU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
        = (0x82U | ((0xc0000U & ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_havereset))) 
                                 << 0x12U)) | ((0x30000U 
                                                & ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack))) 
                                                   << 0x10U)) 
                                               | ((0x3000U 
                                                   & ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_unavail))) 
                                                      << 0xcU)) 
                                                  | ((0xc00U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_unavail) 
                                                                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_halted)))))) 
                                                         << 0xaU)) 
                                                     | (0x300U 
                                                        & ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_halted))) 
                                                           << 8U)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1 = 0U;
    if ((8U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1 = 0U;
        } else if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1 = 0U;
        } else if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1 
                = (IData)((0x10000U == (0x17000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg)));
        }
    } else if ((1U & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)))) {
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din = 1U;
            }
        }
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned 
        = (((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_cmd_size)) 
            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg) 
           | (((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_cmd_size)) 
               & (0U != (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg))) 
              | ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_cmd_size)) 
                 & (0U != (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
        = (2U | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout) 
                  << 0xcU) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout) 
                              << 8U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgExtracted_h8354ed9f__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
              >> 4U));
}

VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h089a4ca9__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_hbb37f211__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h1d12b5cb__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h24d76511__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h7b704cc6__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_hf67ed052__0);

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__11(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__11\n"); );
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((IData)(vlSelf->timer_ptc__DOT____VdfgTmp_h61526ae5__0) 
              & (1U == (7U & (IData)(vlSelf->__PVT__wb_adr)))) 
             & (IData)(vlSelf->__PVT__wb_m2s_io_we))) {
            vlSelf->__Vintraval_hbb37f211__0 = vlSelf->__PVT__wb_m2s_io_dat;
            Vrvfpgasim_swervolf_core____Vfork_h089a4ca9__0__1(vlSelf, vlSelf->__Vintraval_hbb37f211__0);
        } else if ((0x100U & (IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl))) {
            vlSelf->__Vintraval_h24d76511__0 = vlSelf->__PVT__timer_ptc__DOT__rptc_cntr;
            Vrvfpgasim_swervolf_core____Vfork_h1d12b5cb__0__1(vlSelf, vlSelf->__Vintraval_h24d76511__0);
        }
    } else {
        vlSelf->__Vintraval_hf67ed052__0 = 0U;
        Vrvfpgasim_swervolf_core____Vfork_h7b704cc6__0__1(vlSelf, vlSelf->__Vintraval_hf67ed052__0);
    }
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h7b704cc6__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_hf67ed052__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_h7b704cc6__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            266);
    vlSelf->__Vdlyvval__timer_ptc__DOT__rptc_hrc__v2 
        = __Vintraval_hf67ed052__0;
    vlSelf->__Vdlyvset__timer_ptc__DOT__rptc_hrc__v2 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h1d12b5cb__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h24d76511__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_h1d12b5cb__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            270);
    vlSelf->__Vdlyvval__timer_ptc__DOT__rptc_hrc__v1 
        = __Vintraval_h24d76511__0;
    vlSelf->__Vdlyvset__timer_ptc__DOT__rptc_hrc__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h089a4ca9__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_hbb37f211__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_h089a4ca9__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            268);
    vlSelf->__Vdlyvval__timer_ptc__DOT__rptc_hrc__v0 
        = __Vintraval_hbb37f211__0;
    vlSelf->__Vdlyvset__timer_ptc__DOT__rptc_hrc__v0 = 1U;
}

VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h29142e5a__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h7c6ddb3a__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h5448a761__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h91ca50cc__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h48e4f409__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h37a8b979__0);

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__12(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__12\n"); );
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((IData)(vlSelf->timer_ptcR__DOT____VdfgTmp_h61526ae5__0) 
              & (1U == (7U & (IData)(vlSelf->__PVT__wb_adr)))) 
             & (IData)(vlSelf->__PVT__wb_m2s_io_we))) {
            vlSelf->__Vintraval_h7c6ddb3a__0 = vlSelf->__PVT__wb_m2s_io_dat;
            Vrvfpgasim_swervolf_core____Vfork_h29142e5a__0__1(vlSelf, vlSelf->__Vintraval_h7c6ddb3a__0);
        } else if ((0x100U & (IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl))) {
            vlSelf->__Vintraval_h91ca50cc__0 = vlSelf->__PVT__timer_ptcR__DOT__rptc_cntr;
            Vrvfpgasim_swervolf_core____Vfork_h5448a761__0__1(vlSelf, vlSelf->__Vintraval_h91ca50cc__0);
        }
    } else {
        vlSelf->__Vintraval_h37a8b979__0 = 0U;
        Vrvfpgasim_swervolf_core____Vfork_h48e4f409__0__1(vlSelf, vlSelf->__Vintraval_h37a8b979__0);
    }
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h48e4f409__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h37a8b979__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_h48e4f409__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            266);
    vlSelf->__Vdlyvval__timer_ptcR__DOT__rptc_hrc__v2 
        = __Vintraval_h37a8b979__0;
    vlSelf->__Vdlyvset__timer_ptcR__DOT__rptc_hrc__v2 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h5448a761__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h91ca50cc__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_h5448a761__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            270);
    vlSelf->__Vdlyvval__timer_ptcR__DOT__rptc_hrc__v1 
        = __Vintraval_h91ca50cc__0;
    vlSelf->__Vdlyvset__timer_ptcR__DOT__rptc_hrc__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h29142e5a__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h7c6ddb3a__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_h29142e5a__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            268);
    vlSelf->__Vdlyvval__timer_ptcR__DOT__rptc_hrc__v0 
        = __Vintraval_h7c6ddb3a__0;
    vlSelf->__Vdlyvset__timer_ptcR__DOT__rptc_hrc__v0 = 1U;
}

VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h7b5e0d55__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_hefef209b__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h752e3ef6__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_haa98c3c4__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hecff1d20__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h8429f4dc__0);

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__13(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__13\n"); );
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((IData)(vlSelf->timer_ptcG__DOT____VdfgTmp_h61526ae5__0) 
              & (1U == (7U & (IData)(vlSelf->__PVT__wb_adr)))) 
             & (IData)(vlSelf->__PVT__wb_m2s_io_we))) {
            vlSelf->__Vintraval_hefef209b__0 = vlSelf->__PVT__wb_m2s_io_dat;
            Vrvfpgasim_swervolf_core____Vfork_h7b5e0d55__0__1(vlSelf, vlSelf->__Vintraval_hefef209b__0);
        } else if ((0x100U & (IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl))) {
            vlSelf->__Vintraval_haa98c3c4__0 = vlSelf->__PVT__timer_ptcG__DOT__rptc_cntr;
            Vrvfpgasim_swervolf_core____Vfork_h752e3ef6__0__1(vlSelf, vlSelf->__Vintraval_haa98c3c4__0);
        }
    } else {
        vlSelf->__Vintraval_h8429f4dc__0 = 0U;
        Vrvfpgasim_swervolf_core____Vfork_hecff1d20__0__1(vlSelf, vlSelf->__Vintraval_h8429f4dc__0);
    }
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hecff1d20__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h8429f4dc__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_hecff1d20__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            266);
    vlSelf->__Vdlyvval__timer_ptcG__DOT__rptc_hrc__v2 
        = __Vintraval_h8429f4dc__0;
    vlSelf->__Vdlyvset__timer_ptcG__DOT__rptc_hrc__v2 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h752e3ef6__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_haa98c3c4__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_h752e3ef6__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            270);
    vlSelf->__Vdlyvval__timer_ptcG__DOT__rptc_hrc__v1 
        = __Vintraval_haa98c3c4__0;
    vlSelf->__Vdlyvset__timer_ptcG__DOT__rptc_hrc__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h7b5e0d55__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_hefef209b__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_h7b5e0d55__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            268);
    vlSelf->__Vdlyvval__timer_ptcG__DOT__rptc_hrc__v0 
        = __Vintraval_hefef209b__0;
    vlSelf->__Vdlyvset__timer_ptcG__DOT__rptc_hrc__v0 = 1U;
}

VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hc971e0aa__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h1d659f84__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hb23773b8__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_hfea993c6__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h763a11a7__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h989073c3__0);

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__14(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__14\n"); );
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((IData)(vlSelf->timer_ptcB__DOT____VdfgTmp_h61526ae5__0) 
              & (1U == (7U & (IData)(vlSelf->__PVT__wb_adr)))) 
             & (IData)(vlSelf->__PVT__wb_m2s_io_we))) {
            vlSelf->__Vintraval_h1d659f84__0 = vlSelf->__PVT__wb_m2s_io_dat;
            Vrvfpgasim_swervolf_core____Vfork_hc971e0aa__0__1(vlSelf, vlSelf->__Vintraval_h1d659f84__0);
        } else if ((0x100U & (IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl))) {
            vlSelf->__Vintraval_hfea993c6__0 = vlSelf->__PVT__timer_ptcB__DOT__rptc_cntr;
            Vrvfpgasim_swervolf_core____Vfork_hb23773b8__0__1(vlSelf, vlSelf->__Vintraval_hfea993c6__0);
        }
    } else {
        vlSelf->__Vintraval_h989073c3__0 = 0U;
        Vrvfpgasim_swervolf_core____Vfork_h763a11a7__0__1(vlSelf, vlSelf->__Vintraval_h989073c3__0);
    }
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h763a11a7__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h989073c3__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_h763a11a7__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            266);
    vlSelf->__Vdlyvval__timer_ptcB__DOT__rptc_hrc__v2 
        = __Vintraval_h989073c3__0;
    vlSelf->__Vdlyvset__timer_ptcB__DOT__rptc_hrc__v2 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hb23773b8__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_hfea993c6__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_hb23773b8__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            270);
    vlSelf->__Vdlyvval__timer_ptcB__DOT__rptc_hrc__v1 
        = __Vintraval_hfea993c6__0;
    vlSelf->__Vdlyvset__timer_ptcB__DOT__rptc_hrc__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hc971e0aa__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h1d659f84__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_hc971e0aa__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            268);
    vlSelf->__Vdlyvval__timer_ptcB__DOT__rptc_hrc__v0 
        = __Vintraval_h1d659f84__0;
    vlSelf->__Vdlyvset__timer_ptcB__DOT__rptc_hrc__v0 = 1U;
}

VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h6b45f176__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h692d2032__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hdda3be63__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h6fe44b32__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hc213e9f5__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h2cebf271__0);

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__15(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__15\n"); );
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((IData)(vlSelf->timer_ptc__DOT____VdfgTmp_h61526ae5__0) 
              & (2U == (7U & (IData)(vlSelf->__PVT__wb_adr)))) 
             & (IData)(vlSelf->__PVT__wb_m2s_io_we))) {
            vlSelf->__Vintraval_h692d2032__0 = vlSelf->__PVT__wb_m2s_io_dat;
            Vrvfpgasim_swervolf_core____Vfork_h6b45f176__0__1(vlSelf, vlSelf->__Vintraval_h692d2032__0);
        } else if ((0x100U & (IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl))) {
            vlSelf->__Vintraval_h6fe44b32__0 = vlSelf->__PVT__timer_ptc__DOT__rptc_cntr;
            Vrvfpgasim_swervolf_core____Vfork_hdda3be63__0__1(vlSelf, vlSelf->__Vintraval_h6fe44b32__0);
        }
    } else {
        vlSelf->__Vintraval_h2cebf271__0 = 0U;
        Vrvfpgasim_swervolf_core____Vfork_hc213e9f5__0__1(vlSelf, vlSelf->__Vintraval_h2cebf271__0);
    }
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hc213e9f5__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h2cebf271__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_hc213e9f5__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            281);
    vlSelf->__Vdlyvval__timer_ptc__DOT__rptc_lrc__v2 
        = __Vintraval_h2cebf271__0;
    vlSelf->__Vdlyvset__timer_ptc__DOT__rptc_lrc__v2 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hdda3be63__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h6fe44b32__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_hdda3be63__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            285);
    vlSelf->__Vdlyvval__timer_ptc__DOT__rptc_lrc__v1 
        = __Vintraval_h6fe44b32__0;
    vlSelf->__Vdlyvset__timer_ptc__DOT__rptc_lrc__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h6b45f176__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h692d2032__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_h6b45f176__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            283);
    vlSelf->__Vdlyvval__timer_ptc__DOT__rptc_lrc__v0 
        = __Vintraval_h692d2032__0;
    vlSelf->__Vdlyvset__timer_ptc__DOT__rptc_lrc__v0 = 1U;
}

VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h44f03482__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_hd735a86f__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h5ad6a2ae__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_hca82a3fb__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h52c3c122__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_hdae07ab0__0);

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__16(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__16\n"); );
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((IData)(vlSelf->timer_ptcR__DOT____VdfgTmp_h61526ae5__0) 
              & (2U == (7U & (IData)(vlSelf->__PVT__wb_adr)))) 
             & (IData)(vlSelf->__PVT__wb_m2s_io_we))) {
            vlSelf->__Vintraval_hd735a86f__0 = vlSelf->__PVT__wb_m2s_io_dat;
            Vrvfpgasim_swervolf_core____Vfork_h44f03482__0__1(vlSelf, vlSelf->__Vintraval_hd735a86f__0);
        } else if ((0x100U & (IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl))) {
            vlSelf->__Vintraval_hca82a3fb__0 = vlSelf->__PVT__timer_ptcR__DOT__rptc_cntr;
            Vrvfpgasim_swervolf_core____Vfork_h5ad6a2ae__0__1(vlSelf, vlSelf->__Vintraval_hca82a3fb__0);
        }
    } else {
        vlSelf->__Vintraval_hdae07ab0__0 = 0U;
        Vrvfpgasim_swervolf_core____Vfork_h52c3c122__0__1(vlSelf, vlSelf->__Vintraval_hdae07ab0__0);
    }
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h52c3c122__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_hdae07ab0__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_h52c3c122__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            281);
    vlSelf->__Vdlyvval__timer_ptcR__DOT__rptc_lrc__v2 
        = __Vintraval_hdae07ab0__0;
    vlSelf->__Vdlyvset__timer_ptcR__DOT__rptc_lrc__v2 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h5ad6a2ae__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_hca82a3fb__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_h5ad6a2ae__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            285);
    vlSelf->__Vdlyvval__timer_ptcR__DOT__rptc_lrc__v1 
        = __Vintraval_hca82a3fb__0;
    vlSelf->__Vdlyvset__timer_ptcR__DOT__rptc_lrc__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h44f03482__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_hd735a86f__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_h44f03482__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            283);
    vlSelf->__Vdlyvval__timer_ptcR__DOT__rptc_lrc__v0 
        = __Vintraval_hd735a86f__0;
    vlSelf->__Vdlyvset__timer_ptcR__DOT__rptc_lrc__v0 = 1U;
}

VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hc36f68ab__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h31358179__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hdd46f700__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h6b9323a6__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h677ccf34__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h44e091ba__0);

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__17(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__17\n"); );
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((IData)(vlSelf->timer_ptcG__DOT____VdfgTmp_h61526ae5__0) 
              & (2U == (7U & (IData)(vlSelf->__PVT__wb_adr)))) 
             & (IData)(vlSelf->__PVT__wb_m2s_io_we))) {
            vlSelf->__Vintraval_h31358179__0 = vlSelf->__PVT__wb_m2s_io_dat;
            Vrvfpgasim_swervolf_core____Vfork_hc36f68ab__0__1(vlSelf, vlSelf->__Vintraval_h31358179__0);
        } else if ((0x100U & (IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl))) {
            vlSelf->__Vintraval_h6b9323a6__0 = vlSelf->__PVT__timer_ptcG__DOT__rptc_cntr;
            Vrvfpgasim_swervolf_core____Vfork_hdd46f700__0__1(vlSelf, vlSelf->__Vintraval_h6b9323a6__0);
        }
    } else {
        vlSelf->__Vintraval_h44e091ba__0 = 0U;
        Vrvfpgasim_swervolf_core____Vfork_h677ccf34__0__1(vlSelf, vlSelf->__Vintraval_h44e091ba__0);
    }
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h677ccf34__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h44e091ba__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_h677ccf34__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            281);
    vlSelf->__Vdlyvval__timer_ptcG__DOT__rptc_lrc__v2 
        = __Vintraval_h44e091ba__0;
    vlSelf->__Vdlyvset__timer_ptcG__DOT__rptc_lrc__v2 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hdd46f700__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h6b9323a6__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_hdd46f700__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            285);
    vlSelf->__Vdlyvval__timer_ptcG__DOT__rptc_lrc__v1 
        = __Vintraval_h6b9323a6__0;
    vlSelf->__Vdlyvset__timer_ptcG__DOT__rptc_lrc__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hc36f68ab__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h31358179__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_hc36f68ab__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            283);
    vlSelf->__Vdlyvval__timer_ptcG__DOT__rptc_lrc__v0 
        = __Vintraval_h31358179__0;
    vlSelf->__Vdlyvset__timer_ptcG__DOT__rptc_lrc__v0 = 1U;
}

VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hb073bdd5__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h3fc9cf7b__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h532991ef__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h510623c3__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hf1f62f20__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h540ce3bc__0);

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__18(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__18\n"); );
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((IData)(vlSelf->timer_ptcB__DOT____VdfgTmp_h61526ae5__0) 
              & (2U == (7U & (IData)(vlSelf->__PVT__wb_adr)))) 
             & (IData)(vlSelf->__PVT__wb_m2s_io_we))) {
            vlSelf->__Vintraval_h3fc9cf7b__0 = vlSelf->__PVT__wb_m2s_io_dat;
            Vrvfpgasim_swervolf_core____Vfork_hb073bdd5__0__1(vlSelf, vlSelf->__Vintraval_h3fc9cf7b__0);
        } else if ((0x100U & (IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl))) {
            vlSelf->__Vintraval_h510623c3__0 = vlSelf->__PVT__timer_ptcB__DOT__rptc_cntr;
            Vrvfpgasim_swervolf_core____Vfork_h532991ef__0__1(vlSelf, vlSelf->__Vintraval_h510623c3__0);
        }
    } else {
        vlSelf->__Vintraval_h540ce3bc__0 = 0U;
        Vrvfpgasim_swervolf_core____Vfork_hf1f62f20__0__1(vlSelf, vlSelf->__Vintraval_h540ce3bc__0);
    }
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hf1f62f20__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h540ce3bc__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_hf1f62f20__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            281);
    vlSelf->__Vdlyvval__timer_ptcB__DOT__rptc_lrc__v2 
        = __Vintraval_h540ce3bc__0;
    vlSelf->__Vdlyvset__timer_ptcB__DOT__rptc_lrc__v2 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h532991ef__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h510623c3__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_h532991ef__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            285);
    vlSelf->__Vdlyvval__timer_ptcB__DOT__rptc_lrc__v1 
        = __Vintraval_h510623c3__0;
    vlSelf->__Vdlyvset__timer_ptcB__DOT__rptc_lrc__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hb073bdd5__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h3fc9cf7b__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_hb073bdd5__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            283);
    vlSelf->__Vdlyvval__timer_ptcB__DOT__rptc_lrc__v0 
        = __Vintraval_h3fc9cf7b__0;
    vlSelf->__Vdlyvset__timer_ptcB__DOT__rptc_lrc__v0 = 1U;
}

VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h0d97a14a__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_hd0d533d4__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h86b77305__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_ha5040e13__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h783334d4__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h7f56439f__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_had8c615d__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_ha5040e13__1);

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__19(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__19\n"); );
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((IData)(vlSelf->timer_ptc__DOT____VdfgTmp_h61526ae5__0) 
              & (0U == (7U & (IData)(vlSelf->__PVT__wb_adr)))) 
             & (IData)(vlSelf->__PVT__wb_m2s_io_we))) {
            vlSelf->__Vintraval_hd0d533d4__0 = vlSelf->__PVT__wb_m2s_io_dat;
            Vrvfpgasim_swervolf_core____Vfork_h0d97a14a__0__1(vlSelf, vlSelf->__Vintraval_hd0d533d4__0);
        } else if (vlSelf->__PVT__timer_ptc__DOT__restart) {
            vlSelf->__Vintraval_ha5040e13__0 = 0U;
            Vrvfpgasim_swervolf_core____Vfork_h86b77305__0__1(vlSelf, vlSelf->__Vintraval_ha5040e13__0);
        } else if ((1U & (((~ ((IData)(vlSelf->__PVT__timer_ptc__DOT__lrc_match) 
                               & ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                  >> 4U))) & (IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl)) 
                          & (~ ((~ ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                    >> 1U)) & (IData)(vlSelf->__PVT__timer_ptc__DOT__eclk_gate)))))) {
            vlSelf->__Vintraval_h7f56439f__0 = ((IData)(1U) 
                                                + vlSelf->__PVT__timer_ptc__DOT__rptc_cntr);
            Vrvfpgasim_swervolf_core____Vfork_h783334d4__0__1(vlSelf, vlSelf->__Vintraval_h7f56439f__0);
        }
    } else {
        vlSelf->__Vintraval_ha5040e13__1 = 0U;
        Vrvfpgasim_swervolf_core____Vfork_had8c615d__0__1(vlSelf, vlSelf->__Vintraval_ha5040e13__1);
    }
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_had8c615d__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_ha5040e13__1) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_had8c615d__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            296);
    vlSelf->__Vdlyvval__timer_ptc__DOT__rptc_cntr__v3 
        = __Vintraval_ha5040e13__1;
    vlSelf->__Vdlyvset__timer_ptc__DOT__rptc_cntr__v3 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h783334d4__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h7f56439f__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_h783334d4__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            302);
    vlSelf->__Vdlyvval__timer_ptc__DOT__rptc_cntr__v2 
        = __Vintraval_h7f56439f__0;
    vlSelf->__Vdlyvset__timer_ptc__DOT__rptc_cntr__v2 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h86b77305__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_ha5040e13__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_h86b77305__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            300);
    vlSelf->__Vdlyvval__timer_ptc__DOT__rptc_cntr__v1 
        = __Vintraval_ha5040e13__0;
    vlSelf->__Vdlyvset__timer_ptc__DOT__rptc_cntr__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h0d97a14a__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_hd0d533d4__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_h0d97a14a__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            298);
    vlSelf->__Vdlyvval__timer_ptc__DOT__rptc_cntr__v0 
        = __Vintraval_hd0d533d4__0;
    vlSelf->__Vdlyvset__timer_ptc__DOT__rptc_cntr__v0 = 1U;
}

VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h05a84b11__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h37881d17__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hbaf88eb4__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h7a4ef758__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h23569c91__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h2284bc71__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hb224f024__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h7a4ef758__1);

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__20(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__20\n"); );
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((IData)(vlSelf->timer_ptcR__DOT____VdfgTmp_h61526ae5__0) 
              & (0U == (7U & (IData)(vlSelf->__PVT__wb_adr)))) 
             & (IData)(vlSelf->__PVT__wb_m2s_io_we))) {
            vlSelf->__Vintraval_h37881d17__0 = vlSelf->__PVT__wb_m2s_io_dat;
            Vrvfpgasim_swervolf_core____Vfork_h05a84b11__0__1(vlSelf, vlSelf->__Vintraval_h37881d17__0);
        } else if (vlSelf->__PVT__timer_ptcR__DOT__restart) {
            vlSelf->__Vintraval_h7a4ef758__0 = 0U;
            Vrvfpgasim_swervolf_core____Vfork_hbaf88eb4__0__1(vlSelf, vlSelf->__Vintraval_h7a4ef758__0);
        } else if ((1U & (((~ ((IData)(vlSelf->__PVT__timer_ptcR__DOT__lrc_match) 
                               & ((IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl) 
                                  >> 4U))) & (IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl)) 
                          & (~ ((~ ((IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl) 
                                    >> 1U)) & (IData)(vlSelf->__PVT__timer_ptcR__DOT__eclk_gate)))))) {
            vlSelf->__Vintraval_h2284bc71__0 = ((IData)(1U) 
                                                + vlSelf->__PVT__timer_ptcR__DOT__rptc_cntr);
            Vrvfpgasim_swervolf_core____Vfork_h23569c91__0__1(vlSelf, vlSelf->__Vintraval_h2284bc71__0);
        }
    } else {
        vlSelf->__Vintraval_h7a4ef758__1 = 0U;
        Vrvfpgasim_swervolf_core____Vfork_hb224f024__0__1(vlSelf, vlSelf->__Vintraval_h7a4ef758__1);
    }
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hb224f024__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h7a4ef758__1) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_hb224f024__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            296);
    vlSelf->__Vdlyvval__timer_ptcR__DOT__rptc_cntr__v3 
        = __Vintraval_h7a4ef758__1;
    vlSelf->__Vdlyvset__timer_ptcR__DOT__rptc_cntr__v3 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h23569c91__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h2284bc71__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_h23569c91__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            302);
    vlSelf->__Vdlyvval__timer_ptcR__DOT__rptc_cntr__v2 
        = __Vintraval_h2284bc71__0;
    vlSelf->__Vdlyvset__timer_ptcR__DOT__rptc_cntr__v2 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hbaf88eb4__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h7a4ef758__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_hbaf88eb4__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            300);
    vlSelf->__Vdlyvval__timer_ptcR__DOT__rptc_cntr__v1 
        = __Vintraval_h7a4ef758__0;
    vlSelf->__Vdlyvset__timer_ptcR__DOT__rptc_cntr__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h05a84b11__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h37881d17__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_h05a84b11__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            298);
    vlSelf->__Vdlyvval__timer_ptcR__DOT__rptc_cntr__v0 
        = __Vintraval_h37881d17__0;
    vlSelf->__Vdlyvset__timer_ptcR__DOT__rptc_cntr__v0 = 1U;
}

VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h841898c7__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h77e77cf5__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hc48c8098__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h3c2e9736__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h7db26390__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h118a9ade__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hcbd23289__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h3c2e9736__1);

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__21(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__21\n"); );
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((IData)(vlSelf->timer_ptcG__DOT____VdfgTmp_h61526ae5__0) 
              & (0U == (7U & (IData)(vlSelf->__PVT__wb_adr)))) 
             & (IData)(vlSelf->__PVT__wb_m2s_io_we))) {
            vlSelf->__Vintraval_h77e77cf5__0 = vlSelf->__PVT__wb_m2s_io_dat;
            Vrvfpgasim_swervolf_core____Vfork_h841898c7__0__1(vlSelf, vlSelf->__Vintraval_h77e77cf5__0);
        } else if (vlSelf->__PVT__timer_ptcG__DOT__restart) {
            vlSelf->__Vintraval_h3c2e9736__0 = 0U;
            Vrvfpgasim_swervolf_core____Vfork_hc48c8098__0__1(vlSelf, vlSelf->__Vintraval_h3c2e9736__0);
        } else if ((1U & (((~ ((IData)(vlSelf->__PVT__timer_ptcG__DOT__lrc_match) 
                               & ((IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl) 
                                  >> 4U))) & (IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl)) 
                          & (~ ((~ ((IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl) 
                                    >> 1U)) & (IData)(vlSelf->__PVT__timer_ptcG__DOT__eclk_gate)))))) {
            vlSelf->__Vintraval_h118a9ade__0 = ((IData)(1U) 
                                                + vlSelf->__PVT__timer_ptcG__DOT__rptc_cntr);
            Vrvfpgasim_swervolf_core____Vfork_h7db26390__0__1(vlSelf, vlSelf->__Vintraval_h118a9ade__0);
        }
    } else {
        vlSelf->__Vintraval_h3c2e9736__1 = 0U;
        Vrvfpgasim_swervolf_core____Vfork_hcbd23289__0__1(vlSelf, vlSelf->__Vintraval_h3c2e9736__1);
    }
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hcbd23289__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h3c2e9736__1) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_hcbd23289__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            296);
    vlSelf->__Vdlyvval__timer_ptcG__DOT__rptc_cntr__v3 
        = __Vintraval_h3c2e9736__1;
    vlSelf->__Vdlyvset__timer_ptcG__DOT__rptc_cntr__v3 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h7db26390__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h118a9ade__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_h7db26390__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            302);
    vlSelf->__Vdlyvval__timer_ptcG__DOT__rptc_cntr__v2 
        = __Vintraval_h118a9ade__0;
    vlSelf->__Vdlyvset__timer_ptcG__DOT__rptc_cntr__v2 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hc48c8098__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h3c2e9736__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_hc48c8098__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            300);
    vlSelf->__Vdlyvval__timer_ptcG__DOT__rptc_cntr__v1 
        = __Vintraval_h3c2e9736__0;
    vlSelf->__Vdlyvset__timer_ptcG__DOT__rptc_cntr__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h841898c7__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h77e77cf5__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_h841898c7__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            298);
    vlSelf->__Vdlyvval__timer_ptcG__DOT__rptc_cntr__v0 
        = __Vintraval_h77e77cf5__0;
    vlSelf->__Vdlyvset__timer_ptcG__DOT__rptc_cntr__v0 = 1U;
}

VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hd342b33d__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h8eb14d99__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_ha0e8883d__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h195865da__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hae2fbd02__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h82fd4615__0);
VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h035cfea9__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h195865da__1);

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__22(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__22\n"); );
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((IData)(vlSelf->timer_ptcB__DOT____VdfgTmp_h61526ae5__0) 
              & (0U == (7U & (IData)(vlSelf->__PVT__wb_adr)))) 
             & (IData)(vlSelf->__PVT__wb_m2s_io_we))) {
            vlSelf->__Vintraval_h8eb14d99__0 = vlSelf->__PVT__wb_m2s_io_dat;
            Vrvfpgasim_swervolf_core____Vfork_hd342b33d__0__1(vlSelf, vlSelf->__Vintraval_h8eb14d99__0);
        } else if (vlSelf->__PVT__timer_ptcB__DOT__restart) {
            vlSelf->__Vintraval_h195865da__0 = 0U;
            Vrvfpgasim_swervolf_core____Vfork_ha0e8883d__0__1(vlSelf, vlSelf->__Vintraval_h195865da__0);
        } else if ((1U & (((~ ((IData)(vlSelf->__PVT__timer_ptcB__DOT__lrc_match) 
                               & ((IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl) 
                                  >> 4U))) & (IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl)) 
                          & (~ ((~ ((IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl) 
                                    >> 1U)) & (IData)(vlSelf->__PVT__timer_ptcB__DOT__eclk_gate)))))) {
            vlSelf->__Vintraval_h82fd4615__0 = ((IData)(1U) 
                                                + vlSelf->__PVT__timer_ptcB__DOT__rptc_cntr);
            Vrvfpgasim_swervolf_core____Vfork_hae2fbd02__0__1(vlSelf, vlSelf->__Vintraval_h82fd4615__0);
        }
    } else {
        vlSelf->__Vintraval_h195865da__1 = 0U;
        Vrvfpgasim_swervolf_core____Vfork_h035cfea9__0__1(vlSelf, vlSelf->__Vintraval_h195865da__1);
    }
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_h035cfea9__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h195865da__1) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_h035cfea9__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            296);
    vlSelf->__Vdlyvval__timer_ptcB__DOT__rptc_cntr__v3 
        = __Vintraval_h195865da__1;
    vlSelf->__Vdlyvset__timer_ptcB__DOT__rptc_cntr__v3 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hae2fbd02__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h82fd4615__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_hae2fbd02__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            302);
    vlSelf->__Vdlyvval__timer_ptcB__DOT__rptc_cntr__v2 
        = __Vintraval_h82fd4615__0;
    vlSelf->__Vdlyvset__timer_ptcB__DOT__rptc_cntr__v2 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_ha0e8883d__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h195865da__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_ha0e8883d__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            300);
    vlSelf->__Vdlyvval__timer_ptcB__DOT__rptc_cntr__v1 
        = __Vintraval_h195865da__0;
    vlSelf->__Vdlyvset__timer_ptcB__DOT__rptc_cntr__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vrvfpgasim_swervolf_core____Vfork_hd342b33d__0__1(Vrvfpgasim_swervolf_core* vlSelf, IData/*31:0*/ __Vintraval_h8eb14d99__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core____Vfork_hd342b33d__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0U, "../src/SweRVolfSoC/Peripherals/ptc/ptc_top.v", 
                                            298);
    vlSelf->__Vdlyvval__timer_ptcB__DOT__rptc_cntr__v0 
        = __Vintraval_h8eb14d99__0;
    vlSelf->__Vdlyvset__timer_ptcB__DOT__rptc_cntr__v0 = 1U;
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__25(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__25\n"); );
    // Body
    if (vlSelf->__Vdlyvset__gpio_module__DOT__pextc_sampled__v0) {
        vlSelf->__PVT__gpio_module__DOT__pextc_sampled 
            = vlSelf->__Vdlyvval__gpio_module__DOT__pextc_sampled__v0;
        vlSelf->__Vdlyvset__gpio_module__DOT__pextc_sampled__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__pextc_sampled__v0) {
        vlSelf->__PVT__gpio2_module__DOT__pextc_sampled 
            = vlSelf->__Vdlyvval__gpio2_module__DOT__pextc_sampled__v0;
        vlSelf->__Vdlyvset__gpio2_module__DOT__pextc_sampled__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__wb_s2m_gpio_dat__v0) {
        vlSelf->__PVT__wb_s2m_gpio_dat = vlSelf->__Vdlyvval__wb_s2m_gpio_dat__v0;
        vlSelf->__Vdlyvset__wb_s2m_gpio_dat__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__wb_s2m_gpio2_dat__v0) {
        vlSelf->__PVT__wb_s2m_gpio2_dat = vlSelf->__Vdlyvval__wb_s2m_gpio2_dat__v0;
        vlSelf->__Vdlyvset__wb_s2m_gpio2_dat__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__wb_s2m_gpio_err__v0) {
        vlSelf->__PVT__wb_s2m_gpio_err = vlSelf->__Vdlyvval__wb_s2m_gpio_err__v0;
        vlSelf->__Vdlyvset__wb_s2m_gpio_err__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__wb_s2m_gpio_ack__v0) {
        vlSelf->__PVT__wb_s2m_gpio_ack = vlSelf->__Vdlyvval__wb_s2m_gpio_ack__v0;
        vlSelf->__Vdlyvset__wb_s2m_gpio_ack__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__wb_s2m_gpio2_err__v0) {
        vlSelf->__PVT__wb_s2m_gpio2_err = vlSelf->__Vdlyvval__wb_s2m_gpio2_err__v0;
        vlSelf->__Vdlyvset__wb_s2m_gpio2_err__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__wb_s2m_gpio2_ack__v0) {
        vlSelf->__PVT__wb_s2m_gpio2_ack = vlSelf->__Vdlyvval__wb_s2m_gpio2_ack__v0;
        vlSelf->__Vdlyvset__wb_s2m_gpio2_ack__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__sync__v0) {
        vlSelf->__PVT__gpio_module__DOT__sync = vlSelf->__Vdlyvval__gpio_module__DOT__sync__v0;
        vlSelf->__Vdlyvset__gpio_module__DOT__sync__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__sync__v1) {
        vlSelf->__PVT__gpio_module__DOT__sync = vlSelf->__Vdlyvval__gpio_module__DOT__sync__v1;
        vlSelf->__Vdlyvset__gpio_module__DOT__sync__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__ext_pad_s__v0) {
        vlSelf->__PVT__gpio_module__DOT__ext_pad_s 
            = vlSelf->__Vdlyvval__gpio_module__DOT__ext_pad_s__v0;
        vlSelf->__Vdlyvset__gpio_module__DOT__ext_pad_s__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__ext_pad_s__v1) {
        vlSelf->__PVT__gpio_module__DOT__ext_pad_s 
            = vlSelf->__Vdlyvval__gpio_module__DOT__ext_pad_s__v1;
        vlSelf->__Vdlyvset__gpio_module__DOT__ext_pad_s__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__sync__v0) {
        vlSelf->__PVT__gpio2_module__DOT__sync = vlSelf->__Vdlyvval__gpio2_module__DOT__sync__v0;
        vlSelf->__Vdlyvset__gpio2_module__DOT__sync__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__sync__v1) {
        vlSelf->__PVT__gpio2_module__DOT__sync = vlSelf->__Vdlyvval__gpio2_module__DOT__sync__v1;
        vlSelf->__Vdlyvset__gpio2_module__DOT__sync__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__ext_pad_s__v0) {
        vlSelf->__PVT__gpio2_module__DOT__ext_pad_s 
            = vlSelf->__Vdlyvval__gpio2_module__DOT__ext_pad_s__v0;
        vlSelf->__Vdlyvset__gpio2_module__DOT__ext_pad_s__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__ext_pad_s__v1) {
        vlSelf->__PVT__gpio2_module__DOT__ext_pad_s 
            = vlSelf->__Vdlyvval__gpio2_module__DOT__ext_pad_s__v1;
        vlSelf->__Vdlyvset__gpio2_module__DOT__ext_pad_s__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__sync_clk__v0) {
        vlSelf->__PVT__gpio_module__DOT__sync_clk = vlSelf->__Vdlyvval__gpio_module__DOT__sync_clk__v0;
        vlSelf->__Vdlyvset__gpio_module__DOT__sync_clk__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__sync_clk__v1) {
        vlSelf->__PVT__gpio_module__DOT__sync_clk = vlSelf->__Vdlyvval__gpio_module__DOT__sync_clk__v1;
        vlSelf->__Vdlyvset__gpio_module__DOT__sync_clk__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__clk_r__v0) {
        vlSelf->__PVT__gpio_module__DOT__clk_r = vlSelf->__Vdlyvval__gpio_module__DOT__clk_r__v0;
        vlSelf->__Vdlyvset__gpio_module__DOT__clk_r__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__clk_r__v1) {
        vlSelf->__PVT__gpio_module__DOT__clk_r = vlSelf->__Vdlyvval__gpio_module__DOT__clk_r__v1;
        vlSelf->__Vdlyvset__gpio_module__DOT__clk_r__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__clk_s__v0) {
        vlSelf->__PVT__gpio_module__DOT__clk_s = vlSelf->__Vdlyvval__gpio_module__DOT__clk_s__v0;
        vlSelf->__Vdlyvset__gpio_module__DOT__clk_s__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__clk_s__v1) {
        vlSelf->__PVT__gpio_module__DOT__clk_s = vlSelf->__Vdlyvval__gpio_module__DOT__clk_s__v1;
        vlSelf->__Vdlyvset__gpio_module__DOT__clk_s__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__sync_clk__v0) {
        vlSelf->__PVT__gpio2_module__DOT__sync_clk 
            = vlSelf->__Vdlyvval__gpio2_module__DOT__sync_clk__v0;
        vlSelf->__Vdlyvset__gpio2_module__DOT__sync_clk__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__sync_clk__v1) {
        vlSelf->__PVT__gpio2_module__DOT__sync_clk 
            = vlSelf->__Vdlyvval__gpio2_module__DOT__sync_clk__v1;
        vlSelf->__Vdlyvset__gpio2_module__DOT__sync_clk__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__clk_r__v0) {
        vlSelf->__PVT__gpio2_module__DOT__clk_r = vlSelf->__Vdlyvval__gpio2_module__DOT__clk_r__v0;
        vlSelf->__Vdlyvset__gpio2_module__DOT__clk_r__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__clk_r__v1) {
        vlSelf->__PVT__gpio2_module__DOT__clk_r = vlSelf->__Vdlyvval__gpio2_module__DOT__clk_r__v1;
        vlSelf->__Vdlyvset__gpio2_module__DOT__clk_r__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__clk_s__v0) {
        vlSelf->__PVT__gpio2_module__DOT__clk_s = vlSelf->__Vdlyvval__gpio2_module__DOT__clk_s__v0;
        vlSelf->__Vdlyvset__gpio2_module__DOT__clk_s__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__clk_s__v1) {
        vlSelf->__PVT__gpio2_module__DOT__clk_s = vlSelf->__Vdlyvval__gpio2_module__DOT__clk_s__v1;
        vlSelf->__Vdlyvset__gpio2_module__DOT__clk_s__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset____Vcellout__gpio2_module__ext_pad_o__v0) {
        vlSelf->__Vcellout__gpio2_module__ext_pad_o 
            = vlSelf->__Vdlyvval____Vcellout__gpio2_module__ext_pad_o__v0;
        vlSelf->__Vdlyvset____Vcellout__gpio2_module__ext_pad_o__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__o_gpio__v0) {
        vlSelf->__PVT__o_gpio = vlSelf->__Vdlyvval__o_gpio__v0;
        vlSelf->__Vdlyvset__o_gpio__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_out__v0) {
        vlSelf->__PVT__gpio_module__DOT__rgpio_out 
            = vlSelf->__Vdlyvval__gpio_module__DOT__rgpio_out__v0;
        vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_out__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_out__v1) {
        vlSelf->__PVT__gpio_module__DOT__rgpio_out 
            = vlSelf->__Vdlyvval__gpio_module__DOT__rgpio_out__v1;
        vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_out__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_aux__v0) {
        vlSelf->__PVT__gpio_module__DOT__rgpio_aux 
            = vlSelf->__Vdlyvval__gpio_module__DOT__rgpio_aux__v0;
        vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_aux__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_aux__v1) {
        vlSelf->__PVT__gpio_module__DOT__rgpio_aux 
            = vlSelf->__Vdlyvval__gpio_module__DOT__rgpio_aux__v1;
        vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_aux__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_eclk__v0) {
        vlSelf->__PVT__gpio_module__DOT__rgpio_eclk 
            = vlSelf->__Vdlyvval__gpio_module__DOT__rgpio_eclk__v0;
        vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_eclk__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_eclk__v1) {
        vlSelf->__PVT__gpio_module__DOT__rgpio_eclk 
            = vlSelf->__Vdlyvval__gpio_module__DOT__rgpio_eclk__v1;
        vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_eclk__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_out__v0) {
        vlSelf->__PVT__gpio2_module__DOT__rgpio_out 
            = vlSelf->__Vdlyvval__gpio2_module__DOT__rgpio_out__v0;
        vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_out__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_out__v1) {
        vlSelf->__PVT__gpio2_module__DOT__rgpio_out 
            = vlSelf->__Vdlyvval__gpio2_module__DOT__rgpio_out__v1;
        vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_out__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_aux__v0) {
        vlSelf->__PVT__gpio2_module__DOT__rgpio_aux 
            = vlSelf->__Vdlyvval__gpio2_module__DOT__rgpio_aux__v0;
        vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_aux__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_aux__v1) {
        vlSelf->__PVT__gpio2_module__DOT__rgpio_aux 
            = vlSelf->__Vdlyvval__gpio2_module__DOT__rgpio_aux__v1;
        vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_aux__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_eclk__v0) {
        vlSelf->__PVT__gpio2_module__DOT__rgpio_eclk 
            = vlSelf->__Vdlyvval__gpio2_module__DOT__rgpio_eclk__v0;
        vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_eclk__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_eclk__v1) {
        vlSelf->__PVT__gpio2_module__DOT__rgpio_eclk 
            = vlSelf->__Vdlyvval__gpio2_module__DOT__rgpio_eclk__v1;
        vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_eclk__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_nec__v0) {
        vlSelf->__PVT__gpio_module__DOT__rgpio_nec 
            = vlSelf->__Vdlyvval__gpio_module__DOT__rgpio_nec__v0;
        vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_nec__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_nec__v1) {
        vlSelf->__PVT__gpio_module__DOT__rgpio_nec 
            = vlSelf->__Vdlyvval__gpio_module__DOT__rgpio_nec__v1;
        vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_nec__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_nec__v0) {
        vlSelf->__PVT__gpio2_module__DOT__rgpio_nec 
            = vlSelf->__Vdlyvval__gpio2_module__DOT__rgpio_nec__v0;
        vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_nec__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_nec__v1) {
        vlSelf->__PVT__gpio2_module__DOT__rgpio_nec 
            = vlSelf->__Vdlyvval__gpio2_module__DOT__rgpio_nec__v1;
        vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_nec__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_in__v0) {
        vlSelf->__PVT__gpio_module__DOT__rgpio_in = vlSelf->__Vdlyvval__gpio_module__DOT__rgpio_in__v0;
        vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_in__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_ptrig__v0) {
        vlSelf->__PVT__gpio_module__DOT__rgpio_ptrig 
            = vlSelf->__Vdlyvval__gpio_module__DOT__rgpio_ptrig__v0;
        vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_ptrig__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_ptrig__v1) {
        vlSelf->__PVT__gpio_module__DOT__rgpio_ptrig 
            = vlSelf->__Vdlyvval__gpio_module__DOT__rgpio_ptrig__v1;
        vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_ptrig__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_inte__v0) {
        vlSelf->__PVT__gpio_module__DOT__rgpio_inte 
            = vlSelf->__Vdlyvval__gpio_module__DOT__rgpio_inte__v0;
        vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_inte__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_inte__v1) {
        vlSelf->__PVT__gpio_module__DOT__rgpio_inte 
            = vlSelf->__Vdlyvval__gpio_module__DOT__rgpio_inte__v1;
        vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_inte__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_ints__v0) {
        vlSelf->__PVT__gpio_module__DOT__rgpio_ints 
            = vlSelf->__Vdlyvval__gpio_module__DOT__rgpio_ints__v0;
        vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_ints__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_ints__v1) {
        vlSelf->__PVT__gpio_module__DOT__rgpio_ints 
            = vlSelf->__Vdlyvval__gpio_module__DOT__rgpio_ints__v1;
        vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_ints__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_ints__v2) {
        vlSelf->__PVT__gpio_module__DOT__rgpio_ints 
            = vlSelf->__Vdlyvval__gpio_module__DOT__rgpio_ints__v2;
        vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_ints__v2 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_ctrl__v0) {
        vlSelf->__PVT__gpio_module__DOT__rgpio_ctrl 
            = vlSelf->__Vdlyvval__gpio_module__DOT__rgpio_ctrl__v0;
        vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_ctrl__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_ctrl__v1) {
        vlSelf->__PVT__gpio_module__DOT__rgpio_ctrl 
            = (((~ ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__gpio_module__DOT__rgpio_ctrl__v1))) 
                & (IData)(vlSelf->__PVT__gpio_module__DOT__rgpio_ctrl)) 
               | (3U & ((IData)(vlSelf->__Vdlyvval__gpio_module__DOT__rgpio_ctrl__v1) 
                        << (IData)(vlSelf->__Vdlyvlsb__gpio_module__DOT__rgpio_ctrl__v1))));
        vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_ctrl__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_ctrl__v2) {
        vlSelf->__PVT__gpio_module__DOT__rgpio_ctrl 
            = vlSelf->__Vdlyvval__gpio_module__DOT__rgpio_ctrl__v2;
        vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_ctrl__v2 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_in__v0) {
        vlSelf->__PVT__gpio2_module__DOT__rgpio_in 
            = vlSelf->__Vdlyvval__gpio2_module__DOT__rgpio_in__v0;
        vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_in__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_ptrig__v0) {
        vlSelf->__PVT__gpio2_module__DOT__rgpio_ptrig 
            = vlSelf->__Vdlyvval__gpio2_module__DOT__rgpio_ptrig__v0;
        vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_ptrig__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_ptrig__v1) {
        vlSelf->__PVT__gpio2_module__DOT__rgpio_ptrig 
            = vlSelf->__Vdlyvval__gpio2_module__DOT__rgpio_ptrig__v1;
        vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_ptrig__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_inte__v0) {
        vlSelf->__PVT__gpio2_module__DOT__rgpio_inte 
            = vlSelf->__Vdlyvval__gpio2_module__DOT__rgpio_inte__v0;
        vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_inte__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_inte__v1) {
        vlSelf->__PVT__gpio2_module__DOT__rgpio_inte 
            = vlSelf->__Vdlyvval__gpio2_module__DOT__rgpio_inte__v1;
        vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_inte__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_ints__v0) {
        vlSelf->__PVT__gpio2_module__DOT__rgpio_ints 
            = vlSelf->__Vdlyvval__gpio2_module__DOT__rgpio_ints__v0;
        vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_ints__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_ints__v1) {
        vlSelf->__PVT__gpio2_module__DOT__rgpio_ints 
            = vlSelf->__Vdlyvval__gpio2_module__DOT__rgpio_ints__v1;
        vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_ints__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_ints__v2) {
        vlSelf->__PVT__gpio2_module__DOT__rgpio_ints 
            = vlSelf->__Vdlyvval__gpio2_module__DOT__rgpio_ints__v2;
        vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_ints__v2 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_ctrl__v0) {
        vlSelf->__PVT__gpio2_module__DOT__rgpio_ctrl 
            = vlSelf->__Vdlyvval__gpio2_module__DOT__rgpio_ctrl__v0;
        vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_ctrl__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_ctrl__v1) {
        vlSelf->__PVT__gpio2_module__DOT__rgpio_ctrl 
            = (((~ ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__gpio2_module__DOT__rgpio_ctrl__v1))) 
                & (IData)(vlSelf->__PVT__gpio2_module__DOT__rgpio_ctrl)) 
               | (3U & ((IData)(vlSelf->__Vdlyvval__gpio2_module__DOT__rgpio_ctrl__v1) 
                        << (IData)(vlSelf->__Vdlyvlsb__gpio2_module__DOT__rgpio_ctrl__v1))));
        vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_ctrl__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_ctrl__v2) {
        vlSelf->__PVT__gpio2_module__DOT__rgpio_ctrl 
            = vlSelf->__Vdlyvval__gpio2_module__DOT__rgpio_ctrl__v2;
        vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_ctrl__v2 = 0U;
    }
    if (vlSelf->__Vdlyvset__timer_ptc__DOT__int_ptc__v0) {
        vlSelf->__PVT__timer_ptc__DOT__int_ptc = vlSelf->__Vdlyvval__timer_ptc__DOT__int_ptc__v0;
        vlSelf->__Vdlyvset__timer_ptc__DOT__int_ptc__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__timer_ptcR__DOT__int_ptc__v0) {
        vlSelf->__PVT__timer_ptcR__DOT__int_ptc = vlSelf->__Vdlyvval__timer_ptcR__DOT__int_ptc__v0;
        vlSelf->__Vdlyvset__timer_ptcR__DOT__int_ptc__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__timer_ptcG__DOT__int_ptc__v0) {
        vlSelf->__PVT__timer_ptcG__DOT__int_ptc = vlSelf->__Vdlyvval__timer_ptcG__DOT__int_ptc__v0;
        vlSelf->__Vdlyvset__timer_ptcG__DOT__int_ptc__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__timer_ptcB__DOT__int_ptc__v0) {
        vlSelf->__PVT__timer_ptcB__DOT__int_ptc = vlSelf->__Vdlyvval__timer_ptcB__DOT__int_ptc__v0;
        vlSelf->__Vdlyvset__timer_ptcB__DOT__int_ptc__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_oe__v0) {
        vlSelf->__PVT__gpio2_module__DOT__rgpio_oe 
            = vlSelf->__Vdlyvval__gpio2_module__DOT__rgpio_oe__v0;
        vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_oe__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_oe__v1) {
        vlSelf->__PVT__gpio2_module__DOT__rgpio_oe 
            = vlSelf->__Vdlyvval__gpio2_module__DOT__rgpio_oe__v1;
        vlSelf->__Vdlyvset__gpio2_module__DOT__rgpio_oe__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_oe__v0) {
        vlSelf->__PVT__gpio_module__DOT__rgpio_oe = vlSelf->__Vdlyvval__gpio_module__DOT__rgpio_oe__v0;
        vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_oe__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_oe__v1) {
        vlSelf->__PVT__gpio_module__DOT__rgpio_oe = vlSelf->__Vdlyvval__gpio_module__DOT__rgpio_oe__v1;
        vlSelf->__Vdlyvset__gpio_module__DOT__rgpio_oe__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__timer_ptcR__DOT__rptc_ctrl__v0) {
        vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl = vlSelf->__Vdlyvval__timer_ptcR__DOT__rptc_ctrl__v0;
        vlSelf->__Vdlyvset__timer_ptcR__DOT__rptc_ctrl__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__timer_ptcR__DOT__rptc_ctrl__v1) {
        vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl = 
            (((~ ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__timer_ptcR__DOT__rptc_ctrl__v1))) 
              & (IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl)) 
             | (0x1ffU & ((IData)(vlSelf->__Vdlyvval__timer_ptcR__DOT__rptc_ctrl__v1) 
                          << (IData)(vlSelf->__Vdlyvlsb__timer_ptcR__DOT__rptc_ctrl__v1))));
        vlSelf->__Vdlyvset__timer_ptcR__DOT__rptc_ctrl__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__timer_ptcR__DOT__rptc_ctrl__v2) {
        vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl = vlSelf->__Vdlyvval__timer_ptcR__DOT__rptc_ctrl__v2;
        vlSelf->__Vdlyvset__timer_ptcR__DOT__rptc_ctrl__v2 = 0U;
    }
    if (vlSelf->__Vdlyvset__timer_ptcG__DOT__rptc_ctrl__v0) {
        vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl = vlSelf->__Vdlyvval__timer_ptcG__DOT__rptc_ctrl__v0;
        vlSelf->__Vdlyvset__timer_ptcG__DOT__rptc_ctrl__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__timer_ptcG__DOT__rptc_ctrl__v1) {
        vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl = 
            (((~ ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__timer_ptcG__DOT__rptc_ctrl__v1))) 
              & (IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl)) 
             | (0x1ffU & ((IData)(vlSelf->__Vdlyvval__timer_ptcG__DOT__rptc_ctrl__v1) 
                          << (IData)(vlSelf->__Vdlyvlsb__timer_ptcG__DOT__rptc_ctrl__v1))));
        vlSelf->__Vdlyvset__timer_ptcG__DOT__rptc_ctrl__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__timer_ptcG__DOT__rptc_ctrl__v2) {
        vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl = vlSelf->__Vdlyvval__timer_ptcG__DOT__rptc_ctrl__v2;
        vlSelf->__Vdlyvset__timer_ptcG__DOT__rptc_ctrl__v2 = 0U;
    }
    if (vlSelf->__Vdlyvset__timer_ptcB__DOT__rptc_ctrl__v0) {
        vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl = vlSelf->__Vdlyvval__timer_ptcB__DOT__rptc_ctrl__v0;
        vlSelf->__Vdlyvset__timer_ptcB__DOT__rptc_ctrl__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__timer_ptcB__DOT__rptc_ctrl__v1) {
        vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl = 
            (((~ ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__timer_ptcB__DOT__rptc_ctrl__v1))) 
              & (IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl)) 
             | (0x1ffU & ((IData)(vlSelf->__Vdlyvval__timer_ptcB__DOT__rptc_ctrl__v1) 
                          << (IData)(vlSelf->__Vdlyvlsb__timer_ptcB__DOT__rptc_ctrl__v1))));
        vlSelf->__Vdlyvset__timer_ptcB__DOT__rptc_ctrl__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__timer_ptcB__DOT__rptc_ctrl__v2) {
        vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl = vlSelf->__Vdlyvval__timer_ptcB__DOT__rptc_ctrl__v2;
        vlSelf->__Vdlyvset__timer_ptcB__DOT__rptc_ctrl__v2 = 0U;
    }
    vlSelf->__PVT__gpio_module__DOT__out_pad = (((~ vlSelf->__PVT__gpio_module__DOT__rgpio_aux) 
                                                 & vlSelf->__PVT__gpio_module__DOT__rgpio_out) 
                                                | (vlSelf->__PVT__gpio_module__DOT__aux_i 
                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_aux));
    vlSelf->__PVT__gpio_module__DOT__in_muxed = ((vlSelf->__PVT__gpio_module__DOT__pextc_sampled 
                                                  & vlSelf->__PVT__gpio_module__DOT__rgpio_eclk) 
                                                 | ((~ vlSelf->__PVT__gpio_module__DOT__rgpio_eclk) 
                                                    & vlSelf->__PVT__gpio_module__DOT__ext_pad_s));
    vlSelf->__PVT__gpio2_module__DOT__out_pad = (((~ vlSelf->__PVT__gpio2_module__DOT__rgpio_aux) 
                                                  & vlSelf->__PVT__gpio2_module__DOT__rgpio_out) 
                                                 | (vlSelf->__PVT__gpio2_module__DOT__aux_i 
                                                    & vlSelf->__PVT__gpio2_module__DOT__rgpio_aux));
    vlSelf->__PVT__gpio2_module__DOT__in_muxed = ((vlSelf->__PVT__gpio2_module__DOT__pextc_sampled 
                                                   & vlSelf->__PVT__gpio2_module__DOT__rgpio_eclk) 
                                                  | ((~ vlSelf->__PVT__gpio2_module__DOT__rgpio_eclk) 
                                                     & vlSelf->__PVT__gpio2_module__DOT__ext_pad_s));
    vlSelf->__PVT__gpio_module__DOT__in_lach = (((~ vlSelf->__PVT__gpio_module__DOT__rgpio_nec) 
                                                 & (- (IData)(
                                                              ((~ (IData)(vlSelf->__PVT__gpio_module__DOT__clk_r)) 
                                                               & (IData)(vlSelf->__PVT__gpio_module__DOT__clk_s))))) 
                                                | (vlSelf->__PVT__gpio_module__DOT__rgpio_nec 
                                                   & (- (IData)(
                                                                ((~ (IData)(vlSelf->__PVT__gpio_module__DOT__clk_s)) 
                                                                 & (IData)(vlSelf->__PVT__gpio_module__DOT__clk_r))))));
    vlSelf->__PVT__gpio2_module__DOT__in_lach = (((~ vlSelf->__PVT__gpio2_module__DOT__rgpio_nec) 
                                                  & (- (IData)(
                                                               ((~ (IData)(vlSelf->__PVT__gpio2_module__DOT__clk_r)) 
                                                                & (IData)(vlSelf->__PVT__gpio2_module__DOT__clk_s))))) 
                                                 | (vlSelf->__PVT__gpio2_module__DOT__rgpio_nec 
                                                    & (- (IData)(
                                                                 ((~ (IData)(vlSelf->__PVT__gpio2_module__DOT__clk_s)) 
                                                                  & (IData)(vlSelf->__PVT__gpio2_module__DOT__clk_r))))));
    vlSelf->io_data__out__strong__out57 = ((0x1effffffffULL 
                                            & vlSelf->io_data__out__strong__out57) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->__Vcellout__gpio2_module__ext_pad_o 
                                                                  & vlSelf->__PVT__gpio2_module__DOT__rgpio_oe)))) 
                                              << 0x20U));
    vlSelf->io_data__out__strong__out58 = ((0x1dffffffffULL 
                                            & vlSelf->io_data__out__strong__out58) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__Vcellout__gpio2_module__ext_pad_o 
                                                                   & vlSelf->__PVT__gpio2_module__DOT__rgpio_oe) 
                                                                  >> 1U)))) 
                                              << 0x21U));
    vlSelf->io_data__out__strong__out59 = ((0x1bffffffffULL 
                                            & vlSelf->io_data__out__strong__out59) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__Vcellout__gpio2_module__ext_pad_o 
                                                                   & vlSelf->__PVT__gpio2_module__DOT__rgpio_oe) 
                                                                  >> 2U)))) 
                                              << 0x22U));
    vlSelf->io_data__out__strong__out60 = ((0x17ffffffffULL 
                                            & vlSelf->io_data__out__strong__out60) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__Vcellout__gpio2_module__ext_pad_o 
                                                                   & vlSelf->__PVT__gpio2_module__DOT__rgpio_oe) 
                                                                  >> 3U)))) 
                                              << 0x23U));
    vlSelf->io_data__out__strong__out61 = ((0xfffffffffULL 
                                            & vlSelf->io_data__out__strong__out61) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__Vcellout__gpio2_module__ext_pad_o 
                                                                   & vlSelf->__PVT__gpio2_module__DOT__rgpio_oe) 
                                                                  >> 4U)))) 
                                              << 0x24U));
    vlSelf->io_data__en = (0x1fffffffffULL & (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                   >> 0x1cU)))) 
                                               << 0x1cU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                      >> 0x13U)))) 
                                                  << 0x13U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                         >> 0x14U)))) 
                                                     << 0x14U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                            >> 0x15U)))) 
                                                        << 0x15U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                               >> 0x16U)))) 
                                                           << 0x16U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0x17U)))) 
                                                              << 0x17U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0x18U)))) 
                                                                 << 0x18U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0x19U)))) 
                                                                    << 0x19U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0x1aU)))) 
                                                                       << 0x1aU) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0x1bU)))) 
                                                                          << 0x1bU) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0x12U)))) 
                                                                             << 0x12U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0x1dU)))) 
                                                                                << 0x1dU) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0x1eU)))) 
                                                                                << 0x1eU) 
                                                                                | (((QData)((IData)(
                                                                                (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0x1fU))) 
                                                                                << 0x1fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->__PVT__gpio2_module__DOT__rgpio_oe))) 
                                                                                << 0x20U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio2_module__DOT__rgpio_oe 
                                                                                >> 1U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio2_module__DOT__rgpio_oe 
                                                                                >> 2U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio2_module__DOT__rgpio_oe 
                                                                                >> 3U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio2_module__DOT__rgpio_oe 
                                                                                >> 4U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 9U)))) 
                                                                                << 9U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 1U)))) 
                                                                                << 1U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 2U)))) 
                                                                                << 2U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 3U)))) 
                                                                                << 3U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 4U)))) 
                                                                                << 4U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 5U)))) 
                                                                                << 5U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 6U)))) 
                                                                                << 6U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 7U)))) 
                                                                                << 7U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 8U)))) 
                                                                                << 8U) 
                                                                                | ((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0xaU)))) 
                                                                                << 0xaU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0xbU)))) 
                                                                                << 0xbU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0xcU)))) 
                                                                                << 0xcU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0xdU)))) 
                                                                                << 0xdU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0xeU)))) 
                                                                                << 0xeU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0xfU)))) 
                                                                                << 0xfU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0x10U)))) 
                                                                                << 0x10U) 
                                                                                | ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0x11U)))) 
                                                                                << 0x11U))))))))))))))))))))))))))))))))))))));
    vlSelf->io_data__out__strong__out71 = ((0x1ffffffffeULL 
                                            & vlSelf->io_data__out__strong__out71) 
                                           | (IData)((IData)(
                                                             (1U 
                                                              & (vlSelf->__PVT__o_gpio 
                                                                 & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)))));
    vlSelf->io_data__out__strong__out63 = ((0x1ffffffffdULL 
                                            & vlSelf->io_data__out__strong__out63) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 1U)))) 
                                              << 1U));
    vlSelf->io_data__out__strong__out64 = ((0x1ffffffffbULL 
                                            & vlSelf->io_data__out__strong__out64) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 2U)))) 
                                              << 2U));
    vlSelf->io_data__out__strong__out65 = ((0x1ffffffff7ULL 
                                            & vlSelf->io_data__out__strong__out65) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 3U)))) 
                                              << 3U));
    vlSelf->io_data__out__strong__out66 = ((0x1fffffffefULL 
                                            & vlSelf->io_data__out__strong__out66) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 4U)))) 
                                              << 4U));
    vlSelf->io_data__out__strong__out67 = ((0x1fffffffdfULL 
                                            & vlSelf->io_data__out__strong__out67) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 5U)))) 
                                              << 5U));
    vlSelf->io_data__out__strong__out68 = ((0x1fffffffbfULL 
                                            & vlSelf->io_data__out__strong__out68) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 6U)))) 
                                              << 6U));
    vlSelf->io_data__out__strong__out69 = ((0x1fffffff7fULL 
                                            & vlSelf->io_data__out__strong__out69) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 7U)))) 
                                              << 7U));
    vlSelf->io_data__out__strong__out70 = ((0x1ffffffeffULL 
                                            & vlSelf->io_data__out__strong__out70) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 8U)))) 
                                              << 8U));
    vlSelf->io_data__out__strong__out62 = ((0x1ffffffdffULL 
                                            & vlSelf->io_data__out__strong__out62) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 9U)))) 
                                              << 9U));
    vlSelf->io_data__out__strong__out72 = ((0x1ffffffbffULL 
                                            & vlSelf->io_data__out__strong__out72) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 0xaU)))) 
                                              << 0xaU));
    vlSelf->io_data__out__strong__out73 = ((0x1ffffff7ffULL 
                                            & vlSelf->io_data__out__strong__out73) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 0xbU)))) 
                                              << 0xbU));
    vlSelf->io_data__out__strong__out74 = ((0x1fffffefffULL 
                                            & vlSelf->io_data__out__strong__out74) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 0xcU)))) 
                                              << 0xcU));
    vlSelf->io_data__out__strong__out75 = ((0x1fffffdfffULL 
                                            & vlSelf->io_data__out__strong__out75) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 0xdU)))) 
                                              << 0xdU));
    vlSelf->io_data__out__strong__out76 = ((0x1fffffbfffULL 
                                            & vlSelf->io_data__out__strong__out76) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 0xeU)))) 
                                              << 0xeU));
    vlSelf->io_data__out__strong__out77 = ((0x1fffff7fffULL 
                                            & vlSelf->io_data__out__strong__out77) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 0xfU)))) 
                                              << 0xfU));
    vlSelf->io_data__out__strong__out78 = ((0x1ffffeffffULL 
                                            & vlSelf->io_data__out__strong__out78) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 0x10U)))) 
                                              << 0x10U));
    vlSelf->io_data__out__strong__out79 = ((0x1ffffdffffULL 
                                            & vlSelf->io_data__out__strong__out79) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 0x11U)))) 
                                              << 0x11U));
    vlSelf->io_data__out__strong__out53 = ((0x1ffffbffffULL 
                                            & vlSelf->io_data__out__strong__out53) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 0x12U)))) 
                                              << 0x12U));
    vlSelf->io_data__out__strong__out44 = ((0x1ffff7ffffULL 
                                            & vlSelf->io_data__out__strong__out44) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 0x13U)))) 
                                              << 0x13U));
    vlSelf->io_data__out__strong__out45 = ((0x1fffefffffULL 
                                            & vlSelf->io_data__out__strong__out45) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 0x14U)))) 
                                              << 0x14U));
    vlSelf->io_data__out__strong__out46 = ((0x1fffdfffffULL 
                                            & vlSelf->io_data__out__strong__out46) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 0x15U)))) 
                                              << 0x15U));
    vlSelf->io_data__out__strong__out47 = ((0x1fffbfffffULL 
                                            & vlSelf->io_data__out__strong__out47) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 0x16U)))) 
                                              << 0x16U));
    vlSelf->io_data__out__strong__out48 = ((0x1fff7fffffULL 
                                            & vlSelf->io_data__out__strong__out48) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 0x17U)))) 
                                              << 0x17U));
    vlSelf->io_data__out__strong__out49 = ((0x1ffeffffffULL 
                                            & vlSelf->io_data__out__strong__out49) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 0x18U)))) 
                                              << 0x18U));
    vlSelf->io_data__out__strong__out50 = ((0x1ffdffffffULL 
                                            & vlSelf->io_data__out__strong__out50) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 0x19U)))) 
                                              << 0x19U));
    vlSelf->io_data__out__strong__out51 = ((0x1ffbffffffULL 
                                            & vlSelf->io_data__out__strong__out51) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 0x1aU)))) 
                                              << 0x1aU));
    vlSelf->io_data__out__strong__out52 = ((0x1ff7ffffffULL 
                                            & vlSelf->io_data__out__strong__out52) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 0x1bU)))) 
                                              << 0x1bU));
    vlSelf->io_data__out__strong__out43 = ((0x1fefffffffULL 
                                            & vlSelf->io_data__out__strong__out43) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 0x1cU)))) 
                                              << 0x1cU));
    vlSelf->io_data__out__strong__out54 = ((0x1fdfffffffULL 
                                            & vlSelf->io_data__out__strong__out54) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 0x1dU)))) 
                                              << 0x1dU));
    vlSelf->io_data__out__strong__out55 = ((0x1fbfffffffULL 
                                            & vlSelf->io_data__out__strong__out55) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlSelf->__PVT__o_gpio 
                                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                                  >> 0x1eU)))) 
                                              << 0x1eU));
    vlSelf->io_data__out__strong__out56 = ((0x1f7fffffffULL 
                                            & vlSelf->io_data__out__strong__out56) 
                                           | ((QData)((IData)(
                                                              ((vlSelf->__PVT__o_gpio 
                                                                & vlSelf->__PVT__gpio_module__DOT__rgpio_oe) 
                                                               >> 0x1fU))) 
                                              << 0x1fU));
    if ((0x100U & (IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl))) {
        vlSelf->__PVT__timer_ptcR__DOT__hrc_clk = vlSelf->__PVT__timer_ptcR__DOT__capt_pad_i;
        vlSelf->__PVT__timer_ptcR__DOT__lrc_clk = (1U 
                                                   & (~ (IData)(vlSelf->__PVT__timer_ptcR__DOT__capt_pad_i)));
    } else {
        vlSelf->__PVT__timer_ptcR__DOT__hrc_clk = vlSymsp->TOP.clk;
        vlSelf->__PVT__timer_ptcR__DOT__lrc_clk = (1U 
                                                   & (IData)(vlSymsp->TOP.clk));
    }
    vlSelf->__PVT__timer_ptcR__DOT__eclk_gate = (1U 
                                                 & ((IData)(vlSelf->__PVT__timer_ptcR__DOT__gate_clk_pad_i) 
                                                    ^ 
                                                    ((IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl) 
                                                     >> 2U)));
    if ((0x100U & (IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl))) {
        vlSelf->__PVT__timer_ptcG__DOT__hrc_clk = vlSelf->__PVT__timer_ptcG__DOT__capt_pad_i;
        vlSelf->__PVT__timer_ptcG__DOT__lrc_clk = (1U 
                                                   & (~ (IData)(vlSelf->__PVT__timer_ptcG__DOT__capt_pad_i)));
    } else {
        vlSelf->__PVT__timer_ptcG__DOT__hrc_clk = vlSymsp->TOP.clk;
        vlSelf->__PVT__timer_ptcG__DOT__lrc_clk = (1U 
                                                   & (IData)(vlSymsp->TOP.clk));
    }
    vlSelf->__PVT__timer_ptcG__DOT__eclk_gate = (1U 
                                                 & ((IData)(vlSelf->__PVT__timer_ptcG__DOT__gate_clk_pad_i) 
                                                    ^ 
                                                    ((IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl) 
                                                     >> 2U)));
    vlSelf->i_led16__en = (7U & ((1U & (~ ((IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl) 
                                           >> 3U))) 
                                 | ((2U & ((~ ((IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl) 
                                               >> 3U)) 
                                           << 1U)) 
                                    | (4U & ((~ ((IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl) 
                                                 >> 3U)) 
                                             << 2U)))));
    if ((0x100U & (IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl))) {
        vlSelf->__PVT__timer_ptcB__DOT__hrc_clk = vlSelf->__PVT__timer_ptcB__DOT__capt_pad_i;
        vlSelf->__PVT__timer_ptcB__DOT__lrc_clk = (1U 
                                                   & (~ (IData)(vlSelf->__PVT__timer_ptcB__DOT__capt_pad_i)));
    } else {
        vlSelf->__PVT__timer_ptcB__DOT__hrc_clk = vlSymsp->TOP.clk;
        vlSelf->__PVT__timer_ptcB__DOT__lrc_clk = (1U 
                                                   & (IData)(vlSymsp->TOP.clk));
    }
    vlSelf->__PVT__timer_ptcB__DOT__eclk_gate = (1U 
                                                 & ((IData)(vlSelf->__PVT__timer_ptcB__DOT__gate_clk_pad_i) 
                                                    ^ 
                                                    ((IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl) 
                                                     >> 2U)));
    vlSelf->__PVT__gpio_module__DOT__extc_in = ((vlSelf->__PVT__gpio_module__DOT__in_lach 
                                                 & vlSelf->__PVT__gpio_module__DOT__ext_pad_s) 
                                                | ((~ vlSelf->__PVT__gpio_module__DOT__in_lach) 
                                                   & vlSelf->__PVT__gpio_module__DOT__pextc_sampled));
    vlSelf->__PVT__gpio2_module__DOT__extc_in = ((vlSelf->__PVT__gpio2_module__DOT__in_lach 
                                                  & vlSelf->__PVT__gpio2_module__DOT__ext_pad_s) 
                                                 | ((~ vlSelf->__PVT__gpio2_module__DOT__in_lach) 
                                                    & vlSelf->__PVT__gpio2_module__DOT__pextc_sampled));
    vlSelf->io_data__out = ((vlSelf->io_data__out__strong__out43 
                             & ((QData)((IData)((1U 
                                                 & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                    >> 0x1cU)))) 
                                << 0x1cU)) | ((vlSelf->io_data__out__strong__out44 
                                               & ((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                      >> 0x13U)))) 
                                                  << 0x13U)) 
                                              | ((vlSelf->io_data__out__strong__out45 
                                                  & ((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                         >> 0x14U)))) 
                                                     << 0x14U)) 
                                                 | ((vlSelf->io_data__out__strong__out46 
                                                     & ((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                            >> 0x15U)))) 
                                                        << 0x15U)) 
                                                    | ((vlSelf->io_data__out__strong__out47 
                                                        & ((QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                               >> 0x16U)))) 
                                                           << 0x16U)) 
                                                       | ((vlSelf->io_data__out__strong__out48 
                                                           & ((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0x17U)))) 
                                                              << 0x17U)) 
                                                          | ((vlSelf->io_data__out__strong__out49 
                                                              & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0x18U)))) 
                                                                 << 0x18U)) 
                                                             | ((vlSelf->io_data__out__strong__out50 
                                                                 & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0x19U)))) 
                                                                    << 0x19U)) 
                                                                | ((vlSelf->io_data__out__strong__out51 
                                                                    & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0x1aU)))) 
                                                                       << 0x1aU)) 
                                                                   | ((vlSelf->io_data__out__strong__out52 
                                                                       & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0x1bU)))) 
                                                                          << 0x1bU)) 
                                                                      | ((vlSelf->io_data__out__strong__out53 
                                                                          & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0x12U)))) 
                                                                             << 0x12U)) 
                                                                         | ((vlSelf->io_data__out__strong__out54 
                                                                             & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0x1dU)))) 
                                                                                << 0x1dU)) 
                                                                            | ((vlSelf->io_data__out__strong__out55 
                                                                                & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0x1eU)))) 
                                                                                << 0x1eU)) 
                                                                               | ((vlSelf->io_data__out__strong__out56 
                                                                                & ((QData)((IData)(
                                                                                (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0x1fU))) 
                                                                                << 0x1fU)) 
                                                                                | ((vlSelf->io_data__out__strong__out57 
                                                                                & ((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->__PVT__gpio2_module__DOT__rgpio_oe))) 
                                                                                << 0x20U)) 
                                                                                | ((vlSelf->io_data__out__strong__out58 
                                                                                & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio2_module__DOT__rgpio_oe 
                                                                                >> 1U)))) 
                                                                                << 0x21U)) 
                                                                                | ((vlSelf->io_data__out__strong__out59 
                                                                                & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio2_module__DOT__rgpio_oe 
                                                                                >> 2U)))) 
                                                                                << 0x22U)) 
                                                                                | ((vlSelf->io_data__out__strong__out60 
                                                                                & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio2_module__DOT__rgpio_oe 
                                                                                >> 3U)))) 
                                                                                << 0x23U)) 
                                                                                | ((vlSelf->io_data__out__strong__out61 
                                                                                & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio2_module__DOT__rgpio_oe 
                                                                                >> 4U)))) 
                                                                                << 0x24U)) 
                                                                                | ((vlSelf->io_data__out__strong__out62 
                                                                                & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 9U)))) 
                                                                                << 9U)) 
                                                                                | ((vlSelf->io_data__out__strong__out63 
                                                                                & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 1U)))) 
                                                                                << 1U)) 
                                                                                | ((vlSelf->io_data__out__strong__out64 
                                                                                & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 2U)))) 
                                                                                << 2U)) 
                                                                                | ((vlSelf->io_data__out__strong__out65 
                                                                                & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 3U)))) 
                                                                                << 3U)) 
                                                                                | ((vlSelf->io_data__out__strong__out66 
                                                                                & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 4U)))) 
                                                                                << 4U)) 
                                                                                | ((vlSelf->io_data__out__strong__out67 
                                                                                & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 5U)))) 
                                                                                << 5U)) 
                                                                                | ((vlSelf->io_data__out__strong__out68 
                                                                                & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 6U)))) 
                                                                                << 6U)) 
                                                                                | ((vlSelf->io_data__out__strong__out69 
                                                                                & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 7U)))) 
                                                                                << 7U)) 
                                                                                | ((vlSelf->io_data__out__strong__out70 
                                                                                & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 8U)))) 
                                                                                << 8U)) 
                                                                                | ((vlSelf->io_data__out__strong__out71 
                                                                                & (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)))) 
                                                                                | ((vlSelf->io_data__out__strong__out72 
                                                                                & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0xaU)))) 
                                                                                << 0xaU)) 
                                                                                | ((vlSelf->io_data__out__strong__out73 
                                                                                & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0xbU)))) 
                                                                                << 0xbU)) 
                                                                                | ((vlSelf->io_data__out__strong__out74 
                                                                                & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0xcU)))) 
                                                                                << 0xcU)) 
                                                                                | ((vlSelf->io_data__out__strong__out75 
                                                                                & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0xdU)))) 
                                                                                << 0xdU)) 
                                                                                | ((vlSelf->io_data__out__strong__out76 
                                                                                & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0xeU)))) 
                                                                                << 0xeU)) 
                                                                                | ((vlSelf->io_data__out__strong__out77 
                                                                                & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0xfU)))) 
                                                                                << 0xfU)) 
                                                                                | ((vlSelf->io_data__out__strong__out78 
                                                                                & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0x10U)))) 
                                                                                << 0x10U)) 
                                                                                | (vlSelf->io_data__out__strong__out79 
                                                                                & ((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__gpio_module__DOT__rgpio_oe 
                                                                                >> 0x11U)))) 
                                                                                << 0x11U))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__timer_ptcR__DOT__cntr_clk = ((2U 
                                                 & (IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl))
                                                 ? (IData)(vlSelf->__PVT__timer_ptcR__DOT__eclk_gate)
                                                 : (IData)(vlSymsp->TOP.clk));
    vlSelf->__PVT__timer_ptcG__DOT__cntr_clk = ((2U 
                                                 & (IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl))
                                                 ? (IData)(vlSelf->__PVT__timer_ptcG__DOT__eclk_gate)
                                                 : (IData)(vlSymsp->TOP.clk));
    vlSelf->__PVT__timer_ptcB__DOT__cntr_clk = ((2U 
                                                 & (IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl))
                                                 ? (IData)(vlSelf->__PVT__timer_ptcB__DOT__eclk_gate)
                                                 : (IData)(vlSymsp->TOP.clk));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__26(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__26\n"); );
    // Body
    if ((1U & ((~ ((IData)(vlSelf->__PVT__spi__DOT__spcr) 
                   >> 6U)) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n))))) {
        vlSelf->__Vdly__spi__DOT__state = 0U;
        vlSelf->__Vdly__spi__DOT__bcnt = 0U;
        vlSelf->__Vdly__spi__DOT__treg = 0U;
        vlSelf->__Vdly__spi__DOT__wfre = 0U;
        vlSelf->__PVT__spi__DOT__rfwe = 0U;
        vlSelf->__Vdly__o_flash_sclk = 0U;
    } else {
        vlSelf->__Vdly__spi__DOT__wfre = 0U;
        vlSelf->__PVT__spi__DOT__rfwe = 0U;
        if ((2U & (IData)(vlSelf->__PVT__spi__DOT__state))) {
            if ((1U & (IData)(vlSelf->__PVT__spi__DOT__state))) {
                if ((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__spi__DOT__clkcnt)))))) {
                    vlSelf->__Vdly__spi__DOT__treg 
                        = (0xfeU & ((IData)(vlSelf->__PVT__spi__DOT__treg) 
                                    << 1U));
                    vlSelf->__Vdly__spi__DOT__bcnt 
                        = (7U & ((IData)(vlSelf->__PVT__spi__DOT__bcnt) 
                                 - (IData)(1U)));
                    if ((0U != (IData)(vlSelf->__PVT__spi__DOT__bcnt))) {
                        vlSelf->__Vdly__o_flash_sclk 
                            = (1U & (~ (IData)(vlSelf->__PVT__o_flash_sclk)));
                        vlSelf->__Vdly__spi__DOT__state = 1U;
                    } else {
                        vlSelf->__Vdly__spi__DOT__state = 0U;
                        vlSelf->__Vdly__o_flash_sclk 
                            = (1U & ((IData)(vlSelf->__PVT__spi__DOT__spcr) 
                                     >> 3U));
                        vlSelf->__PVT__spi__DOT__rfwe = 1U;
                    }
                }
            } else {
                vlSelf->__Vdly__spi__DOT__state = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__spi__DOT__state))) {
            if ((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__spi__DOT__clkcnt)))))) {
                vlSelf->__Vdly__o_flash_sclk = (1U 
                                                & (~ (IData)(vlSelf->__PVT__o_flash_sclk)));
                vlSelf->__Vdly__spi__DOT__state = 3U;
            }
        } else {
            vlSelf->__Vdly__o_flash_sclk = (1U & ((IData)(vlSelf->__PVT__spi__DOT__spcr) 
                                                  >> 3U));
            vlSelf->__Vdly__spi__DOT__bcnt = 7U;
            vlSelf->__Vdly__spi__DOT__treg = vlSelf->__PVT__spi__DOT__wfifo__DOT__mem
                [vlSelf->__PVT__spi__DOT__wfifo__DOT__rp];
            if ((1U & (~ (IData)(vlSelf->__PVT__spi__DOT__wfempty)))) {
                if ((4U & (IData)(vlSelf->__PVT__spi__DOT__spcr))) {
                    vlSelf->__Vdly__o_flash_sclk = 
                        (1U & (~ (IData)(vlSelf->__PVT__o_flash_sclk)));
                }
                vlSelf->__Vdly__spi__DOT__wfre = 1U;
                vlSelf->__Vdly__spi__DOT__state = 1U;
            }
        }
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__spi2__DOT__spcr) 
                   >> 6U)) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n))))) {
        vlSelf->__Vdly__spi2__DOT__state = 0U;
        vlSelf->__Vdly__spi2__DOT__bcnt = 0U;
        vlSelf->__Vdly__spi2__DOT__treg = 0U;
        vlSelf->__Vdly__spi2__DOT__wfre = 0U;
        vlSelf->__PVT__spi2__DOT__rfwe = 0U;
        vlSelf->__Vdly__o_accel_sclk = 0U;
    } else {
        vlSelf->__Vdly__spi2__DOT__wfre = 0U;
        vlSelf->__PVT__spi2__DOT__rfwe = 0U;
        if ((2U & (IData)(vlSelf->__PVT__spi2__DOT__state))) {
            if ((1U & (IData)(vlSelf->__PVT__spi2__DOT__state))) {
                if ((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__spi2__DOT__clkcnt)))))) {
                    vlSelf->__Vdly__spi2__DOT__treg 
                        = ((0xfeU & ((IData)(vlSelf->__PVT__spi2__DOT__treg) 
                                     << 1U)) | (IData)(vlSelf->__PVT__i_accel_miso));
                    vlSelf->__Vdly__spi2__DOT__bcnt 
                        = (7U & ((IData)(vlSelf->__PVT__spi2__DOT__bcnt) 
                                 - (IData)(1U)));
                    if ((0U != (IData)(vlSelf->__PVT__spi2__DOT__bcnt))) {
                        vlSelf->__Vdly__o_accel_sclk 
                            = (1U & (~ (IData)(vlSelf->__PVT__o_accel_sclk)));
                        vlSelf->__Vdly__spi2__DOT__state = 1U;
                    } else {
                        vlSelf->__Vdly__spi2__DOT__state = 0U;
                        vlSelf->__Vdly__o_accel_sclk 
                            = (1U & ((IData)(vlSelf->__PVT__spi2__DOT__spcr) 
                                     >> 3U));
                        vlSelf->__PVT__spi2__DOT__rfwe = 1U;
                    }
                }
            } else {
                vlSelf->__Vdly__spi2__DOT__state = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__spi2__DOT__state))) {
            if ((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__spi2__DOT__clkcnt)))))) {
                vlSelf->__Vdly__o_accel_sclk = (1U 
                                                & (~ (IData)(vlSelf->__PVT__o_accel_sclk)));
                vlSelf->__Vdly__spi2__DOT__state = 3U;
            }
        } else {
            vlSelf->__Vdly__o_accel_sclk = (1U & ((IData)(vlSelf->__PVT__spi2__DOT__spcr) 
                                                  >> 3U));
            vlSelf->__Vdly__spi2__DOT__bcnt = 7U;
            vlSelf->__Vdly__spi2__DOT__treg = vlSelf->__PVT__spi2__DOT__wfifo__DOT__mem
                [vlSelf->__PVT__spi2__DOT__wfifo__DOT__rp];
            if ((1U & (~ (IData)(vlSelf->__PVT__spi2__DOT__wfempty)))) {
                if ((4U & (IData)(vlSelf->__PVT__spi2__DOT__spcr))) {
                    vlSelf->__Vdly__o_accel_sclk = 
                        (1U & (~ (IData)(vlSelf->__PVT__o_accel_sclk)));
                }
                vlSelf->__Vdly__spi2__DOT__wfre = 1U;
                vlSelf->__Vdly__spi2__DOT__state = 1U;
            }
        }
    }
    vlSelf->__PVT__spi0_irq = ((IData)(vlSelf->__PVT__spi__DOT__spif) 
                               & ((IData)(vlSelf->__PVT__spi__DOT__spcr) 
                                  >> 7U));
    vlSelf->__PVT__syscon__DOT__nmi_int_r = vlSelf->__PVT__syscon__DOT__nmi_int;
    vlSelf->__PVT__spi__DOT__bcnt = vlSelf->__Vdly__spi__DOT__bcnt;
    vlSelf->__PVT__o_flash_sclk = vlSelf->__Vdly__o_flash_sclk;
    vlSelf->__PVT__spi__DOT__state = vlSelf->__Vdly__spi__DOT__state;
    vlSelf->__PVT__spi__DOT__clkcnt = vlSelf->__Vdly__spi__DOT__clkcnt;
    vlSelf->__PVT__spi__DOT__treg = vlSelf->__Vdly__spi__DOT__treg;
    if (vlSelf->__Vdlyvset__spi__DOT__wfifo__DOT__mem__v0) {
        vlSelf->__PVT__spi__DOT__wfifo__DOT__mem[vlSelf->__Vdlyvdim0__spi__DOT__wfifo__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__spi__DOT__wfifo__DOT__mem__v0;
    }
    vlSelf->__PVT__spi2__DOT__bcnt = vlSelf->__Vdly__spi2__DOT__bcnt;
    vlSelf->__PVT__o_accel_sclk = vlSelf->__Vdly__o_accel_sclk;
    vlSelf->__PVT__spi2__DOT__state = vlSelf->__Vdly__spi2__DOT__state;
    vlSelf->__PVT__spi2__DOT__clkcnt = vlSelf->__Vdly__spi2__DOT__clkcnt;
    vlSelf->__PVT__spi2__DOT__treg = vlSelf->__Vdly__spi2__DOT__treg;
    if (vlSelf->__Vdlyvset__spi2__DOT__wfifo__DOT__mem__v0) {
        vlSelf->__PVT__spi2__DOT__wfifo__DOT__mem[vlSelf->__Vdlyvdim0__spi2__DOT__wfifo__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__spi2__DOT__wfifo__DOT__mem__v0;
    }
    vlSelf->__PVT__spi__DOT__spif = vlSelf->__Vdly__spi__DOT__spif;
    vlSelf->__PVT__syscon__DOT__nmi_int = 0U;
    if (((IData)(vlSelf->__PVT__syscon__DOT__irq_gpio_enable) 
         & ((IData)(vlSelf->__PVT__gpio2_irq) | (IData)(vlSelf->__PVT__gpio_irq)))) {
        vlSelf->__Vdly__syscon__DOT__sw_irq4 = 1U;
    }
    if (((IData)(vlSelf->__PVT__syscon__DOT__irq_ptc_enable) 
         & ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
            >> 6U))) {
        vlSelf->__Vdly__syscon__DOT__sw_irq3 = 1U;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__syscon__DOT__irq_gpio_enable)) 
               & (~ (IData)(vlSelf->__PVT__syscon__DOT__irq_ptc_enable))))) {
        if (vlSelf->__PVT__syscon__DOT__sw_irq3_edge) {
            vlSelf->__Vdly__syscon__DOT__sw_irq3 = 0U;
        }
        if (vlSelf->__PVT__syscon__DOT__sw_irq4_edge) {
            vlSelf->__Vdly__syscon__DOT__sw_irq4 = 0U;
        }
        if (vlSelf->__PVT__syscon__DOT__irq_timer_en) {
            vlSelf->__Vdly__syscon__DOT__irq_timer_cnt 
                = (vlSelf->__PVT__syscon__DOT__irq_timer_cnt 
                   - (IData)(1U));
        }
        if ((1U == vlSelf->__PVT__syscon__DOT__irq_timer_cnt)) {
            vlSelf->__Vdly__syscon__DOT__irq_timer_en = 0U;
            if (vlSelf->__PVT__syscon__DOT__sw_irq3_timer) {
                vlSelf->__Vdly__syscon__DOT__sw_irq3 = 1U;
            }
            if (vlSelf->__PVT__syscon__DOT__sw_irq4_timer) {
                vlSelf->__Vdly__syscon__DOT__sw_irq4 = 1U;
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__syscon__DOT__sw_irq3_timer) 
                          | (IData)(vlSelf->__PVT__syscon__DOT__sw_irq4_timer))))) {
                vlSelf->__PVT__syscon__DOT__nmi_int = 1U;
            }
        }
    }
    if ((((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
          >> 9U) & ((IData)(vlSelf->__PVT__wb_m2s_io_stb) 
                    & ((~ (IData)(vlSelf->__PVT__wb_s2m_sys_ack)) 
                       & (IData)(vlSelf->__PVT__wb_m2s_io_we))))) {
        if (((((((((2U == (0xfU & (IData)(vlSelf->__PVT__wb_adr))) 
                   | (3U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
                  | (6U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
                 | (0xaU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
                | (0xbU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
               | (0xcU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
              | (0xdU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
             | (0xeU == (0xfU & (IData)(vlSelf->__PVT__wb_adr))))) {
            if ((2U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
                if (VL_UNLIKELY((1U & (IData)(vlSelf->__PVT__wb_m2s_io_sel)))) {
                    if (VL_UNLIKELY((0U != vlSelf->__PVT__syscon__DOT__f))) {
                        VL_FWRITEF(vlSelf->__PVT__syscon__DOT__f,"%c",
                                   8,(0xffU & vlSelf->__PVT__wb_m2s_io_dat));
                    }
                    VL_WRITEF("%c",8,(0xffU & vlSelf->__PVT__wb_m2s_io_dat));
                }
                if (VL_UNLIKELY((2U & (IData)(vlSelf->__PVT__wb_m2s_io_sel)))) {
                    VL_WRITEF("\nFinito\n");
                    VL_FINISH_MT("../src/SweRVolfSoC/Peripherals/SystemController/swervolf_syscon.sv", 172, "");
                }
                if ((8U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__sw_irq4 
                        = (vlSelf->__PVT__wb_m2s_io_dat 
                           >> 0x1fU);
                    vlSelf->__Vdly__syscon__DOT__sw_irq4_edge 
                        = (1U & (vlSelf->__PVT__wb_m2s_io_dat 
                                 >> 0x1eU));
                    vlSelf->__Vdly__syscon__DOT__sw_irq4_pol 
                        = (1U & (vlSelf->__PVT__wb_m2s_io_dat 
                                 >> 0x1dU));
                    vlSelf->__Vdly__syscon__DOT__sw_irq4_timer 
                        = (1U & (vlSelf->__PVT__wb_m2s_io_dat 
                                 >> 0x1cU));
                    vlSelf->__Vdly__syscon__DOT__sw_irq3 
                        = (1U & (vlSelf->__PVT__wb_m2s_io_dat 
                                 >> 0x1bU));
                    vlSelf->__Vdly__syscon__DOT__sw_irq3_edge 
                        = (1U & (vlSelf->__PVT__wb_m2s_io_dat 
                                 >> 0x1aU));
                    vlSelf->__Vdly__syscon__DOT__sw_irq3_pol 
                        = (1U & (vlSelf->__PVT__wb_m2s_io_dat 
                                 >> 0x19U));
                    vlSelf->__Vdly__syscon__DOT__sw_irq3_timer 
                        = (1U & (vlSelf->__PVT__wb_m2s_io_dat 
                                 >> 0x18U));
                }
            } else if ((3U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
                if ((1U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    vlSelf->__Vdly__nmi_vec = ((0xffffff00U 
                                                & vlSelf->__Vdly__nmi_vec) 
                                               | (0xffU 
                                                  & vlSelf->__PVT__wb_m2s_io_dat));
                }
                if ((2U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    vlSelf->__Vdly__nmi_vec = ((0xffff00ffU 
                                                & vlSelf->__Vdly__nmi_vec) 
                                               | (0xff00U 
                                                  & vlSelf->__PVT__wb_m2s_io_dat));
                }
                if ((4U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    vlSelf->__Vdly__nmi_vec = ((0xff00ffffU 
                                                & vlSelf->__Vdly__nmi_vec) 
                                               | (0xff0000U 
                                                  & vlSelf->__PVT__wb_m2s_io_dat));
                }
                if ((8U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    vlSelf->__Vdly__nmi_vec = ((0xffffffU 
                                                & vlSelf->__Vdly__nmi_vec) 
                                               | (0xff000000U 
                                                  & vlSelf->__PVT__wb_m2s_io_dat));
                }
            } else if ((6U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
                if ((1U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__irq_gpio_enable 
                        = (1U & vlSelf->__PVT__wb_m2s_io_dat);
                }
                vlSelf->__Vdly__syscon__DOT__irq_ptc_enable 
                    = (1U & (vlSelf->__PVT__wb_m2s_io_dat 
                             >> 1U));
            } else if ((0xaU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
                if ((1U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__mtimecmp 
                        = ((0xffffffffffffff00ULL & vlSelf->__Vdly__syscon__DOT__mtimecmp) 
                           | (IData)((IData)((0xffU 
                                              & vlSelf->__PVT__wb_m2s_io_dat))));
                }
                if ((2U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__mtimecmp 
                        = ((0xffffffffffff00ffULL & vlSelf->__Vdly__syscon__DOT__mtimecmp) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->__PVT__wb_m2s_io_dat 
                                                  >> 8U)))) 
                              << 8U));
                }
                if ((4U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__mtimecmp 
                        = ((0xffffffffff00ffffULL & vlSelf->__Vdly__syscon__DOT__mtimecmp) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->__PVT__wb_m2s_io_dat 
                                                  >> 0x10U)))) 
                              << 0x10U));
                }
                if ((8U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__mtimecmp 
                        = ((0xffffffff00ffffffULL & vlSelf->__Vdly__syscon__DOT__mtimecmp) 
                           | ((QData)((IData)((vlSelf->__PVT__wb_m2s_io_dat 
                                               >> 0x18U))) 
                              << 0x18U));
                }
            } else if ((0xbU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
                if ((1U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__mtimecmp 
                        = ((0xffffff00ffffffffULL & vlSelf->__Vdly__syscon__DOT__mtimecmp) 
                           | ((QData)((IData)((0xffU 
                                               & vlSelf->__PVT__wb_m2s_io_dat))) 
                              << 0x20U));
                }
                if ((2U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__mtimecmp 
                        = ((0xffff00ffffffffffULL & vlSelf->__Vdly__syscon__DOT__mtimecmp) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->__PVT__wb_m2s_io_dat 
                                                  >> 8U)))) 
                              << 0x28U));
                }
                if ((4U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__mtimecmp 
                        = ((0xff00ffffffffffffULL & vlSelf->__Vdly__syscon__DOT__mtimecmp) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->__PVT__wb_m2s_io_dat 
                                                  >> 0x10U)))) 
                              << 0x30U));
                }
                if ((8U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__mtimecmp 
                        = ((0xffffffffffffffULL & vlSelf->__Vdly__syscon__DOT__mtimecmp) 
                           | ((QData)((IData)((vlSelf->__PVT__wb_m2s_io_dat 
                                               >> 0x18U))) 
                              << 0x38U));
                }
            } else if ((0xcU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
                if ((1U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__irq_timer_cnt 
                        = ((0xffffff00U & vlSelf->__Vdly__syscon__DOT__irq_timer_cnt) 
                           | (0xffU & vlSelf->__PVT__wb_m2s_io_dat));
                }
                if ((2U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__irq_timer_cnt 
                        = ((0xffff00ffU & vlSelf->__Vdly__syscon__DOT__irq_timer_cnt) 
                           | (0xff00U & vlSelf->__PVT__wb_m2s_io_dat));
                }
                if ((4U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__irq_timer_cnt 
                        = ((0xff00ffffU & vlSelf->__Vdly__syscon__DOT__irq_timer_cnt) 
                           | (0xff0000U & vlSelf->__PVT__wb_m2s_io_dat));
                }
                if ((8U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__irq_timer_cnt 
                        = ((0xffffffU & vlSelf->__Vdly__syscon__DOT__irq_timer_cnt) 
                           | (0xff000000U & vlSelf->__PVT__wb_m2s_io_dat));
                }
            } else if ((0xdU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
                if ((1U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__irq_timer_en 
                        = (1U & vlSelf->__PVT__wb_m2s_io_dat);
                }
            } else if ((1U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                vlSelf->__PVT__syscon__DOT__Enables_Reg 
                    = (0xffU & vlSelf->__PVT__wb_m2s_io_dat);
            }
        } else if ((0xfU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
            if ((1U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                vlSelf->__PVT__syscon__DOT__Digits_Reg 
                    = ((0xffffff00U & vlSelf->__PVT__syscon__DOT__Digits_Reg) 
                       | (0xffU & vlSelf->__PVT__wb_m2s_io_dat));
            }
            if ((2U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                vlSelf->__PVT__syscon__DOT__Digits_Reg 
                    = ((0xffff00ffU & vlSelf->__PVT__syscon__DOT__Digits_Reg) 
                       | (0xff00U & vlSelf->__PVT__wb_m2s_io_dat));
            }
            if ((4U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                vlSelf->__PVT__syscon__DOT__Digits_Reg 
                    = ((0xff00ffffU & vlSelf->__PVT__syscon__DOT__Digits_Reg) 
                       | (0xff0000U & vlSelf->__PVT__wb_m2s_io_dat));
            }
            if ((8U & (IData)(vlSelf->__PVT__wb_m2s_io_sel))) {
                vlSelf->__PVT__syscon__DOT__Digits_Reg 
                    = ((0xffffffU & vlSelf->__PVT__syscon__DOT__Digits_Reg) 
                       | (0xff000000U & vlSelf->__PVT__wb_m2s_io_dat));
            }
        }
    }
    if (((((((((0U == (0xfU & (IData)(vlSelf->__PVT__wb_adr))) 
               | (1U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
              | (2U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
             | (3U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
            | (6U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
           | (8U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
          | (9U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
         | (0xaU == (0xfU & (IData)(vlSelf->__PVT__wb_adr))))) {
        if ((0U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
            vlSelf->__PVT__wb_s2m_sys_dat = vlSelf->__PVT__syscon__DOT__version;
        } else if ((1U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
            vlSelf->__PVT__wb_s2m_sys_dat = 0x8946d48dU;
        } else if ((2U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
            vlSelf->__PVT__wb_s2m_sys_dat = ((0xfffffffU 
                                              & vlSelf->__PVT__wb_s2m_sys_dat) 
                                             | (((IData)(vlSelf->__PVT__syscon__DOT__sw_irq4) 
                                                 << 0x1fU) 
                                                | (((IData)(vlSelf->__PVT__syscon__DOT__sw_irq4_edge) 
                                                    << 0x1eU) 
                                                   | (((IData)(vlSelf->__PVT__syscon__DOT__sw_irq4_pol) 
                                                       << 0x1dU) 
                                                      | ((IData)(vlSelf->__PVT__syscon__DOT__sw_irq4_timer) 
                                                         << 0x1cU)))));
            vlSelf->__PVT__wb_s2m_sys_dat = ((0xf0ffffffU 
                                              & vlSelf->__PVT__wb_s2m_sys_dat) 
                                             | (((IData)(vlSelf->__PVT__syscon__DOT__sw_irq3) 
                                                 << 0x1bU) 
                                                | (((IData)(vlSelf->__PVT__syscon__DOT__sw_irq3_edge) 
                                                    << 0x1aU) 
                                                   | (((IData)(vlSelf->__PVT__syscon__DOT__sw_irq3_pol) 
                                                       << 0x19U) 
                                                      | ((IData)(vlSelf->__PVT__syscon__DOT__sw_irq3_timer) 
                                                         << 0x18U)))));
            vlSelf->__PVT__wb_s2m_sys_dat = (0x10000U 
                                             | (0xff000000U 
                                                & vlSelf->__PVT__wb_s2m_sys_dat));
        } else {
            vlSelf->__PVT__wb_s2m_sys_dat = ((3U == 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__wb_adr)))
                                              ? vlSelf->__PVT__nmi_vec
                                              : ((6U 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(vlSelf->__PVT__wb_adr)))
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__syscon__DOT__irq_ptc_enable) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__syscon__DOT__irq_gpio_enable))
                                                  : 
                                                 ((8U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->__PVT__wb_adr)))
                                                   ? (IData)(vlSelf->__PVT__syscon__DOT__mtime)
                                                   : 
                                                  ((9U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->__PVT__wb_adr)))
                                                    ? (IData)(
                                                              (vlSelf->__PVT__syscon__DOT__mtime 
                                                               >> 0x20U))
                                                    : (IData)(vlSelf->__PVT__syscon__DOT__mtimecmp)))));
        }
    } else if ((0xbU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
        vlSelf->__PVT__wb_s2m_sys_dat = (IData)((vlSelf->__PVT__syscon__DOT__mtimecmp 
                                                 >> 0x20U));
    } else if ((0xcU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
        vlSelf->__PVT__wb_s2m_sys_dat = vlSelf->__PVT__syscon__DOT__irq_timer_cnt;
    } else if ((0xdU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
        vlSelf->__PVT__wb_s2m_sys_dat = vlSelf->__PVT__syscon__DOT__irq_timer_en;
    } else if ((0xfU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
        vlSelf->__PVT__wb_s2m_sys_dat = 0U;
    }
    vlSelf->__Vdly__syscon__DOT__mtime = (1ULL + vlSelf->__PVT__syscon__DOT__mtime);
    vlSelf->__PVT__timer_irq = (vlSelf->__PVT__syscon__DOT__mtime 
                                >= vlSelf->__PVT__syscon__DOT__mtimecmp);
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)))) {
        vlSelf->__Vdly__syscon__DOT__mtime = 0ULL;
        vlSelf->__Vdly__syscon__DOT__mtimecmp = 0ULL;
    }
    vlSelf->__PVT__syscon__DOT__irq_timer_cnt = vlSelf->__Vdly__syscon__DOT__irq_timer_cnt;
    vlSelf->__PVT__syscon__DOT__irq_timer_en = vlSelf->__Vdly__syscon__DOT__irq_timer_en;
    vlSelf->__PVT__syscon__DOT__sw_irq4_edge = vlSelf->__Vdly__syscon__DOT__sw_irq4_edge;
    vlSelf->__PVT__syscon__DOT__sw_irq4_timer = vlSelf->__Vdly__syscon__DOT__sw_irq4_timer;
    vlSelf->__PVT__syscon__DOT__sw_irq3_edge = vlSelf->__Vdly__syscon__DOT__sw_irq3_edge;
    vlSelf->__PVT__syscon__DOT__sw_irq3_timer = vlSelf->__Vdly__syscon__DOT__sw_irq3_timer;
    vlSelf->__PVT__syscon__DOT__irq_gpio_enable = vlSelf->__Vdly__syscon__DOT__irq_gpio_enable;
    vlSelf->__PVT__syscon__DOT__irq_ptc_enable = vlSelf->__Vdly__syscon__DOT__irq_ptc_enable;
    vlSelf->__PVT__syscon__DOT__mtimecmp = vlSelf->__Vdly__syscon__DOT__mtimecmp;
    vlSelf->__PVT__syscon__DOT__sw_irq4 = vlSelf->__Vdly__syscon__DOT__sw_irq4;
    vlSelf->__PVT__syscon__DOT__sw_irq4_pol = vlSelf->__Vdly__syscon__DOT__sw_irq4_pol;
    vlSelf->__PVT__syscon__DOT__sw_irq3 = vlSelf->__Vdly__syscon__DOT__sw_irq3;
    vlSelf->__PVT__syscon__DOT__sw_irq3_pol = vlSelf->__Vdly__syscon__DOT__sw_irq3_pol;
    vlSelf->__PVT__syscon__DOT__mtime = vlSelf->__Vdly__syscon__DOT__mtime;
    vlSelf->__PVT__wb_s2m_sys_ack = vlSelf->__Vdly__wb_s2m_sys_ack;
    vlSelf->__PVT__nmi_vec = vlSelf->__Vdly__nmi_vec;
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__27(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__27\n"); );
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout;
        vlSelf->__PVT__uart_irq = (1U & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rls_int_pnd)
                                          ? (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr_mask))
                                          : ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rda_int_pnd) 
                                             | ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ti_int_pnd)
                                                 ? 
                                                (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fifo_read))
                                                 : 
                                                ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__thre_int_pnd)
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fifo_write) 
                                                   & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__iir_read)))
                                                  : 
                                                 ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ms_int_pnd) 
                                                  & (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__msr_read))))))));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellinp__dbg_state_reg__rst_l 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l;
        if ((0x40U & (IData)(vlSelf->__PVT__spi__DOT__spcr))) {
            if (vlSelf->__PVT__spi__DOT__wfre) {
                vlSelf->__PVT__spi__DOT__wfifo__DOT__rp 
                    = vlSelf->__PVT__spi__DOT__wfifo__DOT__rp_p1;
            }
        } else {
            vlSelf->__PVT__spi__DOT__wfifo__DOT__rp = 0U;
        }
        if ((0x40U & (IData)(vlSelf->__PVT__spi2__DOT__spcr))) {
            if (vlSelf->__PVT__spi2__DOT__wfre) {
                vlSelf->__PVT__spi2__DOT__wfifo__DOT__rp 
                    = vlSelf->__PVT__spi2__DOT__wfifo__DOT__rp_p1;
            }
        } else {
            vlSelf->__PVT__spi2__DOT__wfifo__DOT__rp = 0U;
        }
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l = 0U;
        vlSelf->__PVT__uart_irq = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellinp__dbg_state_reg__rst_l = 0U;
        vlSelf->__PVT__spi__DOT__wfifo__DOT__rp = 0U;
        vlSelf->__PVT__spi2__DOT__wfifo__DOT__rp = 0U;
    }
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rda_int_pnd 
        = vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rda_int_pnd;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rls_int_pnd 
        = vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__rls_int_pnd;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ti_int_pnd 
        = vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__ti_int_pnd;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__thre_int_pnd 
        = vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__thre_int_pnd;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ms_int_pnd 
        = vlSelf->__Vdly__uart16550_0__DOT__regs__DOT__ms_int_pnd;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fifo_read 
        = ((IData)(vlSelf->__PVT__uart16550_0__DOT__re_o) 
           & (IData)(vlSelf->uart16550_0__DOT__regs__DOT____VdfgTmp_h755f749e__0));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__iir_read 
        = ((IData)(vlSelf->__PVT__uart16550_0__DOT__re_o) 
           & ((~ ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                  >> 7U)) & (2U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__msr_read 
        = ((IData)(vlSelf->__PVT__uart16550_0__DOT__re_o) 
           & ((~ ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                  >> 7U)) & (6U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fifo_write 
        = ((IData)(vlSelf->__PVT__uart16550_0__DOT__we_o) 
           & (IData)(vlSelf->uart16550_0__DOT__regs__DOT____VdfgTmp_h755f749e__0));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr_mask 
        = ((~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr_mask_d)) 
           & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr_mask_condition));
    vlSelf->__PVT__spi__DOT__wfifo__DOT__rp_p1 = (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__rp)));
    vlSelf->spi__DOT__wfifo__DOT____VdfgTmp_hbf3f7ff0__0 
        = ((IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__rp) 
           == (IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__wp));
    vlSelf->__PVT__spi2__DOT__wfifo__DOT__rp_p1 = (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__rp)));
    vlSelf->spi2__DOT__wfifo__DOT____VdfgTmp_hbf3f7ff0__0 
        = ((IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__rp) 
           == (IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__wp));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__28(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__28\n"); );
    // Body
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
           & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__42(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__42\n"); );
    // Body
    if (vlSelf->__Vdlyvset__gpio2_irq__v0) {
        vlSelf->__PVT__gpio2_irq = vlSelf->__Vdlyvval__gpio2_irq__v0;
        vlSelf->__Vdlyvset__gpio2_irq__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__gpio_irq__v0) {
        vlSelf->__PVT__gpio_irq = vlSelf->__Vdlyvval__gpio_irq__v0;
        vlSelf->__Vdlyvset__gpio_irq__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__timer_ptc__DOT__rptc_ctrl__v0) {
        vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl = vlSelf->__Vdlyvval__timer_ptc__DOT__rptc_ctrl__v0;
        vlSelf->__Vdlyvset__timer_ptc__DOT__rptc_ctrl__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__timer_ptc__DOT__rptc_ctrl__v1) {
        vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl = 
            (((~ ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__timer_ptc__DOT__rptc_ctrl__v1))) 
              & (IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl)) 
             | (0x1ffU & ((IData)(vlSelf->__Vdlyvval__timer_ptc__DOT__rptc_ctrl__v1) 
                          << (IData)(vlSelf->__Vdlyvlsb__timer_ptc__DOT__rptc_ctrl__v1))));
        vlSelf->__Vdlyvset__timer_ptc__DOT__rptc_ctrl__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__timer_ptc__DOT__rptc_ctrl__v2) {
        vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl = vlSelf->__Vdlyvval__timer_ptc__DOT__rptc_ctrl__v2;
        vlSelf->__Vdlyvset__timer_ptc__DOT__rptc_ctrl__v2 = 0U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl))) {
        vlSelf->__PVT__timer_ptc__DOT__hrc_clk = vlSelf->__PVT__timer_ptc__DOT__capt_pad_i;
        vlSelf->__PVT__timer_ptc__DOT__lrc_clk = (1U 
                                                  & (~ (IData)(vlSelf->__PVT__timer_ptc__DOT__capt_pad_i)));
    } else {
        vlSelf->__PVT__timer_ptc__DOT__hrc_clk = vlSymsp->TOP.clk;
        vlSelf->__PVT__timer_ptc__DOT__lrc_clk = (1U 
                                                  & (IData)(vlSymsp->TOP.clk));
    }
    vlSelf->__PVT__timer_ptc__DOT__eclk_gate = (1U 
                                                & ((IData)(vlSelf->__PVT__timer_ptc__DOT__gate_clk_pad_i) 
                                                   ^ 
                                                   ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                                    >> 2U)));
    vlSelf->__PVT__timer_ptc__DOT__cntr_clk = ((2U 
                                                & (IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl))
                                                ? (IData)(vlSelf->__PVT__timer_ptc__DOT__eclk_gate)
                                                : (IData)(vlSymsp->TOP.clk));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__43(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__43\n"); );
    // Init
    CData/*0:0*/ spi__DOT____VdfgTmp_h05a03d48__0;
    spi__DOT____VdfgTmp_h05a03d48__0 = 0;
    CData/*0:0*/ spi2__DOT____VdfgTmp_h05a03d48__0;
    spi2__DOT____VdfgTmp_h05a03d48__0 = 0;
    CData/*3:0*/ __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout;
    __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in;
    __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in = 0;
    // Body
    vlSelf->__PVT__spi__DOT__wfre = vlSelf->__Vdly__spi__DOT__wfre;
    vlSelf->__PVT__spi2__DOT__wfre = vlSelf->__Vdly__spi2__DOT__wfre;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (vlSelf->__PVT__spi__DOT__wb_wr) {
            if ((0U == (IData)(vlSelf->__Vcellinp__spi2__adr_i))) {
                vlSelf->__PVT__spi__DOT__spcr = (0xffU 
                                                 & (0x10U 
                                                    | vlSelf->__PVT__wb_m2s_io_dat));
            }
        }
        if (vlSelf->__PVT__spi2__DOT__wb_wr) {
            if ((0U == (IData)(vlSelf->__Vcellinp__spi2__adr_i))) {
                vlSelf->__PVT__spi2__DOT__spcr = (0xffU 
                                                  & (0x10U 
                                                     | vlSelf->__PVT__wb_m2s_io_dat));
            }
        }
        vlSelf->__PVT__io_awready = 0U;
        vlSelf->__PVT__io_wready = 0U;
        vlSelf->__PVT__io_arready = 0U;
        if ((8U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
            vlSelf->__PVT__io_awready = 0U;
            vlSelf->__PVT__io_wready = 0U;
            vlSelf->__PVT__io_arready = 0U;
            vlSelf->__PVT__io_rvalid = 0U;
            vlSelf->__PVT__io_bvalid = 0U;
            vlSelf->__PVT__wb_adr = 0U;
            vlSelf->__PVT__wb_m2s_io_cyc = 0U;
            vlSelf->__PVT__wb_m2s_io_stb = 0U;
            vlSelf->__PVT__wb_m2s_io_sel = 0U;
            vlSelf->__PVT__wb_m2s_io_we = 0U;
            vlSelf->__Vdly__axi2wb__DOT__arbiter = 1U;
            vlSelf->__Vdly__axi2wb__DOT__cs = 0U;
        } else if ((4U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
            if ((2U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
                if ((1U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
                    vlSelf->__PVT__io_rvalid = 1U;
                    if ((1U & vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U])) {
                        vlSelf->__PVT__io_rvalid = 0U;
                        vlSelf->__Vdly__axi2wb__DOT__cs = 0U;
                    }
                } else {
                    vlSelf->__PVT__io_bvalid = 1U;
                    if ((0x40U & vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U])) {
                        vlSelf->__PVT__io_bvalid = 0U;
                        vlSelf->__Vdly__axi2wb__DOT__cs = 0U;
                    }
                }
            } else if ((1U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
                if (((IData)(vlSelf->__PVT__wb_s2m_io_err) 
                     | (IData)(vlSelf->__PVT__wb_s2m_io_ack))) {
                    vlSelf->__PVT__wb_m2s_io_cyc = 0U;
                    vlSelf->__PVT__wb_m2s_io_stb = 0U;
                    vlSelf->__PVT__wb_m2s_io_sel = 0U;
                    vlSelf->__PVT__io_rvalid = 1U;
                    vlSelf->__PVT__io_rdata = (((QData)((IData)(vlSelf->__PVT__wb_s2m_io_dat)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->__PVT__axi2wb__DOT__wb_rdt_low)));
                    vlSelf->__Vdly__axi2wb__DOT__cs = 7U;
                }
            } else {
                vlSelf->__PVT__wb_adr = (1U | (IData)(vlSelf->__PVT__wb_adr));
                vlSelf->__PVT__wb_m2s_io_sel = 0xfU;
                vlSelf->__PVT__wb_m2s_io_cyc = 1U;
                vlSelf->__PVT__wb_m2s_io_stb = 1U;
                vlSelf->__Vdly__axi2wb__DOT__cs = 5U;
            }
        } else if ((2U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
            if ((1U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
                if (((IData)(vlSelf->__PVT__wb_s2m_io_err) 
                     | (IData)(vlSelf->__PVT__wb_s2m_io_ack))) {
                    vlSelf->__PVT__wb_m2s_io_cyc = 0U;
                    vlSelf->__PVT__wb_m2s_io_stb = 0U;
                    vlSelf->__PVT__wb_m2s_io_sel = 0U;
                    vlSelf->__PVT__axi2wb__DOT__wb_rdt_low 
                        = vlSelf->__PVT__wb_s2m_io_dat;
                    vlSelf->__Vdly__axi2wb__DOT__cs = 4U;
                }
            } else if (((IData)(vlSelf->__PVT__wb_s2m_io_err) 
                        | (IData)(vlSelf->__PVT__wb_s2m_io_ack))) {
                vlSelf->__PVT__wb_m2s_io_cyc = 0U;
                vlSelf->__PVT__wb_m2s_io_stb = 0U;
                vlSelf->__PVT__wb_m2s_io_sel = 0U;
                vlSelf->__PVT__wb_m2s_io_we = 0U;
                vlSelf->__PVT__io_bvalid = 1U;
                vlSelf->__Vdly__axi2wb__DOT__cs = 6U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
            if ((0x80U & vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U])) {
                vlSelf->__PVT__axi2wb__DOT__hi_32b_w 
                    = (0U == (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                      >> 0xaU)));
                vlSelf->__PVT__wb_adr = ((0x3ffeU & (IData)(vlSelf->__PVT__wb_adr)) 
                                         | (IData)(vlSelf->__PVT__axi2wb__DOT__hi_32b_w));
                vlSelf->__PVT__wb_m2s_io_cyc = 1U;
                vlSelf->__PVT__wb_m2s_io_stb = 1U;
                vlSelf->__PVT__wb_m2s_io_we = 1U;
                vlSelf->__PVT__io_wready = 1U;
                vlSelf->__Vdly__axi2wb__DOT__cs = 2U;
                if (vlSelf->__PVT__axi2wb__DOT__hi_32b_w) {
                    vlSelf->__PVT__wb_m2s_io_sel = 
                        (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                  << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                               >> 0xeU)));
                    vlSelf->__PVT__wb_m2s_io_dat = 
                        ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
                          << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                                      >> 0x12U));
                } else {
                    vlSelf->__PVT__wb_m2s_io_sel = 
                        (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                  << 0x16U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                               >> 0xaU)));
                    vlSelf->__PVT__wb_m2s_io_dat = 
                        ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                          << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                      >> 0x12U));
                }
            }
        } else {
            vlSelf->__Vdly__axi2wb__DOT__arbiter = 1U;
            if (((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
                  >> 0x12U) & (IData)(vlSelf->__PVT__axi2wb__DOT__arbiter))) {
                vlSelf->__PVT__wb_adr = ((1U & (IData)(vlSelf->__PVT__wb_adr)) 
                                         | (0x3ffeU 
                                            & ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[6U] 
                                                << 7U) 
                                               | (0x7eU 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U] 
                                                     >> 0x19U)))));
                vlSelf->__PVT__io_awready = 1U;
                vlSelf->__Vdly__axi2wb__DOT__arbiter = 0U;
                if ((0x80U & vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U])) {
                    vlSelf->__PVT__axi2wb__DOT__hi_32b_w 
                        = (0U == (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                          >> 0xaU)));
                    vlSelf->__PVT__wb_adr = ((0x3ffeU 
                                              & (IData)(vlSelf->__PVT__wb_adr)) 
                                             | (IData)(vlSelf->__PVT__axi2wb__DOT__hi_32b_w));
                    vlSelf->__PVT__wb_m2s_io_cyc = 1U;
                    vlSelf->__PVT__wb_m2s_io_stb = 1U;
                    vlSelf->__PVT__wb_m2s_io_we = 1U;
                    vlSelf->__PVT__io_wready = 1U;
                    vlSelf->__Vdly__axi2wb__DOT__cs = 2U;
                    if (vlSelf->__PVT__axi2wb__DOT__hi_32b_w) {
                        vlSelf->__PVT__wb_m2s_io_sel 
                            = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                        << 0x12U) | 
                                       (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                        >> 0xeU)));
                        vlSelf->__PVT__wb_m2s_io_dat 
                            = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
                                << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                                            >> 0x12U));
                    } else {
                        vlSelf->__PVT__wb_m2s_io_sel 
                            = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                        << 0x16U) | 
                                       (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                        >> 0xaU)));
                        vlSelf->__PVT__wb_m2s_io_dat 
                            = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                                << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                            >> 0x12U));
                    }
                } else {
                    vlSelf->__Vdly__axi2wb__DOT__cs = 1U;
                }
            } else if ((2U & vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U])) {
                vlSelf->__PVT__wb_adr = (0x3fffU & 
                                         (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[1U] 
                                          >> 2U));
                vlSelf->__PVT__wb_m2s_io_sel = 0xfU;
                vlSelf->__PVT__wb_m2s_io_cyc = 1U;
                vlSelf->__PVT__wb_m2s_io_stb = 1U;
                vlSelf->__PVT__io_arready = 1U;
                vlSelf->__Vdly__axi2wb__DOT__cs = 3U;
            }
        }
    } else {
        vlSelf->__PVT__spi__DOT__spcr = 0x10U;
        vlSelf->__PVT__spi2__DOT__spcr = 0x10U;
        vlSelf->__Vdly__axi2wb__DOT__arbiter = 1U;
        vlSelf->__PVT__io_awready = 0U;
        vlSelf->__PVT__io_wready = 0U;
        vlSelf->__PVT__io_arready = 0U;
        vlSelf->__PVT__io_rvalid = 0U;
        vlSelf->__PVT__io_bvalid = 0U;
        vlSelf->__PVT__wb_adr = 0U;
        vlSelf->__PVT__wb_m2s_io_cyc = 0U;
        vlSelf->__PVT__wb_m2s_io_stb = 0U;
        vlSelf->__PVT__wb_m2s_io_sel = 0U;
        vlSelf->__PVT__wb_m2s_io_we = 0U;
        vlSelf->__PVT__axi2wb__DOT__wb_rdt_low = 0xdeadbeefU;
        vlSelf->__Vdly__axi2wb__DOT__cs = 0U;
    }
    vlSelf->__PVT__spi__DOT__espr = ((0xcU & ((IData)(vlSelf->__PVT__spi__DOT__sper) 
                                              << 2U)) 
                                     | (3U & (IData)(vlSelf->__PVT__spi__DOT__spcr)));
    vlSelf->__PVT__spi2__DOT__espr = ((0xcU & ((IData)(vlSelf->__PVT__spi2__DOT__sper) 
                                               << 2U)) 
                                      | (3U & (IData)(vlSelf->__PVT__spi2__DOT__spcr)));
    vlSelf->__PVT__axi2wb__DOT__arbiter = vlSelf->__Vdly__axi2wb__DOT__arbiter;
    vlSelf->__PVT__axi2wb__DOT__cs = vlSelf->__Vdly__axi2wb__DOT__cs;
    vlSelf->__Vcellinp__spi2__adr_i = ((1U & (IData)(vlSelf->__PVT__wb_adr))
                                        ? 0U : (7U 
                                                & ((IData)(vlSelf->__PVT__wb_adr) 
                                                   >> 1U)));
    vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = (((0U == (0x3c00U & (IData)(vlSelf->__PVT__wb_adr))) 
            << 0xaU) | (((0x400U == (0x3ff0U & (IData)(vlSelf->__PVT__wb_adr))) 
                         << 9U) | (((0x410U == (0x3ff0U 
                                                & (IData)(vlSelf->__PVT__wb_adr))) 
                                    << 8U) | (((0x440U 
                                                == 
                                                (0x3ff0U 
                                                 & (IData)(vlSelf->__PVT__wb_adr))) 
                                               << 7U) 
                                              | (((0x480U 
                                                   == 
                                                   (0x3ff0U 
                                                    & (IData)(vlSelf->__PVT__wb_adr))) 
                                                  << 6U) 
                                                 | (((0x490U 
                                                      == 
                                                      (0x3ff0U 
                                                       & (IData)(vlSelf->__PVT__wb_adr))) 
                                                     << 5U) 
                                                    | (((0x4a0U 
                                                         == 
                                                         (0x3ff0U 
                                                          & (IData)(vlSelf->__PVT__wb_adr))) 
                                                        << 4U) 
                                                       | (((0x4b0U 
                                                            == 
                                                            (0x3ff0U 
                                                             & (IData)(vlSelf->__PVT__wb_adr))) 
                                                           << 3U) 
                                                          | (((0x500U 
                                                               == 
                                                               (0x3ff0U 
                                                                & (IData)(vlSelf->__PVT__wb_adr))) 
                                                              << 2U) 
                                                             | (((0x600U 
                                                                  == 
                                                                  (0x3ff0U 
                                                                   & (IData)(vlSelf->__PVT__wb_adr))) 
                                                                 << 1U) 
                                                                | (0x800U 
                                                                   == 
                                                                   (0x3c00U 
                                                                    & (IData)(vlSelf->__PVT__wb_adr)))))))))))));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[0U] 
        = (2U | ((1U & vlSelf->__PVT__axi_intercon__DOT__slaves_resp[0U]) 
                 | ((IData)(vlSelf->__PVT__io_rdata) 
                    << 4U)));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[1U] 
        = ((1U & ((IData)(vlSelf->__PVT__io_rdata) 
                  >> 0x1cU)) | ((0xeU & ((IData)(vlSelf->__PVT__io_rdata) 
                                         >> 0x1cU)) 
                                | ((IData)((vlSelf->__PVT__io_rdata 
                                            >> 0x20U)) 
                                   << 4U)));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = ((0xfffff800U & vlSelf->__PVT__axi_intercon__DOT__slaves_resp[2U]) 
           | ((1U & ((IData)((vlSelf->__PVT__io_rdata 
                              >> 0x20U)) >> 0x1cU)) 
              | (((IData)(vlSelf->__PVT__io_rvalid) 
                  << 0xaU) | (((IData)(vlSelf->__PVT__io_rid) 
                               << 4U) | (0xeU & ((IData)(
                                                         (vlSelf->__PVT__io_rdata 
                                                          >> 0x20U)) 
                                                 >> 0x1cU))))));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = ((0xff000fffU & vlSelf->__PVT__axi_intercon__DOT__slaves_resp[2U]) 
           | (0xfffff000U & (((IData)(vlSelf->__PVT__io_awready) 
                              << 0x17U) | (((IData)(vlSelf->__PVT__io_arready) 
                                            << 0x16U) 
                                           | (((IData)(vlSelf->__PVT__io_wready) 
                                               << 0x15U) 
                                              | (((IData)(vlSelf->__PVT__io_bvalid) 
                                                  << 0x14U) 
                                                 | ((IData)(vlSelf->__PVT__io_bid) 
                                                    << 0xeU)))))));
    __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in 
        = vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match;
    __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 0U;
    if ((0x400U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 0xaU;
    }
    if ((0x200U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 9U;
    }
    if ((0x100U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 8U;
    }
    if ((0x80U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 7U;
    }
    if ((0x40U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 6U;
    }
    if ((0x20U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 5U;
    }
    if ((0x10U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 4U;
    }
    if ((8U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 3U;
    }
    if ((4U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 2U;
    }
    if ((2U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 1U;
    }
    if ((1U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 0U;
    }
    vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel 
        = __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout;
    vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o 
        = ((IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match) 
           & ((IData)(vlSelf->__PVT__wb_m2s_io_cyc) 
              << (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)));
    vlSelf->gpio_module__DOT____VdfgTmp_h6152756d__0 
        = (((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
            >> 2U) & (IData)(vlSelf->__PVT__wb_m2s_io_stb));
    vlSelf->gpio2_module__DOT____VdfgTmp_h6152756d__0 
        = (((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
            >> 1U) & (IData)(vlSelf->__PVT__wb_m2s_io_stb));
    vlSelf->timer_ptc__DOT____VdfgTmp_h61526ae5__0 
        = (((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
            >> 6U) & (IData)(vlSelf->__PVT__wb_m2s_io_stb));
    vlSelf->timer_ptcR__DOT____VdfgTmp_h61526ae5__0 
        = (((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
            >> 5U) & (IData)(vlSelf->__PVT__wb_m2s_io_stb));
    vlSelf->timer_ptcG__DOT____VdfgTmp_h61526ae5__0 
        = (((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
            >> 4U) & (IData)(vlSelf->__PVT__wb_m2s_io_stb));
    vlSelf->timer_ptcB__DOT____VdfgTmp_h61526ae5__0 
        = (((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
            >> 3U) & (IData)(vlSelf->__PVT__wb_m2s_io_stb));
    vlSelf->__PVT__spi__DOT__wb_acc = (((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                        >> 8U) & (IData)(vlSelf->__PVT__wb_m2s_io_stb));
    vlSelf->__PVT__spi2__DOT__wb_acc = (((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                         >> 7U) & (IData)(vlSelf->__PVT__wb_m2s_io_stb));
    vlSelf->__PVT__spi__DOT__wb_wr = ((IData)(vlSelf->__PVT__spi__DOT__wb_acc) 
                                      & (IData)(vlSelf->__PVT__wb_m2s_io_we));
    spi__DOT____VdfgTmp_h05a03d48__0 = ((IData)(vlSelf->__PVT__spi__DOT__wb_acc) 
                                        & ((2U == (IData)(vlSelf->__Vcellinp__spi2__adr_i)) 
                                           & (IData)(vlSelf->__PVT__wb_s2m_spi_flash_ack)));
    vlSelf->__PVT__spi2__DOT__wb_wr = ((IData)(vlSelf->__PVT__spi2__DOT__wb_acc) 
                                       & (IData)(vlSelf->__PVT__wb_m2s_io_we));
    spi2__DOT____VdfgTmp_h05a03d48__0 = ((IData)(vlSelf->__PVT__spi2__DOT__wb_acc) 
                                         & ((2U == (IData)(vlSelf->__Vcellinp__spi2__adr_i)) 
                                            & (IData)(vlSelf->__PVT__wb_s2m_spi_accel_ack)));
    vlSelf->__PVT__spi__DOT__wr_spsr = ((IData)(vlSelf->__PVT__spi__DOT__wb_wr) 
                                        & (1U == (IData)(vlSelf->__Vcellinp__spi2__adr_i)));
    vlSelf->__PVT__spi__DOT__wfwe = ((IData)(spi__DOT____VdfgTmp_h05a03d48__0) 
                                     & (IData)(vlSelf->__PVT__wb_m2s_io_we));
    vlSelf->__PVT__spi__DOT__rfre = ((~ (IData)(vlSelf->__PVT__wb_m2s_io_we)) 
                                     & (IData)(spi__DOT____VdfgTmp_h05a03d48__0));
    vlSelf->__PVT__spi2__DOT__wr_spsr = ((IData)(vlSelf->__PVT__spi2__DOT__wb_wr) 
                                         & (1U == (IData)(vlSelf->__Vcellinp__spi2__adr_i)));
    vlSelf->__PVT__spi2__DOT__wfwe = ((IData)(spi2__DOT____VdfgTmp_h05a03d48__0) 
                                      & (IData)(vlSelf->__PVT__wb_m2s_io_we));
    vlSelf->__PVT__spi2__DOT__rfre = ((~ (IData)(vlSelf->__PVT__wb_m2s_io_we)) 
                                      & (IData)(spi2__DOT____VdfgTmp_h05a03d48__0));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__8(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__8\n"); );
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_wren 
        = (IData)(((((0xe000000000ULL == (0x1fc00000000ULL 
                                          & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                     & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
                    & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                   & (0U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_havereset_reg__DOT__din_new 
        = ((~ (IData)(((0x4040000000ULL == (0x1fc40000000ULL 
                                            & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                       & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0)))) 
           & ((IData)(((0x4000000008ULL == (0x1fc00000008ULL 
                                            & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                       & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0))) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_havereset)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_abstractauto_reg__DOT____Vcellinp__dffs__din 
        = (3U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0) 
                  & ((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout)) 
                     & (0x6000000000ULL == (0x1fc00000000ULL 
                                            & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))))
                  ? (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 2U)) : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractauto_reg)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmi_reg_rdata_din 
        = (((- (IData)((4U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                >> 0x22U)))))) 
            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg) 
           | (((- (IData)((5U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                   >> 0x22U)))))) 
               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg) 
              | (((- (IData)((0x10U == (0x7fU & (IData)(
                                                        (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                         >> 0x22U)))))) 
                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_hcb8dd9c9__0)) 
                 | (((- (IData)((0x11U == (0x7fU & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))))) 
                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg) 
                    | (((- (IData)((0x16U == (0x7fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                         >> 0x22U)))))) 
                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg) 
                       | (((- (IData)((0x17U == (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))))) 
                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg) 
                          | (((- (IData)((0x18U == 
                                          (0x7fU & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))))) 
                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractauto_reg)) 
                             | (((- (IData)((0x40U 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))))) 
                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_halted)) 
                                | (((- (IData)((0x38U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))))) 
                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg) 
                                   | (((- (IData)((0x39U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                               >> 0x22U)))))) 
                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg) 
                                      | (((- (IData)(
                                                     (0x3cU 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                  >> 0x22U)))))) 
                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg) 
                                         | ((- (IData)(
                                                       (0x3dU 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                    >> 0x22U)))))) 
                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg))))))))))));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_wren) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbreadonaddr_reg__DOT____Vcellinp__dffs__din 
            = (1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 0x16U)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_misc_reg__DOT____Vcellinp__dffs__din 
            = ((0x10U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                  >> 0x15U)) << 4U)) 
               | ((8U & ((~ (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                     >> 0x14U))) << 3U)) 
                  | (7U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                   >> 0x11U)))));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h3068a052__0 
            = (1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 0x18U)));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbreadonaddr_reg__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_misc_reg__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h3068a052__0 = 0U;
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmi_rddata_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmi_reg_rdata_din
            : vlSelf->__PVT__dmi_reg_rdata);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusyerror_reg__DOT____Vcellinp__dffs__din 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h3068a052__0) 
                  | ((0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                     & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                        & ((0x39U == (0x7fU & (IData)(
                                                      (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                       >> 0x22U)))) 
                           | ((0x3cU == (0x7fU & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                          >> 0x22U)))) 
                              | (0x3dU == (0x7fU & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))))))))
                  ? (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h3068a052__0))
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__9(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__9\n"); );
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din = 0U;
    if ((8U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din = 0U;
        } else if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din = 0U;
        } else if ((1U & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din = 2U;
        }
    } else if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din = 2U;
            }
        }
    } else if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((1U & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din 
                = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned)
                    ? 3U : 4U);
        }
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din 
            = (7U & ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                      ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned)
                          ? 3U : 4U) : ((~ (IData)(
                                                   (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                    >> 0xeU))) 
                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                           >> 0xcU))));
    }
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__10(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__10\n"); );
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg_wren0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0) 
           & (0xf400000000ULL == (0x1fc00000000ULL 
                                  & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren 
        = (IData)(((0x4000000000ULL == (0x1fc00000000ULL 
                                        & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren 
        = (IData)(((0x5c00000000ULL == (0x1fc00000000ULL 
                                        & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0) 
           & (0xe400000000ULL == (0x1fc00000000ULL 
                                  & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0) 
           & (0xf000000000ULL == (0x1fc00000000ULL 
                                  & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_dmactive_ff__DOT____Vcellinp__dffs__din 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren)
                  ? (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 2U)) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__44(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_sequent__TOP__rvfpgasim__swervolf__44\n"); );
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__core_rst_l = ((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout)) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__21(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__21\n"); );
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0) 
           & (IData)(((0x1400000000ULL == (0x1fc00000000ULL 
                                           & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                      & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h3fa8c3a1__0))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0) 
           & (IData)(((0x1000000000ULL == (0x1fc00000000ULL 
                                           & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                      & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h3fa8c3a1__0))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcommand_regno_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0xffffU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren) 
                       | (IData)((((8U == (0xff08U 
                                           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                   & (8U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
                                  & (~ (IData)((0U 
                                                != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))))))
                       ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren)
                           ? (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                      >> 2U)) : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_cmd_next_addr)
                       : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_data1_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1))
            ? (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1))) 
                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_cmd_next_addr))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg);
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__29(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__29\n"); );
    // Body
    vlSelf->__PVT__wb_s2m_io_ack = ((0xaU >= (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)) 
                                    & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__o_wb_ack) 
                                         << 0xaU) | 
                                        (((IData)(vlSelf->__PVT__wb_s2m_sys_ack) 
                                          << 9U) | 
                                         (((IData)(vlSelf->__PVT__wb_s2m_spi_flash_ack) 
                                           << 8U) | 
                                          (((IData)(vlSelf->__PVT__wb_s2m_spi_accel_ack) 
                                            << 7U) 
                                           | (((IData)(vlSelf->timer_ptc__DOT____VdfgTmp_h61526ae5__0) 
                                               << 6U) 
                                              | (((IData)(vlSelf->timer_ptcR__DOT____VdfgTmp_h61526ae5__0) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->timer_ptcG__DOT____VdfgTmp_h61526ae5__0) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->timer_ptcB__DOT____VdfgTmp_h61526ae5__0) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->__PVT__wb_s2m_gpio_ack) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->__PVT__wb_s2m_gpio2_ack) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->__PVT__wb_s2m_uart_ack))))))))))) 
                                       >> (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__30(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__30\n"); );
    // Body
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrolff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren)
            ? ((0xcU & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                 >> 0x20U)) << 2U)) 
               | ((2U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                  >> 0x1eU)) << 1U)) 
                  | (1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                   >> 3U))))) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcommand_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren)
            ? ((0xff00U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                    >> 0x1aU)) << 8U)) 
               | ((0x78U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                     >> 0x15U)) << 3U)) 
                  | (((IData)((0x100000ULL == (0x3fc100000ULL 
                                               & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                      << 2U) | (((IData)((0x80000ULL 
                                          == (0x3fc080000ULL 
                                              & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                                 << 1U) | (1U & (IData)(
                                                        (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                         >> 0x12U)))))))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sbaddress0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1))
            ? (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1))) 
                                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg 
                                          + ((1U & 
                                              (- (IData)(
                                                         (0U 
                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_cmd_size))))) 
                                             | ((2U 
                                                 & (- (IData)(
                                                              (1U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_cmd_size))))) 
                                                | ((4U 
                                                    & (- (IData)(
                                                                 (2U 
                                                                  == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_cmd_size))))) 
                                                   | (8U 
                                                      & (- (IData)(
                                                                   (3U 
                                                                    == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_cmd_size)))))))))))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg);
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__39(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__39\n"); );
    // Init
    VlWide<11>/*351:0*/ __Vtemp_h1f08b932__0;
    // Body
    __Vtemp_h1f08b932__0[0U] = vlSelf->__PVT__uart_rdt;
    __Vtemp_h1f08b932__0[1U] = vlSelf->__PVT__wb_s2m_gpio2_dat;
    __Vtemp_h1f08b932__0[2U] = vlSelf->__PVT__wb_s2m_gpio_dat;
    __Vtemp_h1f08b932__0[3U] = vlSelf->__PVT__wb_s2m_ptcB_dat;
    __Vtemp_h1f08b932__0[4U] = vlSelf->__PVT__wb_s2m_ptcG_dat;
    __Vtemp_h1f08b932__0[5U] = vlSelf->__PVT__wb_s2m_ptcR_dat;
    __Vtemp_h1f08b932__0[6U] = vlSelf->__PVT__wb_s2m_ptc_dat;
    __Vtemp_h1f08b932__0[7U] = vlSelf->__PVT__spi2_rdt;
    __Vtemp_h1f08b932__0[8U] = vlSelf->__PVT__spi_rdt;
    __Vtemp_h1f08b932__0[9U] = (IData)((((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__wb_adr))
                                                           ? (IData)(
                                                                     (vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.__PVT__dout 
                                                                      >> 0x20U))
                                                           : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.__PVT__dout)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->__PVT__wb_s2m_sys_dat))));
    __Vtemp_h1f08b932__0[0xaU] = (IData)(((((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__wb_adr))
                                                              ? (IData)(
                                                                        (vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.__PVT__dout 
                                                                         >> 0x20U))
                                                              : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.__PVT__dout)))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->__PVT__wb_s2m_sys_dat))) 
                                          >> 0x20U));
    vlSelf->__PVT__wb_s2m_io_dat = ((0x15fU >= (0x1ffU 
                                                & ((IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                                                   << 5U)))
                                     ? (((0U == (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                                                    << 5U)))
                                          ? 0U : (__Vtemp_h1f08b932__0[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                                                        << 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                                                       << 5U))))) 
                                        | (__Vtemp_h1f08b932__0[
                                           (0xfU & (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel))] 
                                           >> (0x1fU 
                                               & ((IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                                                  << 5U))))
                                     : 0U);
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__45(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__45\n"); );
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__bus_clken 
        = (((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_awvalid_ff__DOT____Vcellinp__dffs__din) 
              | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_wvalid_ff__DOT____Vcellinp__dffs__din)) 
             | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_arvalid_ff__DOT____Vcellinp__dffs__din)) 
            | (0U != (0x10100U & vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U]))) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
              >> 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata 
        = ((0xffULL & ((- (QData)((IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                       & ((0x3fU >= (0x38U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                              << 3U)))
                           ? ((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])) 
                                << 0x3cU) | (((QData)((IData)(
                                                              vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U])) 
                                              << 0x1cU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U])) 
                                                >> 4U))) 
                              >> (0x38U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                           << 3U)))
                           : 0ULL))) | ((0xffffULL 
                                         & ((- (QData)((IData)(
                                                               (1U 
                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                            & ((0x3fU 
                                                >= 
                                                (0x30U 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                                    << 3U)))
                                                ? (
                                                   (((QData)((IData)(
                                                                     vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])) 
                                                     << 0x3cU) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U])) 
                                                        << 0x1cU) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U])) 
                                                          >> 4U))) 
                                                   >> 
                                                   (0x30U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                                       << 3U)))
                                                : 0ULL))) 
                                        | ((0xffffffffULL 
                                            & ((- (QData)((IData)(
                                                                  (2U 
                                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                               & ((0x3fU 
                                                   >= 
                                                   (0x20U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                                       << 3U)))
                                                   ? 
                                                  ((((QData)((IData)(
                                                                     vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])) 
                                                     << 0x3cU) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U])) 
                                                        << 0x1cU) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U])) 
                                                          >> 4U))) 
                                                   >> 
                                                   (0x20U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                                       << 3U)))
                                                   : 0ULL))) 
                                           | ((- (QData)((IData)(
                                                                 (3U 
                                                                  == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U])) 
                                                     << 0x1cU) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U])) 
                                                       >> 4U)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_resume_req = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sb_bus_error = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2 = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en = 0U;
    if ((8U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_resume_req = 0U;
        } else if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_resume_req = 0U;
        } else if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                = (1U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                          >> 0x11U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                       >> 1U)));
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                = ((2U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                    ? 0U : 2U);
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en = 1U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren = 1U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en = 1U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en = 1U;
        }
    } else if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                    = (IData)((0U != (0x10100U & vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])));
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                    = ((2U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                        ? 0U : 8U);
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sb_bus_error 
                    = (1U & (((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                               >> 8U) & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                         >> 3U)) | (IData)(
                                                           (0x10800U 
                                                            == 
                                                            (0x10800U 
                                                             & vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])))));
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2 
                    = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en) 
                        & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                       & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sb_bus_error)));
            } else {
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en 
                    = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_awvalid_ff__DOT____Vcellinp__dffs__din) 
                        & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                           >> 0x13U)) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_arvalid_ff__DOT____Vcellinp__dffs__din) 
                                         & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                            >> 0x12U)));
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en 
                    = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_wvalid_ff__DOT____Vcellinp__dffs__din) 
                        & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                           >> 0x11U)) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_arvalid_ff__DOT____Vcellinp__dffs__din) 
                                         & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                            >> 0x12U)));
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                    = ((2U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                        ? 0U : 7U);
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                    = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done) 
                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en)) 
                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done) 
                          | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en)));
            }
        } else if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                = ((2U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                    ? 0U : ((0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                          >> 8U))) ? 8U
                             : 6U));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                = (1U & (((0U != (0x700U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg)) 
                          | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                             >> 1U)) | (~ ((3U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                           | ((4U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                              | ((5U 
                                                  == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                                 | ((6U 
                                                     == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                                    | ((7U 
                                                        == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                                       | (8U 
                                                          == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))))))))));
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                = ((2U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                    ? 0U : 8U);
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__core_dbg_cmd_done) 
                         | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                            >> 1U)));
        }
    } else if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                = ((2U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                    ? 0U : ((IData)(((0U != (0x700U 
                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg)) 
                                     | (0U == (0xff020000U 
                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg))))
                             ? 8U : 4U));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                = (1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dbg_in) 
                           | (0U != (0x700U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg))) 
                          | (IData)((0U == (0xff020000U 
                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg)))) 
                         | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                            >> 1U)));
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                = ((1U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                           >> 9U) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                        >> 1U)))) ? 
                   ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__resumereq)
                     ? 9U : (((2U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                      >> 0x18U)) & 
                              (0xfU != (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg 
                                        >> 0x1cU)))
                              ? 5U : 3U)) : ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                              >> 0x1fU)
                                              ? 1U : 0U));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                = (1U & (((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                             >> 9U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__resumereq)) 
                           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command)) 
                          | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                             >> 1U)) | (~ ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                                            >> 9U) 
                                           | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren 
                = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en) 
                   & ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate)) 
                      | (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate))));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_resume_req 
                = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en) 
                   & (9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate)));
        }
    } else if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
            = ((2U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                ? 0U : 2U);
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
            = (1U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                      >> 9U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                >> 1U)));
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
            = ((1U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                       >> 9U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))
                ? 2U : 1U);
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
            = (1U & (((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                         >> 0x1fU) & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                         >> 3U))) | 
                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                        >> 9U)) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)) 
                     & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                           >> 1U))));
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__bus_clken) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_bresp_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (3U & ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                      << 0x16U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                   >> 0xaU)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_rresp_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (3U & ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                      << 0x1eU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                   >> 2U)));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_bresp_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_bresp_q));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_rresp_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_rresp_q));
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmabstractcs_busy_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_din)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_doneff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_in)
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_doneff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_in)
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns 
        = ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
             >> 2U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_resume_req)) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns 
        = (1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_resume_req)) 
                 & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                     >> 3U) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_halt_req) 
                               | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h5acd70c9__0)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__mpvhalt_ff__din 
        = ((0x600U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                      << 9U)) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns) 
                                  << 8U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns) 
                                             << 7U) 
                                            | (((((0x7fffffc0U 
                                                   & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                      >> 1U)) 
                                                  | (0x3ffffc0U 
                                                     & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                        >> 6U))) 
                                                 | (0xffffffc0U 
                                                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout))) 
                                                & (((~ 
                                                     (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                      >> 1U)) 
                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)) 
                                                   << 6U)) 
                                               | ((0x1fffffe0U 
                                                   & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                       >> 3U) 
                                                      & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                          << 2U) 
                                                         & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                             << 4U) 
                                                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__core_empty) 
                                                               << 5U))))) 
                                                  | ((0x10U 
                                                      & (((IData)(
                                                                  ((1U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout))) 
                                                                   & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns)))) 
                                                          << 4U) 
                                                         | (0xfffffff0U 
                                                            & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                               & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                                  << 4U))))) 
                                                     | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns) 
                                                         << 3U) 
                                                        | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns) 
                                                            << 2U) 
                                                           | ((2U 
                                                               & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                                  >> 2U)) 
                                                              | (IData)(
                                                                        (0x100U 
                                                                         == 
                                                                         (0x108U 
                                                                          & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))))))))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__halt_taken) 
            << 0x15U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_halt) 
                          << 0x14U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_halt_idle_any) 
                                        << 0x13U) | 
                                       (((0U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                         << 0x12U) 
                                        | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted) 
                                            << 0x11U) 
                                           | ((0x7fff0000U 
                                               & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                                                   << 0x10U) 
                                                  & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                      >> 1U) 
                                                     & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns) 
                                                        << 0x10U)))) 
                                              | ((0x3fff8000U 
                                                  & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4) 
                                                      << 0xfU) 
                                                     & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                        >> 2U))) 
                                                 | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns) 
                                                     << 0xeU) 
                                                    | ((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)) 
                                                         & (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns)) 
                                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns)) 
                                                            | ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns)) 
                                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns)))) 
                                                        << 0xdU) 
                                                       | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_e4) 
                                                           << 0xcU) 
                                                          | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4) 
                                                               & ((~ 
                                                                   (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                    >> 0x11U)) 
                                                                  & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)) 
                                                                     & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)))) 
                                                              << 0xbU) 
                                                             | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req) 
                                                                 << 0xaU) 
                                                                | (((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4))) 
                                                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_e4)) 
                                                                     | ((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hc03f1b5e__0))) 
                                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_chain_masked_e4))) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_wr_pause_wb) 
                                                                       << 5U) 
                                                                      | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state) 
                                                                          << 4U) 
                                                                         | ((8U 
                                                                             & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_e4) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_e4) 
                                                                                << 3U) 
                                                                                | (0xfffffff8U 
                                                                                & (((~ 
                                                                                ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                                                >> 2U)) 
                                                                                << 3U) 
                                                                                & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout))))) 
                                                                            | (((IData)(
                                                                                ((~ 
                                                                                (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                                >> 0x11U)) 
                                                                                & (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)))) 
                                                                                << 2U) 
                                                                               | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                                >> 1U))))))))))))))))))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__46(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___nba_comb__TOP__rvfpgasim__swervolf__46\n"); );
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_nxtstate = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
    if ((8U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_nxtstate = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
        } else if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_nxtstate = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
        } else if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_nxtstate = 0U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en = 1U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren = 1U;
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_nxtstate = 9U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                = (1U & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                         >> 0x10U));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren 
                = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en) 
                   & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                      >> 0xbU));
        }
    } else if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_nxtstate = 9U;
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                    = (1U & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                             >> 8U));
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren 
                    = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en) 
                       & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                          >> 3U));
            } else {
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_nxtstate = 8U;
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                    = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_wvalid_ff__DOT____Vcellinp__dffs__din) 
                       & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                          >> 0x11U));
            }
        } else if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_nxtstate = 8U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_awvalid_ff__DOT____Vcellinp__dffs__din) 
                   & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                      >> 0x13U));
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_nxtstate 
                = ((IData)((0xa0000U == (0xa0000U & 
                                         vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])))
                    ? 8U : ((0x80000U & vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])
                             ? 6U : 5U));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_awvalid_ff__DOT____Vcellinp__dffs__din) 
                    & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                       >> 0x13U)) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_wvalid_ff__DOT____Vcellinp__dffs__din) 
                                     & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                        >> 0x11U)));
        }
    } else if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_nxtstate = 7U;
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_arvalid_ff__DOT____Vcellinp__dffs__din) 
                   & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                      >> 0x12U));
        } else {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_nxtstate 
                = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgExtracted_h8354ed9f__0)
                    ? 9U : 4U);
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                = (1U & (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_pending)) 
                          | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned)) 
                         | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                            >> 4U)));
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren 
                = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgExtracted_h8354ed9f__0;
        }
    } else if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_nxtstate 
            = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgExtracted_h8354ed9f__0)
                ? 9U : 3U);
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en 
            = (1U & (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_pending)) 
                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned)) 
                     | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                        >> 4U)));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgExtracted_h8354ed9f__0;
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_nxtstate 
            = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0)
                ? 2U : 1U);
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en 
            = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                    & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                       & (IData)(((0xf000000000ULL 
                                   == (0x1fc00000000ULL 
                                       & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout)))))) 
                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0) 
                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout))) 
               & (~ (IData)((0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                          >> 0xcU))))));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren 
            = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_wren) 
               & (0U != (7U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                       >> 0xeU)))));
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_data0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren0) 
            | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren1) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2)))
            ? (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren1))) 
                                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtrEn)
                                            ? ((0xffU 
                                                & ((- (IData)(
                                                              (0U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                   & ((0x1fU 
                                                       >= 
                                                       ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                        << 3U))
                                                       ? 
                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata 
                                                       >> 
                                                       ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                        << 3U))
                                                       : 0U))) 
                                               | ((0xffffU 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                      & ((0x1fU 
                                                          >= 
                                                          (0x10U 
                                                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                              << 3U)))
                                                          ? 
                                                         (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata 
                                                          >> 
                                                          (0x10U 
                                                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                              << 3U)))
                                                          : 0U))) 
                                                  | ((- (IData)(
                                                                (2U 
                                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata)))
                                            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb)) 
                                       | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2))) 
                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata))))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_error_din 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout) 
            & ((~ (IData)((0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
               & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                  & (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en) 
                      & ((0x16U == (0x7fU & (IData)(
                                                    (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                     >> 0x22U)))) 
                         | (0x17U == (0x7fU & (IData)(
                                                      (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                       >> 0x22U)))))) 
                     | ((0x18U == (0x7fU & (IData)(
                                                   (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                    >> 0x22U)))) 
                        | ((4U == (0x7fU & (IData)(
                                                   (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                    >> 0x22U)))) 
                           | (5U == (0x7fU & (IData)(
                                                     (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                      >> 0x22U))))))))))
            ? 1U : (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command) 
                     & ((~ (IData)((0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                        & ((~ ((0U == (0xffU & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                >> 8U))) 
                               | (2U == (0xffU & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                  >> 8U))))) 
                           | ((IData)(((0x200U == (0xff00U 
                                                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                       & ((3U == (7U 
                                                  & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                     >> 4U))) 
                                          | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                             >> 6U)))) 
                              | (((2U != (7U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                >> 4U))) 
                                  & (IData)((2U == 
                                             (0xff02U 
                                              & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))))) 
                                 | (IData)((4U == (0xff04U 
                                                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)))))))))
                     ? 2U : (((~ (IData)((0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                              & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__core_dbg_cmd_done) 
                                  & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                       >> 5U) & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                 >> 0xfU)) 
                                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dbg_cmd_fail))) 
                                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command) 
                                    & (IData)(((0U 
                                                == 
                                                (0xff00U 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                               & ((IData)(
                                                          ((0x1000U 
                                                            == 
                                                            (0xf000U 
                                                             & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout))) 
                                                           & (0U 
                                                              != 
                                                              (0x7fU 
                                                               & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout) 
                                                                  >> 5U))))) 
                                                  | (0U 
                                                     != 
                                                     (7U 
                                                      & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout) 
                                                         >> 0xdU)))))))))
                              ? 3U : (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command) 
                                       & ((~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                          & (2U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))))
                                       ? 4U : (((~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sb_bus_error))
                                                ? 5U
                                                : (
                                                   ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command) 
                                                    & (IData)(
                                                              ((0x200U 
                                                                == 
                                                                (0xff00U 
                                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                                               & ((~ (IData)(
                                                                             (0U 
                                                                              != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                                                  & ((IData)(
                                                                             ((0x10U 
                                                                               == 
                                                                               (0x70U 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg)) 
                                                                     | (IData)(
                                                                               ((0x20U 
                                                                                == 
                                                                                (0x70U 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                                                                & (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg)))))))))
                                                    ? 7U
                                                    : 
                                                   ((IData)(
                                                            ((0x5800000000ULL 
                                                              == 
                                                              (0x1fc00000000ULL 
                                                               & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                                             & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0)))
                                                     ? 
                                                    ((~ (IData)(
                                                                (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                 >> 0xaU))) 
                                                     & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout))
                                                     : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout))))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_nxtstate)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_error_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1 
        = ((7U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
           & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren)) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sbdata0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))
            ? (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata)))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sbdata1_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg_wren0) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))
            ? (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                       & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata 
                                                  >> 0x20U))))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg);
}
