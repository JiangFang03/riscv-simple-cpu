// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRegFiles__Syms.h"


void VRegFiles___024root__traceChgSub0(VRegFiles___024root* vlSelf, VerilatedVcd* tracep);

void VRegFiles___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VRegFiles___024root* const __restrict vlSelf = static_cast<VRegFiles___024root*>(voidSelf);
    VRegFiles__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VRegFiles___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VRegFiles___024root__traceChgSub0(VRegFiles___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegFiles__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->RegFiles__DOT__registers_0),64);
            tracep->chgQData(oldp+2,(vlSelf->RegFiles__DOT__registers_1),64);
            tracep->chgQData(oldp+4,(vlSelf->RegFiles__DOT__registers_2),64);
            tracep->chgQData(oldp+6,(vlSelf->RegFiles__DOT__registers_3),64);
            tracep->chgQData(oldp+8,(vlSelf->RegFiles__DOT__registers_4),64);
            tracep->chgQData(oldp+10,(vlSelf->RegFiles__DOT__registers_5),64);
            tracep->chgQData(oldp+12,(vlSelf->RegFiles__DOT__registers_6),64);
            tracep->chgQData(oldp+14,(vlSelf->RegFiles__DOT__registers_7),64);
            tracep->chgQData(oldp+16,(vlSelf->RegFiles__DOT__registers_8),64);
            tracep->chgQData(oldp+18,(vlSelf->RegFiles__DOT__registers_9),64);
            tracep->chgQData(oldp+20,(vlSelf->RegFiles__DOT__registers_10),64);
            tracep->chgQData(oldp+22,(vlSelf->RegFiles__DOT__registers_11),64);
            tracep->chgQData(oldp+24,(vlSelf->RegFiles__DOT__registers_12),64);
            tracep->chgQData(oldp+26,(vlSelf->RegFiles__DOT__registers_13),64);
            tracep->chgQData(oldp+28,(vlSelf->RegFiles__DOT__registers_14),64);
            tracep->chgQData(oldp+30,(vlSelf->RegFiles__DOT__registers_15),64);
            tracep->chgQData(oldp+32,(vlSelf->RegFiles__DOT__registers_16),64);
            tracep->chgQData(oldp+34,(vlSelf->RegFiles__DOT__registers_17),64);
            tracep->chgQData(oldp+36,(vlSelf->RegFiles__DOT__registers_18),64);
            tracep->chgQData(oldp+38,(vlSelf->RegFiles__DOT__registers_19),64);
            tracep->chgQData(oldp+40,(vlSelf->RegFiles__DOT__registers_20),64);
            tracep->chgQData(oldp+42,(vlSelf->RegFiles__DOT__registers_21),64);
            tracep->chgQData(oldp+44,(vlSelf->RegFiles__DOT__registers_22),64);
            tracep->chgQData(oldp+46,(vlSelf->RegFiles__DOT__registers_23),64);
            tracep->chgQData(oldp+48,(vlSelf->RegFiles__DOT__registers_24),64);
            tracep->chgQData(oldp+50,(vlSelf->RegFiles__DOT__registers_25),64);
            tracep->chgQData(oldp+52,(vlSelf->RegFiles__DOT__registers_26),64);
            tracep->chgQData(oldp+54,(vlSelf->RegFiles__DOT__registers_27),64);
            tracep->chgQData(oldp+56,(vlSelf->RegFiles__DOT__registers_28),64);
            tracep->chgQData(oldp+58,(vlSelf->RegFiles__DOT__registers_29),64);
            tracep->chgQData(oldp+60,(vlSelf->RegFiles__DOT__registers_30),64);
            tracep->chgQData(oldp+62,(vlSelf->RegFiles__DOT__registers_31),64);
        }
        tracep->chgBit(oldp+64,(vlSelf->clock));
        tracep->chgBit(oldp+65,(vlSelf->reset));
        tracep->chgBit(oldp+66,(vlSelf->io_reg_write));
        tracep->chgCData(oldp+67,(vlSelf->io_rs1),5);
        tracep->chgCData(oldp+68,(vlSelf->io_rs2),5);
        tracep->chgCData(oldp+69,(vlSelf->io_rd),5);
        tracep->chgQData(oldp+70,(vlSelf->io_w_data),64);
        tracep->chgQData(oldp+72,(vlSelf->io_r_data1),64);
        tracep->chgQData(oldp+74,(vlSelf->io_r_data2),64);
    }
}

void VRegFiles___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VRegFiles___024root* const __restrict vlSelf = static_cast<VRegFiles___024root*>(voidSelf);
    VRegFiles__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
