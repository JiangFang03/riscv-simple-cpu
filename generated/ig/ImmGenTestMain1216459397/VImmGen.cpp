// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VImmGen.h"
#include "VImmGen__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VImmGen::VImmGen(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VImmGen__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_instruction{vlSymsp->TOP.io_instruction}
    , io_i_imm{vlSymsp->TOP.io_i_imm}
    , io_s_imm{vlSymsp->TOP.io_s_imm}
    , io_b_imm{vlSymsp->TOP.io_b_imm}
    , io_u_imm{vlSymsp->TOP.io_u_imm}
    , io_j_imm{vlSymsp->TOP.io_j_imm}
    , rootp{&(vlSymsp->TOP)}
{
}

VImmGen::VImmGen(const char* _vcname__)
    : VImmGen(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VImmGen::~VImmGen() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VImmGen___024root___eval_initial(VImmGen___024root* vlSelf);
void VImmGen___024root___eval_settle(VImmGen___024root* vlSelf);
void VImmGen___024root___eval(VImmGen___024root* vlSelf);
QData VImmGen___024root___change_request(VImmGen___024root* vlSelf);
#ifdef VL_DEBUG
void VImmGen___024root___eval_debug_assertions(VImmGen___024root* vlSelf);
#endif  // VL_DEBUG
void VImmGen___024root___final(VImmGen___024root* vlSelf);

static void _eval_initial_loop(VImmGen__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VImmGen___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VImmGen___024root___eval_settle(&(vlSymsp->TOP));
        VImmGen___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VImmGen___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("ImmGen.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VImmGen___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VImmGen::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VImmGen::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VImmGen___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VImmGen___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VImmGen___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("ImmGen.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VImmGen___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VImmGen::final() {
    VImmGen___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VImmGen::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VImmGen::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VImmGen___024root__traceInitTop(VImmGen___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VImmGen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VImmGen___024root*>(voidSelf);
    VImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VImmGen___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VImmGen___024root__traceRegister(VImmGen___024root* vlSelf, VerilatedVcd* tracep);

void VImmGen::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VImmGen___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
