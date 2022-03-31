// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRegFiles__Syms.h"


void VRegFiles___024root__traceInitSub0(VRegFiles___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VRegFiles___024root__traceInitTop(VRegFiles___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegFiles__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VRegFiles___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VRegFiles___024root__traceInitSub0(VRegFiles___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegFiles__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+65,"clock", false,-1);
        tracep->declBit(c+66,"reset", false,-1);
        tracep->declBit(c+67,"io_reg_write", false,-1);
        tracep->declBus(c+68,"io_rs1", false,-1, 4,0);
        tracep->declBus(c+69,"io_rs2", false,-1, 4,0);
        tracep->declBus(c+70,"io_rd", false,-1, 4,0);
        tracep->declQuad(c+71,"io_w_data", false,-1, 63,0);
        tracep->declQuad(c+73,"io_r_data1", false,-1, 63,0);
        tracep->declQuad(c+75,"io_r_data2", false,-1, 63,0);
        tracep->declBit(c+65,"RegFiles clock", false,-1);
        tracep->declBit(c+66,"RegFiles reset", false,-1);
        tracep->declBit(c+67,"RegFiles io_reg_write", false,-1);
        tracep->declBus(c+68,"RegFiles io_rs1", false,-1, 4,0);
        tracep->declBus(c+69,"RegFiles io_rs2", false,-1, 4,0);
        tracep->declBus(c+70,"RegFiles io_rd", false,-1, 4,0);
        tracep->declQuad(c+71,"RegFiles io_w_data", false,-1, 63,0);
        tracep->declQuad(c+73,"RegFiles io_r_data1", false,-1, 63,0);
        tracep->declQuad(c+75,"RegFiles io_r_data2", false,-1, 63,0);
        tracep->declQuad(c+1,"RegFiles registers_0", false,-1, 63,0);
        tracep->declQuad(c+3,"RegFiles registers_1", false,-1, 63,0);
        tracep->declQuad(c+5,"RegFiles registers_2", false,-1, 63,0);
        tracep->declQuad(c+7,"RegFiles registers_3", false,-1, 63,0);
        tracep->declQuad(c+9,"RegFiles registers_4", false,-1, 63,0);
        tracep->declQuad(c+11,"RegFiles registers_5", false,-1, 63,0);
        tracep->declQuad(c+13,"RegFiles registers_6", false,-1, 63,0);
        tracep->declQuad(c+15,"RegFiles registers_7", false,-1, 63,0);
        tracep->declQuad(c+17,"RegFiles registers_8", false,-1, 63,0);
        tracep->declQuad(c+19,"RegFiles registers_9", false,-1, 63,0);
        tracep->declQuad(c+21,"RegFiles registers_10", false,-1, 63,0);
        tracep->declQuad(c+23,"RegFiles registers_11", false,-1, 63,0);
        tracep->declQuad(c+25,"RegFiles registers_12", false,-1, 63,0);
        tracep->declQuad(c+27,"RegFiles registers_13", false,-1, 63,0);
        tracep->declQuad(c+29,"RegFiles registers_14", false,-1, 63,0);
        tracep->declQuad(c+31,"RegFiles registers_15", false,-1, 63,0);
        tracep->declQuad(c+33,"RegFiles registers_16", false,-1, 63,0);
        tracep->declQuad(c+35,"RegFiles registers_17", false,-1, 63,0);
        tracep->declQuad(c+37,"RegFiles registers_18", false,-1, 63,0);
        tracep->declQuad(c+39,"RegFiles registers_19", false,-1, 63,0);
        tracep->declQuad(c+41,"RegFiles registers_20", false,-1, 63,0);
        tracep->declQuad(c+43,"RegFiles registers_21", false,-1, 63,0);
        tracep->declQuad(c+45,"RegFiles registers_22", false,-1, 63,0);
        tracep->declQuad(c+47,"RegFiles registers_23", false,-1, 63,0);
        tracep->declQuad(c+49,"RegFiles registers_24", false,-1, 63,0);
        tracep->declQuad(c+51,"RegFiles registers_25", false,-1, 63,0);
        tracep->declQuad(c+53,"RegFiles registers_26", false,-1, 63,0);
        tracep->declQuad(c+55,"RegFiles registers_27", false,-1, 63,0);
        tracep->declQuad(c+57,"RegFiles registers_28", false,-1, 63,0);
        tracep->declQuad(c+59,"RegFiles registers_29", false,-1, 63,0);
        tracep->declQuad(c+61,"RegFiles registers_30", false,-1, 63,0);
        tracep->declQuad(c+63,"RegFiles registers_31", false,-1, 63,0);
    }
}

