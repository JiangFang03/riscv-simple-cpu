// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDataMem__Syms.h"


void VDataMem___024root__traceInitSub0(VDataMem___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VDataMem___024root__traceInitTop(VDataMem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDataMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VDataMem___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VDataMem___024root__traceInitSub0(VDataMem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDataMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+3,"io_mem_write", false,-1);
        tracep->declBit(c+4,"io_mem_read", false,-1);
        tracep->declBus(c+5,"io_address", false,-1, 9,0);
        tracep->declQuad(c+6,"io_write_data", false,-1, 63,0);
        tracep->declQuad(c+8,"io_read_data", false,-1, 63,0);
        tracep->declBit(c+1,"DataMem clock", false,-1);
        tracep->declBit(c+2,"DataMem reset", false,-1);
        tracep->declBit(c+3,"DataMem io_mem_write", false,-1);
        tracep->declBit(c+4,"DataMem io_mem_read", false,-1);
        tracep->declBus(c+5,"DataMem io_address", false,-1, 9,0);
        tracep->declQuad(c+6,"DataMem io_write_data", false,-1, 63,0);
        tracep->declQuad(c+8,"DataMem io_read_data", false,-1, 63,0);
        tracep->declBit(c+10,"DataMem mem_io_read_data_MPORT_en", false,-1);
        tracep->declBus(c+5,"DataMem mem_io_read_data_MPORT_addr", false,-1, 9,0);
        tracep->declQuad(c+11,"DataMem mem_io_read_data_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+6,"DataMem mem_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+5,"DataMem mem_MPORT_addr", false,-1, 9,0);
        tracep->declBit(c+14,"DataMem mem_MPORT_mask", false,-1);
        tracep->declBit(c+13,"DataMem mem_MPORT_en", false,-1);
    }
}

void VDataMem___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VDataMem___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VDataMem___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VDataMem___024root__traceRegister(VDataMem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDataMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VDataMem___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VDataMem___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VDataMem___024root__traceCleanup, vlSelf);
    }
}

void VDataMem___024root__traceFullSub0(VDataMem___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VDataMem___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VDataMem___024root* const __restrict vlSelf = static_cast<VDataMem___024root*>(voidSelf);
    VDataMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VDataMem___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VDataMem___024root__traceFullSub0(VDataMem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDataMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->clock));
        tracep->fullBit(oldp+2,(vlSelf->reset));
        tracep->fullBit(oldp+3,(vlSelf->io_mem_write));
        tracep->fullBit(oldp+4,(vlSelf->io_mem_read));
        tracep->fullSData(oldp+5,(vlSelf->io_address),10);
        tracep->fullQData(oldp+6,(vlSelf->io_write_data),64);
        tracep->fullQData(oldp+8,(vlSelf->io_read_data),64);
        tracep->fullBit(oldp+10,((1U & (~ ((IData)(vlSelf->io_mem_write) 
                                           & (~ (IData)(vlSelf->io_mem_read)))))));
        tracep->fullQData(oldp+11,(vlSelf->DataMem__DOT__mem
                                   [vlSelf->io_address]),64);
        tracep->fullBit(oldp+13,(((IData)(vlSelf->io_mem_write) 
                                  & (~ (IData)(vlSelf->io_mem_read)))));
        tracep->fullBit(oldp+14,(1U));
    }
}
