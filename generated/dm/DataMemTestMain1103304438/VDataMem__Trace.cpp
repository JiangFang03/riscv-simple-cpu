// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDataMem__Syms.h"


void VDataMem___024root__traceChgSub0(VDataMem___024root* vlSelf, VerilatedVcd* tracep);

void VDataMem___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VDataMem___024root* const __restrict vlSelf = static_cast<VDataMem___024root*>(voidSelf);
    VDataMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VDataMem___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VDataMem___024root__traceChgSub0(VDataMem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDataMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlSelf->clock));
        tracep->chgBit(oldp+1,(vlSelf->reset));
        tracep->chgBit(oldp+2,(vlSelf->io_mem_write));
        tracep->chgBit(oldp+3,(vlSelf->io_mem_read));
        tracep->chgSData(oldp+4,(vlSelf->io_address),10);
        tracep->chgQData(oldp+5,(vlSelf->io_write_data),64);
        tracep->chgQData(oldp+7,(vlSelf->io_read_data),64);
        tracep->chgBit(oldp+9,((1U & (~ ((IData)(vlSelf->io_mem_write) 
                                         & (~ (IData)(vlSelf->io_mem_read)))))));
        tracep->chgQData(oldp+10,(vlSelf->DataMem__DOT__mem
                                  [vlSelf->io_address]),64);
        tracep->chgBit(oldp+12,(((IData)(vlSelf->io_mem_write) 
                                 & (~ (IData)(vlSelf->io_mem_read)))));
    }
}

void VDataMem___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VDataMem___024root* const __restrict vlSelf = static_cast<VDataMem___024root*>(voidSelf);
    VDataMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
