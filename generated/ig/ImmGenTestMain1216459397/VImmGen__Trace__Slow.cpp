// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VImmGen__Syms.h"


void VImmGen___024root__traceInitSub0(VImmGen___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VImmGen___024root__traceInitTop(VImmGen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VImmGen___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VImmGen___024root__traceInitSub0(VImmGen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBus(c+3,"io_instruction", false,-1, 31,0);
        tracep->declQuad(c+4,"io_i_imm", false,-1, 63,0);
        tracep->declQuad(c+6,"io_s_imm", false,-1, 63,0);
        tracep->declQuad(c+8,"io_b_imm", false,-1, 63,0);
        tracep->declQuad(c+10,"io_u_imm", false,-1, 63,0);
        tracep->declQuad(c+12,"io_j_imm", false,-1, 63,0);
        tracep->declBit(c+1,"ImmGen clock", false,-1);
        tracep->declBit(c+2,"ImmGen reset", false,-1);
        tracep->declBus(c+3,"ImmGen io_instruction", false,-1, 31,0);
        tracep->declQuad(c+4,"ImmGen io_i_imm", false,-1, 63,0);
        tracep->declQuad(c+6,"ImmGen io_s_imm", false,-1, 63,0);
        tracep->declQuad(c+8,"ImmGen io_b_imm", false,-1, 63,0);
        tracep->declQuad(c+10,"ImmGen io_u_imm", false,-1, 63,0);
        tracep->declQuad(c+12,"ImmGen io_j_imm", false,-1, 63,0);
        tracep->declBus(c+14,"ImmGen i_imm_12", false,-1, 11,0);
        tracep->declBus(c+15,"ImmGen s_lower_half", false,-1, 4,0);
        tracep->declBus(c+16,"ImmGen s_upper_half", false,-1, 6,0);
        tracep->declBus(c+17,"ImmGen s_imm_12", false,-1, 11,0);
        tracep->declBus(c+18,"ImmGen sb_lower_half", false,-1, 3,0);
        tracep->declBus(c+19,"ImmGen sb_upper_half", false,-1, 5,0);
        tracep->declBit(c+20,"ImmGen sb_11thbit", false,-1);
        tracep->declBit(c+21,"ImmGen sb_12thbit", false,-1);
        tracep->declBus(c+22,"ImmGen sb_imm_13", false,-1, 12,0);
        tracep->declBus(c+23,"ImmGen u_imm_20", false,-1, 19,0);
        tracep->declQuad(c+24,"ImmGen u_imm_64", false,-1, 63,0);
        tracep->declBus(c+26,"ImmGen uj_lower_half", false,-1, 9,0);
        tracep->declBit(c+27,"ImmGen uj_11thbit", false,-1);
        tracep->declBus(c+28,"ImmGen uj_upper_half", false,-1, 7,0);
        tracep->declBus(c+29,"ImmGen uj_imm_21", false,-1, 20,0);
    }
}

void VImmGen___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VImmGen___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VImmGen___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VImmGen___024root__traceRegister(VImmGen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VImmGen___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VImmGen___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VImmGen___024root__traceCleanup, vlSelf);
    }
}

void VImmGen___024root__traceFullSub0(VImmGen___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VImmGen___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VImmGen___024root* const __restrict vlSelf = static_cast<VImmGen___024root*>(voidSelf);
    VImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VImmGen___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VImmGen___024root__traceFullSub0(VImmGen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->clock));
        tracep->fullBit(oldp+2,(vlSelf->reset));
        tracep->fullIData(oldp+3,(vlSelf->io_instruction),32);
        tracep->fullQData(oldp+4,(vlSelf->io_i_imm),64);
        tracep->fullQData(oldp+6,(vlSelf->io_s_imm),64);
        tracep->fullQData(oldp+8,(vlSelf->io_b_imm),64);
        tracep->fullQData(oldp+10,(vlSelf->io_u_imm),64);
        tracep->fullQData(oldp+12,(vlSelf->io_j_imm),64);
        tracep->fullSData(oldp+14,((vlSelf->io_instruction 
                                    >> 0x14U)),12);
        tracep->fullCData(oldp+15,((0x1fU & (vlSelf->io_instruction 
                                             >> 7U))),5);
        tracep->fullCData(oldp+16,((vlSelf->io_instruction 
                                    >> 0x19U)),7);
        tracep->fullSData(oldp+17,(((0xfe0U & (vlSelf->io_instruction 
                                               >> 0x14U)) 
                                    | (0x1fU & (vlSelf->io_instruction 
                                                >> 7U)))),12);
        tracep->fullCData(oldp+18,((0xfU & (vlSelf->io_instruction 
                                            >> 8U))),4);
        tracep->fullCData(oldp+19,((0x3fU & (vlSelf->io_instruction 
                                             >> 0x19U))),6);
        tracep->fullBit(oldp+20,((1U & (vlSelf->io_instruction 
                                        >> 7U))));
        tracep->fullBit(oldp+21,((vlSelf->io_instruction 
                                  >> 0x1fU)));
        tracep->fullSData(oldp+22,(((0x1000U & (vlSelf->io_instruction 
                                                >> 0x13U)) 
                                    | ((0x800U & (vlSelf->io_instruction 
                                                  << 4U)) 
                                       | ((0x7e0U & 
                                           (vlSelf->io_instruction 
                                            >> 0x14U)) 
                                          | (0x1eU 
                                             & (vlSelf->io_instruction 
                                                >> 7U)))))),13);
        tracep->fullIData(oldp+23,((vlSelf->io_instruction 
                                    >> 0xcU)),20);
        tracep->fullQData(oldp+24,(((((vlSelf->io_instruction 
                                       >> 0x1fU) ? 0xfffffffffffULL
                                       : 0ULL) << 0x14U) 
                                    | (QData)((IData)(
                                                      (vlSelf->io_instruction 
                                                       >> 0xcU))))),64);
        tracep->fullSData(oldp+26,((0x3ffU & (vlSelf->io_instruction 
                                              >> 0x15U))),10);
        tracep->fullBit(oldp+27,((1U & (vlSelf->io_instruction 
                                        >> 0x14U))));
        tracep->fullCData(oldp+28,((0xffU & (vlSelf->io_instruction 
                                             >> 0xcU))),8);
        tracep->fullIData(oldp+29,(((0x100000U & (vlSelf->io_instruction 
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
