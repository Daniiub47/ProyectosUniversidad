// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_swervolf_core.h"

VL_ATTR_COLD void Vrvfpgasim_swervolf_core___stl_sequent__TOP__rvfpgasim__swervolf__1(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___stl_sequent__TOP__rvfpgasim__swervolf__1\n"); );
    // Init
    CData/*3:0*/ swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h488ff5f1__0;
    swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h488ff5f1__0 = 0;
    CData/*0:0*/ swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h2d2bea69__0;
    swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h2d2bea69__0 = 0;
    CData/*1:0*/ __Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__in;
    __Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__in = 0;
    VlWide<4>/*127:0*/ __Vtemp_h48870c3e__0;
    VlWide<4>/*127:0*/ __Vtemp_h48873092__0;
    VlWide<4>/*127:0*/ __Vtemp_h48873466__0;
    VlWide<4>/*127:0*/ __Vtemp_h4887387a__0;
    VlWide<4>/*127:0*/ __Vtemp_h4886fcae__0;
    VlWide<4>/*127:0*/ __Vtemp_h488760a2__0;
    VlWide<4>/*127:0*/ __Vtemp_h488766d6__0;
    VlWide<4>/*127:0*/ __Vtemp_h47a43157__0;
    VlWide<4>/*127:0*/ __Vtemp_hab28c158__0;
    VlWide<4>/*127:0*/ __Vtemp_hab2a25ac__0;
    VlWide<4>/*127:0*/ __Vtemp_hab2a2940__0;
    VlWide<4>/*127:0*/ __Vtemp_hab2a2d94__0;
    VlWide<4>/*127:0*/ __Vtemp_hab2a3188__0;
    VlWide<4>/*127:0*/ __Vtemp_hab28d57c__0;
    VlWide<4>/*127:0*/ __Vtemp_hab28d7f0__0;
    VlWide<4>/*127:0*/ __Vtemp_h025ae31e__0;
    VlWide<3>/*95:0*/ __Vtemp_h7c51030f__0;
    VlWide<11>/*351:0*/ __Vtemp_h1f08b932__0;
    VlWide<3>/*95:0*/ __Vtemp_hfa0e400e__0;
    VlWide<3>/*95:0*/ __Vtemp_h0e209346__0;
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xffffeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                   >> 0xcU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffffbfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x4000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                           << 0xbU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            << 0xbU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xffffcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                   >> 0xcU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffff7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x8000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                           << 0xcU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            << 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xffff8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                   >> 0xcU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi 
        = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi)) 
           | ((((((0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[2U] 
                              >> 2U)) == (0x3fffU & 
                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                                           >> 2U))) 
                 << 4U) & ((0xfffffff0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 4U))) 
               & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 4U)) << 4U)) & ((0xfffffff0U 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 4U))) 
                                         | (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 4U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffeffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x10000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                            << 0xcU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                             << 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                       >> 0x10U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffdffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x20000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                            << 0xdU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                             << 0xdU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xfffeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                  >> 0x10U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffbffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x40000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                            << 0xeU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                             << 0xeU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xfffcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                  >> 0x10U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfff7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x80000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                            << 0xfU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                             << 0xfU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xfff8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                  >> 0x10U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi 
        = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi)) 
           | ((((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[2U] 
                   >> 0x12U) == (0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                                            >> 2U))) 
                 << 5U) & ((0xffffffe0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 5U))) 
               & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 5U)) << 5U)) & ((0xffffffe0U 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 5U))) 
                                         | (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 5U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffefffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x100000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                             << 0xfU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                              << 0xfU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                       >> 0x14U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffdfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x200000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                             << 0x10U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                              << 0x10U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xffeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                 >> 0x14U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffbfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x400000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                             << 0x11U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                              << 0x11U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xffcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                 >> 0x14U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xff7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x800000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                             << 0x12U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                              << 0x12U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xff8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                 >> 0x14U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi 
        = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi)) 
           | ((((((0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[3U] 
                              >> 2U)) == (0x3fffU & 
                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                                           >> 2U))) 
                 << 6U) & ((0xffffffc0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 6U))) 
               & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 6U)) << 6U)) & ((0xffffffc0U 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 6U))) 
                                         | (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 6U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfeffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x1000000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                              << 0x12U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                               << 0x12U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                       >> 0x18U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfdffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x2000000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                              << 0x13U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                               << 0x13U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xfeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                >> 0x18U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfbffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x4000000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                              << 0x14U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                               << 0x14U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xfcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                >> 0x18U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xf7ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x8000000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                              << 0x15U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                               << 0x15U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xf8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                >> 0x18U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi 
        = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi)) 
           | ((((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[3U] 
                   >> 0x12U) == (0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                                            >> 2U))) 
                 << 7U) & ((0xffffff80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 7U))) 
               & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 7U)) << 7U)) & ((0xffffff80U 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 7U))) 
                                         | (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 7U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 7U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xefffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                         >> 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
                                   >> 0x1cU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                                                 >> 7U))) 
              << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                       >> 0x1cU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xdfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                         >> 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
                                   >> 0x1dU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                                                 >> 7U))) 
              << 0x1dU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                               >> 0x1cU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xbfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                         >> 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
                                   >> 0x1eU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                                                 >> 7U))) 
              << 0x1eU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                               >> 0x1cU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0x7fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                         >> 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
                                   >> 0x1fU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                                                 >> 7U))) 
              << 0x1fU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | ((IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                        >> 3U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                  >> 0x1fU))) << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo 
        = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo)) 
           | (((((0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[0U] 
                             >> 2U)) == (0x3fffU & 
                                         (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                                          >> 2U))) 
                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld) 
                   | (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                         >> 0xbU)))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld))) 
              & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2)) 
                 | ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic)) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffffffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (1U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffffffdU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (2U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                      << 1U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                       << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (2U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffffffbU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (4U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                      << 2U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                       << 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (4U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffffff7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                      << 3U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                       << 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (8U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo 
        = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo)) 
           | ((((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[0U] 
                   >> 0x12U) == (0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                                            >> 2U))) 
                 << 1U) & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 1U))) 
               & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 1U)) << 1U)) & ((0xfffffffeU 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 1U))) 
                                         | (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 1U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffffffefU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x10U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                         << 3U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                          << 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                       >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffffffdfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x20U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                         << 4U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                          << 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xffffffeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                     >> 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffffffbfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x40U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                         << 5U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                          << 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xffffffcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                     >> 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffffff7fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x80U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                         << 6U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                          << 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xffffff8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                     >> 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo 
        = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo)) 
           | ((((((0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[1U] 
                              >> 2U)) == (0x3fffU & 
                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                                           >> 2U))) 
                 << 2U) & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 2U))) 
               & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 2U)) << 2U)) & ((0xfffffffcU 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 2U))) 
                                         | (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 2U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffffeffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x100U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                          << 6U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                           << 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                       >> 8U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffffdffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x200U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                          << 7U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                           << 7U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xfffffeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                    >> 8U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffffbffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x400U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                          << 8U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                           << 8U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xfffffcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                    >> 8U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffff7ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x800U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                          << 9U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                           << 9U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xfffff8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                    >> 8U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo 
        = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo)) 
           | ((((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[1U] 
                   >> 0x12U) == (0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                                            >> 2U))) 
                 << 3U) & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 3U))) 
               & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 3U)) << 3U)) & ((0xfffffff8U 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 3U))) 
                                         | (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 3U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffffefffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x1000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                           << 9U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            << 9U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                       >> 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffffdfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x2000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                           << 0xaU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            << 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xffffeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                   >> 0xcU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffffbfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x4000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                           << 0xbU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            << 0xbU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xffffcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                   >> 0xcU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffff7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x8000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                           << 0xcU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            << 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xffff8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                   >> 0xcU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo 
        = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo)) 
           | ((((((0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[2U] 
                              >> 2U)) == (0x3fffU & 
                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                                           >> 2U))) 
                 << 4U) & ((0xfffffff0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 4U))) 
               & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 4U)) << 4U)) & ((0xfffffff0U 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 4U))) 
                                         | (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 4U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffeffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x10000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                            << 0xcU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                             << 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                       >> 0x10U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffdffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x20000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                            << 0xdU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                             << 0xdU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xfffeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                  >> 0x10U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffbffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x40000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                            << 0xeU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                             << 0xeU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xfffcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                  >> 0x10U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfff7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x80000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                            << 0xfU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                             << 0xfU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xfff8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                  >> 0x10U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo 
        = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo)) 
           | ((((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[2U] 
                   >> 0x12U) == (0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                                            >> 2U))) 
                 << 5U) & ((0xffffffe0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 5U))) 
               & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 5U)) << 5U)) & ((0xffffffe0U 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 5U))) 
                                         | (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 5U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffefffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x100000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                             << 0xfU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                              << 0xfU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                       >> 0x14U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffdfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x200000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                             << 0x10U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                              << 0x10U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xffeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                 >> 0x14U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffbfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x400000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                             << 0x11U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                              << 0x11U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xffcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                 >> 0x14U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xff7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x800000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                             << 0x12U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                              << 0x12U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xff8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                 >> 0x14U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo 
        = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo)) 
           | ((((((0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[3U] 
                              >> 2U)) == (0x3fffU & 
                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                                           >> 2U))) 
                 << 6U) & ((0xffffffc0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 6U))) 
               & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 6U)) << 6U)) & ((0xffffffc0U 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 6U))) 
                                         | (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 6U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfeffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x1000000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                              << 0x12U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                               << 0x12U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                       >> 0x18U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfdffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x2000000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                              << 0x13U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                               << 0x13U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xfeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                >> 0x18U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfbffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x4000000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                              << 0x14U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                               << 0x14U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xfcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                >> 0x18U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xf7ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x8000000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                              << 0x15U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                               << 0x15U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xf8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                >> 0x18U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo 
        = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo)) 
           | ((((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[3U] 
                   >> 0x12U) == (0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                                            >> 2U))) 
                 << 7U) & ((0xffffff80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 7U))) 
               & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 7U)) << 7U)) & ((0xffffff80U 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 7U))) 
                                         | (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 7U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 7U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xefffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                         >> 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
                                   >> 0x1cU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                                                 >> 7U))) 
              << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                       >> 0x1cU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xdfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                         >> 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
                                   >> 0x1dU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                                                 >> 7U))) 
              << 0x1dU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                               >> 0x1cU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xbfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                         >> 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
                                   >> 0x1eU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                                                 >> 7U))) 
              << 0x1eU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                               >> 0x1cU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0x7fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                         >> 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
                                   >> 0x1fU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                                                 >> 7U))) 
              << 0x1fU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | ((IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                        >> 3U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                  >> 0x1fU))) << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any 
        = (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any) 
                   + (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            >> 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any) 
                   + (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            >> 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any) 
                   + (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            >> 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any) 
                   + (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any) 
                   + (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any) 
                   + (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            >> 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any) 
                   + (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            >> 7U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hb72b09a4__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h0432c7e4__0) 
           & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hca12ddf2__0 
        = ((~ vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h0432c7e4__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfac9fdf3__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
           & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfd02fb10__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
           & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfae91d48__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
           & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa985806__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
           & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfae0faeb__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
           & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfad22410__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
           & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfaf3e2c5__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
           & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfaec98b1__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
           & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfae852bb__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
           & (8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfde73b48__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
           & (9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfac029ff__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
           & (0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfd3f10d7__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
           & (0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfd3bd899__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
           & (0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfafc4122__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
           & (0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfd8ca704__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
           & (0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfd8c51ff__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
           & (0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfaf60eef__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 1U) & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfd2d0c4e__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 1U) & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa9721a6__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 1U) & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa87ed74__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 1U) & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa8f0f07__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 1U) & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfafde94e__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 1U) & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa9c1739__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 1U) & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa9badad__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 1U) & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa97e7d7__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 1U) & (8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfd90cfa6__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 1U) & (9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfaefda13__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 1U) & (0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfd29250b__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 1U) & (0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfd246df5__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 1U) & (0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfaebf258__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 1U) & (0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfdbb687a__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 1U) & (0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfdbbe213__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 1U) & (0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hadc2d3d2__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 2U) & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hadb7d233__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 2U) & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hade2309b__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 2U) & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_haa0d754d__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 2U) & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_haa15d2fa__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 2U) & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hadc77933__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 2U) & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hade53b00__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 2U) & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hade1b494__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 2U) & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_haa1d4aaa__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 2U) & (8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_had18129b__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 2U) & (9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hadf567d6__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 2U) & (0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hadb00cfe__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 2U) & (0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hadacf4cc__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 2U) & (0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hadf15c21__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 2U) & (0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_had01f64f__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 2U) & (0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_had014fd6__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 2U) & (0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hacc2c5e0__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 3U) & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hacbfc383__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 3U) & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hace2253b__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 3U) & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_had156075__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 3U) & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_had1dc2d8__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 3U) & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_haccf6c83__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 3U) & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_haced2ab6__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 3U) & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hace1a122__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 3U) & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hace55b28__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 3U) & (8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac18033b__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 3U) & (9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hacfd71ec__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 3U) & (0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hacb018c4__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 3U) & (0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hacb4e10a__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 3U) & (0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hacf14991__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 3U) & (0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac01ef77__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 3U) & (0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac0159ec__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 3U) & (0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa3d1b31__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 4U) & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa461ad0__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 4U) & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa1df468__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 4U) & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfbecb9da__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 4U) & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfbe41a09__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 4U) & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa36bdd0__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 4U) & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa17021f__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 4U) & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa187873__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 4U) & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa1cb279__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 4U) & (8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfae3da68__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 4U) & (9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa04cf35__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 4U) & (0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa4bf00d__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 4U) & (0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa4f385b__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 4U) & (0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa08a0fe__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 4U) & (0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfaf83edc__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 4U) & (0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfaf8b735__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 4U) & (0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf91fce09__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 5U) & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf950f06a__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 5U) & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf6fe2ec2__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 5U) & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf6c9119c__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 5U) & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf6f6cf21__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 5U) & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf903156a__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 5U) & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf6e1d75f__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 5U) & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf6fd52cb__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 5U) & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf6f968f1__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 5U) & (8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf9f430c2__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 5U) & (9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf9110235__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 5U) & (0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf92c292d__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 5U) & (0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf9299113__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 5U) & (0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf6ed7a78__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 5U) & (0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf9c2949e__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 5U) & (0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf9dd6a35__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 5U) & (0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf9bcf978__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 6U) & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf9cbf897__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 6U) & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf99c163f__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 6U) & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf96d5b8d__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 6U) & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf995f860__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 6U) & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf9bb5f97__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 6U) & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf99ae04a__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 6U) & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf9999a36__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 6U) & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf99d5030__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 6U) & (8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf896383f__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 6U) & (9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf9b52d74__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 6U) & (0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf9ce125c__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 6U) & (0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf9c2da0e__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 6U) & (0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf98942a9__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 6U) & (0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf879dc8b__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 6U) & (0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf8795574__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 6U) & (0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac4198ea__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 7U) & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac36994b__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 7U) & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac60bf23__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 7U) & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac907a51__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 7U) & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac689982__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 7U) & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac46664b__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 7U) & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac67a194__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 7U) & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac643b28__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 7U) & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac607132__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 7U) & (8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_haf6b5923__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 7U) & (9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac4854ee__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 7U) & (0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac32b386__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 7U) & (0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac3ffbd0__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 7U) & (0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac740cb5__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 7U) & (0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_haf84e557__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 7U) & (0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_haf847cee__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
            >> 7U) & (0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h33864ec2__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
           & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h331ebc5d__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
           & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h3320dec5__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
           & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h33773fa9__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
           & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h337abeec__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
           & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h3333e153__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
           & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h336f5590__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
           & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h335222b2__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
           & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h3324ab7a__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
           & (8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h3c64eac5__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
           & (9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h335f03fe__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
           & (0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h331dc8e4__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
           & (0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h33119214__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
           & (0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h33509873__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
           & (0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h3c8f02d1__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
           & (0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h3cc399fe__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
           & (0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he246b0d8__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 1U) & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he1cd227d__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 1U) & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he1e700c5__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 1U) & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he255a1e1__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 1U) & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he1a920aa__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 1U) & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he190674b__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 1U) & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he1bd9a36__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 1U) & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he1b2a4e8__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 1U) & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he1eb2d50__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 1U) & (8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he0ab6cc5__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 1U) & (9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he18c45dc__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 1U) & (0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he1f20ea2__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 1U) & (0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he1f6d4b2__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 1U) & (0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he1b7de2b__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 1U) & (0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he15c44c9__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 1U) & (0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he100dfdc__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 1U) & (0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h16213c13__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 2U) & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h16d68e76__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 2U) & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h16c0ac1e__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 2U) & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h162e33fa__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 2U) & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h163a8c21__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 2U) & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h16f24880__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 2U) & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1606d5cd__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 2U) & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h161508e3__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 2U) & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h16fc86ab__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 2U) & (8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h173f401e__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 2U) & (9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h16166f17__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 2U) & (0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h16d5a239__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 2U) & (0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h16d19849__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 2U) & (0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h161091a0__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 2U) & (0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h17266802__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 2U) & (0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h17639117__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 2U) & (0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h17262b5f__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 3U) & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h17df84bc__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 3U) & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h17c05b54__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 3U) & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h17373a28__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 3U) & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h173bbb6d__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 3U) & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h17f347ce__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 3U) & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h170fdc01__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 3U) & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1712072f__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 3U) & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h17c58de7__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 3U) & (8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h10044f54__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 3U) & (9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h171f665b__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 3U) & (0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h17d2a975__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 3U) & (0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h17d69685__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 3U) & (0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h171198ee__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 3U) & (0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h102f6740__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 3U) & (0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1060985b__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 3U) & (0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1c92a279__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 4U) & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1d1b3096__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 4U) & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1d30d27e__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 4U) & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1c83ad22__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 4U) & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1d7f3267__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 4U) & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1d47f788__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 4U) & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1d6b48cb__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 4U) & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1d66b629__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 4U) & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1d3d39f1__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 4U) & (8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1e7cfe7e__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 4U) & (9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1d5b9175__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 4U) & (0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1d25dc5f__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 4U) & (0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1d22064f__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 4U) & (0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1d610ce8__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 4U) & (0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1d8b960a__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 4U) & (0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1dd00f75__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 4U) & (0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he5e14145__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 5U) & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he56ab728__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 5U) & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he540d140__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 5U) & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he512319c__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 5U) & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he506b15b__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 5U) & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he54ffa3a__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 5U) & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he53a6ff7__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 5U) & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he52d3a95__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 5U) & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he544bccd__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 5U) & (8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he404fd40__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 5U) & (9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he52a1449__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 5U) & (0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he56dc363__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 5U) & (0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he571a573__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 5U) & (0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he53093da__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 5U) & (0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he41a1ab4__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 5U) & (0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he4df9249__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 5U) & (0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd815f02a__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 6U) & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd86d028f__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 6U) & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd87b6027__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 6U) & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd8068703__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 6U) & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd831005c__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 6U) & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd84a4dbd__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 6U) & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd83edaf8__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 6U) & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd8298c1a__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 6U) & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd8770bd2__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 6U) & (8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he7375427__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 6U) & (9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd82ea32e__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 6U) & (0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd8687644__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 6U) & (0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd8641c74__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 6U) & (0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd82b26dd__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 6U) & (0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he71eac3b__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 6U) & (0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he7da252e__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 6U) & (0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he7e27244__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 7U) & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he77ae5e7__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 7U) & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he740c27f__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 7U) & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he7156313__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 7U) & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he706e256__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 7U) & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he751a6f5__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 7U) & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he70d5d2a__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 7U) & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he73e6614__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 7U) & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he744eccc__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 7U) & (8U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he604ae7f__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 7U) & (9U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he73d8740__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 7U) & (0xaU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he77ff05e__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 7U) & (0xbU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he77217ae__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 7U) & (0xcU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he73301d5__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 7U) & (0xdU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he6ed866b__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 7U) & (0xeU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he6a00140__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
            >> 7U) & (0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h8fae3baf__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h8062c6bd__0) 
           & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h49e2dca9__0 
        = ((~ vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h8062c6bd__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
        = ((0xc0000000U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout) 
                           << 0x1cU)) | ((0x10000000U 
                                          & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout) 
                                             << 0x1bU)) 
                                         | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_hcb8dd9c9__0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_ld_datafn_dc3 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_external_dc3)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_read_data_dc3
            : (IData)(((0x3fU >= (0x18U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3 
                                           << 3U)))
                        ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_dc3 
                           >> (0x18U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3 
                                        << 3U))) : 0ULL)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc2 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_dc2) 
                   << (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h3bfb4cbb__0 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_dc2) 
                 << (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2 
        = (0xffU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_dc2) 
                    << (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2)));
    vlSelf->__VdfgTmp_he58be140__0 = ((0x7fffffffU 
                                       == (0x7fffffffU 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he58a7551__0 = ((0x3fffffffU 
                                       == (0x3fffffffU 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he63416e4__0 = ((0x1fffffffU 
                                       == (0x1fffffffU 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he59599f5__0 = ((0xfffffffU == 
                                       (0xfffffffU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he595a744__0 = ((0x7ffffffU == 
                                       (0x7ffffffU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he6346ad5__0 = ((0x3ffffffU == 
                                       (0x3ffffffU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he63457ec__0 = ((0x1ffffffU == 
                                       (0x1ffffffU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he634c97d__0 = ((0xffffffU == 
                                       (0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he6342c66__0 = ((0x7fffffU == 
                                       (0x7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he5958257__0 = ((0x3fffffU == 
                                       (0x3fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he58a8ee6__0 = ((0x1fffffU == 
                                       (0x1fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he58b1df7__0 = ((0xfffffU == 
                                       (0xfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he58abd11__0 = ((0x7ffffU == 
                                       (0x7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he58b4da0__0 = ((0x3ffffU == 
                                       (0x3ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he58addb5__0 = ((0x1ffffU == 
                                       (0x1ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he58aedc4__0 = ((0xffffU == (0xffffU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he6342b17__0 = ((0x7fffU == (0x7fffU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he58c1626__0 = ((0x3fffU == (0x3fffU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he58cb7fb__0 = ((0x1fffU == (0x1fffU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he58c602a__0 = ((0xfffU == (0xfffU 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he58cde3b__0 = ((0x7ffU == (0x7ffU 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he58c0fca__0 = ((0x3ffU == (0x3ffU 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he58c71fb__0 = ((0x1ffU == (0x1ffU 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he58d23aa__0 = ((0xffU == (0xffU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he58c9411__0 = ((0x7fU == (0x7fU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he582f940__0 = ((0x3fU == (0x3fU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he5820ff9__0 = ((0x1fU == (0x1fU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he58ddc28__0 = ((0xfU == (0xfU 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he5826d18__0 = ((7U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he58dbcc9__0 = ((3U == (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_hf155bd29__0 = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a5fed97__0 = ((0x7fffffffU 
                                       == (0x7fffffffU 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a5f9ca6__0 = ((0x3fffffffU 
                                       == (0x3fffffffU 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a5fb273__0 = ((0x1fffffffU 
                                       == (0x1fffffffU 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a50e682__0 = ((0xfffffffU == 
                                       (0xfffffffU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a501a92__0 = ((0x7ffffffU == 
                                       (0x7ffffffU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a51c923__0 = ((0x3ffffffU == 
                                       (0x3ffffffU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a51fb76__0 = ((0x1ffffffU == 
                                       (0x1ffffffU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a503707__0 = ((0xffffffU == 
                                       (0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a500be4__0 = ((0x7fffffU == 
                                       (0x7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a503b35__0 = ((0x3fffffU == 
                                       (0x3fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a5fa860__0 = ((0x1fffffU == 
                                       (0x1fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a5f9991__0 = ((0xfffffU == 
                                       (0xfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a5e41e0__0 = ((0x7ffffU == 
                                       (0x7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a5e0eb1__0 = ((0x3ffffU == 
                                       (0x3ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a5ebfd8__0 = ((0x1ffffU == 
                                       (0x1ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a5ece09__0 = ((0xffffU == (0xffffU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a5e9af2__0 = ((0x7fffU == (0x7fffU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a5eaa23__0 = ((0x3fffU == (0x3fffU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a5fe0da__0 = ((0x1fffU == (0x1fffU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a5e138b__0 = ((0xfffU == (0xfffU 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a5f1a99__0 = ((0x7ffU == (0x7ffU 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a508988__0 = ((0x3ffU == (0x3ffU 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a50ff25__0 = ((0x1ffU == (0x1ffU 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a5f6234__0 = ((0xffU == (0xffU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a5f589f__0 = ((0x7fU == (0x7fU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a5fc90e__0 = ((0x3fU == (0x3fU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a5f3e33__0 = ((0x1fU == (0x1fU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6a5eb7a2__0 = ((0xfU == (0xfU 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6bb1999b__0 = ((7U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h6bb02e8a__0 = ((3U == (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h89ec5b3d__0 = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f271c44__0 = ((0x7fffffffU 
                                       == (0x7fffffffU 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f3c00d5__0 = ((0x3fffffffU 
                                       == (0x3fffffffU 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f3c95e0__0 = ((0x1fffffffU 
                                       == (0x1fffffffU 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f3ce471__0 = ((0xfffffffU == 
                                       (0xfffffffU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f3c4117__0 = ((0x7ffffffU == 
                                       (0x7ffffffU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f3dd026__0 = ((0x3ffffffU == 
                                       (0x3ffffffU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f3c3e77__0 = ((0x1ffffffU == 
                                       (0x1ffffffU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f3c88e6__0 = ((0xffffffU == 
                                       (0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f0e0a1d__0 = ((0x7fffffU == 
                                       (0x7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f0f78ac__0 = ((0x3fffffU == 
                                       (0x3fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f0f6bb5__0 = ((0x1fffffU == 
                                       (0x1fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f0ed944__0 = ((0xfffffU == 
                                       (0xfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f0eca15__0 = ((0x7ffffU == 
                                       (0x7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f0e3b24__0 = ((0x3ffffU == 
                                       (0x3ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f0e29b1__0 = ((0x1ffffU == 
                                       (0x1ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f3c32c0__0 = ((0xffffU == (0xffffU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f3ddd5b__0 = ((0x7fffU == (0x7fffU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f3ded8a__0 = ((0x3fffU == (0x3fffU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f3defb7__0 = ((0x1fffU == (0x1fffU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f3d7146__0 = ((0xfffU == (0xfffU 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f3d4116__0 = ((0x7ffU == (0x7ffU 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f22d027__0 = ((0x3ffU == (0x3ffU 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f3c7e3a__0 = ((0x1ffU == (0x1ffU 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f3d8ceb__0 = ((0xffU == (0xffU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f3f5a54__0 = ((0x7fU == (0x7fU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f3f6a85__0 = ((0x3fU == (0x3fU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f3cba38__0 = ((0x1fU == (0x1fU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f3ccb69__0 = ((0xfU == (0xfU 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f3c9f50__0 = ((7U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h4f3caf01__0 = ((3U == (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_he25a4f4a__0 = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56fffe27__0 = ((0x7fffffffU 
                                       == (0x7fffffffU 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56ff8ed6__0 = ((0x3fffffffU 
                                       == (0x3fffffffU 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56fcc21b__0 = ((0x1fffffffU 
                                       == (0x1fffffffU 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56fc12aa__0 = ((0xfffffffU == 
                                       (0xfffffffU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56fcf58b__0 = ((0x7ffffffU == 
                                       (0x7ffffffU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56fcc53a__0 = ((0x3ffffffU == 
                                       (0x3ffffffU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56fd061b__0 = ((0x1ffffffU == 
                                       (0x1ffffffU 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56f2582a__0 = ((0xffffffU == 
                                       (0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56f358a1__0 = ((0x7fffffU == 
                                       (0x7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56f26ef0__0 = ((0x3fffffU == 
                                       (0x3fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56f23809__0 = ((0x1fffffU == 
                                       (0x1fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56f34ed8__0 = ((0xfffffU == 
                                       (0xfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56f29ea8__0 = ((0x7ffffU == 
                                       (0x7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56f2ae79__0 = ((0x3ffffU == 
                                       (0x3ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56f37800__0 = ((0x1ffffU == 
                                       (0x1ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56fd8c51__0 = ((0xffffU == (0xffffU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56fd23ce__0 = ((0x7fffU == (0x7fffU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56fcb0ff__0 = ((0x3fffU == (0x3fffU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56fc8e6e__0 = ((0x1fffU == (0x1fffU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56fd1d7f__0 = ((0xfffU == (0xfffU 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56fd63d6__0 = ((0x7ffU == (0x7ffU 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56fdf147__0 = ((0x3ffU == (0x3ffU 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56fdf402__0 = ((0x1ffU == (0x1ffU 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56f20e53__0 = ((0xffU == (0xffU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56f396cc__0 = ((0x7fU == (0x7fU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56f339fd__0 = ((0x3fU == (0x3fU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56f30678__0 = ((0x1fU == (0x1fU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56f3a969__0 = ((0xfU == (0xfU 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56f3dac3__0 = ((7U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h56f04a52__0 = ((3U == (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__VdfgTmp_h793f19f8__0 = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
        = ((0xfffc0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U]) 
           | ((0x3ffc0U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[0U]) 
              | (((((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                        >> 2U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____VdfgTmp_heeae74fa__0))
                    ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e1)
                    : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e4)) 
                  << 1U) | (1U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[0U]))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcyclel_wb 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x58000000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_micect_wb 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x3f800000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_miccmect_wb 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x3f880000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mdccmect_wb 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x3f900000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcycleh_wb 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x5c000000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_minstreth_wb 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x5c100000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x58180000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3h_wr_en0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x5c180000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x58200000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4h_wr_en0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x5c200000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x58280000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5h_wr_en0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x5c280000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x58300000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6h_wr_en0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x5c300000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_minstretl_wb 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x58100000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcause_wb 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x1a100000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_wb 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x3e900000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_wb 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x3ea80000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mtval_wb 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x1a180000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_meihap_wb 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x5e500000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h7f97644b__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x3d100000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h40528f83__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x3d080000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mepc_wb 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x1a080000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hf814cb96__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_wr_pause_wb 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (IData)(((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                          >> 0xeU)) & (0x3e100000U 
                                       == (0x7ff80000U 
                                           & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mstatus_wb 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x18000000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mpmc_wb 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x3e300000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h5bcc23ab__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
               >> 0xcU)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h6ee9c6ba__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h417edc26__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
            >> 0xcU) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h288d1702__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h626b60e1__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
            >> 0xcU) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h4581aa3f__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h514b30fd__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_hd370f7ae__0) 
           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
              >> 0xdU));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h9eeb21a1__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h862bad1b__0) 
           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
              >> 4U));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h696f72b3__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
            >> 0xcU) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h407dbc8d__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__aout 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__a_ff 
           + (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__bm 
              + (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout 
                       >> 7U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_comp 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
            << 1U) | (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h2ece426b__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4) 
           & ((IData)((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                       >> 0x23U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hb4d7fe50__0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parityfinal 
        = (0xffU & (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parityeff)) 
                    | (((- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parityeff) 
                           >> 1U)) | (((- (IData)((2U 
                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parityeff) 
                                          >> 2U)) | 
                                      (((- (IData)(
                                                   (3U 
                                                    == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parityeff) 
                                           >> 3U)) 
                                       | (((- (IData)(
                                                      (4U 
                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parityeff) 
                                              >> 4U)) 
                                          | (((- (IData)(
                                                         (5U 
                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parityeff) 
                                                 >> 5U)) 
                                             | (((- (IData)(
                                                            (6U 
                                                             == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parityeff) 
                                                    >> 6U)) 
                                                | ((- (IData)(
                                                              (7U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parityeff) 
                                                      >> 7U))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final 
        = (((- (QData)((IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr))))) 
            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1eff) 
           | (((- (QData)((IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr))))) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1eff 
                  >> 8U)) | (((- (QData)((IData)((2U 
                                                  == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr))))) 
                              & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1eff 
                                 >> 0x10U)) | (((- (QData)((IData)(
                                                                   (3U 
                                                                    == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr))))) 
                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1eff 
                                                   >> 0x18U)) 
                                               | (((- (QData)((IData)(
                                                                      (4U 
                                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr))))) 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1eff 
                                                      >> 0x20U)) 
                                                  | (((- (QData)((IData)(
                                                                         (5U 
                                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr))))) 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1eff 
                                                         >> 0x28U)) 
                                                     | (((- (QData)((IData)(
                                                                            (6U 
                                                                             == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr))))) 
                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1eff 
                                                            >> 0x30U)) 
                                                        | ((- (QData)((IData)(
                                                                              (7U 
                                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr))))) 
                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1eff 
                                                              >> 0x38U)))))))));
    VL_SHIFTR_WWI(128,128,32, __Vtemp_h48870c3e__0, vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1eff, 0x10U);
    VL_SHIFTR_WWI(128,128,32, __Vtemp_h48873092__0, vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1eff, 0x20U);
    VL_SHIFTR_WWI(128,128,32, __Vtemp_h48873466__0, vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1eff, 0x30U);
    VL_SHIFTR_WWI(128,128,32, __Vtemp_h4887387a__0, vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1eff, 0x40U);
    VL_SHIFTR_WWI(128,128,32, __Vtemp_h4886fcae__0, vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1eff, 0x50U);
    VL_SHIFTR_WWI(128,128,32, __Vtemp_h488760a2__0, vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1eff, 0x60U);
    VL_SHIFTR_WWI(128,128,32, __Vtemp_h488766d6__0, vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1eff, 0x70U);
    __Vtemp_h47a43157__0[0U] = (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1eff[0U]) 
                                | (((- (IData)((1U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                    & __Vtemp_h48870c3e__0[0U]) 
                                   | (((- (IData)((2U 
                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                       & __Vtemp_h48873092__0[0U]) 
                                      | (((- (IData)(
                                                     (3U 
                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                          & __Vtemp_h48873466__0[0U]) 
                                         | (((- (IData)(
                                                        (4U 
                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                             & __Vtemp_h4887387a__0[0U]) 
                                            | (((- (IData)(
                                                           (5U 
                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                                & __Vtemp_h4886fcae__0[0U]) 
                                               | (((- (IData)(
                                                              (6U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                                   & __Vtemp_h488760a2__0[0U]) 
                                                  | ((- (IData)(
                                                                (7U 
                                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                                     & __Vtemp_h488766d6__0[0U]))))))));
    __Vtemp_h47a43157__0[1U] = (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1eff[1U]) 
                                | (((- (IData)((1U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                    & __Vtemp_h48870c3e__0[1U]) 
                                   | (((- (IData)((2U 
                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                       & __Vtemp_h48873092__0[1U]) 
                                      | (((- (IData)(
                                                     (3U 
                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                          & __Vtemp_h48873466__0[1U]) 
                                         | (((- (IData)(
                                                        (4U 
                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                             & __Vtemp_h4887387a__0[1U]) 
                                            | (((- (IData)(
                                                           (5U 
                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                                & __Vtemp_h4886fcae__0[1U]) 
                                               | (((- (IData)(
                                                              (6U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                                   & __Vtemp_h488760a2__0[1U]) 
                                                  | ((- (IData)(
                                                                (7U 
                                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                                     & __Vtemp_h488766d6__0[1U]))))))));
    __Vtemp_h47a43157__0[2U] = (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1eff[2U]) 
                                | (((- (IData)((1U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                    & __Vtemp_h48870c3e__0[2U]) 
                                   | (((- (IData)((2U 
                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                       & __Vtemp_h48873092__0[2U]) 
                                      | (((- (IData)(
                                                     (3U 
                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                          & __Vtemp_h48873466__0[2U]) 
                                         | (((- (IData)(
                                                        (4U 
                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                             & __Vtemp_h4887387a__0[2U]) 
                                            | (((- (IData)(
                                                           (5U 
                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                                & __Vtemp_h4886fcae__0[2U]) 
                                               | (((- (IData)(
                                                              (6U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                                   & __Vtemp_h488760a2__0[2U]) 
                                                  | ((- (IData)(
                                                                (7U 
                                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                                     & __Vtemp_h488766d6__0[2U]))))))));
    __Vtemp_h47a43157__0[3U] = (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1eff[3U]) 
                                | (((- (IData)((1U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                    & __Vtemp_h48870c3e__0[3U]) 
                                   | (((- (IData)((2U 
                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                       & __Vtemp_h48873092__0[3U]) 
                                      | (((- (IData)(
                                                     (3U 
                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                          & __Vtemp_h48873466__0[3U]) 
                                         | (((- (IData)(
                                                        (4U 
                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                             & __Vtemp_h4887387a__0[3U]) 
                                            | (((- (IData)(
                                                           (5U 
                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                                & __Vtemp_h4886fcae__0[3U]) 
                                               | (((- (IData)(
                                                              (6U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                                   & __Vtemp_h488760a2__0[3U]) 
                                                  | ((- (IData)(
                                                                (7U 
                                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))) 
                                                     & __Vtemp_h488766d6__0[3U]))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1final[0U] 
        = __Vtemp_h47a43157__0[0U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1final[1U] 
        = __Vtemp_h47a43157__0[1U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1final[2U] 
        = __Vtemp_h47a43157__0[2U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1final[3U] 
        = __Vtemp_h47a43157__0[3U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parityfinal 
        = (0xffU & (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parityeff)) 
                    | (((- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parityeff) 
                           >> 1U)) | (((- (IData)((2U 
                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parityeff) 
                                          >> 2U)) | 
                                      (((- (IData)(
                                                   (3U 
                                                    == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parityeff) 
                                           >> 3U)) 
                                       | (((- (IData)(
                                                      (4U 
                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parityeff) 
                                              >> 4U)) 
                                          | (((- (IData)(
                                                         (5U 
                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parityeff) 
                                                 >> 5U)) 
                                             | (((- (IData)(
                                                            (6U 
                                                             == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parityeff) 
                                                    >> 6U)) 
                                                | ((- (IData)(
                                                              (7U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parityeff) 
                                                      >> 7U))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final 
        = (((- (QData)((IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr))))) 
            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0eff) 
           | (((- (QData)((IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr))))) 
               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0eff 
                  >> 8U)) | (((- (QData)((IData)((2U 
                                                  == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr))))) 
                              & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0eff 
                                 >> 0x10U)) | (((- (QData)((IData)(
                                                                   (3U 
                                                                    == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr))))) 
                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0eff 
                                                   >> 0x18U)) 
                                               | (((- (QData)((IData)(
                                                                      (4U 
                                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr))))) 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0eff 
                                                      >> 0x20U)) 
                                                  | (((- (QData)((IData)(
                                                                         (5U 
                                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr))))) 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0eff 
                                                         >> 0x28U)) 
                                                     | (((- (QData)((IData)(
                                                                            (6U 
                                                                             == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr))))) 
                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0eff 
                                                            >> 0x30U)) 
                                                        | ((- (QData)((IData)(
                                                                              (7U 
                                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr))))) 
                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0eff 
                                                              >> 0x38U)))))))));
    VL_SHIFTR_WWI(128,128,32, __Vtemp_hab28c158__0, vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0eff, 0x10U);
    VL_SHIFTR_WWI(128,128,32, __Vtemp_hab2a25ac__0, vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0eff, 0x20U);
    VL_SHIFTR_WWI(128,128,32, __Vtemp_hab2a2940__0, vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0eff, 0x30U);
    VL_SHIFTR_WWI(128,128,32, __Vtemp_hab2a2d94__0, vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0eff, 0x40U);
    VL_SHIFTR_WWI(128,128,32, __Vtemp_hab2a3188__0, vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0eff, 0x50U);
    VL_SHIFTR_WWI(128,128,32, __Vtemp_hab28d57c__0, vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0eff, 0x60U);
    VL_SHIFTR_WWI(128,128,32, __Vtemp_hab28d7f0__0, vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0eff, 0x70U);
    __Vtemp_h025ae31e__0[0U] = (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0eff[0U]) 
                                | (((- (IData)((1U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                    & __Vtemp_hab28c158__0[0U]) 
                                   | (((- (IData)((2U 
                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                       & __Vtemp_hab2a25ac__0[0U]) 
                                      | (((- (IData)(
                                                     (3U 
                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                          & __Vtemp_hab2a2940__0[0U]) 
                                         | (((- (IData)(
                                                        (4U 
                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                             & __Vtemp_hab2a2d94__0[0U]) 
                                            | (((- (IData)(
                                                           (5U 
                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                                & __Vtemp_hab2a3188__0[0U]) 
                                               | (((- (IData)(
                                                              (6U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                                   & __Vtemp_hab28d57c__0[0U]) 
                                                  | ((- (IData)(
                                                                (7U 
                                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                                     & __Vtemp_hab28d7f0__0[0U]))))))));
    __Vtemp_h025ae31e__0[1U] = (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0eff[1U]) 
                                | (((- (IData)((1U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                    & __Vtemp_hab28c158__0[1U]) 
                                   | (((- (IData)((2U 
                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                       & __Vtemp_hab2a25ac__0[1U]) 
                                      | (((- (IData)(
                                                     (3U 
                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                          & __Vtemp_hab2a2940__0[1U]) 
                                         | (((- (IData)(
                                                        (4U 
                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                             & __Vtemp_hab2a2d94__0[1U]) 
                                            | (((- (IData)(
                                                           (5U 
                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                                & __Vtemp_hab2a3188__0[1U]) 
                                               | (((- (IData)(
                                                              (6U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                                   & __Vtemp_hab28d57c__0[1U]) 
                                                  | ((- (IData)(
                                                                (7U 
                                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                                     & __Vtemp_hab28d7f0__0[1U]))))))));
    __Vtemp_h025ae31e__0[2U] = (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0eff[2U]) 
                                | (((- (IData)((1U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                    & __Vtemp_hab28c158__0[2U]) 
                                   | (((- (IData)((2U 
                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                       & __Vtemp_hab2a25ac__0[2U]) 
                                      | (((- (IData)(
                                                     (3U 
                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                          & __Vtemp_hab2a2940__0[2U]) 
                                         | (((- (IData)(
                                                        (4U 
                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                             & __Vtemp_hab2a2d94__0[2U]) 
                                            | (((- (IData)(
                                                           (5U 
                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                                & __Vtemp_hab2a3188__0[2U]) 
                                               | (((- (IData)(
                                                              (6U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                                   & __Vtemp_hab28d57c__0[2U]) 
                                                  | ((- (IData)(
                                                                (7U 
                                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                                     & __Vtemp_hab28d7f0__0[2U]))))))));
    __Vtemp_h025ae31e__0[3U] = (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0eff[3U]) 
                                | (((- (IData)((1U 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                    & __Vtemp_hab28c158__0[3U]) 
                                   | (((- (IData)((2U 
                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                       & __Vtemp_hab2a25ac__0[3U]) 
                                      | (((- (IData)(
                                                     (3U 
                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                          & __Vtemp_hab2a2940__0[3U]) 
                                         | (((- (IData)(
                                                        (4U 
                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                             & __Vtemp_hab2a2d94__0[3U]) 
                                            | (((- (IData)(
                                                           (5U 
                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                                & __Vtemp_hab2a3188__0[3U]) 
                                               | (((- (IData)(
                                                              (6U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                                   & __Vtemp_hab28d57c__0[3U]) 
                                                  | ((- (IData)(
                                                                (7U 
                                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))) 
                                                     & __Vtemp_hab28d7f0__0[3U]))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0final[0U] 
        = __Vtemp_h025ae31e__0[0U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0final[1U] 
        = __Vtemp_h025ae31e__0[1U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0final[2U] 
        = __Vtemp_h025ae31e__0[2U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0final[3U] 
        = __Vtemp_h025ae31e__0[3U];
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_hfae9b0df__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_hd509f0c3__0) 
           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
              >> 0xdU));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_ha61f2751__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
               >> 0xdU)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h6d48c2d5__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h95abc112__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_he33aae79__0) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h898c9777__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h2c9d6604__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[1U] 
            >> 0x16U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_brp_valid));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h60ea88ed__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0x1fU)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h317d9b29__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h30556dbc__0 
        = (IData)(((0U == (0xb8000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)) 
                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h317d9b29__0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h25429399__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
            >> 0x18U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h20724969__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4c6ee14b__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0x17U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h20724969__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned 
        = (((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_cmd_size)) 
            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg) 
           | (((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_cmd_size)) 
               & (0U != (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg))) 
              | ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_cmd_size)) 
                 & (0U != (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fourthpc 
        = (0x7fffffffU & (((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                             >> 3U)))) 
                           & ((IData)(3U) + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout)) 
                          | (((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h24edf535__0))) 
                              & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout) 
                             | (((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h3023b5bf__0))) 
                                 & ((IData)(1U) + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout)) 
                                | ((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_hef79c2d8__0))) 
                                   & ((IData)(2U) + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignsbecc 
        = (0xfU & (((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                      >> 3U)))) & (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
                                                                         >> 0x32U)))))) 
                   | (((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h24edf535__0))) 
                       & ((8U & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h366b7b7b__0[3U] 
                                 >> 2U)) | (7U & (- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
                                                                        >> 0x32U)))))))) 
                      | (((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h3023b5bf__0))) 
                          & ((0xcU & ((- (IData)((1U 
                                                  & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h366b7b7b__0[3U] 
                                                     >> 5U)))) 
                                      << 2U)) | (3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
                                                                          >> 0x32U)))))))) 
                         | ((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_hef79c2d8__0))) 
                            & ((0xeU & ((- (IData)(
                                                   (1U 
                                                    & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h366b7b7b__0[3U] 
                                                       >> 5U)))) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
                                                              >> 0x32U)))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignfromf1 
        = (7U & ((4U & (- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h24edf535__0)))) 
                 | ((6U & (- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h3023b5bf__0)))) 
                    | (- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_hef79c2d8__0))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h33f05e89__0 
        = (((((QData)((IData)((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                                >> 3U)))))) 
              << 0x20U) | (QData)((IData)((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                                         >> 3U))))))) 
            & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_hb3ed4232__0) 
           | (((((QData)((IData)((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h24edf535__0))))) 
                 << 0x20U) | (QData)((IData)((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h24edf535__0)))))) 
               & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h3984a296__0) 
              | (((((QData)((IData)((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h3023b5bf__0))))) 
                    << 0x20U) | (QData)((IData)((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h3023b5bf__0)))))) 
                  & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_ha88c5ace__0) 
                 | ((((QData)((IData)((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_hef79c2d8__0))))) 
                      << 0x20U) | (QData)((IData)((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_hef79c2d8__0)))))) 
                    & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h16fd7dfc__0))));
    __Vtemp_h7c51030f__0[1U] = (((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                                   >> 3U)))) 
                                 & ((((IData)(1U) + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout) 
                                     << 0x1eU) | (IData)(
                                                         (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_hb3ed4232__0 
                                                          >> 0x20U)))) 
                                | (((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h24edf535__0))) 
                                    & ((((IData)(1U) 
                                         + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout) 
                                        << 0x1eU) | (IData)(
                                                            (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h3984a296__0 
                                                             >> 0x20U)))) 
                                   | (((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h3023b5bf__0))) 
                                       & ((((IData)(1U) 
                                            + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout) 
                                           << 0x1eU) 
                                          | (IData)(
                                                    (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_ha88c5ace__0 
                                                     >> 0x20U)))) 
                                      | ((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_hef79c2d8__0))) 
                                         & ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout 
                                             << 0x1eU) 
                                            | (IData)(
                                                      (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h16fd7dfc__0 
                                                       >> 0x20U)))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h28a505dc__0[0U] 
        = (((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                              >> 3U)))) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_hb3ed4232__0)) 
           | (((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h24edf535__0))) 
               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h3984a296__0)) 
              | (((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h3023b5bf__0))) 
                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_ha88c5ace__0)) 
                 | ((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_hef79c2d8__0))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h16fd7dfc__0)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h28a505dc__0[1U] 
        = __Vtemp_h7c51030f__0[1U];
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h28a505dc__0[2U] 
        = ((0x1fffffffU & ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                             >> 3U)))) 
                           & (((IData)(1U) + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout) 
                              >> 2U))) | ((0x1fffffffU 
                                           & ((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h24edf535__0))) 
                                              & (((IData)(1U) 
                                                  + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout) 
                                                 >> 2U))) 
                                          | ((0x1fffffffU 
                                              & ((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h3023b5bf__0))) 
                                                 & (((IData)(1U) 
                                                     + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout) 
                                                    >> 2U))) 
                                             | ((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_hef79c2d8__0))) 
                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout 
                                                   >> 2U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignval 
        = (0xfU & ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                     >> 3U)))) | ((
                                                   (- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h24edf535__0))) 
                                                   & (7U 
                                                      | (8U 
                                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1val) 
                                                            << 3U)))) 
                                                  | (((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h3023b5bf__0))) 
                                                      & (3U 
                                                         | (0xcU 
                                                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1val) 
                                                               << 2U)))) 
                                                     | ((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_hef79c2d8__0))) 
                                                        & (1U 
                                                           | (0xeU 
                                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1val) 
                                                                 << 1U))))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_hf9ddfad5__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
            >> 5U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h720412e8__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h5b0de9f9__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
               >> 6U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h720412e8__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h31faf412__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
            >> 6U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h720412e8__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_he71d315b__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
               >> 0x1dU)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h0f1b45b1__0));
    vlSelf->__VdfgTmp_he75cd719__0 = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h4fa8c1dc__0) 
                                      | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h532a3783__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h72a120af__0 
        = ((IData)((0U != (0xf80U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h8719a8b3__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h439c05a4__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
               >> 0xcU)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h8719a8b3__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h5bcc23ab__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0xcU)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h6ee9c6ba__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h417edc26__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
            >> 0xcU) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h288d1702__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h626b60e1__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
            >> 0xcU) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h4581aa3f__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h514b30fd__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_hd370f7ae__0) 
           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
              >> 0xdU));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h9eeb21a1__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h862bad1b__0) 
           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
              >> 4U));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h696f72b3__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
            >> 0xcU) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h407dbc8d__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_arvalid_ff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_arvalid) 
           | (3U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_hfae9b0df__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_hd509f0c3__0) 
           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
              >> 0xdU));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_ha61f2751__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0xdU)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h6d48c2d5__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h95abc112__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_he33aae79__0) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h898c9777__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h2b410071__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
            >> 2U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h7d249886__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_he7aa13e3__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
               >> 3U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h7d249886__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_hd4c8ff11__0 
        = (IData)(((0U == (0xcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)) 
                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h7d249886__0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h8b31b64c__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
               >> 0xcU)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h3f855b1b__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h2b532282__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
            >> 5U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h3f855b1b__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h898b21aa__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
               >> 6U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h3f855b1b__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h2487dba7__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
               >> 5U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h3f855b1b__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_hf9ddfad5__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
            >> 5U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h720412e8__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h5b0de9f9__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 6U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h720412e8__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h31faf412__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
            >> 6U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h720412e8__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_wvalid 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done)) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h2caec338__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_awvalid 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done)) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h2caec338__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hd1255040__0 
        = (((8U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                   << 2U)) | ((4U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                     << 1U)) | ((2U 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1)) 
                                                | (1U 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                      >> 1U))))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_data));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_he71d315b__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0x1dU)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h0f1b45b1__0));
    vlSelf->__VdfgTmp_h858ca7ae__0 = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h4fa8c1dc__0) 
                                      | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h532a3783__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h72a120af__0 
        = ((IData)((0U != (0xf80U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h8719a8b3__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h439c05a4__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0xcU)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h8719a8b3__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way0_f2 
        = ((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2 
              & ((0x1ffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2 
                            >> 0x11U)) == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_rd_tag_f2))) 
             << 3U) | (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2 
                         & ((0x1ffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2 
                                       >> 0x11U)) == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_rd_tag_f2))) 
                        << 2U) | (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2 
                                    & ((0x1ffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2 
                                                  >> 0x11U)) 
                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_rd_tag_f2))) 
                                   << 1U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2 
                                             & ((0x1ffU 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2 
                                                    >> 0x11U)) 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_rd_tag_f2)))))) 
           & ((~ ((- (IData)((1U & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                       >> 2U))))) & 
                  ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                   >> 9U))) & (- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h086da726__0)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_f2 
        = ((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2 
              & ((0x1ffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2 
                            >> 0x11U)) == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_rd_tag_f2))) 
             << 3U) | (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2 
                         & ((0x1ffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2 
                                       >> 0x11U)) == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_rd_tag_f2))) 
                        << 2U) | (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2 
                                    & ((0x1ffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2 
                                                  >> 0x11U)) 
                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_rd_tag_f2))) 
                                   << 1U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2 
                                             & ((0x1ffU 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2 
                                                    >> 0x11U)) 
                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_rd_tag_f2)))))) 
           & ((~ ((- (IData)((1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                    >> 2U)))) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                                 >> 9U))) 
              & (- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h086da726__0)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h458cfa1c__0 
        = ((0x17U >= (0x1fU & ((IData)(3U) * (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtr))))
            ? (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                     >> (0x1fU & ((IData)(3U) * (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtr)))))
            : 0U);
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hca2e3e9e__0 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                 >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtr)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag 
        = (1U & (- (IData)(((IData)(((0x20U == (0x38U 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                     & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                        >> 1U))) & 
                            ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                             >> 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag) 
           | (2U & (- (IData)(((IData)(((0x100U == 
                                         (0x1c0U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                           >> 2U))) 
                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                  >> 2U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag) 
           | (3U & (- (IData)(((IData)(((0x800U == 
                                         (0xe00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                           >> 3U))) 
                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                  >> 3U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag) 
           | (4U & (- (IData)(((IData)(((0x4000U == 
                                         (0x7000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                           >> 4U))) 
                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                  >> 4U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag) 
           | (5U & (- (IData)(((IData)(((0x20000U == 
                                         (0x38000U 
                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                           >> 5U))) 
                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                  >> 5U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag) 
           | (6U & (- (IData)(((IData)(((0x100000U 
                                         == (0x1c0000U 
                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                           >> 6U))) 
                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                  >> 6U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag 
        = (7U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag) 
                 | (- (IData)(((IData)(((0x800000U 
                                         == (0xe00000U 
                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                           >> 7U))) 
                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                  >> 7U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)) 
           & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                 >> 6U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend) 
           | (((3U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect)) 
              & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                    >> 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend) 
           | ((IData)(((0x18U == (0x38U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect) 
                          >> 1U))) & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                                         >> 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend) 
           | ((IData)(((0xc0U == (0x1c0U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect) 
                          >> 2U))) & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                                         >> 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend) 
           | ((IData)(((0x600U == (0xe00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect) 
                          >> 3U))) & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                                         >> 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend) 
           | ((IData)(((0x3000U == (0x7000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect) 
                          >> 4U))) & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                                         >> 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend) 
           | ((IData)(((0x18000U == (0x38000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect) 
                          >> 5U))) & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                                         >> 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend) 
           | ((IData)(((0xc0000U == (0x1c0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect) 
                          >> 6U))) & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                                         >> 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend) 
           | ((IData)(((0x600000U == (0xe00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect) 
                          >> 7U))) & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                                         >> 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3 = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 
        = ((0U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
           & (~ ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                   & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                  | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4) 
                     & ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc4)) 
                        | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc4) 
                           & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc4)))))) 
                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                    & ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)) 
                       | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5) 
                          & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))))))));
    if ((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0)))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3 = 1U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 
            = (IData)(((0U == (0x38U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                       & (~ ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                               & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                              | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4) 
                                 & ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc4)) 
                                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc4) 
                                       & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc4)))))) 
                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                                & ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)) 
                                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5) 
                                      & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))))))));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0)))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3 = 2U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 
            = (IData)(((0U == (0x1c0U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                       & (~ ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                               & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                              | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4) 
                                 & ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc4)) 
                                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc4) 
                                       & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc4)))))) 
                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                                & ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)) 
                                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5) 
                                      & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))))))));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0)))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3 = 3U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 
            = (IData)(((0U == (0xe00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                       & (~ ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                               & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                              | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4) 
                                 & ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc4)) 
                                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc4) 
                                       & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc4)))))) 
                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                                & ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)) 
                                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5) 
                                      & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))))))));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0)))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3 = 4U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 
            = (IData)(((0U == (0x7000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                       & (~ ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                               & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                              | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4) 
                                 & ((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc4)) 
                                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc4) 
                                       & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc4)))))) 
                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                                & ((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)) 
                                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5) 
                                      & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))))))));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0)))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3 = 5U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 
            = (IData)(((0U == (0x38000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                       & (~ ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                               & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                              | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4) 
                                 & ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc4)) 
                                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc4) 
                                       & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc4)))))) 
                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                                & ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)) 
                                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5) 
                                      & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))))))));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0)))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3 = 6U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 
            = (IData)(((0U == (0x1c0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                       & (~ ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                               & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                              | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4) 
                                 & ((6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc4)) 
                                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc4) 
                                       & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc4)))))) 
                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                                & ((6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)) 
                                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5) 
                                      & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))))))));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0)))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3 = 7U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 
            = (IData)(((0U == (0xe00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                       & (~ ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                               & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                              | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4) 
                                 & ((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc4)) 
                                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc4) 
                                       & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc4)))))) 
                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                                & ((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)) 
                                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5) 
                                      & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))))))));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc3 = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 
        = ((0U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
           & (~ (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                    & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc3) 
                      & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3)))) 
                  | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4) 
                     & ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc4)) 
                        | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc4) 
                           & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc4)))))) 
                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                    & ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)) 
                       | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5) 
                          & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))))))));
    if ((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1)))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc3 = 1U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 
            = (IData)(((0U == (0x38U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                       & (~ (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                                & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                               | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc3) 
                                  & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3)))) 
                              | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4) 
                                 & ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc4)) 
                                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc4) 
                                       & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc4)))))) 
                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                                & ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)) 
                                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5) 
                                      & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))))))));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1)))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc3 = 2U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 
            = (IData)(((0U == (0x1c0U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                       & (~ (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                                & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                               | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc3) 
                                  & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3)))) 
                              | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4) 
                                 & ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc4)) 
                                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc4) 
                                       & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc4)))))) 
                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                                & ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)) 
                                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5) 
                                      & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))))))));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1)))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc3 = 3U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 
            = (IData)(((0U == (0xe00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                       & (~ (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                                & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                               | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc3) 
                                  & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3)))) 
                              | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4) 
                                 & ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc4)) 
                                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc4) 
                                       & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc4)))))) 
                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                                & ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)) 
                                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5) 
                                      & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))))))));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1)))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc3 = 4U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 
            = (IData)(((0U == (0x7000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                       & (~ (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                                & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                               | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc3) 
                                  & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3)))) 
                              | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4) 
                                 & ((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc4)) 
                                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc4) 
                                       & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc4)))))) 
                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                                & ((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)) 
                                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5) 
                                      & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))))))));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1)))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc3 = 5U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 
            = (IData)(((0U == (0x38000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                       & (~ (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                                & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                               | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc3) 
                                  & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3)))) 
                              | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4) 
                                 & ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc4)) 
                                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc4) 
                                       & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc4)))))) 
                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                                & ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)) 
                                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5) 
                                      & (5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))))))));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1)))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc3 = 6U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 
            = (IData)(((0U == (0x1c0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                       & (~ (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                                & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                               | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc3) 
                                  & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3)))) 
                              | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4) 
                                 & ((6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc4)) 
                                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc4) 
                                       & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc4)))))) 
                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                                & ((6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)) 
                                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5) 
                                      & (6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))))))));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1)))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc3 = 7U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 
            = (IData)(((0U == (0xe00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                       & (~ (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                                & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                               | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc3) 
                                  & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3)))) 
                              | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4) 
                                 & ((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc4)) 
                                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc4) 
                                       & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc4)))))) 
                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                                & ((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)) 
                                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5) 
                                      & (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))))))));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_bus_buffer_empty_any 
        = (1U & ((~ (IData)((0U != vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                 & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)) 
                    & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_imprecise_error_store_any 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
             & (4U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error)) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_imprecise_error_store_any 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_imprecise_error_store_any) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                & (0x20U == (0x38U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                  >> 1U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                             >> 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_imprecise_error_store_any 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_imprecise_error_store_any) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                & (0x100U == (0x1c0U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                  >> 2U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                             >> 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_imprecise_error_store_any 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_imprecise_error_store_any) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                & (0x800U == (0xe00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                  >> 3U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                             >> 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_imprecise_error_store_any 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_imprecise_error_store_any) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                & (0x4000U == (0x7000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                  >> 4U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                             >> 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_imprecise_error_store_any 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_imprecise_error_store_any) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                & (0x20000U == (0x38000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                  >> 5U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                             >> 5U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_imprecise_error_store_any 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_imprecise_error_store_any) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                & (0x100000U == (0x1c0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                  >> 6U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                             >> 6U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_imprecise_error_store_any 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_imprecise_error_store_any) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                & (0x800000U == (0xe00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                  >> 7U)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                             >> 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid) 
             & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr 
                 >> 3U) == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[0U] 
                            >> 3U))) & (3U == (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
           & (~ ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                    & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid) 
                & (0x18U == (0x38U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
               & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr 
                   >> 3U) == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U] 
                              >> 3U))) & (~ ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                                                & (1U 
                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid) 
                & (0xc0U == (0x1c0U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
               & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr 
                   >> 3U) == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[2U] 
                              >> 3U))) & (~ ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                                                & (2U 
                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid) 
                & (0x600U == (0xe00U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
               & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr 
                   >> 3U) == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U] 
                              >> 3U))) & (~ ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                                                & (3U 
                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid) 
                & (0x3000U == (0x7000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
               & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr 
                   >> 3U) == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[4U] 
                              >> 3U))) & (~ ((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                                                & (4U 
                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid) 
                & (0x18000U == (0x38000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
               & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr 
                   >> 3U) == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[5U] 
                              >> 3U))) & (~ ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                                                & (5U 
                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid) 
                & (0xc0000U == (0x1c0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
               & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr 
                   >> 3U) == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[6U] 
                              >> 3U))) & (~ ((6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                                                & (6U 
                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid) 
                & (0x600000U == (0xe00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
               & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr 
                   >> 3U) == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[7U] 
                              >> 3U))) & (~ ((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                             | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                                                & (7U 
                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h2b410071__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
            >> 2U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h7d249886__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_he7aa13e3__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 3U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h7d249886__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_hd4c8ff11__0 
        = (IData)(((0U == (0xcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)) 
                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h7d249886__0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h8b31b64c__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0xcU)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h3f855b1b__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h2b532282__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
            >> 5U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h3f855b1b__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h898b21aa__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 6U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h3f855b1b__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h2487dba7__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 5U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h3f855b1b__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__smallnum_case 
        = ((IData)((((0ULL == (0xfffffff0ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                     & (0ULL == (0xfffffff0ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h7b5ca1a6__0))) 
           | ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
              & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h7b5ca1a6__0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
           & (0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rresp_q)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write) 
           & (0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bresp_q)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__aout 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__a_ff 
           + (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__bm 
              + (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout 
                       >> 7U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_dc5) 
                   << (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8ab2a79c__0 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_dc5) 
                 << (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hce653c8e__0 
        = (0xffU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_dc5) 
                    << (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ldst_dc2 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT____VdfgTmp_h23c9c3ab__0) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1t_in 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e1ff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1t_in 
        = ((0x3f00fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1t_in) 
           | ((0xf0000U & (((~ (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3)))) 
                            << 0x10U) & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e1ff__dout)) 
              | (0xf000U & (((~ (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3)))) 
                             << 0xcU) & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e1ff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[0U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[0U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[1U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[2U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[2U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[1U] 
        = ((0xfdffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[1U]) 
           | (0x2000000U & (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3)) 
                             << 0x19U) & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[1U] 
        = ((0xfffffffbU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[1U]) 
           | (4U & (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3)) 
                     << 2U) & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[1U] 
        = ((0xfeffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[1U]) 
           | (0x1000000U & (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3)) 
                             << 0x18U) & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[1U] 
        = ((0xfffffffdU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[1U]) 
           | (2U & (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3)) 
                     << 1U) & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[1U] 
        = ((0xff7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[1U]) 
           | (0x800000U & (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3)) 
                            << 0x17U) & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[0U] 
        = ((0xfffbffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[0U]) 
           | (0x40000U & (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3)) 
                           << 0x12U) & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[0U])));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h488ff5f1__0 
        = (0xfU & (~ (- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3) 
                                       | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                          >> 2U)))))));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h2d2bea69__0 
        = (1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3)) 
                 & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                       >> 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc3 
        = (1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3) 
                  & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__flushff__dout) 
                     >> 1U)) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                >> 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc2_up 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3) 
                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 2U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__flushff__dout) 
                               >> 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze 
        = ((~ (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                >> 2U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc5))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc5ff__dout) 
           & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc5) 
                  | (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc5ff__dout 
                     >> 0xaU))) & (IData)((0U != (0x3000U 
                                                  & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc5ff__dout)))));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fifo_write 
        = ((IData)(vlSelf->__PVT__uart16550_0__DOT__we_o) 
           & (IData)(vlSelf->uart16550_0__DOT__regs__DOT____VdfgTmp_h755f749e__0));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fifo_read 
        = ((IData)(vlSelf->__PVT__uart16550_0__DOT__re_o) 
           & (IData)(vlSelf->uart16550_0__DOT__regs__DOT____VdfgTmp_h755f749e__0));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__msr_read 
        = ((IData)(vlSelf->__PVT__uart16550_0__DOT__re_o) 
           & ((~ ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                  >> 7U)) & (6U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__iir_read 
        = ((IData)(vlSelf->__PVT__uart16550_0__DOT__re_o) 
           & ((~ ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                  >> 7U)) & (2U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr_mask_condition 
        = ((IData)(vlSelf->__PVT__uart16550_0__DOT__re_o) 
           & ((~ ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                  >> 7U)) & (5U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode__DOT__ecc_out_temp 
        = ((0x20U & ((VL_REDXOR_32((0x1c000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_data_any)) 
                      ^ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode__DOT____VdfgTmp_h58e9ffcf__0)) 
                     << 5U)) | ((0x10U & ((VL_REDXOR_32(
                                                        (0x3f800U 
                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_data_any)) 
                                           ^ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode__DOT____VdfgTmp_h6b771252__0)) 
                                          << 4U)) | 
                                ((8U & ((VL_REDXOR_16(
                                                      (0x7f0U 
                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_data_any)) 
                                         ^ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode__DOT____VdfgTmp_h6b771252__0)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & ((VL_REDXOR_32(
                                                                     (0x3c3c78eU 
                                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_data_any)) 
                                                        ^ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode__DOT____VdfgTmp_h58e9ffcf__0)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (VL_REDXOR_32(
                                                                       (0x9b33366dU 
                                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_data_any)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & VL_REDXOR_32(
                                                                        (0x56aaad5bU 
                                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_data_any))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out = 0U;
    if ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg));
    }
    if ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                               >> 4U)));
    }
    if ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                               >> 8U)));
    }
    if ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                               >> 0xcU)));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                               >> 0x10U)));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                               >> 0x14U)));
    }
    if ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                               >> 0x18U)));
    }
    if ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                               >> 0x1cU)));
    }
    if ((0x100U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                               >> 0x20U)));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out = 0U;
    if ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg));
    }
    if ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                     >> 1U));
    }
    if ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                     >> 2U));
    }
    if ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                     >> 3U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                     >> 4U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                     >> 5U));
    }
    if ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                     >> 6U));
    }
    if ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                     >> 7U));
    }
    if ((0x100U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                     >> 8U));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out = 0U;
    if ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg);
    }
    if ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                     >> 2U));
    }
    if ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                     >> 4U));
    }
    if ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                     >> 6U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                     >> 8U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                     >> 0xaU));
    }
    if ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                     >> 0xcU));
    }
    if ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                     >> 0xeU));
    }
    if ((0x100U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                     >> 0x10U));
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__lsu_freeze_dc3_q) {
        vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_loff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_lo_q;
        vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_hiff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_hi_q;
    } else {
        vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_loff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__dccm_rd_data_lo;
        vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_hiff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__dccm_rd_data_hi;
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e4_ctl_en) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_ap_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e3_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e3pcff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xfffU & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e3_ff__dout[0U]);
        if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze) {
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] = 0U;
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] = 0U;
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] = 0U;
        } else {
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
                = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e3_ff__dout[0U];
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
                = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e3_ff__dout[1U];
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
                = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e3_ff__dout[2U];
        }
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_upper_flush_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((0x80000000U & (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze)) 
                                << 0x1fU) & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e3_ff__dout)) 
               | (0x7fffffffU & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e3_ff__dout));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_ap_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__pcff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xfffU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__brimmff__dout));
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__predictpacketff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__predictpacketff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__predictpacketff__dout[2U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_upper_flush_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e4_ff__dout;
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4_ctl_en) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_ap_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e3_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0e3pcff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xfffU & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e3_ff__dout[0U]);
        if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze) {
            vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4c_ff__DOT____Vcellinp__dffs__din = 0U;
            vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e4c_ff__DOT____Vcellinp__dffs__din = 0U;
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] = 0U;
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] = 0U;
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] = 0U;
        } else {
            vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4c_ff__DOT____Vcellinp__dffs__din 
                = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e3c_ff__dout;
            vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e4c_ff__DOT____Vcellinp__dffs__din 
                = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e3c_ff__dout;
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
                = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e3_ff__dout[0U];
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
                = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e3_ff__dout[1U];
            vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
                = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e3_ff__dout[2U];
        }
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_upper_flush_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((0x7ffffffffffffffeULL & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e3_ff__dout) 
               | (QData)((IData)((1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze)) 
                                        & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e3_ff__dout))))));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_ap_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__pcff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xfffU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__brimmff__dout));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4c_ff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e4c_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e4c_ff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e4c_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__predictpacketff__dout[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__predictpacketff__dout[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__predictpacketff__dout[2U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_upper_flush_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e4_ff__dout;
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_hfce56040__0 
        = ((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                       >> 3U))) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_hae6ed180__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h60795cdc__0) 
            << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hb084dfe1__0) 
                       << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h94740500__0) 
                                  << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h3481338d__0))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_hac1dba8a__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_hbe32589f__0) 
           & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                      >> 3U)));
    vlSelf->__PVT__wb_s2m_io_err = (((0xaU >= (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)) 
                                     & ((((IData)(vlSelf->__PVT__wb_s2m_spi_accel_err) 
                                          << 7U) | 
                                         (((IData)(vlSelf->__PVT__wb_s2m_gpio_err) 
                                           << 2U) | 
                                          ((IData)(vlSelf->__PVT__wb_s2m_gpio2_err) 
                                           << 1U))) 
                                        >> (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel))) 
                                    | (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__wbm_err));
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
    vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o 
        = ((IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match) 
           & ((IData)(vlSelf->__PVT__wb_m2s_io_cyc) 
              << (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_hea3f96f1__0 
        = (1U == (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_hc43ab4e6__0) 
                   << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h2b512108__0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h19358fb1__0 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_hc43ab4e6__0) 
            << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h2b512108__0) 
                       << 1U) | (((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h09dd1d12__0)) 
                                  & (0U != (0xffU & (IData)(
                                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                             >> 8U))))) 
                                 | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h09dd1d12__0) 
                                    & (0xffU != (0xffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                            >> 7U))))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h42b01950__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0x15U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h8f17105e__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_cumulative_err_data 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_data_comb_err) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_data_comb_err_ff));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__byp_data_first_half__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_first_data)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rdata_ff
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_first_half);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__byp_data_second_half__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_second_data)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rdata_ff
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_second_half);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_en_new_q 
        = ((~ (IData)((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rresp_ff)))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new_wo_err));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h2d2868fc__0 
        = ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_mb_addr))) 
           & ((0x7fffffe0U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout) 
              | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rid_ff) 
                  << 2U) | (3U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_write_stall 
        = ((~ ((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgExtracted_h2348283c__0)) 
               & (1U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_en_new));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__target_mispredict 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[0U] 
            >> 0x10U) & ((0x7fffffffU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[1U] 
                                          << 0xeU) 
                                         | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[0U] 
                                            >> 0x12U))) 
                         != (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__aout 
                             >> 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__lt 
        = (1U & (((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout 
                      >> 5U)) & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__aout 
                                  >> 0x1fU) ^ (((~ 
                                                 (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__a_ff 
                                                  >> 0x1fU)) 
                                                & ((~ 
                                                    (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__bm 
                                                     >> 0x1fU)) 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__aout 
                                                      >> 0x1fU))) 
                                               | ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__a_ff 
                                                   >> 0x1fU) 
                                                  & ((~ 
                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__aout 
                                                       >> 0x1fU)) 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__bm 
                                                        >> 0x1fU)))))) 
                 | ((~ (IData)((1ULL & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__a_ff)) 
                                         + ((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__bm)) 
                                            + (QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout 
                                                                  >> 7U)))))) 
                                        >> 0x20U)))) 
                    & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout 
                       >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb 
        = ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
               & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                  >> 0x1cU))) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellinp__npc_any_ff__din 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__any_jal)
                           ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__aout 
                              >> 1U) : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__pcout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__target_mispredict 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[0U] 
            >> 0x10U) & ((0x7fffffffU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[1U] 
                                          << 0xeU) 
                                         | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[0U] 
                                            >> 0x12U))) 
                         != (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__aout 
                             >> 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__lt 
        = (1U & (((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout 
                      >> 5U)) & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__aout 
                                  >> 0x1fU) ^ (((~ 
                                                 (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__a_ff 
                                                  >> 0x1fU)) 
                                                & ((~ 
                                                    (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__bm 
                                                     >> 0x1fU)) 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__aout 
                                                      >> 0x1fU))) 
                                               | ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__a_ff 
                                                   >> 0x1fU) 
                                                  & ((~ 
                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__aout 
                                                       >> 0x1fU)) 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__bm 
                                                        >> 0x1fU)))))) 
                 | ((~ (IData)((1ULL & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__a_ff)) 
                                         + ((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__bm)) 
                                            + (QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout 
                                                                  >> 7U)))))) 
                                        >> 0x20U)))) 
                    & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout 
                       >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_byteen_ext_dc3 
        = (0xffU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_byteen_dc3) 
                    << (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = (((QData)((IData)((0x27U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)))) 
            << 0x26U) | (((QData)((IData)((0x26U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)))) 
                          << 0x25U) | (((QData)((IData)(
                                                        (0x25U 
                                                         == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)))) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         (0x24U 
                                                          == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)))) 
                                         << 0x23U) 
                                        | (((QData)((IData)(
                                                            (0x23U 
                                                             == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)))) 
                                            << 0x22U) 
                                           | (((QData)((IData)(
                                                               (0x22U 
                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)))) 
                                               << 0x21U) 
                                              | (((QData)((IData)(
                                                                  (0x21U 
                                                                   == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (((0x20U 
                                                                      == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                     << 0x1fU) 
                                                                    | (((0x1fU 
                                                                         == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                        << 0x1eU) 
                                                                       | (((0x1eU 
                                                                            == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                           << 0x1dU) 
                                                                          | (((0x1dU 
                                                                               == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                              << 0x1cU) 
                                                                             | (((0x1cU 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0x1aU) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0x19U) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0x18U) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0x17U) 
                                                                                | (((0x17U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0x16U) 
                                                                                | (((0x16U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0x15U) 
                                                                                | (((0x15U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0x14U) 
                                                                                | (((0x14U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0x13U) 
                                                                                | (((0x13U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0x12U) 
                                                                                | (((0x12U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0x11U) 
                                                                                | (((0x11U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0x10U) 
                                                                                | (((0x10U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0xfU) 
                                                                                | (((0xfU 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0xeU) 
                                                                                | (((0xeU 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0xdU) 
                                                                                | (((0xdU 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0xcU) 
                                                                                | (((0xcU 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0xbU) 
                                                                                | (((0xbU 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0xaU) 
                                                                                | (((0xaU 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 9U) 
                                                                                | (((9U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 8U) 
                                                                                | (((8U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 7U) 
                                                                                | (((7U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 6U) 
                                                                                | (((6U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 5U) 
                                                                                | (((5U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 4U) 
                                                                                | (((4U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 3U) 
                                                                                | (((3U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 2U) 
                                                                                | (((2U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0))))))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = (((QData)((IData)((0x27U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)))) 
            << 0x26U) | (((QData)((IData)((0x26U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)))) 
                          << 0x25U) | (((QData)((IData)(
                                                        (0x25U 
                                                         == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)))) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         (0x24U 
                                                          == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)))) 
                                         << 0x23U) 
                                        | (((QData)((IData)(
                                                            (0x23U 
                                                             == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)))) 
                                            << 0x22U) 
                                           | (((QData)((IData)(
                                                               (0x22U 
                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)))) 
                                               << 0x21U) 
                                              | (((QData)((IData)(
                                                                  (0x21U 
                                                                   == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (((0x20U 
                                                                      == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                     << 0x1fU) 
                                                                    | (((0x1fU 
                                                                         == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                        << 0x1eU) 
                                                                       | (((0x1eU 
                                                                            == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                           << 0x1dU) 
                                                                          | (((0x1dU 
                                                                               == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                              << 0x1cU) 
                                                                             | (((0x1cU 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0x1aU) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0x19U) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0x18U) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0x17U) 
                                                                                | (((0x17U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0x16U) 
                                                                                | (((0x16U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0x15U) 
                                                                                | (((0x15U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0x14U) 
                                                                                | (((0x14U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0x13U) 
                                                                                | (((0x13U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0x12U) 
                                                                                | (((0x12U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0x11U) 
                                                                                | (((0x11U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0x10U) 
                                                                                | (((0x10U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0xfU) 
                                                                                | (((0xfU 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0xeU) 
                                                                                | (((0xeU 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0xdU) 
                                                                                | (((0xdU 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0xcU) 
                                                                                | (((0xcU 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0xbU) 
                                                                                | (((0xbU 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 0xaU) 
                                                                                | (((0xaU 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 9U) 
                                                                                | (((9U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 8U) 
                                                                                | (((8U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 7U) 
                                                                                | (((7U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 6U) 
                                                                                | (((6U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 5U) 
                                                                                | (((5U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 4U) 
                                                                                | (((4U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 3U) 
                                                                                | (((3U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 2U) 
                                                                                | (((2U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0)) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0))))))))))))))))))))))))))))))))))))))))));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_write) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_tag 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_tag;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_size 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_size;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_addr;
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_tag 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_tag;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_size 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_size;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_addr;
    }
    if (vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_validff__DOT__dffs__DOT____Vcellinp__dffs__din) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__mstr_prtyff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_priority)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_vldff__DOT____Vcellinp__dffs__en 
            = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_write)) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_fifo_ready));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data_vldff__DOT____Vcellinp__dffs__en 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_write;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_posted_write_in 
            = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_write) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_posted));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__mstr_prtyff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_priority));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_vldff__DOT____Vcellinp__dffs__en = 0U;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data_vldff__DOT____Vcellinp__dffs__en = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_posted_write_in = 0U;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid_en 
        = ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_validff__DOT__dffs__DOT____Vcellinp__dffs__din) 
             & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr))) 
            << 3U) | ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_validff__DOT__dffs__DOT____Vcellinp__dffs__din) 
                        & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr))) 
                       << 2U) | ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_validff__DOT__dffs__DOT____Vcellinp__dffs__din) 
                                   & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr))) 
                                  << 1U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_validff__DOT__dffs__DOT____Vcellinp__dffs__din) 
                                            & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h85a885fe__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_ha996f9ad__0) 
           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
              >> 0x19U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dcsr 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0x14U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hce8f90d2__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dpc 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hce8f90d2__0) 
           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
              >> 0x14U));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h36dd3b26__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0x16U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h68ca79cb__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4fa68a75__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0x19U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h6d39a228__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mtdata1 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h87244f19__0) 
           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
              >> 0x14U));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hd7a12af5__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4c803ade__0) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h317d9b29__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hedd1198b__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4c803ade__0) 
           & (IData)((0x8800000U == (0xb800000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h10c8e70c__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h68aefd2e__0) 
           & (IData)(((0U == (0xe000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)) 
                      & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_heccc3437__0))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_flush_npc_e4 
        = (1U & ((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 0x11U)) & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_noredir_wb)) 
                                   & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                      >> 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__halt_taken 
        = (1U & (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_flush_pause_wb)) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_noredir_wb)) 
                 | (IData)((((0x200000U == (0x220000U 
                                            & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)) 
                             & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                   >> 2U))) & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                  >> 0xeU))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtrEn 
        = (1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid) 
                  >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr)) 
                 & (((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__dout) 
                       << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__dout) 
                                  << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__dout) 
                                             << 1U) 
                                            | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__dout)))) 
                     >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr)) 
                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_slv_write) 
                       | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_valid) 
                           >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr)) 
                          | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dbg_cmd_fail))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_req 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid) 
            >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)) 
           & ((~ ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_rpend_dff__dout) 
                    << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_rpend_dff__dout) 
                               << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_rpend_dff__dout) 
                                          << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_rpend_dff__dout)))) 
                  >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
              & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____VdfgTmp_h6895f74d__0) 
                 & ((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____VdfgTmp_hf12ec1e3__0)) 
                    & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_write)) 
                       | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_valid) 
                          >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hec11fb34__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__is_ldst_dc3) 
            & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                   >> 8U)) & ((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3 
                                     >> 2U)) != (1U 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc3 
                                                    >> 2U))))) 
           & (0U != (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hda6ef834__0) 
                      << 6U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hec11fb34__0 
        = (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                >> 8U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__is_ldst_dc3)) 
           & (0U != (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hda6ef834__0) 
                      << 6U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0))));
    __Vtemp_hfa0e400e__0[0U] = (IData)((((QData)((IData)(
                                                         (0xffU 
                                                          & ((- (IData)(
                                                                        (1U 
                                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                                                            >> 7U)))) 
                                                             & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__dout 
                                                                >> 0x18U))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                                                               >> 6U)))) 
                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__dout 
                                                                   >> 0x10U))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                                                                >> 5U)))) 
                                                                   & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__dout 
                                                                      >> 8U))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                                                                >> 4U)))) 
                                                                      & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__dout)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((0xff000000U 
                                                                     & (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                                                                >> 3U)))) 
                                                                         << 0x18U) 
                                                                        & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__dout)) 
                                                                    | ((0xff0000U 
                                                                        & (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                                                                >> 2U)))) 
                                                                            << 0x10U) 
                                                                           & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__dout)) 
                                                                       | ((0xff00U 
                                                                           & (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                                                                >> 1U)))) 
                                                                               << 8U) 
                                                                              & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__dout)) 
                                                                          | (0xffU 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi))) 
                                                                                & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__dout))))))))))));
    __Vtemp_hfa0e400e__0[1U] = (IData)(((((QData)((IData)(
                                                          (0xffU 
                                                           & ((- (IData)(
                                                                         (1U 
                                                                          & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                                                             >> 7U)))) 
                                                              & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__dout 
                                                                 >> 0x18U))))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & ((- (IData)(
                                                                            (1U 
                                                                             & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                                                                >> 6U)))) 
                                                                 & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__dout 
                                                                    >> 0x10U))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                                                                >> 5U)))) 
                                                                    & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__dout 
                                                                       >> 8U))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                                                                >> 4U)))) 
                                                                       & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__dout)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xff000000U 
                                                                      & (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                                                                >> 3U)))) 
                                                                          << 0x18U) 
                                                                         & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__dout)) 
                                                                     | ((0xff0000U 
                                                                         & (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                                                                >> 2U)))) 
                                                                             << 0x10U) 
                                                                            & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__dout)) 
                                                                        | ((0xff00U 
                                                                            & (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                                                                >> 1U)))) 
                                                                                << 8U) 
                                                                               & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__dout)) 
                                                                           | (0xffU 
                                                                              & ((- (IData)(
                                                                                (1U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi))) 
                                                                                & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__dout))))))))))) 
                                        >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddatavec_hi[0U] 
        = __Vtemp_hfa0e400e__0[0U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddatavec_hi[1U] 
        = __Vtemp_hfa0e400e__0[1U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddatavec_hi[2U] 
        = ((0xff000000U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                              >> 0xbU)))) 
                            << 0x18U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_dataff__dout)) 
           | ((0xff0000U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                               >> 0xaU)))) 
                             << 0x10U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_dataff__dout)) 
              | ((0xff00U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                                >> 9U)))) 
                              << 8U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_dataff__dout)) 
                 | (0xffU & ((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                               >> 8U)))) 
                             & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_dataff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddatavec_hi[3U] 
        = ((0xff000000U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                              >> 0xfU)))) 
                            << 0x18U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_dataff__dout)) 
           | ((0xff0000U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                               >> 0xeU)))) 
                             << 0x10U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_dataff__dout)) 
              | ((0xff00U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                                >> 0xdU)))) 
                              << 8U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_dataff__dout)) 
                 | (0xffU & ((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                               >> 0xcU)))) 
                             & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_dataff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddatavec_hi[4U] 
        = ((0xff000000U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                              >> 0x13U)))) 
                            << 0x18U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_dataff__dout)) 
           | ((0xff0000U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                               >> 0x12U)))) 
                             << 0x10U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_dataff__dout)) 
              | ((0xff00U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                                >> 0x11U)))) 
                              << 8U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_dataff__dout)) 
                 | (0xffU & ((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                               >> 0x10U)))) 
                             & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_dataff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddatavec_hi[5U] 
        = ((0xff000000U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                              >> 0x17U)))) 
                            << 0x18U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_dataff__dout)) 
           | ((0xff0000U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                               >> 0x16U)))) 
                             << 0x10U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_dataff__dout)) 
              | ((0xff00U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                                >> 0x15U)))) 
                              << 8U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_dataff__dout)) 
                 | (0xffU & ((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                               >> 0x14U)))) 
                             & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_dataff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddatavec_hi[6U] 
        = ((0xff000000U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                              >> 0x1bU)))) 
                            << 0x18U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_dataff__dout)) 
           | ((0xff0000U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                               >> 0x1aU)))) 
                             << 0x10U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_dataff__dout)) 
              | ((0xff00U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                                >> 0x19U)))) 
                              << 8U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_dataff__dout)) 
                 | (0xffU & ((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                               >> 0x18U)))) 
                             & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_dataff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddatavec_hi[7U] 
        = ((0xff000000U & (((- (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                        >> 0x1fU))) 
                            << 0x18U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_dataff__dout)) 
           | ((0xff0000U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                               >> 0x1eU)))) 
                             << 0x10U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_dataff__dout)) 
              | ((0xff00U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                                >> 0x1dU)))) 
                              << 8U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_dataff__dout)) 
                 | (0xffU & ((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                               >> 0x1cU)))) 
                             & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_dataff__dout)))));
    __Vtemp_h0e209346__0[0U] = (IData)((((QData)((IData)(
                                                         (0xffU 
                                                          & ((- (IData)(
                                                                        (1U 
                                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                                                            >> 7U)))) 
                                                             & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__dout 
                                                                >> 0x18U))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                                                               >> 6U)))) 
                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__dout 
                                                                   >> 0x10U))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                                                                >> 5U)))) 
                                                                   & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__dout 
                                                                      >> 8U))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                                                                >> 4U)))) 
                                                                      & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__dout)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((0xff000000U 
                                                                     & (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                                                                >> 3U)))) 
                                                                         << 0x18U) 
                                                                        & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__dout)) 
                                                                    | ((0xff0000U 
                                                                        & (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                                                                >> 2U)))) 
                                                                            << 0x10U) 
                                                                           & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__dout)) 
                                                                       | ((0xff00U 
                                                                           & (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                                                                >> 1U)))) 
                                                                               << 8U) 
                                                                              & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__dout)) 
                                                                          | (0xffU 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo))) 
                                                                                & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__dout))))))))))));
    __Vtemp_h0e209346__0[1U] = (IData)(((((QData)((IData)(
                                                          (0xffU 
                                                           & ((- (IData)(
                                                                         (1U 
                                                                          & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                                                             >> 7U)))) 
                                                              & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__dout 
                                                                 >> 0x18U))))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & ((- (IData)(
                                                                            (1U 
                                                                             & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                                                                >> 6U)))) 
                                                                 & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__dout 
                                                                    >> 0x10U))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                                                                >> 5U)))) 
                                                                    & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__dout 
                                                                       >> 8U))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                                                                >> 4U)))) 
                                                                       & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__dout)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xff000000U 
                                                                      & (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                                                                >> 3U)))) 
                                                                          << 0x18U) 
                                                                         & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__dout)) 
                                                                     | ((0xff0000U 
                                                                         & (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                                                                >> 2U)))) 
                                                                             << 0x10U) 
                                                                            & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__dout)) 
                                                                        | ((0xff00U 
                                                                            & (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                                                                >> 1U)))) 
                                                                                << 8U) 
                                                                               & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__dout)) 
                                                                           | (0xffU 
                                                                              & ((- (IData)(
                                                                                (1U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo))) 
                                                                                & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__dout))))))))))) 
                                        >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddatavec_lo[0U] 
        = __Vtemp_h0e209346__0[0U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddatavec_lo[1U] 
        = __Vtemp_h0e209346__0[1U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddatavec_lo[2U] 
        = ((0xff000000U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                              >> 0xbU)))) 
                            << 0x18U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_dataff__dout)) 
           | ((0xff0000U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                               >> 0xaU)))) 
                             << 0x10U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_dataff__dout)) 
              | ((0xff00U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                                >> 9U)))) 
                              << 8U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_dataff__dout)) 
                 | (0xffU & ((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                               >> 8U)))) 
                             & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_dataff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddatavec_lo[3U] 
        = ((0xff000000U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                              >> 0xfU)))) 
                            << 0x18U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_dataff__dout)) 
           | ((0xff0000U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                               >> 0xeU)))) 
                             << 0x10U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_dataff__dout)) 
              | ((0xff00U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                                >> 0xdU)))) 
                              << 8U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_dataff__dout)) 
                 | (0xffU & ((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                               >> 0xcU)))) 
                             & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_dataff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddatavec_lo[4U] 
        = ((0xff000000U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                              >> 0x13U)))) 
                            << 0x18U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_dataff__dout)) 
           | ((0xff0000U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                               >> 0x12U)))) 
                             << 0x10U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_dataff__dout)) 
              | ((0xff00U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                                >> 0x11U)))) 
                              << 8U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_dataff__dout)) 
                 | (0xffU & ((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                               >> 0x10U)))) 
                             & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_dataff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddatavec_lo[5U] 
        = ((0xff000000U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                              >> 0x17U)))) 
                            << 0x18U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_dataff__dout)) 
           | ((0xff0000U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                               >> 0x16U)))) 
                             << 0x10U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_dataff__dout)) 
              | ((0xff00U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                                >> 0x15U)))) 
                              << 8U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_dataff__dout)) 
                 | (0xffU & ((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                               >> 0x14U)))) 
                             & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_dataff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddatavec_lo[6U] 
        = ((0xff000000U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                              >> 0x1bU)))) 
                            << 0x18U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_dataff__dout)) 
           | ((0xff0000U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                               >> 0x1aU)))) 
                             << 0x10U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_dataff__dout)) 
              | ((0xff00U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                                >> 0x19U)))) 
                              << 8U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_dataff__dout)) 
                 | (0xffU & ((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                               >> 0x18U)))) 
                             & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_dataff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddatavec_lo[7U] 
        = ((0xff000000U & (((- (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                        >> 0x1fU))) 
                            << 0x18U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_dataff__dout)) 
           | ((0xff0000U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                               >> 0x1eU)))) 
                             << 0x10U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_dataff__dout)) 
              | ((0xff00U & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                                >> 0x1dU)))) 
                              << 8U) & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_dataff__dout)) 
                 | (0xffU & ((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                               >> 0x1cU)))) 
                             & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_dataff__dout)))));
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
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_result_dc3 
        = ((0xffU & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____VdfgTmp_h95babc3b__0 
                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_ld_datafn_dc3)) 
           | ((0xffffU & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____VdfgTmp_h94d6637d__0 
                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_ld_datafn_dc3)) 
              | ((vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____VdfgTmp_h3ecf5b77__0 
                  & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_ld_datafn_dc3 
                                        >> 7U)))) << 8U) 
                     | (0xffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_ld_datafn_dc3))) 
                 | ((vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____VdfgTmp_hf0c682d7__0 
                     & (((- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_ld_datafn_dc3 
                                           >> 0xfU)))) 
                         << 0x10U) | (0xffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_ld_datafn_dc3))) 
                    | ((- (IData)((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout 
                                         >> 0xfU)))) 
                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_ld_datafn_dc3)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i1_match__DOT__matchvec 
        = ((((IData)(vlSelf->__VdfgTmp_he58be140__0) 
             | ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                 >> 0x1fU) == (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                               >> 0x1fU))) << 0x1fU) 
           | ((((IData)(vlSelf->__VdfgTmp_he58a7551__0) 
                | ((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                          >> 0x1eU)) == (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                               >> 0x1eU)))) 
               << 0x1eU) | ((((IData)(vlSelf->__VdfgTmp_he63416e4__0) 
                              | ((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                        >> 0x1dU)) 
                                 == (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                           >> 0x1dU)))) 
                             << 0x1dU) | ((((IData)(vlSelf->__VdfgTmp_he59599f5__0) 
                                            | ((1U 
                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                   >> 0x1cU)) 
                                               == (1U 
                                                   & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                      >> 0x1cU)))) 
                                           << 0x1cU) 
                                          | ((((IData)(vlSelf->__VdfgTmp_he595a744__0) 
                                               | ((1U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                      >> 0x1bU)) 
                                                  == 
                                                  (1U 
                                                   & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                      >> 0x1bU)))) 
                                              << 0x1bU) 
                                             | ((((IData)(vlSelf->__VdfgTmp_he6346ad5__0) 
                                                  | ((1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                         >> 0x1aU)) 
                                                     == 
                                                     (1U 
                                                      & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                         >> 0x1aU)))) 
                                                 << 0x1aU) 
                                                | ((((IData)(vlSelf->__VdfgTmp_he63457ec__0) 
                                                     | ((1U 
                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                            >> 0x19U)) 
                                                        == 
                                                        (1U 
                                                         & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                            >> 0x19U)))) 
                                                    << 0x19U) 
                                                   | ((((IData)(vlSelf->__VdfgTmp_he634c97d__0) 
                                                        | ((1U 
                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                               >> 0x18U)) 
                                                           == 
                                                           (1U 
                                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                               >> 0x18U)))) 
                                                       << 0x18U) 
                                                      | ((((IData)(vlSelf->__VdfgTmp_he6342c66__0) 
                                                           | ((1U 
                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                  >> 0x17U)) 
                                                              == 
                                                              (1U 
                                                               & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                                  >> 0x17U)))) 
                                                          << 0x17U) 
                                                         | ((((IData)(vlSelf->__VdfgTmp_he5958257__0) 
                                                              | ((1U 
                                                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                     >> 0x16U)) 
                                                                 == 
                                                                 (1U 
                                                                  & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                                     >> 0x16U)))) 
                                                             << 0x16U) 
                                                            | ((((IData)(vlSelf->__VdfgTmp_he58a8ee6__0) 
                                                                 | ((1U 
                                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                        >> 0x15U)) 
                                                                    == 
                                                                    (1U 
                                                                     & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                                        >> 0x15U)))) 
                                                                << 0x15U) 
                                                               | ((((IData)(vlSelf->__VdfgTmp_he58b1df7__0) 
                                                                    | ((1U 
                                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                           >> 0x14U)) 
                                                                       == 
                                                                       (1U 
                                                                        & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                                           >> 0x14U)))) 
                                                                   << 0x14U) 
                                                                  | ((((IData)(vlSelf->__VdfgTmp_he58abd11__0) 
                                                                       | ((1U 
                                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                              >> 0x13U)) 
                                                                          == 
                                                                          (1U 
                                                                           & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                                              >> 0x13U)))) 
                                                                      << 0x13U) 
                                                                     | ((((IData)(vlSelf->__VdfgTmp_he58b4da0__0) 
                                                                          | ((1U 
                                                                              & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0x12U)) 
                                                                             == 
                                                                             (1U 
                                                                              & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                                                >> 0x12U)))) 
                                                                         << 0x12U) 
                                                                        | ((((IData)(vlSelf->__VdfgTmp_he58addb5__0) 
                                                                             | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0x11U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                                                >> 0x11U)))) 
                                                                            << 0x11U) 
                                                                           | ((((IData)(vlSelf->__VdfgTmp_he58aedc4__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0x10U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                                                >> 0x10U)))) 
                                                                               << 0x10U) 
                                                                              | ((((IData)(vlSelf->__VdfgTmp_he6342b17__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0xfU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                                                >> 0xfU)))) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he58c1626__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0xeU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                                                >> 0xeU)))) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he58cb7fb__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0xdU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                                                >> 0xdU)))) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he58c602a__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0xcU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                                                >> 0xcU)))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he58cde3b__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0xbU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                                                >> 0xbU)))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he58c0fca__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0xaU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                                                >> 0xaU)))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he58c71fb__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 9U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                                                >> 9U)))) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he58d23aa__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 8U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                                                >> 8U)))) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he58c9411__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 7U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                                                >> 7U)))) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he582f940__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 6U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                                                >> 6U)))) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he5820ff9__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 5U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                                                >> 5U)))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he58ddc28__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 4U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                                                >> 4U)))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he5826d18__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 3U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                                                >> 3U)))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he58dbcc9__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 2U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                                                >> 2U)))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_hf155bd29__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 1U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
                                                                                >> 1U)))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask) 
                                                                                | ((1U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0) 
                                                                                == 
                                                                                (1U 
                                                                                & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((((IData)(vlSelf->__VdfgTmp_he58be140__0) 
             | ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                 >> 0x1fU) == (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                               >> 0x1fU))) << 0x1fU) 
           | ((((IData)(vlSelf->__VdfgTmp_he58a7551__0) 
                | ((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                          >> 0x1eU)) == (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                               >> 0x1eU)))) 
               << 0x1eU) | ((((IData)(vlSelf->__VdfgTmp_he63416e4__0) 
                              | ((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                        >> 0x1dU)) 
                                 == (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                           >> 0x1dU)))) 
                             << 0x1dU) | ((((IData)(vlSelf->__VdfgTmp_he59599f5__0) 
                                            | ((1U 
                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                   >> 0x1cU)) 
                                               == (1U 
                                                   & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                      >> 0x1cU)))) 
                                           << 0x1cU) 
                                          | ((((IData)(vlSelf->__VdfgTmp_he595a744__0) 
                                               | ((1U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                      >> 0x1bU)) 
                                                  == 
                                                  (1U 
                                                   & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                      >> 0x1bU)))) 
                                              << 0x1bU) 
                                             | ((((IData)(vlSelf->__VdfgTmp_he6346ad5__0) 
                                                  | ((1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                         >> 0x1aU)) 
                                                     == 
                                                     (1U 
                                                      & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                         >> 0x1aU)))) 
                                                 << 0x1aU) 
                                                | ((((IData)(vlSelf->__VdfgTmp_he63457ec__0) 
                                                     | ((1U 
                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                            >> 0x19U)) 
                                                        == 
                                                        (1U 
                                                         & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                            >> 0x19U)))) 
                                                    << 0x19U) 
                                                   | ((((IData)(vlSelf->__VdfgTmp_he634c97d__0) 
                                                        | ((1U 
                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                               >> 0x18U)) 
                                                           == 
                                                           (1U 
                                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                               >> 0x18U)))) 
                                                       << 0x18U) 
                                                      | ((((IData)(vlSelf->__VdfgTmp_he6342c66__0) 
                                                           | ((1U 
                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                  >> 0x17U)) 
                                                              == 
                                                              (1U 
                                                               & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                                  >> 0x17U)))) 
                                                          << 0x17U) 
                                                         | ((((IData)(vlSelf->__VdfgTmp_he5958257__0) 
                                                              | ((1U 
                                                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                     >> 0x16U)) 
                                                                 == 
                                                                 (1U 
                                                                  & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                                     >> 0x16U)))) 
                                                             << 0x16U) 
                                                            | ((((IData)(vlSelf->__VdfgTmp_he58a8ee6__0) 
                                                                 | ((1U 
                                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                        >> 0x15U)) 
                                                                    == 
                                                                    (1U 
                                                                     & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                                        >> 0x15U)))) 
                                                                << 0x15U) 
                                                               | ((((IData)(vlSelf->__VdfgTmp_he58b1df7__0) 
                                                                    | ((1U 
                                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                           >> 0x14U)) 
                                                                       == 
                                                                       (1U 
                                                                        & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                                           >> 0x14U)))) 
                                                                   << 0x14U) 
                                                                  | ((((IData)(vlSelf->__VdfgTmp_he58abd11__0) 
                                                                       | ((1U 
                                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                              >> 0x13U)) 
                                                                          == 
                                                                          (1U 
                                                                           & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                                              >> 0x13U)))) 
                                                                      << 0x13U) 
                                                                     | ((((IData)(vlSelf->__VdfgTmp_he58b4da0__0) 
                                                                          | ((1U 
                                                                              & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0x12U)) 
                                                                             == 
                                                                             (1U 
                                                                              & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                                                >> 0x12U)))) 
                                                                         << 0x12U) 
                                                                        | ((((IData)(vlSelf->__VdfgTmp_he58addb5__0) 
                                                                             | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0x11U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                                                >> 0x11U)))) 
                                                                            << 0x11U) 
                                                                           | ((((IData)(vlSelf->__VdfgTmp_he58aedc4__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0x10U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                                                >> 0x10U)))) 
                                                                               << 0x10U) 
                                                                              | ((((IData)(vlSelf->__VdfgTmp_he6342b17__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0xfU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                                                >> 0xfU)))) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he58c1626__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0xeU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                                                >> 0xeU)))) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he58cb7fb__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0xdU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                                                >> 0xdU)))) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he58c602a__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0xcU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                                                >> 0xcU)))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he58cde3b__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0xbU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                                                >> 0xbU)))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he58c0fca__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0xaU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                                                >> 0xaU)))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he58c71fb__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 9U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                                                >> 9U)))) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he58d23aa__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 8U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                                                >> 8U)))) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he58c9411__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 7U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                                                >> 7U)))) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he582f940__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 6U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                                                >> 6U)))) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he5820ff9__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 5U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                                                >> 5U)))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he58ddc28__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 4U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                                                >> 4U)))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he5826d18__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 3U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                                                >> 3U)))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he58dbcc9__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 2U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                                                >> 2U)))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_hf155bd29__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 1U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
                                                                                >> 1U)))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask) 
                                                                                | ((1U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0) 
                                                                                == 
                                                                                (1U 
                                                                                & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i1_match__DOT__matchvec 
        = ((((IData)(vlSelf->__VdfgTmp_h6a5fed97__0) 
             | ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                 >> 0x1fU) == (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                               >> 0x1fU))) << 0x1fU) 
           | ((((IData)(vlSelf->__VdfgTmp_h6a5f9ca6__0) 
                | ((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                          >> 0x1eU)) == (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                               >> 0x1eU)))) 
               << 0x1eU) | ((((IData)(vlSelf->__VdfgTmp_h6a5fb273__0) 
                              | ((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                        >> 0x1dU)) 
                                 == (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                           >> 0x1dU)))) 
                             << 0x1dU) | ((((IData)(vlSelf->__VdfgTmp_h6a50e682__0) 
                                            | ((1U 
                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                   >> 0x1cU)) 
                                               == (1U 
                                                   & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                      >> 0x1cU)))) 
                                           << 0x1cU) 
                                          | ((((IData)(vlSelf->__VdfgTmp_h6a501a92__0) 
                                               | ((1U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                      >> 0x1bU)) 
                                                  == 
                                                  (1U 
                                                   & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                      >> 0x1bU)))) 
                                              << 0x1bU) 
                                             | ((((IData)(vlSelf->__VdfgTmp_h6a51c923__0) 
                                                  | ((1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                         >> 0x1aU)) 
                                                     == 
                                                     (1U 
                                                      & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                         >> 0x1aU)))) 
                                                 << 0x1aU) 
                                                | ((((IData)(vlSelf->__VdfgTmp_h6a51fb76__0) 
                                                     | ((1U 
                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                            >> 0x19U)) 
                                                        == 
                                                        (1U 
                                                         & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                            >> 0x19U)))) 
                                                    << 0x19U) 
                                                   | ((((IData)(vlSelf->__VdfgTmp_h6a503707__0) 
                                                        | ((1U 
                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                               >> 0x18U)) 
                                                           == 
                                                           (1U 
                                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                               >> 0x18U)))) 
                                                       << 0x18U) 
                                                      | ((((IData)(vlSelf->__VdfgTmp_h6a500be4__0) 
                                                           | ((1U 
                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                  >> 0x17U)) 
                                                              == 
                                                              (1U 
                                                               & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                                  >> 0x17U)))) 
                                                          << 0x17U) 
                                                         | ((((IData)(vlSelf->__VdfgTmp_h6a503b35__0) 
                                                              | ((1U 
                                                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                     >> 0x16U)) 
                                                                 == 
                                                                 (1U 
                                                                  & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                                     >> 0x16U)))) 
                                                             << 0x16U) 
                                                            | ((((IData)(vlSelf->__VdfgTmp_h6a5fa860__0) 
                                                                 | ((1U 
                                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                        >> 0x15U)) 
                                                                    == 
                                                                    (1U 
                                                                     & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                                        >> 0x15U)))) 
                                                                << 0x15U) 
                                                               | ((((IData)(vlSelf->__VdfgTmp_h6a5f9991__0) 
                                                                    | ((1U 
                                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                           >> 0x14U)) 
                                                                       == 
                                                                       (1U 
                                                                        & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                                           >> 0x14U)))) 
                                                                   << 0x14U) 
                                                                  | ((((IData)(vlSelf->__VdfgTmp_h6a5e41e0__0) 
                                                                       | ((1U 
                                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                              >> 0x13U)) 
                                                                          == 
                                                                          (1U 
                                                                           & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                                              >> 0x13U)))) 
                                                                      << 0x13U) 
                                                                     | ((((IData)(vlSelf->__VdfgTmp_h6a5e0eb1__0) 
                                                                          | ((1U 
                                                                              & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0x12U)) 
                                                                             == 
                                                                             (1U 
                                                                              & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                                                >> 0x12U)))) 
                                                                         << 0x12U) 
                                                                        | ((((IData)(vlSelf->__VdfgTmp_h6a5ebfd8__0) 
                                                                             | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0x11U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                                                >> 0x11U)))) 
                                                                            << 0x11U) 
                                                                           | ((((IData)(vlSelf->__VdfgTmp_h6a5ece09__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0x10U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                                                >> 0x10U)))) 
                                                                               << 0x10U) 
                                                                              | ((((IData)(vlSelf->__VdfgTmp_h6a5e9af2__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0xfU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                                                >> 0xfU)))) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6a5eaa23__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0xeU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                                                >> 0xeU)))) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6a5fe0da__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0xdU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                                                >> 0xdU)))) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6a5e138b__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0xcU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                                                >> 0xcU)))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6a5f1a99__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0xbU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                                                >> 0xbU)))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6a508988__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0xaU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                                                >> 0xaU)))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6a50ff25__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 9U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                                                >> 9U)))) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6a5f6234__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 8U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                                                >> 8U)))) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6a5f589f__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 7U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                                                >> 7U)))) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6a5fc90e__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 6U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                                                >> 6U)))) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6a5f3e33__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 5U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                                                >> 5U)))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6a5eb7a2__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 4U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                                                >> 4U)))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6bb1999b__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 3U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                                                >> 3U)))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6bb02e8a__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 2U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                                                >> 2U)))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h89ec5b3d__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 1U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
                                                                                >> 1U)))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask) 
                                                                                | ((1U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1) 
                                                                                == 
                                                                                (1U 
                                                                                & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((((IData)(vlSelf->__VdfgTmp_h6a5fed97__0) 
             | ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                 >> 0x1fU) == (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                               >> 0x1fU))) << 0x1fU) 
           | ((((IData)(vlSelf->__VdfgTmp_h6a5f9ca6__0) 
                | ((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                          >> 0x1eU)) == (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                               >> 0x1eU)))) 
               << 0x1eU) | ((((IData)(vlSelf->__VdfgTmp_h6a5fb273__0) 
                              | ((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                        >> 0x1dU)) 
                                 == (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                           >> 0x1dU)))) 
                             << 0x1dU) | ((((IData)(vlSelf->__VdfgTmp_h6a50e682__0) 
                                            | ((1U 
                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                   >> 0x1cU)) 
                                               == (1U 
                                                   & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                      >> 0x1cU)))) 
                                           << 0x1cU) 
                                          | ((((IData)(vlSelf->__VdfgTmp_h6a501a92__0) 
                                               | ((1U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                      >> 0x1bU)) 
                                                  == 
                                                  (1U 
                                                   & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                      >> 0x1bU)))) 
                                              << 0x1bU) 
                                             | ((((IData)(vlSelf->__VdfgTmp_h6a51c923__0) 
                                                  | ((1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                         >> 0x1aU)) 
                                                     == 
                                                     (1U 
                                                      & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                         >> 0x1aU)))) 
                                                 << 0x1aU) 
                                                | ((((IData)(vlSelf->__VdfgTmp_h6a51fb76__0) 
                                                     | ((1U 
                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                            >> 0x19U)) 
                                                        == 
                                                        (1U 
                                                         & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                            >> 0x19U)))) 
                                                    << 0x19U) 
                                                   | ((((IData)(vlSelf->__VdfgTmp_h6a503707__0) 
                                                        | ((1U 
                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                               >> 0x18U)) 
                                                           == 
                                                           (1U 
                                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                               >> 0x18U)))) 
                                                       << 0x18U) 
                                                      | ((((IData)(vlSelf->__VdfgTmp_h6a500be4__0) 
                                                           | ((1U 
                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                  >> 0x17U)) 
                                                              == 
                                                              (1U 
                                                               & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                                  >> 0x17U)))) 
                                                          << 0x17U) 
                                                         | ((((IData)(vlSelf->__VdfgTmp_h6a503b35__0) 
                                                              | ((1U 
                                                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                     >> 0x16U)) 
                                                                 == 
                                                                 (1U 
                                                                  & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                                     >> 0x16U)))) 
                                                             << 0x16U) 
                                                            | ((((IData)(vlSelf->__VdfgTmp_h6a5fa860__0) 
                                                                 | ((1U 
                                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                        >> 0x15U)) 
                                                                    == 
                                                                    (1U 
                                                                     & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                                        >> 0x15U)))) 
                                                                << 0x15U) 
                                                               | ((((IData)(vlSelf->__VdfgTmp_h6a5f9991__0) 
                                                                    | ((1U 
                                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                           >> 0x14U)) 
                                                                       == 
                                                                       (1U 
                                                                        & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                                           >> 0x14U)))) 
                                                                   << 0x14U) 
                                                                  | ((((IData)(vlSelf->__VdfgTmp_h6a5e41e0__0) 
                                                                       | ((1U 
                                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                              >> 0x13U)) 
                                                                          == 
                                                                          (1U 
                                                                           & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                                              >> 0x13U)))) 
                                                                      << 0x13U) 
                                                                     | ((((IData)(vlSelf->__VdfgTmp_h6a5e0eb1__0) 
                                                                          | ((1U 
                                                                              & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0x12U)) 
                                                                             == 
                                                                             (1U 
                                                                              & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                                                >> 0x12U)))) 
                                                                         << 0x12U) 
                                                                        | ((((IData)(vlSelf->__VdfgTmp_h6a5ebfd8__0) 
                                                                             | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0x11U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                                                >> 0x11U)))) 
                                                                            << 0x11U) 
                                                                           | ((((IData)(vlSelf->__VdfgTmp_h6a5ece09__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0x10U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                                                >> 0x10U)))) 
                                                                               << 0x10U) 
                                                                              | ((((IData)(vlSelf->__VdfgTmp_h6a5e9af2__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0xfU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                                                >> 0xfU)))) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6a5eaa23__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0xeU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                                                >> 0xeU)))) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6a5fe0da__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0xdU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                                                >> 0xdU)))) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6a5e138b__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0xcU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                                                >> 0xcU)))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6a5f1a99__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0xbU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                                                >> 0xbU)))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6a508988__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0xaU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                                                >> 0xaU)))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6a50ff25__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 9U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                                                >> 9U)))) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6a5f6234__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 8U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                                                >> 8U)))) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6a5f589f__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 7U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                                                >> 7U)))) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6a5fc90e__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 6U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                                                >> 6U)))) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6a5f3e33__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 5U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                                                >> 5U)))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6a5eb7a2__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 4U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                                                >> 4U)))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6bb1999b__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 3U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                                                >> 3U)))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h6bb02e8a__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 2U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                                                >> 2U)))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h89ec5b3d__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 1U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
                                                                                >> 1U)))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask) 
                                                                                | ((1U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1) 
                                                                                == 
                                                                                (1U 
                                                                                & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i1_match__DOT__matchvec 
        = ((((IData)(vlSelf->__VdfgTmp_h4f271c44__0) 
             | ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                 >> 0x1fU) == (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                               >> 0x1fU))) << 0x1fU) 
           | ((((IData)(vlSelf->__VdfgTmp_h4f3c00d5__0) 
                | ((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                          >> 0x1eU)) == (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                               >> 0x1eU)))) 
               << 0x1eU) | ((((IData)(vlSelf->__VdfgTmp_h4f3c95e0__0) 
                              | ((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                        >> 0x1dU)) 
                                 == (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                           >> 0x1dU)))) 
                             << 0x1dU) | ((((IData)(vlSelf->__VdfgTmp_h4f3ce471__0) 
                                            | ((1U 
                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                   >> 0x1cU)) 
                                               == (1U 
                                                   & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                      >> 0x1cU)))) 
                                           << 0x1cU) 
                                          | ((((IData)(vlSelf->__VdfgTmp_h4f3c4117__0) 
                                               | ((1U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                      >> 0x1bU)) 
                                                  == 
                                                  (1U 
                                                   & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                      >> 0x1bU)))) 
                                              << 0x1bU) 
                                             | ((((IData)(vlSelf->__VdfgTmp_h4f3dd026__0) 
                                                  | ((1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                         >> 0x1aU)) 
                                                     == 
                                                     (1U 
                                                      & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                         >> 0x1aU)))) 
                                                 << 0x1aU) 
                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3c3e77__0) 
                                                     | ((1U 
                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                            >> 0x19U)) 
                                                        == 
                                                        (1U 
                                                         & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                            >> 0x19U)))) 
                                                    << 0x19U) 
                                                   | ((((IData)(vlSelf->__VdfgTmp_h4f3c88e6__0) 
                                                        | ((1U 
                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                               >> 0x18U)) 
                                                           == 
                                                           (1U 
                                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                               >> 0x18U)))) 
                                                       << 0x18U) 
                                                      | ((((IData)(vlSelf->__VdfgTmp_h4f0e0a1d__0) 
                                                           | ((1U 
                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                  >> 0x17U)) 
                                                              == 
                                                              (1U 
                                                               & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                                  >> 0x17U)))) 
                                                          << 0x17U) 
                                                         | ((((IData)(vlSelf->__VdfgTmp_h4f0f78ac__0) 
                                                              | ((1U 
                                                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                     >> 0x16U)) 
                                                                 == 
                                                                 (1U 
                                                                  & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                                     >> 0x16U)))) 
                                                             << 0x16U) 
                                                            | ((((IData)(vlSelf->__VdfgTmp_h4f0f6bb5__0) 
                                                                 | ((1U 
                                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                        >> 0x15U)) 
                                                                    == 
                                                                    (1U 
                                                                     & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                                        >> 0x15U)))) 
                                                                << 0x15U) 
                                                               | ((((IData)(vlSelf->__VdfgTmp_h4f0ed944__0) 
                                                                    | ((1U 
                                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                           >> 0x14U)) 
                                                                       == 
                                                                       (1U 
                                                                        & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                                           >> 0x14U)))) 
                                                                   << 0x14U) 
                                                                  | ((((IData)(vlSelf->__VdfgTmp_h4f0eca15__0) 
                                                                       | ((1U 
                                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                              >> 0x13U)) 
                                                                          == 
                                                                          (1U 
                                                                           & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                                              >> 0x13U)))) 
                                                                      << 0x13U) 
                                                                     | ((((IData)(vlSelf->__VdfgTmp_h4f0e3b24__0) 
                                                                          | ((1U 
                                                                              & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0x12U)) 
                                                                             == 
                                                                             (1U 
                                                                              & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                                                >> 0x12U)))) 
                                                                         << 0x12U) 
                                                                        | ((((IData)(vlSelf->__VdfgTmp_h4f0e29b1__0) 
                                                                             | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0x11U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                                                >> 0x11U)))) 
                                                                            << 0x11U) 
                                                                           | ((((IData)(vlSelf->__VdfgTmp_h4f3c32c0__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0x10U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                                                >> 0x10U)))) 
                                                                               << 0x10U) 
                                                                              | ((((IData)(vlSelf->__VdfgTmp_h4f3ddd5b__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0xfU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                                                >> 0xfU)))) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3ded8a__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0xeU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                                                >> 0xeU)))) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3defb7__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0xdU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                                                >> 0xdU)))) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3d7146__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0xcU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                                                >> 0xcU)))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3d4116__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0xbU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                                                >> 0xbU)))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f22d027__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0xaU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                                                >> 0xaU)))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3c7e3a__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 9U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                                                >> 9U)))) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3d8ceb__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 8U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                                                >> 8U)))) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3f5a54__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 7U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                                                >> 7U)))) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3f6a85__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 6U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                                                >> 6U)))) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3cba38__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 5U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                                                >> 5U)))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3ccb69__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 4U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                                                >> 4U)))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3c9f50__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 3U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                                                >> 3U)))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3caf01__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 2U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                                                >> 2U)))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he25a4f4a__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 1U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
                                                                                >> 1U)))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask) 
                                                                                | ((1U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2) 
                                                                                == 
                                                                                (1U 
                                                                                & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((((IData)(vlSelf->__VdfgTmp_h4f271c44__0) 
             | ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                 >> 0x1fU) == (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                               >> 0x1fU))) << 0x1fU) 
           | ((((IData)(vlSelf->__VdfgTmp_h4f3c00d5__0) 
                | ((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                          >> 0x1eU)) == (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                               >> 0x1eU)))) 
               << 0x1eU) | ((((IData)(vlSelf->__VdfgTmp_h4f3c95e0__0) 
                              | ((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                        >> 0x1dU)) 
                                 == (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                           >> 0x1dU)))) 
                             << 0x1dU) | ((((IData)(vlSelf->__VdfgTmp_h4f3ce471__0) 
                                            | ((1U 
                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                   >> 0x1cU)) 
                                               == (1U 
                                                   & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                      >> 0x1cU)))) 
                                           << 0x1cU) 
                                          | ((((IData)(vlSelf->__VdfgTmp_h4f3c4117__0) 
                                               | ((1U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                      >> 0x1bU)) 
                                                  == 
                                                  (1U 
                                                   & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                      >> 0x1bU)))) 
                                              << 0x1bU) 
                                             | ((((IData)(vlSelf->__VdfgTmp_h4f3dd026__0) 
                                                  | ((1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                         >> 0x1aU)) 
                                                     == 
                                                     (1U 
                                                      & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                         >> 0x1aU)))) 
                                                 << 0x1aU) 
                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3c3e77__0) 
                                                     | ((1U 
                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                            >> 0x19U)) 
                                                        == 
                                                        (1U 
                                                         & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                            >> 0x19U)))) 
                                                    << 0x19U) 
                                                   | ((((IData)(vlSelf->__VdfgTmp_h4f3c88e6__0) 
                                                        | ((1U 
                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                               >> 0x18U)) 
                                                           == 
                                                           (1U 
                                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                               >> 0x18U)))) 
                                                       << 0x18U) 
                                                      | ((((IData)(vlSelf->__VdfgTmp_h4f0e0a1d__0) 
                                                           | ((1U 
                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                  >> 0x17U)) 
                                                              == 
                                                              (1U 
                                                               & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                                  >> 0x17U)))) 
                                                          << 0x17U) 
                                                         | ((((IData)(vlSelf->__VdfgTmp_h4f0f78ac__0) 
                                                              | ((1U 
                                                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                     >> 0x16U)) 
                                                                 == 
                                                                 (1U 
                                                                  & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                                     >> 0x16U)))) 
                                                             << 0x16U) 
                                                            | ((((IData)(vlSelf->__VdfgTmp_h4f0f6bb5__0) 
                                                                 | ((1U 
                                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                        >> 0x15U)) 
                                                                    == 
                                                                    (1U 
                                                                     & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                                        >> 0x15U)))) 
                                                                << 0x15U) 
                                                               | ((((IData)(vlSelf->__VdfgTmp_h4f0ed944__0) 
                                                                    | ((1U 
                                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                           >> 0x14U)) 
                                                                       == 
                                                                       (1U 
                                                                        & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                                           >> 0x14U)))) 
                                                                   << 0x14U) 
                                                                  | ((((IData)(vlSelf->__VdfgTmp_h4f0eca15__0) 
                                                                       | ((1U 
                                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                              >> 0x13U)) 
                                                                          == 
                                                                          (1U 
                                                                           & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                                              >> 0x13U)))) 
                                                                      << 0x13U) 
                                                                     | ((((IData)(vlSelf->__VdfgTmp_h4f0e3b24__0) 
                                                                          | ((1U 
                                                                              & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0x12U)) 
                                                                             == 
                                                                             (1U 
                                                                              & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                                                >> 0x12U)))) 
                                                                         << 0x12U) 
                                                                        | ((((IData)(vlSelf->__VdfgTmp_h4f0e29b1__0) 
                                                                             | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0x11U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                                                >> 0x11U)))) 
                                                                            << 0x11U) 
                                                                           | ((((IData)(vlSelf->__VdfgTmp_h4f3c32c0__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0x10U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                                                >> 0x10U)))) 
                                                                               << 0x10U) 
                                                                              | ((((IData)(vlSelf->__VdfgTmp_h4f3ddd5b__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0xfU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                                                >> 0xfU)))) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3ded8a__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0xeU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                                                >> 0xeU)))) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3defb7__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0xdU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                                                >> 0xdU)))) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3d7146__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0xcU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                                                >> 0xcU)))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3d4116__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0xbU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                                                >> 0xbU)))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f22d027__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0xaU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                                                >> 0xaU)))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3c7e3a__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 9U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                                                >> 9U)))) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3d8ceb__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 8U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                                                >> 8U)))) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3f5a54__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 7U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                                                >> 7U)))) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3f6a85__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 6U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                                                >> 6U)))) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3cba38__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 5U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                                                >> 5U)))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3ccb69__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 4U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                                                >> 4U)))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3c9f50__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 3U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                                                >> 3U)))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h4f3caf01__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 2U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                                                >> 2U)))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_he25a4f4a__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 1U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
                                                                                >> 1U)))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask) 
                                                                                | ((1U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2) 
                                                                                == 
                                                                                (1U 
                                                                                & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i1_match__DOT__matchvec 
        = ((((IData)(vlSelf->__VdfgTmp_h56fffe27__0) 
             | ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                 >> 0x1fU) == (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                               >> 0x1fU))) << 0x1fU) 
           | ((((IData)(vlSelf->__VdfgTmp_h56ff8ed6__0) 
                | ((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                          >> 0x1eU)) == (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                               >> 0x1eU)))) 
               << 0x1eU) | ((((IData)(vlSelf->__VdfgTmp_h56fcc21b__0) 
                              | ((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                        >> 0x1dU)) 
                                 == (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                           >> 0x1dU)))) 
                             << 0x1dU) | ((((IData)(vlSelf->__VdfgTmp_h56fc12aa__0) 
                                            | ((1U 
                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                   >> 0x1cU)) 
                                               == (1U 
                                                   & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                      >> 0x1cU)))) 
                                           << 0x1cU) 
                                          | ((((IData)(vlSelf->__VdfgTmp_h56fcf58b__0) 
                                               | ((1U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                      >> 0x1bU)) 
                                                  == 
                                                  (1U 
                                                   & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                      >> 0x1bU)))) 
                                              << 0x1bU) 
                                             | ((((IData)(vlSelf->__VdfgTmp_h56fcc53a__0) 
                                                  | ((1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                         >> 0x1aU)) 
                                                     == 
                                                     (1U 
                                                      & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                         >> 0x1aU)))) 
                                                 << 0x1aU) 
                                                | ((((IData)(vlSelf->__VdfgTmp_h56fd061b__0) 
                                                     | ((1U 
                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                            >> 0x19U)) 
                                                        == 
                                                        (1U 
                                                         & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                            >> 0x19U)))) 
                                                    << 0x19U) 
                                                   | ((((IData)(vlSelf->__VdfgTmp_h56f2582a__0) 
                                                        | ((1U 
                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                               >> 0x18U)) 
                                                           == 
                                                           (1U 
                                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                               >> 0x18U)))) 
                                                       << 0x18U) 
                                                      | ((((IData)(vlSelf->__VdfgTmp_h56f358a1__0) 
                                                           | ((1U 
                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                  >> 0x17U)) 
                                                              == 
                                                              (1U 
                                                               & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                                  >> 0x17U)))) 
                                                          << 0x17U) 
                                                         | ((((IData)(vlSelf->__VdfgTmp_h56f26ef0__0) 
                                                              | ((1U 
                                                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                     >> 0x16U)) 
                                                                 == 
                                                                 (1U 
                                                                  & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                                     >> 0x16U)))) 
                                                             << 0x16U) 
                                                            | ((((IData)(vlSelf->__VdfgTmp_h56f23809__0) 
                                                                 | ((1U 
                                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                        >> 0x15U)) 
                                                                    == 
                                                                    (1U 
                                                                     & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                                        >> 0x15U)))) 
                                                                << 0x15U) 
                                                               | ((((IData)(vlSelf->__VdfgTmp_h56f34ed8__0) 
                                                                    | ((1U 
                                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                           >> 0x14U)) 
                                                                       == 
                                                                       (1U 
                                                                        & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                                           >> 0x14U)))) 
                                                                   << 0x14U) 
                                                                  | ((((IData)(vlSelf->__VdfgTmp_h56f29ea8__0) 
                                                                       | ((1U 
                                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                              >> 0x13U)) 
                                                                          == 
                                                                          (1U 
                                                                           & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                                              >> 0x13U)))) 
                                                                      << 0x13U) 
                                                                     | ((((IData)(vlSelf->__VdfgTmp_h56f2ae79__0) 
                                                                          | ((1U 
                                                                              & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0x12U)) 
                                                                             == 
                                                                             (1U 
                                                                              & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                                                >> 0x12U)))) 
                                                                         << 0x12U) 
                                                                        | ((((IData)(vlSelf->__VdfgTmp_h56f37800__0) 
                                                                             | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0x11U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                                                >> 0x11U)))) 
                                                                            << 0x11U) 
                                                                           | ((((IData)(vlSelf->__VdfgTmp_h56fd8c51__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0x10U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                                                >> 0x10U)))) 
                                                                               << 0x10U) 
                                                                              | ((((IData)(vlSelf->__VdfgTmp_h56fd23ce__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0xfU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                                                >> 0xfU)))) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56fcb0ff__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0xeU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                                                >> 0xeU)))) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56fc8e6e__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0xdU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                                                >> 0xdU)))) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56fd1d7f__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0xcU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                                                >> 0xcU)))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56fd63d6__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0xbU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                                                >> 0xbU)))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56fdf147__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0xaU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                                                >> 0xaU)))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56fdf402__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 9U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                                                >> 9U)))) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56f20e53__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 8U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                                                >> 8U)))) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56f396cc__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 7U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                                                >> 7U)))) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56f339fd__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 6U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                                                >> 6U)))) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56f30678__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 5U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                                                >> 5U)))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56f3a969__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 4U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                                                >> 4U)))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56f3dac3__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 3U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                                                >> 3U)))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56f04a52__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 2U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                                                >> 2U)))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h793f19f8__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 1U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
                                                                                >> 1U)))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask) 
                                                                                | ((1U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3) 
                                                                                == 
                                                                                (1U 
                                                                                & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((((IData)(vlSelf->__VdfgTmp_h56fffe27__0) 
             | ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                 >> 0x1fU) == (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                               >> 0x1fU))) << 0x1fU) 
           | ((((IData)(vlSelf->__VdfgTmp_h56ff8ed6__0) 
                | ((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                          >> 0x1eU)) == (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                               >> 0x1eU)))) 
               << 0x1eU) | ((((IData)(vlSelf->__VdfgTmp_h56fcc21b__0) 
                              | ((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                        >> 0x1dU)) 
                                 == (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                           >> 0x1dU)))) 
                             << 0x1dU) | ((((IData)(vlSelf->__VdfgTmp_h56fc12aa__0) 
                                            | ((1U 
                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                   >> 0x1cU)) 
                                               == (1U 
                                                   & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                      >> 0x1cU)))) 
                                           << 0x1cU) 
                                          | ((((IData)(vlSelf->__VdfgTmp_h56fcf58b__0) 
                                               | ((1U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                      >> 0x1bU)) 
                                                  == 
                                                  (1U 
                                                   & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                      >> 0x1bU)))) 
                                              << 0x1bU) 
                                             | ((((IData)(vlSelf->__VdfgTmp_h56fcc53a__0) 
                                                  | ((1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                         >> 0x1aU)) 
                                                     == 
                                                     (1U 
                                                      & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                         >> 0x1aU)))) 
                                                 << 0x1aU) 
                                                | ((((IData)(vlSelf->__VdfgTmp_h56fd061b__0) 
                                                     | ((1U 
                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                            >> 0x19U)) 
                                                        == 
                                                        (1U 
                                                         & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                            >> 0x19U)))) 
                                                    << 0x19U) 
                                                   | ((((IData)(vlSelf->__VdfgTmp_h56f2582a__0) 
                                                        | ((1U 
                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                               >> 0x18U)) 
                                                           == 
                                                           (1U 
                                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                               >> 0x18U)))) 
                                                       << 0x18U) 
                                                      | ((((IData)(vlSelf->__VdfgTmp_h56f358a1__0) 
                                                           | ((1U 
                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                  >> 0x17U)) 
                                                              == 
                                                              (1U 
                                                               & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                                  >> 0x17U)))) 
                                                          << 0x17U) 
                                                         | ((((IData)(vlSelf->__VdfgTmp_h56f26ef0__0) 
                                                              | ((1U 
                                                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                     >> 0x16U)) 
                                                                 == 
                                                                 (1U 
                                                                  & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                                     >> 0x16U)))) 
                                                             << 0x16U) 
                                                            | ((((IData)(vlSelf->__VdfgTmp_h56f23809__0) 
                                                                 | ((1U 
                                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                        >> 0x15U)) 
                                                                    == 
                                                                    (1U 
                                                                     & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                                        >> 0x15U)))) 
                                                                << 0x15U) 
                                                               | ((((IData)(vlSelf->__VdfgTmp_h56f34ed8__0) 
                                                                    | ((1U 
                                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                           >> 0x14U)) 
                                                                       == 
                                                                       (1U 
                                                                        & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                                           >> 0x14U)))) 
                                                                   << 0x14U) 
                                                                  | ((((IData)(vlSelf->__VdfgTmp_h56f29ea8__0) 
                                                                       | ((1U 
                                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                              >> 0x13U)) 
                                                                          == 
                                                                          (1U 
                                                                           & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                                              >> 0x13U)))) 
                                                                      << 0x13U) 
                                                                     | ((((IData)(vlSelf->__VdfgTmp_h56f2ae79__0) 
                                                                          | ((1U 
                                                                              & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0x12U)) 
                                                                             == 
                                                                             (1U 
                                                                              & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                                                >> 0x12U)))) 
                                                                         << 0x12U) 
                                                                        | ((((IData)(vlSelf->__VdfgTmp_h56f37800__0) 
                                                                             | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0x11U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                                                >> 0x11U)))) 
                                                                            << 0x11U) 
                                                                           | ((((IData)(vlSelf->__VdfgTmp_h56fd8c51__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0x10U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                                                >> 0x10U)))) 
                                                                               << 0x10U) 
                                                                              | ((((IData)(vlSelf->__VdfgTmp_h56fd23ce__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0xfU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                                                >> 0xfU)))) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56fcb0ff__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0xeU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                                                >> 0xeU)))) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56fc8e6e__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0xdU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                                                >> 0xdU)))) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56fd1d7f__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0xcU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                                                >> 0xcU)))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56fd63d6__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0xbU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                                                >> 0xbU)))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56fdf147__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0xaU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                                                >> 0xaU)))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56fdf402__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 9U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                                                >> 9U)))) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56f20e53__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 8U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                                                >> 8U)))) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56f396cc__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 7U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                                                >> 7U)))) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56f339fd__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 6U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                                                >> 6U)))) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56f30678__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 5U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                                                >> 5U)))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56f3a969__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 4U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                                                >> 4U)))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56f3dac3__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 3U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                                                >> 3U)))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h56f04a52__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 2U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                                                >> 2U)))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->__VdfgTmp_h793f19f8__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 1U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
                                                                                >> 1U)))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask) 
                                                                                | ((1U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3) 
                                                                                == 
                                                                                (1U 
                                                                                & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data))))))))))))))))))))))))))))))))));
    __Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__in 
        = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U] 
                 >> 0x14U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__Vfuncout 
        = ((7U & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__Vfuncout)) 
           | ((IData)((3U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__in))) 
              << 3U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__Vfuncout 
        = ((0xbU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__Vfuncout)) 
           | ((IData)((2U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__in))) 
              << 2U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__Vfuncout 
        = ((0xdU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__Vfuncout)) 
           | ((IData)((1U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__in))) 
              << 1U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__Vfuncout 
        = ((0xeU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__Vfuncout)) 
           | (IData)((0U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__in))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_bank_decoded 
        = vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__Vfuncout;
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he6a00140__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_haf847cee__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he6ed866b__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_haf84e557__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he73301d5__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac740cb5__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he77217ae__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac3ffbd0__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he77ff05e__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac32b386__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he73d8740__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac4854ee__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he604ae7f__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_haf6b5923__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he744eccc__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac607132__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he73e6614__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac643b28__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he70d5d2a__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac67a194__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he751a6f5__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac46664b__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he706e256__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac689982__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he7156313__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac907a51__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he740c27f__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac60bf23__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he77ae5e7__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac36994b__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he7e27244__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac4198ea__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he7da252e__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf8795574__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he71eac3b__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf879dc8b__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd82b26dd__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf98942a9__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd8641c74__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf9c2da0e__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd8687644__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf9ce125c__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd82ea32e__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf9b52d74__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he7375427__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf896383f__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd8770bd2__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf99d5030__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd8298c1a__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf9999a36__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd83edaf8__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf99ae04a__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd84a4dbd__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf9bb5f97__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd831005c__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf995f860__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd8068703__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf96d5b8d__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd87b6027__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf99c163f__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd86d028f__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf9cbf897__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hd815f02a__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf9bcf978__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he4df9249__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf9dd6a35__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he41a1ab4__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf9c2949e__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he53093da__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf6ed7a78__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he571a573__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf9299113__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he56dc363__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf92c292d__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he52a1449__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf9110235__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he404fd40__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf9f430c2__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he544bccd__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf6f968f1__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he52d3a95__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf6fd52cb__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he53a6ff7__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf6e1d75f__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he54ffa3a__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf903156a__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he506b15b__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf6f6cf21__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he512319c__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf6c9119c__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he540d140__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf6fe2ec2__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he56ab728__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf950f06a__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he5e14145__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hf91fce09__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1dd00f75__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfaf8b735__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1d8b960a__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfaf83edc__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1d610ce8__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa08a0fe__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1d22064f__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa4f385b__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1d25dc5f__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa4bf00d__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1d5b9175__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa04cf35__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1e7cfe7e__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfae3da68__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1d3d39f1__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa1cb279__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1d66b629__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa187873__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1d6b48cb__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa17021f__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1d47f788__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa36bdd0__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1d7f3267__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfbe41a09__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1c83ad22__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfbecb9da__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1d30d27e__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa1df468__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1d1b3096__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa461ad0__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1c92a279__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa3d1b31__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1060985b__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac0159ec__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h102f6740__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac01ef77__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h171198ee__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hacf14991__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h17d69685__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hacb4e10a__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h17d2a975__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hacb018c4__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h171f665b__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hacfd71ec__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h10044f54__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hac18033b__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h17c58de7__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hace55b28__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1712072f__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hace1a122__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h170fdc01__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_haced2ab6__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h17f347ce__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_haccf6c83__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h173bbb6d__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_had1dc2d8__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h17373a28__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_had156075__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h17c05b54__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hace2253b__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h17df84bc__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hacbfc383__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h17262b5f__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hacc2c5e0__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h17639117__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_had014fd6__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h17266802__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_had01f64f__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h161091a0__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hadf15c21__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h16d19849__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hadacf4cc__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h16d5a239__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hadb00cfe__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h16166f17__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hadf567d6__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h173f401e__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_had18129b__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h16fc86ab__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_haa1d4aaa__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h161508e3__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hade1b494__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1606d5cd__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hade53b00__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h16f24880__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hadc77933__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h163a8c21__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_haa15d2fa__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h162e33fa__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_haa0d754d__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h16c0ac1e__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hade2309b__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h16d68e76__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hadb7d233__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h16213c13__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hadc2d3d2__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he100dfdc__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfdbbe213__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he15c44c9__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfdbb687a__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he1b7de2b__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfaebf258__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he1f6d4b2__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfd246df5__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he1f20ea2__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfd29250b__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he18c45dc__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfaefda13__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he0ab6cc5__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfd90cfa6__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he1eb2d50__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa97e7d7__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he1b2a4e8__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa9badad__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he1bd9a36__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa9c1739__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he190674b__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfafde94e__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he1a920aa__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa8f0f07__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he255a1e1__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa87ed74__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he1e700c5__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa9721a6__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he1cd227d__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfd2d0c4e__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he246b0d8__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfaf60eef__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h3cc399fe__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfd8c51ff__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h3c8f02d1__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfd8ca704__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h33509873__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfafc4122__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h33119214__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfd3bd899__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h331dc8e4__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfd3f10d7__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h335f03fe__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfac029ff__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h3c64eac5__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfde73b48__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h3324ab7a__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfae852bb__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h335222b2__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfaec98b1__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h336f5590__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfaf3e2c5__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h3333e153__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfad22410__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h337abeec__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfae0faeb__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h33773fa9__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfa985806__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h3320dec5__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfae91d48__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h331ebc5d__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfd02fb10__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__din 
        = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h33864ec2__0)
                  ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 0x10U) : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfac9fdf3__0)
                                   ? (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                      >> 0xbU) : ((
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                     >> 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr 
        = (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_error_wb)
                  ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_error_addr_wb)
                  : ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U] 
                      << 0xaU) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U] 
                                  >> 0x16U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr0 
        = ((0xcU & (((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[0U] 
                      << 0x1fU) | (0x7ffffffcU & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[0U] 
                                                  >> 1U))) 
                    ^ (8U & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[0U] 
                             >> 2U)))) | (3U & (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U] 
                                                  << 0xaU) 
                                                 | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U] 
                                                    >> 0x16U)) 
                                                ^ (
                                                   (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[0U] 
                                                    << 0x1fU) 
                                                   | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[0U] 
                                                      >> 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__exu_mp_valid 
        = (IData)(((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                       >> 1U)) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                  >> 9U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__meihap_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_meihap_wb)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_claimid)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__meihap_ff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad0_wb 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hf814cb96__0) 
           & (0x3e480000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad1_wb 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hf814cb96__0) 
           & (0x3e500000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dpc_wb 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hf814cb96__0) 
           & (0x3d880000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dcsr_wb 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hf814cb96__0) 
           & (0x3d800000U == (0x7ff80000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U])));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellinp__pause_state_wb_ff__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_wr_pause_wb) 
            << 1U) | (1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__pause_state_wb_ff__dout) 
                            >> 1U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_hb6bb0c74__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_wr_pause_wb) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i1_flush_path_e4 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__any_jal)
                           ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__aout 
                              >> 1U) : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__pcout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__target_mispredict 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__predictpacketff__dout[0U] 
            >> 0x10U) & ((0x7fffffffU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__predictpacketff__dout[1U] 
                                          << 0xeU) 
                                         | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__predictpacketff__dout[0U] 
                                            >> 0x12U))) 
                         != (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__aout 
                             >> 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__lt 
        = (1U & (((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout 
                      >> 5U)) & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__aout 
                                  >> 0x1fU) ^ (((~ 
                                                 (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__a_ff 
                                                  >> 0x1fU)) 
                                                & ((~ 
                                                    (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__bm 
                                                     >> 0x1fU)) 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__aout 
                                                      >> 0x1fU))) 
                                               | ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__a_ff 
                                                   >> 0x1fU) 
                                                  & ((~ 
                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__aout 
                                                       >> 0x1fU)) 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__bm 
                                                        >> 0x1fU)))))) 
                 | ((~ (IData)((1ULL & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__a_ff)) 
                                         + ((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__bm)) 
                                            + (QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout 
                                                                  >> 7U)))))) 
                                        >> 0x20U)))) 
                    & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout 
                       >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_eff 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h52b8de57__0)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_comp
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__div_wen_wb)
            ? ((0xfU & ((- (IData)((1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__smallnumff__dout) 
                                          >> 4U)))) 
                        & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__smallnumff__dout))) 
               | (((- (IData)((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout)))) 
                   & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h52b8de57__0)
                       ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
                           << 1U) | (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                       : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff))) 
                  | ((- (IData)((1U & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__smallnumff__dout) 
                                           >> 4U)) 
                                       & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout)))))) 
                     & ((1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout) 
                                >> 1U) & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout) 
                                           >> 3U) ^ 
                                          ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout) 
                                           >> 2U))))
                         ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_comp
                         : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_raw);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h238f0594__0 
        = ((2U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final 
                           >> 0xbU)) << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final 
                                                           >> 3U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h7ae7b112__0 
        = ((2U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final 
                           >> 8U)) << 1U)) | (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h6e345d68__0 
        = ((2U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final 
                           >> 0xaU)) << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final 
                                                           >> 2U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h3a084cb2__0 
        = ((2U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final 
                           >> 0xdU)) << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final 
                                                           >> 5U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h24781485__0 
        = ((2U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final 
                           >> 0xcU)) << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final 
                                                           >> 4U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h3b0ba584__0 
        = ((2U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final 
                           >> 0xeU)) << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final 
                                                           >> 6U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h200aebbc__0 
        = ((2U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final 
                           >> 0xfU)) << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final 
                                                           >> 7U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h7da3a449__0 
        = ((2U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final 
                           >> 9U)) << 1U)) | (1U & (IData)(
                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final 
                                                            >> 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignparity 
        = (0xfU & (((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                      >> 3U)))) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parityfinal)) 
                   | (((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h24edf535__0))) 
                       & ((8U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parityfinal) 
                                 << 3U)) | (7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parityfinal)))) 
                      | (((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h3023b5bf__0))) 
                          & ((0xcU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parityfinal) 
                                      << 2U)) | (3U 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parityfinal)))) 
                         | ((- (IData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_hef79c2d8__0))) 
                            & ((0xeU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parityfinal) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parityfinal))))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_hdc3c6187__0 
        = ((2U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final 
                           >> 0xbU)) << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final 
                                                           >> 3U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h900b3e05__0 
        = ((2U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final 
                           >> 8U)) << 1U)) | (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_hdf509a9e__0 
        = ((2U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final 
                           >> 0xaU)) << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final 
                                                           >> 2U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_hd621cb42__0 
        = ((2U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final 
                           >> 0xdU)) << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final 
                                                           >> 5U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_hd10cca37__0 
        = ((2U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final 
                           >> 0xcU)) << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final 
                                                           >> 4U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h92ce5cd5__0 
        = ((2U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final 
                           >> 0xeU)) << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final 
                                                           >> 6U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h8dd5422d__0 
        = ((2U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final 
                           >> 0xfU)) << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final 
                                                           >> 7U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h9302eeb9__0 
        = ((2U & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final 
                           >> 9U)) << 1U)) | (1U & (IData)(
                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final 
                                                            >> 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
        = (((- (QData)((IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                      >> 3U))))) & 
            (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0final[1U])) 
              << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0final[0U])))) 
           | (((- (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h24edf535__0))) 
               & (((QData)((IData)((0xffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1final[0U]))) 
                   << 0x30U) | (0xffffffffffffULL & 
                                (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0final[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0final[0U])))))) 
              | (((- (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h3023b5bf__0))) 
                  & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1final[0U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0final[0U])))) 
                 | ((- (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_hef79c2d8__0))) 
                    & ((0xffffffffffff0000ULL & (((QData)((IData)(
                                                                  vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1final[1U])) 
                                                  << 0x30U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1final[0U])) 
                                                    << 0x10U))) 
                       | (QData)((IData)((0xffffU & 
                                          vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0final[0U]))))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_hc8cca838__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h95abc112__0) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h35288e68__0) 
               | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h352c229d__0) 
                  | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h3520f03a__0) 
                     | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h351b406b__0) 
                        | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h351891e0__0) 
                           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h80061d10__0) 
                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h810d974e__0) 
                                 | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h8a2dcb28__0) 
                                    | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_he20089c3__0) 
                                       | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_he4d6639b__0)))))))))) 
              & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h8719a8b3__0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h3efd2a18__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0x16U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h60ea88ed__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mgpmc 
        = (IData)(((0x4000000U == (0x6000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)) 
                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h25429399__0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1d080acf__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0x18U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4c6ee14b__0));
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
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgExtracted_h8354ed9f__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
              >> 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__thirdpc_hash 
        = (3U & ((IData)((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h33f05e89__0 
                          >> 0x22U)) ^ ((IData)((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h33f05e89__0 
                                                 >> 0x24U)) 
                                        ^ (IData)((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h33f05e89__0 
                                                   >> 0x26U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__thirdbrtag_hash 
        = (0x1ffU & ((IData)((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h33f05e89__0 
                              >> 0x2dU)) ^ (IData)(
                                                   (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h33f05e89__0 
                                                    >> 0x24U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondpc_hash 
        = (3U & (((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h28a505dc__0[2U] 
                   << 0x1fU) | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h28a505dc__0[2U] 
                                >> 1U)) ^ (((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h28a505dc__0[2U] 
                                             << 0x1dU) 
                                            | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h28a505dc__0[2U] 
                                               >> 3U)) 
                                           ^ ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h28a505dc__0[2U] 
                                               << 0x1bU) 
                                              | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h28a505dc__0[2U] 
                                                 >> 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondbrtag_hash 
        = (0x1ffU & (((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h28a505dc__0[2U] 
                       << 0x14U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h28a505dc__0[2U] 
                                    >> 0xcU)) ^ ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h28a505dc__0[2U] 
                                                  << 0x1dU) 
                                                 | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h28a505dc__0[2U] 
                                                    >> 3U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h31c44bf1__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
               >> 0x1cU)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_he71d315b__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h75be87b5__0 
        = (((0x1000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)
             ? (0xffU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_he2cdd7ce__0))
             : (0U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_he2cdd7ce__0))) 
           & (IData)(vlSelf->__VdfgTmp_he75cd719__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h8dca5a82__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
               >> 0xdU)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h439c05a4__0));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0xbU] 
        = ((0x7ffU & vlSelf->__PVT__axi_intercon__DOT__masters_req[0xbU]) 
           | ((IData)((QData)((IData)((0x400000U | 
                                       (((IData)(vlSelf->__PVT__lsu_awsize) 
                                         << 0x18U) 
                                        | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                              ? 0U : 0xfU) 
                                            << 0x11U) 
                                           | (0x3c0U 
                                              & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr 
                                                 >> 0x16U)))))))) 
              << 0xbU));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0xcU] 
        = (((IData)((QData)((IData)((0x400000U | (((IData)(vlSelf->__PVT__lsu_awsize) 
                                                   << 0x18U) 
                                                  | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                        ? 0U
                                                        : 0xfU) 
                                                      << 0x11U) 
                                                     | (0x3c0U 
                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr 
                                                           >> 0x16U)))))))) 
            >> 0x15U) | ((vlSelf->__PVT__lsu_awaddr 
                          << 0xeU) | ((IData)(((QData)((IData)(
                                                               (0x400000U 
                                                                | (((IData)(vlSelf->__PVT__lsu_awsize) 
                                                                    << 0x18U) 
                                                                   | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                         ? 0U
                                                                         : 0xfU) 
                                                                       << 0x11U) 
                                                                      | (0x3c0U 
                                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr 
                                                                            >> 0x16U))))))) 
                                               >> 0x20U)) 
                                      << 0xbU)));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0xdU] 
        = (0x40000U | ((0xfff00000U & vlSelf->__PVT__axi_intercon__DOT__masters_req[0xdU]) 
                       | (((0x7ffU & (vlSelf->__PVT__lsu_awaddr 
                                      >> 0x12U)) | 
                           ((IData)(((QData)((IData)(
                                                     (0x400000U 
                                                      | (((IData)(vlSelf->__PVT__lsu_awsize) 
                                                          << 0x18U) 
                                                         | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                               ? 0U
                                                               : 0xfU) 
                                                             << 0x11U) 
                                                            | (0x3c0U 
                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr 
                                                                  >> 0x16U))))))) 
                                     >> 0x20U)) >> 0x15U)) 
                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_arvalid_ff__DOT____Vcellinp__dffs__din) 
                              << 0x13U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0) 
                                            << 0xeU) 
                                           | (0x3800U 
                                              & (vlSelf->__PVT__lsu_awaddr 
                                                 >> 0x12U)))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_hc8cca838__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h95abc112__0) 
           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h35288e68__0) 
               | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h352c229d__0) 
                  | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h3520f03a__0) 
                     | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h351b406b__0) 
                        | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h351891e0__0) 
                           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h80061d10__0) 
                              | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h810d974e__0) 
                                 | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h8a2dcb28__0) 
                                    | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_he20089c3__0) 
                                       | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_he4d6639b__0)))))))))) 
              & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h8719a8b3__0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h1671df41__0 
        = (IData)(((8U == (0x18U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)) 
                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h2b410071__0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h48c3c0ba__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
            >> 4U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_he7aa13e3__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h7bfadf7a__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
               >> 4U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_hd4c8ff11__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_hcf329069__0 
        = (IData)(((0x30U == (0x30U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)) 
                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_hd4c8ff11__0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_he5bcf903__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
               >> 6U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h2b532282__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h933a2435__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_hfae9b0df__0) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h898b21aa__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_hde70e95e__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
            >> 0xcU) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h898b21aa__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h0cd3d896__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h6cb8f90f__0) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h2487dba7__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_he02e36d8__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
               >> 0xcU)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h2487dba7__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_wvalid_ff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_wvalid) 
           | ((4U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
              | (6U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_awvalid_ff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_awvalid) 
           | ((4U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
              | (5U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_hb334deac__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_awvalid) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_wvalid));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h31c44bf1__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0x1cU)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_he71d315b__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h1d323d06__0 
        = (((0x1000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)
             ? (0xffU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_hcc8854cf__0))
             : (0U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_hcc8854cf__0))) 
           & (IData)(vlSelf->__VdfgTmp_h858ca7ae__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h8dca5a82__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0xdU)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h439c05a4__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_ha018e9cd__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way0_f2) 
            >> 3U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h4d536c7f__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hc31f6c82__0 
        = (1U & ((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h7f83e43f__0)) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way0_f2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he49640ac__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way0_f2) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h7f83e43f__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1a3db3ff__0 
        = ((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h4d536c7f__0)) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way0_f2) 
              >> 3U));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hb5b0ae2d__0 
        = (1U & ((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he68ed8dd__0)) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way0_f2) 
                    >> 1U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h8c9bcb39__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way0_f2) 
            >> 2U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h69d4277d__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h1b6f99d2__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way0_f2) 
            >> 1U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he68ed8dd__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h12394694__0 
        = (1U & ((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h69d4277d__0)) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way0_f2) 
                    >> 2U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h26cf04f3__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_f2) 
            >> 3U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h0bcf15c9__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he8cfa998__0 
        = (1U & ((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he0bd07b4__0)) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_f2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h01effac5__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_f2) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he0bd07b4__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hbd3c5c98__0 
        = ((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h0bcf15c9__0)) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_f2) 
              >> 3U));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h0045ece1__0 
        = (1U & ((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h04639df2__0)) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_f2) 
                    >> 1U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h839fe5e4__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_f2) 
            >> 2U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hafad516a__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hec815d15__0 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_f2) 
            >> 1U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h04639df2__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h399337a4__0 
        = (1U & ((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hafad516a__0)) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_f2) 
                    >> 2U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_FreezePtrff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtrEn)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3)
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtr));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_halt_idle_any 
        = ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ldst_nodma_dc1todc3) 
               | (((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc4ff__dout 
                       >> 0xaU)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc4ff__dout)) 
                  | ((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc5ff__dout 
                         >> 0xaU)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc5ff__dout))))) 
           & ((~ (IData)((0U != ((~ (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_dma_picff__dout) 
                                      << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_dma_picff__dout) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_dma_picff__dout) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_dma_picff__dout) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_dma_picff__dout) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_dma_picff__dout) 
                                                             << 2U) 
                                                            | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_dma_picff__dout) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_dma_picff__dout))))))))) 
                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld))))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_bus_buffer_empty_any)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_arvalid_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid) 
           & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write)) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_awvalid_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h53bd23e2__0) 
           & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done)) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_wvalid_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h53bd23e2__0) 
           & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done)) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h1671df41__0 
        = (IData)(((8U == (0x18U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)) 
                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h2b410071__0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h48c3c0ba__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
            >> 4U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_he7aa13e3__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h7bfadf7a__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 4U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_hd4c8ff11__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_hcf329069__0 
        = (IData)(((0x30U == (0x30U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)) 
                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_hd4c8ff11__0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_he5bcf903__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 6U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h2b532282__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h933a2435__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_hfae9b0df__0) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h898b21aa__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_hde70e95e__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
            >> 0xcU) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h898b21aa__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h0cd3d896__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h6cb8f90f__0) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h2487dba7__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_he02e36d8__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0xcU)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h2487dba7__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__smallnum_case) 
            | ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout))
                ? (0x21U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__count))
                : (0x20U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__count)))) 
           & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 2U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__flush_lower_ff))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = (0xfffff8U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = ((0xfffff8U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate) 
           | ((4U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)
               ? 0U : ((2U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)
                        ? ((1U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)
                            ? ((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                      & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error))))
                                ? 0U : 4U) : 3U) : 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = (0xffffc7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = ((0xffffc7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate) 
           | (((0x20U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)
                ? 0U : ((0x10U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)
                         ? ((8U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)
                             ? ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                        >> 1U) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error))))
                                 ? 0U : 4U) : 3U) : 2U)) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = (0xfffe3fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = ((0xfffe3fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate) 
           | (((0x100U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)
                ? 0U : ((0x80U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)
                         ? ((0x40U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)
                             ? ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                        >> 2U) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error))))
                                 ? 0U : 4U) : 3U) : 2U)) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = (0xfff1ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = ((0xfff1ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate) 
           | (((0x800U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)
                ? 0U : ((0x400U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)
                         ? ((0x200U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)
                             ? ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                        >> 3U) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error))))
                                 ? 0U : 4U) : 3U) : 2U)) 
              << 9U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = (0xff8fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = ((0xff8fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate) 
           | (((0x4000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)
                ? 0U : ((0x2000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)
                         ? ((0x1000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)
                             ? ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                        >> 4U) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error))))
                                 ? 0U : 4U) : 3U) : 2U)) 
              << 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = (0xfc7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = ((0xfc7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate) 
           | (((0x20000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)
                ? 0U : ((0x10000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)
                         ? ((0x8000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)
                             ? ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                        >> 5U) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error))))
                                 ? 0U : 4U) : 3U) : 2U)) 
              << 0xfU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = (0xe3ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = ((0xe3ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate) 
           | (((0x100000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)
                ? 0U : ((0x80000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)
                         ? ((0x40000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)
                             ? ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                        >> 6U) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error))))
                                 ? 0U : 4U) : 3U) : 2U)) 
              << 0x12U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = (0x1fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = ((0x1fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate) 
           | (((0x800000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)
                ? 0U : ((0x400000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)
                         ? ((0x200000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)
                             ? ((IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                          >> 7U) & 
                                         (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error))))
                                 ? 0U : 4U) : 3U) : 2U)) 
              << 0x15U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_flush_path_e4 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__any_jal)
                           ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__aout 
                              >> 1U) : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__pcout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__target_mispredict 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__predictpacketff__dout[0U] 
            >> 0x10U) & ((0x7fffffffU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__predictpacketff__dout[1U] 
                                          << 0xeU) 
                                         | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__predictpacketff__dout[0U] 
                                            >> 0x12U))) 
                         != (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__aout 
                             >> 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__lt 
        = (1U & (((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout 
                      >> 5U)) & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__aout 
                                  >> 0x1fU) ^ (((~ 
                                                 (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__a_ff 
                                                  >> 0x1fU)) 
                                                & ((~ 
                                                    (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__bm 
                                                     >> 0x1fU)) 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__aout 
                                                      >> 0x1fU))) 
                                               | ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__a_ff 
                                                   >> 0x1fU) 
                                                  & ((~ 
                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__aout 
                                                       >> 0x1fU)) 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__bm 
                                                        >> 0x1fU)))))) 
                 | ((~ (IData)((1ULL & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__a_ff)) 
                                         + ((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__bm)) 
                                            + (QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout 
                                                                  >> 7U)))))) 
                                        >> 0x20U)))) 
                    & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout 
                       >> 5U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h05393e10__0 
        = (0xffU & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8ab2a79c__0)
                     ? (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_ha0ac93a4__0)
                     : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1a2c6a01__0 
        = (0xffU & ((8U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hce653c8e__0))
                     ? (IData)((vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h87cefe4a__0 
                                >> 0x18U)) : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                              >> 0x18U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc44d6618__0 
        = (0xffU & ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hce653c8e__0))
                     ? (IData)((vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h87cefe4a__0 
                                >> 0x10U)) : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                              >> 0x10U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he8d7c34d__0 
        = (0xffU & ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hce653c8e__0))
                     ? (IData)((vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h87cefe4a__0 
                                >> 8U)) : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                           >> 8U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h001ebf6f__0 
        = ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ldst_dc2) 
               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hcdf3660d__0))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__jit_in_same_region));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h2f878a40__0 
        = ((~ (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc2) 
                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ldst_dc2)) 
               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hcdf3660d__0))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__jit_in_same_region));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2t_in 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e2ff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2t_in 
        = ((0x3f00fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2t_in) 
           | (0xff000U & ((((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h488ff5f1__0) 
                            << 0x10U) | ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h488ff5f1__0) 
                                         << 0xcU)) 
                          & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e2ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[0U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[1U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[2U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[1U] 
        = ((0xfdffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[1U]) 
           | (0xfe000000U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                             & ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h2d2bea69__0) 
                                << 0x19U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[1U] 
        = ((0xfffffffbU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[1U]) 
           | (0xfffffffcU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                             & ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h2d2bea69__0) 
                                << 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[1U] 
        = ((0xfeffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[1U]) 
           | (0xff000000U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                             & ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h2d2bea69__0) 
                                << 0x18U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[1U] 
        = ((0xfffffffdU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[1U]) 
           | (0xfffffffeU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                             & ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h2d2bea69__0) 
                                << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[1U] 
        = ((0xff7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[1U]) 
           | (0xff800000U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                             & ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h2d2bea69__0) 
                                << 0x17U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[0U] 
        = ((0xfffbffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[0U]) 
           | (0xfffc0000U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                             & ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h2d2bea69__0) 
                                << 0x12U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc2_in 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc2_in 
        = ((0x7fffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc2_in) 
           | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                    & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc2_up) 
                          & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                                >> 0xbU)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc3_in 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc3_in 
        = ((0x7fffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc3_in) 
           | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                    & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc2_up) 
                          & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                >> 0xbU)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT____VdfgTmp_h23c9c3ab__0) 
           & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc2_up) 
                  | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_dc2) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_dc2)))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_external_dc2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellinp__freezeff__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze) 
            << 1U) | (1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__freezeff__dout) 
                            >> 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc4_in 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc4_in 
        = ((0x7fffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc4_in) 
           | (1U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                     & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc3) 
                           & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                 >> 0xbU))))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_e3 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_before)) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[0U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[1U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[2U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[2U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[1U] 
        = ((0xfc7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[1U]) 
           | (0xff800000U & ((0x2000000U & (((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                 >> 2U)) 
                                             << 0x19U) 
                                            & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U])) 
                             | ((0x1000000U & (((~ 
                                                 ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                  >> 2U)) 
                                                << 0x18U) 
                                               & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U])) 
                                | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgExtracted_he01c99b0__0) 
                                   << 0x17U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[1U] 
        = ((0xfffffffbU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[1U]) 
           | (4U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                     & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__flushff__dout) 
                            >> 1U)) << 2U)) & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                   >> 2U)) 
                                               << 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[1U] 
        = ((0xfffffffdU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[1U]) 
           | (2U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                     & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__flushff__dout) 
                            >> 1U)) << 1U)) & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                   >> 2U)) 
                                               << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[0U] 
        = ((0xfffbffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[0U]) 
           | (0x40000U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                           & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__flushff__dout) 
                                  >> 1U)) << 0x12U)) 
                          & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                 >> 2U)) << 0x12U))));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__valid_e2_ff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__valid_e2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__pred_correct_upper_e3_ff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__pred_correct_upper_e3_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__flushff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__flushff__dout;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[0U] = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[1U] = 0U;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[2U] = 0U;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__valid_e2_ff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__valid_e1;
        vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__pred_correct_upper_e3_ff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__pred_correct_upper_e2_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__flushff__DOT____Vcellinp__dffs__din 
            = ((2U & ((0x7ffffffeU & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                      >> 1U)) | (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze)) 
                                                  & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e2_ff__dout) 
                                                 << 1U))) 
               | (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                         >> 2U) | ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze)) 
                                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e2_ff__dout)))));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__mul_c1_e3_clken 
        = (1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze)) 
                 & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 6U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__valid_e2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e3_ctl_en 
        = (1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze)) 
                 & ((0U != (3U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1cg0ff__dout))) 
                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                       >> 7U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__mul_c1_e2_clken 
        = (1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze)) 
                 & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 6U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__valid_e1))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e2_ctl_en 
        = (1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze)) 
                 & ((0U != (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1cg0ff__dout) 
                                  >> 1U))) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                              >> 7U))));
}
