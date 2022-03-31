// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegFiles.h for the primary calling header

#ifndef VERILATED_VREGFILES___024ROOT_H_
#define VERILATED_VREGFILES___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VRegFiles__Syms;
class VRegFiles_VerilatedVcd;


//----------

VL_MODULE(VRegFiles___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_reg_write,0,0);
    VL_IN8(io_rs1,4,0);
    VL_IN8(io_rs2,4,0);
    VL_IN8(io_rd,4,0);
    VL_IN64(io_w_data,63,0);
    VL_OUT64(io_r_data1,63,0);
    VL_OUT64(io_r_data2,63,0);

    // LOCAL SIGNALS
    QData/*63:0*/ RegFiles__DOT__registers_0;
    QData/*63:0*/ RegFiles__DOT__registers_1;
    QData/*63:0*/ RegFiles__DOT__registers_2;
    QData/*63:0*/ RegFiles__DOT__registers_3;
    QData/*63:0*/ RegFiles__DOT__registers_4;
    QData/*63:0*/ RegFiles__DOT__registers_5;
    QData/*63:0*/ RegFiles__DOT__registers_6;
    QData/*63:0*/ RegFiles__DOT__registers_7;
    QData/*63:0*/ RegFiles__DOT__registers_8;
    QData/*63:0*/ RegFiles__DOT__registers_9;
    QData/*63:0*/ RegFiles__DOT__registers_10;
    QData/*63:0*/ RegFiles__DOT__registers_11;
    QData/*63:0*/ RegFiles__DOT__registers_12;
    QData/*63:0*/ RegFiles__DOT__registers_13;
    QData/*63:0*/ RegFiles__DOT__registers_14;
    QData/*63:0*/ RegFiles__DOT__registers_15;
    QData/*63:0*/ RegFiles__DOT__registers_16;
    QData/*63:0*/ RegFiles__DOT__registers_17;
    QData/*63:0*/ RegFiles__DOT__registers_18;
    QData/*63:0*/ RegFiles__DOT__registers_19;
    QData/*63:0*/ RegFiles__DOT__registers_20;
    QData/*63:0*/ RegFiles__DOT__registers_21;
    QData/*63:0*/ RegFiles__DOT__registers_22;
    QData/*63:0*/ RegFiles__DOT__registers_23;
    QData/*63:0*/ RegFiles__DOT__registers_24;
    QData/*63:0*/ RegFiles__DOT__registers_25;
    QData/*63:0*/ RegFiles__DOT__registers_26;
    QData/*63:0*/ RegFiles__DOT__registers_27;
    QData/*63:0*/ RegFiles__DOT__registers_28;
    QData/*63:0*/ RegFiles__DOT__registers_29;
    QData/*63:0*/ RegFiles__DOT__registers_30;
    QData/*63:0*/ RegFiles__DOT__registers_31;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VRegFiles__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VRegFiles___024root);  ///< Copying not allowed
  public:
    VRegFiles___024root(const char* name);
    ~VRegFiles___024root();

    // INTERNAL METHODS
    void __Vconfigure(VRegFiles__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
