// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb.h"
#include "Vtb__Syms.h"

//==========

VL_CTOR_IMP(Vtb) {
    Vtb__Syms* __restrict vlSymsp = __VlSymsp = new Vtb__Syms(this, name());
    Vtb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtb::__Vconfigure(Vtb__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtb::~Vtb() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void Vtb::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb::eval\n"); );
    Vtb__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("tb_vlg.v", 3, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtb::_eval_initial_loop(Vtb__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("tb_vlg.v", 3, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtb::_sequent__TOP__1(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb::_sequent__TOP__1\n"); );
    Vtb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_state;
    CData/*4:0*/ __Vdlyvdim0__tb__DOT__u0__DOT__u0__DOT__cpuregs__v0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__u0__DOT__u0__DOT__cpuregs__v0;
    CData/*4:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_sh;
    CData/*0:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_trigger;
    CData/*0:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_trigger_q;
    CData/*0:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger;
    CData/*0:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst;
    CData/*0:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lu;
    CData/*0:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lh;
    CData/*0:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lb;
    CData/*0:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch;
    CData/*7:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state;
    IData/*31:0*/ __Vdlyvval__tb__DOT__u0__DOT__u0__DOT__cpuregs__v0;
    IData/*31:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out;
    IData/*31:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_pc;
    IData/*31:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1;
    QData/*63:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__count_cycle;
    QData/*63:0*/ __Vdly__tb__DOT__u0__DOT__u0__DOT__count_instr;
    // Body
    __Vdly__tb__DOT__u0__DOT__u0__DOT__count_instr 
        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__count_instr;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lb 
        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_is_lb;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lh 
        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_is_lh;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lu 
        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_is_lu;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger 
        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_trigger_q 
        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_trigger_q;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__count_cycle 
        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__count_cycle;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_sh = vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_sh;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch 
        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_trigger 
        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_trigger;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_pc = vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_pc;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst 
        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out = vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_out;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 = vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1;
    __Vdlyvset__tb__DOT__u0__DOT__u0__DOT__cpuregs__v0 = 0U;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_state = vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_state;
    if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_done))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_rs1 
            = (0x1fU & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle 
                        >> 0xfU));
    }
    if ((((IData)(vlTOPp->resetn) & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs_write)) 
         & (0U != (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_rd)))) {
        __Vdlyvval__tb__DOT__u0__DOT__u0__DOT__cpuregs__v0 
            = vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs_wrdata;
        __Vdlyvset__tb__DOT__u0__DOT__u0__DOT__cpuregs__v0 = 1U;
        __Vdlyvdim0__tb__DOT__u0__DOT__u0__DOT__cpuregs__v0 
            = vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_rd;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->tb__DOT__u0__DOT__mem_valid) {
            vlTOPp->tb__DOT__u0__DOT__fifo_valid__DOT__r0 
                = vlTOPp->tb__DOT__u0__DOT__mem_valid;
        }
    } else {
        vlTOPp->tb__DOT__u0__DOT__fifo_valid__DOT__r0 = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->tb__DOT__u0__DOT__mem_valid) {
            vlTOPp->tb__DOT__u0__DOT__fifo_wdata__DOT__r0 
                = vlTOPp->tb__DOT__u0__DOT__mem_wdata;
        }
    } else {
        vlTOPp->tb__DOT__u0__DOT__fifo_wdata__DOT__r0 = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->tb__DOT__u0__DOT__mem_valid) {
            vlTOPp->tb__DOT__u0__DOT__fifo_wstrb__DOT__r0 
                = vlTOPp->tb__DOT__u0__DOT__mem_wstrb;
        }
    } else {
        vlTOPp->tb__DOT__u0__DOT__fifo_wstrb__DOT__r0 = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->tb__DOT__u0__DOT__mem_valid) {
            vlTOPp->tb__DOT__u0__DOT__fifo_instr__DOT__r0 
                = vlTOPp->tb__DOT__u0__DOT__mem_instr;
        }
    } else {
        vlTOPp->tb__DOT__u0__DOT__fifo_instr__DOT__r0 = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->tb__DOT__u0__DOT__mem_valid) {
            vlTOPp->tb__DOT__u0__DOT__fifo_addr__DOT__r1 
                = vlTOPp->tb__DOT__u0__DOT__fifo_addr__DOT__r0;
        }
    } else {
        vlTOPp->tb__DOT__u0__DOT__fifo_addr__DOT__r1 = 0U;
    }
    if (__Vdlyvset__tb__DOT__u0__DOT__u0__DOT__cpuregs__v0) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[__Vdlyvdim0__tb__DOT__u0__DOT__u0__DOT__cpuregs__v0] 
            = __Vdlyvval__tb__DOT__u0__DOT__u0__DOT__cpuregs__v0;
    }
    if ((1U & (~ ((~ (IData)(vlTOPp->resetn)) | (IData)(vlTOPp->tb__DOT__trap))))) {
        if (vlTOPp->tb__DOT__mem_la_write) {
            vlTOPp->tb__DOT__u0__DOT__mem_wdata = vlTOPp->tb__DOT__mem_la_wdata;
        }
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->tb__DOT__u0__DOT__mem_valid) {
            vlTOPp->tb__DOT__u0__DOT__fifo_addr__DOT__r0 
                = vlTOPp->tb__DOT__u0__DOT__mem_addr;
        }
    } else {
        vlTOPp->tb__DOT__u0__DOT__fifo_addr__DOT__r0 = 0U;
    }
    if ((1U & (~ ((~ (IData)(vlTOPp->resetn)) | (IData)(vlTOPp->tb__DOT__trap))))) {
        if (((IData)(vlTOPp->tb__DOT__mem_la_read) 
             | (IData)(vlTOPp->tb__DOT__mem_la_write))) {
            vlTOPp->tb__DOT__u0__DOT__mem_addr = (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch) 
                                                   | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst))
                                                   ? 
                                                  (0xfffffffcU 
                                                   & vlTOPp->tb__DOT__u0__DOT__u0__DOT__next_pc)
                                                   : 
                                                  (0xfffffffcU 
                                                   & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1));
        }
    }
    if ((1U & ((~ (IData)(vlTOPp->resetn)) | (IData)(vlTOPp->tb__DOT__trap)))) {
        if ((1U & (~ (IData)(vlTOPp->resetn)))) {
            __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_state = 0U;
        }
        if ((1U & ((~ (IData)(vlTOPp->resetn)) | (IData)(vlTOPp->tb__DOT__mem_ready)))) {
            vlTOPp->tb__DOT__u0__DOT__mem_valid = 0U;
        }
    } else {
        if (((IData)(vlTOPp->tb__DOT__mem_la_read) 
             | (IData)(vlTOPp->tb__DOT__mem_la_write))) {
            vlTOPp->tb__DOT__u0__DOT__mem_wstrb = ((IData)(vlTOPp->tb__DOT__mem_la_wstrb) 
                                                   & VL_NEGATE_I((IData)((IData)(vlTOPp->tb__DOT__mem_la_write))));
        }
        if ((0U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_state))) {
            if ((((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch) 
                  | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst)) 
                 | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rdata))) {
                vlTOPp->tb__DOT__u0__DOT__mem_valid = 1U;
                vlTOPp->tb__DOT__u0__DOT__mem_instr 
                    = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch) 
                       | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst));
                vlTOPp->tb__DOT__u0__DOT__mem_wstrb = 0U;
                __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_state = 1U;
            }
            if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_wdata) {
                vlTOPp->tb__DOT__u0__DOT__mem_valid = 1U;
                vlTOPp->tb__DOT__u0__DOT__mem_instr = 0U;
                __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_state = 2U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_state))) {
                if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_xfer) {
                    vlTOPp->tb__DOT__u0__DOT__mem_valid = 0U;
                    __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_state 
                        = (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
                            | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rdata))
                            ? 0U : 3U);
                }
            } else {
                if ((2U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_state))) {
                    if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_xfer) {
                        vlTOPp->tb__DOT__u0__DOT__mem_valid = 0U;
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_state = 0U;
                    }
                } else {
                    if ((3U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_state))) {
                        if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) {
                            __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_state = 0U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_state = __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_state;
    vlTOPp->tb__DOT__trap = 0U;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_sh = 0U;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__set_mem_do_rinst = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__set_mem_do_rdata = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__set_mem_do_wdata = 0U;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__count_cycle 
        = ((IData)(vlTOPp->resetn) ? (VL_ULL(1) + vlTOPp->tb__DOT__u0__DOT__u0__DOT__count_cycle)
            : VL_ULL(0));
    __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_trigger 
        = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
           & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_done));
    __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_trigger_q 
        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_trigger;
    __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger = 0U;
    if (vlTOPp->resetn) {
        if (((((((((0x80U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state)) 
                   | (0x40U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state))) 
                  | (0x20U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state))) 
                 | (0x10U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state))) 
                | (8U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state))) 
               | (4U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state))) 
              | (2U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state))) 
             | (1U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state)))) {
            if ((0x80U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state))) {
                vlTOPp->tb__DOT__trap = 1U;
            } else {
                if ((0x40U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state))) {
                    __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst 
                        = (1U & ((~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_trigger)) 
                                 & (~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__do_waitirq))));
                    vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize = 0U;
                    __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lu = 0U;
                    __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lh = 0U;
                    __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lb = 0U;
                    vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_rd 
                        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_rd;
                    vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_compr 
                        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__compressed_instr;
                    vlTOPp->tb__DOT__u0__DOT__u0__DOT__current_pc 
                        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_next_pc;
                    if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_branch) {
                        vlTOPp->tb__DOT__u0__DOT__u0__DOT__current_pc 
                            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_store)
                                ? (0xfffffffeU & ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_stalu)
                                                   ? vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_out_q
                                                   : vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_out))
                                : vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_next_pc);
                    }
                    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_pc 
                        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__current_pc;
                    vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_next_pc 
                        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__current_pc;
                    vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_store = 0U;
                    vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_stalu = 0U;
                    vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_branch = 0U;
                    if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_trigger) {
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__count_instr 
                            = (VL_ULL(1) + vlTOPp->tb__DOT__u0__DOT__u0__DOT__count_instr);
                        vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_next_pc 
                            = (vlTOPp->tb__DOT__u0__DOT__u0__DOT__current_pc 
                               + ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__compressed_instr)
                                   ? 2U : 4U));
                        if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_jal) {
                            __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst = 1U;
                            vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_next_pc 
                                = (vlTOPp->tb__DOT__u0__DOT__u0__DOT__current_pc 
                                   + vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j);
                            vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_branch = 1U;
                        } else {
                            __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst = 0U;
                            __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch 
                                = (1U & ((~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_jalr)) 
                                         & (~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_retirq))));
                            __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 0x20U;
                        }
                    }
                } else {
                    if ((0x20U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state))) {
                        __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 = 0U;
                        vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2 = 0U;
                        if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                             | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_lui_auipc_jal))) {
                            if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) {
                                if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_rdcycle) {
                                    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out 
                                        = (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__count_cycle);
                                } else {
                                    if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_rdcycleh) {
                                        __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out 
                                            = (IData)(
                                                      (vlTOPp->tb__DOT__u0__DOT__u0__DOT__count_cycle 
                                                       >> 0x20U));
                                    } else {
                                        if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_rdinstr) {
                                            __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out 
                                                = (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__count_instr);
                                        } else {
                                            if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_rdinstrh) {
                                                __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out 
                                                    = (IData)(
                                                              (vlTOPp->tb__DOT__u0__DOT__u0__DOT__count_instr 
                                                               >> 0x20U));
                                            }
                                        }
                                    }
                                }
                                vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_store = 1U;
                                __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 0x40U;
                            } else {
                                if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_lui_auipc_jal) {
                                    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                        = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lui)
                                            ? 0U : vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_pc);
                                    vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2 
                                        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_imm;
                                    __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst 
                                        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch;
                                    __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 8U;
                                } else {
                                    vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_store = 1U;
                                    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out 
                                        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__timer;
                                    __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 0x40U;
                                    vlTOPp->tb__DOT__u0__DOT__u0__DOT__timer 
                                        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs_rs1;
                                }
                            }
                        } else {
                            if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_lb_lh_lw_lbu_lhu) {
                                __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                    = vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs_rs1;
                                __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 1U;
                                __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst = 1U;
                            } else {
                                if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi) 
                                     | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_slli_srli_srai))) {
                                    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs_rs1;
                                    vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2 
                                        = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_slli_srli_srai)
                                            ? (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_rs2)
                                            : vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_imm);
                                    __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst 
                                        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch;
                                    __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 8U;
                                } else {
                                    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs_rs1;
                                    __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 0x10U;
                                }
                            }
                        }
                    } else {
                        if ((0x10U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state))) {
                            __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_sh 
                                = (0x1fU & vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs_rs2);
                            vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2 
                                = vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs_rs2;
                            if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_sb_sh_sw) {
                                __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 2U;
                                __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst = 1U;
                            } else {
                                __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst 
                                    = vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch;
                                __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 8U;
                            }
                        } else {
                            if ((8U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state))) {
                                __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out 
                                    = (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_pc 
                                       + vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_imm);
                                if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu) {
                                    vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_rd = 0U;
                                    vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_store 
                                        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_out_0;
                                    vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_branch 
                                        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_out_0;
                                    if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_done) {
                                        __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 0x40U;
                                    }
                                    if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_out_0) {
                                        vlTOPp->tb__DOT__u0__DOT__u0__DOT__set_mem_do_rinst = 1U;
                                        __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_trigger = 0U;
                                    }
                                } else {
                                    vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_branch 
                                        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_jalr;
                                    vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_store = 1U;
                                    vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_stalu = 1U;
                                    __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 0x40U;
                                }
                            } else {
                                if ((4U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state))) {
                                    vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_store = 1U;
                                    if ((0U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_sh))) {
                                        __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out 
                                            = vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1;
                                        __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst 
                                            = vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch;
                                        __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 0x40U;
                                    } else {
                                        if ((4U <= (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_sh))) {
                                            if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_slli) 
                                                 | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sll))) {
                                                __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                    = 
                                                    (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                     << 4U);
                                            } else {
                                                if (
                                                    ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_srli) 
                                                     | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_srl))) {
                                                    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                        = 
                                                        (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                         >> 4U);
                                                } else {
                                                    if (
                                                        ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_srai) 
                                                         | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sra))) {
                                                        __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                            = 
                                                            VL_SHIFTRS_III(32,32,32, vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1, 4U);
                                                    }
                                                }
                                            }
                                            __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_sh 
                                                = (0x1fU 
                                                   & ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_sh) 
                                                      - (IData)(4U)));
                                        } else {
                                            if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_slli) 
                                                 | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sll))) {
                                                __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                    = 
                                                    (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                     << 1U);
                                            } else {
                                                if (
                                                    ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_srli) 
                                                     | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_srl))) {
                                                    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                        = 
                                                        (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                         >> 1U);
                                                } else {
                                                    if (
                                                        ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_srai) 
                                                         | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sra))) {
                                                        __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                            = 
                                                            VL_SHIFTRS_III(32,32,32, vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1, 1U);
                                                    }
                                                }
                                            }
                                            __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_sh 
                                                = (0x1fU 
                                                   & ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_sh) 
                                                      - (IData)(1U)));
                                        }
                                    }
                                } else {
                                    if ((2U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state))) {
                                        if ((1U & (
                                                   (~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch)) 
                                                   | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_done)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_wdata)))) {
                                                __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                    = 
                                                    (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                     + vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_imm);
                                                vlTOPp->tb__DOT__u0__DOT__u0__DOT__set_mem_do_wdata = 1U;
                                                if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sb) {
                                                    vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize = 2U;
                                                } else {
                                                    if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sh) {
                                                        vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize = 1U;
                                                    } else {
                                                        if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sw) {
                                                            vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize = 0U;
                                                        }
                                                    }
                                                }
                                            }
                                            if (((~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch)) 
                                                 & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_done))) {
                                                __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 0x40U;
                                                __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_trigger = 1U;
                                                __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger = 1U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_store = 1U;
                                        if ((1U & (
                                                   (~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch)) 
                                                   | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_done)))) {
                                            if (((~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch)) 
                                                 & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_done))) {
                                                if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_is_lu) {
                                                    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out 
                                                        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_word;
                                                } else {
                                                    if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_is_lh) {
                                                        __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out 
                                                            = 
                                                            VL_EXTENDS_II(32,16, 
                                                                          (0xffffU 
                                                                           & vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_word));
                                                    } else {
                                                        if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_is_lb) {
                                                            __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out 
                                                                = 
                                                                VL_EXTENDS_II(32,8, 
                                                                              (0xffU 
                                                                               & vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_word));
                                                        }
                                                    }
                                                }
                                                __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_trigger = 1U;
                                                __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger = 1U;
                                                __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 0x40U;
                                            }
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rdata)))) {
                                                __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                    = 
                                                    (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                     + vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_imm);
                                                vlTOPp->tb__DOT__u0__DOT__u0__DOT__set_mem_do_rdata = 1U;
                                                if (
                                                    ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lb) 
                                                     | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lbu))) {
                                                    vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize = 2U;
                                                } else {
                                                    if (
                                                        ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lh) 
                                                         | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lhu))) {
                                                        vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize = 1U;
                                                    } else {
                                                        if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lw) {
                                                            vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize = 0U;
                                                        }
                                                    }
                                                }
                                                __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lu 
                                                    = vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_lbu_lhu_lw;
                                                __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lh 
                                                    = vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lh;
                                                __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lb 
                                                    = vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lb;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        __Vdly__tb__DOT__u0__DOT__u0__DOT__count_instr = VL_ULL(0);
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__timer = 0U;
        __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_pc = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_next_pc = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_store = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_stalu = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_branch = 0U;
        __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lu = 0U;
        __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lh = 0U;
        __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lb = 0U;
        __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 0x40U;
    }
    if ((((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_trigger_q) 
          & (~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger_q))) 
         & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_ecall_ebreak))) {
        __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state = 0x80U;
    }
    if ((1U & ((~ (IData)(vlTOPp->resetn)) | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_done)))) {
        __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch = 0U;
        __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rdata = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_wdata = 0U;
    }
    if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__set_mem_do_rinst) {
        __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst = 1U;
    }
    if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__set_mem_do_rdata) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rdata = 1U;
    }
    if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__set_mem_do_wdata) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_wdata = 1U;
    }
    __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_pc = (0xfffffffcU 
                                                 & __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_pc);
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_next_pc 
        = (0xfffffffcU & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_next_pc);
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__current_pc = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__count_cycle 
        = __Vdly__tb__DOT__u0__DOT__u0__DOT__count_cycle;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__count_instr 
        = __Vdly__tb__DOT__u0__DOT__u0__DOT__count_instr;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_sh = __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_sh;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_is_lu 
        = __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lu;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_is_lh 
        = __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lh;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_is_lb 
        = __Vdly__tb__DOT__u0__DOT__u0__DOT__latched_is_lb;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_trigger_q 
        = __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_trigger_q;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch 
        = __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_pc = __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_pc;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_out = __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_out;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state = __Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 = __Vdly__tb__DOT__u0__DOT__u0__DOT__reg_op1;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__do_waitirq = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_out_q = vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_out;
    if ((0U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize))) {
        vlTOPp->tb__DOT__mem_la_wdata = vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2;
    } else {
        if ((1U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize))) {
            vlTOPp->tb__DOT__mem_la_wdata = ((0xffff0000U 
                                              & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2 
                                                 << 0x10U)) 
                                             | (0xffffU 
                                                & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2));
        } else {
            if ((2U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize))) {
                vlTOPp->tb__DOT__mem_la_wdata = ((0xff000000U 
                                                  & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2 
                                                     << 0x18U)) 
                                                 | ((0xff0000U 
                                                     & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2 
                                                        << 0x10U)) 
                                                    | ((0xff00U 
                                                        & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2 
                                                           << 8U)) 
                                                       | (0xffU 
                                                          & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2))));
            }
        }
    }
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger_q 
        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__next_pc = (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_store) 
                                                   & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_branch))
                                                   ? 
                                                  (0xfffffffeU 
                                                   & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_out)
                                                   : vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_next_pc);
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs_write = 0U;
    if ((0x40U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs_write 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_branch) 
               | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_store));
    }
    if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_done))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__compressed_instr = 0U;
    }
    if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_done))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_retirq = 0U;
    }
    if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_done))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_rd 
            = (0x1fU & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle 
                        >> 7U));
    }
    if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_done))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_rs2 
            = (0x1fU & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle 
                        >> 0x14U));
    }
    if ((0U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize))) {
        vlTOPp->tb__DOT__mem_la_wstrb = 0xfU;
    } else {
        if ((1U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize))) {
            vlTOPp->tb__DOT__mem_la_wstrb = ((2U & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1)
                                              ? 0xcU
                                              : 3U);
        } else {
            if ((2U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize))) {
                vlTOPp->tb__DOT__mem_la_wstrb = (0xfU 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1)));
            }
        }
    }
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_ltu = (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                  < vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2);
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_lts = VL_LTS_III(1,32,32, vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1, vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2);
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_eq = (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                 == vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2);
    if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_ecall_ebreak 
            = (((0x73U == (0x7fU & vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)) 
                & (~ (IData)((0U != (0x7ffU & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                               >> 0x15U)))))) 
               & (~ (IData)((0U != (0x1fffU & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                               >> 7U))))));
    }
    if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_rdcycle 
            = (((0x73U == (0x7fU & vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)) 
                & (0xc0002U == (0xfffffU & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                            >> 0xcU)))) 
               | ((0x73U == (0x7fU & vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)) 
                  & (0xc0102U == (0xfffffU & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                              >> 0xcU)))));
    }
    if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_rdcycleh 
            = (((0x73U == (0x7fU & vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)) 
                & (0xc8002U == (0xfffffU & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                            >> 0xcU)))) 
               | ((0x73U == (0x7fU & vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)) 
                  & (0xc8102U == (0xfffffU & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                              >> 0xcU)))));
    }
    if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_rdinstr 
            = ((0x73U == (0x7fU & vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)) 
               & (0xc0202U == (0xfffffU & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                           >> 0xcU))));
    }
    if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_rdinstrh 
            = ((0x73U == (0x7fU & vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)) 
               & (0xc8202U == (0xfffffU & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                           >> 0xcU))));
    }
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_lbu_lhu_lw 
        = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lbu) 
           | ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lhu) 
              | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lw)));
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs_wrdata 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_branch)
                ? (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_pc 
                   + ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_compr)
                       ? 2U : 4U)) : (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_store) 
                                       & (~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_branch)))
                                       ? ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_stalu)
                                           ? vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_out_q
                                           : vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_out)
                                       : 0U));
    }
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_rs = 
        ((0x10U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state))
          ? (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_rs2)
          : (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_rs1));
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_rs))
            ? vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs
           [vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_rs]
            : 0U);
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs_rs2 
        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs_rs1;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_rdcycle) 
           | ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_rdcycleh) 
              | ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_rdinstr) 
                 | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_rdinstrh))));
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_lui_auipc_jal 
        = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lui) 
           | ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_auipc) 
              | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_jal)));
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_lui_auipc_jal_jalr_addi_add_sub 
        = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lui) 
           | ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_auipc) 
              | ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_jal) 
                 | ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_jalr) 
                    | ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_addi) 
                       | ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_add) 
                          | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sub)))))));
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_slti_blt_slt 
        = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_slti) 
           | ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_blt) 
              | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_slt)));
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_sltiu_bltu_sltu 
        = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sltiu) 
           | ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_bltu) 
              | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sltu)));
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_compare = 
        ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
         | ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_slti) 
            | ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_slt) 
               | ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sltiu) 
                  | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sltu)))));
    if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_beq 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_bne 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (1U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_blt 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (4U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_bge 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (5U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_bltu 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (6U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_bgeu 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (7U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lb 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lh 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_lb_lh_lw_lbu_lhu) 
               & (1U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lw 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_lb_lh_lw_lbu_lhu) 
               & (2U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lbu 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_lb_lh_lw_lbu_lhu) 
               & (4U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lhu 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_lb_lh_lw_lbu_lhu) 
               & (5U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sb 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_sb_sh_sw) 
               & (0U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sh 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_sb_sh_sw) 
               & (1U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sw 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_sb_sh_sw) 
               & (2U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_addi 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm) 
               & (0U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_slti 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm) 
               & (2U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sltiu 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm) 
               & (3U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_xori 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm) 
               & (4U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_ori 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm) 
               & (6U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_andi 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm) 
               & (7U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_slli 
            = (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm) 
                & (1U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_srli 
            = (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm) 
                & (5U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_srai 
            = (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm) 
                & (5U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0x20U 
                                               == (0x7fU 
                                                   & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                      >> 0x19U))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_slli_srli_srai 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm) 
               & (((1U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                 >> 0xcU))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                   >> 0x19U)))) 
                  | (((5U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                    >> 0xcU))) & (0U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                      >> 0x19U)))) 
                     | ((5U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                      >> 0xcU))) & 
                        (0x20U == (0x7fU & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                            >> 0x19U)))))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_jalr) 
               | ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm) 
                  & ((0U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                   >> 0xcU))) | ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                      >> 0xcU))) 
                                                 | ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                         >> 0xcU))) 
                                                    | ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                            >> 0xcU))) 
                                                       | ((6U 
                                                           == 
                                                           (7U 
                                                            & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                               >> 0xcU))) 
                                                          | (7U 
                                                             == 
                                                             (7U 
                                                              & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                                 >> 0xcU))))))))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_compare = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_imm 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_jal)
                ? vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j
                : (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lui) 
                    | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_auipc))
                    ? (0xfffff000U & vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q)
                    : (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_jalr) 
                        | ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_lb_lh_lw_lbu_lhu) 
                           | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm)))
                        ? VL_EXTENDS_II(32,12, (0xfffU 
                                                & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                   >> 0x14U)))
                        : ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu)
                            ? VL_EXTENDS_II(32,13, 
                                            ((0x1000U 
                                              & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                 >> 0x13U)) 
                                             | ((0x800U 
                                                 & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                         >> 7U))))))
                            : ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_sb_sh_sw)
                                ? VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                       >> 7U))))
                                : 0U)))));
    }
    if ((1U & (~ (IData)(vlTOPp->resetn)))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_compare = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_beq = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_bne = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_blt = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_bge = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_bltu = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_bgeu = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_addi = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_slti = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sltiu = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_xori = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_ori = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_andi = 0U;
    }
    vlTOPp->tb__DOT__sw_mem_addr = ((IData)(vlTOPp->tb__DOT__u0__DOT__mem_valid) 
                                    & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sw));
    if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_done))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_auipc 
            = (0x17U == (0x7fU & vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle));
    }
    if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_done))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm 
            = (0x13U == (0x7fU & vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle));
    }
    if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_done))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lui 
            = (0x37U == (0x7fU & vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle));
    }
    if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_done))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_jal 
            = (0x6fU == (0x7fU & vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle));
    }
    if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_done))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_jalr 
            = ((0x67U == (0x7fU & vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle)) 
               & (0U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle 
                               >> 0xcU))));
    }
    if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_done))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_lb_lh_lw_lbu_lhu 
            = (3U == (0x7fU & vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle));
    }
    if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_done))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_sb_sh_sw 
            = (0x23U == (0x7fU & vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle));
    }
    if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_done))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j 
            = ((0xfffffU & vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j) 
               | (0xfff00000U & VL_EXTENDS_II(32,21, 
                                              (0x1ffffeU 
                                               & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle 
                                                  >> 0xbU)))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j 
            = ((0xfffff801U & vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j) 
               | (0x7feU & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                  & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle 
                                                     >> 0xbU))) 
                            >> 9U)));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j 
            = ((0xfffff7ffU & vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j) 
               | (0x800U & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                  & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle 
                                                     >> 0xbU))) 
                            << 2U)));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j 
            = ((0xfff00fffU & vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j) 
               | (0xff000U & (VL_EXTENDS_II(32,21, 
                                            (0x1ffffeU 
                                             & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle 
                                                >> 0xbU))) 
                              << 0xbU)));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j 
            = ((0xfffffffeU & vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j) 
               | (1U & VL_EXTENDS_II(1,21, (0x1ffffeU 
                                            & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle 
                                               >> 0xbU)))));
    }
    if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_done))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu 
            = (0x63U == (0x7fU & vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle));
    }
    if ((1U & (~ (IData)(vlTOPp->resetn)))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
    }
    if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_add 
            = (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg) 
                & (0U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sub 
            = (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg) 
                & (0U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0x20U 
                                               == (0x7fU 
                                                   & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                      >> 0x19U))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sll 
            = (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg) 
                & (1U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_slt 
            = (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg) 
                & (2U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sltu 
            = (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg) 
                & (3U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_xor 
            = (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg) 
                & (4U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_srl 
            = (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg) 
                & (5U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sra 
            = (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg) 
                & (5U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0x20U 
                                               == (0x7fU 
                                                   & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                      >> 0x19U))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_or 
            = (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg) 
                & (6U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_and 
            = (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg) 
                & (7U == (7U & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
                                                   >> 0x19U))));
    }
    if ((1U & (~ (IData)(vlTOPp->resetn)))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_add = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sub = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sll = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_slt = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sltu = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_xor = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_srl = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sra = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_or = 0U;
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_and = 0U;
    }
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger 
        = __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_trigger 
        = __Vdly__tb__DOT__u0__DOT__u0__DOT__decoder_trigger;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_out_0 = 
        (1U & ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_beq)
                ? (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_eq)
                : ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_bne)
                    ? (~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_eq))
                    : ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_bge)
                        ? (~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_lts))
                        : ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_bgeu)
                            ? (~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_ltu))
                            : ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_slti_blt_slt)
                                ? (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_lts)
                                : ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_sltiu_bltu_sltu) 
                                   & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_ltu))))))));
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_out = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_lui_auipc_jal_jalr_addi_add_sub)
                                                   ? 
                                                  ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sub)
                                                    ? 
                                                   (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                    - vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2)
                                                    : 
                                                   (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                    + vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2))
                                                   : 
                                                  ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_compare)
                                                    ? (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_out_0)
                                                    : 
                                                   (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_xori) 
                                                     | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_xor))
                                                     ? 
                                                    (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                     ^ vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2)
                                                     : 
                                                    (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_ori) 
                                                      | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_or))
                                                      ? 
                                                     (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                      | vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2)
                                                      : 
                                                     (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_andi) 
                                                       | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_and))
                                                       ? 
                                                      (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                       & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2)
                                                       : 
                                                      (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sll) 
                                                        | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_slli))
                                                        ? 
                                                       (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                        << 
                                                        (0x1fU 
                                                         & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2))
                                                        : 
                                                       (((((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_srl) 
                                                           | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_srli)) 
                                                          | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sra)) 
                                                         | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_srai))
                                                         ? (IData)(
                                                                   (VL_ULL(0x1ffffffff) 
                                                                    & VL_SHIFTRS_QQI(33,33,5, 
                                                                                (((QData)((IData)(
                                                                                (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sra) 
                                                                                | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_srai)) 
                                                                                & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                                                >> 0x1fU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1))), 
                                                                                (0x1fU 
                                                                                & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2))))
                                                         : 0U)))))));
    if (vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_xfer) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q 
            = vlTOPp->tb__DOT__mem_rdata;
    }
    if (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_done))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg 
            = (0x33U == (0x7fU & vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle));
    }
    vlTOPp->tb__DOT__mem_rdata = vlTOPp->tb__DOT__mem
        [(0x3fU & (vlTOPp->tb__DOT__u0__DOT__mem_addr 
                   >> 2U))];
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_xfer = ((IData)(vlTOPp->tb__DOT__u0__DOT__mem_valid) 
                                                   & (IData)(vlTOPp->tb__DOT__mem_ready));
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst 
        = __Vdly__tb__DOT__u0__DOT__u0__DOT__mem_do_rinst;
    if ((0U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_word 
            = vlTOPp->tb__DOT__mem_rdata;
    } else {
        if ((1U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize))) {
            if ((2U & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1)) {
                if ((2U & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1)) {
                    vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_word 
                        = (0xffffU & (vlTOPp->tb__DOT__mem_rdata 
                                      >> 0x10U));
                }
            } else {
                vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_word 
                    = (0xffffU & vlTOPp->tb__DOT__mem_rdata);
            }
        } else {
            if ((2U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize))) {
                vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_word 
                    = ((2U & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1)
                        ? ((1U & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1)
                            ? (0xffU & (vlTOPp->tb__DOT__mem_rdata 
                                        >> 0x18U)) : 
                           (0xffU & (vlTOPp->tb__DOT__mem_rdata 
                                     >> 0x10U))) : 
                       ((1U & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1)
                         ? (0xffU & (vlTOPp->tb__DOT__mem_rdata 
                                     >> 8U)) : (0xffU 
                                                & vlTOPp->tb__DOT__mem_rdata)));
            }
        }
    }
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_xfer)
            ? vlTOPp->tb__DOT__mem_rdata : vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q);
}

