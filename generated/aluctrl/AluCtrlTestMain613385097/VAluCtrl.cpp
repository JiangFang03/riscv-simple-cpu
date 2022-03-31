// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAluCtrl.h"
#include "VAluCtrl__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VAluCtrl::VAluCtrl(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VAluCtrl__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_alu_op{vlSymsp->TOP.io_alu_op}
    , io_fun3{vlSymsp->TOP.io_fun3}
    , io_fun7{vlSymsp->TOP.io_fun7}
    , io_alu_ctrl{vlSymsp->TOP.io_alu_ctrl}
    , rootp{&(vlSymsp->TOP)}
{
}

VAluCtrl::VAluCtrl(const char* _vcname__)
    : VAluCtrl(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VAluCtrl::~VAluCtrl() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VAluCtrl___024root___eval_initial(VAluCtrl___024root* vlSelf);
void VAluCtrl___024root___eval_settle(VAluCtrl___024root* vlSelf);
void VAluCtrl___024root___eval(VAluCtrl___024root* vlSelf);
QData VAluCtrl___024root___change_request(VAluCtrl___024root* vlSelf);
#ifdef VL_DEBUG
void VAluCtrl___024root___eval_debug_assertions(VAluCtrl___024root* vlSelf);
#endif  // VL_DEBUG
void VAluCtrl___024root___final(VAluCtrl___024root* vlSelf);

static void _eval_initial_loop(VAluCtrl__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VAluCtrl___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VAluCtrl___024root___eval_settle(&(vlSymsp->TOP));
        VAluCtrl___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VAluCtrl___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("AluCtrl.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VAluCtrl___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAluCtrl::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAluCtrl::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAluCtrl___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VAluCtrl___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VAluCtrl___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("AluCtrl.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VAluCtrl___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VAluCtrl::final() {
    VAluCtrl___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VAluCtrl::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VAluCtrl::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VAluCtrl___024root__traceInitTop(VAluCtrl___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAluCtrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAluCtrl___024root*>(voidSelf);
    VAluCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VAluCtrl___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VAluCtrl___024root__traceRegister(VAluCtrl___024root* vlSelf, VerilatedVcd* tracep);

void VAluCtrl::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VAluCtrl___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
