// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vand_gate.h for the primary calling header

#include "Vand_gate__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vand_gate___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vand_gate___024root___eval_triggers__ico(Vand_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root___eval_triggers__ico\n"); );
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vand_gate___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vand_gate___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vand_gate___024root___ico_sequent__TOP__0(Vand_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root___ico_sequent__TOP__0\n"); );
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.y = ((IData)(vlSelfRef.a) & (IData)(vlSelfRef.b));
}

void Vand_gate___024root___eval_ico(Vand_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root___eval_ico\n"); );
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vand_gate___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vand_gate___024root___eval_phase__ico(Vand_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root___eval_phase__ico\n"); );
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vand_gate___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vand_gate___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vand_gate___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vand_gate___024root___eval(Vand_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root___eval\n"); );
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vand_gate___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("dut/and_gate.v", 68, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vand_gate___024root___eval_phase__ico(vlSelf));
}

#ifdef VL_DEBUG
void Vand_gate___024root___eval_debug_assertions(Vand_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root___eval_debug_assertions\n"); );
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.a & 0xfeU)))) {
        Verilated::overWidthError("a");
    }
    if (VL_UNLIKELY(((vlSelfRef.b & 0xfeU)))) {
        Verilated::overWidthError("b");
    }
}
#endif  // VL_DEBUG
