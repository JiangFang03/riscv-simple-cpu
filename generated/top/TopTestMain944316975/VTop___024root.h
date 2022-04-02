// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VTop__Syms;
class VTop_VerilatedVcd;


//----------

VL_MODULE(VTop___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT64(io_reg_out,63,0);

    // LOCAL SIGNALS
    CData/*3:0*/ Top__DOT__alu_ctrl_io_alu_ctrl;
    CData/*0:0*/ Top__DOT__ctrl_io_reg_write;
    CData/*0:0*/ Top__DOT__ctrl_io_mem_read;
    CData/*0:0*/ Top__DOT__ctrl_io_mem_write;
    CData/*1:0*/ Top__DOT__ctrl_io_alu_op;
    IData/*31:0*/ Top__DOT__imem__DOT__mem_io_inst_MPORT_data;
    QData/*63:0*/ Top__DOT__pc_io_in;
    QData/*63:0*/ Top__DOT__reg_files_io_w_data;
    QData/*63:0*/ Top__DOT__reg_files_io_r_data1;
    QData/*63:0*/ Top__DOT__reg_files_io_r_data2;
    QData/*63:0*/ Top__DOT__alu_io_oper_b;
    QData/*63:0*/ Top__DOT__alu_io_result;
    QData/*63:0*/ Top__DOT__imm;
    QData/*63:0*/ Top__DOT__pc__DOT__reg_;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_0;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_1;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_2;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_3;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_4;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_5;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_6;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_7;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_8;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_9;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_10;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_11;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_12;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_13;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_14;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_15;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_16;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_17;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_18;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_19;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_20;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_21;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_22;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_23;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_24;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_25;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_26;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_27;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_28;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_29;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_30;
    QData/*63:0*/ Top__DOT__reg_files__DOT__registers_31;
    QData/*63:0*/ Top__DOT__alu__DOT___res_T_1;
    QData/*63:0*/ Top__DOT__alu__DOT___GEN_2;
    VlUnpacked<IData/*31:0*/, 1024> Top__DOT__imem__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1024> Top__DOT__dmem__DOT__mem;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VTop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VTop___024root);  ///< Copying not allowed
  public:
    VTop___024root(const char* name);
    ~VTop___024root();

    // INTERNAL METHODS
    void __Vconfigure(VTop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
