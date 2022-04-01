// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VInstMem__Syms.h"


void VInstMem___024root__traceInitSub0(VInstMem___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VInstMem___024root__traceInitTop(VInstMem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VInstMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VInstMem___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VInstMem___024root__traceInitSub0(VInstMem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VInstMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBus(c+3,"io_address", false,-1, 9,0);
        tracep->declBus(c+4,"io_inst", false,-1, 31,0);
        tracep->declBit(c+1,"InstMem clock", false,-1);
        tracep->declBit(c+2,"InstMem reset", false,-1);
        tracep->declBus(c+3,"InstMem io_address", false,-1, 9,0);
        tracep->declBus(c+4,"InstMem io_inst", false,-1, 31,0);
        tracep->declBit(c+6,"InstMem mem_io_inst_MPORT_en", false,-1);
        tracep->declBus(c+3,"InstMem mem_io_inst_MPORT_addr", false,-1, 9,0);
        tracep->declBus(c+5,"InstMem mem_io_inst_MPORT_data", false,-1, 31,0);
        tracep->declBit(c+1,"InstMem BindsTo_0_InstMem_Inst clock", false,-1);
        tracep->declBit(c+2,"InstMem BindsTo_0_InstMem_Inst reset", false,-1);
        tracep->declBus(c+3,"InstMem BindsTo_0_InstMem_Inst io_address", false,-1, 9,0);
        tracep->declBus(c+4,"InstMem BindsTo_0_InstMem_Inst io_inst", false,-1, 31,0);
    }
}

void VInstMem___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VInstMem___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VInstMem___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VInstMem___024root__traceRegister(VInstMem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VInstMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VInstMem___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VInstMem___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VInstMem___024root__traceCleanup, vlSelf);
    }
}

void VInstMem___024root__traceFullSub0(VInstMem___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VInstMem___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VInstMem___024root* const __restrict vlSelf = static_cast<VInstMem___024root*>(voidSelf);
    VInstMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VInstMem___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VInstMem___024root__traceFullSub0(VInstMem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VInstMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->clock));
        tracep->fullBit(oldp+2,(vlSelf->reset));
        tracep->fullSData(oldp+3,(vlSelf->io_address),10);
        tracep->fullIData(oldp+4,(vlSelf->io_inst),32);
        tracep->fullIData(oldp+5,(vlSelf->InstMem__DOT__mem
                                  [vlSelf->io_address]),32);
        tracep->fullBit(oldp+6,(1U));
    }
}
