// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCtrl.h for the primary calling header

#ifndef VERILATED_VCTRL___024ROOT_H_
#define VERILATED_VCTRL___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VCtrl__Syms;
class VCtrl_VerilatedVcd;


//----------

VL_MODULE(VCtrl___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_alu_src,0,0);
    VL_OUT8(io_mem_to_reg,0,0);
    VL_OUT8(io_reg_write,0,0);
    VL_OUT8(io_mem_read,0,0);
    VL_OUT8(io_mem_write,0,0);
    VL_OUT8(io_branch,0,0);
    VL_OUT8(io_alu_op,1,0);
    VL_IN(io_inst,31,0);

    // INTERNAL VARIABLES
    VCtrl__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCtrl___024root);  ///< Copying not allowed
  public:
    VCtrl___024root(const char* name);
    ~VCtrl___024root();

    // INTERNAL METHODS
    void __Vconfigure(VCtrl__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
