// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAluCtrl.h for the primary calling header

#include "VAluCtrl___024root.h"
#include "VAluCtrl__Syms.h"

//==========


void VAluCtrl___024root___ctor_var_reset(VAluCtrl___024root* vlSelf);

VAluCtrl___024root::VAluCtrl___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VAluCtrl___024root___ctor_var_reset(this);
}

void VAluCtrl___024root::__Vconfigure(VAluCtrl__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VAluCtrl___024root::~VAluCtrl___024root() {
}

void VAluCtrl___024root___eval_initial(VAluCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAluCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAluCtrl___024root___eval_initial\n"); );
}

void VAluCtrl___024root___combo__TOP__1(VAluCtrl___024root* vlSelf);

void VAluCtrl___024root___eval_settle(VAluCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAluCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAluCtrl___024root___eval_settle\n"); );
    // Body
    VAluCtrl___024root___combo__TOP__1(vlSelf);
}

void VAluCtrl___024root___final(VAluCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAluCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAluCtrl___024root___final\n"); );
}

void VAluCtrl___024root___ctor_var_reset(VAluCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAluCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAluCtrl___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_alu_op = VL_RAND_RESET_I(2);
    vlSelf->io_fun3 = VL_RAND_RESET_I(3);
    vlSelf->io_fun7 = VL_RAND_RESET_I(1);
    vlSelf->io_alu_ctrl = VL_RAND_RESET_I(4);
}
