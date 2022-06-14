// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "verilated.h"

#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___initial__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->tb__DOT__ssw_printed = 0U;
    vlSelf->tb__DOT__is_sw = 0U;
    vlSelf->tb__DOT__instr_cnt = 0U;
    VL_READMEM_N(true, 32, 64, 0, std::string("mem.txt")
                 ,  &(vlSelf->tb__DOT__mem), 0, ~0ULL);
    vlSelf->tb__DOT__u0__DOT__fifo_addr__DOT__r0 = 0U;
    vlSelf->tb__DOT__u0__DOT__fifo_addr__DOT__r1 = 0U;
    vlSelf->tb__DOT__u0__DOT__fifo_instr__DOT__r0 = 0U;
    vlSelf->tb__DOT__u0__DOT__fifo_valid__DOT__r0 = 0U;
    vlSelf->tb__DOT__u0__DOT__fifo_wdata__DOT__r0 = 0U;
    vlSelf->tb__DOT__u0__DOT__fifo_wstrb__DOT__r0 = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__alu_out_q = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__compressed_instr = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__count_cycle = 0ULL;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__count_instr = 0ULL;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[0U] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[0xaU] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[0xbU] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[0xcU] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[0xdU] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[0xeU] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[0xfU] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x10U] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x11U] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x12U] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x13U] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[1U] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x14U] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x15U] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x16U] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x17U] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x18U] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x19U] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x1aU] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x1bU] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x1cU] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x1dU] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[2U] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x1eU] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[0x1fU] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[3U] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[4U] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[5U] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[6U] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[7U] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[8U] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[9U] = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_imm = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_rd = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_rs1 = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_rs2 = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger_q = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_trigger = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_trigger_q = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_add = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_addi = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_and = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_andi = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_auipc = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_beq = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_bge = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_bgeu = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_blt = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_bltu = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_bne = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_ecall_ebreak = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_jal = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_jalr = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lb = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lbu = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lh = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lhu = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lui = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lw = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_or = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_ori = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_rdcycle = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_rdcycleh = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_rdinstr = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_rdinstrh = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_retirq = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sb = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sh = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sll = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_slli = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_slt = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_slti = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sltiu = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sltu = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sra = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_srai = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_srl = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_srli = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sub = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sw = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_xor = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_xori = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_compare = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_lb_lh_lw_lbu_lhu = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_lbu_lhu_lw = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_lui_auipc_jal = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_sb_sh_sw = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_slli_srli_srai = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_slti_blt_slt = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_sltiu_bltu_sltu = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_branch = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_compr = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_is_lb = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_is_lh = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_is_lu = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_rd = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_stalu = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_store = 0U;
    vlSelf->tb__DOT__u0__DOT__mem_addr = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_rdata = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_wdata = 0U;
    vlSelf->tb__DOT__u0__DOT__mem_instr = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_state = 0U;
    vlSelf->tb__DOT__u0__DOT__mem_valid = 0U;
    vlSelf->tb__DOT__u0__DOT__mem_wdata = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_wordsize = 0U;
    vlSelf->tb__DOT__u0__DOT__mem_wstrb = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_next_pc = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1 = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2 = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_out = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_pc = 0U;
    vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_sh = 0U;
    vlSelf->tb__DOT__trap = 0U;
    vlSelf->tb__DOT__mem_ready = 1U;
}

