// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegFiles.h for the primary calling header

#include "VRegFiles___024root.h"
#include "VRegFiles__Syms.h"

//==========

VL_INLINE_OPT void VRegFiles___024root___sequent__TOP__1(VRegFiles___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegFiles__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegFiles___024root___sequent__TOP__1\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_31 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((0x1fU == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_31 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_30 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((0x1eU == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_30 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_29 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((0x1dU == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_29 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_28 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((0x1cU == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_28 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_27 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((0x1bU == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_27 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_26 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((0x1aU == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_26 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_25 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((0x19U == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_25 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_24 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((0x18U == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_24 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_23 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((0x17U == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_23 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_22 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((0x16U == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_22 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_21 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((0x15U == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_21 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_20 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((0x14U == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_20 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_9 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((9U == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_9 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_8 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((8U == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_8 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_7 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((7U == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_7 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_6 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((6U == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_6 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_2 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((2U == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_2 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_17 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((0x11U == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_17 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_14 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((0xeU == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_14 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_13 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((0xdU == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_13 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_19 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((0x13U == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_19 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_1 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((1U == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_1 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_16 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((0x10U == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_16 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_18 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((0x12U == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_18 
                    = vlSelf->io_w_data;
            }
        }
    }
    vlSelf->RegFiles__DOT__registers_0 = ((IData)(vlSelf->reset)
                                           ? 0ULL : 
                                          ((IData)(vlSelf->io_reg_write)
                                            ? ((0U 
                                                != (IData)(vlSelf->io_rd))
                                                ? (
                                                   (0U 
                                                    == (IData)(vlSelf->io_rd))
                                                    ? vlSelf->io_w_data
                                                    : 0ULL)
                                                : 0ULL)
                                            : 0ULL));
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_15 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((0xfU == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_15 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_3 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((3U == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_3 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_4 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((4U == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_4 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_5 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((5U == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_5 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_10 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((0xaU == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_10 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_11 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((0xbU == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_11 
                    = vlSelf->io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->RegFiles__DOT__registers_12 = 0ULL;
    } else if (vlSelf->io_reg_write) {
        if ((0U != (IData)(vlSelf->io_rd))) {
            if ((0xcU == (IData)(vlSelf->io_rd))) {
                vlSelf->RegFiles__DOT__registers_12 
                    = vlSelf->io_w_data;
            }
        }
    }
}

VL_INLINE_OPT void VRegFiles___024root___settle__TOP__2(VRegFiles___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegFiles__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegFiles___024root___settle__TOP__2\n"); );
    // Variables
    QData/*63:0*/ RegFiles__DOT___GEN_21;
    QData/*63:0*/ RegFiles__DOT___GEN_53;
    // Body
    RegFiles__DOT___GEN_21 = ((0x15U == (IData)(vlSelf->io_rs1))
                               ? vlSelf->RegFiles__DOT__registers_21
                               : ((0x14U == (IData)(vlSelf->io_rs1))
                                   ? vlSelf->RegFiles__DOT__registers_20
                                   : ((0x13U == (IData)(vlSelf->io_rs1))
                                       ? vlSelf->RegFiles__DOT__registers_19
                                       : ((0x12U == (IData)(vlSelf->io_rs1))
                                           ? vlSelf->RegFiles__DOT__registers_18
                                           : ((0x11U 
                                               == (IData)(vlSelf->io_rs1))
                                               ? vlSelf->RegFiles__DOT__registers_17
                                               : ((0x10U 
                                                   == (IData)(vlSelf->io_rs1))
                                                   ? vlSelf->RegFiles__DOT__registers_16
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->io_rs1))
                                                    ? vlSelf->RegFiles__DOT__registers_15
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->io_rs1))
                                                     ? vlSelf->RegFiles__DOT__registers_14
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->io_rs1))
                                                      ? vlSelf->RegFiles__DOT__registers_13
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->io_rs1))
                                                       ? vlSelf->RegFiles__DOT__registers_12
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->io_rs1))
                                                        ? vlSelf->RegFiles__DOT__registers_11
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->io_rs1))
                                                         ? vlSelf->RegFiles__DOT__registers_10
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->io_rs1))
                                                          ? vlSelf->RegFiles__DOT__registers_9
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->io_rs1))
                                                           ? vlSelf->RegFiles__DOT__registers_8
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->io_rs1))
                                                            ? vlSelf->RegFiles__DOT__registers_7
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->io_rs1))
                                                             ? vlSelf->RegFiles__DOT__registers_6
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->io_rs1))
                                                              ? vlSelf->RegFiles__DOT__registers_5
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->io_rs1))
                                                               ? vlSelf->RegFiles__DOT__registers_4
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->io_rs1))
                                                                ? vlSelf->RegFiles__DOT__registers_3
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->io_rs1))
                                                                 ? vlSelf->RegFiles__DOT__registers_2
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->io_rs1))
                                                                  ? vlSelf->RegFiles__DOT__registers_1
                                                                  : vlSelf->RegFiles__DOT__registers_0)))))))))))))))))))));
    RegFiles__DOT___GEN_53 = ((0x15U == (IData)(vlSelf->io_rs2))
                               ? vlSelf->RegFiles__DOT__registers_21
                               : ((0x14U == (IData)(vlSelf->io_rs2))
                                   ? vlSelf->RegFiles__DOT__registers_20
                                   : ((0x13U == (IData)(vlSelf->io_rs2))
                                       ? vlSelf->RegFiles__DOT__registers_19
                                       : ((0x12U == (IData)(vlSelf->io_rs2))
                                           ? vlSelf->RegFiles__DOT__registers_18
                                           : ((0x11U 
                                               == (IData)(vlSelf->io_rs2))
                                               ? vlSelf->RegFiles__DOT__registers_17
                                               : ((0x10U 
                                                   == (IData)(vlSelf->io_rs2))
                                                   ? vlSelf->RegFiles__DOT__registers_16
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->io_rs2))
                                                    ? vlSelf->RegFiles__DOT__registers_15
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->io_rs2))
                                                     ? vlSelf->RegFiles__DOT__registers_14
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->io_rs2))
                                                      ? vlSelf->RegFiles__DOT__registers_13
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->io_rs2))
                                                       ? vlSelf->RegFiles__DOT__registers_12
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->io_rs2))
                                                        ? vlSelf->RegFiles__DOT__registers_11
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->io_rs2))
                                                         ? vlSelf->RegFiles__DOT__registers_10
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->io_rs2))
                                                          ? vlSelf->RegFiles__DOT__registers_9
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->io_rs2))
                                                           ? vlSelf->RegFiles__DOT__registers_8
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->io_rs2))
                                                            ? vlSelf->RegFiles__DOT__registers_7
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->io_rs2))
                                                             ? vlSelf->RegFiles__DOT__registers_6
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->io_rs2))
                                                              ? vlSelf->RegFiles__DOT__registers_5
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->io_rs2))
                                                               ? vlSelf->RegFiles__DOT__registers_4
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->io_rs2))
                                                                ? vlSelf->RegFiles__DOT__registers_3
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->io_rs2))
                                                                 ? vlSelf->RegFiles__DOT__registers_2
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->io_rs2))
                                                                  ? vlSelf->RegFiles__DOT__registers_1
                                                                  : vlSelf->RegFiles__DOT__registers_0)))))))))))))))))))));
    vlSelf->io_r_data1 = ((0x1fU == (IData)(vlSelf->io_rs1))
                           ? vlSelf->RegFiles__DOT__registers_31
                           : ((0x1eU == (IData)(vlSelf->io_rs1))
                               ? vlSelf->RegFiles__DOT__registers_30
                               : ((0x1dU == (IData)(vlSelf->io_rs1))
                                   ? vlSelf->RegFiles__DOT__registers_29
                                   : ((0x1cU == (IData)(vlSelf->io_rs1))
                                       ? vlSelf->RegFiles__DOT__registers_28
                                       : ((0x1bU == (IData)(vlSelf->io_rs1))
                                           ? vlSelf->RegFiles__DOT__registers_27
                                           : ((0x1aU 
                                               == (IData)(vlSelf->io_rs1))
                                               ? vlSelf->RegFiles__DOT__registers_26
                                               : ((0x19U 
                                                   == (IData)(vlSelf->io_rs1))
                                                   ? vlSelf->RegFiles__DOT__registers_25
                                                   : 
                                                  ((0x18U 
                                                    == (IData)(vlSelf->io_rs1))
                                                    ? vlSelf->RegFiles__DOT__registers_24
                                                    : 
                                                   ((0x17U 
                                                     == (IData)(vlSelf->io_rs1))
                                                     ? vlSelf->RegFiles__DOT__registers_23
                                                     : 
                                                    ((0x16U 
                                                      == (IData)(vlSelf->io_rs1))
                                                      ? vlSelf->RegFiles__DOT__registers_22
                                                      : RegFiles__DOT___GEN_21))))))))));
    vlSelf->io_r_data2 = ((0x1fU == (IData)(vlSelf->io_rs2))
                           ? vlSelf->RegFiles__DOT__registers_31
                           : ((0x1eU == (IData)(vlSelf->io_rs2))
                               ? vlSelf->RegFiles__DOT__registers_30
                               : ((0x1dU == (IData)(vlSelf->io_rs2))
                                   ? vlSelf->RegFiles__DOT__registers_29
                                   : ((0x1cU == (IData)(vlSelf->io_rs2))
                                       ? vlSelf->RegFiles__DOT__registers_28
                                       : ((0x1bU == (IData)(vlSelf->io_rs2))
                                           ? vlSelf->RegFiles__DOT__registers_27
                                           : ((0x1aU 
                                               == (IData)(vlSelf->io_rs2))
                                               ? vlSelf->RegFiles__DOT__registers_26
                                               : ((0x19U 
                                                   == (IData)(vlSelf->io_rs2))
                                                   ? vlSelf->RegFiles__DOT__registers_25
                                                   : 
                                                  ((0x18U 
                                                    == (IData)(vlSelf->io_rs2))
                                                    ? vlSelf->RegFiles__DOT__registers_24
                                                    : 
                                                   ((0x17U 
                                                     == (IData)(vlSelf->io_rs2))
                                                     ? vlSelf->RegFiles__DOT__registers_23
                                                     : 
                                                    ((0x16U 
                                                      == (IData)(vlSelf->io_rs2))
                                                      ? vlSelf->RegFiles__DOT__registers_22
                                                      : RegFiles__DOT___GEN_53))))))))));
}

void VRegFiles___024root___eval(VRegFiles___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegFiles__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegFiles___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VRegFiles___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    VRegFiles___024root___settle__TOP__2(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData VRegFiles___024root___change_request_1(VRegFiles___024root* vlSelf);

VL_INLINE_OPT QData VRegFiles___024root___change_request(VRegFiles___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegFiles__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegFiles___024root___change_request\n"); );
    // Body
    return (VRegFiles___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VRegFiles___024root___change_request_1(VRegFiles___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegFiles__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegFiles___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VRegFiles___024root___eval_debug_assertions(VRegFiles___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegFiles__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegFiles___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_reg_write & 0xfeU))) {
        Verilated::overWidthError("io_reg_write");}
    if (VL_UNLIKELY((vlSelf->io_rs1 & 0xe0U))) {
        Verilated::overWidthError("io_rs1");}
    if (VL_UNLIKELY((vlSelf->io_rs2 & 0xe0U))) {
        Verilated::overWidthError("io_rs2");}
    if (VL_UNLIKELY((vlSelf->io_rd & 0xe0U))) {
        Verilated::overWidthError("io_rd");}
}
#endif  // VL_DEBUG
