// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VINSTMEM__SYMS_H_
#define VERILATED_VINSTMEM__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "VInstMem.h"

// INCLUDE MODULE CLASSES
#include "VInstMem___024root.h"
#include "VInstMem___024unit.h"

// SYMS CLASS (contains all model state)
class VInstMem__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VInstMem* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VInstMem___024root             TOP;

    // CONSTRUCTORS
    VInstMem__Syms(VerilatedContext* contextp, const char* namep, VInstMem* modelp);
    ~VInstMem__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
