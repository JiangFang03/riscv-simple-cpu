// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCtrl__Syms.h"


void VCtrl___024root__traceInitSub0(VCtrl___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VCtrl___024root__traceInitTop(VCtrl___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VCtrl___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VCtrl___024root__traceInitSub0(VCtrl___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBus(c+3,"io_inst", false,-1, 31,0);
        tracep->declBit(c+4,"io_alu_src", false,-1);
        tracep->declBit(c+5,"io_mem_to_reg", false,-1);
        tracep->declBit(c+6,"io_reg_write", false,-1);
        tracep->declBit(c+7,"io_mem_read", false,-1);
        tracep->declBit(c+8,"io_mem_write", false,-1);
        tracep->declBit(c+9,"io_branch", false,-1);
        tracep->declBus(c+10,"io_alu_op", false,-1, 1,0);
        tracep->declBit(c+1,"Ctrl clock", false,-1);
        tracep->declBit(c+2,"Ctrl reset", false,-1);
        tracep->declBus(c+3,"Ctrl io_inst", false,-1, 31,0);
        tracep->declBit(c+4,"Ctrl io_alu_src", false,-1);
        tracep->declBit(c+5,"Ctrl io_mem_to_reg", false,-1);
        tracep->declBit(c+6,"Ctrl io_reg_write", false,-1);
        tracep->declBit(c+7,"Ctrl io_mem_read", false,-1);
        tracep->declBit(c+8,"Ctrl io_mem_write", false,-1);
        tracep->declBit(c+9,"Ctrl io_branch", false,-1);
        tracep->declBus(c+10,"Ctrl io_alu_op", false,-1, 1,0);
        tracep->declBus(c+11,"Ctrl opcode", false,-1, 6,0);
        tracep->declBit(c+12,"Ctrl alu_op0", false,-1);
        tracep->declBit(c+13,"Ctrl alu_op1", false,-1);
    }
}

void VCtrl___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VCtrl___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VCtrl___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VCtrl___024root__traceRegister(VCtrl___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VCtrl___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VCtrl___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VCtrl___024root__traceCleanup, vlSelf);
    }
}

void VCtrl___024root__traceFullSub0(VCtrl___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VCtrl___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VCtrl___024root* const __restrict vlSelf = static_cast<VCtrl___024root*>(voidSelf);
    VCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VCtrl___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VCtrl___024root__traceFullSub0(VCtrl___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->clock));
        tracep->fullBit(oldp+2,(vlSelf->reset));
        tracep->fullIData(oldp+3,(vlSelf->io_inst),32);
        tracep->fullBit(oldp+4,(vlSelf->io_alu_src));
        tracep->fullBit(oldp+5,(vlSelf->io_mem_to_reg));
        tracep->fullBit(oldp+6,(vlSelf->io_reg_write));
        tracep->fullBit(oldp+7,(vlSelf->io_mem_read));
        tracep->fullBit(oldp+8,(vlSelf->io_mem_write));
        tracep->fullBit(oldp+9,(vlSelf->io_branch));
        tracep->fullCData(oldp+10,(vlSelf->io_alu_op),2);
        tracep->fullCData(oldp+11,((0x7fU & vlSelf->io_inst)),7);
        tracep->fullBit(oldp+12,((IData)((0x60U == 
                                          (0x70U & vlSelf->io_inst)))));
        tracep->fullBit(oldp+13,((IData)((0x10U == 
                                          (0x50U & vlSelf->io_inst)))));
    }
}
