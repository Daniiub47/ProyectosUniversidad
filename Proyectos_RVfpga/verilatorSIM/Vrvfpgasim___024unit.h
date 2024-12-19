// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvfpgasim.h for the primary calling header

#ifndef VERILATED_VRVFPGASIM___024UNIT_H_
#define VERILATED_VRVFPGASIM___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vrvfpgasim__Syms;

class Vrvfpgasim___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vrvfpgasim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrvfpgasim___024unit(Vrvfpgasim__Syms* symsp, const char* v__name);
    ~Vrvfpgasim___024unit();
    VL_UNCOPYABLE(Vrvfpgasim___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
