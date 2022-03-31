// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegFiles.h for the primary calling header

#include "VRegFiles___024root.h"
#include "VRegFiles__Syms.h"

//==========


void VRegFiles___024root___ctor_var_reset(VRegFiles___024root* vlSelf);

VRegFiles___024root::VRegFiles___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VRegFiles___024root___ctor_var_reset(this);
}

void VRegFiles___024root::__Vconfigure(VRegFiles__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VRegFiles___024root::~VRegFiles___024root() {
}

void VRegFiles___024root___eval_initial(VRegFiles___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegFiles__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegFiles___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void VRegFiles___024root___settle__TOP__2(VRegFiles___024root* vlSelf);

void VRegFiles___024root___eval_settle(VRegFiles___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegFiles__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegFiles___024root___eval_settle\n"); );
    // Body
    VRegFiles___024root___settle__TOP__2(vlSelf);
}

void VRegFiles___024root___final(VRegFiles___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegFiles__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegFiles___024root___final\n"); );
}

void VRegFiles___024root___ctor_var_reset(VRegFiles___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegFiles__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegFiles___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_reg_write = VL_RAND_RESET_I(1);
    vlSelf->io_rs1 = VL_RAND_RESET_I(5);
    vlSelf->io_rs2 = VL_RAND_RESET_I(5);
    vlSelf->io_rd = VL_RAND_RESET_I(5);
    vlSelf->io_w_data = VL_RAND_RESET_Q(64);
    vlSelf->io_r_data1 = VL_RAND_RESET_Q(64);
    vlSelf->io_r_data2 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_0 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_1 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_2 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_3 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_4 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_5 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_6 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_7 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_8 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_9 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_10 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_11 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_12 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_13 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_14 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_15 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_16 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_17 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_18 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_19 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_20 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_21 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_22 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_23 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_24 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_25 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_26 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_27 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_28 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_29 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_30 = VL_RAND_RESET_Q(64);
    vlSelf->RegFiles__DOT__registers_31 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
