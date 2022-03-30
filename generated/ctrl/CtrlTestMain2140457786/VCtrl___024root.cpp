// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCtrl.h for the primary calling header

#include "VCtrl___024root.h"
#include "VCtrl__Syms.h"

//==========

VL_INLINE_OPT void VCtrl___024root___combo__TOP__1(VCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCtrl___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->io_alu_src = (1U & ((~ (vlSelf->io_inst 
                                    >> 6U)) & (~ (IData)(
                                                         (0x30U 
                                                          == 
                                                          (0x30U 
                                                           & vlSelf->io_inst))))));
    vlSelf->io_mem_to_reg = (IData)((0U == (0x70U & vlSelf->io_inst)));
    vlSelf->io_reg_write = (1U & ((~ (vlSelf->io_inst 
                                      >> 6U)) & (~ (IData)(
                                                           (0x20U 
                                                            == 
                                                            (0x30U 
                                                             & vlSelf->io_inst))))));
    vlSelf->io_mem_read = (IData)((0U == (0x70U & vlSelf->io_inst)));
    vlSelf->io_mem_write = (IData)((0x20U == (0x70U 
                                              & vlSelf->io_inst)));
    vlSelf->io_branch = (1U & (vlSelf->io_inst >> 6U));
    vlSelf->io_alu_op = (((IData)((0x10U == (0x50U 
                                             & vlSelf->io_inst))) 
                          << 1U) | (IData)((0x60U == 
                                            (0x70U 
                                             & vlSelf->io_inst))));
}

void VCtrl___024root___eval(VCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCtrl___024root___eval\n"); );
    // Body
    VCtrl___024root___combo__TOP__1(vlSelf);
}

QData VCtrl___024root___change_request_1(VCtrl___024root* vlSelf);

VL_INLINE_OPT QData VCtrl___024root___change_request(VCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCtrl___024root___change_request\n"); );
    // Body
    return (VCtrl___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VCtrl___024root___change_request_1(VCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCtrl___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VCtrl___024root___eval_debug_assertions(VCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCtrl___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