VL_INLINE_OPT void Vtb::_sequent__TOP__2(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb::_sequent__TOP__2\n"); );
    Vtb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->tb__DOT__last_cycle_display = vlTOPp->tb__DOT__display;
    vlTOPp->tb__DOT__is_sw = vlTOPp->tb__DOT__is_sw_nxt;
}

VL_INLINE_OPT void Vtb::_sequent__TOP__3(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb::_sequent__TOP__3\n"); );
    Vtb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (VL_UNLIKELY((0x401U == vlTOPp->tb__DOT__instr_cnt))) {
        VL_FINISH_MT("tb_vlg.v", 83, "");
    }
    if (vlTOPp->tb__DOT__display) {
        vlTOPp->tb__DOT__ssw_printed = 0U;
    } else {
        if (((IData)(vlTOPp->tb__DOT__sw_mem_addr) 
             & (~ (IData)(vlTOPp->tb__DOT__ssw_printed)))) {
            vlTOPp->tb__DOT__ssw_printed = 1U;
        }
    }
    if (VL_UNLIKELY(vlTOPp->tb__DOT__display)) {
        VL_WRITEF("\n\n");
        VL_WRITEF("// display %2#\n",6,(0x3fU & (vlTOPp->tb__DOT__u0__DOT__mem_addr 
                                                 >> 2U)));
        if (vlTOPp->tb__DOT__is_sw) {
            VL_WRITEF("_u0_mem_addr_sw: %10#\n",32,
                      vlTOPp->tb__DOT__u0__DOT__mem_addr);
            VL_WRITEF("_fifo_addr_r0: %10#\n",32,vlTOPp->tb__DOT__u0__DOT__fifo_addr__DOT__r1);
        } else {
            VL_WRITEF("_u0_mem_addr: %10#\n",32,vlTOPp->tb__DOT__u0__DOT__mem_addr);
            VL_WRITEF("_fifo_addr_r0: %10#\n",32,vlTOPp->tb__DOT__u0__DOT__fifo_addr__DOT__r0);
        }
        VL_WRITEF("_fifo_valid_r0: %1#\n",1,vlTOPp->tb__DOT__u0__DOT__fifo_valid__DOT__r0);
        VL_WRITEF("_fifo_wstrb_r0: %2#\n",4,vlTOPp->tb__DOT__u0__DOT__fifo_wstrb__DOT__r0);
        VL_WRITEF("_fifo_wdata_r0: %10#\n",32,vlTOPp->tb__DOT__u0__DOT__fifo_wdata__DOT__r0);
        VL_WRITEF("_fifo_instr_r0: %1#\n",1,vlTOPp->tb__DOT__u0__DOT__fifo_instr__DOT__r0);
        VL_WRITEF("_u0_reg_next_pc: %10#\n",32,vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_next_pc);
    } else {
        if (VL_UNLIKELY(vlTOPp->tb__DOT__last_cycle_display)) {
            VL_WRITEF("_u0_cpuregs_1_: %10#\n",32,vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs
                      [1U]);
        } else {
            if (VL_UNLIKELY(((IData)(vlTOPp->tb__DOT__sw_mem_addr) 
                             & (~ (IData)(vlTOPp->tb__DOT__ssw_printed))))) {
                VL_WRITEF("\n\n// ssw\n");
                VL_WRITEF("_u0_mem_addr: %10#\n",32,
                          vlTOPp->tb__DOT__u0__DOT__mem_addr);
                VL_WRITEF("_u0_mem_valid: %1#\n",1,
                          vlTOPp->tb__DOT__u0__DOT__mem_valid);
            }
        }
    }
    if (vlTOPp->tb__DOT__display) {
        vlTOPp->tb__DOT__instr_cnt = ((IData)(1U) + vlTOPp->tb__DOT__instr_cnt);
    }
}

