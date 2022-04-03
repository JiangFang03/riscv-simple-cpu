// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VInstMem.h for the primary calling header

#ifndef VERILATED_VINSTMEM___024ROOT_H_
#define VERILATED_VINSTMEM___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VInstMem__Syms;
class VInstMem_VerilatedVcd;


//----------

VL_MODULE(VInstMem___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN16(io_address,9,0);
    VL_OUT(io_inst,31,0);

    // LOCAL SIGNALS
    VlUnpacked<IData/*31:0*/, 1024> InstMem__DOT__mem;

    // INTERNAL VARIABLES
    VInstMem__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VInstMem___024root);  ///< Copying not allowed
  public:
    VInstMem___024root(const char* name);
    ~VInstMem___024root();

    // INTERNAL METHODS
    void __Vconfigure(VInstMem__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