VL_ATTR_COLD void Vtb___024root___settle__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___settle__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__alu_eq;
    CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__alu_ltu;
    CData/*0:0*/ tb__DOT__u0__DOT__u0__DOT__alu_lts;
    CData/*4:0*/ tb__DOT__u0__DOT__u0__DOT__decoded_rs;
    // Body
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_rdcycle) 
           | ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_rdcycleh) 
              | ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_rdinstr) 
                 | (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_rdinstrh))));
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
    vlSelf->tb__DOT__u0__DOT__u0__DOT__next_pc = (((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_store) 
                                                   & (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_branch))
                                                   ? 
                                                  (0xfffffffeU 
                                                   & vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_out)
                                                   : vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_next_pc);
    vlSelf->tb__DOT__mem_rdata = vlSelf->tb__DOT__mem
        [(0x3fU & (vlSelf->tb__DOT__u0__DOT__mem_addr 
                   >> 2U))];
    vlSelf->tb__DOT__sw_mem_addr = ((IData)(vlSelf->tb__DOT__u0__DOT__mem_valid) 
                                    & (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sw));
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_xfer = ((IData)(vlSelf->tb__DOT__u0__DOT__mem_valid) 
                                                   & (IData)(vlSelf->tb__DOT__mem_ready));
    vlSelf->tb__DOT__is_sw_nxt = ((2U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state))
                                   ? 1U : ((0x40U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state))
                                            ? 0U : 
                                           (1U & (IData)(vlSelf->tb__DOT__is_sw))));
    if ((0x40U == (IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state))) {
        vlSelf->tb__DOT__display = vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_trigger;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs_write = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs_wrdata = 0U;
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
    } else {
        vlSelf->tb__DOT__display = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs_write = 0U;
        vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs_wrdata = 0U;
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
    tb__DOT__u0__DOT__u0__DOT__alu_ltu = (vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                          < vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2);
    tb__DOT__u0__DOT__u0__DOT__alu_lts = VL_LTS_III(32, vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1, vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2);
    tb__DOT__u0__DOT__u0__DOT__alu_eq = (vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1 
                                         == vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_xfer)
            ? vlSelf->tb__DOT__mem_rdata : vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q);
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
}

VL_ATTR_COLD void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vtb___024root___initial__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtb___024root___eval_settle(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_settle\n"); );
    // Body
    Vtb___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtb___024root___final(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___final\n"); );
}

VL_ATTR_COLD void Vtb___024root___ctor_var_reset(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->resetn = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__mem_la_read = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__mem_la_wdata = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__mem_la_write = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__mem_la_wstrb = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__trap = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->tb__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb__DOT__is_sw = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__is_sw_nxt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__instr_cnt = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__display = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__last_cycle_display = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__sw_mem_addr = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__ssw_printed = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__mem_valid = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__mem_instr = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u0__DOT__mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u0__DOT__mem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__count_cycle = VL_RAND_RESET_Q(64);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__count_instr = VL_RAND_RESET_Q(64);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_pc = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_next_pc = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op1 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_op2 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_out = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__reg_sh = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__timer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_state = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_wordsize = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_word = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_prefetch = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_rinst = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_rdata = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_do_wdata = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_xfer = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_rdata_latched_noshuffle = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__mem_done = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lui = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_auipc = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_jal = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_jalr = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_beq = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_bne = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_blt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_bge = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_bltu = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_bgeu = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lb = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lh = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lw = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lbu = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_lhu = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sb = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sh = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sw = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_addi = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_slti = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sltiu = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_xori = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_ori = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_andi = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_slli = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_srli = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_srai = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_add = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sub = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sll = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_slt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sltu = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_xor = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_srl = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_sra = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_or = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_and = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_rdcycle = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_rdcycleh = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_rdinstr = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_rdinstrh = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_ecall_ebreak = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__instr_retirq = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_rd = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_rs1 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_rs2 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_imm = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__decoded_imm_j = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_trigger = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_trigger_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__decoder_pseudo_trigger_q = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__compressed_instr = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_lui_auipc_jal = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_lb_lh_lw_lbu_lhu = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_slli_srli_srai = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_sb_sh_sw = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_lui_auipc_jal_jalr_addi_add_sub = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_slti_blt_slt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_sltiu_bltu_sltu = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_beq_bne_blt_bge_bltu_bgeu = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_lbu_lhu_lw = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_imm = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_alu_reg_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_compare = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpu_state = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_store = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_stalu = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_branch = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_compr = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_is_lu = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_is_lh = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_is_lb = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__latched_rd = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__do_waitirq = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__alu_out_q = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__alu_out_0 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs_write = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs_wrdata = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs_rs1 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u0__DOT__u0__DOT__cpuregs_rs2 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u0__DOT__fifo_valid__DOT__r0 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__fifo_instr__DOT__r0 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u0__DOT__fifo_addr__DOT__r0 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u0__DOT__fifo_addr__DOT__r1 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u0__DOT__fifo_wdata__DOT__r0 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u0__DOT__fifo_wstrb__DOT__r0 = VL_RAND_RESET_I(4);
}
