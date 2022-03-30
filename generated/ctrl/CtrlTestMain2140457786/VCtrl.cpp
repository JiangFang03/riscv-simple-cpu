// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCtrl.h"
#include "VCtrl__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VCtrl::VCtrl(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VCtrl__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_inst{vlSymsp->TOP.io_inst}
    , io_alu_src{vlSymsp->TOP.io_alu_src}
    , io_mem_to_reg{vlSymsp->TOP.io_mem_to_reg}
    , io_reg_write{vlSymsp->TOP.io_reg_write}
    , io_mem_read{vlSymsp->TOP.io_mem_read}
    , io_mem_write{vlSymsp->TOP.io_mem_write}
    , io_branch{vlSymsp->TOP.io_branch}
    , io_alu_op{vlSymsp->TOP.io_alu_op}
    , rootp{&(vlSymsp->TOP)}
{
}

VCtrl::VCtrl(const char* _vcname__)
    : VCtrl(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VCtrl::~VCtrl() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VCtrl___024root___eval_initial(VCtrl___024root* vlSelf);
void VCtrl___024root___eval_settle(VCtrl___024root* vlSelf);
void VCtrl___024root___eval(VCtrl___024root* vlSelf);
QData VCtrl___024root___change_request(VCtrl___024root* vlSelf);
#ifdef VL_DEBUG
void VCtrl___024root___eval_debug_assertions(VCtrl___024root* vlSelf);
#endif  // VL_DEBUG
void VCtrl___024root___final(VCtrl___024root* vlSelf);

static void _eval_initial_loop(VCtrl__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VCtrl___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VCtrl___024root___eval_settle(&(vlSymsp->TOP));
        VCtrl___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VCtrl___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Ctrl.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VCtrl___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VCtrl::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCtrl::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCtrl___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VCtrl___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VCtrl___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Ctrl.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VCtrl___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VCtrl::final() {
    VCtrl___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VCtrl::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VCtrl::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VCtrl___024root__traceInitTop(VCtrl___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCtrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCtrl___024root*>(voidSelf);
    VCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VCtrl___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VCtrl___024root__traceRegister(VCtrl___024root* vlSelf, VerilatedVcd* tracep);

void VCtrl::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VCtrl___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
