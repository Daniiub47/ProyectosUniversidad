// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_swervolf_core.h"

// Parameter definitions for Vrvfpgasim_swervolf_core
constexpr VlUnpacked<IData/*31:0*/, 9> Vrvfpgasim_swervolf_core::__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__GW_CONFIG;


void Vrvfpgasim_swervolf_core___ctor_var_reset(Vrvfpgasim_swervolf_core* vlSelf);

Vrvfpgasim_swervolf_core::Vrvfpgasim_swervolf_core(Vrvfpgasim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrvfpgasim_swervolf_core___ctor_var_reset(this);
}

void Vrvfpgasim_swervolf_core::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vrvfpgasim_swervolf_core::~Vrvfpgasim_swervolf_core() {
}