void Vtb::_initial__TOP__4(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb::_initial__TOP__4\n"); );
    Vtb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->tb__DOT__ssw_printed = 0U;
    vlTOPp->tb__DOT__is_sw = 0U;
    vlTOPp->tb__DOT__instr_cnt = 0U;
    VL_READMEM_N(true, 32, 64, 0, std::string("mem.txt")
                 , vlTOPp->tb__DOT__mem, 0, ~VL_ULL(0));
    vlTOPp->tb__DOT__u0__DOT__fifo_addr__DOT__r0 = 0U;
    vlTOPp->tb__DOT__u0__DOT__fifo_addr__DOT__r1 = 0U;
    vlTOPp->tb__DOT__u0__DOT__fifo_instr__DOT__r0 = 0U;
    vlTOPp->tb__DOT__u0__DOT__fifo_valid__DOT__r0 = 0U;
    vlTOPp->tb__DOT__u0__DOT__fifo_wdata__DOT__r0 = 0U;
    vlTOPp->tb__DOT__u0__DOT__fifo_wstrb__DOT__r0 = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_out_q = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__compressed_instr = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__count_cycle = VL_ULL(0);
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__count_instr = VL_ULL(0);
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[0U] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[0xaU] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[0xbU] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[0xcU] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[0xdU] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[0xeU] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[0xfU] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x10U] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x11U] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x12U] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x13U] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[1U] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x14U] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x15U] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x16U] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x17U] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x18U] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x19U] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x1aU] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x1bU] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x1cU] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x1dU] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[2U] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x1eU] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x1fU] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[3U] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[4U] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[5U] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[6U] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[7U] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[8U] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs[9U] = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_imm = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_rd = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_rs1 = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_rs2 = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger_q = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_trigger = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_trigger_q = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_add = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_addi = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_and = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_andi = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_auipc = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_beq = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_bge = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_bgeu = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_blt = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_bltu = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_bne = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_ecall_ebreak = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_jal = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_jalr = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lb = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lbu = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lh = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lhu = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lui = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_lw = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_or = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_ori = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_rdcycle = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_rdcycleh = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_rdinstr = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_rdinstrh = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_retirq = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sb = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sh = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sll = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_slli = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_slt = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_slti = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sltiu = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sltu = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sra = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_srai = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_srl = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_srli = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sub = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sw = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_xor = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_xori = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_compare = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_lb_lh_lw_lbu_lhu = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_lbu_lhu_lw = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_lui_auipc_jal = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_sb_sh_sw = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_slli_srli_srai = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_slti_blt_slt = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_sltiu_bltu_sltu = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_branch = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_compr = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_is_lb = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_is_lh = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_is_lu = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_rd = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_stalu = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_store = 0U;
    vlTOPp->tb__DOT__u0__DOT__mem_addr = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rdata = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_wdata = 0U;
    vlTOPp->tb__DOT__u0__DOT__mem_instr = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_state = 0U;
    vlTOPp->tb__DOT__u0__DOT__mem_valid = 0U;
    vlTOPp->tb__DOT__u0__DOT__mem_wdata = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize = 0U;
    vlTOPp->tb__DOT__u0__DOT__mem_wstrb = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_next_pc = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2 = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_out = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_pc = 0U;
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_sh = 0U;
    vlTOPp->tb__DOT__trap = 0U;
    vlTOPp->tb__DOT__mem_ready = 1U;
}

