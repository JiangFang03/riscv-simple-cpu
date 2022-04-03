// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


void VTop___024root__traceChgSub0(VTop___024root* vlSelf, VerilatedVcd* tracep);

void VTop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VTop___024root* const __restrict vlSelf = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VTop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VTop___024root__traceChgSub0(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp11;
    VlWide<3>/*95:0*/ __Vtemp12;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,((((0ULL == ((0U 
                                                  == (IData)(vlSelf->Top__DOT__alu_ctrl_io_alu_ctrl))
                                                  ? vlSelf->Top__DOT__alu__DOT___res_T_1
                                                  : vlSelf->Top__DOT__alu__DOT___GEN_2)) 
                                       & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                          >> 6U)) ? 
                                      (vlSelf->Top__DOT__pc__DOT__reg_ 
                                       + vlSelf->Top__DOT__imm)
                                       : (4ULL + vlSelf->Top__DOT__pc__DOT__reg_))),64);
            tracep->chgQData(oldp+2,(vlSelf->Top__DOT__pc__DOT__reg_),64);
            tracep->chgQData(oldp+4,((4ULL + vlSelf->Top__DOT__pc__DOT__reg_)),64);
            tracep->chgSData(oldp+6,((0x3ffU & (IData)(
                                                       (vlSelf->Top__DOT__pc__DOT__reg_ 
                                                        >> 2U)))),10);
            tracep->chgIData(oldp+7,(vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data),32);
            tracep->chgBit(oldp+8,(vlSelf->Top__DOT__ctrl_io_reg_write));
            tracep->chgCData(oldp+9,((0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                               >> 0xfU))),5);
            tracep->chgCData(oldp+10,((0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+11,((0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                >> 7U))),5);
            tracep->chgQData(oldp+12,(vlSelf->Top__DOT__reg_files_io_w_data),64);
            tracep->chgQData(oldp+14,(vlSelf->Top__DOT__reg_files_io_r_data1),64);
            tracep->chgQData(oldp+16,(vlSelf->Top__DOT__reg_files_io_r_data2),64);
            tracep->chgQData(oldp+18,(vlSelf->Top__DOT__alu_io_oper_b),64);
            tracep->chgCData(oldp+20,(vlSelf->Top__DOT__alu_ctrl_io_alu_ctrl),5);
            tracep->chgQData(oldp+21,(vlSelf->Top__DOT__alu_io_result),64);
            tracep->chgBit(oldp+23,((0ULL == ((0U == (IData)(vlSelf->Top__DOT__alu_ctrl_io_alu_ctrl))
                                               ? vlSelf->Top__DOT__alu__DOT___res_T_1
                                               : vlSelf->Top__DOT__alu__DOT___GEN_2))));
            tracep->chgCData(oldp+24,(vlSelf->Top__DOT__ctrl_io_alu_op),2);
            tracep->chgCData(oldp+25,((7U & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+26,((1U & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                           >> 0x1eU))));
            tracep->chgCData(oldp+27,(vlSelf->Top__DOT__alu_ctrl_io_alu_ctrl),4);
            tracep->chgBit(oldp+28,((1U & ((~ (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                               >> 6U)) 
                                           & (~ (IData)(
                                                        (0x30U 
                                                         == 
                                                         (0x30U 
                                                          & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data))))))));
            tracep->chgBit(oldp+29,((IData)((0U == 
                                             (0x70U 
                                              & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data)))));
            tracep->chgBit(oldp+30,(vlSelf->Top__DOT__ctrl_io_mem_read));
            tracep->chgBit(oldp+31,(vlSelf->Top__DOT__ctrl_io_mem_write));
            tracep->chgBit(oldp+32,((1U & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                           >> 6U))));
            tracep->chgQData(oldp+33,(vlSelf->Top__DOT__imm_gen_io_i_imm),64);
            tracep->chgQData(oldp+35,(((((vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                          >> 0x1fU)
                                          ? 0xfffffffffffffULL
                                          : 0ULL) << 0xcU) 
                                       | (QData)((IData)(
                                                         ((0xfe0U 
                                                           & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                              >> 0x14U)) 
                                                          | (0x1fU 
                                                             & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                                >> 7U))))))),64);
            tracep->chgQData(oldp+37,(((((vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                          >> 0x1fU)
                                          ? 0x7ffffffffffffULL
                                          : 0ULL) << 0xdU) 
                                       | (QData)((IData)(
                                                         ((0x1000U 
                                                           & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                              >> 0x13U)) 
                                                          | ((0x800U 
                                                              & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                                 << 4U)) 
                                                             | ((0x7e0U 
                                                                 & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                                    >> 0x14U)) 
                                                                | (0x1eU 
                                                                   & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                                      >> 7U))))))))),64);
            __Vtemp11[0U] = ((IData)(vlSelf->Top__DOT__imm_gen__DOT__u_imm_64) 
                             << 0xcU);
            __Vtemp11[1U] = (((IData)(vlSelf->Top__DOT__imm_gen__DOT__u_imm_64) 
                              >> 0x14U) | ((IData)(
                                                   (vlSelf->Top__DOT__imm_gen__DOT__u_imm_64 
                                                    >> 0x20U)) 
                                           << 0xcU));
            __Vtemp11[2U] = ((IData)((vlSelf->Top__DOT__imm_gen__DOT__u_imm_64 
                                      >> 0x20U)) >> 0x14U);
            VL_EXTEND_WW(79,76, __Vtemp12, __Vtemp11);
            tracep->chgQData(oldp+39,((((QData)((IData)(
                                                        __Vtemp12[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp12[0U])))),64);
            tracep->chgQData(oldp+41,(((((vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                          >> 0x1fU)
                                          ? 0x7ffffffffffULL
                                          : 0ULL) << 0x15U) 
                                       | (QData)((IData)(
                                                         ((0x100000U 
                                                           & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                              >> 0xbU)) 
                                                          | ((0xff000U 
                                                              & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data) 
                                                             | ((0x800U 
                                                                 & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                                    >> 9U)) 
                                                                | (0x7feU 
                                                                   & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                                      >> 0x14U))))))))),64);
            tracep->chgSData(oldp+43,((0x3ffU & (IData)(
                                                        (vlSelf->Top__DOT__alu_io_result 
                                                         >> 2U)))),10);
            tracep->chgQData(oldp+44,(vlSelf->Top__DOT__dmem__DOT__mem
                                      [(0x3ffU & (IData)(
                                                         (vlSelf->Top__DOT__alu_io_result 
                                                          >> 2U)))]),64);
            tracep->chgQData(oldp+46,(vlSelf->Top__DOT__imm),64);
            tracep->chgQData(oldp+48,(vlSelf->Top__DOT__reg_files__DOT__registers_0),64);
            tracep->chgQData(oldp+50,(vlSelf->Top__DOT__reg_files__DOT__registers_1),64);
            tracep->chgQData(oldp+52,(vlSelf->Top__DOT__reg_files__DOT__registers_2),64);
            tracep->chgQData(oldp+54,(vlSelf->Top__DOT__reg_files__DOT__registers_3),64);
            tracep->chgQData(oldp+56,(vlSelf->Top__DOT__reg_files__DOT__registers_4),64);
            tracep->chgQData(oldp+58,(vlSelf->Top__DOT__reg_files__DOT__registers_5),64);
            tracep->chgQData(oldp+60,(vlSelf->Top__DOT__reg_files__DOT__registers_6),64);
            tracep->chgQData(oldp+62,(vlSelf->Top__DOT__reg_files__DOT__registers_7),64);
            tracep->chgQData(oldp+64,(vlSelf->Top__DOT__reg_files__DOT__registers_8),64);
            tracep->chgQData(oldp+66,(vlSelf->Top__DOT__reg_files__DOT__registers_9),64);
            tracep->chgQData(oldp+68,(vlSelf->Top__DOT__reg_files__DOT__registers_10),64);
            tracep->chgQData(oldp+70,(vlSelf->Top__DOT__reg_files__DOT__registers_11),64);
            tracep->chgQData(oldp+72,(vlSelf->Top__DOT__reg_files__DOT__registers_12),64);
            tracep->chgQData(oldp+74,(vlSelf->Top__DOT__reg_files__DOT__registers_13),64);
            tracep->chgQData(oldp+76,(vlSelf->Top__DOT__reg_files__DOT__registers_14),64);
            tracep->chgQData(oldp+78,(vlSelf->Top__DOT__reg_files__DOT__registers_15),64);
            tracep->chgQData(oldp+80,(vlSelf->Top__DOT__reg_files__DOT__registers_16),64);
            tracep->chgQData(oldp+82,(vlSelf->Top__DOT__reg_files__DOT__registers_17),64);
            tracep->chgQData(oldp+84,(vlSelf->Top__DOT__reg_files__DOT__registers_18),64);
            tracep->chgQData(oldp+86,(vlSelf->Top__DOT__reg_files__DOT__registers_19),64);
            tracep->chgQData(oldp+88,(vlSelf->Top__DOT__reg_files__DOT__registers_20),64);
            tracep->chgQData(oldp+90,(vlSelf->Top__DOT__reg_files__DOT__registers_21),64);
            tracep->chgQData(oldp+92,(vlSelf->Top__DOT__reg_files__DOT__registers_22),64);
            tracep->chgQData(oldp+94,(vlSelf->Top__DOT__reg_files__DOT__registers_23),64);
            tracep->chgQData(oldp+96,(vlSelf->Top__DOT__reg_files__DOT__registers_24),64);
            tracep->chgQData(oldp+98,(vlSelf->Top__DOT__reg_files__DOT__registers_25),64);
            tracep->chgQData(oldp+100,(vlSelf->Top__DOT__reg_files__DOT__registers_26),64);
            tracep->chgQData(oldp+102,(vlSelf->Top__DOT__reg_files__DOT__registers_27),64);
            tracep->chgQData(oldp+104,(vlSelf->Top__DOT__reg_files__DOT__registers_28),64);
            tracep->chgQData(oldp+106,(vlSelf->Top__DOT__reg_files__DOT__registers_29),64);
            tracep->chgQData(oldp+108,(vlSelf->Top__DOT__reg_files__DOT__registers_30),64);
            tracep->chgQData(oldp+110,(vlSelf->Top__DOT__reg_files__DOT__registers_31),64);
            tracep->chgQData(oldp+112,(((0U == (IData)(vlSelf->Top__DOT__alu_ctrl_io_alu_ctrl))
                                         ? vlSelf->Top__DOT__alu__DOT___res_T_1
                                         : vlSelf->Top__DOT__alu__DOT___GEN_2)),64);
            tracep->chgCData(oldp+114,((0x7fU & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data)),7);
            tracep->chgBit(oldp+115,((IData)((0x60U 
                                              == (0x70U 
                                                  & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data)))));
            tracep->chgBit(oldp+116,((IData)((0x10U 
                                              == (0x50U 
                                                  & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data)))));
            tracep->chgSData(oldp+117,((vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                        >> 0x14U)),12);
            tracep->chgCData(oldp+118,((vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                        >> 0x19U)),7);
            tracep->chgSData(oldp+119,(((0xfe0U & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                            >> 7U)))),12);
            tracep->chgCData(oldp+120,((0xfU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                >> 8U))),4);
            tracep->chgCData(oldp+121,((0x3fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                 >> 0x19U))),6);
            tracep->chgBit(oldp+122,((1U & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                            >> 7U))));
            tracep->chgBit(oldp+123,((vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                      >> 0x1fU)));
            tracep->chgSData(oldp+124,(((0x1000U & 
                                         (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                    >> 7U)))))),13);
            tracep->chgIData(oldp+125,((vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                        >> 0xcU)),20);
            tracep->chgQData(oldp+126,(vlSelf->Top__DOT__imm_gen__DOT__u_imm_64),64);
            tracep->chgSData(oldp+128,((0x3ffU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                  >> 0x15U))),10);
            tracep->chgBit(oldp+129,((1U & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                            >> 0x14U))));
            tracep->chgCData(oldp+130,((0xffU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                 >> 0xcU))),8);
            tracep->chgIData(oldp+131,(((0x100000U 
                                         & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                            >> 0xbU)) 
                                        | ((0xff000U 
                                            & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data) 
                                           | ((0x800U 
                                               & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                    >> 0x14U)))))),21);
            tracep->chgBit(oldp+132,((1U & (~ ((IData)(vlSelf->Top__DOT__ctrl_io_mem_write) 
                                               & (~ (IData)(vlSelf->Top__DOT__ctrl_io_mem_read)))))));
            tracep->chgBit(oldp+133,(((IData)(vlSelf->Top__DOT__ctrl_io_mem_write) 
                                      & (~ (IData)(vlSelf->Top__DOT__ctrl_io_mem_read)))));
        }
        tracep->chgBit(oldp+134,(vlSelf->clock));
        tracep->chgBit(oldp+135,(vlSelf->reset));
        tracep->chgQData(oldp+136,(vlSelf->io_reg_out),64);
    }
}

void VTop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VTop___024root* const __restrict vlSelf = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
