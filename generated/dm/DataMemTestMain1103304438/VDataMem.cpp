// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VDataMem.h"
#include "VDataMem__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VDataMem::VDataMem(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VDataMem__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_mem_write{vlSymsp->TOP.io_mem_write}
    , io_mem_read{vlSymsp->TOP.io_mem_read}
    , io_address{vlSymsp->TOP.io_address}
    , io_write_data{vlSymsp->TOP.io_write_data}
    , io_read_data{vlSymsp->TOP.io_read_data}
    , rootp{&(vlSymsp->TOP)}
{
}

VDataMem::VDataMem(const char* _vcname__)
    : VDataMem(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VDataMem::~VDataMem() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VDataMem___024root___eval_initial(VDataMem___024root* vlSelf);
void VDataMem___024root___eval_settle(VDataMem___024root* vlSelf);
void VDataMem___024root___eval(VDataMem___024root* vlSelf);
QData VDataMem___024root___change_request(VDataMem___024root* vlSelf);
#ifdef VL_DEBUG
void VDataMem___024root___eval_debug_assertions(VDataMem___024root* vlSelf);
#endif  // VL_DEBUG
void VDataMem___024root___final(VDataMem___024root* vlSelf);

static void _eval_initial_loop(VDataMem__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VDataMem___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VDataMem___024root___eval_settle(&(vlSymsp->TOP));
        VDataMem___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VDataMem___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("DataMem.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VDataMem___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VDataMem::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDataMem::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VDataMem___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VDataMem___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VDataMem___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("DataMem.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VDataMem___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VDataMem::final() {
    VDataMem___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VDataMem::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VDataMem::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VDataMem___024root__traceInitTop(VDataMem___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VDataMem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDataMem___024root*>(voidSelf);
    VDataMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VDataMem___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VDataMem___024root__traceRegister(VDataMem___024root* vlSelf, VerilatedVcd* tracep);

void VDataMem::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VDataMem___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