VL_INLINE_OPT void Vtb::_combo__TOP__5(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb::_combo__TOP__5\n"); );
    Vtb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->tb__DOT__mem_la_write = (((IData)(vlTOPp->resetn) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_state))))) 
                                     & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_wdata));
    vlTOPp->tb__DOT__mem_la_read = ((IData)(vlTOPp->resetn) 
                                    & ((~ (IData)((0U 
                                                   != (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_state)))) 
                                       & (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
                                           | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch)) 
                                          | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rdata))));
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_done = ((IData)(vlTOPp->resetn) 
                                                   & ((((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_xfer) 
                                                        & (0U 
                                                           != (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_state))) 
                                                       & (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
                                                           | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rdata)) 
                                                          | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_wdata))) 
                                                      | ((3U 
                                                          == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_state)) 
                                                         & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst))));
}

VL_INLINE_OPT void Vtb::_sequent__TOP__6(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb::_sequent__TOP__6\n"); );
    Vtb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->tb__DOT__display = ((0x40U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state)) 
                                & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_trigger));
}

VL_INLINE_OPT void Vtb::_multiclk__TOP__7(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb::_multiclk__TOP__7\n"); );
    Vtb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->tb__DOT__is_sw_nxt = ((2U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state))
                                   ? 1U : ((0x40U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state))
                                            ? 0U : 
                                           (1U & (IData)(vlTOPp->tb__DOT__is_sw))));
}

