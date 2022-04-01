// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VInstMem.h for the primary calling header

#ifndef VERILATED_VINSTMEM___024UNIT_H_
#define VERILATED_VINSTMEM___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class VInstMem__Syms;
class VInstMem_VerilatedVcd;


//----------

VL_MODULE(VInstMem___024unit) {
  public:

    // INTERNAL VARIABLES
    VInstMem__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VInstMem___024unit);  ///< Copying not allowed
  public:
    VInstMem___024unit(const char* name);
    ~VInstMem___024unit();

    // INTERNAL METHODS
    void __Vconfigure(VInstMem__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
