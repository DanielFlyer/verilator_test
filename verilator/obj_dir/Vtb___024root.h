// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"

class Vtb__Syms;
VL_MODULE(Vtb___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(resetn,0,0);
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
    };
    struct {
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_rdinstr;
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__instr_rdinstrh;
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
        CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__cpuregs_write;
        CData/*0:0*/ tb__DOT__u0__DOT__fifo_valid__DOT__r0;
        CData/*0:0*/ tb__DOT__u0__DOT__fifo_instr__DOT__r0;
        CData/*3:0*/ tb__DOT__u0__DOT__fifo_wstrb__DOT__r0;
        CData/*0:0*/ __Vclklast__TOP__clk;
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
        IData/*31:0*/ tb__DOT__u0__DOT__u0__DOT__alu_out;
        IData/*31:0*/ tb__DOT__u0__DOT__u0__DOT__alu_out_q;
        IData/*31:0*/ tb__DOT__u0__DOT__u0__DOT__cpuregs_wrdata;
        IData/*31:0*/ tb__DOT__u0__DOT__u0__DOT__cpuregs_rs1;
    };
    struct {
        IData/*31:0*/ tb__DOT__u0__DOT__u0__DOT__cpuregs_rs2;
        IData/*31:0*/ tb__DOT__u0__DOT__fifo_addr__DOT__r0;
        IData/*31:0*/ tb__DOT__u0__DOT__fifo_addr__DOT__r1;
        IData/*31:0*/ tb__DOT__u0__DOT__fifo_wdata__DOT__r0;
        QData/*63:0*/ tb__DOT__u0__DOT__u0__DOT__count_cycle;
        QData/*63:0*/ tb__DOT__u0__DOT__u0__DOT__count_instr;
        VlUnpacked<IData/*31:0*/, 64> tb__DOT__mem;
        VlUnpacked<IData/*31:0*/, 32> tb__DOT__u0__DOT__u0__DOT__cpuregs;
    };

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb___024root(Vtb__Syms* symsp, const char* name);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