void VRegFiles___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VRegFiles___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VRegFiles___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VRegFiles___024root__traceRegister(VRegFiles___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegFiles__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VRegFiles___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VRegFiles___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VRegFiles___024root__traceCleanup, vlSelf);
    }
}

void VRegFiles___024root__traceFullSub0(VRegFiles___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VRegFiles___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VRegFiles___024root* const __restrict vlSelf = static_cast<VRegFiles___024root*>(voidSelf);
    VRegFiles__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VRegFiles___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VRegFiles___024root__traceFullSub0(VRegFiles___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegFiles__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->RegFiles__DOT__registers_0),64);
        tracep->fullQData(oldp+3,(vlSelf->RegFiles__DOT__registers_1),64);
        tracep->fullQData(oldp+5,(vlSelf->RegFiles__DOT__registers_2),64);
        tracep->fullQData(oldp+7,(vlSelf->RegFiles__DOT__registers_3),64);
        tracep->fullQData(oldp+9,(vlSelf->RegFiles__DOT__registers_4),64);
        tracep->fullQData(oldp+11,(vlSelf->RegFiles__DOT__registers_5),64);
        tracep->fullQData(oldp+13,(vlSelf->RegFiles__DOT__registers_6),64);
        tracep->fullQData(oldp+15,(vlSelf->RegFiles__DOT__registers_7),64);
        tracep->fullQData(oldp+17,(vlSelf->RegFiles__DOT__registers_8),64);
        tracep->fullQData(oldp+19,(vlSelf->RegFiles__DOT__registers_9),64);
        tracep->fullQData(oldp+21,(vlSelf->RegFiles__DOT__registers_10),64);
        tracep->fullQData(oldp+23,(vlSelf->RegFiles__DOT__registers_11),64);
        tracep->fullQData(oldp+25,(vlSelf->RegFiles__DOT__registers_12),64);
        tracep->fullQData(oldp+27,(vlSelf->RegFiles__DOT__registers_13),64);
        tracep->fullQData(oldp+29,(vlSelf->RegFiles__DOT__registers_14),64);
        tracep->fullQData(oldp+31,(vlSelf->RegFiles__DOT__registers_15),64);
        tracep->fullQData(oldp+33,(vlSelf->RegFiles__DOT__registers_16),64);
        tracep->fullQData(oldp+35,(vlSelf->RegFiles__DOT__registers_17),64);
        tracep->fullQData(oldp+37,(vlSelf->RegFiles__DOT__registers_18),64);
        tracep->fullQData(oldp+39,(vlSelf->RegFiles__DOT__registers_19),64);
        tracep->fullQData(oldp+41,(vlSelf->RegFiles__DOT__registers_20),64);
        tracep->fullQData(oldp+43,(vlSelf->RegFiles__DOT__registers_21),64);
        tracep->fullQData(oldp+45,(vlSelf->RegFiles__DOT__registers_22),64);
        tracep->fullQData(oldp+47,(vlSelf->RegFiles__DOT__registers_23),64);
        tracep->fullQData(oldp+49,(vlSelf->RegFiles__DOT__registers_24),64);
        tracep->fullQData(oldp+51,(vlSelf->RegFiles__DOT__registers_25),64);
        tracep->fullQData(oldp+53,(vlSelf->RegFiles__DOT__registers_26),64);
        tracep->fullQData(oldp+55,(vlSelf->RegFiles__DOT__registers_27),64);
        tracep->fullQData(oldp+57,(vlSelf->RegFiles__DOT__registers_28),64);
        tracep->fullQData(oldp+59,(vlSelf->RegFiles__DOT__registers_29),64);
        tracep->fullQData(oldp+61,(vlSelf->RegFiles__DOT__registers_30),64);
        tracep->fullQData(oldp+63,(vlSelf->RegFiles__DOT__registers_31),64);
        tracep->fullBit(oldp+65,(vlSelf->clock));
        tracep->fullBit(oldp+66,(vlSelf->reset));
        tracep->fullBit(oldp+67,(vlSelf->io_reg_write));
        tracep->fullCData(oldp+68,(vlSelf->io_rs1),5);
        tracep->fullCData(oldp+69,(vlSelf->io_rs2),5);
        tracep->fullCData(oldp+70,(vlSelf->io_rd),5);
        tracep->fullQData(oldp+71,(vlSelf->io_w_data),64);
        tracep->fullQData(oldp+73,(vlSelf->io_r_data1),64);
        tracep->fullQData(oldp+75,(vlSelf->io_r_data2),64);
    }
}
