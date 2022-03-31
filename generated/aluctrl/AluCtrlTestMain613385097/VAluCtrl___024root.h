// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAluCtrl.h for the primary calling header

#ifndef VERILATED_VALUCTRL___024ROOT_H_
#define VERILATED_VALUCTRL___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VAluCtrl__Syms;
class VAluCtrl_VerilatedVcd;


//----------

VL_MODULE(VAluCtrl___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_alu_op,1,0);
    VL_IN8(io_fun3,2,0);
    VL_IN8(io_fun7,0,0);
    VL_OUT8(io_alu_ctrl,3,0);

    // INTERNAL VARIABLES
    VAluCtrl__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAluCtrl___024root);  ///< Copying not allowed
  public:
    VAluCtrl___024root(const char* name);
    ~VAluCtrl___024root();

    // INTERNAL METHODS
    void __Vconfigure(VAluCtrl__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
