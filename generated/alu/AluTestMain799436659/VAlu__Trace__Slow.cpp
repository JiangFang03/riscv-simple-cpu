// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAlu__Syms.h"


void VAlu___024root__traceInitSub0(VAlu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VAlu___024root__traceInitTop(VAlu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VAlu___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VAlu___024root__traceInitSub0(VAlu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declQuad(c+3,"io_oper_a", false,-1, 63,0);
        tracep->declQuad(c+5,"io_oper_b", false,-1, 63,0);
        tracep->declBus(c+7,"io_aluCtrl", false,-1, 4,0);
        tracep->declQuad(c+8,"io_result", false,-1, 63,0);
        tracep->declBit(c+10,"io_zero", false,-1);
        tracep->declBit(c+1,"Alu clock", false,-1);
        tracep->declBit(c+2,"Alu reset", false,-1);
        tracep->declQuad(c+3,"Alu io_oper_a", false,-1, 63,0);
        tracep->declQuad(c+5,"Alu io_oper_b", false,-1, 63,0);
        tracep->declBus(c+7,"Alu io_aluCtrl", false,-1, 4,0);
        tracep->declQuad(c+8,"Alu io_result", false,-1, 63,0);
        tracep->declBit(c+10,"Alu io_zero", false,-1);
        tracep->declQuad(c+11,"Alu res", false,-1, 63,0);
    }
}

void VAlu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VAlu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VAlu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VAlu___024root__traceRegister(VAlu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VAlu___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VAlu___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VAlu___024root__traceCleanup, vlSelf);
    }
}

void VAlu___024root__traceFullSub0(VAlu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VAlu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VAlu___024root* const __restrict vlSelf = static_cast<VAlu___024root*>(voidSelf);
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VAlu___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VAlu___024root__traceFullSub0(VAlu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->clock));
        tracep->fullBit(oldp+2,(vlSelf->reset));
        tracep->fullQData(oldp+3,(vlSelf->io_oper_a),64);
        tracep->fullQData(oldp+5,(vlSelf->io_oper_b),64);
        tracep->fullCData(oldp+7,(vlSelf->io_aluCtrl),5);
        tracep->fullQData(oldp+8,(vlSelf->io_result),64);
        tracep->fullBit(oldp+10,(vlSelf->io_zero));
        tracep->fullQData(oldp+11,(((0U == (IData)(vlSelf->io_aluCtrl))
                                     ? vlSelf->Alu__DOT___res_T_1
                                     : vlSelf->Alu__DOT___GEN_2)),64);
    }
}
