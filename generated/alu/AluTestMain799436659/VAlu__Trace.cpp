// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAlu__Syms.h"


void VAlu___024root__traceChgSub0(VAlu___024root* vlSelf, VerilatedVcd* tracep);

void VAlu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VAlu___024root* const __restrict vlSelf = static_cast<VAlu___024root*>(voidSelf);
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VAlu___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VAlu___024root__traceChgSub0(VAlu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlSelf->clock));
        tracep->chgBit(oldp+1,(vlSelf->reset));
        tracep->chgQData(oldp+2,(vlSelf->io_oper_a),64);
        tracep->chgQData(oldp+4,(vlSelf->io_oper_b),64);
        tracep->chgCData(oldp+6,(vlSelf->io_aluCtrl),5);
        tracep->chgQData(oldp+7,(vlSelf->io_result),64);
        tracep->chgBit(oldp+9,(vlSelf->io_zero));
        tracep->chgQData(oldp+10,(((0U == (IData)(vlSelf->io_aluCtrl))
                                    ? vlSelf->Alu__DOT___res_T_1
                                    : vlSelf->Alu__DOT___GEN_2)),64);
    }
}

void VAlu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VAlu___024root* const __restrict vlSelf = static_cast<VAlu___024root*>(voidSelf);
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
