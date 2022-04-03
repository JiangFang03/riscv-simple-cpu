// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VImmGen.h for the primary calling header

#include "VImmGen___024root.h"
#include "VImmGen__Syms.h"

//==========


void VImmGen___024root___ctor_var_reset(VImmGen___024root* vlSelf);

VImmGen___024root::VImmGen___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VImmGen___024root___ctor_var_reset(this);
}

void VImmGen___024root::__Vconfigure(VImmGen__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VImmGen___024root::~VImmGen___024root() {
}

void VImmGen___024root___eval_initial(VImmGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImmGen___024root___eval_initial\n"); );
}

void VImmGen___024root___combo__TOP__1(VImmGen___024root* vlSelf);

void VImmGen___024root___eval_settle(VImmGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImmGen___024root___eval_settle\n"); );
    // Body
    VImmGen___024root___combo__TOP__1(vlSelf);
}

void VImmGen___024root___final(VImmGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImmGen___024root___final\n"); );
}

void VImmGen___024root___ctor_var_reset(VImmGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImmGen___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_instruction = VL_RAND_RESET_I(32);
    vlSelf->io_i_imm = VL_RAND_RESET_Q(64);
    vlSelf->io_s_imm = VL_RAND_RESET_Q(64);
    vlSelf->io_b_imm = VL_RAND_RESET_Q(64);
    vlSelf->io_u_imm = VL_RAND_RESET_Q(64);
    vlSelf->io_j_imm = VL_RAND_RESET_Q(64);
}
