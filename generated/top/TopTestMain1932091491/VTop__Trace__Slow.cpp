// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


void VTop___024root__traceInitSub0(VTop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VTop___024root__traceInitTop(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VTop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VTop___024root__traceInitSub0(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+135,"clock", false,-1);
        tracep->declBit(c+136,"reset", false,-1);
        tracep->declQuad(c+137,"io_reg_out", false,-1, 63,0);
        tracep->declBit(c+135,"Top clock", false,-1);
        tracep->declBit(c+136,"Top reset", false,-1);
        tracep->declQuad(c+137,"Top io_reg_out", false,-1, 63,0);
        tracep->declBit(c+135,"Top pc_clock", false,-1);
        tracep->declBit(c+136,"Top pc_reset", false,-1);
        tracep->declQuad(c+1,"Top pc_io_in", false,-1, 63,0);
        tracep->declQuad(c+3,"Top pc_io_out", false,-1, 63,0);
        tracep->declQuad(c+5,"Top pc_io_pc4", false,-1, 63,0);
        tracep->declBit(c+135,"Top imem_clock", false,-1);
        tracep->declBus(c+7,"Top imem_io_address", false,-1, 9,0);
        tracep->declBus(c+8,"Top imem_io_inst", false,-1, 31,0);
        tracep->declBit(c+135,"Top reg_files_clock", false,-1);
        tracep->declBit(c+136,"Top reg_files_reset", false,-1);
        tracep->declBit(c+9,"Top reg_files_io_reg_write", false,-1);
        tracep->declBus(c+10,"Top reg_files_io_rs1", false,-1, 4,0);
        tracep->declBus(c+11,"Top reg_files_io_rs2", false,-1, 4,0);
        tracep->declBus(c+12,"Top reg_files_io_rd", false,-1, 4,0);
        tracep->declQuad(c+13,"Top reg_files_io_w_data", false,-1, 63,0);
        tracep->declQuad(c+15,"Top reg_files_io_r_data1", false,-1, 63,0);
        tracep->declQuad(c+17,"Top reg_files_io_r_data2", false,-1, 63,0);
        tracep->declQuad(c+15,"Top alu_io_oper_a", false,-1, 63,0);
        tracep->declQuad(c+19,"Top alu_io_oper_b", false,-1, 63,0);
        tracep->declBus(c+21,"Top alu_io_alu_ctrl", false,-1, 4,0);
        tracep->declQuad(c+22,"Top alu_io_result", false,-1, 63,0);
        tracep->declBit(c+24,"Top alu_io_zero", false,-1);
        tracep->declBus(c+25,"Top alu_ctrl_io_alu_op", false,-1, 1,0);
        tracep->declBus(c+26,"Top alu_ctrl_io_fun3", false,-1, 2,0);
        tracep->declBit(c+27,"Top alu_ctrl_io_fun7", false,-1);
        tracep->declBus(c+28,"Top alu_ctrl_io_alu_ctrl", false,-1, 3,0);
        tracep->declBus(c+8,"Top ctrl_io_inst", false,-1, 31,0);
        tracep->declBit(c+29,"Top ctrl_io_alu_src", false,-1);
        tracep->declBit(c+30,"Top ctrl_io_mem_to_reg", false,-1);
        tracep->declBit(c+9,"Top ctrl_io_reg_write", false,-1);
        tracep->declBit(c+31,"Top ctrl_io_mem_read", false,-1);
        tracep->declBit(c+32,"Top ctrl_io_mem_write", false,-1);
        tracep->declBit(c+33,"Top ctrl_io_branch", false,-1);
        tracep->declBus(c+25,"Top ctrl_io_alu_op", false,-1, 1,0);
        tracep->declBus(c+8,"Top imm_gen_io_instruction", false,-1, 31,0);
        tracep->declQuad(c+34,"Top imm_gen_io_i_imm", false,-1, 63,0);
        tracep->declQuad(c+36,"Top imm_gen_io_s_imm", false,-1, 63,0);
        tracep->declQuad(c+38,"Top imm_gen_io_b_imm", false,-1, 63,0);
        tracep->declQuad(c+40,"Top imm_gen_io_u_imm", false,-1, 63,0);
        tracep->declQuad(c+42,"Top imm_gen_io_j_imm", false,-1, 63,0);
        tracep->declBit(c+135,"Top dmem_clock", false,-1);
        tracep->declBit(c+32,"Top dmem_io_mem_write", false,-1);
        tracep->declBit(c+31,"Top dmem_io_mem_read", false,-1);
        tracep->declBus(c+44,"Top dmem_io_address", false,-1, 9,0);
        tracep->declQuad(c+17,"Top dmem_io_write_data", false,-1, 63,0);
        tracep->declQuad(c+45,"Top dmem_io_read_data", false,-1, 63,0);
        tracep->declQuad(c+47,"Top imm", false,-1, 63,0);
        tracep->declBit(c+135,"Top pc clock", false,-1);
        tracep->declBit(c+136,"Top pc reset", false,-1);
        tracep->declQuad(c+1,"Top pc io_in", false,-1, 63,0);
        tracep->declQuad(c+3,"Top pc io_out", false,-1, 63,0);
        tracep->declQuad(c+5,"Top pc io_pc4", false,-1, 63,0);
        tracep->declQuad(c+3,"Top pc reg_", false,-1, 63,0);
        tracep->declBit(c+135,"Top imem clock", false,-1);
        tracep->declBus(c+7,"Top imem io_address", false,-1, 9,0);
        tracep->declBus(c+8,"Top imem io_inst", false,-1, 31,0);
        tracep->declBit(c+139,"Top imem mem_io_inst_MPORT_en", false,-1);
        tracep->declBus(c+7,"Top imem mem_io_inst_MPORT_addr", false,-1, 9,0);
        tracep->declBus(c+8,"Top imem mem_io_inst_MPORT_data", false,-1, 31,0);
        tracep->declBit(c+135,"Top imem BindsTo_0_InstMem_Inst clock", false,-1);
        tracep->declBus(c+7,"Top imem BindsTo_0_InstMem_Inst io_address", false,-1, 9,0);
        tracep->declBus(c+8,"Top imem BindsTo_0_InstMem_Inst io_inst", false,-1, 31,0);
        tracep->declBit(c+135,"Top reg_files clock", false,-1);
        tracep->declBit(c+136,"Top reg_files reset", false,-1);
        tracep->declBit(c+9,"Top reg_files io_reg_write", false,-1);
        tracep->declBus(c+10,"Top reg_files io_rs1", false,-1, 4,0);
        tracep->declBus(c+11,"Top reg_files io_rs2", false,-1, 4,0);
        tracep->declBus(c+12,"Top reg_files io_rd", false,-1, 4,0);
        tracep->declQuad(c+13,"Top reg_files io_w_data", false,-1, 63,0);
        tracep->declQuad(c+15,"Top reg_files io_r_data1", false,-1, 63,0);
        tracep->declQuad(c+17,"Top reg_files io_r_data2", false,-1, 63,0);
        tracep->declQuad(c+49,"Top reg_files registers_0", false,-1, 63,0);
        tracep->declQuad(c+51,"Top reg_files registers_1", false,-1, 63,0);
        tracep->declQuad(c+53,"Top reg_files registers_2", false,-1, 63,0);
        tracep->declQuad(c+55,"Top reg_files registers_3", false,-1, 63,0);
        tracep->declQuad(c+57,"Top reg_files registers_4", false,-1, 63,0);
        tracep->declQuad(c+59,"Top reg_files registers_5", false,-1, 63,0);
        tracep->declQuad(c+61,"Top reg_files registers_6", false,-1, 63,0);
        tracep->declQuad(c+63,"Top reg_files registers_7", false,-1, 63,0);
        tracep->declQuad(c+65,"Top reg_files registers_8", false,-1, 63,0);
        tracep->declQuad(c+67,"Top reg_files registers_9", false,-1, 63,0);
        tracep->declQuad(c+69,"Top reg_files registers_10", false,-1, 63,0);
        tracep->declQuad(c+71,"Top reg_files registers_11", false,-1, 63,0);
        tracep->declQuad(c+73,"Top reg_files registers_12", false,-1, 63,0);
        tracep->declQuad(c+75,"Top reg_files registers_13", false,-1, 63,0);
        tracep->declQuad(c+77,"Top reg_files registers_14", false,-1, 63,0);
        tracep->declQuad(c+79,"Top reg_files registers_15", false,-1, 63,0);
        tracep->declQuad(c+81,"Top reg_files registers_16", false,-1, 63,0);
        tracep->declQuad(c+83,"Top reg_files registers_17", false,-1, 63,0);
        tracep->declQuad(c+85,"Top reg_files registers_18", false,-1, 63,0);
        tracep->declQuad(c+87,"Top reg_files registers_19", false,-1, 63,0);
        tracep->declQuad(c+89,"Top reg_files registers_20", false,-1, 63,0);
        tracep->declQuad(c+91,"Top reg_files registers_21", false,-1, 63,0);
        tracep->declQuad(c+93,"Top reg_files registers_22", false,-1, 63,0);
        tracep->declQuad(c+95,"Top reg_files registers_23", false,-1, 63,0);
        tracep->declQuad(c+97,"Top reg_files registers_24", false,-1, 63,0);
        tracep->declQuad(c+99,"Top reg_files registers_25", false,-1, 63,0);
        tracep->declQuad(c+101,"Top reg_files registers_26", false,-1, 63,0);
        tracep->declQuad(c+103,"Top reg_files registers_27", false,-1, 63,0);
        tracep->declQuad(c+105,"Top reg_files registers_28", false,-1, 63,0);
        tracep->declQuad(c+107,"Top reg_files registers_29", false,-1, 63,0);
        tracep->declQuad(c+109,"Top reg_files registers_30", false,-1, 63,0);
        tracep->declQuad(c+111,"Top reg_files registers_31", false,-1, 63,0);
        tracep->declQuad(c+15,"Top alu io_oper_a", false,-1, 63,0);
        tracep->declQuad(c+19,"Top alu io_oper_b", false,-1, 63,0);
        tracep->declBus(c+21,"Top alu io_alu_ctrl", false,-1, 4,0);
        tracep->declQuad(c+22,"Top alu io_result", false,-1, 63,0);
        tracep->declBit(c+24,"Top alu io_zero", false,-1);
        tracep->declQuad(c+113,"Top alu res", false,-1, 63,0);
        tracep->declBus(c+25,"Top alu_ctrl io_alu_op", false,-1, 1,0);
        tracep->declBus(c+26,"Top alu_ctrl io_fun3", false,-1, 2,0);
        tracep->declBit(c+27,"Top alu_ctrl io_fun7", false,-1);
        tracep->declBus(c+28,"Top alu_ctrl io_alu_ctrl", false,-1, 3,0);
        tracep->declBus(c+8,"Top ctrl io_inst", false,-1, 31,0);
        tracep->declBit(c+29,"Top ctrl io_alu_src", false,-1);
        tracep->declBit(c+30,"Top ctrl io_mem_to_reg", false,-1);
        tracep->declBit(c+9,"Top ctrl io_reg_write", false,-1);
        tracep->declBit(c+31,"Top ctrl io_mem_read", false,-1);
        tracep->declBit(c+32,"Top ctrl io_mem_write", false,-1);
        tracep->declBit(c+33,"Top ctrl io_branch", false,-1);
        tracep->declBus(c+25,"Top ctrl io_alu_op", false,-1, 1,0);
        tracep->declBus(c+115,"Top ctrl opcode", false,-1, 6,0);
        tracep->declBit(c+116,"Top ctrl alu_op0", false,-1);
        tracep->declBit(c+117,"Top ctrl alu_op1", false,-1);
        tracep->declBus(c+8,"Top imm_gen io_instruction", false,-1, 31,0);
        tracep->declQuad(c+34,"Top imm_gen io_i_imm", false,-1, 63,0);
        tracep->declQuad(c+36,"Top imm_gen io_s_imm", false,-1, 63,0);
        tracep->declQuad(c+38,"Top imm_gen io_b_imm", false,-1, 63,0);
        tracep->declQuad(c+40,"Top imm_gen io_u_imm", false,-1, 63,0);
        tracep->declQuad(c+42,"Top imm_gen io_j_imm", false,-1, 63,0);
        tracep->declBus(c+118,"Top imm_gen i_imm_12", false,-1, 11,0);
        tracep->declBus(c+12,"Top imm_gen s_lower_half", false,-1, 4,0);
        tracep->declBus(c+119,"Top imm_gen s_upper_half", false,-1, 6,0);
        tracep->declBus(c+120,"Top imm_gen s_imm_12", false,-1, 11,0);
        tracep->declBus(c+121,"Top imm_gen sb_lower_half", false,-1, 3,0);
        tracep->declBus(c+122,"Top imm_gen sb_upper_half", false,-1, 5,0);
        tracep->declBit(c+123,"Top imm_gen sb_11thbit", false,-1);
        tracep->declBit(c+124,"Top imm_gen sb_12thbit", false,-1);
        tracep->declBus(c+125,"Top imm_gen sb_imm_13", false,-1, 12,0);
        tracep->declBus(c+126,"Top imm_gen u_imm_20", false,-1, 19,0);
        tracep->declQuad(c+127,"Top imm_gen u_imm_64", false,-1, 63,0);
        tracep->declBus(c+129,"Top imm_gen uj_lower_half", false,-1, 9,0);
        tracep->declBit(c+130,"Top imm_gen uj_11thbit", false,-1);
        tracep->declBus(c+131,"Top imm_gen uj_upper_half", false,-1, 7,0);
        tracep->declBus(c+132,"Top imm_gen uj_imm_21", false,-1, 20,0);
        tracep->declBit(c+135,"Top dmem clock", false,-1);
        tracep->declBit(c+32,"Top dmem io_mem_write", false,-1);
        tracep->declBit(c+31,"Top dmem io_mem_read", false,-1);
        tracep->declBus(c+44,"Top dmem io_address", false,-1, 9,0);
        tracep->declQuad(c+17,"Top dmem io_write_data", false,-1, 63,0);
        tracep->declQuad(c+45,"Top dmem io_read_data", false,-1, 63,0);
        tracep->declBit(c+133,"Top dmem mem_io_read_data_MPORT_en", false,-1);
        tracep->declBus(c+44,"Top dmem mem_io_read_data_MPORT_addr", false,-1, 9,0);
        tracep->declQuad(c+45,"Top dmem mem_io_read_data_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+17,"Top dmem mem_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+44,"Top dmem mem_MPORT_addr", false,-1, 9,0);
        tracep->declBit(c+139,"Top dmem mem_MPORT_mask", false,-1);
        tracep->declBit(c+134,"Top dmem mem_MPORT_en", false,-1);
    }
}

