// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCtrl__Syms.h"


void VCtrl___024root__traceChgSub0(VCtrl___024root* vlSelf, VerilatedVcd* tracep);

void VCtrl___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VCtrl___024root* const __restrict vlSelf = static_cast<VCtrl___024root*>(voidSelf);
    VCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VCtrl___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VCtrl___024root__traceChgSub0(VCtrl___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlSelf->clock));
        tracep->chgBit(oldp+1,(vlSelf->reset));
        tracep->chgIData(oldp+2,(vlSelf->io_inst),32);
        tracep->chgBit(oldp+3,(vlSelf->io_alu_src));
        tracep->chgBit(oldp+4,(vlSelf->io_mem_to_reg));
        tracep->chgBit(oldp+5,(vlSelf->io_reg_write));
        tracep->chgBit(oldp+6,(vlSelf->io_mem_read));
        tracep->chgBit(oldp+7,(vlSelf->io_mem_write));
        tracep->chgBit(oldp+8,(vlSelf->io_branch));
        tracep->chgCData(oldp+9,(vlSelf->io_alu_op),2);
        tracep->chgCData(oldp+10,((0x7fU & vlSelf->io_inst)),7);
        tracep->chgBit(oldp+11,((IData)((0x60U == (0x70U 
                                                   & vlSelf->io_inst)))));
        tracep->chgBit(oldp+12,((IData)((0x10U == (0x50U 
                                                   & vlSelf->io_inst)))));
    }
}

void VCtrl___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VCtrl___024root* const __restrict vlSelf = static_cast<VCtrl___024root*>(voidSelf);
    VCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