void Vtb::_settle__TOP__8(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb::_settle__TOP__8\n"); );
    Vtb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_rdcycle) 
           | ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_rdcycleh) 
              | ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_rdinstr) 
                 | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_rdinstrh))));
    vlTOPp->tb__DOT__mem_la_write = (((IData)(vlTOPp->resetn) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_state))))) 
                                     & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_wdata));
    vlTOPp->tb__DOT__mem_la_read = ((IData)(vlTOPp->resetn) 
                                    & ((~ (IData)((0U 
                                                   != (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_state)))) 
                                       & (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
                                           | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch)) 
                                          | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rdata))));
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__next_pc = (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_store) 
                                                   & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_branch))
                                                   ? 
                                                  (0xfffffffeU 
                                                   & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_out)
                                                   : vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_next_pc);
    vlTOPp->tb__DOT__mem_rdata = vlTOPp->tb__DOT__mem
        [(0x3fU & (vlTOPp->tb__DOT__u0__DOT__mem_addr 
                   >> 2U))];
    vlTOPp->tb__DOT__sw_mem_addr = ((IData)(vlTOPp->tb__DOT__u0__DOT__mem_valid) 
                                    & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sw));
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_xfer = ((IData)(vlTOPp->tb__DOT__u0__DOT__mem_valid) 
                                                   & (IData)(vlTOPp->tb__DOT__mem_ready));
    vlTOPp->tb__DOT__is_sw_nxt = ((2U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state))
                                   ? 1U : ((0x40U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state))
                                            ? 0U : 
                                           (1U & (IData)(vlTOPp->tb__DOT__is_sw))));
    vlTOPp->tb__DOT__display = ((0x40U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state)) 
                                & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoder_trigger));
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs_write = 0U;
    if ((0x40U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs_write 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_branch) 
               | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_store));
    }
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs_wrdata 
            = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_branch)
                ? (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_pc 
                   + ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_compr)
                       ? 2U : 4U)) : (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_store) 
                                       & (~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_branch)))
                                       ? ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__latched_stalu)
                                           ? vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_out_q
                                           : vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_out)
                                       : 0U));
    }
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_rs = 
        ((0x10U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpu_state))
          ? (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_rs2)
          : (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_rs1));
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_rs))
            ? vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs
           [vlTOPp->tb__DOT__u0__DOT__u0__DOT__decoded_rs]
            : 0U);
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs_rs2 
        = vlTOPp->tb__DOT__u0__DOT__u0__DOT__cpuregs_rs1;
    if ((0U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize))) {
        vlTOPp->tb__DOT__mem_la_wdata = vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2;
    } else {
        if ((1U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize))) {
            vlTOPp->tb__DOT__mem_la_wdata = ((0xffff0000U 
                                              & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2 
                                                 << 0x10U)) 
                                             | (0xffffU 
                                                & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2));
        } else {
            if ((2U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize))) {
                vlTOPp->tb__DOT__mem_la_wdata = ((0xff000000U 
                                                  & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2 
                                                     << 0x18U)) 
                                                 | ((0xff0000U 
                                                     & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2 
                                                        << 0x10U)) 
                                                    | ((0xff00U 
                                                        & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2 
                                                           << 8U)) 
                                                       | (0xffU 
                                                          & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2))));
            }
        }
    }
    if ((0U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize))) {
        vlTOPp->tb__DOT__mem_la_wstrb = 0xfU;
    } else {
        if ((1U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize))) {
            vlTOPp->tb__DOT__mem_la_wstrb = ((2U & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1)
                                              ? 0xcU
                                              : 3U);
        } else {
            if ((2U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize))) {
                vlTOPp->tb__DOT__mem_la_wstrb = (0xfU 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1)));
            }
        }
    }
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_ltu = (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                  < vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2);
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_lts = VL_LTS_III(1,32,32, vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1, vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2);
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_eq = (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                 == vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2);
    if ((0U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize))) {
        vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_word 
            = vlTOPp->tb__DOT__mem_rdata;
    } else {
        if ((1U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize))) {
            if ((2U & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1)) {
                if ((2U & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1)) {
                    vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_word 
                        = (0xffffU & (vlTOPp->tb__DOT__mem_rdata 
                                      >> 0x10U));
                }
            } else {
                vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_word 
                    = (0xffffU & vlTOPp->tb__DOT__mem_rdata);
            }
        } else {
            if ((2U == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_wordsize))) {
                vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_word 
                    = ((2U & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1)
                        ? ((1U & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1)
                            ? (0xffU & (vlTOPp->tb__DOT__mem_rdata 
                                        >> 0x18U)) : 
                           (0xffU & (vlTOPp->tb__DOT__mem_rdata 
                                     >> 0x10U))) : 
                       ((1U & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1)
                         ? (0xffU & (vlTOPp->tb__DOT__mem_rdata 
                                     >> 8U)) : (0xffU 
                                                & vlTOPp->tb__DOT__mem_rdata)));
            }
        }
    }
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_xfer)
            ? vlTOPp->tb__DOT__mem_rdata : vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q);
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_done = ((IData)(vlTOPp->resetn) 
                                                   & ((((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_xfer) 
                                                        & (0U 
                                                           != (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_state))) 
                                                       & (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst) 
                                                           | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rdata)) 
                                                          | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_wdata))) 
                                                      | ((3U 
                                                          == (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_state)) 
                                                         & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst))));
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_out_0 = 
        (1U & ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_beq)
                ? (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_eq)
                : ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_bne)
                    ? (~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_eq))
                    : ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_bge)
                        ? (~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_lts))
                        : ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_bgeu)
                            ? (~ (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_ltu))
                            : ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_slti_blt_slt)
                                ? (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_lts)
                                : ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_sltiu_bltu_sltu) 
                                   & (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_ltu))))))));
    vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_out = ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_lui_auipc_jal_jalr_addi_add_sub)
                                                   ? 
                                                  ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sub)
                                                    ? 
                                                   (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                    - vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2)
                                                    : 
                                                   (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                    + vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2))
                                                   : 
                                                  ((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__is_compare)
                                                    ? (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__alu_out_0)
                                                    : 
                                                   (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_xori) 
                                                     | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_xor))
                                                     ? 
                                                    (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                     ^ vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2)
                                                     : 
                                                    (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_ori) 
                                                      | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_or))
                                                      ? 
                                                     (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                      | vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2)
                                                      : 
                                                     (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_andi) 
                                                       | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_and))
                                                       ? 
                                                      (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                       & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2)
                                                       : 
                                                      (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sll) 
                                                        | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_slli))
                                                        ? 
                                                       (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                        << 
                                                        (0x1fU 
                                                         & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2))
                                                        : 
                                                       (((((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_srl) 
                                                           | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_srli)) 
                                                          | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sra)) 
                                                         | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_srai))
                                                         ? (IData)(
                                                                   (VL_ULL(0x1ffffffff) 
                                                                    & VL_SHIFTRS_QQI(33,33,5, 
                                                                                (((QData)((IData)(
                                                                                (((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_sra) 
                                                                                | (IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__instr_srai)) 
                                                                                & (vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                                                                >> 0x1fU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op1))), 
                                                                                (0x1fU 
                                                                                & vlTOPp->tb__DOT__u0__DOT__u0__DOT__reg_op2))))
                                                         : 0U)))))));
}