void VTop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VTop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VTop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VTop___024root__traceRegister(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VTop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VTop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VTop___024root__traceCleanup, vlSelf);
    }
}

void VTop___024root__traceFullSub0(VTop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VTop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VTop___024root* const __restrict vlSelf = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VTop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VTop___024root__traceFullSub0(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp9;
    VlWide<3>/*95:0*/ __Vtemp10;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,((((0ULL == ((0U == (IData)(vlSelf->Top__DOT__alu_ctrl_io_alu_ctrl))
                                               ? vlSelf->Top__DOT__alu__DOT___res_T_1
                                               : vlSelf->Top__DOT__alu__DOT___GEN_2)) 
                                    & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                       >> 6U)) ? (vlSelf->Top__DOT__pc__DOT__reg_ 
                                                  + vlSelf->Top__DOT__imm)
                                    : (4ULL + vlSelf->Top__DOT__pc__DOT__reg_))),64);
        tracep->fullQData(oldp+3,(vlSelf->Top__DOT__pc__DOT__reg_),64);
        tracep->fullQData(oldp+5,((4ULL + vlSelf->Top__DOT__pc__DOT__reg_)),64);
        tracep->fullSData(oldp+7,((0x3ffU & (IData)(
                                                    (vlSelf->Top__DOT__pc__DOT__reg_ 
                                                     >> 2U)))),10);
        tracep->fullIData(oldp+8,(vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data),32);
        tracep->fullBit(oldp+9,(vlSelf->Top__DOT__ctrl_io_reg_write));
        tracep->fullCData(oldp+10,((0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+11,((0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+12,((0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                             >> 7U))),5);
        tracep->fullQData(oldp+13,(vlSelf->Top__DOT__reg_files_io_w_data),64);
        tracep->fullQData(oldp+15,(vlSelf->Top__DOT__reg_files_io_r_data1),64);
        tracep->fullQData(oldp+17,(vlSelf->Top__DOT__reg_files_io_r_data2),64);
        tracep->fullQData(oldp+19,(vlSelf->Top__DOT__alu_io_oper_b),64);
        tracep->fullCData(oldp+21,(vlSelf->Top__DOT__alu_ctrl_io_alu_ctrl),5);
        tracep->fullQData(oldp+22,(vlSelf->Top__DOT__alu_io_result),64);
        tracep->fullBit(oldp+24,((0ULL == ((0U == (IData)(vlSelf->Top__DOT__alu_ctrl_io_alu_ctrl))
                                            ? vlSelf->Top__DOT__alu__DOT___res_T_1
                                            : vlSelf->Top__DOT__alu__DOT___GEN_2))));
        tracep->fullCData(oldp+25,(vlSelf->Top__DOT__ctrl_io_alu_op),2);
        tracep->fullCData(oldp+26,((7U & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                          >> 0xcU))),3);
        tracep->fullBit(oldp+27,((1U & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                        >> 0x1eU))));
        tracep->fullCData(oldp+28,(vlSelf->Top__DOT__alu_ctrl_io_alu_ctrl),4);
        tracep->fullBit(oldp+29,((1U & ((~ (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                            >> 6U)) 
                                        & (~ (IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data))))))));
        tracep->fullBit(oldp+30,((IData)((0U == (0x70U 
                                                 & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data)))));
        tracep->fullBit(oldp+31,(vlSelf->Top__DOT__ctrl_io_mem_read));
        tracep->fullBit(oldp+32,(vlSelf->Top__DOT__ctrl_io_mem_write));
        tracep->fullBit(oldp+33,((1U & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                        >> 6U))));
        tracep->fullQData(oldp+34,(vlSelf->Top__DOT__imm_gen_io_i_imm),64);
        tracep->fullQData(oldp+36,(((((vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                       >> 0x1fU) ? 0xfffffffffffffULL
                                       : 0ULL) << 0xcU) 
                                    | (QData)((IData)(
                                                      ((0xfe0U 
                                                        & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                             >> 7U))))))),64);
        tracep->fullQData(oldp+38,(((((vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                       >> 0x1fU) ? 0x7ffffffffffffULL
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
        __Vtemp9[0U] = ((IData)(vlSelf->Top__DOT__imm_gen__DOT__u_imm_64) 
                        << 0xcU);
        __Vtemp9[1U] = (((IData)(vlSelf->Top__DOT__imm_gen__DOT__u_imm_64) 
                         >> 0x14U) | ((IData)((vlSelf->Top__DOT__imm_gen__DOT__u_imm_64 
                                               >> 0x20U)) 
                                      << 0xcU));
        __Vtemp9[2U] = ((IData)((vlSelf->Top__DOT__imm_gen__DOT__u_imm_64 
                                 >> 0x20U)) >> 0x14U);
        VL_EXTEND_WW(79,76, __Vtemp10, __Vtemp9);
        tracep->fullQData(oldp+40,((((QData)((IData)(
                                                     __Vtemp10[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 __Vtemp10[0U])))),64);
        tracep->fullQData(oldp+42,(((((vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                       >> 0x1fU) ? 0x7ffffffffffULL
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
        tracep->fullSData(oldp+44,((0x3ffU & (IData)(
                                                     (vlSelf->Top__DOT__alu_io_result 
                                                      >> 2U)))),10);
        tracep->fullQData(oldp+45,(vlSelf->Top__DOT__dmem__DOT__mem
                                   [(0x3ffU & (IData)(
                                                      (vlSelf->Top__DOT__alu_io_result 
                                                       >> 2U)))]),64);
        tracep->fullQData(oldp+47,(vlSelf->Top__DOT__imm),64);
        tracep->fullQData(oldp+49,(vlSelf->Top__DOT__reg_files__DOT__registers_0),64);
        tracep->fullQData(oldp+51,(vlSelf->Top__DOT__reg_files__DOT__registers_1),64);
        tracep->fullQData(oldp+53,(vlSelf->Top__DOT__reg_files__DOT__registers_2),64);
        tracep->fullQData(oldp+55,(vlSelf->Top__DOT__reg_files__DOT__registers_3),64);
        tracep->fullQData(oldp+57,(vlSelf->Top__DOT__reg_files__DOT__registers_4),64);
        tracep->fullQData(oldp+59,(vlSelf->Top__DOT__reg_files__DOT__registers_5),64);
        tracep->fullQData(oldp+61,(vlSelf->Top__DOT__reg_files__DOT__registers_6),64);
        tracep->fullQData(oldp+63,(vlSelf->Top__DOT__reg_files__DOT__registers_7),64);
        tracep->fullQData(oldp+65,(vlSelf->Top__DOT__reg_files__DOT__registers_8),64);
        tracep->fullQData(oldp+67,(vlSelf->Top__DOT__reg_files__DOT__registers_9),64);
        tracep->fullQData(oldp+69,(vlSelf->Top__DOT__reg_files__DOT__registers_10),64);
        tracep->fullQData(oldp+71,(vlSelf->Top__DOT__reg_files__DOT__registers_11),64);
        tracep->fullQData(oldp+73,(vlSelf->Top__DOT__reg_files__DOT__registers_12),64);
        tracep->fullQData(oldp+75,(vlSelf->Top__DOT__reg_files__DOT__registers_13),64);
        tracep->fullQData(oldp+77,(vlSelf->Top__DOT__reg_files__DOT__registers_14),64);
        tracep->fullQData(oldp+79,(vlSelf->Top__DOT__reg_files__DOT__registers_15),64);
        tracep->fullQData(oldp+81,(vlSelf->Top__DOT__reg_files__DOT__registers_16),64);
        tracep->fullQData(oldp+83,(vlSelf->Top__DOT__reg_files__DOT__registers_17),64);
        tracep->fullQData(oldp+85,(vlSelf->Top__DOT__reg_files__DOT__registers_18),64);
        tracep->fullQData(oldp+87,(vlSelf->Top__DOT__reg_files__DOT__registers_19),64);
        tracep->fullQData(oldp+89,(vlSelf->Top__DOT__reg_files__DOT__registers_20),64);
        tracep->fullQData(oldp+91,(vlSelf->Top__DOT__reg_files__DOT__registers_21),64);
        tracep->fullQData(oldp+93,(vlSelf->Top__DOT__reg_files__DOT__registers_22),64);
        tracep->fullQData(oldp+95,(vlSelf->Top__DOT__reg_files__DOT__registers_23),64);
        tracep->fullQData(oldp+97,(vlSelf->Top__DOT__reg_files__DOT__registers_24),64);
        tracep->fullQData(oldp+99,(vlSelf->Top__DOT__reg_files__DOT__registers_25),64);
        tracep->fullQData(oldp+101,(vlSelf->Top__DOT__reg_files__DOT__registers_26),64);
        tracep->fullQData(oldp+103,(vlSelf->Top__DOT__reg_files__DOT__registers_27),64);
        tracep->fullQData(oldp+105,(vlSelf->Top__DOT__reg_files__DOT__registers_28),64);
        tracep->fullQData(oldp+107,(vlSelf->Top__DOT__reg_files__DOT__registers_29),64);
        tracep->fullQData(oldp+109,(vlSelf->Top__DOT__reg_files__DOT__registers_30),64);
        tracep->fullQData(oldp+111,(vlSelf->Top__DOT__reg_files__DOT__registers_31),64);
        tracep->fullQData(oldp+113,(((0U == (IData)(vlSelf->Top__DOT__alu_ctrl_io_alu_ctrl))
                                      ? vlSelf->Top__DOT__alu__DOT___res_T_1
                                      : vlSelf->Top__DOT__alu__DOT___GEN_2)),64);
        tracep->fullCData(oldp+115,((0x7fU & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data)),7);
        tracep->fullBit(oldp+116,((IData)((0x60U == 
                                           (0x70U & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data)))));
        tracep->fullBit(oldp+117,((IData)((0x10U == 
                                           (0x50U & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data)))));
        tracep->fullSData(oldp+118,((vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                     >> 0x14U)),12);
        tracep->fullCData(oldp+119,((vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                     >> 0x19U)),7);
        tracep->fullSData(oldp+120,(((0xfe0U & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                 >> 7U)))),12);
        tracep->fullCData(oldp+121,((0xfU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                             >> 8U))),4);
        tracep->fullCData(oldp+122,((0x3fU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                              >> 0x19U))),6);
        tracep->fullBit(oldp+123,((1U & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                         >> 7U))));
        tracep->fullBit(oldp+124,((vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                   >> 0x1fU)));
        tracep->fullSData(oldp+125,(((0x1000U & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                 >> 0x13U)) 
                                     | ((0x800U & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                 >> 7U)))))),13);
        tracep->fullIData(oldp+126,((vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                     >> 0xcU)),20);
        tracep->fullQData(oldp+127,(vlSelf->Top__DOT__imm_gen__DOT__u_imm_64),64);
        tracep->fullSData(oldp+129,((0x3ffU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                               >> 0x15U))),10);
        tracep->fullBit(oldp+130,((1U & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                         >> 0x14U))));
        tracep->fullCData(oldp+131,((0xffU & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                              >> 0xcU))),8);
        tracep->fullIData(oldp+132,(((0x100000U & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                   >> 0xbU)) 
                                     | ((0xff000U & vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data) 
                                        | ((0x800U 
                                            & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->Top__DOT__imem__DOT__mem_io_inst_MPORT_data 
                                                 >> 0x14U)))))),21);
        tracep->fullBit(oldp+133,((1U & (~ ((IData)(vlSelf->Top__DOT__ctrl_io_mem_write) 
                                            & (~ (IData)(vlSelf->Top__DOT__ctrl_io_mem_read)))))));
        tracep->fullBit(oldp+134,(((IData)(vlSelf->Top__DOT__ctrl_io_mem_write) 
                                   & (~ (IData)(vlSelf->Top__DOT__ctrl_io_mem_read)))));
        tracep->fullBit(oldp+135,(vlSelf->clock));
        tracep->fullBit(oldp+136,(vlSelf->reset));
        tracep->fullQData(oldp+137,(vlSelf->io_reg_out),64);
        tracep->fullBit(oldp+139,(1U));
    }
}
