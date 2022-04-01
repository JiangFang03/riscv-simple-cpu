// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDataMem.h for the primary calling header

#include "VDataMem___024root.h"
#include "VDataMem__Syms.h"

//==========


void VDataMem___024root___ctor_var_reset(VDataMem___024root* vlSelf);

VDataMem___024root::VDataMem___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VDataMem___024root___ctor_var_reset(this);
}

void VDataMem___024root::__Vconfigure(VDataMem__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VDataMem___024root::~VDataMem___024root() {
}

void VDataMem___024root___eval_initial(VDataMem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDataMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMem___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void VDataMem___024root___settle__TOP__2(VDataMem___024root* vlSelf);

void VDataMem___024root___eval_settle(VDataMem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDataMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMem___024root___eval_settle\n"); );
    // Body
    VDataMem___024root___settle__TOP__2(vlSelf);
}

void VDataMem___024root___final(VDataMem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDataMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMem___024root___final\n"); );
}

void VDataMem___024root___ctor_var_reset(VDataMem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDataMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMem___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_mem_write = VL_RAND_RESET_I(1);
    vlSelf->io_mem_read = VL_RAND_RESET_I(1);
    vlSelf->io_address = VL_RAND_RESET_I(10);
    vlSelf->io_write_data = VL_RAND_RESET_Q(64);
    vlSelf->io_read_data = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->DataMem__DOT__mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
}
