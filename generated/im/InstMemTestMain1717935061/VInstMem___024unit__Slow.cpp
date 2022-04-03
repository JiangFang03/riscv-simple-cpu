// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInstMem.h for the primary calling header

#include "VInstMem___024unit.h"
#include "VInstMem__Syms.h"

//==========


void VInstMem___024unit___ctor_var_reset(VInstMem___024unit* vlSelf);

VInstMem___024unit::VInstMem___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VInstMem___024unit___ctor_var_reset(this);
}

void VInstMem___024unit::__Vconfigure(VInstMem__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VInstMem___024unit::~VInstMem___024unit() {
}

void VInstMem___024unit___ctor_var_reset(VInstMem___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VInstMem___024unit___ctor_var_reset\n"); );
}
