// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_swervolf_core.h"

extern const VlUnpacked<CData/*7:0*/, 256> Vrvfpgasim__ConstPool__TABLE_ha6e7b954_0;
extern const VlUnpacked<SData/*9:0*/, 256> Vrvfpgasim__ConstPool__TABLE_hb86679b4_0;
extern const VlUnpacked<CData/*6:0*/, 16> Vrvfpgasim__ConstPool__TABLE_hb0203579_0;
extern const VlUnpacked<CData/*3:0*/, 4> Vrvfpgasim__ConstPool__TABLE_h7eaf993d_0;
extern const VlUnpacked<CData/*3:0*/, 32768> Vrvfpgasim__ConstPool__TABLE_h51f82406_0;

VL_ATTR_COLD void Vrvfpgasim_swervolf_core___stl_sequent__TOP__rvfpgasim__swervolf__0(Vrvfpgasim_swervolf_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core___stl_sequent__TOP__rvfpgasim__swervolf__0\n"); );
    // Init
    CData/*0:0*/ swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h6ff8d0d1__0;
    swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h6ff8d0d1__0 = 0;
    CData/*0:0*/ swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h2f1a5499__0;
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h2f1a5499__0 = 0;
    CData/*0:0*/ swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1973ddaf__0;
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1973ddaf__0 = 0;
    CData/*0:0*/ swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_haea96e68__0;
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_haea96e68__0 = 0;
    CData/*0:0*/ swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hf0b70392__0;
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hf0b70392__0 = 0;
    CData/*0:0*/ swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_he9b8ab1b__0;
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_he9b8ab1b__0 = 0;
    CData/*0:0*/ swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h7dfda076__0;
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h7dfda076__0 = 0;
    CData/*0:0*/ swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hbefbf355__0;
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hbefbf355__0 = 0;
    CData/*0:0*/ swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h185f1bb7__0;
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h185f1bb7__0 = 0;
    CData/*0:0*/ swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgTmp_h41b7a3bb__0;
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgTmp_h41b7a3bb__0 = 0;
    CData/*0:0*/ swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgTmp_h8c96794b__0;
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgTmp_h8c96794b__0 = 0;
    CData/*0:0*/ swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgTmp_h745cdf40__0;
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgTmp_h745cdf40__0 = 0;
    IData/*31:0*/ swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____VdfgTmp_ha8cdac88__0;
    swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____VdfgTmp_ha8cdac88__0 = 0;
    IData/*31:0*/ swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____VdfgTmp_h785b8957__0;
    swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____VdfgTmp_h785b8957__0 = 0;
    IData/*31:0*/ swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____VdfgTmp_hc9846603__0;
    swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____VdfgTmp_hc9846603__0 = 0;
    IData/*31:0*/ swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____VdfgTmp_h5c304fee__0;
    swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____VdfgTmp_h5c304fee__0 = 0;
    CData/*0:0*/ swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_ha0a1a47e__0;
    swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_ha0a1a47e__0 = 0;
    CData/*0:0*/ swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h7460d700__0;
    swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h7460d700__0 = 0;
    CData/*0:0*/ __VdfgTmp_h012add0b__0;
    __VdfgTmp_h012add0b__0 = 0;
    CData/*3:0*/ __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout;
    __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in;
    __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in = 0;
    CData/*2:0*/ __Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__in;
    __Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__in = 0;
    CData/*2:0*/ __Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__in;
    __Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__in = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*14:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    VlWide<8>/*255:0*/ __Vtemp_h8516f315__0;
    VlWide<3>/*95:0*/ __Vtemp_ha53a1956__0;
    VlWide<3>/*95:0*/ __Vtemp_h39f77aa7__0;
    VlWide<3>/*95:0*/ __Vtemp_h9310beb0__0;
    VlWide<3>/*95:0*/ __Vtemp_h33ce99ef__0;
    VlWide<4>/*127:0*/ __Vtemp_h16751ae9__0;
    VlWide<5>/*159:0*/ __Vtemp_h19ba7342__0;
    VlWide<6>/*191:0*/ __Vtemp_h76bc4dec__0;
    VlWide<7>/*223:0*/ __Vtemp_h958cc155__0;
    VlWide<8>/*255:0*/ __Vtemp_h4cb9d5cb__0;
    // Body
    vlSelf->__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter20__DOT__i_counter__DOT__counter_d 
        = (0x1fffffU & ((IData)(1U) + vlSelf->__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter20__DOT__i_counter__DOT__counter_q));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellinp__reset_ff__din 
        = (2U | (1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__reset_ff__dout) 
                       >> 1U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__reset_ff__din 
        = (2U | (1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__reset_ff__dout) 
                       >> 1U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_postedff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_posted;
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_tagff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_tag;
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_sizeff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_size;
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_byteenff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_byteen;
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_tagff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_tag;
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_sizeff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_size;
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_addr;
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data;
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_addr;
    vlSelf->__PVT__spi__DOT__rfifo__DOT__wp_p1 = (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__spi__DOT__rfifo__DOT__wp)));
    vlSelf->__PVT__spi__DOT__rfifo__DOT__rp_p1 = (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__spi__DOT__rfifo__DOT__rp)));
    vlSelf->__PVT__spi__DOT__wfifo__DOT__wp_p1 = (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__wp)));
    vlSelf->__PVT__spi__DOT__wfifo__DOT__rp_p1 = (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__rp)));
    vlSelf->__PVT__spi2__DOT__rfifo__DOT__wp_p1 = (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__spi2__DOT__rfifo__DOT__wp)));
    vlSelf->__PVT__spi2__DOT__rfifo__DOT__rp_p1 = (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__spi2__DOT__rfifo__DOT__rp)));
    vlSelf->__PVT__spi2__DOT__wfifo__DOT__wp_p1 = (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__wp)));
    vlSelf->__PVT__spi2__DOT__wfifo__DOT__rp_p1 = (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__rp)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__bankid_ff__DOT____Vcellinp__dffs__din 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id;
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h3e77144f__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout) 
           & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout 
              >> 0x10U));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h6c61c097__0 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                  >> 0xdU) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_wbff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____VdfgTmp_h4171839d__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_dc3) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_dc3));
    vlSelf->spi__DOT__rfifo__DOT____VdfgTmp_hbf3f7ff0__0 
        = ((IData)(vlSelf->__PVT__spi__DOT__rfifo__DOT__rp) 
           == (IData)(vlSelf->__PVT__spi__DOT__rfifo__DOT__wp));
    vlSelf->spi2__DOT__rfifo__DOT____VdfgTmp_hbf3f7ff0__0 
        = ((IData)(vlSelf->__PVT__spi2__DOT__rfifo__DOT__rp) 
           == (IData)(vlSelf->__PVT__spi2__DOT__rfifo__DOT__wp));
    vlSelf->__PVT__spi__DOT__espr = ((0xcU & ((IData)(vlSelf->__PVT__spi__DOT__sper) 
                                              << 2U)) 
                                     | (3U & (IData)(vlSelf->__PVT__spi__DOT__spcr)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__thre_int 
        = (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ier) 
            >> 1U) & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr5r));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ms_int 
        = (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__msr))));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr7 
        = ((0U != (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0U] | (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [1U] | (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                   [2U] | (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [3U] | (
                                                   vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [4U] 
                                                   | (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [5U] 
                                                      | (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [6U] 
                                                         | (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                            [7U] 
                                                            | (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                               [8U] 
                                                               | (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                  [9U] 
                                                                  | (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                     [0xaU] 
                                                                     | (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                        [0xbU] 
                                                                        | (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                           [0xcU] 
                                                                           | (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                              [0xdU] 
                                                                              | (vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU])))))))))))))))) 
           | (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_overrun));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_data_out 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelf->__PVT__spi2__DOT__espr = ((0xcU & ((IData)(vlSelf->__PVT__spi2__DOT__sper) 
                                               << 2U)) 
                                      | (3U & (IData)(vlSelf->__PVT__spi2__DOT__spcr)));
    vlSelf->__VdfgTmp_h8983bc32__0 = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelf->i_led16__en = (7U & ((1U & (~ ((IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl) 
                                           >> 3U))) 
                                 | ((2U & ((~ ((IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl) 
                                               >> 3U)) 
                                           << 1U)) 
                                    | (4U & ((~ ((IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl) 
                                                 >> 3U)) 
                                             << 2U)))));
    if ((0x100U & (IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl))) {
        vlSelf->__PVT__timer_ptc__DOT__hrc_clk = vlSelf->__PVT__timer_ptc__DOT__capt_pad_i;
        vlSelf->__PVT__timer_ptc__DOT__lrc_clk = (1U 
                                                  & (~ (IData)(vlSelf->__PVT__timer_ptc__DOT__capt_pad_i)));
    } else {
        vlSelf->__PVT__timer_ptc__DOT__hrc_clk = vlSymsp->TOP.clk;
        vlSelf->__PVT__timer_ptc__DOT__lrc_clk = (1U 
                                                  & (IData)(vlSymsp->TOP.clk));
    }
    if ((0x100U & (IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl))) {
        vlSelf->__PVT__timer_ptcR__DOT__hrc_clk = vlSelf->__PVT__timer_ptcR__DOT__capt_pad_i;
        vlSelf->__PVT__timer_ptcR__DOT__lrc_clk = (1U 
                                                   & (~ (IData)(vlSelf->__PVT__timer_ptcR__DOT__capt_pad_i)));
    } else {
        vlSelf->__PVT__timer_ptcR__DOT__hrc_clk = vlSymsp->TOP.clk;
        vlSelf->__PVT__timer_ptcR__DOT__lrc_clk = (1U 
                                                   & (IData)(vlSymsp->TOP.clk));
    }
    if ((0x100U & (IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl))) {
        vlSelf->__PVT__timer_ptcG__DOT__hrc_clk = vlSelf->__PVT__timer_ptcG__DOT__capt_pad_i;
        vlSelf->__PVT__timer_ptcG__DOT__lrc_clk = (1U 
                                                   & (~ (IData)(vlSelf->__PVT__timer_ptcG__DOT__capt_pad_i)));
    } else {
        vlSelf->__PVT__timer_ptcG__DOT__hrc_clk = vlSymsp->TOP.clk;
        vlSelf->__PVT__timer_ptcG__DOT__lrc_clk = (1U 
                                                   & (IData)(vlSymsp->TOP.clk));
    }
    if ((0x100U & (IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl))) {
        vlSelf->__PVT__timer_ptcB__DOT__hrc_clk = vlSelf->__PVT__timer_ptcB__DOT__capt_pad_i;
        vlSelf->__PVT__timer_ptcB__DOT__lrc_clk = (1U 
                                                   & (~ (IData)(vlSelf->__PVT__timer_ptcB__DOT__capt_pad_i)));
    } else {
        vlSelf->__PVT__timer_ptcB__DOT__hrc_clk = vlSymsp->TOP.clk;
        vlSelf->__PVT__timer_ptcB__DOT__lrc_clk = (1U 
                                                   & (IData)(vlSymsp->TOP.clk));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_ic_in 
        = ((0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_ic_ff)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc4_clken 
        = (1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc3ff__dout) 
                 | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc3_clken_q))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc5_clken 
        = (1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc4ff__dout) 
                 | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc4_clken_q))));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ti_int 
        = ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ier) 
           & ((0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__counter_t)) 
              & (0U != (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_count))));
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
    vlSelf->__Vtableidx4 = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__block_value 
        = Vrvfpgasim__ConstPool__TABLE_ha6e7b954_0[vlSelf->__Vtableidx4];
    vlSelf->__Vtableidx6 = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value 
        = Vrvfpgasim__ConstPool__TABLE_hb86679b4_0[vlSelf->__Vtableidx6];
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg_ff__DOT____Vcellinp__dffs__din 
        = (1U & (((0xf00c3000U == vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)));
    __Vtableidx1 = (0xfU & (vlSelf->__PVT__syscon__DOT__Digits_Reg 
                            >> (0x1cU & (vlSelf->__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter20__DOT__i_counter__DOT__counter_q 
                                         >> 0xfU))));
    vlSelf->__PVT__Digits_Bits = Vrvfpgasim__ConstPool__TABLE_hb0203579_0
        [__Vtableidx1];
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rls_int 
        = (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ier) 
            >> 2U) & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr1r) 
                      | ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr2r) 
                         | ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr3r) 
                            | (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr4r)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_din = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_in = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_in = 0U;
    if ((8U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_din = 0U;
        } else if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_din = 0U;
        } else if ((1U & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_din = 0U;
        }
        if ((1U & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)))) {
                    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_in = 0U;
                    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_in = 0U;
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                if ((1U & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)))) {
                    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_din = 1U;
                }
            }
        }
        if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                if ((1U & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)))) {
                    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_in = 1U;
                    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_in = 1U;
                }
            }
        }
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc4 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc4ff__dout 
            << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc4ff__dout));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr5 
        = ((~ (IData)((0U != (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__block_cnt)))) 
           & (0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tf_count)));
    vlSelf->__PVT__timer_ptc__DOT__eclk_gate = (1U 
                                                & ((IData)(vlSelf->__PVT__timer_ptc__DOT__gate_clk_pad_i) 
                                                   ^ 
                                                   ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                                    >> 2U)));
    vlSelf->__PVT__timer_ptcR__DOT__eclk_gate = (1U 
                                                 & ((IData)(vlSelf->__PVT__timer_ptcR__DOT__gate_clk_pad_i) 
                                                    ^ 
                                                    ((IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl) 
                                                     >> 2U)));
    vlSelf->__PVT__timer_ptcG__DOT__eclk_gate = (1U 
                                                 & ((IData)(vlSelf->__PVT__timer_ptcG__DOT__gate_clk_pad_i) 
                                                    ^ 
                                                    ((IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl) 
                                                     >> 2U)));
    vlSelf->__PVT__timer_ptcB__DOT__eclk_gate = (1U 
                                                 & ((IData)(vlSelf->__PVT__timer_ptcB__DOT__gate_clk_pad_i) 
                                                    ^ 
                                                    ((IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl) 
                                                     >> 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout 
            << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc3ff__dout));
    vlSelf->__PVT__timer_ptc__DOT__hrc_match = ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                                & (vlSelf->__PVT__timer_ptc__DOT__rptc_cntr 
                                                   == vlSelf->__PVT__timer_ptc__DOT__rptc_hrc));
    vlSelf->__PVT__timer_ptcR__DOT__hrc_match = ((IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl) 
                                                 & (vlSelf->__PVT__timer_ptcR__DOT__rptc_cntr 
                                                    == vlSelf->__PVT__timer_ptcR__DOT__rptc_hrc));
    vlSelf->__PVT__timer_ptcG__DOT__hrc_match = ((IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl) 
                                                 & (vlSelf->__PVT__timer_ptcG__DOT__rptc_cntr 
                                                    == vlSelf->__PVT__timer_ptcG__DOT__rptc_hrc));
    vlSelf->__PVT__timer_ptcB__DOT__hrc_match = ((IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl) 
                                                 & (vlSelf->__PVT__timer_ptcB__DOT__rptc_cntr 
                                                    == vlSelf->__PVT__timer_ptcB__DOT__rptc_hrc));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack_din 
        = ((9U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
           & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
              >> 0x10U));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
        = (IData)((((QData)((IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                           >> 7U)))) 
                    << 0x25U) | (((QData)((IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                      >> 4U)))) 
                                  << 0x24U) | (((QData)((IData)(
                                                                (3U 
                                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0)))) 
                                                << 0x22U) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                                       >> 2U)))) 
                                                   << 0x21U) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                                          >> 3U)))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0))))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
            << 6U) | (IData)(((((QData)((IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                    >> 7U)))) 
                                << 0x25U) | (((QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                                  >> 4U)))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0)))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                                        >> 2U)))) 
                                                    << 0x21U) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                                           >> 3U)))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0))))))) 
                              >> 0x20U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
            << 0xcU) | ((0x800U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                   << 4U)) | ((0x400U 
                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                  << 6U)) 
                                              | ((0x300U 
                                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                     << 8U)) 
                                                 | ((0x80U 
                                                     & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                        << 5U)) 
                                                    | ((0x40U 
                                                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                           << 3U)) 
                                                       | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                          >> 0x1aU)))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
            << 0x12U) | ((0x20000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                      << 0xaU)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                                       << 0xcU)) 
                                                   | ((0xc000U 
                                                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                                          << 0xeU)) 
                                                      | ((0x2000U 
                                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                                             << 0xbU)) 
                                                         | ((0x1000U 
                                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                                                << 9U)) 
                                                            | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                               >> 0x14U)))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
        = ((0x800000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                         << 0x10U)) | ((0x400000U & 
                                        ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                         << 0x12U)) 
                                       | ((0x300000U 
                                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                              << 0x14U)) 
                                          | ((0x80000U 
                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                                 << 0x11U)) 
                                             | ((0x40000U 
                                                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                                    << 0xfU)) 
                                                | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                   >> 0xeU))))));
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
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q)))) {
        if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 1U;
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q)))) {
        if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 1U;
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q)))) {
        if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 1U;
        }
    }
    vlSelf->__Vtableidx3 = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fcr;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__trigger_level 
        = Vrvfpgasim__ConstPool__TABLE_h7eaf993d_0[vlSelf->__Vtableidx3];
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT____VdfgTmp_hc7980083__0 
        = (IData)((2U == (6U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT____VdfgTmp_h2292aa93__0 
        = (IData)((1U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h69bb6858__0 
        = (IData)((0x1002U == (0x1002U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout))));
    vlSelf->i_led16__out__strong__out40 = ((6U & (IData)(vlSelf->i_led16__out__strong__out40)) 
                                           | ((IData)(vlSelf->__PVT__pwm_ptcR) 
                                              & (~ 
                                                 ((IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl) 
                                                  >> 3U))));
    vlSelf->i_led16__out__strong__out41 = ((5U & (IData)(vlSelf->i_led16__out__strong__out41)) 
                                           | (((IData)(vlSelf->__PVT__pwm_ptcG) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl) 
                                                   >> 3U))) 
                                              << 1U));
    vlSelf->i_led16__out__strong__out42 = ((3U & (IData)(vlSelf->i_led16__out__strong__out42)) 
                                           | (((IData)(vlSelf->__PVT__pwm_ptcB) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl) 
                                                   >> 3U))) 
                                              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1 
        = ((8U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
           & (IData)(((0x208U == (0xff08U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                      & (~ (IData)((0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hc129decd__0 
        = (IData)(((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout 
                       >> 0x10U)) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout) 
                                     >> 1U)));
    vlSelf->uart16550_0__DOT__regs__DOT____VdfgTmp_h755f749e__0 
        = ((~ ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr) 
               >> 7U)) & (0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is)));
    vlSelf->spi__DOT__wfifo__DOT____VdfgTmp_hbf3f7ff0__0 
        = ((IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__rp) 
           == (IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__wp));
    vlSelf->spi2__DOT__wfifo__DOT____VdfgTmp_hbf3f7ff0__0 
        = ((IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__rp) 
           == (IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__wp));
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
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__serial_out 
        = ((~ ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelf->__PVT__timer_ptc__DOT__lrc_match = ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                                & (vlSelf->__PVT__timer_ptc__DOT__rptc_cntr 
                                                   == vlSelf->__PVT__timer_ptc__DOT__rptc_lrc));
    vlSelf->__PVT__timer_ptcR__DOT__lrc_match = ((IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl) 
                                                 & (vlSelf->__PVT__timer_ptcR__DOT__rptc_cntr 
                                                    == vlSelf->__PVT__timer_ptcR__DOT__rptc_lrc));
    vlSelf->__PVT__timer_ptcG__DOT__lrc_match = ((IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl) 
                                                 & (vlSelf->__PVT__timer_ptcG__DOT__rptc_cntr 
                                                    == vlSelf->__PVT__timer_ptcG__DOT__rptc_lrc));
    vlSelf->__PVT__timer_ptcB__DOT__lrc_match = ((IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl) 
                                                 & (vlSelf->__PVT__timer_ptcB__DOT__rptc_cntr 
                                                    == vlSelf->__PVT__timer_ptcB__DOT__rptc_lrc));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wb1_data_en 
        = (1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1cg1ff__dout) 
                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 7U)));
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
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[0U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank0_way0__dout)) 
                    << 0x1aU) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank0_way0__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[1U] 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank0_way0__dout 
            << 0x14U) | (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank0_way0__dout)) 
                                   << 0x1aU) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank0_way0__dout))) 
                                 >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[2U] 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank0_way0__dout 
            << 0xeU) | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank0_way0__dout 
                        >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[3U] 
        = (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank0_way0__dout 
           >> 0x12U);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[0U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank1_way0__dout)) 
                    << 0x1aU) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank1_way0__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[1U] 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank1_way0__dout 
            << 0x14U) | (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank1_way0__dout)) 
                                   << 0x1aU) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank1_way0__dout))) 
                                 >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[2U] 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank1_way0__dout 
            << 0xeU) | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank1_way0__dout 
                        >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[3U] 
        = (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank1_way0__dout 
           >> 0x12U);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[0U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank2_way0__dout)) 
                    << 0x1aU) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank2_way0__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[1U] 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank2_way0__dout 
            << 0x14U) | (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank2_way0__dout)) 
                                   << 0x1aU) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank2_way0__dout))) 
                                 >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[2U] 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank2_way0__dout 
            << 0xeU) | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank2_way0__dout 
                        >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[3U] 
        = (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank2_way0__dout 
           >> 0x12U);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[0U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank3_way0__dout)) 
                    << 0x1aU) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank3_way0__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[1U] 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank3_way0__dout 
            << 0x14U) | (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank3_way0__dout)) 
                                   << 0x1aU) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank3_way0__dout))) 
                                 >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[2U] 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank3_way0__dout 
            << 0xeU) | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank3_way0__dout 
                        >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[3U] 
        = (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank3_way0__dout 
           >> 0x12U);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[0U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank0_way1__dout)) 
                    << 0x1aU) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank0_way1__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[1U] 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank0_way1__dout 
            << 0x14U) | (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank0_way1__dout)) 
                                   << 0x1aU) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank0_way1__dout))) 
                                 >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[2U] 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank0_way1__dout 
            << 0xeU) | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank0_way1__dout 
                        >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[3U] 
        = (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank0_way1__dout 
           >> 0x12U);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[0U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank1_way1__dout)) 
                    << 0x1aU) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank1_way1__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[1U] 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank1_way1__dout 
            << 0x14U) | (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank1_way1__dout)) 
                                   << 0x1aU) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank1_way1__dout))) 
                                 >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[2U] 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank1_way1__dout 
            << 0xeU) | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank1_way1__dout 
                        >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[3U] 
        = (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank1_way1__dout 
           >> 0x12U);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[0U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank2_way1__dout)) 
                    << 0x1aU) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank2_way1__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[1U] 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank2_way1__dout 
            << 0x14U) | (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank2_way1__dout)) 
                                   << 0x1aU) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank2_way1__dout))) 
                                 >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[2U] 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank2_way1__dout 
            << 0xeU) | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank2_way1__dout 
                        >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[3U] 
        = (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank2_way1__dout 
           >> 0x12U);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[0U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank3_way1__dout)) 
                    << 0x1aU) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank3_way1__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[1U] 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank3_way1__dout 
            << 0x14U) | (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank3_way1__dout)) 
                                   << 0x1aU) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank3_way1__dout))) 
                                 >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[2U] 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank3_way1__dout 
            << 0xeU) | (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank3_way1__dout 
                        >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[3U] 
        = (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank3_way1__dout 
           >> 0x12U);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_d 
        = ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellinp__i0wb1instff__en 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0cg1ff__dout) 
                  | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 7U)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__div_wen_wb)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_hd6c57035__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_valid_e1) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__i_shortq_ff__dout) 
              >> 4U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hdcbcb1f1__0 
        = (((QData)((IData)((1U & VL_REDXOR_32((0xffffU 
                                                & (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rdata_ff 
                                                           >> 0x10U))))))) 
            << 0x21U) | (((QData)((IData)((1U & VL_REDXOR_32(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rdata_ff)))))) 
                          << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rdata_ff))));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hddf6bb9a__0 
        = (((QData)((IData)((1U & VL_REDXOR_32((0xffffU 
                                                & (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rdata_ff 
                                                           >> 0x30U))))))) 
            << 0x21U) | (((QData)((IData)((1U & VL_REDXOR_32(
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rdata_ff 
                                                                         >> 0x20U))))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rdata_ff 
                                                       >> 0x20U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_debug_ict_array_sel_in 
        = (IData)((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout) 
                    >> 1U) & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout 
                              >> 0x10U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_mask_e1 
        = ((0x1fU & ((- (IData)((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout)))) 
                     & (IData)((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csr_data_e1ff__dout 
                                >> 0x20U)))) | ((- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout))))) 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_csr_rs1_e1));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc2_clken 
        = (1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc1ff__dout) 
                 | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc1_clken_q))));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____VdfgTmp_h4ee6bc35__0 
        = (IData)(((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout 
                    >> 0x10U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_wb 
        = (1U & (IData)(((0x1000U == (0x1002U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout))) 
                         & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                             >> 8U) | ((IData)((8U 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout)))) 
                                       | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                          >> 4U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_wb 
        = (1U & (IData)(((0x1000U == (0x1002U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout))) 
                         & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                            >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_wb 
        = (1U & (IData)(((0x1000U == (0x1002U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout))) 
                         & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_wbff__dout 
                            >> 1U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hc947d72f__0 
        = (IData)((0U == (6U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h3db60169__0 
        = (IData)((6U != (6U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h9f2a8297__0 
        = ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel)) 
           & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                  >> 9U)) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                             >> 0x11U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hfcb067c9__0 
        = ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel)) 
           & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                  >> 9U)) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                             >> 0x11U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h83fc2a24__0 
        = ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel)) 
           & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                  >> 9U)) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                             >> 0x11U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h63448192__0 
        = ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel)) 
           & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                  >> 9U)) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                             >> 0x11U)));
    vlSelf->__PVT__uart16550_0__DOT__wb_dat8_o = (0xffU 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                                        ? (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__scratch)
                                                        : (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__msr))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                                        ? 
                                                       (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr7r) 
                                                         << 7U) 
                                                        | (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr6r) 
                                                            << 6U) 
                                                           | (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr5r) 
                                                               << 5U) 
                                                              | (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr4r) 
                                                                  << 4U) 
                                                                 | (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr3r) 
                                                                     << 3U) 
                                                                    | (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr2r) 
                                                                        << 2U) 
                                                                       | (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr1r) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr0r))))))))
                                                        : 0U))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                                        ? (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr)
                                                        : 
                                                       (0xc0U 
                                                        | (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__iir)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                                        ? 
                                                       ((0x80U 
                                                         & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                                         ? 
                                                        ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__dl) 
                                                         >> 8U)
                                                         : (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ier))
                                                        : 
                                                       ((0x80U 
                                                         & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                                         ? (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__dl)
                                                         : 
                                                        vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                        [vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4_data_en 
        = (1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0cg0ff__dout) 
                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e4_data_en 
        = (1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1cg0ff__dout) 
                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wb_data_en 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1cg1ff__dout) 
                  >> 1U) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                            >> 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3_incr 
        = ((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3h)) 
             << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3))) 
           + ((QData)((IData)((1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pmu0inc_ff__dout) 
                                     >> 1U)))) + (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pmu0inc_ff__dout))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4_incr 
        = ((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4h)) 
             << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4))) 
           + ((QData)((IData)((1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pmu1inc_ff__dout) 
                                     >> 1U)))) + (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pmu1inc_ff__dout))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5_incr 
        = ((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5h)) 
             << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5))) 
           + ((QData)((IData)((1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pmu2inc_ff__dout) 
                                     >> 1U)))) + (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pmu2inc_ff__dout))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6_incr 
        = ((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6h)) 
             << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6))) 
           + ((QData)((IData)((1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pmu3inc_ff__dout) 
                                     >> 1U)))) + (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pmu3inc_ff__dout))))));
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
    if ((1U == (7U & (IData)(vlSelf->__PVT__wb_adr)))) {
        vlSelf->__PVT__wb_s2m_ptc_dat = vlSelf->__PVT__timer_ptc__DOT__rptc_hrc;
        vlSelf->__PVT__wb_s2m_ptcR_dat = vlSelf->__PVT__timer_ptcR__DOT__rptc_hrc;
        vlSelf->__PVT__wb_s2m_ptcG_dat = vlSelf->__PVT__timer_ptcG__DOT__rptc_hrc;
        vlSelf->__PVT__wb_s2m_ptcB_dat = vlSelf->__PVT__timer_ptcB__DOT__rptc_hrc;
    } else if ((2U == (7U & (IData)(vlSelf->__PVT__wb_adr)))) {
        vlSelf->__PVT__wb_s2m_ptc_dat = vlSelf->__PVT__timer_ptc__DOT__rptc_lrc;
        vlSelf->__PVT__wb_s2m_ptcR_dat = vlSelf->__PVT__timer_ptcR__DOT__rptc_lrc;
        vlSelf->__PVT__wb_s2m_ptcG_dat = vlSelf->__PVT__timer_ptcG__DOT__rptc_lrc;
        vlSelf->__PVT__wb_s2m_ptcB_dat = vlSelf->__PVT__timer_ptcB__DOT__rptc_lrc;
    } else if ((3U == (7U & (IData)(vlSelf->__PVT__wb_adr)))) {
        vlSelf->__PVT__wb_s2m_ptc_dat = vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl;
        vlSelf->__PVT__wb_s2m_ptcR_dat = vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl;
        vlSelf->__PVT__wb_s2m_ptcG_dat = vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl;
        vlSelf->__PVT__wb_s2m_ptcB_dat = vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl;
    } else {
        vlSelf->__PVT__wb_s2m_ptc_dat = vlSelf->__PVT__timer_ptc__DOT__rptc_cntr;
        vlSelf->__PVT__wb_s2m_ptcR_dat = vlSelf->__PVT__timer_ptcR__DOT__rptc_cntr;
        vlSelf->__PVT__wb_s2m_ptcG_dat = vlSelf->__PVT__timer_ptcG__DOT__rptc_cntr;
        vlSelf->__PVT__wb_s2m_ptcB_dat = vlSelf->__PVT__timer_ptcB__DOT__rptc_cntr;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_sync_qual 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                  >> 2U) & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                >> 3U)) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                           >> 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__reset_delayed 
        = (1U & VL_REDXOR_2(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__reset_ff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0xcU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                               >> 3U) & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                         >> 0xbU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_in_debug_mode 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__nmi_ff__dout) 
                  >> 2U) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                            >> 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_timer_t0_pulse 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0 
           >= (~ vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb0_b));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_timer_t1_pulse 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1 
           >= (~ vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb1_b));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_valid_no_ebreak_ecall_wb 
        = (1U & ((~ (IData)((0U != (0x1c0U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout))))) 
                 & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                    >> 6U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__debug_c1_clken 
        = (IData)((0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb_data_en 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0cg1ff__dout) 
                  >> 1U) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                            >> 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__last_pc_e2 
        = ((2U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U])
            ? vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e2pcff__dout
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0e2pcff__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb_ctl_en 
        = (1U & ((0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0cg1ff__dout)) 
                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__ic_debug_wr_data 
        = (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicad1)) 
            << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicad0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_reg_read 
        = ((0x3c03040U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff 
                           >> 6U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff));
    __Vtableidx7 = (0x7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__mask 
        = Vrvfpgasim__ConstPool__TABLE_h51f82406_0[__Vtableidx7];
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h9976cd23__0 
        = (IData)((0ULL == (3ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h19e706e0__0 
        = (IData)((4ULL == (6ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h6a391125__0 
        = (IData)((0xaULL == (0xaULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h1cd1f1ca__0 
        = (IData)((4ULL == (0xcULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h69490df2__0 
        = (IData)((0ULL == (6ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h463c9a98__0 
        = ((2U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0) 
                  << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h1ece13e6__0 
        = ((2U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1) 
                  << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtrEn 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc3) 
           & ((vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout 
               >> 0xdU) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h3fa8c3a1__0 
        = ((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout)) 
           & (2U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)));
    vlSelf->__Vcellinp__spi2__adr_i = ((1U & (IData)(vlSelf->__PVT__wb_adr))
                                        ? 0U : (7U 
                                                & ((IData)(vlSelf->__PVT__wb_adr) 
                                                   >> 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout) 
            << 8U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout) 
                       << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout) 
                                  << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout) 
                                             << 5U) 
                                            | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout) 
                                                << 4U) 
                                               | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout) 
                                                      << 2U) 
                                                     | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout) 
                                                        << 1U))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
        = (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)) 
            << 0x20U) | (QData)((IData)((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout) 
                                          << 0x1cU) 
                                         | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout) 
                                             << 0x18U) 
                                            | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout) 
                                                << 0x14U) 
                                               | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout) 
                                                         << 8U) 
                                                        | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout) 
                                                           << 4U))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout) 
            << 0x10U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout) 
                          << 0xeU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout) 
                                       << 0xcU) | (
                                                   ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout) 
                                                    << 0xaU) 
                                                   | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout) 
                                                       << 8U) 
                                                      | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout) 
                                                          << 6U) 
                                                         | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout) 
                                                             << 4U) 
                                                            | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout) 
                                                               << 2U))))))));
    vlSelf->uart16550_0__DOT__wb_interface__DOT____VdfgTmp_h0129754c__0 
        = ((IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_stb_is) 
           & ((IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_cyc_is) 
              & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wre)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__use_mp_way 
        = (0xfU & ((- (IData)((1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                     >> 8U)))) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                                  >> 4U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgExtracted_he01c99b0__0 
        = (1U & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 2U)) & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                >> 0x17U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[0U] 
        = (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_dff__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[1U] 
        = (IData)((vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_dff__dout 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[2U] 
        = (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_dff__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[3U] 
        = (IData)((vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_dff__dout 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[4U] 
        = (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_dff__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[5U] 
        = (IData)((vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_dff__dout 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[6U] 
        = (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_dff__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[7U] 
        = (IData)((vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_dff__dout 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_sz_dff__dout) 
            << 9U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_sz_dff__dout) 
                       << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_sz_dff__dout) 
                                  << 3U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_sz_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns 
        = (1U & ((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout)) 
                 & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                     >> 8U) | ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                   >> 0xaU)) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                >> 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__ic_debug_way = (
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout 
                                                         >> 0xeU))) 
                                                    << 3U) 
                                                   | (((2U 
                                                        == 
                                                        (3U 
                                                         & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout 
                                                            >> 0xeU))) 
                                                       << 2U) 
                                                      | (((1U 
                                                           == 
                                                           (3U 
                                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout 
                                                               >> 0xeU))) 
                                                          << 1U) 
                                                         | (0U 
                                                            == 
                                                            (3U 
                                                             & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout 
                                                                >> 0xeU))))));
    __Vtemp_h8516f315__0[0U] = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__dout;
    __Vtemp_h8516f315__0[1U] = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__dout;
    __Vtemp_h8516f315__0[2U] = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_dataff__dout;
    __Vtemp_h8516f315__0[3U] = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_dataff__dout;
    __Vtemp_h8516f315__0[4U] = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_dataff__dout;
    __Vtemp_h8516f315__0[5U] = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_dataff__dout;
    __Vtemp_h8516f315__0[6U] = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_dataff__dout)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_dataff__dout))));
    __Vtemp_h8516f315__0[7U] = (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_dataff__dout)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_dataff__dout))) 
                                        >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_data_any 
        = (((0U == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr) 
                             << 5U))) ? 0U : (__Vtemp_h8516f315__0[
                                              (((IData)(0x1fU) 
                                                + (0xffU 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr) 
                                                      << 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr) 
                                                      << 5U))))) 
           | (__Vtemp_h8516f315__0[(7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr))] 
              >> (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr) 
                           << 5U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_ha93e799e__0 
        = (IData)((0xf00c0020U == (0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_ha938af9e__0 
        = (IData)((0xf00c001cU == (0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_ha939cb64__0 
        = (IData)((0xf00c0018U == (0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_ha95b6d21__0 
        = (IData)((0xf00c0014U == (0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_haf17c370__0 
        = (IData)((0xf00c0010U == (0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_haf136327__0 
        = (IData)((0xf00c000cU == (0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_ha96a2393__0 
        = (IData)((0xf00c0008U == (0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_haf708a2b__0 
        = (IData)((0xf00c0004U == (0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h56d03cd5__0 
        = (IData)((0xf00c2020U == (0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h56ca66d5__0 
        = (IData)((0xf00c201cU == (0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h56c8836f__0 
        = (IData)((0xf00c2018U == (0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h56b521b4__0 
        = (IData)((0xf00c2014U == (0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h50ee9b03__0 
        = (IData)((0xf00c2010U == (0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h50ed3bae__0 
        = (IData)((0xf00c200cU == (0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h56a4fae2__0 
        = (IData)((0xf00c2008U == (0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h50824caa__0 
        = (IData)((0xf00c2004U == (0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h724a35a5__0 
        = (IData)((0xf00c4020U == (0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h725063a5__0 
        = (IData)((0xf00c401cU == (0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h72528403__0 
        = (IData)((0xf00c4018U == (0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h727726c4__0 
        = (IData)((0xf00c4014U == (0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h743c8c17__0 
        = (IData)((0xf00c4010U == (0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h743f2cc2__0 
        = (IData)((0xf00c400cU == (0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h7586efb6__0 
        = (IData)((0xf00c4008U == (0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h779845ce__0 
        = (IData)((0xf00c4004U == (0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__shortq_shift_ff 
        = ((0x1fU & (- (IData)((1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__i_shortq_ff__dout) 
                                      >> 3U))))) | 
           ((0x18U & (- (IData)((1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__i_shortq_ff__dout) 
                                       >> 2U))))) | 
            ((0x10U & (- (IData)((1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__i_shortq_ff__dout) 
                                        >> 1U))))) 
             | (8U & (- (IData)((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__i_shortq_ff__dout))))))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[0U] 
        = (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__0__KET____DOT__dccm_bank__Q);
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[1U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__1__KET____DOT__dccm_bank__Q) 
            << 7U) | (IData)((vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__0__KET____DOT__dccm_bank__Q 
                              >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[2U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__2__KET____DOT__dccm_bank__Q) 
            << 0xeU) | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__1__KET____DOT__dccm_bank__Q) 
                         >> 0x19U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__1__KET____DOT__dccm_bank__Q 
                                               >> 0x20U)) 
                                      << 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[3U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__3__KET____DOT__dccm_bank__Q) 
            << 0x15U) | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__2__KET____DOT__dccm_bank__Q) 
                          >> 0x12U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__2__KET____DOT__dccm_bank__Q 
                                                >> 0x20U)) 
                                       << 0xeU)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[4U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__4__KET____DOT__dccm_bank__Q) 
            << 0x1cU) | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__3__KET____DOT__dccm_bank__Q) 
                          >> 0xbU) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__3__KET____DOT__dccm_bank__Q 
                                               >> 0x20U)) 
                                      << 0x15U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[5U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__4__KET____DOT__dccm_bank__Q) 
            >> 4U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__4__KET____DOT__dccm_bank__Q 
                               >> 0x20U)) << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[6U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__5__KET____DOT__dccm_bank__Q) 
            << 3U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__4__KET____DOT__dccm_bank__Q 
                               >> 0x20U)) >> 4U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[7U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__6__KET____DOT__dccm_bank__Q) 
            << 0xaU) | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__5__KET____DOT__dccm_bank__Q) 
                         >> 0x1dU) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__5__KET____DOT__dccm_bank__Q 
                                               >> 0x20U)) 
                                      << 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[8U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__7__KET____DOT__dccm_bank__Q) 
            << 0x11U) | (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__6__KET____DOT__dccm_bank__Q) 
                          >> 0x16U) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__6__KET____DOT__dccm_bank__Q 
                                                >> 0x20U)) 
                                       << 0xaU)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[9U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__7__KET____DOT__dccm_bank__Q) 
            >> 0xfU) | ((IData)((vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__7__KET____DOT__dccm_bank__Q 
                                 >> 0x20U)) << 0x11U));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__en 
        = ((0U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__en 
        = ((1U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__en 
        = ((2U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__en 
        = ((3U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__en 
        = ((4U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__en 
        = ((5U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__en 
        = ((6U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__en 
        = ((7U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff));
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
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h3e42e403__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[1U] 
            >> 0x16U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[2U] 
                         >> 3U));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h9c44d778__0 
        = (IData)((0ULL == (0xaULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h48d67a6c__0 
        = (IData)((8ULL == (0xcULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_hacb8fde8__0 
        = (IData)((3ULL == (3ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h9b01e05f__0 
        = (IData)((0ULL == (0xcULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_hba31054a__0 
        = (1U & ((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                             >> 3U))) & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                 >> 3U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_hba3d3fa9__0 
        = (1U & ((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                             >> 3U))) & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                 >> 2U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_he0e48795__0 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1cg0ff__dout) 
            << 2U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1cg1ff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_dc5 
        = ((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5 
                  >> 3U)) == (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc5 
                                    >> 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc3_clken 
        = (1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc2ff__dout) 
                 | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc2_clken_q))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz_in 
        = ((2U & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc5ff__dout 
                  >> 0xeU)) | (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc5ff__dout 
                                     >> 0x10U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__rem_correct 
        = ((0x21U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__count)) 
           & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout) 
              & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                         >> 0x20U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
        = ((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_data_dc4)) 
           << (0x18U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc4 
                        << 3U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h3429e28e__0 
        = (0xffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_data_dc4 
                    << (0x18U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc4 
                                 << 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_pending 
        = ((5U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
           | ((6U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
              | (7U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_action 
        = (((IData)((0x240U == (0x240U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3)))) 
            << 3U) | (((IData)((0x240U == (0x240U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2)))) 
                       << 2U) | (((IData)((0x240U == 
                                           (0x240U 
                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1)))) 
                                  << 1U) | (IData)(
                                                   (0x240U 
                                                    == 
                                                    (0x240U 
                                                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[0U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_addr_dff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[1U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_addr_dff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[2U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_addr_dff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_addr_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[3U] 
        = (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_addr_dff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_addr_dff__dout))) 
                   >> 0x20U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h657fe855__0[0U] 
        = (IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff)))))));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h657fe855__0[1U] 
        = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                             >> 1U))))))) 
            << 2U) | (IData)(((0x3ffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff)))))) 
                              >> 0x20U)));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h657fe855__0[2U] 
        = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                             >> 2U))))))) 
            << 4U) | (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                        >> 1U))))))) 
                       >> 0x1eU) | ((IData)(((0x3ffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                       >> 1U)))))) 
                                             >> 0x20U)) 
                                    << 2U)));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h657fe855__0[3U] 
        = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                             >> 3U))))))) 
            << 6U) | (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                        >> 2U))))))) 
                       >> 0x1cU) | ((IData)(((0x3ffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                       >> 2U)))))) 
                                             >> 0x20U)) 
                                    << 4U)));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h657fe855__0[4U] 
        = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                             >> 3U))))))) 
            >> 0x1aU) | ((IData)(((0x3ffffffffULL & 
                                   (- (QData)((IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                          >> 3U)))))) 
                                  >> 0x20U)) << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__ic_premux_data[0U] 
        = ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_first_half));
    vlSelf->__PVT__swerv_eh1__DOT__ic_premux_data[1U] 
        = ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))) 
           & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_first_half 
                      >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__ic_premux_data[2U] 
        = ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_second_half));
    vlSelf->__PVT__swerv_eh1__DOT__ic_premux_data[3U] 
        = ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))) 
           & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_second_half 
                      >> 0x20U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h1b1d8ce1__0 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0cg0ff__dout) 
            << 2U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0cg1ff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__perfcnt_halted 
        = (1U & (((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                   >> 0x11U) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                >> 8U)) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                           >> 2U)));
    __Vtemp_ha53a1956__0[0U] = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout)) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout)) 
                                            << 0x39U) 
                                           | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout)) 
                                               << 0x36U) 
                                              | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout)) 
                                                  << 0x33U) 
                                                 | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout)) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout)) 
                                                        << 0x2dU) 
                                                       | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout)) 
                                                           << 0x2aU) 
                                                          | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout)) 
                                                              << 0x27U) 
                                                             | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout)) 
                                                                 << 0x24U) 
                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout)) 
                                                                    << 0x21U) 
                                                                   | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout)) 
                                                                       << 0x1eU) 
                                                                      | (QData)((IData)(
                                                                                (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout))))))))))))))))))))))));
    __Vtemp_ha53a1956__0[1U] = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                                 << 0x1fU) | (IData)(
                                                     ((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout)) 
                                                        << 0x3cU) 
                                                       | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout)) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout)) 
                                                              << 0x36U) 
                                                             | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout)) 
                                                                 << 0x33U) 
                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout)) 
                                                                    << 0x30U) 
                                                                   | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout)) 
                                                                       << 0x2dU) 
                                                                      | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout)) 
                                                                          << 0x2aU) 
                                                                         | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout)) 
                                                                             << 0x27U) 
                                                                            | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout)) 
                                                                                << 0x24U) 
                                                                               | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout)) 
                                                                                << 0x1eU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout))))))))))))))))))))))) 
                                                      >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
        = __Vtemp_ha53a1956__0[0U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
        = __Vtemp_ha53a1956__0[1U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout) 
            << 0x1dU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout) 
                          << 0x1aU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                                        << 0x17U) | 
                                       (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                         << 0x14U) 
                                        | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout) 
                                            << 0x11U) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                                               << 0xeU) 
                                              | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                                  << 0xbU) 
                                                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout) 
                                                     << 8U) 
                                                    | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout) 
                                                        << 5U) 
                                                       | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout) 
                                                           << 2U) 
                                                          | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                                                             >> 1U)))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
            << 0x1eU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                          << 0x1bU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout) 
                                        << 0x18U) | 
                                       (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout) 
                                         << 0x15U) 
                                        | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout) 
                                            << 0x12U) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                                               << 0xfU) 
                                              | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                                  << 0xcU) 
                                                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout) 
                                                     << 9U) 
                                                    | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                                                        << 6U) 
                                                       | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                                           << 3U) 
                                                          | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout)))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
            << 0x1fU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                          << 0x1cU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout) 
                                        << 0x19U) | 
                                       (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                                         << 0x16U) 
                                        | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                            << 0x13U) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout) 
                                               << 0x10U) 
                                              | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout) 
                                                     << 0xaU) 
                                                    | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                                                        << 7U) 
                                                       | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout) 
                                                              << 1U) 
                                                             | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                                                                >> 2U))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout) 
            << 0x1dU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout) 
                          << 0x1aU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                                        << 0x17U) | 
                                       (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout) 
                                         << 0x14U) 
                                        | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout) 
                                            << 0x11U) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout) 
                                               << 0xeU) 
                                              | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout) 
                                                  << 0xbU) 
                                                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout) 
                                                     << 8U) 
                                                    | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout) 
                                                        << 5U) 
                                                       | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout) 
                                                           << 2U) 
                                                          | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout) 
                                                             >> 1U)))))))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h45554d05__0 
        = (IData)((4ULL == (0xcULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha3f640f5__0 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff)) 
           & (0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h1664a179__0 
        = (IData)((3U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hbc02964e__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff) 
           & (0xfU == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff)));
    swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_ha0a1a47e__0 
        = (((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                        >> 0x20U))) & (0U != (0xffU 
                                              & (IData)(
                                                        (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                                                         >> 0x10U))))) 
           | ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                       >> 0x20U)) & (0xffU != (0xffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                                                          >> 0x10U))))));
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
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h6a867bb2__0 
        = (IData)((0xcULL == (0xcULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_haefcd9f0__0 
        = (IData)((0x84000000U == (0x84000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h44dc4833__0 
        = (IData)((0x42000000U == (0x43000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_tsel_out 
        = (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel)))) 
            & (0x23e00000U | ((0x8000000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                             << 0x12U)) 
                              | ((0x180000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                               << 0xcU)) 
                                 | ((0x1800U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                << 6U)) 
                                    | ((0xc0U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                 << 3U)) 
                                       | (7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0)))))))) 
           | (((- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel)))) 
               & (0x23e00000U | ((0x8000000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                << 0x12U)) 
                                 | ((0x180000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                  << 0xcU)) 
                                    | ((0x1800U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                   << 6U)) 
                                       | ((0xc0U & 
                                           ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                            << 3U)) 
                                          | (7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1)))))))) 
              | (((- (IData)((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel)))) 
                  & (0x23e00000U | ((0x8000000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                                   << 0x12U)) 
                                    | ((0x180000U & 
                                        ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                         << 0xcU)) 
                                       | ((0x1800U 
                                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                              << 6U)) 
                                          | ((0xc0U 
                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                                 << 3U)) 
                                             | (7U 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2)))))))) 
                 | ((- (IData)((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel)))) 
                    & (0x23e00000U | ((0x8000000U & 
                                       ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                        << 0x12U)) 
                                      | ((0x180000U 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                             << 0xcU)) 
                                         | ((0x1800U 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                                << 6U)) 
                                            | ((0xc0U 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3)))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parityeff 
        = (0xffU & ((((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                      >> 8U) & ((0xffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parity)) 
                                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parity) 
                                   >> 8U))) | ((((- (IData)(
                                                            (1U 
                                                             == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                                                 >> 8U) 
                                                & ((0xffffffU 
                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2parity)) 
                                                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parity) 
                                                      >> 8U))) 
                                               | (((- (IData)(
                                                              (2U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                                                   >> 8U) 
                                                  & ((0xffffffU 
                                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parity)) 
                                                     | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2parity) 
                                                        >> 8U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parityeff 
        = (0xffffU & (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parity)) 
                      | (((- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parity)) 
                         | ((- (IData)((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2parity)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0 
        = ((6U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl0_ff__dout)) 
           | (1U & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl0_ff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1 
        = ((6U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl1_ff__dout)) 
           | (1U & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl1_ff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcycleh_inc 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcycleh 
           + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_cout_f));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstreth_inc 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstreth 
           + (1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__minstretf_cout_ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f2 
        = (3U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                  >> 3U) ^ ((vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                             >> 5U) ^ (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                       >> 7U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_tag_valid_for_miss 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2_delayed) 
           & (1U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)));
    swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h7460d700__0 
        = ((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc5ff__dout 
               >> 0xaU)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc5));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h60ad7fa4__0 
        = (1U & ((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 0x11U)) & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                      >> 2U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_ha334b20e__0 
        = (((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                        >> 0x20U))) & (0U != (0xffU 
                                              & (IData)(
                                                        (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                                                         >> 0x18U))))) 
           | ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                       >> 0x20U)) & (0xffU != (0xffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                                                          >> 0x18U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write 
        = (1U & ((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 1U)) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                >> 3U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h38b6fe82__0 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus)) 
           & (0U != ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_trxn 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_awready_q) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_awvalid_q)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_wready_q) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_wvalid_q)) 
              | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_arready_q) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_arvalid_q))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_busy 
        = (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_awready_q)) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_awvalid_q)) 
           | (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_wready_q)) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_wvalid_q)) 
              | ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_arready_q)) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_arvalid_q))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__resumereq 
        = (IData)(((4U == (0xcU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout))) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren_Q)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_byteenff__dout) 
            << 0x1cU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_byteenff__dout) 
                          << 0x18U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_byteenff__dout) 
                                        << 0x14U) | 
                                       (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_byteenff__dout) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_byteenff__dout) 
                                            << 0xcU) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_byteenff__dout) 
                                               << 8U) 
                                              | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_byteenff__dout) 
                                                  << 4U) 
                                                 | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_byteenff__dout))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
            << 0x10U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
        = (2U | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout) 
                  << 0xcU) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout) 
                              << 8U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc2ff__dout 
            << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc2ff__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0 
        = (1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                 ^ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                  >> 1U) ^ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                  >> 2U) ^ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                  >> 3U) ^ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                  >> 4U) ^ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                  >> 5U) ^ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                  >> 6U) ^ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                  >> 7U) ^ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_hec05b247__0 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_dc4) 
                 << (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc4)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h1ab1030c__0 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_dc5) 
                 << (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_all_banks_error_wb 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                  >> 0xeU) | (IData)((0x200U == (0x8200U 
                                                 & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__eq 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__a_ff 
           == vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__b_ff);
    __Vtemp_h39f77aa7__0[0U] = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)) 
                                            << 0x3cU) 
                                           | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)) 
                                                  << 0x38U) 
                                                 | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)) 
                                                     << 0x36U) 
                                                    | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)) 
                                                        << 0x34U) 
                                                       | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)) 
                                                           << 0x32U) 
                                                          | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)) 
                                                              << 0x30U) 
                                                             | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)) 
                                                                 << 0x2eU) 
                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)) 
                                                                    << 0x2cU) 
                                                                   | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)) 
                                                                       << 0x2aU) 
                                                                      | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)) 
                                                                          << 0x28U) 
                                                                         | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)) 
                                                                             << 0x26U) 
                                                                            | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)) 
                                                                                << 0x24U) 
                                                                               | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)))))))))))))))))))))))))))))))))));
    __Vtemp_h39f77aa7__0[1U] = (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)) 
                                             << 0x3cU) 
                                            | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)) 
                                                << 0x3aU) 
                                               | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)) 
                                                   << 0x38U) 
                                                  | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)) 
                                                      << 0x36U) 
                                                     | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)) 
                                                         << 0x34U) 
                                                        | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)) 
                                                            << 0x32U) 
                                                           | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)) 
                                                               << 0x30U) 
                                                              | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)) 
                                                                  << 0x2eU) 
                                                                 | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)) 
                                                                     << 0x2cU) 
                                                                    | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)) 
                                                                        << 0x2aU) 
                                                                       | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)) 
                                                                           << 0x28U) 
                                                                          | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)) 
                                                                              << 0x26U) 
                                                                             | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[0U] 
        = __Vtemp_h39f77aa7__0[0U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[1U] 
        = __Vtemp_h39f77aa7__0[1U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[2U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout) 
            << 0x1eU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout) 
                          << 0x1cU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout) 
                                        << 0x1aU) | 
                                       (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout) 
                                         << 0x18U) 
                                        | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout) 
                                            << 0x16U) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout) 
                                               << 0x14U) 
                                              | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout) 
                                                        << 0xeU) 
                                                       | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout) 
                                                           << 0xcU) 
                                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout) 
                                                                       << 4U) 
                                                                      | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout) 
                                                                          << 2U) 
                                                                         | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout))))))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[3U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout) 
            << 0x1eU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout) 
                          << 0x1cU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout) 
                                        << 0x1aU) | 
                                       (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout) 
                                         << 0x18U) 
                                        | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout) 
                                            << 0x16U) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout) 
                                               << 0x14U) 
                                              | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout) 
                                                        << 0xeU) 
                                                       | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout) 
                                                           << 0xcU) 
                                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout) 
                                                                       << 4U) 
                                                                      | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout) 
                                                                          << 2U) 
                                                                         | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout))))))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[4U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout) 
            << 0x1eU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout) 
                          << 0x1cU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout) 
                                        << 0x1aU) | 
                                       (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout) 
                                         << 0x18U) 
                                        | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout) 
                                            << 0x16U) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout) 
                                               << 0x14U) 
                                              | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout) 
                                                        << 0xeU) 
                                                       | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout) 
                                                           << 0xcU) 
                                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout) 
                                                                       << 4U) 
                                                                      | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout) 
                                                                          << 2U) 
                                                                         | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout))))))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[5U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout) 
            << 0x1eU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout) 
                          << 0x1cU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout) 
                                        << 0x1aU) | 
                                       (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout) 
                                         << 0x18U) 
                                        | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout) 
                                            << 0x16U) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout) 
                                               << 0x14U) 
                                              | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout) 
                                                        << 0xeU) 
                                                       | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout) 
                                                           << 0xcU) 
                                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout) 
                                                                       << 4U) 
                                                                      | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout) 
                                                                          << 2U) 
                                                                         | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout))))))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[6U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout) 
            << 0x1eU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout) 
                          << 0x1cU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout) 
                                        << 0x1aU) | 
                                       (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout) 
                                         << 0x18U) 
                                        | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout) 
                                            << 0x16U) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout) 
                                               << 0x14U) 
                                              | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout) 
                                                        << 0xeU) 
                                                       | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout) 
                                                           << 0xcU) 
                                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout) 
                                                                       << 4U) 
                                                                      | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout) 
                                                                          << 2U) 
                                                                         | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout))))))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_rd_data_out[7U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout) 
            << 0x1eU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout) 
                          << 0x1cU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout) 
                                        << 0x1aU) | 
                                       (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout) 
                                         << 0x18U) 
                                        | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout) 
                                            << 0x16U) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout) 
                                               << 0x14U) 
                                              | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout) 
                                                        << 0xeU) 
                                                       | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout) 
                                                           << 0xcU) 
                                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout) 
                                                                       << 4U) 
                                                                      | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout) 
                                                                          << 2U) 
                                                                         | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout))))))))))))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h2ea6b68a__0 
        = (IData)((0x8000000U == (0xc000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h8ca0fde3__0 
        = (IData)((0x6000000U == (0x6000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgTmp_h41b7a3bb__0 
        = (IData)((0x5400000U == (0x5400000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgTmp_h8c96794b__0 
        = (IData)((0x4400000U == (0x4400000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgTmp_h745cdf40__0 
        = (IData)((0x5000000U == (0x7400000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_byteenff__dout) 
            << 0x1cU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_byteenff__dout) 
                          << 0x18U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_byteenff__dout) 
                                        << 0x14U) | 
                                       (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_byteenff__dout) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_byteenff__dout) 
                                            << 0xcU) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_byteenff__dout) 
                                               << 8U) 
                                              | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_byteenff__dout) 
                                                  << 4U) 
                                                 | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_byteenff__dout))))))));
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
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_hc9ffea17__0 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_dc3) 
                 << (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h09dd1d12__0 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout) 
                  >> 1U) & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                    >> 0x1fU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__eq 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__a_ff 
           == vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__b_ff);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__1__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[1U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__2__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[2U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__3__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[3U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__4__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[4U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__5__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[5U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__6__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[6U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__7__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[7U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__8__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[8U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__9__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[9U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__10__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xaU] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__11__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xbU] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__12__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xcU] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__13__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xdU] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__14__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xeU] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__15__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xfU] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__16__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x10U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__17__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x11U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__18__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x12U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__19__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x13U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__20__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x14U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__21__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x15U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__22__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x16U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__23__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x17U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__24__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x18U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__25__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x19U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__26__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1aU] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__27__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1bU] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__28__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1cU] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__29__KET____DOT__gprff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1dU] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__31__KET____DOT__gprff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__30__KET____DOT__gprff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1eU] 
        = (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__31__KET____DOT__gprff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__30__KET____DOT__gprff__dout))) 
                   >> 0x20U));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h2d4c77fb__0 
        = (IData)((6U != (6U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h366b7b7b__0[0U] 
        = (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0)) 
           | (((- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1)) 
              | ((- (IData)((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h366b7b7b__0[1U] 
        = (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
            & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1) 
                << 0x13U) | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0 
                                     >> 0x20U)))) | 
           (((- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
             & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2) 
                 << 0x13U) | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1 
                                      >> 0x20U)))) 
            | ((- (IData)((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
               & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0) 
                   << 0x13U) | (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2 
                                        >> 0x20U))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h366b7b7b__0[2U] 
        = (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
            & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1) 
                >> 0xdU) | ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1 
                                     >> 0x20U)) << 0x13U))) 
           | (((- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
               & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2) 
                   >> 0xdU) | ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2 
                                        >> 0x20U)) 
                               << 0x13U))) | ((- (IData)(
                                                         (2U 
                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                                              & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0) 
                                                  >> 0xdU) 
                                                 | ((IData)(
                                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0 
                                                             >> 0x20U)) 
                                                    << 0x13U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h366b7b7b__0[3U] 
        = (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
            & ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1 
                        >> 0x20U)) >> 0xdU)) | (((- (IData)(
                                                            (1U 
                                                             == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2 
                                                             >> 0x20U)) 
                                                    >> 0xdU)) 
                                                | ((- (IData)(
                                                              (2U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0 
                                                               >> 0x20U)) 
                                                      >> 0xdU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
        = (((((QData)((IData)((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))))) 
              << 0x20U) | (QData)((IData)((- (IData)(
                                                     (0U 
                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))))))) 
            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0) 
           | (((((QData)((IData)((- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))))) 
                 << 0x20U) | (QData)((IData)((- (IData)(
                                                        (1U 
                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))))))) 
               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1) 
              | ((((QData)((IData)((- (IData)((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))))) 
                   << 0x20U) | (QData)((IData)((- (IData)(
                                                          (2U 
                                                           == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))))))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2)));
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
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_flush_vldff__dout) 
            << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_flush_vldff__dout) 
                       << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_flush_vldff__dout) 
                                  << 5U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_flush_vldff__dout) 
                                             << 4U) 
                                            | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_flush_vldff__dout) 
                                                << 3U) 
                                               | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_flush_vldff__dout) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_flush_vldff__dout) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_flush_vldff__dout))))))));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h7dfda076__0 
        = (IData)((0x400000U == (0x1c00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____VdfgTmp_h48c0115c__0 
        = (3U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout 
                  >> 0x11U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout 
                               >> 0x10U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____VdfgTmp_h48c0115c__0 
        = (3U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout 
                  >> 0x11U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout 
                               >> 0x10U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_sideeffectff__dout) 
            << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_sideeffectff__dout) 
                       << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_sideeffectff__dout) 
                                  << 5U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_sideeffectff__dout) 
                                             << 4U) 
                                            | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_sideeffectff__dout) 
                                                << 3U) 
                                               | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_sideeffectff__dout) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_sideeffectff__dout) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_sideeffectff__dout))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__ibradder__DOT__cout 
        = (1U & (((0xfffU & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__pcff__dout) 
                  + (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__brimmff__dout)) 
                 >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc3ff__dout) 
           & (IData)((0x2400U == (0x2400U & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_path_final 
        = (0x7fffffffU & ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                           ? vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__flush_lower_ff__dout
                           : ((1U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e2_ff__dout)
                               ? (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e2_ff__dout 
                                  >> 1U) : (IData)(
                                                   (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e2_ff__dout 
                                                    >> 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_drain_vldff__dout) 
            << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_drain_vldff__dout) 
                       << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_drain_vldff__dout) 
                                  << 5U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_drain_vldff__dout) 
                                             << 4U) 
                                            | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_drain_vldff__dout) 
                                                << 3U) 
                                               | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_drain_vldff__dout) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_drain_vldff__dout) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_drain_vldff__dout))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__ibradder__DOT__cout 
        = (1U & (((0xfffU & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__pcff__dout) 
                  + (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__brimmff__dout)) 
                 >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)
            ? (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_data_beat_count))
            : (7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_data_beat_count)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_addr_in_picff__dout) 
            << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_addr_in_picff__dout) 
                       << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_addr_in_picff__dout) 
                                  << 5U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_addr_in_picff__dout) 
                                             << 4U) 
                                            | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_addr_in_picff__dout) 
                                                << 3U) 
                                               | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_addr_in_picff__dout) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_addr_in_picff__dout) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_addr_in_picff__dout))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_error_wb 
        = (IData)((0U != (0xc600U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[0U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_addrff__dout) 
            << 0x10U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_addrff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[1U] 
        = (((0xffffU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_addrff__dout)) 
            | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_addrff__dout) 
               >> 0x10U)) | ((IData)((((QData)((IData)(
                                                       (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_addrff__dout) 
                                                         << 0x10U) 
                                                        | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_addrff__dout)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_addrff__dout) 
                                                                     << 0x10U) 
                                                                    | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_addrff__dout)))))) 
                             << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[2U] 
        = (((IData)((((QData)((IData)((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_addrff__dout) 
                                        << 0x10U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_addrff__dout)))) 
                      << 0x20U) | (QData)((IData)((
                                                   ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_addrff__dout) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_addrff__dout)))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_addrff__dout) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_addrff__dout)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_addrff__dout) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_addrff__dout))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[3U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_addrff__dout) 
            << 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_addrff__dout) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_addrff__dout)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_addrff__dout) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_addrff__dout))))) 
                                  >> 0x20U)) >> 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_szff__dout) 
            << 0xeU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_szff__dout) 
                         << 0xcU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_szff__dout) 
                                      << 0xaU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_szff__dout) 
                                                   << 8U) 
                                                  | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_szff__dout) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_szff__dout) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_szff__dout) 
                                                            << 2U) 
                                                           | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_szff__dout))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__any_jal 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout 
                  >> 4U) | (IData)((0U != (0x38000U 
                                           & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[0U])))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_hb3ed4232__0 
        = (((QData)((IData)((0x7fffffffU & ((IData)(2U) 
                                            + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout)))) 
            << 0x1fU) | (QData)((IData)((0x7fffffffU 
                                         & ((IData)(3U) 
                                            + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_ha88c5ace__0 
        = (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout)) 
            << 0x1fU) | (QData)((IData)((0x7fffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h16fd7dfc__0 
        = (((QData)((IData)((0x7fffffffU & ((IData)(1U) 
                                            + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout)))) 
            << 0x1fU) | (QData)((IData)((0x7fffffffU 
                                         & ((IData)(2U) 
                                            + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h3984a296__0 
        = (((QData)((IData)((0x7fffffffU & ((IData)(2U) 
                                            + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout)))) 
            << 0x1fU) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout)));
    swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h6ff8d0d1__0 
        = (IData)((0U != (0xc000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h65f8ca4a__0 
        = ((0U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
           | (2U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mul_result_e3 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__low_e3)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__prod_e3)
            : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__prod_e3 
                       >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__any_jal 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout 
                  >> 4U) | (IData)((0U != (0x38000U 
                                           & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[0U])))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__din_plus_parity 
        = (((QData)((IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                                   >> 6U)))) << 0x26U) 
           | (((QData)((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3 
                                >> 0x1aU))) << 0x20U) 
              | (QData)((IData)(((0x80000000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                                                 << 0x1aU)) 
                                 | ((0x7fff0000U & 
                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3 
                                      << 5U)) | ((0x8000U 
                                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                                                     << 0xbU)) 
                                                 | ((0x7f00U 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3 
                                                        << 4U)) 
                                                    | ((0x80U 
                                                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                                                           << 4U)) 
                                                       | ((0x70U 
                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3 
                                                              << 3U)) 
                                                          | ((8U 
                                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                                                                 << 1U)) 
                                                             | ((4U 
                                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3 
                                                                    << 2U)) 
                                                                | (3U 
                                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3))))))))))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hcdf3660d__0 
        = (1U & ((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout 
                     >> 0xaU)) & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc2ff__dout 
                                  >> 0xaU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__jit_in_same_region 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_en_new 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_bus_clk_en_ff) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rvalid_unq_ff)) 
           & (0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__din_plus_parity 
        = (((QData)((IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                                   >> 6U)))) << 0x26U) 
           | (((QData)((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3 
                                >> 0x1aU))) << 0x20U) 
              | (QData)((IData)(((0x80000000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                                                 << 0x1aU)) 
                                 | ((0x7fff0000U & 
                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3 
                                      << 5U)) | ((0x8000U 
                                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                                                     << 0xbU)) 
                                                 | ((0x7f00U 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3 
                                                        << 4U)) 
                                                    | ((0x80U 
                                                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                                                           << 4U)) 
                                                       | ((0x70U 
                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3 
                                                              << 3U)) 
                                                          | ((8U 
                                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                                                                 << 1U)) 
                                                             | ((4U 
                                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3 
                                                                    << 2U)) 
                                                                | (3U 
                                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3))))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb 
        = (1U & ((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                 & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                    >> 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_dataff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_dataff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_dataff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_dataff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[4U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_dataff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[5U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_dataff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[6U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_dataff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_dataff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[7U] 
        = (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_dataff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_dataff__dout))) 
                   >> 0x20U));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h6154c559__0 
        = ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                      << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                >> 0x1eU))) == (0x1fU 
                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 6U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4 
        = (0xffU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_dc4) 
                    << (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc4)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5 
        = (0xffU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_dc5) 
                    << (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__bm 
        = ((0x80U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout)
            ? (~ vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__b_ff)
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__b_ff);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dbg_dma_bubble_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((~ (IData)((0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
            & (3U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
           | (4U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_load_kill_wen 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
           & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
              >> 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__bm 
        = ((0x80U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout)
            ? (~ vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__b_ff)
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__b_ff);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3 
        = (0xffU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_dc3) 
                    << (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____VdfgTmp_h48c0115c__0 
        = (3U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout 
                  >> 0x11U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout 
                               >> 0x10U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____VdfgTmp_h48c0115c__0 
        = (3U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout 
                  >> 0x11U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout 
                               >> 0x10U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__ibradder__DOT__cout 
        = (1U & (((0xfffU & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__pcff__dout) 
                  + (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__brimmff__dout)) 
                 >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__ibradder__DOT__cout 
        = (1U & (((0xfffU & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__pcff__dout) 
                  + (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__brimmff__dout)) 
                 >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff 
        = ((0xffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff) 
           | (vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__adr_ff__dout 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r 
        = ((0x7c00U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                       >> 5U)) | ((0x3e0U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                             >> 0xfU)) 
                                  | (0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                              >> 7U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____VdfgTmp_hadfe02c7__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____VdfgTmp_h98d2e34e__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____VdfgTmp_h827b9336__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____VdfgTmp_hd63020dd__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_dc3 
        = (0xffU & ((1U & (- (IData)((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout 
                                            >> 0x11U))))) 
                    | ((3U & (- (IData)((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout 
                                               >> 0x10U))))) 
                       | ((0xfU & (- (IData)((1U & 
                                              (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout 
                                               >> 0xfU))))) 
                          | (- (IData)((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout 
                                              >> 0xeU))))))));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____VdfgTmp_ha8cdac88__0 
        = (- (IData)((IData)((4U == (0x84U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0))))));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____VdfgTmp_h785b8957__0 
        = (- (IData)((IData)((4U == (0x84U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1))))));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____VdfgTmp_hc9846603__0 
        = (- (IData)((IData)((4U == (0x84U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2))))));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____VdfgTmp_h5c304fee__0 
        = (- (IData)((IData)((4U == (0x84U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1738f30a__0 
        = (IData)((0x8000000U == (0x88000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed 
        = (1U & VL_REDXOR_2(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__reset_ff__dout));
    __Vtemp_h9310beb0__0[0U] = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way0_tagvalid_dup__dout)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_h9310beb0__0[1U] = (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way0_tagvalid_dup__dout)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way0_tagvalid_dup__dout) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way0_tagvalid_dup__dout)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_h33ce99ef__0[2U] = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                 << 0x10U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                               << 0xfU) 
                                              | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way1_tagvalid_dup__dout)))))))))))))))));
    __Vtemp_h16751ae9__0[3U] = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                 << 0x10U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                               << 0xfU) 
                                              | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way1_tagvalid_dup__dout)))))))))))))))));
    __Vtemp_h19ba7342__0[4U] = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                 << 0x10U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                               << 0xfU) 
                                              | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way2_tagvalid_dup__dout)))))))))))))))));
    __Vtemp_h76bc4dec__0[5U] = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                 << 0x10U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                               << 0xfU) 
                                              | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way2_tagvalid_dup__dout)))))))))))))))));
    __Vtemp_h958cc155__0[6U] = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                 << 0x10U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                               << 0xfU) 
                                              | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way3_tagvalid_dup__dout)))))))))))))))));
    __Vtemp_h4cb9d5cb__0[7U] = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                 << 0x10U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                               << 0xfU) 
                                              | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way3_tagvalid_dup__dout)))))))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
        = __Vtemp_h9310beb0__0[0U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
        = __Vtemp_h9310beb0__0[1U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way1_tagvalid_dup__dout) 
            << 0x1fU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way1_tagvalid_dup__dout) 
                          << 0x1eU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                          << 0x11U) 
                                                                         | __Vtemp_h33ce99ef__0[2U])))))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way1_tagvalid_dup__dout) 
            << 0x1fU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way1_tagvalid_dup__dout) 
                          << 0x1eU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way1_tagvalid_dup__dout) 
                                                                          << 0x11U) 
                                                                         | __Vtemp_h16751ae9__0[3U])))))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way2_tagvalid_dup__dout) 
            << 0x1fU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way2_tagvalid_dup__dout) 
                          << 0x1eU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                          << 0x11U) 
                                                                         | __Vtemp_h19ba7342__0[4U])))))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way2_tagvalid_dup__dout) 
            << 0x1fU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way2_tagvalid_dup__dout) 
                          << 0x1eU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way2_tagvalid_dup__dout) 
                                                                          << 0x11U) 
                                                                         | __Vtemp_h76bc4dec__0[5U])))))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way3_tagvalid_dup__dout) 
            << 0x1fU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way3_tagvalid_dup__dout) 
                          << 0x1eU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                          << 0x11U) 
                                                                         | __Vtemp_h958cc155__0[6U])))))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way3_tagvalid_dup__dout) 
            << 0x1fU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way3_tagvalid_dup__dout) 
                          << 0x1eU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way3_tagvalid_dup__dout) 
                                                                          << 0x11U) 
                                                                         | __Vtemp_h4cb9d5cb__0[7U])))))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1eff 
        = (((QData)((IData)((((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                              & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1 
                                         >> 0x20U))) 
                             | (((- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                                 & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata2 
                                            >> 0x20U))) 
                                | ((- (IData)((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                                   & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0 
                                              >> 0x20U))))))) 
            << 0x20U) | (QData)((IData)((((- (IData)(
                                                     (0U 
                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1)) 
                                         | (((- (IData)(
                                                        (1U 
                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata2)) 
                                            | ((- (IData)(
                                                          (2U 
                                                           == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0)))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h2eb54cad__0 
        = (IData)((0x4000000U == (0xc000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0x3ffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xc0000U & (((4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
                           << 0x13U) | ((4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                        << 0x12U))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xf01ffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xe03ffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xffc00U & (0xc00U | (0xf000U & (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q) 
                                                >> 
                                                (7U 
                                                 & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q) 
                                                    << 2U))) 
                                               << 0xcU)))));
    if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x10000U | vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o 
        = ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))
            ? (0xfffU & (IData)((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                                 >> (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))))
            : 0U);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4db7051c__0 
        = (IData)((0U == (0xd00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h76de5f9d__0 
        = (IData)((0U == (0x1c00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0x3ffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xc0000U & (((4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
                           << 0x13U) | ((4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                        << 0x12U))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xf01ffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xe03ffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xffc00U & (0xc00U | (0xf000U & (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q) 
                                                >> 
                                                (7U 
                                                 & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q) 
                                                    << 2U))) 
                                               << 0xcU)))));
    if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x10000U | vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o 
        = ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))
            ? (0xfffU & (IData)((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                                 >> (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))))
            : 0U);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_halt_req_sync_qual 
        = (1U & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 3U)) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                >> 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_fifo_ready 
        = (1U & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_full_spec_bus) 
                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dbg_dma_bubble_bus) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dec_tlu_stall_dma_bus)))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0x3ffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xc0000U & (((4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
                           << 0x13U) | ((4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                        << 0x12U))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xf01ffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xe03ffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xffc00U & (0xc00U | (0xf000U & (((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q) 
                                                >> 
                                                (7U 
                                                 & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q) 
                                                    << 2U))) 
                                               << 0xcU)))));
    if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x10000U | vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o 
        = ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))
            ? (0xfffU & (IData)((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                                 >> (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))))
            : 0U);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_err_wb 
        = (IData)((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    >> 2U) & (0U != (0x600U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_h58e9ffcf__0 
        = (1U & VL_REDXOR_32((0xe0000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_h6b771252__0 
        = (1U & VL_REDXOR_32((0x3fc0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0eff 
        = (((((QData)((IData)((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))))) 
              << 0x20U) | (QData)((IData)((- (IData)(
                                                     (0U 
                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))))))) 
            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0) 
           | (((((QData)((IData)((- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))))) 
                 << 0x20U) | (QData)((IData)((- (IData)(
                                                        (1U 
                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))))))) 
               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1) 
              | ((((QData)((IData)((- (IData)((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))))) 
                   << 0x20U) | (QData)((IData)((- (IData)(
                                                          (2U 
                                                           == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))))))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_h58e9ffcf__0 
        = (1U & VL_REDXOR_32((0xe0000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_h6b771252__0 
        = (1U & VL_REDXOR_32((0x3fc0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r 
        = ((0x7c00U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                       >> 5U)) | ((0x3e0U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                             >> 0xfU)) 
                                  | (0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                              >> 7U))));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1973ddaf__0 
        = (IData)((0U == (0x82000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__ps_stall) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__div_stall_ff) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__run_state)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__prior_inflight_e1e4 
        = (1U & (IData)(((((0U != (0x1000002U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U])) 
                           | (0U != (0x1000002U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U]))) 
                          | (0U != (0x1000002U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U]))) 
                         | (0U != (0x1000002U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U])))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____VdfgTmp_hf6cf698a__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data_vld) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_vld));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h726aa90e__0 
        = (IData)((0x40a00000U == (0x40a00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_haea96e68__0 
        = (IData)((0xc0000000U == (0xc0000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h75e528cf__0 
        = (IData)((0x300000U == (0x300000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    if ((8U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din = 0U;
        } else if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din = 0U;
        } else if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din = 0U;
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
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h9242cd9f__0 
        = (IData)((6U == (6U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h5acd70c9__0 
        = (1U & ((0U != (0x1800U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)) 
                 | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                    >> 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd 
        = (0x1fU & ((0x10000000U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U])
                     ? ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[2U] 
                         << 2U) | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                   >> 0x1eU)) : ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                  << 0x1aU) 
                                                 | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                    >> 6U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_ha35e147d__0 
        = (IData)((0x200000U == (0x3e00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__isldst_dc1 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc1ff__dout) 
           & (IData)((0U != (0x3000U & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc1ff__dout))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT____VdfgTmp_ha3e1870f__0 
        = ((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc1ff__dout 
               >> 0xaU)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc1ff__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT____VdfgTmp_h3d2551bb__0 
        = ((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout 
               >> 0xaU)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc3ff__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hda6ef834__0 
        = (1U & (VL_REDXOR_32(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3) 
                 ^ VL_REDXOR_8(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h51bf4b44__0 
        = (IData)((0x100000U == (0x300000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hda6ef834__0 
        = (1U & (VL_REDXOR_32(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3) 
                 ^ VL_REDXOR_8(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__5__KET____DOT__cam_ff__dout)) 
                    << 0x32U) | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__4__KET____DOT__cam_ff__dout)) 
                                  << 0x28U) | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__3__KET____DOT__cam_ff__dout)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__2__KET____DOT__cam_ff__dout) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__1__KET____DOT__cam_ff__dout) 
                                                                      << 0xaU) 
                                                                     | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__0__KET____DOT__cam_ff__dout)))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__6__KET____DOT__cam_ff__dout) 
            << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__5__KET____DOT__cam_ff__dout)) 
                                   << 0x32U) | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__4__KET____DOT__cam_ff__dout)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__3__KET____DOT__cam_ff__dout)) 
                                                    << 0x1eU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__2__KET____DOT__cam_ff__dout) 
                                                                       << 0x14U) 
                                                                      | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__1__KET____DOT__cam_ff__dout) 
                                                                          << 0xaU) 
                                                                         | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__0__KET____DOT__cam_ff__dout)))))))) 
                                 >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__7__KET____DOT__cam_ff__dout) 
            << 6U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__6__KET____DOT__cam_ff__dout) 
                      >> 4U));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h037aef6b__0 
        = (IData)((0x30000000U == (0xf8000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_heccc3437__0 
        = (IData)((0x1000000U == (0x1800000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h2f6ff935__0 
        = (IData)((0x40000000U == (0x48000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h2f1a5499__0 
        = (IData)((0x40000000U == (0x44000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h60393036__0 
        = (IData)((0x41800000U == (0x41800000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT____VdfgTmp_hb8d99d30__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc3) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hf0b70392__0 
        = (IData)((0U == (0x1800000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgTmp_h5523656b__0 
        = (IData)((0x200000U == (0x300000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h185f1bb7__0 
        = (IData)((0x78000000U == (0xf8000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h56ee58c9__0 
        = (IData)((0U == (0x300000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_he9b8ab1b__0 
        = (IData)((0x40000000U == (0x41000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_raw 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_debug_fence_d) 
           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg 
              >> 1U));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h33799c16__0 
        = (IData)((4U == (6U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)));
    swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hbefbf355__0 
        = (IData)((0x30000000U == (0x30000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
        = ((vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc1ff__dout 
            << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc1ff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_i 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_debug_fence_d) 
           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____VdfgTmp_h9ac69a0f__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_nack_count) 
           >= (7U & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                        >> 0xbU))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____VdfgTmp_h6895f74d__0 
        = (1U & (~ ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_done_dff__dout) 
                      << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_done_dff__dout) 
                                 << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_done_dff__dout) 
                                            << 1U) 
                                           | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_done_dff__dout)))) 
                    >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_flush_pause_wb 
        = (1U & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                     >> 0xeU)) & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                  >> 5U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_valid 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_valid_dff__dout) 
            << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_valid_dff__dout) 
                       << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_valid_dff__dout) 
                                  << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_valid_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_error_dff__dout) 
            << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_error_dff__dout) 
                       << 4U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_error_dff__dout) 
                                  << 2U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_error_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_write_dff__dout) 
            << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_write_dff__dout) 
                       << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_write_dff__dout) 
                                  << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_write_dff__dout))));
    __VdfgTmp_h012add0b__0 = (IData)((0U != (0x3000U 
                                             & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_data_vldff__dout) 
            << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_data_vldff__dout) 
                       << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_data_vldff__dout) 
                                  << 5U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_data_vldff__dout) 
                                             << 4U) 
                                            | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_data_vldff__dout) 
                                                << 3U) 
                                               | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_data_vldff__dout) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_data_vldff__dout) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_data_vldff__dout))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_valid_dff__dout) 
            << 3U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_valid_dff__dout) 
                       << 2U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_valid_dff__dout) 
                                  << 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_valid_dff__dout))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hc314f33a__0 
        = (1U & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                     >> 1U)) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__nmi_ff__dout) 
                                >> 2U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h0432c7e4__0 
        = (IData)((2U == (6U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_offset_dc1 
        = (0x1fffU & (((0x1000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offset_dc1) 
                                   << 1U)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offset_dc1)) 
                      + (7U & ((1U & (- (IData)((1U 
                                                 & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc1ff__dout 
                                                    >> 0x10U))))) 
                               | ((3U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc1ff__dout 
                                                       >> 0xfU))))) 
                                  | (- (IData)((1U 
                                                & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc1ff__dout 
                                                   >> 0xeU)))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr1 
        = ((0xcU & ((0xfffffffcU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ghrff__dout)) 
                    ^ (8U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ghrff__dout) 
                             >> 1U)))) | (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_index_ff__dout) 
                                                ^ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ghrff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_addr2 
        = ((0xcU & ((0x7fffffcU & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ghrff__dout) 
                                   >> 5U)) ^ (8U & 
                                              ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ghrff__dout) 
                                               >> 6U)))) 
           | (3U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_index_ff__dout) 
                     >> 2U) ^ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ghrff__dout) 
                               >> 5U))));
    __Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__in 
        = ((6U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                  >> 3U)) | (1U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout 
        = ((0x7fU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout)) 
           | ((IData)((7U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__in))) 
              << 7U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout 
        = ((0xbfU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout)) 
           | ((IData)((6U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__in))) 
              << 6U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout 
        = ((0xdfU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout)) 
           | ((IData)((5U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__in))) 
              << 5U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout 
        = ((0xefU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout)) 
           | ((IData)((4U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__in))) 
              << 4U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout 
        = ((0xf7U & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout)) 
           | ((IData)((3U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__in))) 
              << 3U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout 
        = ((0xfbU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout)) 
           | ((IData)((2U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__in))) 
              << 2U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout 
        = ((0xfdU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout)) 
           | ((IData)((1U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__in))) 
              << 1U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout 
        = ((0xfeU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout)) 
           | (IData)((0U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__in))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1 
        = ((- (IData)((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                             >> 8U)))) & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout));
    __Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__in 
        = ((6U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                  >> 5U)) | (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                                   >> 1U)));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout 
        = ((0x7fU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout)) 
           | ((IData)((7U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__in))) 
              << 7U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout 
        = ((0xbfU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout)) 
           | ((IData)((6U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__in))) 
              << 6U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout 
        = ((0xdfU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout)) 
           | ((IData)((5U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__in))) 
              << 5U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout 
        = ((0xefU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout)) 
           | ((IData)((4U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__in))) 
              << 4U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout 
        = ((0xf7U & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout)) 
           | ((IData)((3U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__in))) 
              << 3U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout 
        = ((0xfbU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout)) 
           | ((IData)((2U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__in))) 
              << 2U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout 
        = ((0xfdU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout)) 
           | ((IData)((1U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__in))) 
              << 1U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout 
        = ((0xfeU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout)) 
           | (IData)((0U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__in))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2 
        = ((- (IData)((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                             >> 0xdU)))) & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h8062c6bd__0 
        = (IData)((0U == (6U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_hcb8dd9c9__0 
        = ((2U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout) 
                  << 1U)) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_exc_dc4_raw 
        = (IData)((0x4800000000ULL == (0x4800000000ULL 
                                       & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff 
        = (((0x300U == (0xfffU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[0U] 
                                  >> 0x13U))) | (0x304U 
                                                 == 
                                                 (0xfffU 
                                                  & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[0U] 
                                                     >> 0x13U)))) 
           & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
              & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 1U)) & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                >> 0x18U))));
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
        = (0x2000000U | ((0x1ffffffU & vlSelf->__PVT__axi_intercon__DOT__slaves_resp[2U]) 
                         | ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata) 
                            << 0x1cU)));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[3U] 
        = ((0x1ffffffU & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata) 
                          >> 4U)) | ((0xe000000U & 
                                      ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata) 
                                       >> 4U)) | ((IData)(
                                                          (vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata 
                                                           >> 0x20U)) 
                                                  << 0x1cU)));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[4U] 
        = ((0x1ffffffU & ((IData)((vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata 
                                   >> 0x20U)) >> 4U)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rid) 
               << 0x1cU) | (0xe000000U & ((IData)((vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata 
                                                   >> 0x20U)) 
                                          >> 4U))));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[5U] 
        = ((0xfff8U & vlSelf->__PVT__axi_intercon__DOT__slaves_resp[5U]) 
           | (0xffffU & ((0x1fffffcU & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rvalid) 
                                        << 2U)) | (0x1ffffffU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rid) 
                                                      >> 4U)))));
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
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[5U] 
        = ((0xfU & vlSelf->__PVT__axi_intercon__DOT__slaves_resp[5U]) 
           | (0xfff0U & (((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_awready) 
                          << 0xfU) | (((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_arready) 
                                       << 0xeU) | (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_wready) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_bvalid) 
                                                       << 0xcU) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_bid) 
                                                         << 6U)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4 
        = (1U & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 2U)) & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                >> 1U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____VdfgTmp_h95babc3b__0 
        = (- (IData)((IData)((0x20800U == (0x20800U 
                                           & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____VdfgTmp_h94d6637d__0 
        = (- (IData)((IData)((0x10800U == (0x10800U 
                                           & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____VdfgTmp_h3ecf5b77__0 
        = (- (IData)((IData)((0x20000U == (0x20800U 
                                           & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____VdfgTmp_hf0c682d7__0 
        = (- (IData)((IData)((0x10000U == (0x10800U 
                                           & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_dc3 
        = (((QData)((IData)((0xffU & ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_hi_dc3))
                                       ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_hi_dc3 
                                          >> 0x18U)
                                       : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)
                                           ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                                              >> 0x18U)
                                           : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3 
                                              >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_hi_dc3))
                                             ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_hi_dc3 
                                                >> 0x10U)
                                             : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)
                                                 ? 
                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                                                 >> 0x10U)
                                                 : 
                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3 
                                                 >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((2U 
                                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_hi_dc3))
                                                             ? 
                                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_hi_dc3 
                                                             >> 8U)
                                                             : 
                                                            ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)
                                                              ? 
                                                             (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                                                              >> 8U)
                                                              : 
                                                             (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3 
                                                              >> 8U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((1U 
                                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_hi_dc3))
                                                              ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_hi_dc3
                                                              : 
                                                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)
                                                               ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3
                                                               : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((8U 
                                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_lo_dc3))
                                                              ? 
                                                             (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_lo_dc3 
                                                              >> 0x18U)
                                                              : 
                                                             ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)
                                                               ? 
                                                              (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                                                               >> 0x18U)
                                                               : 
                                                              (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3 
                                                               >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((4U 
                                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_lo_dc3))
                                                                    ? 
                                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_lo_dc3 
                                                                    >> 0x10U)
                                                                    : 
                                                                   ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)
                                                                     ? 
                                                                    (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                                                                     >> 0x10U)
                                                                     : 
                                                                    (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3 
                                                                     >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((2U 
                                                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_lo_dc3))
                                                                       ? 
                                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_lo_dc3 
                                                                       >> 8U)
                                                                       : 
                                                                      ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)
                                                                        ? 
                                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                                                                        >> 8U)
                                                                        : 
                                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3 
                                                                        >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_lo_dc3))
                                                                        ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_lo_dc3
                                                                        : 
                                                                       ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)
                                                                         ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3
                                                                         : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_read_data_dc3 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_dc3)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_bus_data_dc3);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_errorff__dout) 
            << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_errorff__dout) 
                       << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_errorff__dout) 
                                  << 5U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_errorff__dout) 
                                             << 4U) 
                                            | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_errorff__dout) 
                                                << 3U) 
                                               | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_errorff__dout) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_errorff__dout) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_errorff__dout))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U] 
        = ((0xfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U]) 
           | (0xfff00000U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[1U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
        = (0x3ffU & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[2U]);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_dc2 
        = (0xfU & ((1U & (- (IData)((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc2ff__dout 
                                           >> 0x11U))))) 
                   | ((3U & (- (IData)((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc2ff__dout 
                                              >> 0x10U))))) 
                      | (- (IData)((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc2ff__dout 
                                          >> 0xfU)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_nbff__dout) 
            << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_nbff__dout) 
                       << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_nbff__dout) 
                                  << 5U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_nbff__dout) 
                                             << 4U) 
                                            | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_nbff__dout) 
                                                << 3U) 
                                               | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_nbff__dout) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_nbff__dout) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_nbff__dout))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask 
        = (1U & ((~ (IData)((0xffffffffU == vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                    >> 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask 
        = (1U & ((~ (IData)((0xffffffffU == vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                    >> 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask 
        = (1U & ((~ (IData)((0xffffffffU == vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                    >> 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask 
        = (1U & ((~ (IData)((0xffffffffU == vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                    >> 4U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h40652c35__0 
        = (IData)((0x10U == (0x30U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h36ec02cd__0 
        = (IData)((0x20U == (0x60U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h351d3dbe__0 
        = (IData)((0x1000U == (0x3000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_hdbef1711__0 
        = (IData)((4U == (0x2cU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h0e041d9c__0 
        = (IData)((0U == (0x42000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_hbcac0208__0 
        = (IData)((0x6000U == (0x6000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h36f51ec4__0 
        = (IData)((0x4000U == (0x6000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h6f15c8ed__0 
        = (IData)((0U == (0x5000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h36cc628c__0 
        = (IData)((0x2000U == (0x2040U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h30556dbc__0 
        = (IData)((0U == (0xbe000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__eq 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__a_ff 
           == vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__b_ff);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__any_jal 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout 
                  >> 4U) | (IData)((0U != (0x38000U 
                                           & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__predictpacketff__dout[0U])))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____VdfgTmp_heeae74fa__0 
        = (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e2_ff__dout 
                 | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e2_ff__dout)));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0U] 
        = (1U | ((0xfffffffcU & vlSelf->__PVT__axi_intercon__DOT__masters_req[0U]) 
                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_axi_ic_req_ff2) 
                    << 1U)));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0U] 
        = ((7U & vlSelf->__PVT__axi_intercon__DOT__masters_req[0U]) 
           | ((IData)((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count)) 
                        << 0x3dU) | (((QData)((IData)(
                                                      ((0xffffffc0U 
                                                        & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                                                           << 1U)) 
                                                       | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count) 
                                                          << 3U)))) 
                                      << 0x1dU) | (QData)((IData)(
                                                                  (0xd7c00U 
                                                                   | (0xfU 
                                                                      & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                                                                         >> 0x1bU)))))))) 
              << 3U));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[1U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count)) 
                      << 0x3dU) | (((QData)((IData)(
                                                    ((0xffffffc0U 
                                                      & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                                                         << 1U)) 
                                                     | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count) 
                                                        << 3U)))) 
                                    << 0x1dU) | (QData)((IData)(
                                                                (0xd7c00U 
                                                                 | (0xfU 
                                                                    & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                                                                       >> 0x1bU)))))))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count)) 
                                    << 0x3dU) | (((QData)((IData)(
                                                                  ((0xffffffc0U 
                                                                    & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                                                                       << 1U)) 
                                                                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count) 
                                                                      << 3U)))) 
                                                  << 0x1dU) 
                                                 | (QData)((IData)(
                                                                   (0xd7c00U 
                                                                    | (0xfU 
                                                                       & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                                                                          >> 0x1bU))))))) 
                                  >> 0x20U)) << 3U));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[2U] 
        = ((0xffffffc0U & vlSelf->__PVT__axi_intercon__DOT__masters_req[2U]) 
           | ((IData)(((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count)) 
                         << 0x3dU) | (((QData)((IData)(
                                                       ((0xffffffc0U 
                                                         & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                                                            << 1U)) 
                                                        | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count) 
                                                           << 3U)))) 
                                       << 0x1dU) | (QData)((IData)(
                                                                   (0xd7c00U 
                                                                    | (0xfU 
                                                                       & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                                                                          >> 0x1bU))))))) 
                       >> 0x20U)) >> 0x1dU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod 
        = (IData)((((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                        >> 3U)) & (0x1000001U == (0x1000001U 
                                                  & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U]))) 
                   & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                         >> 1U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h6ee9c6ba__0 
        = (IData)((0U == (0x6000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h288d1702__0 
        = (IData)((0U == (0x44U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h4581aa3f__0 
        = (IData)((0U == (0x24U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_hd370f7ae__0 
        = (IData)((0x4000U == (0x2004000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h6cb8f90f__0 
        = (IData)((0x2000U == (0x6000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h862bad1b__0 
        = (IData)((0x2040U == (0x2040U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h407dbc8d__0 
        = (IData)((8U == (0x28U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h351891e0__0 
        = (IData)((0x800U == (0x2800U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_he4d6639b__0 
        = (IData)((0x82000U == (0x82000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h351b406b__0 
        = (IData)((0x400U == (0x2400U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_he20089c3__0 
        = (IData)((0x42000U == (0x42000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h3520f03a__0 
        = (IData)((0x200U == (0x2200U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h8a2dcb28__0 
        = (IData)((0x22000U == (0x22000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h352c229d__0 
        = (IData)((0x100U == (0x2100U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h810d974e__0 
        = (IData)((0x12000U == (0x12000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h35288e68__0 
        = (IData)((0x80U == (0x2080U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h80061d10__0 
        = (IData)((0xa000U == (0xa000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__bm 
        = ((0x80U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout)
            ? (~ vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__b_ff)
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__b_ff);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
        = ((0x40000000U & (((0U != (0x7fffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                             ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                           >> 0x1fU)))
                             : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                        >> 0x1fU))) 
                           << 0x1eU)) | ((0x20000000U 
                                          & (((0U != 
                                               (0x3fffffffU 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                               ? (~ (IData)(
                                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                             >> 0x1eU)))
                                               : (IData)(
                                                         (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                          >> 0x1eU))) 
                                             << 0x1dU)) 
                                         | ((0x10000000U 
                                             & (((0U 
                                                  != 
                                                  (0x1fffffffU 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                  ? 
                                                 (~ (IData)(
                                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                             >> 0x1dU)))
                                                  : (IData)(
                                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                             >> 0x1dU))) 
                                                << 0x1cU)) 
                                            | ((0x8000000U 
                                                & (((0U 
                                                     != 
                                                     (0xfffffffU 
                                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                     ? 
                                                    (~ (IData)(
                                                               (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                >> 0x1cU)))
                                                     : (IData)(
                                                               (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                >> 0x1cU))) 
                                                   << 0x1bU)) 
                                               | ((0x4000000U 
                                                   & (((0U 
                                                        != 
                                                        (0x7ffffffU 
                                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                        ? 
                                                       (~ (IData)(
                                                                  (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                   >> 0x1bU)))
                                                        : (IData)(
                                                                  (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                   >> 0x1bU))) 
                                                      << 0x1aU)) 
                                                  | ((0x2000000U 
                                                      & (((0U 
                                                           != 
                                                           (0x3ffffffU 
                                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                           ? 
                                                          (~ (IData)(
                                                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                      >> 0x1aU)))
                                                           : (IData)(
                                                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                      >> 0x1aU))) 
                                                         << 0x19U)) 
                                                     | ((0x1000000U 
                                                         & (((0U 
                                                              != 
                                                              (0x1ffffffU 
                                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                              ? 
                                                             (~ (IData)(
                                                                        (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                         >> 0x19U)))
                                                              : (IData)(
                                                                        (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                         >> 0x19U))) 
                                                            << 0x18U)) 
                                                        | ((0x800000U 
                                                            & (((0U 
                                                                 != 
                                                                 (0xffffffU 
                                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                                 ? 
                                                                (~ (IData)(
                                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                            >> 0x18U)))
                                                                 : (IData)(
                                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                            >> 0x18U))) 
                                                               << 0x17U)) 
                                                           | ((0x400000U 
                                                               & (((0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                                    ? 
                                                                   (~ (IData)(
                                                                              (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                               >> 0x17U)))
                                                                    : (IData)(
                                                                              (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                               >> 0x17U))) 
                                                                  << 0x16U)) 
                                                              | ((0x200000U 
                                                                  & (((0U 
                                                                       != 
                                                                       (0x3fffffU 
                                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                                       ? 
                                                                      (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0x16U)))
                                                                       : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0x16U))) 
                                                                     << 0x15U)) 
                                                                 | ((0x100000U 
                                                                     & (((0U 
                                                                          != 
                                                                          (0x1fffffU 
                                                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                                          ? 
                                                                         (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0x15U)))
                                                                          : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0x15U))) 
                                                                        << 0x14U)) 
                                                                    | ((0x80000U 
                                                                        & (((0U 
                                                                             != 
                                                                             (0xfffffU 
                                                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                                             ? 
                                                                            (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0x14U)))
                                                                             : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0x14U))) 
                                                                           << 0x13U)) 
                                                                       | ((0x40000U 
                                                                           & (((0U 
                                                                                != 
                                                                                (0x7ffffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                                                ? 
                                                                               (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0x13U)))
                                                                                : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0x13U))) 
                                                                              << 0x12U)) 
                                                                          | ((0x20000U 
                                                                              & (((0U 
                                                                                != 
                                                                                (0x3ffffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0x12U)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0x12U))) 
                                                                                << 0x11U)) 
                                                                             | ((0x10000U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x1ffffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0x11U)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0x11U))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0x10U)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0x10U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0xfU)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0xfU))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0xeU)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0xeU))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x1fffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0xdU)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0xdU))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0xfffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0xcU)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0xcU))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x7ffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0xbU)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0xbU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x3ffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0xaU)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 0xaU))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x1ffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 9U)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 9U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 8U)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 8U))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 7U)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 7U))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 6U)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 6U))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 5U)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 5U))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 4U)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 4U))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((0U 
                                                                                != 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 3U)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 3U))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 2U)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 2U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((1U 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 1U)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                                                                                >> 1U))))))))))))))))))))))))))))))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h52b8de57__0 
        = (IData)((0xaU == (0xaU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
        = ((0x40000000U & (((0U != (0x7fffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                             ? (~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                           >> 0x1fU)))
                             : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                        >> 0x1fU))) 
                           << 0x1eU)) | ((0x20000000U 
                                          & (((0U != 
                                               (0x3fffffffU 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                               ? (~ (IData)(
                                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                             >> 0x1eU)))
                                               : (IData)(
                                                         (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                          >> 0x1eU))) 
                                             << 0x1dU)) 
                                         | ((0x10000000U 
                                             & (((0U 
                                                  != 
                                                  (0x1fffffffU 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                  ? 
                                                 (~ (IData)(
                                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                             >> 0x1dU)))
                                                  : (IData)(
                                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                             >> 0x1dU))) 
                                                << 0x1cU)) 
                                            | ((0x8000000U 
                                                & (((0U 
                                                     != 
                                                     (0xfffffffU 
                                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                     ? 
                                                    (~ (IData)(
                                                               (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                >> 0x1cU)))
                                                     : (IData)(
                                                               (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                >> 0x1cU))) 
                                                   << 0x1bU)) 
                                               | ((0x4000000U 
                                                   & (((0U 
                                                        != 
                                                        (0x7ffffffU 
                                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                        ? 
                                                       (~ (IData)(
                                                                  (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                   >> 0x1bU)))
                                                        : (IData)(
                                                                  (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                   >> 0x1bU))) 
                                                      << 0x1aU)) 
                                                  | ((0x2000000U 
                                                      & (((0U 
                                                           != 
                                                           (0x3ffffffU 
                                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                           ? 
                                                          (~ (IData)(
                                                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                      >> 0x1aU)))
                                                           : (IData)(
                                                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                      >> 0x1aU))) 
                                                         << 0x19U)) 
                                                     | ((0x1000000U 
                                                         & (((0U 
                                                              != 
                                                              (0x1ffffffU 
                                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                              ? 
                                                             (~ (IData)(
                                                                        (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                         >> 0x19U)))
                                                              : (IData)(
                                                                        (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                         >> 0x19U))) 
                                                            << 0x18U)) 
                                                        | ((0x800000U 
                                                            & (((0U 
                                                                 != 
                                                                 (0xffffffU 
                                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                                 ? 
                                                                (~ (IData)(
                                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                            >> 0x18U)))
                                                                 : (IData)(
                                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                            >> 0x18U))) 
                                                               << 0x17U)) 
                                                           | ((0x400000U 
                                                               & (((0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                                    ? 
                                                                   (~ (IData)(
                                                                              (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                               >> 0x17U)))
                                                                    : (IData)(
                                                                              (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                               >> 0x17U))) 
                                                                  << 0x16U)) 
                                                              | ((0x200000U 
                                                                  & (((0U 
                                                                       != 
                                                                       (0x3fffffU 
                                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                                       ? 
                                                                      (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0x16U)))
                                                                       : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0x16U))) 
                                                                     << 0x15U)) 
                                                                 | ((0x100000U 
                                                                     & (((0U 
                                                                          != 
                                                                          (0x1fffffU 
                                                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                                          ? 
                                                                         (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0x15U)))
                                                                          : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0x15U))) 
                                                                        << 0x14U)) 
                                                                    | ((0x80000U 
                                                                        & (((0U 
                                                                             != 
                                                                             (0xfffffU 
                                                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                                             ? 
                                                                            (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0x14U)))
                                                                             : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0x14U))) 
                                                                           << 0x13U)) 
                                                                       | ((0x40000U 
                                                                           & (((0U 
                                                                                != 
                                                                                (0x7ffffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                                                ? 
                                                                               (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0x13U)))
                                                                                : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0x13U))) 
                                                                              << 0x12U)) 
                                                                          | ((0x20000U 
                                                                              & (((0U 
                                                                                != 
                                                                                (0x3ffffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0x12U)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0x12U))) 
                                                                                << 0x11U)) 
                                                                             | ((0x10000U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x1ffffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0x11U)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0x11U))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0x10U)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0x10U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0xfU)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0xfU))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0xeU)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0xeU))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x1fffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0xdU)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0xdU))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0xfffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0xcU)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0xcU))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x7ffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0xbU)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0xbU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x3ffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0xaU)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 0xaU))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x1ffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 9U)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 9U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 8U)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 8U))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 7U)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 7U))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 6U)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 6U))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 5U)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 5U))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 4U)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 4U))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((0U 
                                                                                != 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 3U)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 3U))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 2U)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 2U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((1U 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff))
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 1U)))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                                                                >> 1U))))))))))))))))))))))))))))))))));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect) {
        vlSelf->__PVT__lsu_awaddr = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr;
        vlSelf->__PVT__lsu_awsize = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz;
    } else {
        vlSelf->__PVT__lsu_awaddr = (0xfffffff8U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr);
        vlSelf->__PVT__lsu_awsize = 3U;
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h53bd23e2__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1eff[0U] 
        = (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[0U]) 
           | (((- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[0U]) 
              | ((- (IData)((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1eff[1U] 
        = (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[1U]) 
           | (((- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[1U]) 
              | ((- (IData)((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[1U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1eff[2U] 
        = (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[2U]) 
           | (((- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[2U]) 
              | ((- (IData)((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[2U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1eff[3U] 
        = (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[3U]) 
           | (((- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[3U]) 
              | ((- (IData)((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[3U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0eff[0U] 
        = (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[0U]) 
           | (((- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[0U]) 
              | ((- (IData)((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0eff[1U] 
        = (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[1U]) 
           | (((- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[1U]) 
              | ((- (IData)((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[1U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0eff[2U] 
        = (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[2U]) 
           | (((- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[2U]) 
              | ((- (IData)((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[2U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0eff[3U] 
        = (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[3U]) 
           | (((- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[3U]) 
              | ((- (IData)((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[3U])));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hb4d7fe50__0 
        = (IData)((0x2000000000ULL == (0x3400000000ULL 
                                       & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr 
        = (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1off)) 
           | (((- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2off)) 
              | ((- (IData)((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0off))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr 
        = (((- (IData)((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0off)) 
           | (((- (IData)((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1off)) 
              | ((- (IData)((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2off))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_hd509f0c3__0 
        = (IData)((0U == (0x2004000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h6d48c2d5__0 
        = (IData)((0x2000000U == (0x2004000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_he33aae79__0 
        = (IData)((0x2004000U == (0x2004000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h898c9777__0 
        = (IData)((0x20U == (0x64U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h71186bc7__0 
        = (IData)((0U == (0x18U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h28b63ed7__0 
        = (IData)((0U == (0x3000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_icaf_d 
        = (IData)((0ULL != (0x900000000ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h40652c35__0 
        = (IData)((0x10U == (0x30U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h36ec02cd__0 
        = (IData)((0x20U == (0x60U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h351d3dbe__0 
        = (IData)((0x1000U == (0x3000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_hdbef1711__0 
        = (IData)((4U == (0x2cU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h0e041d9c__0 
        = (IData)((0U == (0x42000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_hbcac0208__0 
        = (IData)((0x6000U == (0x6000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h36f51ec4__0 
        = (IData)((0x4000U == (0x6000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h6f15c8ed__0 
        = (IData)((0U == (0x5000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h36cc628c__0 
        = (IData)((0x2000U == (0x2040U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_brp_valid 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i1_stall)) 
           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[2U] 
              >> 3U));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h317d9b29__0 
        = (IData)((0U == (0x6000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_he2cdd7ce__0 
        = ((0x80U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                     >> 0x18U)) | (0x7fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                            >> 0xdU)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h20724969__0 
        = (IData)((0U == (0x600000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_cmd_size 
        = ((4U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                  >> 2U)) | ((2U & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                                        >> 3U)) << 1U)) 
                             | (1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                                      >> 2U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h24edf535__0 
        = (IData)((4U == (0xcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_h3023b5bf__0 
        = (IData)((2U == (6U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____VdfgTmp_hef79c2d8__0 
        = (IData)((1U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h720412e8__0 
        = (IData)((0U == (0x14U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h4d536c7f__0 
        = (1U & VL_REDXOR_8((0x18U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h0bcf15c9__0 
        = (1U & VL_REDXOR_8((0x18U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h7f83e43f__0 
        = (1U & VL_REDXOR_8((0x18U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he0bd07b4__0 
        = (1U & VL_REDXOR_8((0x18U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he68ed8dd__0 
        = (1U & VL_REDXOR_8((0x18U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h04639df2__0 
        = (1U & VL_REDXOR_8((0x18U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h69d4277d__0 
        = (1U & VL_REDXOR_8((0x18U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hafad516a__0 
        = (1U & VL_REDXOR_8((0x18U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h0f1b45b1__0 
        = (IData)((0U == (0xc0000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h4fa8c1dc__0 
        = (IData)((0x28U == (0x28U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h532a3783__0 
        = (IData)((0x14U == (0x14U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_hf5824feb__0 
        = (IData)((0x44U == (0x44U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h8719a8b3__0 
        = (IData)((0x50U == (0x50U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h6ee9c6ba__0 
        = (IData)((0U == (0x6000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h288d1702__0 
        = (IData)((0U == (0x44U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h4581aa3f__0 
        = (IData)((0U == (0x24U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_hd370f7ae__0 
        = (IData)((0x4000U == (0x2004000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h6cb8f90f__0 
        = (IData)((0x2000U == (0x6000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h862bad1b__0 
        = (IData)((0x2040U == (0x2040U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h407dbc8d__0 
        = (IData)((8U == (0x28U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h351891e0__0 
        = (IData)((0x800U == (0x2800U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_he4d6639b__0 
        = (IData)((0x82000U == (0x82000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h351b406b__0 
        = (IData)((0x400U == (0x2400U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_he20089c3__0 
        = (IData)((0x42000U == (0x42000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h3520f03a__0 
        = (IData)((0x200U == (0x2200U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h8a2dcb28__0 
        = (IData)((0x22000U == (0x22000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h352c229d__0 
        = (IData)((0x100U == (0x2100U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h810d974e__0 
        = (IData)((0x12000U == (0x12000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h35288e68__0 
        = (IData)((0x80U == (0x2080U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h80061d10__0 
        = (IData)((0xa000U == (0xa000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_arvalid 
        = ((6U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
           & ((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)) 
              & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done)) 
                 & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_hd509f0c3__0 
        = (IData)((0U == (0x2004000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h6d48c2d5__0 
        = (IData)((0x2000000U == (0x2004000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_he33aae79__0 
        = (IData)((0x2004000U == (0x2004000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h898c9777__0 
        = (IData)((0x20U == (0x64U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h71186bc7__0 
        = (IData)((0U == (0x18U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h28b63ed7__0 
        = (IData)((0U == (0x3000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_enabled 
        = ((8U & (((0x1ffffff8U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                   >> 3U)) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus) 
                                              << 3U)) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3))) 
           | ((4U & (((0xffffffcU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                     >> 4U)) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus) 
                                                << 2U)) 
                     & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                        >> 1U))) | ((2U & (((0x7fffffeU 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                >> 5U)) 
                                            | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus) 
                                               << 1U)) 
                                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                              >> 2U))) 
                                    | (1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                               >> 6U) 
                                              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus)) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                >> 3U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4_raw 
        = (IData)((0x4000000000ULL == (0x4800000000ULL 
                                       & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h7d249886__0 
        = (IData)((3U == (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dec__DOT____VdfgTmp_h3f855b1b__0 
        = (IData)((0x10U == (0x14U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_hcc8854cf__0 
        = ((0x80U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                     >> 0x18U)) | (0x7fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                            >> 0xdU)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h720412e8__0 
        = (IData)((0U == (0x14U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h2caec338__0 
        = ((6U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_data 
        = ((8U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                  >> 4U)) | ((4U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                    >> 5U)) | ((2U 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                   >> 6U)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                     >> 7U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h0f1b45b1__0 
        = (IData)((0U == (0xc0000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h4fa8c1dc__0 
        = (IData)((0x28U == (0x28U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h532a3783__0 
        = (IData)((0x14U == (0x14U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_ha0f740af__0 
        = (IData)((0x44U == (0x44U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h8719a8b3__0 
        = (IData)((0x50U == (0x50U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h086da726__0 
        = (IData)((1U == (3U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__eq 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__a_ff 
           == vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__b_ff);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__any_jal 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout 
                  >> 4U) | (IData)((0U != (0x38000U 
                                           & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__predictpacketff__dout[0U])))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_dualtagff__dout) 
            << 0x15U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_dualtagff__dout) 
                          << 0x12U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_dualtagff__dout) 
                                        << 0xfU) | 
                                       (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_dualtagff__dout) 
                                         << 0xcU) | 
                                        (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_dualtagff__dout) 
                                          << 9U) | 
                                         (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_dualtagff__dout) 
                                           << 6U) | 
                                          (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_dualtagff__dout) 
                                            << 3U) 
                                           | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_dualtagff__dout))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_data_dc5 
           << (0x18U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5 
                        << 3U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_ha0ac93a4__0 
        = (0xffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_data_dc5 
                    << (0x18U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5 
                                 << 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_samedwff__dout) 
            << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_samedwff__dout) 
                       << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_samedwff__dout) 
                                  << 5U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_samedwff__dout) 
                                             << 4U) 
                                            | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_samedwff__dout) 
                                                << 3U) 
                                               | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_samedwff__dout) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_samedwff__dout) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_samedwff__dout))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_writeff__dout) 
            << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_writeff__dout) 
                       << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_writeff__dout) 
                                  << 5U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_writeff__dout) 
                                             << 4U) 
                                            | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_writeff__dout) 
                                                << 3U) 
                                               | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_writeff__dout) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_writeff__dout) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_writeff__dout))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_dualhiff__dout) 
            << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_dualhiff__dout) 
                       << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_dualhiff__dout) 
                                  << 5U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_dualhiff__dout) 
                                             << 4U) 
                                            | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_dualhiff__dout) 
                                                << 3U) 
                                               | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_dualhiff__dout) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_dualhiff__dout) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_dualhiff__dout))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_dualff__dout) 
            << 7U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_dualff__dout) 
                       << 6U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_dualff__dout) 
                                  << 5U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_dualff__dout) 
                                             << 4U) 
                                            | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_dualff__dout) 
                                                << 3U) 
                                               | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_dualff__dout) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_dualff__dout) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_dualff__dout))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[0U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_addrff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_addrff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[2U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_addrff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_addrff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[4U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_addrff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[5U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_addrff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[6U] 
        = (IData)((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_addrff__dout)) 
                    << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_addrff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[7U] 
        = (IData)(((((QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_addrff__dout)) 
                     << 0x20U) | (QData)((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_addrff__dout))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__7__KET____DOT__buf_state_ff__dout) 
            << 0x15U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__6__KET____DOT__buf_state_ff__dout) 
                          << 0x12U) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__5__KET____DOT__buf_state_ff__dout) 
                                        << 0xfU) | 
                                       (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__4__KET____DOT__buf_state_ff__dout) 
                                         << 0xcU) | 
                                        (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__3__KET____DOT__buf_state_ff__dout) 
                                          << 9U) | 
                                         (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__2__KET____DOT__buf_state_ff__dout) 
                                           << 6U) | 
                                          (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__1__KET____DOT__buf_state_ff__dout) 
                                            << 3U) 
                                           | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk9__BRA__0__KET____DOT__buf_state_ff__dout))))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h7d249886__0 
        = (IData)((3U == (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dec__DOT____VdfgTmp_h3f855b1b__0 
        = (IData)((0x10U == (0x14U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h7b5ca1a6__0 
        = ((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff)) 
           & ((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout)) 
              & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                     >> 4U)) & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__flush_lower_ff)) 
                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_valid_e1)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rready_q) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rvalid_q));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bready_q) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bvalid_q));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__bm 
        = ((0x80U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout)
            ? (~ vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__b_ff)
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__b_ff);
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h87cefe4a__0 
        = ((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_data_dc5)) 
           << (0x18U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5 
                        << 3U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h6069bb15__0 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h9a9e471d__0 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4)) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc3));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__addr_match_dw_lo_dc5_dc4 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5 
            >> 3U) == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc4 
                       >> 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__addr_match_dw_lo_dc5_dc3 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5 
            >> 3U) == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3 
                       >> 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__addr_match_dw_lo_dc5_dc2 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5 
            >> 3U) == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                       >> 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_dc5 
        = (0xfU & ((1U & (- (IData)((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc5ff__dout 
                                           >> 0x11U))))) 
                   | ((3U & (- (IData)((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc5ff__dout 
                                              >> 0x10U))))) 
                      | (- (IData)((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc5ff__dout 
                                          >> 0xfU)))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT____VdfgTmp_h23c9c3ab__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc2ff__dout) 
           & (IData)((0U != (0x3000U & vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc2ff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3 
        = (IData)((0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__flushff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc5 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 1U) | ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc5)) 
                            & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc5_in 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc4;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc5_in 
        = ((0x7fffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc5_in) 
           | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc4 
                    & (~ (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                           >> 2U) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc4 
                                        >> 0xbU)))))));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr0 
        = ((0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_count)) 
           & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr6 
        = ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr5) 
           & (0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tstate)));
    vlSelf->__PVT__timer_ptc__DOT__cntr_clk = ((2U 
                                                & (IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl))
                                                ? (IData)(vlSelf->__PVT__timer_ptc__DOT__eclk_gate)
                                                : (IData)(vlSymsp->TOP.clk));
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
    vlSelf->__PVT__gpio_module__DOT__extc_in = ((vlSelf->__PVT__gpio_module__DOT__in_lach 
                                                 & vlSelf->__PVT__gpio_module__DOT__ext_pad_s) 
                                                | ((~ vlSelf->__PVT__gpio_module__DOT__in_lach) 
                                                   & vlSelf->__PVT__gpio_module__DOT__pextc_sampled));
    vlSelf->__PVT__gpio2_module__DOT__extc_in = ((vlSelf->__PVT__gpio2_module__DOT__in_lach 
                                                  & vlSelf->__PVT__gpio2_module__DOT__ext_pad_s) 
                                                 | ((~ vlSelf->__PVT__gpio2_module__DOT__in_lach) 
                                                    & vlSelf->__PVT__gpio2_module__DOT__pextc_sampled));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rda_int 
        = ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ier) 
           & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_count) 
              >= (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__trigger_level)));
    vlSelf->i_led16__out = ((1U & ((IData)(vlSelf->i_led16__out__strong__out40) 
                                   & (~ ((IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl) 
                                         >> 3U)))) 
                            | ((2U & ((IData)(vlSelf->i_led16__out__strong__out41) 
                                      & ((~ ((IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl) 
                                             >> 3U)) 
                                         << 1U))) | 
                               (4U & ((IData)(vlSelf->i_led16__out__strong__out42) 
                                      & ((~ ((IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl) 
                                             >> 3U)) 
                                         << 2U)))));
    vlSelf->__PVT__spi__DOT__wfempty = ((~ (IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__gb)) 
                                        & (IData)(vlSelf->spi__DOT__wfifo__DOT____VdfgTmp_hbf3f7ff0__0));
    vlSelf->__PVT__spi__DOT__wffull = ((IData)(vlSelf->spi__DOT__wfifo__DOT____VdfgTmp_hbf3f7ff0__0) 
                                       & (IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__gb));
    vlSelf->__PVT__spi2__DOT__wfempty = ((~ (IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__gb)) 
                                         & (IData)(vlSelf->spi2__DOT__wfifo__DOT____VdfgTmp_hbf3f7ff0__0));
    vlSelf->__PVT__spi2__DOT__wffull = ((IData)(vlSelf->spi2__DOT__wfifo__DOT____VdfgTmp_hbf3f7ff0__0) 
                                        & (IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__gb));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__serial_in 
        = ((0x10U & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__mcr))
            ? (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__serial_out)
            : (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__srx_pad));
    vlSelf->__PVT__timer_ptc__DOT__restart = (1U & 
                                              (((~ 
                                                 ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                                  >> 4U)) 
                                                & (IData)(vlSelf->__PVT__timer_ptc__DOT__lrc_match)) 
                                               | ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                                  >> 7U)));
    vlSelf->__PVT__timer_ptc__DOT__int_match = (((IData)(vlSelf->__PVT__timer_ptc__DOT__lrc_match) 
                                                 | (IData)(vlSelf->__PVT__timer_ptc__DOT__hrc_match)) 
                                                & ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                                   >> 5U));
    vlSelf->__PVT__timer_ptcR__DOT__restart = (1U & 
                                               (((~ 
                                                  ((IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl) 
                                                   >> 4U)) 
                                                 & (IData)(vlSelf->__PVT__timer_ptcR__DOT__lrc_match)) 
                                                | ((IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl) 
                                                   >> 7U)));
    vlSelf->__PVT__timer_ptcR__DOT__int_match = (((IData)(vlSelf->__PVT__timer_ptcR__DOT__lrc_match) 
                                                  | (IData)(vlSelf->__PVT__timer_ptcR__DOT__hrc_match)) 
                                                 & ((IData)(vlSelf->__PVT__timer_ptcR__DOT__rptc_ctrl) 
                                                    >> 5U));
    vlSelf->__PVT__timer_ptcG__DOT__restart = (1U & 
                                               (((~ 
                                                  ((IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl) 
                                                   >> 4U)) 
                                                 & (IData)(vlSelf->__PVT__timer_ptcG__DOT__lrc_match)) 
                                                | ((IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl) 
                                                   >> 7U)));
    vlSelf->__PVT__timer_ptcG__DOT__int_match = (((IData)(vlSelf->__PVT__timer_ptcG__DOT__lrc_match) 
                                                  | (IData)(vlSelf->__PVT__timer_ptcG__DOT__hrc_match)) 
                                                 & ((IData)(vlSelf->__PVT__timer_ptcG__DOT__rptc_ctrl) 
                                                    >> 5U));
    vlSelf->__PVT__timer_ptcB__DOT__restart = (1U & 
                                               (((~ 
                                                  ((IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl) 
                                                   >> 4U)) 
                                                 & (IData)(vlSelf->__PVT__timer_ptcB__DOT__lrc_match)) 
                                                | ((IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl) 
                                                   >> 7U)));
    vlSelf->__PVT__timer_ptcB__DOT__int_match = (((IData)(vlSelf->__PVT__timer_ptcB__DOT__lrc_match) 
                                                  | (IData)(vlSelf->__PVT__timer_ptcB__DOT__hrc_match)) 
                                                 & ((IData)(vlSelf->__PVT__timer_ptcB__DOT__rptc_ctrl) 
                                                    >> 5U));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wb1_data_en) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wb1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_wb;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wb1pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1wbpcff__dout;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wb1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_wb1;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wb1pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1wb1pcff__dout;
    }
    if (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellinp__i0wb1instff__en) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wb1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_wb;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wb1pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0wbpcff__dout;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wb1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_wb1;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wb1pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0wb1pcff__dout;
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4_data_en) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e4instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_e3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e4pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0e3pcff__dout;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e4instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_e4;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e4pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0e4pcff__dout;
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e4_data_en) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e4instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_e3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e4pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e3pcff__dout;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e4instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_e4;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e4pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e4pcff__dout;
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wb_data_en) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wbinstff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_e4;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wbpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e4pcff__dout;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wbinstff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_wb;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wbpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1wbpcff__dout;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip_ns 
        = (((IData)((0U != (0x7ffffffU & ((((IData)(1U) 
                                            << (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdccmect 
                                                >> 0x1bU)) 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdccmect) 
                                          | ((((IData)(1U) 
                                               << (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__miccmect 
                                                   >> 0x1bU)) 
                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__miccmect) 
                                             | (((IData)(1U) 
                                                 << 
                                                 (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__micect 
                                                  >> 0x1bU)) 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__micect)))))) 
            << 5U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_timer_t0_pulse) 
                       << 4U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_timer_t1_pulse) 
                                  << 3U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__mexintpend) 
                                             << 2U) 
                                            | ((2U 
                                                & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                   >> 3U)) 
                                               | (1U 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstret_enable 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_valid_no_ebreak_ecall_wb) 
                 | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                    >> 5U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h41ad8804__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__debug_c1_clken) 
           & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout 
              >> 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__ibradder_correct__DOT__cout 
        = (1U & (((0xfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__last_pc_e2) 
                  + (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2brpcff__dout)) 
                 >> 0xcU));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb_ctl_en) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__wbnbloadff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_dc4;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wbc_ff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e4c_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wbc_ff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e4c_ff__dout;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__wbnbloadff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wbc_ff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_wbc_ff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wbc_ff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_wbc_ff__dout;
    }
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__D 
        = (((3U == (3U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout)) 
            & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout))
            ? vlSelf->__PVT__swerv_eh1__DOT__ic_debug_wr_data
            : vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hddf6bb9a__0);
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__D 
        = (((2U == (3U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout)) 
            & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout))
            ? vlSelf->__PVT__swerv_eh1__DOT__ic_debug_wr_data
            : vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hdcbcb1f1__0);
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__D 
        = (((1U == (3U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout)) 
            & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout))
            ? vlSelf->__PVT__swerv_eh1__DOT__ic_debug_wr_data
            : vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hddf6bb9a__0);
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__D 
        = (((0U == (3U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout)) 
            & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout))
            ? vlSelf->__PVT__swerv_eh1__DOT__ic_debug_wr_data
            : vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hdcbcb1f1__0);
    vlSelf->__PVT__uart16550_0__DOT__we_o = ((IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_we_is) 
                                             & (IData)(vlSelf->uart16550_0__DOT__wb_interface__DOT____VdfgTmp_h0129754c__0));
    vlSelf->__PVT__uart16550_0__DOT__re_o = ((~ (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_we_is)) 
                                             & (IData)(vlSelf->uart16550_0__DOT__wb_interface__DOT____VdfgTmp_h0129754c__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_sz 
        = ((0xbU >= (0xfU & ((IData)(3U) * (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr))))
            ? (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz) 
                     >> (0xfU & ((IData)(3U) * (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr)))))
            : 0U);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_sz 
        = ((0xbU >= (0xfU & ((IData)(3U) * (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))))
            ? (7U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz) 
                     >> (0xfU & ((IData)(3U) * (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)))))
            : 0U);
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_rd_way_en 
        = ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_debug_ict_array_sel_in))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_debug_way));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_debug_sel_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__debug_c1_clken)
            ? ((((0U == (3U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout)) 
                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hc129decd__0)) 
                << 8U) | ((((1U == (3U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout)) 
                            & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hc129decd__0)) 
                           << 7U) | ((((2U == (3U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout)) 
                                       & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hc129decd__0)) 
                                      << 6U) | ((((3U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout)) 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hc129decd__0)) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_debug_ict_array_sel_in) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_debug_way))))))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_debug_wr_way_en 
        = ((- (IData)((1U & ((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout 
                                 >> 0x10U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicgo_ff__dout))))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_debug_way));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode__DOT____VdfgTmp_h58e9ffcf__0 
        = (1U & VL_REDXOR_32((0xe0000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_data_any)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode__DOT____VdfgTmp_h6b771252__0 
        = (1U & VL_REDXOR_32((0x3fc0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_data_any)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__dffs__din 
        = (0xfU & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_ha93e799e__0) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                    ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__dffs__din 
        = (0xfU & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_ha938af9e__0) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                    ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__dffs__din 
        = (0xfU & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_ha939cb64__0) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                    ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__dffs__din 
        = (0xfU & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_ha95b6d21__0) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                    ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__dffs__din 
        = (0xfU & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_haf17c370__0) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                    ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__dffs__din 
        = (0xfU & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_haf136327__0) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                    ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__dffs__din 
        = (0xfU & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_ha96a2393__0) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                    ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__dffs__din 
        = (0xfU & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_haf708a2b__0) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                    ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re 
        = ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_ha93e799e__0) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
            << 8U) | ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_ha938af9e__0) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                       << 7U) | ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_ha939cb64__0) 
                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                  << 6U) | ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_ha95b6d21__0) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                             << 5U) 
                                            | ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_haf17c370__0) 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                                << 4U) 
                                               | ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_haf136327__0) 
                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                                   << 3U) 
                                                  | ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_ha96a2393__0) 
                                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_haf708a2b__0) 
                                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                                        << 1U))))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__dffs__din 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h56d03cd5__0) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__dffs__din 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h56ca66d5__0) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__dffs__din 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h56c8836f__0) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__dffs__din 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h56b521b4__0) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__dffs__din 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h50ee9b03__0) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__dffs__din 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h50ed3bae__0) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__dffs__din 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h56a4fae2__0) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__dffs__din 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h50824caa__0) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re 
        = ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h56d03cd5__0) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
            << 8U) | ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h56ca66d5__0) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                       << 7U) | ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h56c8836f__0) 
                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                  << 6U) | ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h56b521b4__0) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                             << 5U) 
                                            | ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h50ee9b03__0) 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                                << 4U) 
                                               | ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h50ed3bae__0) 
                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                                   << 3U) 
                                                  | ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h56a4fae2__0) 
                                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h50824caa__0) 
                                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                                        << 1U))))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__dffs__din 
        = (3U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h724a35a5__0) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__dffs__din 
        = (3U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h725063a5__0) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__dffs__din 
        = (3U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h72528403__0) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__dffs__din 
        = (3U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h727726c4__0) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__dffs__din 
        = (3U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h743c8c17__0) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__dffs__din 
        = (3U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h743f2cc2__0) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__dffs__din 
        = (3U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h7586efb6__0) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__dffs__din 
        = (3U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h779845ce__0) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re 
        = ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h724a35a5__0) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
            << 8U) | ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h725063a5__0) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                       << 7U) | ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h72528403__0) 
                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                  << 6U) | ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h727726c4__0) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                             << 5U) 
                                            | ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h743c8c17__0) 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                                << 4U) 
                                               | ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h743f2cc2__0) 
                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                                   << 3U) 
                                                  | ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h7586efb6__0) 
                                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____VdfgTmp_h779845ce__0) 
                                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)) 
                                                        << 1U))))))));
    if (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__lsu_freeze_dc3_q) {
        vlSelf->__PVT__swerv_eh1__DOT__dccm_rd_data_lo 
            = (0x7fffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_lo_q);
        vlSelf->__PVT__swerv_eh1__DOT__dccm_rd_data_hi 
            = (0x7fffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_hi_q);
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__dccm_rd_data_lo 
            = (0x7fffffffffULL & ((0x137U >= (0x1ffU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout))))
                                   ? (((QData)((IData)(
                                                       vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                           (((IData)(0x1fU) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)))))) 
                                         | ((QData)((IData)(
                                                            vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                            (0xfU 
                                                             & (((IData)(0x27U) 
                                                                 * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)) 
                                                                >> 5U))])) 
                                            >> (0x1fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout))))))
                                   : 0ULL));
        vlSelf->__PVT__swerv_eh1__DOT__dccm_rd_data_hi 
            = (0x7fffffffffULL & ((0x137U >= (0x1ffU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                   ? (((QData)((IData)(
                                                       vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                           (((IData)(0x1fU) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))) 
                                         | ((QData)((IData)(
                                                            vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                            (0xfU 
                                                             & (((IData)(0x27U) 
                                                                 * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                                >> 5U))])) 
                                            >> (0x1fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout))))))
                                   : 0ULL));
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((8U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x10U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x18U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x20U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x28U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x30U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x38U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((8U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x10U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x18U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x20U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x28U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x30U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x38U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((8U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x10U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x18U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x20U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x28U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x30U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x38U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((8U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x10U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x18U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x20U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x28U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x30U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x38U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((8U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x10U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x18U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x20U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x28U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x30U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x38U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((8U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x10U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x18U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x20U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x28U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x30U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x38U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((8U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x10U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x18U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x20U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x28U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x30U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x38U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((8U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x10U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x18U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x20U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x28U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x30U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(((0x38U == (0x38U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__en)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout));
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
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_he9d3f1ae__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h9c44d778__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h5b4d3b6c__0 
        = ((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                       >> 3U))) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h48d67a6c__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_hc8a1f462__0 
        = ((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                       >> 2U))) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_hacb8fde8__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_hea869fb5__0 
        = ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                    >> 1U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h9b01e05f__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_hb529ec80__0 
        = ((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                       >> 2U))) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_hba31054a__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_hb5243223__0 
        = ((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                       >> 2U))) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_hba3d3fa9__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e4_ctl_en 
        = (1U & ((0U != (6U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_he0e48795__0))) 
                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__add 
        = (1U & (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                           >> 0x20U)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__rem_correct)) 
                 ^ (IData)((6U == (6U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr 
        = (3U & (((0U == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                   << 5U))) ? 0U : 
                  (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[
                   (((IData)(1U) + (0x7fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                             << 5U))) 
                    >> 5U)] << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                     << 5U))))) 
                 | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[
                    (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr))] 
                    >> (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                 << 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata 
        = ((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[
                  (3U & (((IData)(2U) + ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                         << 5U)) >> 5U))] 
                  >> (0x1fU & ((IData)(2U) + ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                              << 5U)))))
            ? (((0U == (0x1fU & ((IData)(0x20U) + ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                   << 6U))))
                 ? 0U : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                         (((IData)(0x1fU) + (0xffU 
                                             & ((IData)(0x20U) 
                                                + ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                   << 6U)))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x20U) 
                                                  + 
                                                  ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                   << 6U)))))) 
               | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                  (7U & (((IData)(0x20U) + ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                            << 6U)) 
                         >> 5U))] >> (0x1fU & ((IData)(0x20U) 
                                               + ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                  << 6U)))))
            : (((0U == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                 << 6U))) ? 0U : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                        << 6U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                       << 6U))))) 
               | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                  (6U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                         << 1U))] >> (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                               << 6U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_addr 
        = (((0U == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                             << 5U))) ? 0U : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[
                                              (((IData)(0x1fU) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                      << 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                      << 5U))))) 
           | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[
              (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))] 
              >> (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                           << 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U] 
        = (IData)((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_premux_data[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U] 
        = ((vlSelf->__PVT__swerv_eh1__DOT__ic_premux_data[1U] 
            << 2U) | (IData)(((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_premux_data[0U])) 
                              >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U] 
        = ((vlSelf->__PVT__swerv_eh1__DOT__ic_premux_data[2U] 
            << 4U) | (vlSelf->__PVT__swerv_eh1__DOT__ic_premux_data[1U] 
                      >> 0x1eU));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U] 
        = ((vlSelf->__PVT__swerv_eh1__DOT__ic_premux_data[3U] 
            << 6U) | (vlSelf->__PVT__swerv_eh1__DOT__ic_premux_data[2U] 
                      >> 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[4U] 
        = (vlSelf->__PVT__swerv_eh1__DOT__ic_premux_data[3U] 
           >> 0x1aU);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4_ctl_en 
        = (1U & ((0U != (6U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h1b1d8ce1__0))) 
                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in 
        = (1U & (~ ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                      >> 7U) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                >> 8U)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__perfcnt_halted))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en1 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__perfcnt_halted)) 
           & (0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pmu0inc_ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en1 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__perfcnt_halted)) 
           & (0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pmu1inc_ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en1 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__perfcnt_halted)) 
           & (0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pmu2inc_ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en1 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__perfcnt_halted)) 
           & (0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pmu3inc_ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status = 0U;
    if ((0U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U]);
    }
    if ((1U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 3U));
    }
    if ((2U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 6U));
    }
    if ((3U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 9U));
    }
    if ((4U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 0xcU));
    }
    if ((5U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 0xfU));
    }
    if ((6U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 0x12U));
    }
    if ((7U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 0x15U));
    }
    if ((8U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 0x18U));
    }
    if ((9U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 0x1bU));
    }
    if ((0xaU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                      << 2U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                                >> 0x1eU)));
    }
    if ((0xbU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 1U));
    }
    if ((0xcU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 4U));
    }
    if ((0xdU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 7U));
    }
    if ((0xeU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 0xaU));
    }
    if ((0xfU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 0xdU));
    }
    if ((0x10U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 0x10U));
    }
    if ((0x11U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 0x13U));
    }
    if ((0x12U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 0x16U));
    }
    if ((0x13U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 0x19U));
    }
    if ((0x14U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 0x1cU));
    }
    if ((0x15U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                      << 1U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                                >> 0x1fU)));
    }
    if ((0x16U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 2U));
    }
    if ((0x17U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 5U));
    }
    if ((0x18U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 8U));
    }
    if ((0x19U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 0xbU));
    }
    if ((0x1aU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 0xeU));
    }
    if ((0x1bU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 0x11U));
    }
    if ((0x1cU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 0x14U));
    }
    if ((0x1dU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 0x17U));
    }
    if ((0x1eU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 0x1aU));
    }
    if ((0x1fU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
               >> 0x1dU);
    }
    if ((0x20U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U]);
    }
    if ((0x21U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 3U));
    }
    if ((0x22U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 6U));
    }
    if ((0x23U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 9U));
    }
    if ((0x24U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 0xcU));
    }
    if ((0x25U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 0xfU));
    }
    if ((0x26U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 0x12U));
    }
    if ((0x27U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 0x15U));
    }
    if ((0x28U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 0x18U));
    }
    if ((0x29U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 0x1bU));
    }
    if ((0x2aU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                      << 2U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                                >> 0x1eU)));
    }
    if ((0x2bU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 1U));
    }
    if ((0x2cU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 4U));
    }
    if ((0x2dU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 7U));
    }
    if ((0x2eU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 0xaU));
    }
    if ((0x2fU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 0xdU));
    }
    if ((0x30U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 0x10U));
    }
    if ((0x31U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 0x13U));
    }
    if ((0x32U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 0x16U));
    }
    if ((0x33U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 0x19U));
    }
    if ((0x34U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 0x1cU));
    }
    if ((0x35U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                      << 1U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                                >> 0x1fU)));
    }
    if ((0x36U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 2U));
    }
    if ((0x37U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 5U));
    }
    if ((0x38U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 8U));
    }
    if ((0x39U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 0xbU));
    }
    if ((0x3aU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 0xeU));
    }
    if ((0x3bU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 0x11U));
    }
    if ((0x3cU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 0x14U));
    }
    if ((0x3dU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 0x17U));
    }
    if ((0x3eU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 0x1aU));
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_hae6ed180__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h45554d05__0) 
           & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                      >> 1U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h94740500__0 
        = (1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff) 
                   >> 1U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha3f640f5__0)) 
                 | (IData)((1U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h3481338d__0 
        = (1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff)) 
                 | ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff) 
                        >> 1U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha3f640f5__0))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h60795cdc__0 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff) 
             >> 2U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hbc02964e__0)) 
           | (IData)(((4U == (0xcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff))) 
                      & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h1664a179__0))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hb084dfe1__0 
        = (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff) 
                >> 2U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hbc02964e__0)) 
           | ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff) 
                  >> 2U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h1664a179__0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1 = 0U;
    if ((8U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1 = 0U;
        } else if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1 = 0U;
        } else if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1 
                = (IData)((0x10000U == (0x17000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg)));
        }
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h391d3db2__0 
        = ((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                       >> 3U))) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h6a867bb2__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_hbe32589f__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h6a867bb2__0) 
           & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                      >> 1U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_ha6824cfe__0 
        = ((IData)(swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h7460d700__0) 
           & ((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)) 
              | ((7U == (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc5))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h4264db85__0 
        = ((IData)(swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h7460d700__0) 
           & ((6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)) 
              | ((6U == (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc5))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c924b5e__0 
        = ((IData)(swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h7460d700__0) 
           & ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)) 
              | ((5U == (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc5))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h36dc1678__0 
        = ((IData)(swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h7460d700__0) 
           & ((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)) 
              | ((4U == (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc5))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h9a2f992e__0 
        = ((IData)(swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h7460d700__0) 
           & ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)) 
              | ((3U == (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc5))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h44a4969a__0 
        = ((IData)(swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h7460d700__0) 
           & ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)) 
              | ((2U == (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc5))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h20c3314a__0 
        = ((IData)(swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h7460d700__0) 
           & ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)) 
              | ((1U == (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc5))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h02cf6fe6__0 
        = ((IData)(swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h7460d700__0) 
           & ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)) 
              | ((0U == (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc5))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_heac3f525__0 
        = (1U == (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_ha334b20e__0) 
                   << 1U) | (IData)(swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_ha0a1a47e__0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_hd14a771b__0 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_ha334b20e__0) 
            << 2U) | (((IData)(swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_ha0a1a47e__0) 
                       << 1U) | (((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                                              >> 0x20U))) 
                                  & (0U != (0xffU & (IData)(
                                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                                                             >> 8U))))) 
                                 | ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                                             >> 0x20U)) 
                                    & (0xffU != (0xffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff 
                                                            >> 8U))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns 
        = ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
             >> 7U) | (IData)(((0U == (0x210U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout))) 
                               & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout)))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack_reg__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack_din) 
            | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack) 
               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__resumereq) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_halted))))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack_din)
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending_in 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0) 
           | ((~ (IData)(((0xf00c5004U == (0xfffffffcU 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)) 
                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config 
        = ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout))
            ? ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending_in 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0) 
           | ((~ (IData)(((0xf00c5008U == (0xfffffffcU 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)) 
                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config 
        = ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout))
            ? ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending_in 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0) 
           | ((~ (IData)(((0xf00c500cU == (0xfffffffcU 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)) 
                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config 
        = ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout))
            ? ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending_in 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0) 
           | ((~ (IData)(((0xf00c5010U == (0xfffffffcU 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)) 
                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config 
        = ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout))
            ? ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending_in 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0) 
           | ((~ (IData)(((0xf00c5014U == (0xfffffffcU 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)) 
                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config 
        = ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout))
            ? ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending_in 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0) 
           | ((~ (IData)(((0xf00c5018U == (0xfffffffcU 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)) 
                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config 
        = ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout))
            ? ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending_in 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0) 
           | ((~ (IData)(((0xf00c501cU == (0xfffffffcU 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)) 
                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config 
        = ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout))
            ? ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending_in 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0) 
           | ((~ (IData)(((0xf00c5020U == (0xfffffffcU 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_addr_ff)) 
                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__extintsrc_req_config 
        = ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout))
            ? ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT____VdfgTmp_he2c9b939__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_he01dbdd1__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0x17U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h8ca0fde3__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__csr_mitb0 
        = ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgTmp_h745cdf40__0) 
           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
              >> 0x14U));
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
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h2b512108__0 
        = (((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h09dd1d12__0)) 
            & (0U != (0xffU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                       >> 0x10U))))) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h09dd1d12__0) 
              & (0xffU != (0xffU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                            >> 0xfU))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_hc43ab4e6__0 
        = (((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h09dd1d12__0)) 
            & (0U != (0xffU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                       >> 0x18U))))) 
           | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____VdfgTmp_h09dd1d12__0) 
              & (0x1ffU != (0x1ffU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff 
                                              >> 0x17U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_reqvld_flushed_any 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                 >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h28ba43e3__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h2ea6b68a__0) 
           & (IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h7dfda076__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h8f17105e__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
            >> 0x19U) & (IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h7dfda076__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__pcout 
        = ((0x7ffff000U & ((0xfffff000U & (((- (IData)(
                                                       (1U 
                                                        & (~ 
                                                           (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__brimmff__dout) 
                                                             >> 0xbU) 
                                                            ^ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__ibradder__DOT__cout)))))) 
                                            << 0xcU) 
                                           & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__pcff__dout)) 
                           | ((((- (IData)(((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__brimmff__dout) 
                                                >> 0xbU)) 
                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__ibradder__DOT__cout)))) 
                                & ((IData)(1U) + (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__pcff__dout 
                                                  >> 0xcU))) 
                               | ((- (IData)(((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__ibradder__DOT__cout)) 
                                              & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__brimmff__dout) 
                                                 >> 0xbU)))) 
                                  & ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__pcff__dout 
                                      >> 0xcU) - (IData)(1U)))) 
                              << 0xcU))) | (0xfffU 
                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__pcff__dout 
                                               + (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__brimmff__dout))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____VdfgTmp_h29ec6e6d__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
           & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____VdfgTmp_h29b8be48__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
           & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____VdfgTmp_h29b48e23__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
           & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____VdfgTmp_h2393090b__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
           & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_reqvld_any 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld) 
                 >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__pcout 
        = ((0x7ffff000U & ((0xfffff000U & (((- (IData)(
                                                       (1U 
                                                        & (~ 
                                                           (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__brimmff__dout) 
                                                             >> 0xbU) 
                                                            ^ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__ibradder__DOT__cout)))))) 
                                            << 0xcU) 
                                           & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__pcff__dout)) 
                           | ((((- (IData)(((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__brimmff__dout) 
                                                >> 0xbU)) 
                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__ibradder__DOT__cout)))) 
                                & ((IData)(1U) + (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__pcff__dout 
                                                  >> 0xcU))) 
                               | ((- (IData)(((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__ibradder__DOT__cout)) 
                                              & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__brimmff__dout) 
                                                 >> 0xbU)))) 
                                  & ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__pcff__dout 
                                      >> 0xcU) - (IData)(1U)))) 
                              << 0xcU))) | (0xfffU 
                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__pcff__dout 
                                               + (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__brimmff__dout))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h3be523d9__0 
        = ((0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_in_pic_any 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                 >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any 
        = (0xffffU & (((0U == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr) 
                                        << 4U))) ? 0U
                        : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[
                           (((IData)(0xfU) + (0x7fU 
                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr) 
                                                 << 4U))) 
                            >> 5U)] << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr) 
                                            << 4U))))) 
                      | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[
                         (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr) 
                                >> 1U))] >> (0x1fU 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr) 
                                                << 4U)))));
    if (swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h6ff8d0d1__0) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_error_addr_wb 
            = (3U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_index_ff__dout) 
                     >> 2U));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_way_wb 
            = (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 3U));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_error_bank_wb 
            = (3U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 6U));
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_error_addr_wb 
            = (3U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_index_ff__dout));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_way_wb 
            = (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 2U));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_error_bank_wb 
            = (3U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__bp_wb_ff__dout 
                     >> 4U));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_inc_data_beat_cnt 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat)) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_en_new));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_data_comb_err 
        = ((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rresp_ff)) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_en_new));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_first_data 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_en_new) 
           & ((6U & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                     >> 2U)) == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rid_ff)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_second_data 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_en_new) 
           & ((1U | (6U & (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                           >> 2U))) == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rid_ff)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new_wo_err 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_en_new));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_mb_addr 
        = (((0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_en_new)) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_tag_valid_for_miss));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgExtracted_h2348283c__0 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_en_new) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__aout 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__a_ff 
           + (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__bm 
              + (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout 
                       >> 7U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_load_kill_wen)) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                  >> 0x19U) & ((~ ((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                   & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_load_kill_wen)) 
                                      & (IData)(((0x2000004U 
                                                  == 
                                                  (0x2000004U 
                                                   & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U])) 
                                                 & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h6154c559__0)))))) 
                               & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                     >> 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__aout 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__a_ff 
           + (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__bm 
              + (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout 
                       >> 7U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__pcout 
        = ((0x7ffff000U & ((0xfffff000U & (((- (IData)(
                                                       (1U 
                                                        & (~ 
                                                           (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__brimmff__dout) 
                                                             >> 0xbU) 
                                                            ^ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__ibradder__DOT__cout)))))) 
                                            << 0xcU) 
                                           & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__pcff__dout)) 
                           | ((((- (IData)(((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__brimmff__dout) 
                                                >> 0xbU)) 
                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__ibradder__DOT__cout)))) 
                                & ((IData)(1U) + (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__pcff__dout 
                                                  >> 0xcU))) 
                               | ((- (IData)(((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__ibradder__DOT__cout)) 
                                              & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__brimmff__dout) 
                                                 >> 0xbU)))) 
                                  & ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__pcff__dout 
                                      >> 0xcU) - (IData)(1U)))) 
                              << 0xcU))) | (0xfffU 
                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__pcff__dout 
                                               + (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__brimmff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__pcout 
        = ((0x7ffff000U & ((0xfffff000U & (((- (IData)(
                                                       (1U 
                                                        & (~ 
                                                           (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__brimmff__dout) 
                                                             >> 0xbU) 
                                                            ^ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__ibradder__DOT__cout)))))) 
                                            << 0xcU) 
                                           & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__pcff__dout)) 
                           | ((((- (IData)(((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__brimmff__dout) 
                                                >> 0xbU)) 
                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__ibradder__DOT__cout)))) 
                                & ((IData)(1U) + (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__pcff__dout 
                                                  >> 0xcU))) 
                               | ((- (IData)(((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__ibradder__DOT__cout)) 
                                              & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__brimmff__dout) 
                                                 >> 0xbU)))) 
                                  & ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__pcff__dout 
                                      >> 0xcU) - (IData)(1U)))) 
                              << 0xcU))) | (0xfffU 
                                            & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__pcff__dout 
                                               + (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__brimmff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_dc3 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_dc3) 
                   << (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3 
        = (0xffU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_dc3) 
                    << (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_byteen_dc3 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_dc3) 
           & (- (IData)((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout 
                               >> 0xcU)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i1_match__data 
        = (swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____VdfgTmp_ha8cdac88__0 
           & (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1 
                        >> 1U)) << 1U) | (1U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_i0_match__data 
        = (swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____VdfgTmp_ha8cdac88__0 
           & (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                        >> 1U)) << 1U) | (1U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i1_match__data 
        = (swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____VdfgTmp_h785b8957__0 
           & (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1 
                        >> 1U)) << 1U) | (1U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_i0_match__data 
        = (swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____VdfgTmp_h785b8957__0 
           & (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                        >> 1U)) << 1U) | (1U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i1_match__data 
        = (swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____VdfgTmp_hc9846603__0 
           & (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1 
                        >> 1U)) << 1U) | (1U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_i0_match__data 
        = (swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____VdfgTmp_hc9846603__0 
           & (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                        >> 1U)) << 1U) | (1U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i1_match__data 
        = (swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____VdfgTmp_h5c304fee__0 
           & (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1 
                        >> 1U)) << 1U) | (1U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_i0_match__data 
        = (swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT____VdfgTmp_h5c304fee__0 
           & (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                        >> 1U)) << 1U) | (1U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq = 0U;
    if ((0U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      << 3U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        << 2U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                                       << 1U)) 
                                                   | (1U 
                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]))));
    }
    if ((1U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      << 2U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        << 1U)) | (
                                                   (2U 
                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                         >> 1U)))));
    }
    if ((2U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      << 1U)) | ((4U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
                                 | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                           >> 1U)) 
                                    | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                             >> 2U)))));
    }
    if ((3U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
               | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                         >> 1U)) | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                           >> 2U)) 
                                    | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                             >> 3U)))));
    }
    if ((4U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 1U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 2U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                                       >> 3U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                         >> 4U)))));
    }
    if ((5U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 2U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 3U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                         >> 5U)))));
    }
    if ((6U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 3U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 4U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                                       >> 5U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                         >> 6U)))));
    }
    if ((7U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 4U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 5U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                                       >> 6U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                         >> 7U)))));
    }
    if ((8U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 5U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 6U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                                       >> 7U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                         >> 8U)))));
    }
    if ((9U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 6U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 7U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                                       >> 8U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                         >> 9U)))));
    }
    if ((0xaU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 7U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 8U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                                       >> 9U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                         >> 0xaU)))));
    }
    if ((0xbU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 8U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 9U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                                       >> 0xaU)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                         >> 0xbU)))));
    }
    if ((0xcU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 9U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 0xaU)) | 
                                 ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                           >> 0xcU)))));
    }
    if ((0xdU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0xaU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                          >> 0xbU)) 
                                   | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                             >> 0xcU)) 
                                      | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                               >> 0xdU)))));
    }
    if ((0xeU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0xbU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                          >> 0xcU)) 
                                   | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                             >> 0xdU)) 
                                      | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                               >> 0xeU)))));
    }
    if ((0xfU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0xcU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                          >> 0xdU)) 
                                   | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                             >> 0xeU)) 
                                      | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                               >> 0xfU)))));
    }
    if ((0x10U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0xdU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                          >> 0xeU)) 
                                   | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                             >> 0xfU)) 
                                      | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                               >> 0x10U)))));
    }
    if ((0x11U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0xeU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                          >> 0xfU)) 
                                   | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                             >> 0x10U)) 
                                      | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                               >> 0x11U)))));
    }
    if ((0x12U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0xfU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                          >> 0x10U)) 
                                   | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                             >> 0x11U)) 
                                      | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                               >> 0x12U)))));
    }
    if ((0x13U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x10U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x11U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x12U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                >> 0x13U)))));
    }
    if ((0x14U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x11U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x12U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x13U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                >> 0x14U)))));
    }
    if ((0x15U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x12U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x13U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x14U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                >> 0x15U)))));
    }
    if ((0x16U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x13U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x14U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x15U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                >> 0x16U)))));
    }
    if ((0x17U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x14U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x15U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x16U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                >> 0x17U)))));
    }
    if ((0x18U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x15U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x16U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x17U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                >> 0x18U)))));
    }
    if ((0x19U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x16U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x17U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x18U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                >> 0x19U)))));
    }
    if ((0x1aU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x17U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x18U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x19U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                >> 0x1aU)))));
    }
    if ((0x1bU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x18U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x19U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x1aU)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                >> 0x1bU)))));
    }
    if ((0x1cU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x19U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x1aU)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x1bU)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                >> 0x1cU)))));
    }
    if ((0x1dU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x1aU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x1bU)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x1cU)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                >> 0x1dU)))));
    }
    if ((0x1eU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x1bU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x1cU)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x1dU)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                >> 0x1eU)))));
    }
    if ((0x1fU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x1cU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x1dU)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x1eU)) 
                                       | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                          >> 0x1fU))));
    }
    if ((0x20U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      << 3U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        << 2U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                                       << 1U)) 
                                                   | (1U 
                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]))));
    }
    if ((0x21U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      << 2U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        << 1U)) | (
                                                   (2U 
                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                         >> 1U)))));
    }
    if ((0x22U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      << 1U)) | ((4U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
                                 | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                           >> 1U)) 
                                    | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                             >> 2U)))));
    }
    if ((0x23U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
               | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                         >> 1U)) | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                           >> 2U)) 
                                    | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                             >> 3U)))));
    }
    if ((0x24U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 1U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 2U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                                       >> 3U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                         >> 4U)))));
    }
    if ((0x25U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 2U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 3U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                         >> 5U)))));
    }
    if ((0x26U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 3U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 4U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                                       >> 5U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                         >> 6U)))));
    }
    if ((0x27U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 4U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 5U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                                       >> 6U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                         >> 7U)))));
    }
    if ((0x28U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 5U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 6U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                                       >> 7U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                         >> 8U)))));
    }
    if ((0x29U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 6U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 7U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                                       >> 8U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                         >> 9U)))));
    }
    if ((0x2aU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 7U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 8U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                                       >> 9U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                         >> 0xaU)))));
    }
    if ((0x2bU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 8U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 9U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                                       >> 0xaU)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                         >> 0xbU)))));
    }
    if ((0x2cU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 9U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 0xaU)) | 
                                 ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                           >> 0xcU)))));
    }
    if ((0x2dU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0xaU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                          >> 0xbU)) 
                                   | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                             >> 0xcU)) 
                                      | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                               >> 0xdU)))));
    }
    if ((0x2eU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0xbU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                          >> 0xcU)) 
                                   | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                             >> 0xdU)) 
                                      | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                               >> 0xeU)))));
    }
    if ((0x2fU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0xcU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                          >> 0xdU)) 
                                   | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                             >> 0xeU)) 
                                      | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                               >> 0xfU)))));
    }
    if ((0x30U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0xdU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                          >> 0xeU)) 
                                   | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                             >> 0xfU)) 
                                      | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                               >> 0x10U)))));
    }
    if ((0x31U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0xeU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                          >> 0xfU)) 
                                   | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                             >> 0x10U)) 
                                      | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                               >> 0x11U)))));
    }
    if ((0x32U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0xfU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                          >> 0x10U)) 
                                   | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                             >> 0x11U)) 
                                      | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                               >> 0x12U)))));
    }
    if ((0x33U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x10U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x11U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x12U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                >> 0x13U)))));
    }
    if ((0x34U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x11U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x12U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x13U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                >> 0x14U)))));
    }
    if ((0x35U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x12U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x13U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x14U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                >> 0x15U)))));
    }
    if ((0x36U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x13U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x14U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x15U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                >> 0x16U)))));
    }
    if ((0x37U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x14U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x15U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x16U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                >> 0x17U)))));
    }
    if ((0x38U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x15U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x16U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x17U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                >> 0x18U)))));
    }
    if ((0x39U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x16U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x17U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x18U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                >> 0x19U)))));
    }
    if ((0x3aU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x17U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x18U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x19U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                >> 0x1aU)))));
    }
    if ((0x3bU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x18U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x19U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x1aU)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                >> 0x1bU)))));
    }
    if ((0x3cU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x19U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x1aU)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x1bU)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                >> 0x1cU)))));
    }
    if ((0x3dU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x1aU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x1bU)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x1cU)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                >> 0x1dU)))));
    }
    if ((0x3eU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x1bU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x1cU)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x1dU)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                >> 0x1eU)))));
    }
    if ((0x3fU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
               >> 0x1dU);
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x1cU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x1dU)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x1eU)) 
                                       | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                          >> 0x1fU))));
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_he599c509__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h2eb54cad__0) 
           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
              >> 0x15U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] = 0U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xfff00U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
        = (0xadcab1ecU | (3U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0xa11ab1ebU;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xffe00U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xfffffU & (0xcU | (0xf0U & ((IData)(vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o) 
                                           >> 4U)))));
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x100U | vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            = ((0xfffffffdU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]) 
               | ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q))) 
                  << 1U));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] = 0U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xfff00U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
        = (0xadcab1ecU | (3U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0xa11ab1ebU;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xffe00U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xfffffU & (0xcU | (0xf0U & ((IData)(vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o) 
                                           >> 4U)))));
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x100U | vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            = ((0xfffffffdU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]) 
               | ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q))) 
                  << 1U));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] = 0U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xfff00U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
        = (0xadcab1ecU | (3U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0xa11ab1ebU;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xffe00U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xfffffU & (0xcU | (0xf0U & ((IData)(vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o) 
                                           >> 4U)))));
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x100U | vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            = ((0xfffffffdU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]) 
               | ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q))) 
                  << 1U));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__dma_stall 
        = (1U & (((3U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)) 
                  | ((4U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)) 
                     | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_err_wb) 
                        & (2U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))))) 
                 | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__ran_ff__dout) 
                    >> 2U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hcf409ba2__0 
        = (((1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                     >> 5U) ^ VL_REDXOR_32((0x1c000000U 
                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3))) 
                   ^ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_h58e9ffcf__0))) 
            << 5U) | (((1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                                >> 4U) ^ VL_REDXOR_32(
                                                      (0x3f800U 
                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3))) 
                              ^ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_h6b771252__0))) 
                       << 4U) | (((1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                                           >> 3U) ^ 
                                          VL_REDXOR_16(
                                                       (0x7f0U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3))) 
                                         ^ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_h6b771252__0))) 
                                  << 3U) | (((1U & 
                                              ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                                                 >> 2U) 
                                                ^ VL_REDXOR_32(
                                                               (0x3c3c78eU 
                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3))) 
                                               ^ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_h58e9ffcf__0))) 
                                             << 2U) 
                                            | (((1U 
                                                 & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                                                     >> 1U) 
                                                    ^ 
                                                    VL_REDXOR_32(
                                                                 (0x9b33366dU 
                                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3)))) 
                                                << 1U) 
                                               | (1U 
                                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3) 
                                                     ^ 
                                                     VL_REDXOR_32(
                                                                  (0x56aaad5bU 
                                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3)))))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hcf409ba2__0 
        = (((1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                     >> 5U) ^ VL_REDXOR_32((0x1c000000U 
                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3))) 
                   ^ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_h58e9ffcf__0))) 
            << 5U) | (((1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                                >> 4U) ^ VL_REDXOR_32(
                                                      (0x3f800U 
                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3))) 
                              ^ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_h6b771252__0))) 
                       << 4U) | (((1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                                           >> 3U) ^ 
                                          VL_REDXOR_16(
                                                       (0x7f0U 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3))) 
                                         ^ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_h6b771252__0))) 
                                  << 3U) | (((1U & 
                                              ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                                                 >> 2U) 
                                                ^ VL_REDXOR_32(
                                                               (0x3c3c78eU 
                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3))) 
                                               ^ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_h58e9ffcf__0))) 
                                             << 2U) 
                                            | (((1U 
                                                 & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                                                     >> 1U) 
                                                    ^ 
                                                    VL_REDXOR_32(
                                                                 (0x9b33366dU 
                                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3)))) 
                                                << 1U) 
                                               | (1U 
                                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3) 
                                                     ^ 
                                                     VL_REDXOR_32(
                                                                  (0x56aaad5bU 
                                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3)))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mtvec 
        = ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1973ddaf__0) 
           & (IData)((0x500000U == (0x1500000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_write 
        = (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____VdfgTmp_hf6cf698a__0) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_vld))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_priority)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____VdfgTmp_hf6cf698a__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_validff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_fifo_ready) 
           & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____VdfgTmp_hf6cf698a__0) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_vld)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dicad1 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0x14U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h726aa90e__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_meihap 
        = ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_haea96e68__0) 
           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
              >> 0x17U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__csr_mitctl1 
        = ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgTmp_h8c96794b__0) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h75e528cf__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h5802c78f__0 
        = ((~ vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h9242cd9f__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ldst_nodma_dc1todc3 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT____VdfgTmp_ha3e1870f__0) 
           | (((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc2ff__dout 
                   >> 0xaU)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc2ff__dout)) 
              | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT____VdfgTmp_h3d2551bb__0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__csr_mitcnt1 
        = ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgTmp_h8c96794b__0) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h51bf4b44__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mepc 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h2eb54cad__0) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h51bf4b44__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_ha996f9ad__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0x1aU)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h037aef6b__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mvendorid 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h2f6ff935__0) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h51bf4b44__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mimpid 
        = ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h2f1a5499__0) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h75e528cf__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hce8f90d2__0 
        = ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h2f1a5499__0) 
           & (IData)((0x3000000U == (0x3000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mfdc 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h60393036__0) 
           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
              >> 0x14U));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1c783147__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
            >> 0x1bU) & (IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hf0b70392__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h68ca79cb__0 
        = (IData)(((0x80000000U == (0x88000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)) 
                   & (IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hf0b70392__0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mdseac 
        = ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_haea96e68__0) 
           & (IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hf0b70392__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h3ef1ed6d__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
            >> 0x1fU) & (IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hf0b70392__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h46d47374__0 
        = (IData)(((0U == (0x1c00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)) 
                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgTmp_h5523656b__0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__csr_mitcnt0 
        = ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgTmp_h745cdf40__0) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgTmp_h5523656b__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__csr_mitb1 
        = ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgTmp_h41b7a3bb__0) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgTmp_h5523656b__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_marchid 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h2f6ff935__0) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgTmp_h5523656b__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1f3de099__0 
        = ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h185f1bb7__0) 
           & (IData)((0x2000000U == (0x6000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h6d39a228__0 
        = ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h185f1bb7__0) 
           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
              >> 0x1aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__csr_mitctl0 
        = ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____VdfgTmp_h41b7a3bb__0) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h56ee58c9__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dicawics 
        = ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1973ddaf__0) 
           & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0x17U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h56ee58c9__0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h44e11a24__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0x16U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h56ee58c9__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hd99e5bdd__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
            >> 0x16U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h56ee58c9__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dicad0 
        = ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_he9b8ab1b__0) 
           & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0x17U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h51bf4b44__0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h87244f19__0 
        = ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
               >> 0x17U)) & (IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_he9b8ab1b__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h737c5120__0 
        = ((IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_he9b8ab1b__0) 
           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
              >> 0x16U));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_he2145b17__0 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h33799c16__0) 
           & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_hfac9b600__0 
        = ((~ vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____VdfgTmp_h33799c16__0));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4c803ade__0 
        = (IData)(((0x80000000U == (0xc0000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)) 
                   & (IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hbefbf355__0)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h68aefd2e__0 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
            >> 0x1fU) & (IData)(swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hbefbf355__0));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_raw) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_i));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_noredir_wb 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0x14U) | ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                 >> 1U) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                           >> 3U)) 
                               | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_flush_pause_wb) 
                                  | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                      >> 3U) & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                >> 0xcU))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dbg_cmd_fail 
        = (0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                        >> (7U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                  << 1U)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____VdfgTmp_hf12ec1e3__0 
        = (0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                        >> (7U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                  << 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_slv_write 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write) 
                 >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_write 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write) 
                 >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ldst_dc3 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc3ff__dout) 
           & ((IData)(__VdfgTmp_h012add0b__0) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT____VdfgTmp_hb8d99d30__0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__is_ldst_dc3 
        = ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc3ff__dout) 
           & ((IData)(__VdfgTmp_h012add0b__0) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc3) 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_dccm_rden_dc3))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi 
        = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi)) 
           | (((((0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[0U] 
                             >> 2U)) == (0x3fffU & 
                                         (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                                          >> 2U))) 
                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld) 
                   | (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                         >> 0xbU)))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld))) 
              & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2)) 
                 | ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic)) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffffffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (1U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffffffdU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (2U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                      << 1U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                       << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (2U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffffffbU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (4U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                      << 2U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                       << 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (4U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffffff7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                      << 3U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                       << 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (8U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi 
        = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi)) 
           | ((((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[0U] 
                   >> 0x12U) == (0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
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
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffffffefU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x10U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                         << 3U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                          << 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                       >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffffffdfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x20U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                         << 4U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                          << 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xffffffeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                     >> 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffffffbfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x40U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                         << 5U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                          << 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xffffffcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                     >> 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffffff7fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x80U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                         << 6U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                          << 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xffffff8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                     >> 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi 
        = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi)) 
           | ((((((0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[1U] 
                              >> 2U)) == (0x3fffU & 
                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
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
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffffeffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x100U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                          << 6U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                           << 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                       >> 8U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffffdffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x200U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                          << 7U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                           << 7U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xfffffeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                    >> 8U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffffbffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x400U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                          << 8U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                           << 8U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xfffffcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                    >> 8U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffff7ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x800U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                          << 9U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                           << 9U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xfffff8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                    >> 8U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi 
        = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi)) 
           | ((((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[1U] 
                   >> 0x12U) == (0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
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
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffffefffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x1000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                           << 9U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            << 9U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                       >> 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffffdfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x2000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                           << 0xaU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            << 0xaU))));
}
