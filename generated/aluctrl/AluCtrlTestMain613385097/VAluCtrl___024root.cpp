// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAluCtrl.h for the primary calling header

#include "VAluCtrl___024root.h"
#include "VAluCtrl__Syms.h"

//==========

VL_INLINE_OPT void VAluCtrl___024root___combo__TOP__1(VAluCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAluCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAluCtrl___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->io_alu_ctrl = ((0U == (IData)(vlSelf->io_alu_op))
                            ? 2U : ((1U == (IData)(vlSelf->io_alu_op))
                                     ? 6U : ((2U == (IData)(vlSelf->io_alu_op))
                                              ? ((7U 
                                                  == (IData)(vlSelf->io_fun3))
                                                  ? 0U
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->io_fun3))
                                                   ? 1U
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->io_fun3))
                                                    ? 
                                                   (2U 
                                                    | ((IData)(vlSelf->io_fun7) 
                                                       << 2U))
                                                    : 0U)))
                                              : 0U)));
}

void VAluCtrl___024root___eval(VAluCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAluCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAluCtrl___024root___eval\n"); );
    // Body
    VAluCtrl___024root___combo__TOP__1(vlSelf);
}

QData VAluCtrl___024root___change_request_1(VAluCtrl___024root* vlSelf);

VL_INLINE_OPT QData VAluCtrl___024root___change_request(VAluCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAluCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAluCtrl___024root___change_request\n"); );
    // Body
    return (VAluCtrl___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VAluCtrl___024root___change_request_1(VAluCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAluCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAluCtrl___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAluCtrl___024root___eval_debug_assertions(VAluCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAluCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAluCtrl___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_alu_op & 0xfcU))) {
        Verilated::overWidthError("io_alu_op");}
    if (VL_UNLIKELY((vlSelf->io_fun3 & 0xf8U))) {
        Verilated::overWidthError("io_fun3");}
    if (VL_UNLIKELY((vlSelf->io_fun7 & 0xfeU))) {
        Verilated::overWidthError("io_fun7");}
}
#endif  // VL_DEBUG
