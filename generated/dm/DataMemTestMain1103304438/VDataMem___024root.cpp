// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDataMem.h for the primary calling header

#include "VDataMem___024root.h"
#include "VDataMem__Syms.h"

//==========

VL_INLINE_OPT void VDataMem___024root___sequent__TOP__1(VDataMem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDataMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMem___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__DataMem__DOT__mem__v0;
    SData/*9:0*/ __Vdlyvdim0__DataMem__DOT__mem__v0;
    QData/*63:0*/ __Vdlyvval__DataMem__DOT__mem__v0;
    // Body
    __Vdlyvset__DataMem__DOT__mem__v0 = 0U;
    if (((IData)(vlSelf->io_mem_write) & (~ (IData)(vlSelf->io_mem_read)))) {
        __Vdlyvval__DataMem__DOT__mem__v0 = vlSelf->io_write_data;
        __Vdlyvset__DataMem__DOT__mem__v0 = 1U;
        __Vdlyvdim0__DataMem__DOT__mem__v0 = vlSelf->io_address;
    }
    if (__Vdlyvset__DataMem__DOT__mem__v0) {
        vlSelf->DataMem__DOT__mem[__Vdlyvdim0__DataMem__DOT__mem__v0] 
            = __Vdlyvval__DataMem__DOT__mem__v0;
    }
}

VL_INLINE_OPT void VDataMem___024root___settle__TOP__2(VDataMem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDataMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMem___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->io_read_data = vlSelf->DataMem__DOT__mem
        [vlSelf->io_address];
}

void VDataMem___024root___eval(VDataMem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDataMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMem___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VDataMem___024root___sequent__TOP__1(vlSelf);
    }
    VDataMem___024root___settle__TOP__2(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData VDataMem___024root___change_request_1(VDataMem___024root* vlSelf);

VL_INLINE_OPT QData VDataMem___024root___change_request(VDataMem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDataMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMem___024root___change_request\n"); );
    // Body
    return (VDataMem___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VDataMem___024root___change_request_1(VDataMem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDataMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMem___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VDataMem___024root___eval_debug_assertions(VDataMem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDataMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMem___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_mem_write & 0xfeU))) {
        Verilated::overWidthError("io_mem_write");}
    if (VL_UNLIKELY((vlSelf->io_mem_read & 0xfeU))) {
        Verilated::overWidthError("io_mem_read");}
    if (VL_UNLIKELY((vlSelf->io_address & 0xfc00U))) {
        Verilated::overWidthError("io_address");}
}
#endif  // VL_DEBUG
