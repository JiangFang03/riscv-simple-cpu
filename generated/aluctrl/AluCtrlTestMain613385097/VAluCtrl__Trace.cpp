// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAluCtrl__Syms.h"


void VAluCtrl___024root__traceChgSub0(VAluCtrl___024root* vlSelf, VerilatedVcd* tracep);

void VAluCtrl___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VAluCtrl___024root* const __restrict vlSelf = static_cast<VAluCtrl___024root*>(voidSelf);
    VAluCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VAluCtrl___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VAluCtrl___024root__traceChgSub0(VAluCtrl___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAluCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlSelf->clock));
        tracep->chgBit(oldp+1,(vlSelf->reset));
        tracep->chgCData(oldp+2,(vlSelf->io_alu_op),2);
        tracep->chgCData(oldp+3,(vlSelf->io_fun3),3);
        tracep->chgBit(oldp+4,(vlSelf->io_fun7));
        tracep->chgCData(oldp+5,(vlSelf->io_alu_ctrl),4);
    }
}

void VAluCtrl___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VAluCtrl___024root* const __restrict vlSelf = static_cast<VAluCtrl___024root*>(voidSelf);
    VAluCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
