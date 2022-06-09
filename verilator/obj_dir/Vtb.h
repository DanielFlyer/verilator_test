// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTB_H_
#define _VTB_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtb__Syms;

//----------

VL_MODULE(Vtb) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(resetn,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb__DOT__mem_ready;
        CData/*0:0*/ tb__DOT__mem_la_read;
        CData/*0:0*/ tb__DOT__mem_la_write;
        CData/*3:0*/ tb__DOT__mem_la_wstrb;
        CData/*0:0*/ tb__DOT__trap;
        CData/*0:0*/ tb__DOT__is_sw;
        CData/*0:0*/ tb__DOT__is_sw_nxt;
        CData/*0:0*/ tb__DOT__display;
        CData/*0:0*/ tb__DOT__last_cycle_display;
        CData/*0:0*/ tb__DOT__sw_mem_addr;
        CData/*0:0*/ tb__DOT__ssw_printed;
        CData/*0:0*/ tb__DOT__u0__DOT__mem_valid;
        CData/*0:0*/ tb__DOT__u0__DOT__mem_instr;
        CData/*3:0*/ tb__DOT__u0__DOT__mem_wstrb;
        CData/*4:0*/ tb__DOT__u0__DOT__u0__DOT__reg_sh;
        CData/*1:0*/ tb__DOT__u0__DOT__u0__DOT__mem_state;
        CData/*1:0*/ tb__DOT__u0__DOT__u0__DOT__mem_wordsize;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__mem_do_rinst;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__mem_do_rdata;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__mem_do_wdata;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__mem_xfer;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__mem_done;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_lui;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_auipc;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_jal;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_jalr;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_beq;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_bne;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_blt;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_bge;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_bltu;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_bgeu;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_lb;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_lh;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_lw;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_lbu;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_lhu;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_sb;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_sh;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_sw;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_addi;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_slti;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_sltiu;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_xori;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_ori;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_andi;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_slli;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_srli;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_srai;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_add;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_sub;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_sll;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_slt;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_sltu;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_xor;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_srl;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_sra;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_or;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_and;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_rdcycle;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_rdcycleh;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_rdinstr;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_rdinstrh;
    };
    struct {
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_ecall_ebreak;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_retirq;
        CData/*4:0*/ tb__DOT__u0__DOT__u0__DOT__decoded_rd;
        CData/*4:0*/ tb__DOT__u0__DOT__u0__DOT__decoded_rs1;
        CData/*4:0*/ tb__DOT__u0__DOT__u0__DOT__decoded_rs2;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__decoder_trigger;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__decoder_trigger_q;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger_q;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__compressed_instr;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__is_lui_auipc_jal;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__is_lb_lh_lw_lbu_lhu;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__is_slli_srli_srai;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__is_sb_sh_sw;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__is_lui_auipc_jal_jalr_addi_add_sub;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__is_slti_blt_slt;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__is_sltiu_bltu_sltu;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__is_lbu_lhu_lw;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__is_compare;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh;
        CData/*7:0*/ tb__DOT__u0__DOT__u0__DOT__cpu_state;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__set_mem_do_rinst;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__set_mem_do_rdata;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__set_mem_do_wdata;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__latched_store;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__latched_stalu;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__latched_branch;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__latched_compr;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__latched_is_lu;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__latched_is_lh;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__latched_is_lb;
        CData/*4:0*/ tb__DOT__u0__DOT__u0__DOT__latched_rd;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__do_waitirq;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__alu_out_0;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__alu_eq;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__alu_ltu;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__alu_lts;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__cpuregs_write;
        CData/*4:0*/ tb__DOT__u0__DOT__u0__DOT__decoded_rs;
        CData/*0:0*/ tb__DOT__u0__DOT__fifo_valid__DOT__r0;
        CData/*0:0*/ tb__DOT__u0__DOT__fifo_instr__DOT__r0;
        CData/*3:0*/ tb__DOT__u0__DOT__fifo_wstrb__DOT__r0;
        IData/*31:0*/ tb__DOT__mem_rdata;
        IData/*31:0*/ tb__DOT__mem_la_wdata;
        IData/*31:0*/ tb__DOT__instr_cnt;
        IData/*31:0*/ tb__DOT__u0__DOT__mem_addr;
        IData/*31:0*/ tb__DOT__u0__DOT__mem_wdata;
        IData/*31:0*/ tb__DOT__u0__DOT__u0__DOT__reg_pc;
        IData/*31:0*/ tb__DOT__u0__DOT__u0__DOT__reg_next_pc;
        IData/*31:0*/ tb__DOT__u0__DOT__u0__DOT__reg_op1;
        IData/*31:0*/ tb__DOT__u0__DOT__u0__DOT__reg_op2;
        IData/*31:0*/ tb__DOT__u0__DOT__u0__DOT__reg_out;
        IData/*31:0*/ tb__DOT__u0__DOT__u0__DOT__next_pc;
        IData/*31:0*/ tb__DOT__u0__DOT__u0__DOT__timer;
        IData/*31:0*/ tb__DOT__u0__DOT__u0__DOT__mem_rdata_word;
        IData/*31:0*/ tb__DOT__u0__DOT__u0__DOT__mem_rdata_q;
        IData/*31:0*/ tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle;
        IData/*31:0*/ tb__DOT__u0__DOT__u0__DOT__decoded_imm;
        IData/*31:0*/ tb__DOT__u0__DOT__u0__DOT__decoded_imm_j;
        IData/*31:0*/ tb__DOT__u0__DOT__u0__DOT__current_pc;
    };
    struct {
        IData/*31:0*/ tb__DOT__u0__DOT__u0__DOT__alu_out;
        IData/*31:0*/ tb__DOT__u0__DOT__u0__DOT__alu_out_q;
        IData/*31:0*/ tb__DOT__u0__DOT__u0__DOT__cpuregs_wrdata;
        IData/*31:0*/ tb__DOT__u0__DOT__u0__DOT__cpuregs_rs1;
        IData/*31:0*/ tb__DOT__u0__DOT__u0__DOT__cpuregs_rs2;
        IData/*31:0*/ tb__DOT__u0__DOT__fifo_addr__DOT__r0;
        IData/*31:0*/ tb__DOT__u0__DOT__fifo_addr__DOT__r1;
        IData/*31:0*/ tb__DOT__u0__DOT__fifo_wdata__DOT__r0;
        QData/*63:0*/ tb__DOT__u0__DOT__u0__DOT__count_cycle;
        QData/*63:0*/ tb__DOT__u0__DOT__u0__DOT__count_instr;
        IData/*31:0*/ tb__DOT__mem[64];
        IData/*31:0*/ tb__DOT__u0__DOT__u0__DOT__cpuregs[32];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtb__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtb);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtb(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtb();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtb__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtb__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtb__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__5(Vtb__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtb__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__4(Vtb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__7(Vtb__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(Vtb__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(Vtb__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vtb__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(Vtb__Syms* __restrict vlSymsp);
    static void _settle__TOP__8(Vtb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
