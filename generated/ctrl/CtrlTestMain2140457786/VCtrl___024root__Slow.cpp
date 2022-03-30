// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCtrl.h for the primary calling header

#include "VCtrl___024root.h"
#include "VCtrl__Syms.h"

//==========


void VCtrl___024root___ctor_var_reset(VCtrl___024root* vlSelf);

VCtrl___024root::VCtrl___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VCtrl___024root___ctor_var_reset(this);
}

void VCtrl___024root::__Vconfigure(VCtrl__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VCtrl___024root::~VCtrl___024root() {
}

void VCtrl___024root___eval_initial(VCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCtrl___024root___eval_initial\n"); );
}

void VCtrl___024root___combo__TOP__1(VCtrl___024root* vlSelf);

void VCtrl___024root___eval_settle(VCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCtrl___024root___eval_settle\n"); );
    // Body
    VCtrl___024root___combo__TOP__1(vlSelf);
}

void VCtrl___024root___final(VCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCtrl___024root___final\n"); );
}

void VCtrl___024root___ctor_var_reset(VCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCtrl___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_inst = VL_RAND_RESET_I(32);
    vlSelf->io_alu_src = VL_RAND_RESET_I(1);
    vlSelf->io_mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->io_reg_write = VL_RAND_RESET_I(1);
    vlSelf->io_mem_read = VL_RAND_RESET_I(1);
    vlSelf->io_mem_write = VL_RAND_RESET_I(1);
    vlSelf->io_branch = VL_RAND_RESET_I(1);
    vlSelf->io_alu_op = VL_RAND_RESET_I(2);
}
