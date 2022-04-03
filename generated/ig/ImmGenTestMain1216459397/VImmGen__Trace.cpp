// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VImmGen__Syms.h"


void VImmGen___024root__traceChgSub0(VImmGen___024root* vlSelf, VerilatedVcd* tracep);

void VImmGen___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VImmGen___024root* const __restrict vlSelf = static_cast<VImmGen___024root*>(voidSelf);
    VImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VImmGen___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VImmGen___024root__traceChgSub0(VImmGen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlSelf->clock));
        tracep->chgBit(oldp+1,(vlSelf->reset));
        tracep->chgIData(oldp+2,(vlSelf->io_instruction),32);
        tracep->chgQData(oldp+3,(vlSelf->io_i_imm),64);
        tracep->chgQData(oldp+5,(vlSelf->io_s_imm),64);
        tracep->chgQData(oldp+7,(vlSelf->io_b_imm),64);
        tracep->chgQData(oldp+9,(vlSelf->io_u_imm),64);
        tracep->chgQData(oldp+11,(vlSelf->io_j_imm),64);
        tracep->chgSData(oldp+13,((vlSelf->io_instruction 
                                   >> 0x14U)),12);
        tracep->chgCData(oldp+14,((0x1fU & (vlSelf->io_instruction 
                                            >> 7U))),5);
        tracep->chgCData(oldp+15,((vlSelf->io_instruction 
                                   >> 0x19U)),7);
        tracep->chgSData(oldp+16,(((0xfe0U & (vlSelf->io_instruction 
                                              >> 0x14U)) 
                                   | (0x1fU & (vlSelf->io_instruction 
                                               >> 7U)))),12);
        tracep->chgCData(oldp+17,((0xfU & (vlSelf->io_instruction 
                                           >> 8U))),4);
        tracep->chgCData(oldp+18,((0x3fU & (vlSelf->io_instruction 
                                            >> 0x19U))),6);
        tracep->chgBit(oldp+19,((1U & (vlSelf->io_instruction 
                                       >> 7U))));
        tracep->chgBit(oldp+20,((vlSelf->io_instruction 
                                 >> 0x1fU)));
        tracep->chgSData(oldp+21,(((0x1000U & (vlSelf->io_instruction 
                                               >> 0x13U)) 
                                   | ((0x800U & (vlSelf->io_instruction 
                                                 << 4U)) 
                                      | ((0x7e0U & 
                                          (vlSelf->io_instruction 
                                           >> 0x14U)) 
                                         | (0x1eU & 
                                            (vlSelf->io_instruction 
                                             >> 7U)))))),13);
        tracep->chgIData(oldp+22,((vlSelf->io_instruction 
                                   >> 0xcU)),20);
        tracep->chgQData(oldp+23,(((((vlSelf->io_instruction 
                                      >> 0x1fU) ? 0xfffffffffffULL
                                      : 0ULL) << 0x14U) 
                                   | (QData)((IData)(
                                                     (vlSelf->io_instruction 
                                                      >> 0xcU))))),64);
        tracep->chgSData(oldp+25,((0x3ffU & (vlSelf->io_instruction 
                                             >> 0x15U))),10);
        tracep->chgBit(oldp+26,((1U & (vlSelf->io_instruction 
                                       >> 0x14U))));
        tracep->chgCData(oldp+27,((0xffU & (vlSelf->io_instruction 
                                            >> 0xcU))),8);
        tracep->chgIData(oldp+28,(((0x100000U & (vlSelf->io_instruction 
                                                 >> 0xbU)) 
                                   | ((0xff000U & vlSelf->io_instruction) 
                                      | ((0x800U & 
                                          (vlSelf->io_instruction 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlSelf->io_instruction 
                                               >> 0x14U)))))),21);
    }
}

void VImmGen___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VImmGen___024root* const __restrict vlSelf = static_cast<VImmGen___024root*>(voidSelf);
    VImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