void Vtb::_eval(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb::_eval\n"); );
    Vtb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & ((~ (IData)(vlTOPp->__Vclklast__TOP__clk)) 
                                 | (~ (IData)(vlTOPp->__Vclklast__TOP__clk))))) {
        vlTOPp->_multiclk__TOP__7(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vtb::_eval_initial(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb::_eval_initial\n"); );
    Vtb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->_initial__TOP__4(vlSymsp);
}

void Vtb::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb::final\n"); );
    // Variables
    Vtb__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtb::_eval_settle(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb::_eval_settle\n"); );
    Vtb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__8(vlSymsp);
}

VL_INLINE_OPT QData Vtb::_change_request(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb::_change_request\n"); );
    Vtb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtb::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((resetn & 0xfeU))) {
        Verilated::overWidthError("resetn");}
}
#endif  // VL_DEBUG

void Vtb::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    resetn = VL_RAND_RESET_I(1);
    tb__DOT__mem_rdata = VL_RAND_RESET_I(32);
    tb__DOT__mem_ready = VL_RAND_RESET_I(1);
    tb__DOT__mem_la_read = VL_RAND_RESET_I(1);
    tb__DOT__mem_la_wdata = VL_RAND_RESET_I(32);
    tb__DOT__mem_la_write = VL_RAND_RESET_I(1);
    tb__DOT__mem_la_wstrb = VL_RAND_RESET_I(4);
    tb__DOT__trap = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
            tb__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    tb__DOT__is_sw = VL_RAND_RESET_I(1);
    tb__DOT__is_sw_nxt = VL_RAND_RESET_I(1);
    tb__DOT__instr_cnt = VL_RAND_RESET_I(32);
    tb__DOT__display = VL_RAND_RESET_I(1);
    tb__DOT__last_cycle_display = VL_RAND_RESET_I(1);
    tb__DOT__sw_mem_addr = VL_RAND_RESET_I(1);
    tb__DOT__ssw_printed = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__mem_valid = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__mem_instr = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__mem_addr = VL_RAND_RESET_I(32);
    tb__DOT__u0__DOT__mem_wdata = VL_RAND_RESET_I(32);
    tb__DOT__u0__DOT__mem_wstrb = VL_RAND_RESET_I(4);
    tb__DOT__u0__DOT__u0__DOT__count_cycle = VL_RAND_RESET_Q(64);
    tb__DOT__u0__DOT__u0__DOT__count_instr = VL_RAND_RESET_Q(64);
    tb__DOT__u0__DOT__u0__DOT__reg_pc = VL_RAND_RESET_I(32);
    tb__DOT__u0__DOT__u0__DOT__reg_next_pc = VL_RAND_RESET_I(32);
    tb__DOT__u0__DOT__u0__DOT__reg_op1 = VL_RAND_RESET_I(32);
    tb__DOT__u0__DOT__u0__DOT__reg_op2 = VL_RAND_RESET_I(32);
    tb__DOT__u0__DOT__u0__DOT__reg_out = VL_RAND_RESET_I(32);
    tb__DOT__u0__DOT__u0__DOT__reg_sh = VL_RAND_RESET_I(5);
    tb__DOT__u0__DOT__u0__DOT__next_pc = VL_RAND_RESET_I(32);
    tb__DOT__u0__DOT__u0__DOT__timer = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            tb__DOT__u0__DOT__u0__DOT__cpuregs[__Vi0] = VL_RAND_RESET_I(32);
    }}
    tb__DOT__u0__DOT__u0__DOT__mem_state = VL_RAND_RESET_I(2);
    tb__DOT__u0__DOT__u0__DOT__mem_wordsize = VL_RAND_RESET_I(2);
    tb__DOT__u0__DOT__u0__DOT__mem_rdata_word = VL_RAND_RESET_I(32);
    tb__DOT__u0__DOT__u0__DOT__mem_rdata_q = VL_RAND_RESET_I(32);
    tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__mem_do_rinst = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__mem_do_rdata = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__mem_do_wdata = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__mem_xfer = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle = VL_RAND_RESET_I(32);
    tb__DOT__u0__DOT__u0__DOT__mem_done = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_lui = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_auipc = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_jal = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_jalr = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_beq = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_bne = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_blt = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_bge = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_bltu = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_bgeu = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_lb = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_lh = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_lw = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_lbu = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_lhu = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_sb = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_sh = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_sw = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_addi = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_slti = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_sltiu = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_xori = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_ori = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_andi = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_slli = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_srli = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_srai = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_add = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_sub = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_sll = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_slt = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_sltu = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_xor = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_srl = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_sra = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_or = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_and = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_rdcycle = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_rdcycleh = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_rdinstr = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_rdinstrh = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_ecall_ebreak = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__instr_retirq = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__decoded_rd = VL_RAND_RESET_I(5);
    tb__DOT__u0__DOT__u0__DOT__decoded_rs1 = VL_RAND_RESET_I(5);
    tb__DOT__u0__DOT__u0__DOT__decoded_rs2 = VL_RAND_RESET_I(5);
    tb__DOT__u0__DOT__u0__DOT__decoded_imm = VL_RAND_RESET_I(32);
    tb__DOT__u0__DOT__u0__DOT__decoded_imm_j = VL_RAND_RESET_I(32);
    tb__DOT__u0__DOT__u0__DOT__decoder_trigger = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__decoder_trigger_q = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger_q = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__compressed_instr = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__is_lui_auipc_jal = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__is_lb_lh_lw_lbu_lhu = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__is_slli_srli_srai = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__is_sb_sh_sw = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__is_lui_auipc_jal_jalr_addi_add_sub = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__is_slti_blt_slt = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__is_sltiu_bltu_sltu = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__is_lbu_lhu_lw = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__is_compare = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__cpu_state = VL_RAND_RESET_I(8);
    tb__DOT__u0__DOT__u0__DOT__set_mem_do_rinst = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__set_mem_do_rdata = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__set_mem_do_wdata = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__latched_store = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__latched_stalu = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__latched_branch = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__latched_compr = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__latched_is_lu = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__latched_is_lh = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__latched_is_lb = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__latched_rd = VL_RAND_RESET_I(5);
    tb__DOT__u0__DOT__u0__DOT__current_pc = VL_RAND_RESET_I(32);
    tb__DOT__u0__DOT__u0__DOT__do_waitirq = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__alu_out = VL_RAND_RESET_I(32);
    tb__DOT__u0__DOT__u0__DOT__alu_out_q = VL_RAND_RESET_I(32);
    tb__DOT__u0__DOT__u0__DOT__alu_out_0 = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__alu_eq = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__alu_ltu = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__alu_lts = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__cpuregs_write = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__u0__DOT__cpuregs_wrdata = VL_RAND_RESET_I(32);
    tb__DOT__u0__DOT__u0__DOT__cpuregs_rs1 = VL_RAND_RESET_I(32);
    tb__DOT__u0__DOT__u0__DOT__cpuregs_rs2 = VL_RAND_RESET_I(32);
    tb__DOT__u0__DOT__u0__DOT__decoded_rs = VL_RAND_RESET_I(5);
    tb__DOT__u0__DOT__fifo_valid__DOT__r0 = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__fifo_instr__DOT__r0 = VL_RAND_RESET_I(1);
    tb__DOT__u0__DOT__fifo_addr__DOT__r0 = VL_RAND_RESET_I(32);
    tb__DOT__u0__DOT__fifo_addr__DOT__r1 = VL_RAND_RESET_I(32);
    tb__DOT__u0__DOT__fifo_wdata__DOT__r0 = VL_RAND_RESET_I(32);
    tb__DOT__u0__DOT__fifo_wstrb__DOT__r0 = VL_RAND_RESET_I(4);
}
