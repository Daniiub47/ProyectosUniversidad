// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrvfpgasim.h"
#include "Vrvfpgasim__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vrvfpgasim::Vrvfpgasim(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrvfpgasim__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , i_jtag_tck{vlSymsp->TOP.i_jtag_tck}
    , i_jtag_trst_n{vlSymsp->TOP.i_jtag_trst_n}
    , rst{vlSymsp->TOP.rst}
    , i_jtag_tms{vlSymsp->TOP.i_jtag_tms}
    , i_jtag_tdi{vlSymsp->TOP.i_jtag_tdi}
    , o_jtag_tdo{vlSymsp->TOP.o_jtag_tdo}
    , o_uart_tx{vlSymsp->TOP.o_uart_tx}
    , o_gpio{vlSymsp->TOP.o_gpio}
    , i_sw0{vlSymsp->TOP.i_sw0}
    , i_btn0{vlSymsp->TOP.i_btn0}
    , i_btn1{vlSymsp->TOP.i_btn1}
    , i_btn2{vlSymsp->TOP.i_btn2}
    , i_btn3{vlSymsp->TOP.i_btn3}
    , i_btn4{vlSymsp->TOP.i_btn4}
    , i_led16R{vlSymsp->TOP.i_led16R}
    , i_led16G{vlSymsp->TOP.i_led16G}
    , i_led16B{vlSymsp->TOP.i_led16B}
    , rvfpgasim{vlSymsp->TOP.rvfpgasim}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vrvfpgasim::Vrvfpgasim(const char* _vcname__)
    : Vrvfpgasim(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrvfpgasim::~Vrvfpgasim() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrvfpgasim___024root___eval_debug_assertions(Vrvfpgasim___024root* vlSelf);
#endif  // VL_DEBUG
void Vrvfpgasim___024root___eval_static(Vrvfpgasim___024root* vlSelf);
void Vrvfpgasim___024root___eval_initial(Vrvfpgasim___024root* vlSelf);
void Vrvfpgasim___024root___eval_settle(Vrvfpgasim___024root* vlSelf);
void Vrvfpgasim___024root___eval(Vrvfpgasim___024root* vlSelf);

void Vrvfpgasim::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrvfpgasim::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrvfpgasim___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vrvfpgasim___024root___eval_static(&(vlSymsp->TOP));
        Vrvfpgasim___024root___eval_initial(&(vlSymsp->TOP));
        Vrvfpgasim___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vrvfpgasim___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vrvfpgasim::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vrvfpgasim::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vrvfpgasim::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vrvfpgasim___024root___eval_final(Vrvfpgasim___024root* vlSelf);

VL_ATTR_COLD void Vrvfpgasim::final() {
    Vrvfpgasim___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrvfpgasim::hierName() const { return vlSymsp->name(); }
const char* Vrvfpgasim::modelName() const { return "Vrvfpgasim"; }
unsigned Vrvfpgasim::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vrvfpgasim::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vrvfpgasim___024root__trace_init_top(Vrvfpgasim___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vrvfpgasim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrvfpgasim___024root*>(voidSelf);
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vrvfpgasim___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vrvfpgasim___024root__trace_register(Vrvfpgasim___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vrvfpgasim::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vrvfpgasim::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vrvfpgasim___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
