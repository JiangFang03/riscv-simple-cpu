// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VImmGen.h for the primary calling header

#include "VImmGen___024root.h"
#include "VImmGen__Syms.h"

//==========

VL_INLINE_OPT void VImmGen___024root___combo__TOP__1(VImmGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImmGen___024root___combo__TOP__1\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp1;
    VlWide<3>/*95:0*/ __Vtemp2;
    // Body
    vlSelf->io_i_imm = ((((vlSelf->io_instruction >> 0x1fU)
                           ? 0xfffffffffffffULL : 0ULL) 
                         << 0xcU) | (QData)((IData)(
                                                    (vlSelf->io_instruction 
                                                     >> 0x14U))));
    vlSelf->io_s_imm = ((((vlSelf->io_instruction >> 0x1fU)
                           ? 0xfffffffffffffULL : 0ULL) 
                         << 0xcU) | (QData)((IData)(
                                                    ((0xfe0U 
                                                      & (vlSelf->io_instruction 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->io_instruction 
                                                           >> 7U))))));
    vlSelf->io_b_imm = ((((vlSelf->io_instruction >> 0x1fU)
                           ? 0x7ffffffffffffULL : 0ULL) 
                         << 0xdU) | (QData)((IData)(
                                                    ((0x1000U 
                                                      & (vlSelf->io_instruction 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (vlSelf->io_instruction 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelf->io_instruction 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelf->io_instruction 
                                                                 >> 7U))))))));
    __Vtemp1[0U] = ((IData)(((((vlSelf->io_instruction 
                                >> 0x1fU) ? 0xfffffffffffULL
                                : 0ULL) << 0x14U) | (QData)((IData)(
                                                                    (vlSelf->io_instruction 
                                                                     >> 0xcU))))) 
                    << 0xcU);
    __Vtemp1[1U] = (((IData)(((((vlSelf->io_instruction 
                                 >> 0x1fU) ? 0xfffffffffffULL
                                 : 0ULL) << 0x14U) 
                              | (QData)((IData)((vlSelf->io_instruction 
                                                 >> 0xcU))))) 
                     >> 0x14U) | ((IData)((((((vlSelf->io_instruction 
                                               >> 0x1fU)
                                               ? 0xfffffffffffULL
                                               : 0ULL) 
                                             << 0x14U) 
                                            | (QData)((IData)(
                                                              (vlSelf->io_instruction 
                                                               >> 0xcU)))) 
                                           >> 0x20U)) 
                                  << 0xcU));
    __Vtemp1[2U] = ((IData)((((((vlSelf->io_instruction 
                                 >> 0x1fU) ? 0xfffffffffffULL
                                 : 0ULL) << 0x14U) 
                              | (QData)((IData)((vlSelf->io_instruction 
                                                 >> 0xcU)))) 
                             >> 0x20U)) >> 0x14U);
    VL_EXTEND_WW(79,76, __Vtemp2, __Vtemp1);
    vlSelf->io_u_imm = (((QData)((IData)(__Vtemp2[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     __Vtemp2[0U])));
    vlSelf->io_j_imm = ((((vlSelf->io_instruction >> 0x1fU)
                           ? 0x7ffffffffffULL : 0ULL) 
                         << 0x15U) | (QData)((IData)(
                                                     ((0x100000U 
                                                       & (vlSelf->io_instruction 
                                                          >> 0xbU)) 
                                                      | ((0xff000U 
                                                          & vlSelf->io_instruction) 
                                                         | ((0x800U 
                                                             & (vlSelf->io_instruction 
                                                                >> 9U)) 
                                                            | (0x7feU 
                                                               & (vlSelf->io_instruction 
                                                                  >> 0x14U))))))));
}

void VImmGen___024root___eval(VImmGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImmGen___024root___eval\n"); );
    // Body
    VImmGen___024root___combo__TOP__1(vlSelf);
}

QData VImmGen___024root___change_request_1(VImmGen___024root* vlSelf);

VL_INLINE_OPT QData VImmGen___024root___change_request(VImmGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImmGen___024root___change_request\n"); );
    // Body
    return (VImmGen___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VImmGen___024root___change_request_1(VImmGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImmGen___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VImmGen___024root___eval_debug_assertions(VImmGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImmGen___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
