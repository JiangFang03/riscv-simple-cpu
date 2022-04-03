// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop___024root.h"
#include "VTop__Syms.h"

//==========

VL_INLINE_OPT void VTop___024root___sequent__TOP__2(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__Top__DOT__dmem__DOT__mem__v0;
    SData/*9:0*/ __Vdlyvdim0__Top__DOT__dmem__DOT__mem__v0;
    VlWide<3>/*95:0*/ __Vtemp1;
    VlWide<3>/*95:0*/ __Vtemp2;
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    QData/*63:0*/ Top__DOT___GEN_3;
    QData/*63:0*/ Top__DOT__reg_files__DOT___GEN_13;
    QData/*63:0*/ Top__DOT__reg_files__DOT___GEN_26;
    QData/*63:0*/ Top__DOT__reg_files__DOT___GEN_45;
    QData/*63:0*/ Top__DOT__reg_files__DOT___GEN_58;
    QData/*63:0*/ __Vdlyvval__Top__DOT__dmem__DOT__mem__v0;
    // Body
    __Vdlyvset__Top__DOT__dmem__DOT__mem__v0 = 0U;
    if (((IData)(vlSelf->Top__DOT__ctrl_io_mem_write) 
         & (~ (IData)(vlSelf->Top__DOT__ctrl_io_mem_read)))) {
        __Vdlyvval__Top__DOT__dmem__DOT__mem__v0 = vlSelf->Top__DOT__reg_files_io_r_data2;
        __Vdlyvset__Top__DOT__dmem__DOT__mem__v0 = 1U;
        __Vdlyvdim0__Top__DOT__dmem__DOT__mem__v0 = 
            (0x3ffU & (IData)((vlSelf->Top__DOT__alu_io_result 
                               >> 2U)));
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_31 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((0x1fU == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_31 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_30 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((0x1eU == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_30 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_29 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((0x1dU == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_29 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_28 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((0x1cU == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_28 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_27 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((0x1bU == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_27 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_26 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((0x1aU == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_26 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_25 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((0x19U == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_25 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_24 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((0x18U == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_24 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_23 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((0x17U == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_23 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_22 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((0x16U == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_22 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_21 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((0x15U == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_21 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_20 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((0x14U == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_20 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_17 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((0x11U == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_17 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_14 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((0xeU == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                   >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_14 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_19 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((0x13U == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_19 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_16 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((0x10U == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_16 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_18 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((0x12U == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_18 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_15 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((0xfU == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                   >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_15 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_9 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((9U == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_9 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_8 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((8U == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_8 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_7 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((7U == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_7 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_6 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((6U == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_6 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_2 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((2U == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_2 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_13 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((0xdU == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                   >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_13 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_1 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((1U == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_1 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    vlSelf->Top__DOT__reg_files__DOT__registers_0 = 
        ((IData)(vlSelf->reset) ? 0ULL : ((IData)(vlSelf->Top__DOT__ctrl_io_reg_write)
                                           ? ((0U != 
                                               (0x1fU 
                                                & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                   >> 7U)))
                                               ? ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                       >> 7U)))
                                                   ? vlSelf->Top__DOT__reg_files_io_w_data
                                                   : 0ULL)
                                               : 0ULL)
                                           : 0ULL));
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_3 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((3U == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_3 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_4 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((4U == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_4 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_5 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((5U == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_5 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_10 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((0xaU == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                   >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_10 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_11 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((0xbU == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                   >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_11 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__reg_files__DOT__registers_12 = 0ULL;
    } else if (vlSelf->Top__DOT__ctrl_io_reg_write) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                             >> 7U)))) {
            if ((0xcU == (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                   >> 7U)))) {
                vlSelf->Top__DOT__reg_files__DOT__registers_12 
                    = vlSelf->Top__DOT__reg_files_io_w_data;
            }
        }
    }
    vlSelf->Top__DOT__pc__DOT__reg_ = ((IData)(vlSelf->reset)
                                        ? 0ULL : vlSelf->Top__DOT__pc_io_in);
    if (__Vdlyvset__Top__DOT__dmem__DOT__mem__v0) {
        vlSelf->Top__DOT__dmem__DOT__mem[__Vdlyvdim0__Top__DOT__dmem__DOT__mem__v0] 
            = __Vdlyvval__Top__DOT__dmem__DOT__mem__v0;
    }
    vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
        = vlSelf->Top__DOT__imem__DOT__mem[(0x3ffU 
                                            & (IData)(
                                                      (vlSelf->Top__DOT__pc__DOT__reg_ 
                                                       >> 2U)))];
    vlSelf->Top__DOT__ctrl_io_reg_write = (1U & ((~ 
                                                  (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                   >> 6U)) 
                                                 & (~ (IData)(
                                                              (0x20U 
                                                               == 
                                                               (0x30U 
                                                                & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data))))));
    vlSelf->Top__DOT__ctrl_io_mem_read = (IData)((0U 
                                                  == 
                                                  (0x70U 
                                                   & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data)));
    vlSelf->Top__DOT__ctrl_io_mem_write = (IData)((0x20U 
                                                   == 
                                                   (0x70U 
                                                    & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data)));
    vlSelf->Top__DOT__ctrl_io_alu_op = (((IData)((0x10U 
                                                  == 
                                                  (0x50U 
                                                   & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data))) 
                                         << 1U) | (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x70U 
                                                            & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data))));
    vlSelf->Top__DOT__imm_gen_io_i_imm = ((((vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                             >> 0x1fU)
                                             ? 0xfffffffffffffULL
                                             : 0ULL) 
                                           << 0xcU) 
                                          | (QData)((IData)(
                                                            (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                             >> 0x14U))));
    Top__DOT__reg_files__DOT___GEN_13 = ((0xdU == (0x1fU 
                                                   & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                      >> 0xfU)))
                                          ? vlSelf->Top__DOT__reg_files__DOT__registers_13
                                          : ((0xcU 
                                              == (0x1fU 
                                                  & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                     >> 0xfU)))
                                              ? vlSelf->Top__DOT__reg_files__DOT__registers_12
                                              : ((0xbU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                      >> 0xfU)))
                                                  ? vlSelf->Top__DOT__reg_files__DOT__registers_11
                                                  : 
                                                 ((0xaU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                       >> 0xfU)))
                                                   ? vlSelf->Top__DOT__reg_files__DOT__registers_10
                                                   : 
                                                  ((9U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlSelf->Top__DOT__reg_files__DOT__registers_9
                                                    : 
                                                   ((8U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                         >> 0xfU)))
                                                     ? vlSelf->Top__DOT__reg_files__DOT__registers_8
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                          >> 0xfU)))
                                                      ? vlSelf->Top__DOT__reg_files__DOT__registers_7
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                           >> 0xfU)))
                                                       ? vlSelf->Top__DOT__reg_files__DOT__registers_6
                                                       : 
                                                      ((5U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                            >> 0xfU)))
                                                        ? vlSelf->Top__DOT__reg_files__DOT__registers_5
                                                        : 
                                                       ((4U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                             >> 0xfU)))
                                                         ? vlSelf->Top__DOT__reg_files__DOT__registers_4
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                              >> 0xfU)))
                                                          ? vlSelf->Top__DOT__reg_files__DOT__registers_3
                                                          : 
                                                         ((2U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                               >> 0xfU)))
                                                           ? vlSelf->Top__DOT__reg_files__DOT__registers_2
                                                           : 
                                                          ((1U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                                >> 0xfU)))
                                                            ? vlSelf->Top__DOT__reg_files__DOT__registers_1
                                                            : vlSelf->Top__DOT__reg_files__DOT__registers_0)))))))))))));
    Top__DOT__reg_files__DOT___GEN_45 = ((0xdU == (0x1fU 
                                                   & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                      >> 0x14U)))
                                          ? vlSelf->Top__DOT__reg_files__DOT__registers_13
                                          : ((0xcU 
                                              == (0x1fU 
                                                  & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                     >> 0x14U)))
                                              ? vlSelf->Top__DOT__reg_files__DOT__registers_12
                                              : ((0xbU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                      >> 0x14U)))
                                                  ? vlSelf->Top__DOT__reg_files__DOT__registers_11
                                                  : 
                                                 ((0xaU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                       >> 0x14U)))
                                                   ? vlSelf->Top__DOT__reg_files__DOT__registers_10
                                                   : 
                                                  ((9U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                        >> 0x14U)))
                                                    ? vlSelf->Top__DOT__reg_files__DOT__registers_9
                                                    : 
                                                   ((8U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                         >> 0x14U)))
                                                     ? vlSelf->Top__DOT__reg_files__DOT__registers_8
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                          >> 0x14U)))
                                                      ? vlSelf->Top__DOT__reg_files__DOT__registers_7
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                           >> 0x14U)))
                                                       ? vlSelf->Top__DOT__reg_files__DOT__registers_6
                                                       : 
                                                      ((5U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                            >> 0x14U)))
                                                        ? vlSelf->Top__DOT__reg_files__DOT__registers_5
                                                        : 
                                                       ((4U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                             >> 0x14U)))
                                                         ? vlSelf->Top__DOT__reg_files__DOT__registers_4
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                              >> 0x14U)))
                                                          ? vlSelf->Top__DOT__reg_files__DOT__registers_3
                                                          : 
                                                         ((2U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                               >> 0x14U)))
                                                           ? vlSelf->Top__DOT__reg_files__DOT__registers_2
                                                           : 
                                                          ((1U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                                >> 0x14U)))
                                                            ? vlSelf->Top__DOT__reg_files__DOT__registers_1
                                                            : vlSelf->Top__DOT__reg_files__DOT__registers_0)))))))))))));
    vlSelf->Top__DOT__imm_gen__DOT__u_imm_64 = ((((vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                   >> 0x1fU)
                                                   ? 0xfffffffffffULL
                                                   : 0ULL) 
                                                 << 0x14U) 
                                                | (QData)((IData)(
                                                                  (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                                   >> 0xcU))));
    vlSelf->Top__DOT__alu_ctrl_io_alu_ctrl = ((0U == (IData)(vlSelf->Top__DOT__ctrl_io_alu_op))
                                               ? 2U
                                               : ((1U 
                                                   == (IData)(vlSelf->Top__DOT__ctrl_io_alu_op))
                                                   ? 6U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->Top__DOT__ctrl_io_alu_op))
                                                    ? 
                                                   ((7U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                         >> 0xcU)))
                                                     ? 0U
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                          >> 0xcU)))
                                                      ? 1U
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                           >> 0xcU)))
                                                       ? 
                                                      (2U 
                                                       | (4U 
                                                          & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                             >> 0x1cU)))
                                                       : 0U)))
                                                    : 0U)));
    Top__DOT__reg_files__DOT___GEN_26 = ((0x1aU == 
                                          (0x1fU & 
                                           (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                            >> 0xfU)))
                                          ? vlSelf->Top__DOT__reg_files__DOT__registers_26
                                          : ((0x19U 
                                              == (0x1fU 
                                                  & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                     >> 0xfU)))
                                              ? vlSelf->Top__DOT__reg_files__DOT__registers_25
                                              : ((0x18U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                      >> 0xfU)))
                                                  ? vlSelf->Top__DOT__reg_files__DOT__registers_24
                                                  : 
                                                 ((0x17U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                       >> 0xfU)))
                                                   ? vlSelf->Top__DOT__reg_files__DOT__registers_23
                                                   : 
                                                  ((0x16U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlSelf->Top__DOT__reg_files__DOT__registers_22
                                                    : 
                                                   ((0x15U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                         >> 0xfU)))
                                                     ? vlSelf->Top__DOT__reg_files__DOT__registers_21
                                                     : 
                                                    ((0x14U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                          >> 0xfU)))
                                                      ? vlSelf->Top__DOT__reg_files__DOT__registers_20
                                                      : 
                                                     ((0x13U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                           >> 0xfU)))
                                                       ? vlSelf->Top__DOT__reg_files__DOT__registers_19
                                                       : 
                                                      ((0x12U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                            >> 0xfU)))
                                                        ? vlSelf->Top__DOT__reg_files__DOT__registers_18
                                                        : 
                                                       ((0x11U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                             >> 0xfU)))
                                                         ? vlSelf->Top__DOT__reg_files__DOT__registers_17
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                              >> 0xfU)))
                                                          ? vlSelf->Top__DOT__reg_files__DOT__registers_16
                                                          : 
                                                         ((0xfU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                               >> 0xfU)))
                                                           ? vlSelf->Top__DOT__reg_files__DOT__registers_15
                                                           : 
                                                          ((0xeU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                                >> 0xfU)))
                                                            ? vlSelf->Top__DOT__reg_files__DOT__registers_14
                                                            : Top__DOT__reg_files__DOT___GEN_13)))))))))))));
    Top__DOT__reg_files__DOT___GEN_58 = ((0x1aU == 
                                          (0x1fU & 
                                           (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                            >> 0x14U)))
                                          ? vlSelf->Top__DOT__reg_files__DOT__registers_26
                                          : ((0x19U 
                                              == (0x1fU 
                                                  & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                     >> 0x14U)))
                                              ? vlSelf->Top__DOT__reg_files__DOT__registers_25
                                              : ((0x18U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                      >> 0x14U)))
                                                  ? vlSelf->Top__DOT__reg_files__DOT__registers_24
                                                  : 
                                                 ((0x17U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                       >> 0x14U)))
                                                   ? vlSelf->Top__DOT__reg_files__DOT__registers_23
                                                   : 
                                                  ((0x16U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                        >> 0x14U)))
                                                    ? vlSelf->Top__DOT__reg_files__DOT__registers_22
                                                    : 
                                                   ((0x15U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                         >> 0x14U)))
                                                     ? vlSelf->Top__DOT__reg_files__DOT__registers_21
                                                     : 
                                                    ((0x14U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                          >> 0x14U)))
                                                      ? vlSelf->Top__DOT__reg_files__DOT__registers_20
                                                      : 
                                                     ((0x13U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                           >> 0x14U)))
                                                       ? vlSelf->Top__DOT__reg_files__DOT__registers_19
                                                       : 
                                                      ((0x12U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                            >> 0x14U)))
                                                        ? vlSelf->Top__DOT__reg_files__DOT__registers_18
                                                        : 
                                                       ((0x11U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                             >> 0x14U)))
                                                         ? vlSelf->Top__DOT__reg_files__DOT__registers_17
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                              >> 0x14U)))
                                                          ? vlSelf->Top__DOT__reg_files__DOT__registers_16
                                                          : 
                                                         ((0xfU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                               >> 0x14U)))
                                                           ? vlSelf->Top__DOT__reg_files__DOT__registers_15
                                                           : 
                                                          ((0xeU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                                >> 0x14U)))
                                                            ? vlSelf->Top__DOT__reg_files__DOT__registers_14
                                                            : Top__DOT__reg_files__DOT___GEN_45)))))))))))));
    __Vtemp1[0U] = ((IData)(vlSelf->Top__DOT__imm_gen__DOT__u_imm_64) 
                    << 0xcU);
    __Vtemp1[1U] = (((IData)(vlSelf->Top__DOT__imm_gen__DOT__u_imm_64) 
                     >> 0x14U) | ((IData)((vlSelf->Top__DOT__imm_gen__DOT__u_imm_64 
                                           >> 0x20U)) 
                                  << 0xcU));
    __Vtemp1[2U] = ((IData)((vlSelf->Top__DOT__imm_gen__DOT__u_imm_64 
                             >> 0x20U)) >> 0x14U);
    VL_EXTEND_WW(79,76, __Vtemp2, __Vtemp1);
    __Vtemp3[0U] = ((IData)(vlSelf->Top__DOT__imm_gen__DOT__u_imm_64) 
                    << 0xcU);
    __Vtemp3[1U] = (((IData)(vlSelf->Top__DOT__imm_gen__DOT__u_imm_64) 
                     >> 0x14U) | ((IData)((vlSelf->Top__DOT__imm_gen__DOT__u_imm_64 
                                           >> 0x20U)) 
                                  << 0xcU));
    __Vtemp3[2U] = ((IData)((vlSelf->Top__DOT__imm_gen__DOT__u_imm_64 
                             >> 0x20U)) >> 0x14U);
    VL_EXTEND_WW(79,76, __Vtemp4, __Vtemp3);
    Top__DOT___GEN_3 = ((0x63U == (0x7fU & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data))
                         ? ((((vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                               >> 0x1fU) ? 0x7ffffffffffffULL
                               : 0ULL) << 0xdU) | (QData)((IData)(
                                                                  ((0x1000U 
                                                                    & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                                       >> 0x13U)) 
                                                                   | ((0x800U 
                                                                       & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                                          << 4U)) 
                                                                      | ((0x7e0U 
                                                                          & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                                             >> 0x14U)) 
                                                                         | (0x1eU 
                                                                            & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                                               >> 7U))))))))
                         : ((0x6fU == (0x7fU & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data))
                             ? ((((vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                   >> 0x1fU) ? 0x7ffffffffffULL
                                   : 0ULL) << 0x15U) 
                                | (QData)((IData)((
                                                   (0x100000U 
                                                    & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                       >> 0xbU)) 
                                                   | ((0xff000U 
                                                       & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data) 
                                                      | ((0x800U 
                                                          & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                               >> 0x14U))))))))
                             : ((0x17U == (0x7fU & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data))
                                 ? (((QData)((IData)(
                                                     __Vtemp2[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 __Vtemp2[0U])))
                                 : ((0x37U == (0x7fU 
                                               & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data))
                                     ? (((QData)((IData)(
                                                         __Vtemp4[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp4[0U])))
                                     : 0ULL))));
    vlSelf->Top__DOT__reg_files_io_r_data1 = ((0x1fU 
                                               == (0x1fU 
                                                   & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                      >> 0xfU)))
                                               ? vlSelf->Top__DOT__reg_files__DOT__registers_31
                                               : ((0x1eU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                       >> 0xfU)))
                                                   ? vlSelf->Top__DOT__reg_files__DOT__registers_30
                                                   : 
                                                  ((0x1dU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlSelf->Top__DOT__reg_files__DOT__registers_29
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                         >> 0xfU)))
                                                     ? vlSelf->Top__DOT__reg_files__DOT__registers_28
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                          >> 0xfU)))
                                                      ? vlSelf->Top__DOT__reg_files__DOT__registers_27
                                                      : Top__DOT__reg_files__DOT___GEN_26)))));
    vlSelf->Top__DOT__reg_files_io_r_data2 = ((0x1fU 
                                               == (0x1fU 
                                                   & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                      >> 0x14U)))
                                               ? vlSelf->Top__DOT__reg_files__DOT__registers_31
                                               : ((0x1eU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                       >> 0x14U)))
                                                   ? vlSelf->Top__DOT__reg_files__DOT__registers_30
                                                   : 
                                                  ((0x1dU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                        >> 0x14U)))
                                                    ? vlSelf->Top__DOT__reg_files__DOT__registers_29
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                         >> 0x14U)))
                                                     ? vlSelf->Top__DOT__reg_files__DOT__registers_28
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                          >> 0x14U)))
                                                      ? vlSelf->Top__DOT__reg_files__DOT__registers_27
                                                      : Top__DOT__reg_files__DOT___GEN_58)))));
    vlSelf->Top__DOT__imm = ((3U == (0x7fU & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data))
                              ? vlSelf->Top__DOT__imm_gen_io_i_imm
                              : ((0x13U == (0x7fU & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data))
                                  ? vlSelf->Top__DOT__imm_gen_io_i_imm
                                  : ((0x23U == (0x7fU 
                                                & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data))
                                      ? ((((vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                            >> 0x1fU)
                                            ? 0xfffffffffffffULL
                                            : 0ULL) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                                  >> 7U))))))
                                      : Top__DOT___GEN_3)));
    vlSelf->io_reg_out = vlSelf->Top__DOT__reg_files_io_r_data1;
    vlSelf->Top__DOT__alu_io_oper_b = ((1U & ((~ (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                  >> 6U)) 
                                              & (~ (IData)(
                                                           (0x30U 
                                                            == 
                                                            (0x30U 
                                                             & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data))))))
                                        ? vlSelf->Top__DOT__imm
                                        : vlSelf->Top__DOT__reg_files_io_r_data2);
    vlSelf->Top__DOT__alu__DOT___res_T_1 = (vlSelf->Top__DOT__reg_files_io_r_data1 
                                            & vlSelf->Top__DOT__alu_io_oper_b);
    vlSelf->Top__DOT__alu__DOT___GEN_2 = ((1U == (IData)(vlSelf->Top__DOT__alu_ctrl_io_alu_ctrl))
                                           ? (vlSelf->Top__DOT__reg_files_io_r_data1 
                                              | vlSelf->Top__DOT__alu_io_oper_b)
                                           : ((2U == (IData)(vlSelf->Top__DOT__alu_ctrl_io_alu_ctrl))
                                               ? (vlSelf->Top__DOT__reg_files_io_r_data1 
                                                  + vlSelf->Top__DOT__alu_io_oper_b)
                                               : ((6U 
                                                   == (IData)(vlSelf->Top__DOT__alu_ctrl_io_alu_ctrl))
                                                   ? 
                                                  (vlSelf->Top__DOT__reg_files_io_r_data1 
                                                   - vlSelf->Top__DOT__alu_io_oper_b)
                                                   : 0ULL)));
    vlSelf->Top__DOT__pc_io_in = (((0ULL == ((0U == (IData)(vlSelf->Top__DOT__alu_ctrl_io_alu_ctrl))
                                              ? vlSelf->Top__DOT__alu__DOT___res_T_1
                                              : vlSelf->Top__DOT__alu__DOT___GEN_2)) 
                                   & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                      >> 6U)) ? (vlSelf->Top__DOT__pc__DOT__reg_ 
                                                 + vlSelf->Top__DOT__imm)
                                   : (4ULL + vlSelf->Top__DOT__pc__DOT__reg_));
    vlSelf->Top__DOT__alu_io_result = ((0U == (IData)(vlSelf->Top__DOT__alu_ctrl_io_alu_ctrl))
                                        ? vlSelf->Top__DOT__alu__DOT___res_T_1
                                        : vlSelf->Top__DOT__alu__DOT___GEN_2);
    vlSelf->Top__DOT__reg_files_io_w_data = ((IData)(
                                                     (0U 
                                                      == 
                                                      (0x70U 
                                                       & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data)))
                                              ? vlSelf->Top__DOT__dmem__DOT__mem
                                             [(0x3ffU 
                                               & (IData)(
                                                         (vlSelf->Top__DOT__alu_io_result 
                                                          >> 2U)))]
                                              : vlSelf->Top__DOT__alu_io_result);
}

void VTop___024root___eval(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VTop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData VTop___024root___change_request_1(VTop___024root* vlSelf);

VL_INLINE_OPT QData VTop___024root___change_request(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___change_request\n"); );
    // Body
    return (VTop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VTop___024root___change_request_1(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VTop___024root___eval_debug_assertions(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
