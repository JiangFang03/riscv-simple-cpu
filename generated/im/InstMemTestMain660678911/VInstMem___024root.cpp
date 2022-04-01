// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInstMem.h for the primary calling header

#include "VInstMem___024root.h"
#include "VInstMem__Syms.h"

//==========

VL_INLINE_OPT void VInstMem___024root___combo__TOP__2(VInstMem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstMem___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->io_inst = vlSelf->InstMem__DOT__mem[vlSelf->io_address];
}

void VInstMem___024root___eval(VInstMem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstMem___024root___eval\n"); );
    // Body
    VInstMem___024root___combo__TOP__2(vlSelf);
}

QData VInstMem___024root___change_request_1(VInstMem___024root* vlSelf);

VL_INLINE_OPT QData VInstMem___024root___change_request(VInstMem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstMem___024root___change_request\n"); );
    // Body
    return (VInstMem___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VInstMem___024root___change_request_1(VInstMem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstMem___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VInstMem___024root___eval_debug_assertions(VInstMem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstMem___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_address & 0xfc00U))) {
        Verilated::overWidthError("io_address");}
}
#endif  // VL_DEBUG
