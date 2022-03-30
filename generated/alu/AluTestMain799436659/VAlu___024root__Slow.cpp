// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAlu.h for the primary calling header

#include "VAlu___024root.h"
#include "VAlu__Syms.h"

//==========


void VAlu___024root___ctor_var_reset(VAlu___024root* vlSelf);

VAlu___024root::VAlu___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VAlu___024root___ctor_var_reset(this);
}

void VAlu___024root::__Vconfigure(VAlu__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VAlu___024root::~VAlu___024root() {
}

void VAlu___024root___eval_initial(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_initial\n"); );
}

void VAlu___024root___combo__TOP__1(VAlu___024root* vlSelf);

void VAlu___024root___eval_settle(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_settle\n"); );
    // Body
    VAlu___024root___combo__TOP__1(vlSelf);
}

void VAlu___024root___final(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___final\n"); );
}

void VAlu___024root___ctor_var_reset(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_oper_a = VL_RAND_RESET_Q(64);
    vlSelf->io_oper_b = VL_RAND_RESET_Q(64);
    vlSelf->io_aluCtrl = VL_RAND_RESET_I(5);
    vlSelf->io_result = VL_RAND_RESET_Q(64);
    vlSelf->io_zero = VL_RAND_RESET_I(1);
    vlSelf->Alu__DOT___res_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->Alu__DOT___GEN_2 = VL_RAND_RESET_Q(64);
}
