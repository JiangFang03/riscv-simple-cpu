// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAlu.h for the primary calling header

#include "VAlu___024root.h"
#include "VAlu__Syms.h"

//==========

VL_INLINE_OPT void VAlu___024root___combo__TOP__1(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->Alu__DOT___res_T_1 = (vlSelf->io_oper_a 
                                  & vlSelf->io_oper_b);
    vlSelf->Alu__DOT___GEN_2 = ((1U == (IData)(vlSelf->io_aluCtrl))
                                 ? (vlSelf->io_oper_a 
                                    | vlSelf->io_oper_b)
                                 : ((2U == (IData)(vlSelf->io_aluCtrl))
                                     ? (vlSelf->io_oper_a 
                                        + vlSelf->io_oper_b)
                                     : ((6U == (IData)(vlSelf->io_aluCtrl))
                                         ? (vlSelf->io_oper_a 
                                            - vlSelf->io_oper_b)
                                         : 0ULL)));
    vlSelf->io_result = ((0U == (IData)(vlSelf->io_aluCtrl))
                          ? vlSelf->Alu__DOT___res_T_1
                          : vlSelf->Alu__DOT___GEN_2);
    vlSelf->io_zero = (0ULL == ((0U == (IData)(vlSelf->io_aluCtrl))
                                 ? vlSelf->Alu__DOT___res_T_1
                                 : vlSelf->Alu__DOT___GEN_2));
}

void VAlu___024root___eval(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval\n"); );
    // Body
    VAlu___024root___combo__TOP__1(vlSelf);
}

QData VAlu___024root___change_request_1(VAlu___024root* vlSelf);

VL_INLINE_OPT QData VAlu___024root___change_request(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___change_request\n"); );
    // Body
    return (VAlu___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VAlu___024root___change_request_1(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAlu___024root___eval_debug_assertions(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_aluCtrl & 0xe0U))) {
        Verilated::overWidthError("io_aluCtrl");}
}
#endif  // VL_DEBUG
