// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VInstMem__Syms.h"


void VInstMem___024root__traceChgSub0(VInstMem___024root* vlSelf, VerilatedVcd* tracep);

void VInstMem___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VInstMem___024root* const __restrict vlSelf = static_cast<VInstMem___024root*>(voidSelf);
    VInstMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VInstMem___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VInstMem___024root__traceChgSub0(VInstMem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VInstMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlSelf->clock));
        tracep->chgBit(oldp+1,(vlSelf->reset));
        tracep->chgSData(oldp+2,(vlSelf->io_address),10);
        tracep->chgIData(oldp+3,(vlSelf->io_inst),32);
        tracep->chgIData(oldp+4,(vlSelf->InstMem__DOT__mem
                                 [vlSelf->io_address]),32);
    }
}

void VInstMem___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VInstMem___024root* const __restrict vlSelf = static_cast<VInstMem___024root*>(voidSelf);
    VInstMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
