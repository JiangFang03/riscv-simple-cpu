// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAlu.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VAlu__Syms;
class VAlu_VerilatedVcd;


//----------

VL_MODULE(VAlu___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_aluCtrl,4,0);
    VL_OUT8(io_zero,0,0);
    VL_IN64(io_oper_a,63,0);
    VL_IN64(io_oper_b,63,0);
    VL_OUT64(io_result,63,0);

    // LOCAL SIGNALS
    QData/*63:0*/ Alu__DOT___res_T_1;
    QData/*63:0*/ Alu__DOT___GEN_2;

    // INTERNAL VARIABLES
    VAlu__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAlu___024root);  ///< Copying not allowed
  public:
    VAlu___024root(const char* name);
    ~VAlu___024root();

    // INTERNAL METHODS
    void __Vconfigure(VAlu__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
