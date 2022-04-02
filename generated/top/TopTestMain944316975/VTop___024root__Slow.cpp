// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop___024root.h"
#include "VTop__Syms.h"

//==========


void VTop___024root___ctor_var_reset(VTop___024root* vlSelf);

VTop___024root::VTop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VTop___024root___ctor_var_reset(this);
}

void VTop___024root::__Vconfigure(VTop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VTop___024root::~VTop___024root() {
}

extern const VlWide<12>/*383:0*/ VTop__ConstPool__CONST_ae304150_0;

void VTop___024root___initial__TOP__1(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___initial__TOP__1\n"); );
    // Body
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(12, VTop__ConstPool__CONST_ae304150_0)
                 ,  &(vlSelf->Top__DOT__imem__DOT__mem)
                 , 0, ~0ULL);
}

void VTop___024root___settle__TOP__3(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___settle__TOP__3\n"); );
    // Variables
    QData/*63:0*/ Top__DOT__reg_files__DOT___GEN_13;
    QData/*63:0*/ Top__DOT__reg_files__DOT___GEN_26;
    QData/*63:0*/ Top__DOT__reg_files__DOT___GEN_45;
    QData/*63:0*/ Top__DOT__reg_files__DOT___GEN_58;
    // Body
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
    vlSelf->Top__DOT__imm = ((3U == (0x7fU & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data))
                              ? ((((vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                    >> 0x1fU) ? 0xfffffffffffffULL
                                    : 0ULL) << 0xcU) 
                                 | (QData)((IData)(
                                                   (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                    >> 0x14U))))
                              : ((0x23U == (0x7fU & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data))
                                  ? ((((vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                        >> 0x1fU) ? 0xfffffffffffffULL
                                        : 0ULL) << 0xcU) 
                                     | (QData)((IData)(
                                                       ((0xfe0U 
                                                         & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                              >> 7U))))))
                                  : ((0x63U == (0x7fU 
                                                & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data))
                                      ? ((((vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                            >> 0x1fU)
                                            ? 0x7ffffffffffffULL
                                            : 0ULL) 
                                          << 0xdU) 
                                         | (QData)((IData)(
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
                                      : 0ULL)));
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

void VTop___024root___eval_initial(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial\n"); );
    // Body
    VTop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void VTop___024root___eval_settle(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_settle\n"); );
    // Body
    VTop___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void VTop___024root___final(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___final\n"); );
}

void VTop___024root___ctor_var_reset(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_reg_out = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__pc_io_in = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files_io_w_data = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files_io_r_data1 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files_io_r_data2 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__alu_io_oper_b = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__alu_io_result = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__alu_ctrl_io_alu_ctrl = VL_RAND_RESET_I(4);
    vlSelf->Top__DOT__ctrl_io_reg_write = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__ctrl_io_mem_read = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__ctrl_io_mem_write = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__ctrl_io_alu_op = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__pc__DOT__reg_ = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->Top__DOT__imem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__reg_files__DOT__registers_0 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_1 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_2 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_3 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_4 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_5 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_6 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_7 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_8 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_9 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_10 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_11 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_12 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_13 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_14 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_15 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_16 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_17 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_18 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_19 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_20 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_21 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_22 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_23 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_24 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_25 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_26 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_27 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_28 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_29 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_30 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__reg_files__DOT__registers_31 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__alu__DOT___res_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__alu__DOT___GEN_2 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->Top__DOT__dmem__DOT__mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
