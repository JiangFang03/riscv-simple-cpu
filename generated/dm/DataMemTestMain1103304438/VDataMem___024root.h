// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VDataMem.h for the primary calling header

#ifndef VERILATED_VDATAMEM___024ROOT_H_
#define VERILATED_VDATAMEM___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VDataMem__Syms;
class VDataMem_VerilatedVcd;


//----------

VL_MODULE(VDataMem___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_mem_write,0,0);
    VL_IN8(io_mem_read,0,0);
    VL_IN16(io_address,9,0);
    VL_IN64(io_write_data,63,0);
    VL_OUT64(io_read_data,63,0);

    // LOCAL SIGNALS
    VlUnpacked<QData/*63:0*/, 1024> DataMem__DOT__mem;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VDataMem__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VDataMem___024root);  ///< Copying not allowed
  public:
    VDataMem___024root(const char* name);
    ~VDataMem___024root();

    // INTERNAL METHODS
    void __Vconfigure(VDataMem__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
