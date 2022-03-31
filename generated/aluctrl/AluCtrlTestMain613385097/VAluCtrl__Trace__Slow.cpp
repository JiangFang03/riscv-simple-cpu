// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAluCtrl__Syms.h"


void VAluCtrl___024root__traceInitSub0(VAluCtrl___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VAluCtrl___024root__traceInitTop(VAluCtrl___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAluCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VAluCtrl___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VAluCtrl___024root__traceInitSub0(VAluCtrl___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAluCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBus(c+3,"io_alu_op", false,-1, 1,0);
        tracep->declBus(c+4,"io_fun3", false,-1, 2,0);
        tracep->declBit(c+5,"io_fun7", false,-1);
        tracep->declBus(c+6,"io_alu_ctrl", false,-1, 3,0);
        tracep->declBit(c+1,"AluCtrl clock", false,-1);
        tracep->declBit(c+2,"AluCtrl reset", false,-1);
        tracep->declBus(c+3,"AluCtrl io_alu_op", false,-1, 1,0);
        tracep->declBus(c+4,"AluCtrl io_fun3", false,-1, 2,0);
        tracep->declBit(c+5,"AluCtrl io_fun7", false,-1);
        tracep->declBus(c+6,"AluCtrl io_alu_ctrl", false,-1, 3,0);
    }
}

void VAluCtrl___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VAluCtrl___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VAluCtrl___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VAluCtrl___024root__traceRegister(VAluCtrl___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAluCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VAluCtrl___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VAluCtrl___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VAluCtrl___024root__traceCleanup, vlSelf);
    }
}

void VAluCtrl___024root__traceFullSub0(VAluCtrl___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VAluCtrl___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VAluCtrl___024root* const __restrict vlSelf = static_cast<VAluCtrl___024root*>(voidSelf);
    VAluCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VAluCtrl___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VAluCtrl___024root__traceFullSub0(VAluCtrl___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAluCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->clock));
        tracep->fullBit(oldp+2,(vlSelf->reset));
        tracep->fullCData(oldp+3,(vlSelf->io_alu_op),2);
        tracep->fullCData(oldp+4,(vlSelf->io_fun3),3);
        tracep->fullBit(oldp+5,(vlSelf->io_fun7));
        tracep->fullCData(oldp+6,(vlSelf->io_alu_ctrl),4);
    }
}
