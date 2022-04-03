// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VImmGen.h for the primary calling header

#ifndef VERILATED_VIMMGEN___024ROOT_H_
#define VERILATED_VIMMGEN___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VImmGen__Syms;
class VImmGen_VerilatedVcd;


//----------

VL_MODULE(VImmGen___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN(io_instruction,31,0);
    VL_OUT64(io_i_imm,63,0);
    VL_OUT64(io_s_imm,63,0);
    VL_OUT64(io_b_imm,63,0);
    VL_OUT64(io_u_imm,63,0);
    VL_OUT64(io_j_imm,63,0);

    // INTERNAL VARIABLES
    VImmGen__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VImmGen___024root);  ///< Copying not allowed
  public:
    VImmGen___024root(const char* name);
    ~VImmGen___024root();

    // INTERNAL METHODS
    void __Vconfigure(VImmGen__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
