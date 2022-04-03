// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInstMem.h for the primary calling header

#include "VInstMem___024root.h"
#include "VInstMem__Syms.h"

//==========


void VInstMem___024root___ctor_var_reset(VInstMem___024root* vlSelf);

VInstMem___024root::VInstMem___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VInstMem___024root___ctor_var_reset(this);
}

void VInstMem___024root::__Vconfigure(VInstMem__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VInstMem___024root::~VInstMem___024root() {
}

extern const VlWide<12>/*383:0*/ VInstMem__ConstPool__CONST_ae304150_0;

void VInstMem___024root___initial__TOP__1(VInstMem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstMem___024root___initial__TOP__1\n"); );
    // Body
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(12, VInstMem__ConstPool__CONST_ae304150_0)
                 ,  &(vlSelf->InstMem__DOT__mem), 0
                 , ~0ULL);
}

void VInstMem___024root___eval_initial(VInstMem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstMem___024root___eval_initial\n"); );
    // Body
    VInstMem___024root___initial__TOP__1(vlSelf);
}

void VInstMem___024root___combo__TOP__2(VInstMem___024root* vlSelf);

void VInstMem___024root___eval_settle(VInstMem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstMem___024root___eval_settle\n"); );
    // Body
    VInstMem___024root___combo__TOP__2(vlSelf);
}

void VInstMem___024root___final(VInstMem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstMem___024root___final\n"); );
}

void VInstMem___024root___ctor_var_reset(VInstMem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstMem___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_address = VL_RAND_RESET_I(10);
    vlSelf->io_inst = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->InstMem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
}
