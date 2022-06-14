// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "verilated.h"

#include "Vtb___024root.h"

VL_INLINE_OPT void Vtb___024root___sequent__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__set_mem_do_rinst;
    CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__set_mem_do_rdata;
    CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__set_mem_do_wdata;
    CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__alu_eq;
    CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__alu_ltu;
    CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__alu_lts;
    CData/*4:0*/ tb__DOT__u0__DOT__u0__DOT__decoded_rs;
    CData/*1:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_state;
    CData/*4:0*/ __Vdlyvdim0__tb__DOT__u0__DOT__u0__DOT__cpuregs__v0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__u0__DOT__u0__DOT__cpuregs__v0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__u0__DOT__u0__DOT__cpuregs__v0;
    CData/*4:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_sh;
    IData/*31:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out;
    QData/*63:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__count_cycle;
    CData/*0:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_trigger;
    CData/*0:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_trigger_q;
    CData/*0:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger;
    CData/*0:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst;
    CData/*0:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lu;
    CData/*0:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lh;
    CData/*0:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lb;
    IData/*31:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_pc;
    QData/*63:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__count_instr;
    CData/*0:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch;
    CData/*7:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state;
    IData/*31:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1;
    // Body
    __Vdly__tb__DOT__u0__DOT__u0__DOT__count_instr 
        = vlSelf->tb__DOT__u0__DOT__u0__DOT__count_instr;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lb 
        = vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_is_lb;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lh 
        = vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_is_lh;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lu 
        = vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_is_lu;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger 
        = vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_trigger_q 
        = vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_trigger_q;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__count_cycle 
        = vlSelf->tb__DOT__u0__DOT__u0__DOT__count_cycle;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_sh = vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_sh;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch 
        = vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_trigger 
        = vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_trigger;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_pc = vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_pc;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst 
        = vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out = vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_out;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 = vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1;
    __Vdlyvset__tb__DOT__u0__DOT__u0__DOT__cpuregs__v0 = 0U;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_state = vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_state;
    vlSelf->tb__DOT__last_cycle_display = vlSelf->tb__DOT__display;
    vlSelf->tb__DOT__is_sw = vlSelf->tb__DOT__is_sw_nxt;
    if ((((IData)(vlSelf->resetn) & (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs_write)) 
         & (0U != (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_rd)))) {
        __Vdlyvval__tb__DOT__u0__DOT__u0__DOT__cpuregs__v0 
            = vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs_wrdata;
        __Vdlyvset__tb__DOT__u0__DOT__u0__DOT__cpuregs__v0 = 1U;
        __Vdlyvdim0__tb__DOT__u0__DOT__u0__DOT__cpuregs__v0 
            = vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_rd;
    }
    if (__Vdlyvset__tb__DOT__u0__DOT__u0__DOT__cpuregs__v0) {
        vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[__Vdlyvdim0__tb__DOT__u0__DOT__u0__DOT__cpuregs__v0] 
            = __Vdlyvval__tb__DOT__u0__DOT__u0__DOT__cpuregs__v0;
    }
    if (vlSelf->resetn) {
        if (vlSelf->tb__DOT__u0__DOT__mem_valid) {
            vlSelf->tb__DOT__u0__DOT__fifo_valid__DOT__r0 
                = vlSelf->tb__DOT__u0__DOT__mem_valid;
            vlSelf->tb__DOT__u0__DOT__fifo_wdata__DOT__r0 
                = vlSelf->tb__DOT__u0__DOT__mem_wdata;
        }
    } else {
        vlSelf->tb__DOT__u0__DOT__fifo_valid__DOT__r0 = 0U;
        vlSelf->tb__DOT__u0__DOT__fifo_wdata__DOT__r0 = 0U;
    }
    if ((1U & (~ ((~ (IData)(vlSelf->resetn)) | (IData)(vlSelf->tb__DOT__trap))))) {
        if (vlSelf->tb__DOT__mem_la_write) {
            vlSelf->tb__DOT__u0__DOT__mem_wdata = vlSelf->tb__DOT__mem_la_wdata;
        }
    }
    if (vlSelf->resetn) {
        if (vlSelf->tb__DOT__u0__DOT__mem_valid) {
            vlSelf->tb__DOT__u0__DOT__fifo_wstrb__DOT__r0 
                = vlSelf->tb__DOT__u0__DOT__mem_wstrb;
            vlSelf->tb__DOT__u0__DOT__fifo_instr__DOT__r0 
                = vlSelf->tb__DOT__u0__DOT__mem_instr;
            vlSelf->tb__DOT__u0__DOT__fifo_addr__DOT__r1 
                = vlSelf->tb__DOT__u0__DOT__fifo_addr__DOT__r0;
            vlSelf->tb__DOT__u0__DOT__fifo_addr__DOT__r0 
                = vlSelf->tb__DOT__u0__DOT__mem_addr;
        }
    } else {
        vlSelf->tb__DOT__u0__DOT__fifo_wstrb__DOT__r0 = 0U;
        vlSelf->tb__DOT__u0__DOT__fifo_instr__DOT__r0 = 0U;
        vlSelf->tb__DOT__u0__DOT__fifo_addr__DOT__r1 = 0U;
        vlSelf->tb__DOT__u0__DOT__fifo_addr__DOT__r0 = 0U;
    }
    if ((1U & (~ ((~ (IData)(vlSelf->resetn)) | (IData)(vlSelf->tb__DOT__trap))))) {
        if (((IData)(vlSelf->tb__DOT__mem_la_read) 
             | (IData)(vlSelf->tb__DOT__mem_la_write))) {
            vlSelf->tb__DOT__u0__DOT__mem_addr = (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch) 
                                                   | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst))
                                                   ? 
                                                  (0xfffffffcU 
                                                   & vlSelf->tb__DOT__u0__DOT__u0__DOT__next_pc)
                                                   : 
                                                  (0xfffffffcU 
                                                   & vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1));
        }
    }
    if ((1U & ((~ (IData)(vlSelf->resetn)) | (IData)(vlSelf->tb__DOT__trap)))) {
        if ((1U & (~ (IData)(vlSelf->resetn)))) {
            __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_state = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->resetn)) | (IData)(vlSelf->tb__DOT__mem_ready)))) {
            vlSelf->tb__DOT__u0__DOT__mem_valid = 0U;
        }
    } else {
        if (((IData)(vlSelf->tb__DOT__mem_la_read) 
             | (IData)(vlSelf->tb__DOT__mem_la_write))) {
            vlSelf->tb__DOT__u0__DOT__mem_wstrb = ((IData)(vlSelf->tb__DOT__mem_la_wstrb) 
                                                   & (- (IData)((IData)(vlSelf->tb__DOT__mem_la_write))));
        }
        if ((0U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_state))) {
            if ((((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch) 
                  | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst)) 
                 | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_rdata))) {
                vlSelf->tb__DOT__u0__DOT__mem_valid = 1U;
                vlSelf->tb__DOT__u0__DOT__mem_instr 
                    = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch) 
                       | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst));
                vlSelf->tb__DOT__u0__DOT__mem_wstrb = 0U;
                __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_state = 1U;
            }
            if (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_wdata) {
                vlSelf->tb__DOT__u0__DOT__mem_valid = 1U;
                vlSelf->tb__DOT__u0__DOT__mem_instr = 0U;
                __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_state = 2U;
            }
        } else if ((1U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_state))) {
            if (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_xfer) {
                vlSelf->tb__DOT__u0__DOT__mem_valid = 0U;
                __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_state 
                    = (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
                        | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_rdata))
                        ? 0U : 3U);
            }
        } else if ((2U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_state))) {
            if (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_xfer) {
                vlSelf->tb__DOT__u0__DOT__mem_valid = 0U;
                __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_state = 0U;
            }
        } else if ((3U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_state))) {
            if (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) {
                __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_state = 0U;
            }
        }
    }
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_state = __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_state;
    vlSelf->tb__DOT__trap = 0U;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_sh = 0U;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out = 0U;
    tb__DOT__u0__DOT__u0__DOT__set_mem_do_rinst = 0U;
    tb__DOT__u0__DOT__u0__DOT__set_mem_do_rdata = 0U;
    tb__DOT__u0__DOT__u0__DOT__set_mem_do_wdata = 0U;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_trigger 
        = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
           & (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_done));
    __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_trigger_q 
        = vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_trigger;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger = 0U;
    if (vlSelf->resetn) {
        __Vdly__tb__DOT__u0__DOT__u0__DOT__count_cycle 
            = (1ULL + vlSelf->tb__DOT__u0__DOT__u0__DOT__count_cycle);
        if (((((((((0x80U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state)) 
                   | (0x40U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state))) 
                  | (0x20U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state))) 
                 | (0x10U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state))) 
                | (8U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state))) 
               | (4U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state))) 
              | (2U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state))) 
             | (1U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state)))) {
            if ((0x80U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state))) {
                vlSelf->tb__DOT__trap = 1U;
            } else if ((0x40U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state))) {
                __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst 
                    = (1U & ((~ (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_trigger)) 
                             & (~ (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__do_waitirq))));
                vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_wordsize = 0U;
                __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lu = 0U;
                __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lh = 0U;
                __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lb = 0U;
                vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_rd 
                    = vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_rd;
                vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_compr 
                    = vlSelf->tb__DOT__u0__DOT__u0__DOT__compressed_instr;
                vlSelf->tb__DOT__u0__DOT__u0__DOT__current_pc 
                    = vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_next_pc;
                if (vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_branch) {
                    vlSelf->tb__DOT__u0__DOT__u0__DOT__current_pc 
                        = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_store)
                            ? (0xfffffffeU & ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_stalu)
                                               ? vlSelf->tb__DOT__u0__DOT__u0__DOT__alu_out_q
                                               : vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_out))
                            : vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_next_pc);
                }
                __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_pc 
                    = vlSelf->tb__DOT__u0__DOT__u0__DOT__current_pc;
                vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_next_pc 
                    = vlSelf->tb__DOT__u0__DOT__u0__DOT__current_pc;
                vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_store = 0U;
                vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_stalu = 0U;
                vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_branch = 0U;
                if (vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_trigger) {
                    __Vdly__tb__DOT__u0__DOT__u0__DOT__count_instr 
                        = (1ULL + vlSelf->tb__DOT__u0__DOT__u0__DOT__count_instr);
                    vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_next_pc 
                        = (vlSelf->tb__DOT__u0__DOT__u0__DOT__current_pc 
                           + ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__compressed_instr)
                               ? 2U : 4U));
                    if (vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_jal) {
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst = 1U;
                        vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_next_pc 
                            = (vlSelf->tb__DOT__u0__DOT__u0__DOT__current_pc 
                               + vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j);
                        vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_branch = 1U;
                    } else {
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst = 0U;
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch 
                            = (1U & ((~ (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_jalr)) 
                                     & (~ (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_retirq))));
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 0x20U;
                    }
                }
            } else if ((0x20U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state))) {
                __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 = 0U;
                vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2 = 0U;
                if (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                     | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_lui_auipc_jal))) {
                    if (vlSelf->tb__DOT__u0__DOT__u0__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) {
                        if (vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_rdcycle) {
                            __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out 
                                = (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__count_cycle);
                        } else if (vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_rdcycleh) {
                            __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out 
                                = (IData)((vlSelf->tb__DOT__u0__DOT__u0__DOT__count_cycle 
                                           >> 0x20U));
                        } else if (vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_rdinstr) {
                            __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out 
                                = (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__count_instr);
                        } else if (vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_rdinstrh) {
                            __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out 
                                = (IData)((vlSelf->tb__DOT__u0__DOT__u0__DOT__count_instr 
                                           >> 0x20U));
                        }
                        vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_store = 1U;
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 0x40U;
                    } else if (vlSelf->tb__DOT__u0__DOT__u0__DOT__is_lui_auipc_jal) {
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 
                            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lui)
                                ? 0U : vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_pc);
                        vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2 
                            = vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_imm;
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst 
                            = vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch;
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 8U;
                    } else {
                        vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_store = 1U;
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out 
                            = vlSelf->tb__DOT__u0__DOT__u0__DOT__timer;
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 0x40U;
                        vlSelf->tb__DOT__u0__DOT__u0__DOT__timer 
                            = vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs_rs1;
                    }
                } else if (vlSelf->tb__DOT__u0__DOT__u0__DOT__is_lb_lh_lw_lbu_lhu) {
                    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 
                        = vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs_rs1;
                    __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 1U;
                    __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst = 1U;
                } else if (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi) 
                            | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_slli_srli_srai))) {
                    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 
                        = vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs_rs1;
                    vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2 
                        = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_slli_srli_srai)
                            ? (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_rs2)
                            : vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_imm);
                    __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst 
                        = vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch;
                    __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 8U;
                } else {
                    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 
                        = vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs_rs1;
                    __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 0x10U;
                }
            } else if ((0x10U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state))) {
                __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_sh 
                    = (0x1fU & vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs_rs2);
                vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2 
                    = vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs_rs2;
                if (vlSelf->tb__DOT__u0__DOT__u0__DOT__is_sb_sh_sw) {
                    __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 2U;
                    __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst = 1U;
                } else {
                    __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst 
                        = vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch;
                    __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 8U;
                }
            } else if ((8U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state))) {
                __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out 
                    = (vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_pc 
                       + vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_imm);
                if (vlSelf->tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu) {
                    vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_rd = 0U;
                    vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_store 
                        = vlSelf->tb__DOT__u0__DOT__u0__DOT__alu_out_0;
                    vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_branch 
                        = vlSelf->tb__DOT__u0__DOT__u0__DOT__alu_out_0;
                    if (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_done) {
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 0x40U;
                    }
                    if (vlSelf->tb__DOT__u0__DOT__u0__DOT__alu_out_0) {
                        tb__DOT__u0__DOT__u0__DOT__set_mem_do_rinst = 1U;
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_trigger = 0U;
                    }
                } else {
                    vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_branch 
                        = vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_jalr;
                    vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_store = 1U;
                    vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_stalu = 1U;
                    __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 0x40U;
                }
            } else if ((4U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state))) {
                vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_store = 1U;
                if ((0U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_sh))) {
                    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out 
                        = vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1;
                    __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst 
                        = vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch;
                    __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 0x40U;
                } else if ((4U <= (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_sh))) {
                    if (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_slli) 
                         | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sll))) {
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 
                            = (vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                               << 4U);
                    } else if (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_srli) 
                                | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_srl))) {
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 
                            = (vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                               >> 4U);
                    } else if (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_srai) 
                                | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sra))) {
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1, 4U);
                    }
                    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_sh 
                        = (0x1fU & ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_sh) 
                                    - (IData)(4U)));
                } else {
                    if (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_slli) 
                         | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sll))) {
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 
                            = (vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                               << 1U);
                    } else if (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_srli) 
                                | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_srl))) {
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 
                            = (vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                               >> 1U);
                    } else if (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_srai) 
                                | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sra))) {
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1, 1U);
                    }
                    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_sh 
                        = (0x1fU & ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_sh) 
                                    - (IData)(1U)));
                }
            } else if ((2U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state))) {
                if ((1U & ((~ (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_done)))) {
                    if ((1U & (~ (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_wdata)))) {
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 
                            = (vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                               + vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_imm);
                        tb__DOT__u0__DOT__u0__DOT__set_mem_do_wdata = 1U;
                        if (vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sb) {
                            vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_wordsize = 2U;
                        } else if (vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sh) {
                            vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_wordsize = 1U;
                        } else if (vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sw) {
                            vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_wordsize = 0U;
                        }
                    }
                    if (((~ (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_done))) {
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 0x40U;
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_trigger = 1U;
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger = 1U;
                    }
                }
            } else {
                vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_store = 1U;
                if ((1U & ((~ (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_done)))) {
                    if (((~ (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_done))) {
                        if (vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_is_lu) {
                            __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out 
                                = vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_word;
                        } else if (vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_is_lh) {
                            __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out 
                                = VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_word));
                        } else if (vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_is_lb) {
                            __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out 
                                = VL_EXTENDS_II(32,8, 
                                                (0xffU 
                                                 & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_word));
                        }
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_trigger = 1U;
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger = 1U;
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 0x40U;
                    }
                    if ((1U & (~ (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_rdata)))) {
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 
                            = (vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                               + vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_imm);
                        tb__DOT__u0__DOT__u0__DOT__set_mem_do_rdata = 1U;
                        if (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lb) 
                             | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lbu))) {
                            vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_wordsize = 2U;
                        } else if (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lh) 
                                    | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lhu))) {
                            vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_wordsize = 1U;
                        } else if (vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lw) {
                            vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_wordsize = 0U;
                        }
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lu 
                            = vlSelf->tb__DOT__u0__DOT__u0__DOT__is_lbu_lhu_lw;
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lh 
                            = vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lh;
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lb 
                            = vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lb;
                    }
                }
            }
        }
    } else {
        __Vdly__tb__DOT__u0__DOT__u0__DOT__count_cycle = 0ULL;
        __Vdly__tb__DOT__u0__DOT__u0__DOT__count_instr = 0ULL;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__timer = 0U;
        __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_pc = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_next_pc = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_store = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_stalu = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_branch = 0U;
        __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lu = 0U;
        __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lh = 0U;
        __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lb = 0U;
        __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 0x40U;
    }
    if ((((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_trigger_q) 
          & (~ (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger_q))) 
         & (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_ecall_ebreak))) {
        __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 0x80U;
    }
    if ((1U & ((~ (IData)(vlSelf->resetn)) | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_done)))) {
        __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch = 0U;
        __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_rdata = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_wdata = 0U;
    }
    if (tb__DOT__u0__DOT__u0__DOT__set_mem_do_rinst) {
        __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst = 1U;
    }
    if (tb__DOT__u0__DOT__u0__DOT__set_mem_do_rdata) {
        vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_rdata = 1U;
    }
    if (tb__DOT__u0__DOT__u0__DOT__set_mem_do_wdata) {
        vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_wdata = 1U;
    }
    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_pc = (0xfffffffcU 
                                                 & __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_pc);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_next_pc 
        = (0xfffffffcU & vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_next_pc);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__current_pc = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__count_cycle 
        = __Vdly__tb__DOT__u0__DOT__u0__DOT__count_cycle;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__count_instr 
        = __Vdly__tb__DOT__u0__DOT__u0__DOT__count_instr;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_sh = __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_sh;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_is_lu 
        = __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lu;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_is_lh 
        = __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lh;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_is_lb 
        = __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lb;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_trigger_q 
        = __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_trigger_q;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch 
        = __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_pc = __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_pc;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_out = __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state = __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1 = __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__do_waitirq = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__alu_out_q = vlSelf->tb__DOT__u0__DOT__u0__DOT__alu_out;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger_q 
        = vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__next_pc = (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_store) 
                                                   & (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_branch))
                                                   ? 
                                                  (0xfffffffeU 
                                                   & vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_out)
                                                   : vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_next_pc);
    vlSelf->tb__DOT__is_sw_nxt = ((2U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state))
                                   ? 1U : ((0x40U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state))
                                            ? 0U : 
                                           (1U & (IData)(vlSelf->tb__DOT__is_sw))));
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs_write = 0U;
    tb__DOT__u0__DOT__u0__DOT__alu_ltu = (vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                          < vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2);
    tb__DOT__u0__DOT__u0__DOT__alu_lts = VL_LTS_III(32, vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1, vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2);
    tb__DOT__u0__DOT__u0__DOT__alu_eq = (vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                         == vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_lbu_lhu_lw 
        = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lbu) 
           | ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lhu) 
              | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lw)));
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state))) {
        vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs_write 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_branch) 
               | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_store));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs_wrdata 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_branch)
                ? (vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_pc 
                   + ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_compr)
                       ? 2U : 4U)) : (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_store) 
                                       & (~ (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_branch)))
                                       ? ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_stalu)
                                           ? vlSelf->tb__DOT__u0__DOT__u0__DOT__alu_out_q
                                           : vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_out)
                                       : 0U));
    }
    if (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
         & (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_done))) {
        vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_rs1 
            = (0x1fU & (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle 
                        >> 0xfU));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__compressed_instr = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_retirq = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_rd 
            = (0x1fU & (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle 
                        >> 7U));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_rs2 
            = (0x1fU & (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle 
                        >> 0x14U));
    }
    tb__DOT__u0__DOT__u0__DOT__decoded_rs = ((0x10U 
                                              == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state))
                                              ? (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_rs2)
                                              : (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_rs1));
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs_rs1 
        = ((0U != (IData)(tb__DOT__u0__DOT__u0__DOT__decoded_rs))
            ? vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs
           [tb__DOT__u0__DOT__u0__DOT__decoded_rs] : 0U);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs_rs2 
        = vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs_rs1;
    if (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_trigger) 
         & (~ (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger)))) {
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_ecall_ebreak 
            = (((0x73U == (0x7fU & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)) 
                & (~ (IData)((0U != (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                     >> 0x15U))))) 
               & (~ (IData)((0U != (0x1fffU & (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                               >> 7U))))));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_rdcycle 
            = ((IData)((0xc0002073U == (0xfffff07fU 
                                        & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q))) 
               | (IData)((0xc0102073U == (0xfffff07fU 
                                          & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q))));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_rdcycleh 
            = ((IData)((0xc8002073U == (0xfffff07fU 
                                        & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q))) 
               | (IData)((0xc8102073U == (0xfffff07fU 
                                          & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q))));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_rdinstr 
            = (IData)((0xc0202073U == (0xfffff07fU 
                                       & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_rdinstrh 
            = (IData)((0xc8202073U == (0xfffff07fU 
                                       & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
    }
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_rdcycle) 
           | ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_rdcycleh) 
              | ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_rdinstr) 
                 | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_rdinstrh))));
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_lui_auipc_jal 
        = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lui) 
           | ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_auipc) 
              | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_jal)));
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_lui_auipc_jal_jalr_addi_add_sub 
        = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lui) 
           | ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_auipc) 
              | ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_jal) 
                 | ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_jalr) 
                    | ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_addi) 
                       | ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_add) 
                          | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sub)))))));
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_slti_blt_slt 
        = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_slti) 
           | ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_blt) 
              | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_slt)));
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_sltiu_bltu_sltu 
        = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sltiu) 
           | ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_bltu) 
              | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sltu)));
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_compare = 
        ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
         | ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_slti) 
            | ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_slt) 
               | ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sltiu) 
                  | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sltu)))));
    if (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_trigger) 
         & (~ (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger)))) {
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_beq 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0U == (0x7000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_bne 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x1000U == (0x7000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_blt 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x4000U == (0x7000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_bge 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x5000U == (0x7000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_bltu 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x6000U == (0x7000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_bgeu 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x7000U == (0x7000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lb 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0U == (0x7000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lh 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x1000U == (0x7000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lw 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x2000U == (0x7000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lbu 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x4000U == (0x7000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lhu 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x5000U == (0x7000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sb 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_sb_sh_sw) 
               & (0U == (0x7000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sh 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_sb_sh_sw) 
               & (0x1000U == (0x7000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sw 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_sb_sh_sw) 
               & (0x2000U == (0x7000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_addi 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm) 
               & (0U == (0x7000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_slti 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm) 
               & (0x2000U == (0x7000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sltiu 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm) 
               & (0x3000U == (0x7000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_xori 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm) 
               & (0x4000U == (0x7000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_ori 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm) 
               & (0x6000U == (0x7000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_andi 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm) 
               & (0x7000U == (0x7000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_slli 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm) 
               & (0x1000U == (0xfe007000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_srli 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm) 
               & (0x5000U == (0xfe007000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_srai 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm) 
               & (0x40005000U == (0xfe007000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__is_slli_srli_srai 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm) 
               & ((IData)((0x1000U == (0xfe007000U 
                                       & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q))) 
                  | ((IData)((0x5000U == (0xfe007000U 
                                          & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q))))));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_jalr) 
               | ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm) 
                  & ((0U == (7U & (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                   >> 0xcU))) | ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                      >> 0xcU))) 
                                                 | ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                         >> 0xcU))) 
                                                    | ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                            >> 0xcU))) 
                                                       | ((6U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                               >> 0xcU))) 
                                                          | (7U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                                 >> 0xcU))))))))));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__is_compare = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_imm 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_jal)
                ? vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j
                : (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lui) 
                    | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_auipc))
                    ? (0xfffff000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)
                    : (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_jalr) 
                        | ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_lb_lh_lw_lbu_lhu) 
                           | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm)))
                        ? VL_EXTENDS_II(32,12, (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                >> 0x14U))
                        : ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu)
                            ? VL_EXTENDS_II(32,13, 
                                            ((0x1000U 
                                              & (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                 >> 0x13U)) 
                                             | ((0x800U 
                                                 & (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                         >> 7U))))))
                            : ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_sb_sh_sw)
                                ? VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                       >> 7U))))
                                : 0U)))));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_add 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg) 
               & (0U == (0xfe007000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sub 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg) 
               & (0x40000000U == (0xfe007000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sll 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg) 
               & (0x1000U == (0xfe007000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_slt 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg) 
               & (0x2000U == (0xfe007000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sltu 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg) 
               & (0x3000U == (0xfe007000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_xor 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg) 
               & (0x4000U == (0xfe007000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_srl 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg) 
               & (0x5000U == (0xfe007000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sra 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg) 
               & (0x40005000U == (0xfe007000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_or 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg) 
               & (0x6000U == (0xfe007000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_and 
            = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg) 
               & (0x7000U == (0xfe007000U & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)));
    }
    if (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
         & (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_done))) {
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_auipc 
            = (0x17U == (0x7fU & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm 
            = (0x13U == (0x7fU & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lui 
            = (0x37U == (0x7fU & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_jal 
            = (0x6fU == (0x7fU & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_jalr 
            = (IData)((0x67U == (0x707fU & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__is_lb_lh_lw_lbu_lhu 
            = (3U == (0x7fU & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__is_sb_sh_sw 
            = (0x23U == (0x7fU & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j 
            = ((0xfffffU & vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j) 
               | (0xfff00000U & VL_EXTENDS_II(32,21, 
                                              (0x1ffffeU 
                                               & (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle 
                                                  >> 0xbU)))));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j 
            = ((0xfffff801U & vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j) 
               | (0x7feU & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                  & (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle 
                                                     >> 0xbU))) 
                            >> 9U)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j 
            = ((0xfffff7ffU & vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j) 
               | (0x800U & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                  & (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle 
                                                     >> 0xbU))) 
                            << 2U)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j 
            = ((0xfff00fffU & vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j) 
               | (0xff000U & (VL_EXTENDS_II(32,21, 
                                            (0x1ffffeU 
                                             & (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle 
                                                >> 0xbU))) 
                              << 0xbU)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j 
            = ((0xfffffffeU & vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j) 
               | (1U & VL_EXTENDS_II(1,21, (0x1ffffeU 
                                            & (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle 
                                               >> 0xbU)))));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu 
            = (0x63U == (0x7fU & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg 
            = (0x33U == (0x7fU & vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle));
    }
    if ((1U & (~ (IData)(vlSelf->resetn)))) {
        vlSelf->tb__DOT__u0__DOT__u0__DOT__is_compare = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_beq = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_bne = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_blt = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_bge = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_bltu = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_bgeu = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_addi = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_slti = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sltiu = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_xori = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_ori = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_andi = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_add = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sub = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sll = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_slt = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sltu = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_xor = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_srl = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sra = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_or = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_and = 0U;
    }
    vlSelf->tb__DOT__sw_mem_addr = ((IData)(vlSelf->tb__DOT__u0__DOT__mem_valid) 
                                    & (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sw));
    vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger 
        = __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_trigger 
        = __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_trigger;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__alu_out_0 = 
        (1U & ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_beq)
                ? (IData)(tb__DOT__u0__DOT__u0__DOT__alu_eq)
                : ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_bne)
                    ? (~ (IData)(tb__DOT__u0__DOT__u0__DOT__alu_eq))
                    : ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_bge)
                        ? (~ (IData)(tb__DOT__u0__DOT__u0__DOT__alu_lts))
                        : ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_bgeu)
                            ? (~ (IData)(tb__DOT__u0__DOT__u0__DOT__alu_ltu))
                            : ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_slti_blt_slt)
                                ? (IData)(tb__DOT__u0__DOT__u0__DOT__alu_lts)
                                : ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_sltiu_bltu_sltu) 
                                   & (IData)(tb__DOT__u0__DOT__u0__DOT__alu_ltu))))))));
    vlSelf->tb__DOT__u0__DOT__u0__DOT__alu_out = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_lui_auipc_jal_jalr_addi_add_sub)
                                                   ? 
                                                  ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sub)
                                                    ? 
                                                   (vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                    - vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2)
                                                    : 
                                                   (vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                    + vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2))
                                                   : 
                                                  ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__is_compare)
                                                    ? (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__alu_out_0)
                                                    : 
                                                   (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_xori) 
                                                     | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_xor))
                                                     ? 
                                                    (vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                     ^ vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2)
                                                     : 
                                                    (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_ori) 
                                                      | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_or))
                                                      ? 
                                                     (vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                      | vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2)
                                                      : 
                                                     (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_andi) 
                                                       | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_and))
                                                       ? 
                                                      (vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                       & vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2)
                                                       : 
                                                      (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sll) 
                                                        | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_slli))
                                                        ? 
                                                       (vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                        << 
                                                        (0x1fU 
                                                         & vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2))
                                                        : 
                                                       (((((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_srl) 
                                                           | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_srli)) 
                                                          | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sra)) 
                                                         | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_srai))
                                                         ? (IData)(
                                                                   (0x1ffffffffULL 
                                                                    & VL_SHIFTRS_QQI(33,33,5, 
                                                                                (((QData)((IData)(
                                                                                (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sra) 
                                                                                | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_srai)) 
                                                                                & (vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                                                >> 0x1fU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1))), 
                                                                                (0x1fU 
                                                                                & vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2))))
                                                         : 0U)))))));
    vlSelf->tb__DOT__display = ((0x40U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state)) 
                                & (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_trigger));
    if (vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_xfer) {
        vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
            = vlSelf->tb__DOT__mem_rdata;
    }
    vlSelf->tb__DOT__mem_rdata = vlSelf->tb__DOT__mem
        [(0x3fU & (vlSelf->tb__DOT__u0__DOT__mem_addr 
                   >> 2U))];
    if ((0U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_wordsize))) {
        vlSelf->tb__DOT__mem_la_wdata = vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2;
        vlSelf->tb__DOT__mem_la_wstrb = 0xfU;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_word 
            = vlSelf->tb__DOT__mem_rdata;
    } else if ((1U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_wordsize))) {
        vlSelf->tb__DOT__mem_la_wdata = ((vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2 
                                          << 0x10U) 
                                         | (0xffffU 
                                            & vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2));
        if ((2U & vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1)) {
            vlSelf->tb__DOT__mem_la_wstrb = 0xcU;
            if ((2U & vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1)) {
                vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_word 
                    = (vlSelf->tb__DOT__mem_rdata >> 0x10U);
            }
        } else {
            vlSelf->tb__DOT__mem_la_wstrb = 3U;
            vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_word 
                = (0xffffU & vlSelf->tb__DOT__mem_rdata);
        }
    } else if ((2U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_wordsize))) {
        vlSelf->tb__DOT__mem_la_wdata = ((vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2 
                                          << 0x18U) 
                                         | ((0xff0000U 
                                             & (vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & (vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2))));
        vlSelf->tb__DOT__mem_la_wstrb = (0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1)));
        vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_word 
            = ((2U & vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1)
                ? ((1U & vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1)
                    ? (vlSelf->tb__DOT__mem_rdata >> 0x18U)
                    : (0xffU & (vlSelf->tb__DOT__mem_rdata 
                                >> 0x10U))) : ((1U 
                                                & vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1)
                                                ? (0xffU 
                                                   & (vlSelf->tb__DOT__mem_rdata 
                                                      >> 8U))
                                                : (0xffU 
                                                   & vlSelf->tb__DOT__mem_rdata)));
    }
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_xfer = ((IData)(vlSelf->tb__DOT__u0__DOT__mem_valid) 
                                                   & (IData)(vlSelf->tb__DOT__mem_ready));
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_xfer)
            ? vlSelf->tb__DOT__mem_rdata : vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst 
        = __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst;
}

VL_INLINE_OPT void Vtb___024root___sequent__TOP__1(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___sequent__TOP__1\n"); );
    // Body
    if (VL_UNLIKELY((0x401U == vlSelf->tb__DOT__instr_cnt))) {
        VL_FINISH_MT("tb_vlg.v", 83, "");
    }
    if (vlSelf->tb__DOT__display) {
        vlSelf->tb__DOT__ssw_printed = 0U;
    } else if (((IData)(vlSelf->tb__DOT__sw_mem_addr) 
                & (~ (IData)(vlSelf->tb__DOT__ssw_printed)))) {
        vlSelf->tb__DOT__ssw_printed = 1U;
    }
    if (VL_UNLIKELY(vlSelf->tb__DOT__display)) {
        VL_WRITEF("\n\n// display %2#\n",6,(0x3fU & 
                                            (vlSelf->tb__DOT__u0__DOT__mem_addr 
                                             >> 2U)));
        if (vlSelf->tb__DOT__is_sw) {
            VL_WRITEF("_u0_mem_addr_sw: %10#\n_fifo_addr_r0: %10#\n",
                      32,vlSelf->tb__DOT__u0__DOT__mem_addr,
                      32,vlSelf->tb__DOT__u0__DOT__fifo_addr__DOT__r1);
        } else {
            VL_WRITEF("_u0_mem_addr: %10#\n_fifo_addr_r0: %10#\n",
                      32,vlSelf->tb__DOT__u0__DOT__mem_addr,
                      32,vlSelf->tb__DOT__u0__DOT__fifo_addr__DOT__r0);
        }
        VL_WRITEF("_fifo_valid_r0: %1#\n_fifo_wstrb_r0: %2#\n_fifo_wdata_r0: %10#\n_fifo_instr_r0: %1#\n_u0_reg_next_pc: %10#\n",
                  1,vlSelf->tb__DOT__u0__DOT__fifo_valid__DOT__r0,
                  4,(IData)(vlSelf->tb__DOT__u0__DOT__fifo_wstrb__DOT__r0),
                  32,vlSelf->tb__DOT__u0__DOT__fifo_wdata__DOT__r0,
                  1,(IData)(vlSelf->tb__DOT__u0__DOT__fifo_instr__DOT__r0),
                  32,vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_next_pc);
    } else if (VL_UNLIKELY(vlSelf->tb__DOT__last_cycle_display)) {
        VL_WRITEF("_u0_cpuregs_1_: %10#\n",32,vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs
                  [1U]);
    } else if (VL_UNLIKELY(((IData)(vlSelf->tb__DOT__sw_mem_addr) 
                            & (~ (IData)(vlSelf->tb__DOT__ssw_printed))))) {
        VL_WRITEF("\n\n// ssw\n_u0_mem_addr: %10#\n_u0_mem_valid: %1#\n",
                  32,vlSelf->tb__DOT__u0__DOT__mem_addr,
                  1,(IData)(vlSelf->tb__DOT__u0__DOT__mem_valid));
    }
    if (vlSelf->tb__DOT__display) {
        vlSelf->tb__DOT__instr_cnt = ((IData)(1U) + vlSelf->tb__DOT__instr_cnt);
    }
}

VL_INLINE_OPT void Vtb___024root___combo__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->tb__DOT__mem_la_write = (((IData)(vlSelf->resetn) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_state))))) 
                                     & (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_wdata));
    vlSelf->tb__DOT__mem_la_read = ((IData)(vlSelf->resetn) 
                                    & ((~ (IData)((0U 
                                                   != (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_state)))) 
                                       & (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
                                           | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch)) 
                                          | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_rdata))));
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_done = ((IData)(vlSelf->resetn) 
                                                   & ((((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_xfer) 
                                                        & (0U 
                                                           != (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_state))) 
                                                       & (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
                                                           | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_rdata)) 
                                                          | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_wdata))) 
                                                      | ((3U 
                                                          == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_state)) 
                                                         & (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst))));
}

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtb___024root___sequent__TOP__0(vlSelf);
    }
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vtb___024root___sequent__TOP__1(vlSelf);
    }
    Vtb___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->resetn & 0xfeU))) {
        Verilated::overWidthError("resetn");}
}
#endif  // VL_DEBUG
