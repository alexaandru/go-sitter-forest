#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 28
#define SYMBOL_COUNT 143
#define ALIAS_COUNT 0
#define TOKEN_COUNT 114
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  aux_sym_string_token1 = 2,
  aux_sym_string_token2 = 3,
  sym_acc_register = 4,
  sym_x_register = 5,
  sym_y_register = 6,
  sym_label = 7,
  sym_symbol = 8,
  anon_sym_COMMA = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  sym_adc_opcode = 12,
  sym_and_opcode = 13,
  sym_asl_opcode = 14,
  sym_bcc_opcode = 15,
  sym_bcs_opcode = 16,
  sym_beq_opcode = 17,
  sym_bit_opcode = 18,
  sym_bmi_opcode = 19,
  sym_bne_opcode = 20,
  sym_bpl_opcode = 21,
  sym_brk_opcode = 22,
  sym_bvc_opcode = 23,
  sym_bvs_opcode = 24,
  sym_clc_opcode = 25,
  sym_cld_opcode = 26,
  sym_cli_opcode = 27,
  sym_clv_opcode = 28,
  sym_cmp_opcode = 29,
  sym_cpx_opcode = 30,
  sym_cpy_opcode = 31,
  sym_dec_opcode = 32,
  sym_dex_opcode = 33,
  sym_dey_opcode = 34,
  sym_eor_opcode = 35,
  sym_inc_opcode = 36,
  sym_inx_opcode = 37,
  sym_iny_opcode = 38,
  sym_jmp_opcode = 39,
  sym_jsr_opcode = 40,
  sym_lda_opcode = 41,
  sym_ldx_opcode = 42,
  sym_ldy_opcode = 43,
  sym_lsr_opcode = 44,
  sym_nop_opcode = 45,
  sym_ora_opcode = 46,
  sym_pha_opcode = 47,
  sym_php_opcode = 48,
  sym_pla_opcode = 49,
  sym_plp_opcode = 50,
  sym_rol_opcode = 51,
  sym_ror_opcode = 52,
  sym_rti_opcode = 53,
  sym_rts_opcode = 54,
  sym_sbc_opcode = 55,
  sym_sec_opcode = 56,
  sym_sed_opcode = 57,
  sym_sei_opcode = 58,
  sym_sta_opcode = 59,
  sym_stx_opcode = 60,
  sym_sty_opcode = 61,
  sym_tax_opcode = 62,
  sym_tay_opcode = 63,
  sym_tsx_opcode = 64,
  sym_txa_opcode = 65,
  sym_tcs_opcode = 66,
  sym_tya_opcode = 67,
  anon_sym_PERCENT = 68,
  aux_sym_bin_8_token1 = 69,
  sym_dec_8 = 70,
  anon_sym_DOLLAR = 71,
  anon_sym_h = 72,
  aux_sym_hex_8_token1 = 73,
  aux_sym_hex_8_token2 = 74,
  aux_sym_bin_16_token1 = 75,
  sym_dec_16 = 76,
  aux_sym_hex_16_token1 = 77,
  sym_imm_prefix = 78,
  anon_sym_PLUS = 79,
  anon_sym_DASH = 80,
  anon_sym_DOTBITNOT = 81,
  anon_sym_TILDE = 82,
  anon_sym_DOTLOBYTE = 83,
  anon_sym_LT = 84,
  anon_sym_DOTHIBYTE = 85,
  anon_sym_GT = 86,
  anon_sym_DOTBANKBYTE = 87,
  anon_sym_CARET = 88,
  anon_sym_STAR = 89,
  anon_sym_SLASH = 90,
  anon_sym_DOTMOD = 91,
  anon_sym_DOTBITAND = 92,
  anon_sym_AMP = 93,
  anon_sym_DOTBITXOR = 94,
  anon_sym_DOTSHL = 95,
  anon_sym_DOTSHR = 96,
  anon_sym_DOTBITOR = 97,
  anon_sym_PIPE = 98,
  anon_sym_EQ = 99,
  anon_sym_LT_EQ = 100,
  anon_sym_GT_EQ = 101,
  anon_sym_DOTAND = 102,
  anon_sym_AMP_AMP = 103,
  anon_sym_DOTXOR = 104,
  anon_sym_DOTOR = 105,
  anon_sym_PIPE_PIPE = 106,
  anon_sym_DOTNOT = 107,
  anon_sym_BANG = 108,
  sym_a16_ctrl_cmd = 109,
  sym_a8_ctrl_cmd = 110,
  aux_sym_addr_ctrl_cmd_token1 = 111,
  aux_sym_align_ctrl_cmd_token1 = 112,
  aux_sym_asciiz_ctrl_cmd_token1 = 113,
  sym_ca65 = 114,
  sym_string = 115,
  sym_inst = 116,
  sym_impl_addr_inst = 117,
  sym_acc_addr_inst = 118,
  sym_imm_addr_inst = 119,
  sym_abs_addr_inst = 120,
  sym_zp_addr_inst = 121,
  sym_abs_x_addr_inst = 122,
  sym_abs_y_addr_inst = 123,
  sym_zp_x_addr_inst = 124,
  sym_zp_y_addr_inst = 125,
  sym_ind_addr_inst = 126,
  sym_ind_x_addr_inst = 127,
  sym_ind_y_addr_inst = 128,
  sym_rel_addr_inst = 129,
  sym_operand_8 = 130,
  sym_bin_8 = 131,
  sym_hex_8 = 132,
  sym_operand_16 = 133,
  sym_bin_16 = 134,
  sym_hex_16 = 135,
  sym_ctrl_cmd = 136,
  sym_addr_ctrl_cmd = 137,
  sym_align_ctrl_cmd = 138,
  sym_asciiz_ctrl_cmd = 139,
  aux_sym_ca65_repeat1 = 140,
  aux_sym_addr_ctrl_cmd_repeat1 = 141,
  aux_sym_asciiz_ctrl_cmd_repeat1 = 142,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [sym_acc_register] = "acc_register",
  [sym_x_register] = "x_register",
  [sym_y_register] = "y_register",
  [sym_label] = "label",
  [sym_symbol] = "symbol",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_adc_opcode] = "adc_opcode",
  [sym_and_opcode] = "and_opcode",
  [sym_asl_opcode] = "asl_opcode",
  [sym_bcc_opcode] = "bcc_opcode",
  [sym_bcs_opcode] = "bcs_opcode",
  [sym_beq_opcode] = "beq_opcode",
  [sym_bit_opcode] = "bit_opcode",
  [sym_bmi_opcode] = "bmi_opcode",
  [sym_bne_opcode] = "bne_opcode",
  [sym_bpl_opcode] = "bpl_opcode",
  [sym_brk_opcode] = "brk_opcode",
  [sym_bvc_opcode] = "bvc_opcode",
  [sym_bvs_opcode] = "bvs_opcode",
  [sym_clc_opcode] = "clc_opcode",
  [sym_cld_opcode] = "cld_opcode",
  [sym_cli_opcode] = "cli_opcode",
  [sym_clv_opcode] = "clv_opcode",
  [sym_cmp_opcode] = "cmp_opcode",
  [sym_cpx_opcode] = "cpx_opcode",
  [sym_cpy_opcode] = "cpy_opcode",
  [sym_dec_opcode] = "dec_opcode",
  [sym_dex_opcode] = "dex_opcode",
  [sym_dey_opcode] = "dey_opcode",
  [sym_eor_opcode] = "eor_opcode",
  [sym_inc_opcode] = "inc_opcode",
  [sym_inx_opcode] = "inx_opcode",
  [sym_iny_opcode] = "iny_opcode",
  [sym_jmp_opcode] = "jmp_opcode",
  [sym_jsr_opcode] = "jsr_opcode",
  [sym_lda_opcode] = "lda_opcode",
  [sym_ldx_opcode] = "ldx_opcode",
  [sym_ldy_opcode] = "ldy_opcode",
  [sym_lsr_opcode] = "lsr_opcode",
  [sym_nop_opcode] = "nop_opcode",
  [sym_ora_opcode] = "ora_opcode",
  [sym_pha_opcode] = "pha_opcode",
  [sym_php_opcode] = "php_opcode",
  [sym_pla_opcode] = "pla_opcode",
  [sym_plp_opcode] = "plp_opcode",
  [sym_rol_opcode] = "rol_opcode",
  [sym_ror_opcode] = "ror_opcode",
  [sym_rti_opcode] = "rti_opcode",
  [sym_rts_opcode] = "rts_opcode",
  [sym_sbc_opcode] = "sbc_opcode",
  [sym_sec_opcode] = "sec_opcode",
  [sym_sed_opcode] = "sed_opcode",
  [sym_sei_opcode] = "sei_opcode",
  [sym_sta_opcode] = "sta_opcode",
  [sym_stx_opcode] = "stx_opcode",
  [sym_sty_opcode] = "sty_opcode",
  [sym_tax_opcode] = "tax_opcode",
  [sym_tay_opcode] = "tay_opcode",
  [sym_tsx_opcode] = "tsx_opcode",
  [sym_txa_opcode] = "txa_opcode",
  [sym_tcs_opcode] = "tcs_opcode",
  [sym_tya_opcode] = "tya_opcode",
  [anon_sym_PERCENT] = "%",
  [aux_sym_bin_8_token1] = "bin_8_token1",
  [sym_dec_8] = "dec_8",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_h] = "h",
  [aux_sym_hex_8_token1] = "hex_8_token1",
  [aux_sym_hex_8_token2] = "hex_8_token2",
  [aux_sym_bin_16_token1] = "bin_16_token1",
  [sym_dec_16] = "dec_16",
  [aux_sym_hex_16_token1] = "hex_16_token1",
  [sym_imm_prefix] = "imm_prefix",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_DOTBITNOT] = ".BITNOT",
  [anon_sym_TILDE] = "~",
  [anon_sym_DOTLOBYTE] = ".LOBYTE",
  [anon_sym_LT] = "<",
  [anon_sym_DOTHIBYTE] = ".HIBYTE",
  [anon_sym_GT] = ">",
  [anon_sym_DOTBANKBYTE] = ".BANKBYTE",
  [anon_sym_CARET] = "^",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOTMOD] = ".MOD",
  [anon_sym_DOTBITAND] = ".BITAND",
  [anon_sym_AMP] = "&",
  [anon_sym_DOTBITXOR] = ".BITXOR",
  [anon_sym_DOTSHL] = ".SHL",
  [anon_sym_DOTSHR] = ".SHR",
  [anon_sym_DOTBITOR] = ".BITOR",
  [anon_sym_PIPE] = "|",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_DOTAND] = ".AND",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_DOTXOR] = ".XOR",
  [anon_sym_DOTOR] = ".OR",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_DOTNOT] = ".NOT",
  [anon_sym_BANG] = "!",
  [sym_a16_ctrl_cmd] = "a16_ctrl_cmd",
  [sym_a8_ctrl_cmd] = "a8_ctrl_cmd",
  [aux_sym_addr_ctrl_cmd_token1] = "addr_ctrl_cmd_token1",
  [aux_sym_align_ctrl_cmd_token1] = "align_ctrl_cmd_token1",
  [aux_sym_asciiz_ctrl_cmd_token1] = "asciiz_ctrl_cmd_token1",
  [sym_ca65] = "ca65",
  [sym_string] = "string",
  [sym_inst] = "inst",
  [sym_impl_addr_inst] = "impl_addr_inst",
  [sym_acc_addr_inst] = "acc_addr_inst",
  [sym_imm_addr_inst] = "imm_addr_inst",
  [sym_abs_addr_inst] = "abs_addr_inst",
  [sym_zp_addr_inst] = "zp_addr_inst",
  [sym_abs_x_addr_inst] = "abs_x_addr_inst",
  [sym_abs_y_addr_inst] = "abs_y_addr_inst",
  [sym_zp_x_addr_inst] = "zp_x_addr_inst",
  [sym_zp_y_addr_inst] = "zp_y_addr_inst",
  [sym_ind_addr_inst] = "ind_addr_inst",
  [sym_ind_x_addr_inst] = "ind_x_addr_inst",
  [sym_ind_y_addr_inst] = "ind_y_addr_inst",
  [sym_rel_addr_inst] = "rel_addr_inst",
  [sym_operand_8] = "operand_8",
  [sym_bin_8] = "bin_8",
  [sym_hex_8] = "hex_8",
  [sym_operand_16] = "operand_16",
  [sym_bin_16] = "bin_16",
  [sym_hex_16] = "hex_16",
  [sym_ctrl_cmd] = "ctrl_cmd",
  [sym_addr_ctrl_cmd] = "addr_ctrl_cmd",
  [sym_align_ctrl_cmd] = "align_ctrl_cmd",
  [sym_asciiz_ctrl_cmd] = "asciiz_ctrl_cmd",
  [aux_sym_ca65_repeat1] = "ca65_repeat1",
  [aux_sym_addr_ctrl_cmd_repeat1] = "addr_ctrl_cmd_repeat1",
  [aux_sym_asciiz_ctrl_cmd_repeat1] = "asciiz_ctrl_cmd_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_acc_register] = sym_acc_register,
  [sym_x_register] = sym_x_register,
  [sym_y_register] = sym_y_register,
  [sym_label] = sym_label,
  [sym_symbol] = sym_symbol,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_adc_opcode] = sym_adc_opcode,
  [sym_and_opcode] = sym_and_opcode,
  [sym_asl_opcode] = sym_asl_opcode,
  [sym_bcc_opcode] = sym_bcc_opcode,
  [sym_bcs_opcode] = sym_bcs_opcode,
  [sym_beq_opcode] = sym_beq_opcode,
  [sym_bit_opcode] = sym_bit_opcode,
  [sym_bmi_opcode] = sym_bmi_opcode,
  [sym_bne_opcode] = sym_bne_opcode,
  [sym_bpl_opcode] = sym_bpl_opcode,
  [sym_brk_opcode] = sym_brk_opcode,
  [sym_bvc_opcode] = sym_bvc_opcode,
  [sym_bvs_opcode] = sym_bvs_opcode,
  [sym_clc_opcode] = sym_clc_opcode,
  [sym_cld_opcode] = sym_cld_opcode,
  [sym_cli_opcode] = sym_cli_opcode,
  [sym_clv_opcode] = sym_clv_opcode,
  [sym_cmp_opcode] = sym_cmp_opcode,
  [sym_cpx_opcode] = sym_cpx_opcode,
  [sym_cpy_opcode] = sym_cpy_opcode,
  [sym_dec_opcode] = sym_dec_opcode,
  [sym_dex_opcode] = sym_dex_opcode,
  [sym_dey_opcode] = sym_dey_opcode,
  [sym_eor_opcode] = sym_eor_opcode,
  [sym_inc_opcode] = sym_inc_opcode,
  [sym_inx_opcode] = sym_inx_opcode,
  [sym_iny_opcode] = sym_iny_opcode,
  [sym_jmp_opcode] = sym_jmp_opcode,
  [sym_jsr_opcode] = sym_jsr_opcode,
  [sym_lda_opcode] = sym_lda_opcode,
  [sym_ldx_opcode] = sym_ldx_opcode,
  [sym_ldy_opcode] = sym_ldy_opcode,
  [sym_lsr_opcode] = sym_lsr_opcode,
  [sym_nop_opcode] = sym_nop_opcode,
  [sym_ora_opcode] = sym_ora_opcode,
  [sym_pha_opcode] = sym_pha_opcode,
  [sym_php_opcode] = sym_php_opcode,
  [sym_pla_opcode] = sym_pla_opcode,
  [sym_plp_opcode] = sym_plp_opcode,
  [sym_rol_opcode] = sym_rol_opcode,
  [sym_ror_opcode] = sym_ror_opcode,
  [sym_rti_opcode] = sym_rti_opcode,
  [sym_rts_opcode] = sym_rts_opcode,
  [sym_sbc_opcode] = sym_sbc_opcode,
  [sym_sec_opcode] = sym_sec_opcode,
  [sym_sed_opcode] = sym_sed_opcode,
  [sym_sei_opcode] = sym_sei_opcode,
  [sym_sta_opcode] = sym_sta_opcode,
  [sym_stx_opcode] = sym_stx_opcode,
  [sym_sty_opcode] = sym_sty_opcode,
  [sym_tax_opcode] = sym_tax_opcode,
  [sym_tay_opcode] = sym_tay_opcode,
  [sym_tsx_opcode] = sym_tsx_opcode,
  [sym_txa_opcode] = sym_txa_opcode,
  [sym_tcs_opcode] = sym_tcs_opcode,
  [sym_tya_opcode] = sym_tya_opcode,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_bin_8_token1] = aux_sym_bin_8_token1,
  [sym_dec_8] = sym_dec_8,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_h] = anon_sym_h,
  [aux_sym_hex_8_token1] = aux_sym_hex_8_token1,
  [aux_sym_hex_8_token2] = aux_sym_hex_8_token2,
  [aux_sym_bin_16_token1] = aux_sym_bin_16_token1,
  [sym_dec_16] = sym_dec_16,
  [aux_sym_hex_16_token1] = aux_sym_hex_16_token1,
  [sym_imm_prefix] = sym_imm_prefix,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DOTBITNOT] = anon_sym_DOTBITNOT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DOTLOBYTE] = anon_sym_DOTLOBYTE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_DOTHIBYTE] = anon_sym_DOTHIBYTE,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DOTBANKBYTE] = anon_sym_DOTBANKBYTE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOTMOD] = anon_sym_DOTMOD,
  [anon_sym_DOTBITAND] = anon_sym_DOTBITAND,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_DOTBITXOR] = anon_sym_DOTBITXOR,
  [anon_sym_DOTSHL] = anon_sym_DOTSHL,
  [anon_sym_DOTSHR] = anon_sym_DOTSHR,
  [anon_sym_DOTBITOR] = anon_sym_DOTBITOR,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_DOTAND] = anon_sym_DOTAND,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_DOTXOR] = anon_sym_DOTXOR,
  [anon_sym_DOTOR] = anon_sym_DOTOR,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_DOTNOT] = anon_sym_DOTNOT,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_a16_ctrl_cmd] = sym_a16_ctrl_cmd,
  [sym_a8_ctrl_cmd] = sym_a8_ctrl_cmd,
  [aux_sym_addr_ctrl_cmd_token1] = aux_sym_addr_ctrl_cmd_token1,
  [aux_sym_align_ctrl_cmd_token1] = aux_sym_align_ctrl_cmd_token1,
  [aux_sym_asciiz_ctrl_cmd_token1] = aux_sym_asciiz_ctrl_cmd_token1,
  [sym_ca65] = sym_ca65,
  [sym_string] = sym_string,
  [sym_inst] = sym_inst,
  [sym_impl_addr_inst] = sym_impl_addr_inst,
  [sym_acc_addr_inst] = sym_acc_addr_inst,
  [sym_imm_addr_inst] = sym_imm_addr_inst,
  [sym_abs_addr_inst] = sym_abs_addr_inst,
  [sym_zp_addr_inst] = sym_zp_addr_inst,
  [sym_abs_x_addr_inst] = sym_abs_x_addr_inst,
  [sym_abs_y_addr_inst] = sym_abs_y_addr_inst,
  [sym_zp_x_addr_inst] = sym_zp_x_addr_inst,
  [sym_zp_y_addr_inst] = sym_zp_y_addr_inst,
  [sym_ind_addr_inst] = sym_ind_addr_inst,
  [sym_ind_x_addr_inst] = sym_ind_x_addr_inst,
  [sym_ind_y_addr_inst] = sym_ind_y_addr_inst,
  [sym_rel_addr_inst] = sym_rel_addr_inst,
  [sym_operand_8] = sym_operand_8,
  [sym_bin_8] = sym_bin_8,
  [sym_hex_8] = sym_hex_8,
  [sym_operand_16] = sym_operand_16,
  [sym_bin_16] = sym_bin_16,
  [sym_hex_16] = sym_hex_16,
  [sym_ctrl_cmd] = sym_ctrl_cmd,
  [sym_addr_ctrl_cmd] = sym_addr_ctrl_cmd,
  [sym_align_ctrl_cmd] = sym_align_ctrl_cmd,
  [sym_asciiz_ctrl_cmd] = sym_asciiz_ctrl_cmd,
  [aux_sym_ca65_repeat1] = aux_sym_ca65_repeat1,
  [aux_sym_addr_ctrl_cmd_repeat1] = aux_sym_addr_ctrl_cmd_repeat1,
  [aux_sym_asciiz_ctrl_cmd_repeat1] = aux_sym_asciiz_ctrl_cmd_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_acc_register] = {
    .visible = true,
    .named = true,
  },
  [sym_x_register] = {
    .visible = true,
    .named = true,
  },
  [sym_y_register] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_adc_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_and_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_asl_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_bcc_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_bcs_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_beq_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_bit_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_bmi_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_bne_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_bpl_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_brk_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_bvc_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_bvs_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_clc_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_cld_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_cli_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_clv_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_cmp_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_cpx_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_cpy_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_dec_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_dex_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_dey_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_eor_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_inc_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_inx_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_iny_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_jmp_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_jsr_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_lda_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_ldx_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_ldy_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_lsr_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_nop_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_ora_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_pha_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_php_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_pla_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_plp_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_rol_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_ror_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_rti_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_rts_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_sbc_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_sec_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_sed_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_sei_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_sta_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_stx_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_sty_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_tax_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_tay_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_tsx_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_txa_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_tcs_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_tya_opcode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_bin_8_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_dec_8] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_hex_8_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_8_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bin_16_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_dec_16] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_hex_16_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_imm_prefix] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTBITNOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTLOBYTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTHIBYTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTBANKBYTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTMOD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTBITAND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTBITXOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTSHL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTSHR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTBITOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTAND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTXOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTNOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_a16_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_a8_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_addr_ctrl_cmd_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_align_ctrl_cmd_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_asciiz_ctrl_cmd_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_ca65] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_impl_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_acc_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_abs_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_zp_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_abs_x_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_abs_y_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_zp_x_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_zp_y_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_ind_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_ind_x_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_ind_y_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_rel_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_operand_8] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_8] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_8] = {
    .visible = true,
    .named = true,
  },
  [sym_operand_16] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_16] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_16] = {
    .visible = true,
    .named = true,
  },
  [sym_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_addr_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_align_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_asciiz_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_ca65_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_addr_ctrl_cmd_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_asciiz_ctrl_cmd_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 23,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(208);
      if (lookahead == '!') ADVANCE(443);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == '%') ADVANCE(332);
      if (lookahead == '&') ADVANCE(428);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(221);
      if (lookahead == ')') ADVANCE(222);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '+') ADVANCE(414);
      if (lookahead == ',') ADVANCE(220);
      if (lookahead == '-') ADVANCE(415);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(425);
      if (lookahead == '0') ADVANCE(334);
      if (lookahead == '1') ADVANCE(350);
      if (lookahead == ';') ADVANCE(209);
      if (lookahead == '<') ADVANCE(419);
      if (lookahead == '=') ADVANCE(434);
      if (lookahead == '>') ADVANCE(421);
      if (lookahead == '^') ADVANCE(423);
      if (lookahead == 'h') ADVANCE(372);
      if (lookahead == '|') ADVANCE(433);
      if (lookahead == '~') ADVANCE(417);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(123);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(144);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(134);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(149);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(147);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(132);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(152);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(157);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(137);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(122);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(214);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(215);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(210);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == '%') ADVANCE(332);
      if (lookahead == '(') ADVANCE(221);
      if (lookahead == '0') ADVANCE(352);
      if (lookahead == '1') ADVANCE(361);
      if (lookahead == '2') ADVANCE(354);
      if (lookahead == '6') ADVANCE(355);
      if (lookahead == ';') ADVANCE(209);
      if (lookahead == 'h') ADVANCE(373);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(366);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == '%') ADVANCE(332);
      if (lookahead == '(') ADVANCE(221);
      if (lookahead == '0') ADVANCE(399);
      if (lookahead == '6') ADVANCE(402);
      if (lookahead == ';') ADVANCE(209);
      if (lookahead == 'h') ADVANCE(373);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(404);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(407);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == '%') ADVANCE(332);
      if (lookahead == '0') ADVANCE(352);
      if (lookahead == '1') ADVANCE(361);
      if (lookahead == '2') ADVANCE(354);
      if (lookahead == '6') ADVANCE(355);
      if (lookahead == ';') ADVANCE(209);
      if (lookahead == 'h') ADVANCE(373);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(366);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == '%') ADVANCE(332);
      if (lookahead == '0') ADVANCE(353);
      if (lookahead == '1') ADVANCE(369);
      if (lookahead == '2') ADVANCE(357);
      if (lookahead == ';') ADVANCE(209);
      if (lookahead == 'h') ADVANCE(373);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(211);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(375);
      if (lookahead == ';') ADVANCE(209);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == ';') ADVANCE(209);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(409);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(412);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(20);
      if (lookahead == '1') ADVANCE(176);
      if (lookahead == ';') ADVANCE(209);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(382);
      if (lookahead == '1') ADVANCE(397);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(9);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(11);
      if (lookahead == '1') ADVANCE(203);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(376);
      if (lookahead == ';') ADVANCE(209);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(13);
      if (lookahead == '1') ADVANCE(202);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == '1') ADVANCE(200);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == '1') ADVANCE(197);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(17);
      if (lookahead == '1') ADVANCE(193);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(18);
      if (lookahead == '1') ADVANCE(188);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(19);
      if (lookahead == '1') ADVANCE(182);
      END_STATE();
    case 21:
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '8') ADVANCE(445);
      if (lookahead == 'N') ADVANCE(80);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(140);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(131);
      END_STATE();
    case 22:
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '8') ADVANCE(445);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(140);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(131);
      END_STATE();
    case 23:
      if (lookahead == '6') ADVANCE(444);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(279);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(281);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(295);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(315);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(317);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(68);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(72);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(29);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(40);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(35);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(69);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(48);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(46);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(53);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(50);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(227);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(243);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(247);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(249);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(251);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(261);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(263);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(269);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(271);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(309);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(311);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(44);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(24);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(26);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(303);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(60);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(299);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(61);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(54);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(257);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(321);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(21);
      if (lookahead == 'B') ADVANCE(75);
      if (lookahead == 'H') ADVANCE(87);
      if (lookahead == 'L') ADVANCE(97);
      if (lookahead == 'M') ADVANCE(93);
      if (lookahead == 'N') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(98);
      if (lookahead == 'S') ADVANCE(86);
      if (lookahead == 'X') ADVANCE(92);
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(90);
      if (lookahead == 'I') ADVANCE(102);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(91);
      if (lookahead == 'N') ADVANCE(96);
      if (lookahead == 'O') ADVANCE(100);
      if (lookahead == 'X') ADVANCE(95);
      END_STATE();
    case 77:
      if (lookahead == 'B') ADVANCE(108);
      END_STATE();
    case 78:
      if (lookahead == 'B') ADVANCE(109);
      END_STATE();
    case 79:
      if (lookahead == 'B') ADVANCE(110);
      END_STATE();
    case 80:
      if (lookahead == 'D') ADVANCE(437);
      END_STATE();
    case 81:
      if (lookahead == 'D') ADVANCE(426);
      END_STATE();
    case 82:
      if (lookahead == 'D') ADVANCE(427);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(420);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(418);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(422);
      END_STATE();
    case 86:
      if (lookahead == 'H') ADVANCE(89);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(77);
      END_STATE();
    case 88:
      if (lookahead == 'K') ADVANCE(79);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(430);
      if (lookahead == 'R') ADVANCE(431);
      END_STATE();
    case 90:
      if (lookahead == 'N') ADVANCE(88);
      END_STATE();
    case 91:
      if (lookahead == 'N') ADVANCE(82);
      END_STATE();
    case 92:
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 93:
      if (lookahead == 'O') ADVANCE(81);
      END_STATE();
    case 94:
      if (lookahead == 'O') ADVANCE(103);
      END_STATE();
    case 95:
      if (lookahead == 'O') ADVANCE(101);
      END_STATE();
    case 96:
      if (lookahead == 'O') ADVANCE(105);
      END_STATE();
    case 97:
      if (lookahead == 'O') ADVANCE(78);
      END_STATE();
    case 98:
      if (lookahead == 'R') ADVANCE(440);
      END_STATE();
    case 99:
      if (lookahead == 'R') ADVANCE(439);
      END_STATE();
    case 100:
      if (lookahead == 'R') ADVANCE(432);
      END_STATE();
    case 101:
      if (lookahead == 'R') ADVANCE(429);
      END_STATE();
    case 102:
      if (lookahead == 'T') ADVANCE(76);
      END_STATE();
    case 103:
      if (lookahead == 'T') ADVANCE(442);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(83);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(416);
      END_STATE();
    case 106:
      if (lookahead == 'T') ADVANCE(84);
      END_STATE();
    case 107:
      if (lookahead == 'T') ADVANCE(85);
      END_STATE();
    case 108:
      if (lookahead == 'Y') ADVANCE(104);
      END_STATE();
    case 109:
      if (lookahead == 'Y') ADVANCE(106);
      END_STATE();
    case 110:
      if (lookahead == 'Y') ADVANCE(107);
      END_STATE();
    case 111:
      if (lookahead == 'h') ADVANCE(380);
      END_STATE();
    case 112:
      if (lookahead == 'h') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(278);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(280);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(282);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 116:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(290);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(292);
      END_STATE();
    case 117:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(294);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(296);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(314);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(316);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(318);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(330);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(162);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(119);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(120);
      END_STATE();
    case 122:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 123:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(138);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(135);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(125);
      END_STATE();
    case 124:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(226);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(228);
      END_STATE();
    case 125:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(242);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(244);
      END_STATE();
    case 126:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(246);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(248);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(250);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(252);
      END_STATE();
    case 127:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(260);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(262);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(264);
      END_STATE();
    case 128:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(268);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(270);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(272);
      END_STATE();
    case 129:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(306);
      END_STATE();
    case 130:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(308);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(310);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 131:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 132:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(114);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(160);
      END_STATE();
    case 133:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 136:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(148);
      END_STATE();
    case 137:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(116);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(302);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(304);
      END_STATE();
    case 140:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 141:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 142:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 143:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(240);
      END_STATE();
    case 144:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(126);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(153);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(164);
      END_STATE();
    case 145:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 146:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(298);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 147:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(154);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      END_STATE();
    case 148:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(447);
      END_STATE();
    case 149:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 150:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(146);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 151:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 152:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 153:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 154:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(274);
      END_STATE();
    case 155:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(286);
      END_STATE();
    case 156:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(230);
      END_STATE();
    case 157:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 158:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 159:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 160:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 161:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(446);
      END_STATE();
    case 162:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(328);
      END_STATE();
    case 163:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      END_STATE();
    case 164:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(256);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(258);
      END_STATE();
    case 165:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(320);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(322);
      END_STATE();
    case 166:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(324);
      END_STATE();
    case 167:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(448);
      END_STATE();
    case 168:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(390);
      END_STATE();
    case 169:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(168);
      END_STATE();
    case 170:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(169);
      END_STATE();
    case 171:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(170);
      END_STATE();
    case 172:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(171);
      END_STATE();
    case 173:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(172);
      END_STATE();
    case 174:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(173);
      END_STATE();
    case 175:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(383);
      END_STATE();
    case 176:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(174);
      END_STATE();
    case 177:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(175);
      END_STATE();
    case 178:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(177);
      END_STATE();
    case 179:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(178);
      END_STATE();
    case 180:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(179);
      END_STATE();
    case 181:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(180);
      END_STATE();
    case 182:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(181);
      END_STATE();
    case 183:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(391);
      END_STATE();
    case 184:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(183);
      END_STATE();
    case 185:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(184);
      END_STATE();
    case 186:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(185);
      END_STATE();
    case 187:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(186);
      END_STATE();
    case 188:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(187);
      END_STATE();
    case 189:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(392);
      END_STATE();
    case 190:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(189);
      END_STATE();
    case 191:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(190);
      END_STATE();
    case 192:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(191);
      END_STATE();
    case 193:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(192);
      END_STATE();
    case 194:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(393);
      END_STATE();
    case 195:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(194);
      END_STATE();
    case 196:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(195);
      END_STATE();
    case 197:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(196);
      END_STATE();
    case 198:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(394);
      END_STATE();
    case 199:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(198);
      END_STATE();
    case 200:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(199);
      END_STATE();
    case 201:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(395);
      END_STATE();
    case 202:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(201);
      END_STATE();
    case 203:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(396);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(411);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      END_STATE();
    case 207:
      if (eof) ADVANCE(208);
      if (lookahead == ')') ADVANCE(222);
      if (lookahead == ',') ADVANCE(220);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == '0') ADVANCE(335);
      if (lookahead == '1') ADVANCE(349);
      if (lookahead == ';') ADVANCE(209);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(33);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(51);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(45);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(56);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(55);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(43);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(64);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(47);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(57);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(32);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(207)
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_acc_register);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_acc_register);
      if (lookahead == 'h') ADVANCE(219);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(111);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_x_register);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_y_register);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(219);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(111);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(219);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_symbol);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_adc_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_and_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_asl_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_bcc_opcode);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_bcc_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_bcs_opcode);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_bcs_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_beq_opcode);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_beq_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_bit_opcode);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_bit_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_bmi_opcode);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_bmi_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_bne_opcode);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_bne_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_bpl_opcode);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_bpl_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_brk_opcode);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_brk_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_bvc_opcode);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_bvc_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_bvs_opcode);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_bvs_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_clc_opcode);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_clc_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_cld_opcode);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_cld_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_cli_opcode);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_cli_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_clv_opcode);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_clv_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_cmp_opcode);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_cmp_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_cpx_opcode);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_cpx_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_cpy_opcode);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_cpy_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_dec_opcode);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_dec_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_dex_opcode);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_dex_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_dey_opcode);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_dey_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_eor_opcode);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_eor_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_inc_opcode);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_inc_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_inx_opcode);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_inx_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_iny_opcode);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_iny_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_jmp_opcode);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_jmp_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_jsr_opcode);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_jsr_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_lda_opcode);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_lda_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_ldx_opcode);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_ldx_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_ldy_opcode);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_ldy_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_lsr_opcode);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_lsr_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_nop_opcode);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_nop_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ora_opcode);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_ora_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_pha_opcode);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_pha_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_php_opcode);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_php_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_pla_opcode);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_pla_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_plp_opcode);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_plp_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_rol_opcode);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_rol_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ror_opcode);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ror_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_rti_opcode);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_rti_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_rts_opcode);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_rts_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_sbc_opcode);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_sbc_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_sec_opcode);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_sec_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_sed_opcode);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_sed_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_sei_opcode);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_sei_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_sta_opcode);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_sta_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_stx_opcode);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_stx_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_sty_opcode);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_sty_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_tax_opcode);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_tax_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_tay_opcode);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_tay_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_tsx_opcode);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_tsx_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_txa_opcode);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_txa_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_tcs_opcode);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_tcs_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_tya_opcode);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_tya_opcode);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0') ADVANCE(334);
      if (lookahead == '1') ADVANCE(350);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0') ADVANCE(335);
      if (lookahead == '1') ADVANCE(349);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(390);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(333);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(336);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(337);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(338);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(339);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(340);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(341);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(342);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(343);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(344);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(345);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(346);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(347);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(348);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_dec_8);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '0') ADVANCE(352);
      if (lookahead == '1') ADVANCE(361);
      if (lookahead == '2') ADVANCE(354);
      if (lookahead == '6') ADVANCE(355);
      if (lookahead == 'h') ADVANCE(380);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(366);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '0') ADVANCE(353);
      if (lookahead == '1') ADVANCE(369);
      if (lookahead == '2') ADVANCE(357);
      if (lookahead == 'h') ADVANCE(380);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(359);
      if (lookahead == 'h') ADVANCE(380);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(356);
      if (lookahead == 'h') ADVANCE(380);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(363);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(400);
      if (lookahead == 'h') ADVANCE(380);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(406);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(360);
      if (lookahead == 'h') ADVANCE(380);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(365);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(380);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(380);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(370);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(351);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(406);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(363);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_h);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (lookahead == '0') ADVANCE(375);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (lookahead == '0') ADVANCE(376);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(411);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(374);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(377);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_hex_8_token2);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0') ADVANCE(382);
      if (lookahead == '1') ADVANCE(397);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(390);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(381);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(384);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(385);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(386);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(387);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(388);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(389);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(383);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(391);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(392);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(393);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(394);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(395);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(396);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_dec_16);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '0') ADVANCE(399);
      if (lookahead == '6') ADVANCE(402);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(404);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(407);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '3') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(405);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(398);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '5') ADVANCE(400);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(406);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '5') ADVANCE(401);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(404);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(398);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(406);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (lookahead == '0') ADVANCE(409);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(412);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(411);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(408);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_imm_prefix);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_DOTBITNOT);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_DOTLOBYTE);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(435);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_DOTHIBYTE);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(436);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_DOTBANKBYTE);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_DOTMOD);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_DOTBITAND);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(438);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_DOTBITXOR);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_DOTSHL);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_DOTSHR);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_DOTBITOR);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(441);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_DOTAND);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_DOTXOR);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_DOTOR);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_DOTNOT);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_a16_ctrl_cmd);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_a8_ctrl_cmd);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_addr_ctrl_cmd_token1);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_align_ctrl_cmd_token1);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_asciiz_ctrl_cmd_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 207},
  [2] = {.lex_state = 207},
  [3] = {.lex_state = 207},
  [4] = {.lex_state = 207},
  [5] = {.lex_state = 207},
  [6] = {.lex_state = 207},
  [7] = {.lex_state = 207},
  [8] = {.lex_state = 207},
  [9] = {.lex_state = 207},
  [10] = {.lex_state = 207},
  [11] = {.lex_state = 207},
  [12] = {.lex_state = 207},
  [13] = {.lex_state = 207},
  [14] = {.lex_state = 207},
  [15] = {.lex_state = 207},
  [16] = {.lex_state = 207},
  [17] = {.lex_state = 207},
  [18] = {.lex_state = 207},
  [19] = {.lex_state = 207},
  [20] = {.lex_state = 207},
  [21] = {.lex_state = 207},
  [22] = {.lex_state = 207},
  [23] = {.lex_state = 207},
  [24] = {.lex_state = 207},
  [25] = {.lex_state = 207},
  [26] = {.lex_state = 207},
  [27] = {.lex_state = 207},
  [28] = {.lex_state = 207},
  [29] = {.lex_state = 207},
  [30] = {.lex_state = 207},
  [31] = {.lex_state = 207},
  [32] = {.lex_state = 207},
  [33] = {.lex_state = 207},
  [34] = {.lex_state = 207},
  [35] = {.lex_state = 207},
  [36] = {.lex_state = 207},
  [37] = {.lex_state = 207},
  [38] = {.lex_state = 207},
  [39] = {.lex_state = 207},
  [40] = {.lex_state = 207},
  [41] = {.lex_state = 207},
  [42] = {.lex_state = 207},
  [43] = {.lex_state = 207},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 207},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [sym_acc_register] = ACTIONS(1),
    [sym_x_register] = ACTIONS(1),
    [sym_y_register] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_bcc_opcode] = ACTIONS(1),
    [sym_bcs_opcode] = ACTIONS(1),
    [sym_beq_opcode] = ACTIONS(1),
    [sym_bit_opcode] = ACTIONS(1),
    [sym_bmi_opcode] = ACTIONS(1),
    [sym_bne_opcode] = ACTIONS(1),
    [sym_bpl_opcode] = ACTIONS(1),
    [sym_brk_opcode] = ACTIONS(1),
    [sym_bvc_opcode] = ACTIONS(1),
    [sym_bvs_opcode] = ACTIONS(1),
    [sym_clc_opcode] = ACTIONS(1),
    [sym_cld_opcode] = ACTIONS(1),
    [sym_cli_opcode] = ACTIONS(1),
    [sym_clv_opcode] = ACTIONS(1),
    [sym_cmp_opcode] = ACTIONS(1),
    [sym_cpx_opcode] = ACTIONS(1),
    [sym_cpy_opcode] = ACTIONS(1),
    [sym_dec_opcode] = ACTIONS(1),
    [sym_dex_opcode] = ACTIONS(1),
    [sym_dey_opcode] = ACTIONS(1),
    [sym_eor_opcode] = ACTIONS(1),
    [sym_inc_opcode] = ACTIONS(1),
    [sym_inx_opcode] = ACTIONS(1),
    [sym_iny_opcode] = ACTIONS(1),
    [sym_jmp_opcode] = ACTIONS(1),
    [sym_jsr_opcode] = ACTIONS(1),
    [sym_lda_opcode] = ACTIONS(1),
    [sym_ldx_opcode] = ACTIONS(1),
    [sym_ldy_opcode] = ACTIONS(1),
    [sym_lsr_opcode] = ACTIONS(1),
    [sym_nop_opcode] = ACTIONS(1),
    [sym_ora_opcode] = ACTIONS(1),
    [sym_pha_opcode] = ACTIONS(1),
    [sym_php_opcode] = ACTIONS(1),
    [sym_pla_opcode] = ACTIONS(1),
    [sym_plp_opcode] = ACTIONS(1),
    [sym_rol_opcode] = ACTIONS(1),
    [sym_ror_opcode] = ACTIONS(1),
    [sym_rti_opcode] = ACTIONS(1),
    [sym_rts_opcode] = ACTIONS(1),
    [sym_sbc_opcode] = ACTIONS(1),
    [sym_sec_opcode] = ACTIONS(1),
    [sym_sed_opcode] = ACTIONS(1),
    [sym_sei_opcode] = ACTIONS(1),
    [sym_sta_opcode] = ACTIONS(1),
    [sym_stx_opcode] = ACTIONS(1),
    [sym_sty_opcode] = ACTIONS(1),
    [sym_tax_opcode] = ACTIONS(1),
    [sym_tay_opcode] = ACTIONS(1),
    [sym_tsx_opcode] = ACTIONS(1),
    [sym_txa_opcode] = ACTIONS(1),
    [sym_tcs_opcode] = ACTIONS(1),
    [sym_tya_opcode] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [aux_sym_bin_8_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [aux_sym_bin_16_token1] = ACTIONS(1),
    [sym_imm_prefix] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOTBITNOT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DOTLOBYTE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_DOTHIBYTE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DOTBANKBYTE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOTMOD] = ACTIONS(1),
    [anon_sym_DOTBITAND] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_DOTBITXOR] = ACTIONS(1),
    [anon_sym_DOTSHL] = ACTIONS(1),
    [anon_sym_DOTSHR] = ACTIONS(1),
    [anon_sym_DOTBITOR] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_DOTAND] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_DOTXOR] = ACTIONS(1),
    [anon_sym_DOTOR] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_DOTNOT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [sym_a16_ctrl_cmd] = ACTIONS(1),
    [sym_a8_ctrl_cmd] = ACTIONS(1),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(1),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(1),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_ca65] = STATE(83),
    [sym_inst] = STATE(3),
    [sym_impl_addr_inst] = STATE(28),
    [sym_acc_addr_inst] = STATE(28),
    [sym_imm_addr_inst] = STATE(28),
    [sym_abs_addr_inst] = STATE(28),
    [sym_zp_addr_inst] = STATE(28),
    [sym_abs_x_addr_inst] = STATE(28),
    [sym_abs_y_addr_inst] = STATE(28),
    [sym_zp_x_addr_inst] = STATE(28),
    [sym_zp_y_addr_inst] = STATE(28),
    [sym_ind_addr_inst] = STATE(28),
    [sym_ind_x_addr_inst] = STATE(28),
    [sym_ind_y_addr_inst] = STATE(28),
    [sym_rel_addr_inst] = STATE(28),
    [sym_ctrl_cmd] = STATE(3),
    [sym_addr_ctrl_cmd] = STATE(42),
    [sym_align_ctrl_cmd] = STATE(42),
    [sym_asciiz_ctrl_cmd] = STATE(42),
    [aux_sym_ca65_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(7),
    [sym_adc_opcode] = ACTIONS(9),
    [sym_and_opcode] = ACTIONS(9),
    [sym_asl_opcode] = ACTIONS(11),
    [sym_bcc_opcode] = ACTIONS(13),
    [sym_bcs_opcode] = ACTIONS(13),
    [sym_beq_opcode] = ACTIONS(13),
    [sym_bit_opcode] = ACTIONS(15),
    [sym_bmi_opcode] = ACTIONS(13),
    [sym_bne_opcode] = ACTIONS(13),
    [sym_bpl_opcode] = ACTIONS(13),
    [sym_brk_opcode] = ACTIONS(17),
    [sym_bvc_opcode] = ACTIONS(13),
    [sym_bvs_opcode] = ACTIONS(13),
    [sym_clc_opcode] = ACTIONS(17),
    [sym_cld_opcode] = ACTIONS(17),
    [sym_cli_opcode] = ACTIONS(17),
    [sym_clv_opcode] = ACTIONS(17),
    [sym_cmp_opcode] = ACTIONS(9),
    [sym_cpx_opcode] = ACTIONS(19),
    [sym_cpy_opcode] = ACTIONS(19),
    [sym_dec_opcode] = ACTIONS(21),
    [sym_dex_opcode] = ACTIONS(17),
    [sym_dey_opcode] = ACTIONS(17),
    [sym_eor_opcode] = ACTIONS(9),
    [sym_inc_opcode] = ACTIONS(21),
    [sym_inx_opcode] = ACTIONS(17),
    [sym_iny_opcode] = ACTIONS(17),
    [sym_jmp_opcode] = ACTIONS(23),
    [sym_jsr_opcode] = ACTIONS(25),
    [sym_lda_opcode] = ACTIONS(9),
    [sym_ldx_opcode] = ACTIONS(27),
    [sym_ldy_opcode] = ACTIONS(29),
    [sym_lsr_opcode] = ACTIONS(29),
    [sym_nop_opcode] = ACTIONS(17),
    [sym_ora_opcode] = ACTIONS(9),
    [sym_pha_opcode] = ACTIONS(17),
    [sym_php_opcode] = ACTIONS(17),
    [sym_pla_opcode] = ACTIONS(17),
    [sym_plp_opcode] = ACTIONS(17),
    [sym_rol_opcode] = ACTIONS(11),
    [sym_ror_opcode] = ACTIONS(11),
    [sym_rti_opcode] = ACTIONS(17),
    [sym_rts_opcode] = ACTIONS(17),
    [sym_sbc_opcode] = ACTIONS(9),
    [sym_sec_opcode] = ACTIONS(17),
    [sym_sed_opcode] = ACTIONS(17),
    [sym_sei_opcode] = ACTIONS(17),
    [sym_sta_opcode] = ACTIONS(31),
    [sym_stx_opcode] = ACTIONS(33),
    [sym_sty_opcode] = ACTIONS(35),
    [sym_tax_opcode] = ACTIONS(17),
    [sym_tay_opcode] = ACTIONS(17),
    [sym_tsx_opcode] = ACTIONS(17),
    [sym_txa_opcode] = ACTIONS(17),
    [sym_tcs_opcode] = ACTIONS(17),
    [sym_tya_opcode] = ACTIONS(17),
    [sym_a16_ctrl_cmd] = ACTIONS(37),
    [sym_a8_ctrl_cmd] = ACTIONS(37),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(39),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(41),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(43),
  },
  [2] = {
    [sym_inst] = STATE(2),
    [sym_impl_addr_inst] = STATE(28),
    [sym_acc_addr_inst] = STATE(28),
    [sym_imm_addr_inst] = STATE(28),
    [sym_abs_addr_inst] = STATE(28),
    [sym_zp_addr_inst] = STATE(28),
    [sym_abs_x_addr_inst] = STATE(28),
    [sym_abs_y_addr_inst] = STATE(28),
    [sym_zp_x_addr_inst] = STATE(28),
    [sym_zp_y_addr_inst] = STATE(28),
    [sym_ind_addr_inst] = STATE(28),
    [sym_ind_x_addr_inst] = STATE(28),
    [sym_ind_y_addr_inst] = STATE(28),
    [sym_rel_addr_inst] = STATE(28),
    [sym_ctrl_cmd] = STATE(2),
    [sym_addr_ctrl_cmd] = STATE(42),
    [sym_align_ctrl_cmd] = STATE(42),
    [sym_asciiz_ctrl_cmd] = STATE(42),
    [aux_sym_ca65_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(47),
    [sym_adc_opcode] = ACTIONS(50),
    [sym_and_opcode] = ACTIONS(50),
    [sym_asl_opcode] = ACTIONS(53),
    [sym_bcc_opcode] = ACTIONS(56),
    [sym_bcs_opcode] = ACTIONS(56),
    [sym_beq_opcode] = ACTIONS(56),
    [sym_bit_opcode] = ACTIONS(59),
    [sym_bmi_opcode] = ACTIONS(56),
    [sym_bne_opcode] = ACTIONS(56),
    [sym_bpl_opcode] = ACTIONS(56),
    [sym_brk_opcode] = ACTIONS(62),
    [sym_bvc_opcode] = ACTIONS(56),
    [sym_bvs_opcode] = ACTIONS(56),
    [sym_clc_opcode] = ACTIONS(62),
    [sym_cld_opcode] = ACTIONS(62),
    [sym_cli_opcode] = ACTIONS(62),
    [sym_clv_opcode] = ACTIONS(62),
    [sym_cmp_opcode] = ACTIONS(50),
    [sym_cpx_opcode] = ACTIONS(65),
    [sym_cpy_opcode] = ACTIONS(65),
    [sym_dec_opcode] = ACTIONS(68),
    [sym_dex_opcode] = ACTIONS(62),
    [sym_dey_opcode] = ACTIONS(62),
    [sym_eor_opcode] = ACTIONS(50),
    [sym_inc_opcode] = ACTIONS(68),
    [sym_inx_opcode] = ACTIONS(62),
    [sym_iny_opcode] = ACTIONS(62),
    [sym_jmp_opcode] = ACTIONS(71),
    [sym_jsr_opcode] = ACTIONS(74),
    [sym_lda_opcode] = ACTIONS(50),
    [sym_ldx_opcode] = ACTIONS(77),
    [sym_ldy_opcode] = ACTIONS(80),
    [sym_lsr_opcode] = ACTIONS(80),
    [sym_nop_opcode] = ACTIONS(62),
    [sym_ora_opcode] = ACTIONS(50),
    [sym_pha_opcode] = ACTIONS(62),
    [sym_php_opcode] = ACTIONS(62),
    [sym_pla_opcode] = ACTIONS(62),
    [sym_plp_opcode] = ACTIONS(62),
    [sym_rol_opcode] = ACTIONS(53),
    [sym_ror_opcode] = ACTIONS(53),
    [sym_rti_opcode] = ACTIONS(62),
    [sym_rts_opcode] = ACTIONS(62),
    [sym_sbc_opcode] = ACTIONS(50),
    [sym_sec_opcode] = ACTIONS(62),
    [sym_sed_opcode] = ACTIONS(62),
    [sym_sei_opcode] = ACTIONS(62),
    [sym_sta_opcode] = ACTIONS(83),
    [sym_stx_opcode] = ACTIONS(86),
    [sym_sty_opcode] = ACTIONS(89),
    [sym_tax_opcode] = ACTIONS(62),
    [sym_tay_opcode] = ACTIONS(62),
    [sym_tsx_opcode] = ACTIONS(62),
    [sym_txa_opcode] = ACTIONS(62),
    [sym_tcs_opcode] = ACTIONS(62),
    [sym_tya_opcode] = ACTIONS(62),
    [sym_a16_ctrl_cmd] = ACTIONS(92),
    [sym_a8_ctrl_cmd] = ACTIONS(92),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(95),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(98),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(101),
  },
  [3] = {
    [sym_inst] = STATE(2),
    [sym_impl_addr_inst] = STATE(28),
    [sym_acc_addr_inst] = STATE(28),
    [sym_imm_addr_inst] = STATE(28),
    [sym_abs_addr_inst] = STATE(28),
    [sym_zp_addr_inst] = STATE(28),
    [sym_abs_x_addr_inst] = STATE(28),
    [sym_abs_y_addr_inst] = STATE(28),
    [sym_zp_x_addr_inst] = STATE(28),
    [sym_zp_y_addr_inst] = STATE(28),
    [sym_ind_addr_inst] = STATE(28),
    [sym_ind_x_addr_inst] = STATE(28),
    [sym_ind_y_addr_inst] = STATE(28),
    [sym_rel_addr_inst] = STATE(28),
    [sym_ctrl_cmd] = STATE(2),
    [sym_addr_ctrl_cmd] = STATE(42),
    [sym_align_ctrl_cmd] = STATE(42),
    [sym_asciiz_ctrl_cmd] = STATE(42),
    [aux_sym_ca65_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(104),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(106),
    [sym_adc_opcode] = ACTIONS(9),
    [sym_and_opcode] = ACTIONS(9),
    [sym_asl_opcode] = ACTIONS(11),
    [sym_bcc_opcode] = ACTIONS(13),
    [sym_bcs_opcode] = ACTIONS(13),
    [sym_beq_opcode] = ACTIONS(13),
    [sym_bit_opcode] = ACTIONS(15),
    [sym_bmi_opcode] = ACTIONS(13),
    [sym_bne_opcode] = ACTIONS(13),
    [sym_bpl_opcode] = ACTIONS(13),
    [sym_brk_opcode] = ACTIONS(17),
    [sym_bvc_opcode] = ACTIONS(13),
    [sym_bvs_opcode] = ACTIONS(13),
    [sym_clc_opcode] = ACTIONS(17),
    [sym_cld_opcode] = ACTIONS(17),
    [sym_cli_opcode] = ACTIONS(17),
    [sym_clv_opcode] = ACTIONS(17),
    [sym_cmp_opcode] = ACTIONS(9),
    [sym_cpx_opcode] = ACTIONS(19),
    [sym_cpy_opcode] = ACTIONS(19),
    [sym_dec_opcode] = ACTIONS(21),
    [sym_dex_opcode] = ACTIONS(17),
    [sym_dey_opcode] = ACTIONS(17),
    [sym_eor_opcode] = ACTIONS(9),
    [sym_inc_opcode] = ACTIONS(21),
    [sym_inx_opcode] = ACTIONS(17),
    [sym_iny_opcode] = ACTIONS(17),
    [sym_jmp_opcode] = ACTIONS(23),
    [sym_jsr_opcode] = ACTIONS(25),
    [sym_lda_opcode] = ACTIONS(9),
    [sym_ldx_opcode] = ACTIONS(27),
    [sym_ldy_opcode] = ACTIONS(29),
    [sym_lsr_opcode] = ACTIONS(29),
    [sym_nop_opcode] = ACTIONS(17),
    [sym_ora_opcode] = ACTIONS(9),
    [sym_pha_opcode] = ACTIONS(17),
    [sym_php_opcode] = ACTIONS(17),
    [sym_pla_opcode] = ACTIONS(17),
    [sym_plp_opcode] = ACTIONS(17),
    [sym_rol_opcode] = ACTIONS(11),
    [sym_ror_opcode] = ACTIONS(11),
    [sym_rti_opcode] = ACTIONS(17),
    [sym_rts_opcode] = ACTIONS(17),
    [sym_sbc_opcode] = ACTIONS(9),
    [sym_sec_opcode] = ACTIONS(17),
    [sym_sed_opcode] = ACTIONS(17),
    [sym_sei_opcode] = ACTIONS(17),
    [sym_sta_opcode] = ACTIONS(31),
    [sym_stx_opcode] = ACTIONS(33),
    [sym_sty_opcode] = ACTIONS(35),
    [sym_tax_opcode] = ACTIONS(17),
    [sym_tay_opcode] = ACTIONS(17),
    [sym_tsx_opcode] = ACTIONS(17),
    [sym_txa_opcode] = ACTIONS(17),
    [sym_tcs_opcode] = ACTIONS(17),
    [sym_tya_opcode] = ACTIONS(17),
    [sym_a16_ctrl_cmd] = ACTIONS(37),
    [sym_a8_ctrl_cmd] = ACTIONS(37),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(39),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(41),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(43),
  },
  [4] = {
    [aux_sym_asciiz_ctrl_cmd_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(108),
    [anon_sym_COMMA] = ACTIONS(110),
    [sym_adc_opcode] = ACTIONS(112),
    [sym_and_opcode] = ACTIONS(112),
    [sym_asl_opcode] = ACTIONS(112),
    [sym_bcc_opcode] = ACTIONS(112),
    [sym_bcs_opcode] = ACTIONS(112),
    [sym_beq_opcode] = ACTIONS(112),
    [sym_bit_opcode] = ACTIONS(112),
    [sym_bmi_opcode] = ACTIONS(112),
    [sym_bne_opcode] = ACTIONS(112),
    [sym_bpl_opcode] = ACTIONS(112),
    [sym_brk_opcode] = ACTIONS(112),
    [sym_bvc_opcode] = ACTIONS(112),
    [sym_bvs_opcode] = ACTIONS(112),
    [sym_clc_opcode] = ACTIONS(112),
    [sym_cld_opcode] = ACTIONS(112),
    [sym_cli_opcode] = ACTIONS(112),
    [sym_clv_opcode] = ACTIONS(112),
    [sym_cmp_opcode] = ACTIONS(112),
    [sym_cpx_opcode] = ACTIONS(112),
    [sym_cpy_opcode] = ACTIONS(112),
    [sym_dec_opcode] = ACTIONS(112),
    [sym_dex_opcode] = ACTIONS(112),
    [sym_dey_opcode] = ACTIONS(112),
    [sym_eor_opcode] = ACTIONS(112),
    [sym_inc_opcode] = ACTIONS(112),
    [sym_inx_opcode] = ACTIONS(112),
    [sym_iny_opcode] = ACTIONS(112),
    [sym_jmp_opcode] = ACTIONS(112),
    [sym_jsr_opcode] = ACTIONS(112),
    [sym_lda_opcode] = ACTIONS(112),
    [sym_ldx_opcode] = ACTIONS(112),
    [sym_ldy_opcode] = ACTIONS(112),
    [sym_lsr_opcode] = ACTIONS(112),
    [sym_nop_opcode] = ACTIONS(112),
    [sym_ora_opcode] = ACTIONS(112),
    [sym_pha_opcode] = ACTIONS(112),
    [sym_php_opcode] = ACTIONS(112),
    [sym_pla_opcode] = ACTIONS(112),
    [sym_plp_opcode] = ACTIONS(112),
    [sym_rol_opcode] = ACTIONS(112),
    [sym_ror_opcode] = ACTIONS(112),
    [sym_rti_opcode] = ACTIONS(112),
    [sym_rts_opcode] = ACTIONS(112),
    [sym_sbc_opcode] = ACTIONS(112),
    [sym_sec_opcode] = ACTIONS(112),
    [sym_sed_opcode] = ACTIONS(112),
    [sym_sei_opcode] = ACTIONS(112),
    [sym_sta_opcode] = ACTIONS(112),
    [sym_stx_opcode] = ACTIONS(112),
    [sym_sty_opcode] = ACTIONS(112),
    [sym_tax_opcode] = ACTIONS(112),
    [sym_tay_opcode] = ACTIONS(112),
    [sym_tsx_opcode] = ACTIONS(112),
    [sym_txa_opcode] = ACTIONS(112),
    [sym_tcs_opcode] = ACTIONS(112),
    [sym_tya_opcode] = ACTIONS(112),
    [sym_a16_ctrl_cmd] = ACTIONS(108),
    [sym_a8_ctrl_cmd] = ACTIONS(108),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(108),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(108),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(108),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(114),
    [anon_sym_COMMA] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(114),
    [sym_adc_opcode] = ACTIONS(116),
    [sym_and_opcode] = ACTIONS(116),
    [sym_asl_opcode] = ACTIONS(116),
    [sym_bcc_opcode] = ACTIONS(116),
    [sym_bcs_opcode] = ACTIONS(116),
    [sym_beq_opcode] = ACTIONS(116),
    [sym_bit_opcode] = ACTIONS(116),
    [sym_bmi_opcode] = ACTIONS(116),
    [sym_bne_opcode] = ACTIONS(116),
    [sym_bpl_opcode] = ACTIONS(116),
    [sym_brk_opcode] = ACTIONS(116),
    [sym_bvc_opcode] = ACTIONS(116),
    [sym_bvs_opcode] = ACTIONS(116),
    [sym_clc_opcode] = ACTIONS(116),
    [sym_cld_opcode] = ACTIONS(116),
    [sym_cli_opcode] = ACTIONS(116),
    [sym_clv_opcode] = ACTIONS(116),
    [sym_cmp_opcode] = ACTIONS(116),
    [sym_cpx_opcode] = ACTIONS(116),
    [sym_cpy_opcode] = ACTIONS(116),
    [sym_dec_opcode] = ACTIONS(116),
    [sym_dex_opcode] = ACTIONS(116),
    [sym_dey_opcode] = ACTIONS(116),
    [sym_eor_opcode] = ACTIONS(116),
    [sym_inc_opcode] = ACTIONS(116),
    [sym_inx_opcode] = ACTIONS(116),
    [sym_iny_opcode] = ACTIONS(116),
    [sym_jmp_opcode] = ACTIONS(116),
    [sym_jsr_opcode] = ACTIONS(116),
    [sym_lda_opcode] = ACTIONS(116),
    [sym_ldx_opcode] = ACTIONS(116),
    [sym_ldy_opcode] = ACTIONS(116),
    [sym_lsr_opcode] = ACTIONS(116),
    [sym_nop_opcode] = ACTIONS(116),
    [sym_ora_opcode] = ACTIONS(116),
    [sym_pha_opcode] = ACTIONS(116),
    [sym_php_opcode] = ACTIONS(116),
    [sym_pla_opcode] = ACTIONS(116),
    [sym_plp_opcode] = ACTIONS(116),
    [sym_rol_opcode] = ACTIONS(116),
    [sym_ror_opcode] = ACTIONS(116),
    [sym_rti_opcode] = ACTIONS(116),
    [sym_rts_opcode] = ACTIONS(116),
    [sym_sbc_opcode] = ACTIONS(116),
    [sym_sec_opcode] = ACTIONS(116),
    [sym_sed_opcode] = ACTIONS(116),
    [sym_sei_opcode] = ACTIONS(116),
    [sym_sta_opcode] = ACTIONS(116),
    [sym_stx_opcode] = ACTIONS(116),
    [sym_sty_opcode] = ACTIONS(116),
    [sym_tax_opcode] = ACTIONS(116),
    [sym_tay_opcode] = ACTIONS(116),
    [sym_tsx_opcode] = ACTIONS(116),
    [sym_txa_opcode] = ACTIONS(116),
    [sym_tcs_opcode] = ACTIONS(116),
    [sym_tya_opcode] = ACTIONS(116),
    [sym_a16_ctrl_cmd] = ACTIONS(114),
    [sym_a8_ctrl_cmd] = ACTIONS(114),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(114),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(114),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(114),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(118),
    [anon_sym_COMMA] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(118),
    [sym_adc_opcode] = ACTIONS(120),
    [sym_and_opcode] = ACTIONS(120),
    [sym_asl_opcode] = ACTIONS(120),
    [sym_bcc_opcode] = ACTIONS(120),
    [sym_bcs_opcode] = ACTIONS(120),
    [sym_beq_opcode] = ACTIONS(120),
    [sym_bit_opcode] = ACTIONS(120),
    [sym_bmi_opcode] = ACTIONS(120),
    [sym_bne_opcode] = ACTIONS(120),
    [sym_bpl_opcode] = ACTIONS(120),
    [sym_brk_opcode] = ACTIONS(120),
    [sym_bvc_opcode] = ACTIONS(120),
    [sym_bvs_opcode] = ACTIONS(120),
    [sym_clc_opcode] = ACTIONS(120),
    [sym_cld_opcode] = ACTIONS(120),
    [sym_cli_opcode] = ACTIONS(120),
    [sym_clv_opcode] = ACTIONS(120),
    [sym_cmp_opcode] = ACTIONS(120),
    [sym_cpx_opcode] = ACTIONS(120),
    [sym_cpy_opcode] = ACTIONS(120),
    [sym_dec_opcode] = ACTIONS(120),
    [sym_dex_opcode] = ACTIONS(120),
    [sym_dey_opcode] = ACTIONS(120),
    [sym_eor_opcode] = ACTIONS(120),
    [sym_inc_opcode] = ACTIONS(120),
    [sym_inx_opcode] = ACTIONS(120),
    [sym_iny_opcode] = ACTIONS(120),
    [sym_jmp_opcode] = ACTIONS(120),
    [sym_jsr_opcode] = ACTIONS(120),
    [sym_lda_opcode] = ACTIONS(120),
    [sym_ldx_opcode] = ACTIONS(120),
    [sym_ldy_opcode] = ACTIONS(120),
    [sym_lsr_opcode] = ACTIONS(120),
    [sym_nop_opcode] = ACTIONS(120),
    [sym_ora_opcode] = ACTIONS(120),
    [sym_pha_opcode] = ACTIONS(120),
    [sym_php_opcode] = ACTIONS(120),
    [sym_pla_opcode] = ACTIONS(120),
    [sym_plp_opcode] = ACTIONS(120),
    [sym_rol_opcode] = ACTIONS(120),
    [sym_ror_opcode] = ACTIONS(120),
    [sym_rti_opcode] = ACTIONS(120),
    [sym_rts_opcode] = ACTIONS(120),
    [sym_sbc_opcode] = ACTIONS(120),
    [sym_sec_opcode] = ACTIONS(120),
    [sym_sed_opcode] = ACTIONS(120),
    [sym_sei_opcode] = ACTIONS(120),
    [sym_sta_opcode] = ACTIONS(120),
    [sym_stx_opcode] = ACTIONS(120),
    [sym_sty_opcode] = ACTIONS(120),
    [sym_tax_opcode] = ACTIONS(120),
    [sym_tay_opcode] = ACTIONS(120),
    [sym_tsx_opcode] = ACTIONS(120),
    [sym_txa_opcode] = ACTIONS(120),
    [sym_tcs_opcode] = ACTIONS(120),
    [sym_tya_opcode] = ACTIONS(120),
    [sym_a16_ctrl_cmd] = ACTIONS(118),
    [sym_a8_ctrl_cmd] = ACTIONS(118),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(118),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(118),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(118),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(122),
    [anon_sym_COMMA] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
    [sym_adc_opcode] = ACTIONS(124),
    [sym_and_opcode] = ACTIONS(124),
    [sym_asl_opcode] = ACTIONS(124),
    [sym_bcc_opcode] = ACTIONS(124),
    [sym_bcs_opcode] = ACTIONS(124),
    [sym_beq_opcode] = ACTIONS(124),
    [sym_bit_opcode] = ACTIONS(124),
    [sym_bmi_opcode] = ACTIONS(124),
    [sym_bne_opcode] = ACTIONS(124),
    [sym_bpl_opcode] = ACTIONS(124),
    [sym_brk_opcode] = ACTIONS(124),
    [sym_bvc_opcode] = ACTIONS(124),
    [sym_bvs_opcode] = ACTIONS(124),
    [sym_clc_opcode] = ACTIONS(124),
    [sym_cld_opcode] = ACTIONS(124),
    [sym_cli_opcode] = ACTIONS(124),
    [sym_clv_opcode] = ACTIONS(124),
    [sym_cmp_opcode] = ACTIONS(124),
    [sym_cpx_opcode] = ACTIONS(124),
    [sym_cpy_opcode] = ACTIONS(124),
    [sym_dec_opcode] = ACTIONS(124),
    [sym_dex_opcode] = ACTIONS(124),
    [sym_dey_opcode] = ACTIONS(124),
    [sym_eor_opcode] = ACTIONS(124),
    [sym_inc_opcode] = ACTIONS(124),
    [sym_inx_opcode] = ACTIONS(124),
    [sym_iny_opcode] = ACTIONS(124),
    [sym_jmp_opcode] = ACTIONS(124),
    [sym_jsr_opcode] = ACTIONS(124),
    [sym_lda_opcode] = ACTIONS(124),
    [sym_ldx_opcode] = ACTIONS(124),
    [sym_ldy_opcode] = ACTIONS(124),
    [sym_lsr_opcode] = ACTIONS(124),
    [sym_nop_opcode] = ACTIONS(124),
    [sym_ora_opcode] = ACTIONS(124),
    [sym_pha_opcode] = ACTIONS(124),
    [sym_php_opcode] = ACTIONS(124),
    [sym_pla_opcode] = ACTIONS(124),
    [sym_plp_opcode] = ACTIONS(124),
    [sym_rol_opcode] = ACTIONS(124),
    [sym_ror_opcode] = ACTIONS(124),
    [sym_rti_opcode] = ACTIONS(124),
    [sym_rts_opcode] = ACTIONS(124),
    [sym_sbc_opcode] = ACTIONS(124),
    [sym_sec_opcode] = ACTIONS(124),
    [sym_sed_opcode] = ACTIONS(124),
    [sym_sei_opcode] = ACTIONS(124),
    [sym_sta_opcode] = ACTIONS(124),
    [sym_stx_opcode] = ACTIONS(124),
    [sym_sty_opcode] = ACTIONS(124),
    [sym_tax_opcode] = ACTIONS(124),
    [sym_tay_opcode] = ACTIONS(124),
    [sym_tsx_opcode] = ACTIONS(124),
    [sym_txa_opcode] = ACTIONS(124),
    [sym_tcs_opcode] = ACTIONS(124),
    [sym_tya_opcode] = ACTIONS(124),
    [sym_a16_ctrl_cmd] = ACTIONS(122),
    [sym_a8_ctrl_cmd] = ACTIONS(122),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(122),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(122),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(122),
  },
  [8] = {
    [aux_sym_addr_ctrl_cmd_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(128),
    [sym_adc_opcode] = ACTIONS(130),
    [sym_and_opcode] = ACTIONS(130),
    [sym_asl_opcode] = ACTIONS(130),
    [sym_bcc_opcode] = ACTIONS(130),
    [sym_bcs_opcode] = ACTIONS(130),
    [sym_beq_opcode] = ACTIONS(130),
    [sym_bit_opcode] = ACTIONS(130),
    [sym_bmi_opcode] = ACTIONS(130),
    [sym_bne_opcode] = ACTIONS(130),
    [sym_bpl_opcode] = ACTIONS(130),
    [sym_brk_opcode] = ACTIONS(130),
    [sym_bvc_opcode] = ACTIONS(130),
    [sym_bvs_opcode] = ACTIONS(130),
    [sym_clc_opcode] = ACTIONS(130),
    [sym_cld_opcode] = ACTIONS(130),
    [sym_cli_opcode] = ACTIONS(130),
    [sym_clv_opcode] = ACTIONS(130),
    [sym_cmp_opcode] = ACTIONS(130),
    [sym_cpx_opcode] = ACTIONS(130),
    [sym_cpy_opcode] = ACTIONS(130),
    [sym_dec_opcode] = ACTIONS(130),
    [sym_dex_opcode] = ACTIONS(130),
    [sym_dey_opcode] = ACTIONS(130),
    [sym_eor_opcode] = ACTIONS(130),
    [sym_inc_opcode] = ACTIONS(130),
    [sym_inx_opcode] = ACTIONS(130),
    [sym_iny_opcode] = ACTIONS(130),
    [sym_jmp_opcode] = ACTIONS(130),
    [sym_jsr_opcode] = ACTIONS(130),
    [sym_lda_opcode] = ACTIONS(130),
    [sym_ldx_opcode] = ACTIONS(130),
    [sym_ldy_opcode] = ACTIONS(130),
    [sym_lsr_opcode] = ACTIONS(130),
    [sym_nop_opcode] = ACTIONS(130),
    [sym_ora_opcode] = ACTIONS(130),
    [sym_pha_opcode] = ACTIONS(130),
    [sym_php_opcode] = ACTIONS(130),
    [sym_pla_opcode] = ACTIONS(130),
    [sym_plp_opcode] = ACTIONS(130),
    [sym_rol_opcode] = ACTIONS(130),
    [sym_ror_opcode] = ACTIONS(130),
    [sym_rti_opcode] = ACTIONS(130),
    [sym_rts_opcode] = ACTIONS(130),
    [sym_sbc_opcode] = ACTIONS(130),
    [sym_sec_opcode] = ACTIONS(130),
    [sym_sed_opcode] = ACTIONS(130),
    [sym_sei_opcode] = ACTIONS(130),
    [sym_sta_opcode] = ACTIONS(130),
    [sym_stx_opcode] = ACTIONS(130),
    [sym_sty_opcode] = ACTIONS(130),
    [sym_tax_opcode] = ACTIONS(130),
    [sym_tay_opcode] = ACTIONS(130),
    [sym_tsx_opcode] = ACTIONS(130),
    [sym_txa_opcode] = ACTIONS(130),
    [sym_tcs_opcode] = ACTIONS(130),
    [sym_tya_opcode] = ACTIONS(130),
    [sym_a16_ctrl_cmd] = ACTIONS(126),
    [sym_a8_ctrl_cmd] = ACTIONS(126),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(126),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(126),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(126),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(132),
    [anon_sym_COMMA] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(132),
    [sym_adc_opcode] = ACTIONS(134),
    [sym_and_opcode] = ACTIONS(134),
    [sym_asl_opcode] = ACTIONS(134),
    [sym_bcc_opcode] = ACTIONS(134),
    [sym_bcs_opcode] = ACTIONS(134),
    [sym_beq_opcode] = ACTIONS(134),
    [sym_bit_opcode] = ACTIONS(134),
    [sym_bmi_opcode] = ACTIONS(134),
    [sym_bne_opcode] = ACTIONS(134),
    [sym_bpl_opcode] = ACTIONS(134),
    [sym_brk_opcode] = ACTIONS(134),
    [sym_bvc_opcode] = ACTIONS(134),
    [sym_bvs_opcode] = ACTIONS(134),
    [sym_clc_opcode] = ACTIONS(134),
    [sym_cld_opcode] = ACTIONS(134),
    [sym_cli_opcode] = ACTIONS(134),
    [sym_clv_opcode] = ACTIONS(134),
    [sym_cmp_opcode] = ACTIONS(134),
    [sym_cpx_opcode] = ACTIONS(134),
    [sym_cpy_opcode] = ACTIONS(134),
    [sym_dec_opcode] = ACTIONS(134),
    [sym_dex_opcode] = ACTIONS(134),
    [sym_dey_opcode] = ACTIONS(134),
    [sym_eor_opcode] = ACTIONS(134),
    [sym_inc_opcode] = ACTIONS(134),
    [sym_inx_opcode] = ACTIONS(134),
    [sym_iny_opcode] = ACTIONS(134),
    [sym_jmp_opcode] = ACTIONS(134),
    [sym_jsr_opcode] = ACTIONS(134),
    [sym_lda_opcode] = ACTIONS(134),
    [sym_ldx_opcode] = ACTIONS(134),
    [sym_ldy_opcode] = ACTIONS(134),
    [sym_lsr_opcode] = ACTIONS(134),
    [sym_nop_opcode] = ACTIONS(134),
    [sym_ora_opcode] = ACTIONS(134),
    [sym_pha_opcode] = ACTIONS(134),
    [sym_php_opcode] = ACTIONS(134),
    [sym_pla_opcode] = ACTIONS(134),
    [sym_plp_opcode] = ACTIONS(134),
    [sym_rol_opcode] = ACTIONS(134),
    [sym_ror_opcode] = ACTIONS(134),
    [sym_rti_opcode] = ACTIONS(134),
    [sym_rts_opcode] = ACTIONS(134),
    [sym_sbc_opcode] = ACTIONS(134),
    [sym_sec_opcode] = ACTIONS(134),
    [sym_sed_opcode] = ACTIONS(134),
    [sym_sei_opcode] = ACTIONS(134),
    [sym_sta_opcode] = ACTIONS(134),
    [sym_stx_opcode] = ACTIONS(134),
    [sym_sty_opcode] = ACTIONS(134),
    [sym_tax_opcode] = ACTIONS(134),
    [sym_tay_opcode] = ACTIONS(134),
    [sym_tsx_opcode] = ACTIONS(134),
    [sym_txa_opcode] = ACTIONS(134),
    [sym_tcs_opcode] = ACTIONS(134),
    [sym_tya_opcode] = ACTIONS(134),
    [sym_a16_ctrl_cmd] = ACTIONS(132),
    [sym_a8_ctrl_cmd] = ACTIONS(132),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(132),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(132),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(132),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(136),
    [sym_adc_opcode] = ACTIONS(138),
    [sym_and_opcode] = ACTIONS(138),
    [sym_asl_opcode] = ACTIONS(138),
    [sym_bcc_opcode] = ACTIONS(138),
    [sym_bcs_opcode] = ACTIONS(138),
    [sym_beq_opcode] = ACTIONS(138),
    [sym_bit_opcode] = ACTIONS(138),
    [sym_bmi_opcode] = ACTIONS(138),
    [sym_bne_opcode] = ACTIONS(138),
    [sym_bpl_opcode] = ACTIONS(138),
    [sym_brk_opcode] = ACTIONS(138),
    [sym_bvc_opcode] = ACTIONS(138),
    [sym_bvs_opcode] = ACTIONS(138),
    [sym_clc_opcode] = ACTIONS(138),
    [sym_cld_opcode] = ACTIONS(138),
    [sym_cli_opcode] = ACTIONS(138),
    [sym_clv_opcode] = ACTIONS(138),
    [sym_cmp_opcode] = ACTIONS(138),
    [sym_cpx_opcode] = ACTIONS(138),
    [sym_cpy_opcode] = ACTIONS(138),
    [sym_dec_opcode] = ACTIONS(138),
    [sym_dex_opcode] = ACTIONS(138),
    [sym_dey_opcode] = ACTIONS(138),
    [sym_eor_opcode] = ACTIONS(138),
    [sym_inc_opcode] = ACTIONS(138),
    [sym_inx_opcode] = ACTIONS(138),
    [sym_iny_opcode] = ACTIONS(138),
    [sym_jmp_opcode] = ACTIONS(138),
    [sym_jsr_opcode] = ACTIONS(138),
    [sym_lda_opcode] = ACTIONS(138),
    [sym_ldx_opcode] = ACTIONS(138),
    [sym_ldy_opcode] = ACTIONS(138),
    [sym_lsr_opcode] = ACTIONS(138),
    [sym_nop_opcode] = ACTIONS(138),
    [sym_ora_opcode] = ACTIONS(138),
    [sym_pha_opcode] = ACTIONS(138),
    [sym_php_opcode] = ACTIONS(138),
    [sym_pla_opcode] = ACTIONS(138),
    [sym_plp_opcode] = ACTIONS(138),
    [sym_rol_opcode] = ACTIONS(138),
    [sym_ror_opcode] = ACTIONS(138),
    [sym_rti_opcode] = ACTIONS(138),
    [sym_rts_opcode] = ACTIONS(138),
    [sym_sbc_opcode] = ACTIONS(138),
    [sym_sec_opcode] = ACTIONS(138),
    [sym_sed_opcode] = ACTIONS(138),
    [sym_sei_opcode] = ACTIONS(138),
    [sym_sta_opcode] = ACTIONS(138),
    [sym_stx_opcode] = ACTIONS(138),
    [sym_sty_opcode] = ACTIONS(138),
    [sym_tax_opcode] = ACTIONS(138),
    [sym_tay_opcode] = ACTIONS(138),
    [sym_tsx_opcode] = ACTIONS(138),
    [sym_txa_opcode] = ACTIONS(138),
    [sym_tcs_opcode] = ACTIONS(138),
    [sym_tya_opcode] = ACTIONS(138),
    [sym_a16_ctrl_cmd] = ACTIONS(136),
    [sym_a8_ctrl_cmd] = ACTIONS(136),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(136),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(136),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(136),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(140),
    [anon_sym_COMMA] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(140),
    [sym_adc_opcode] = ACTIONS(142),
    [sym_and_opcode] = ACTIONS(142),
    [sym_asl_opcode] = ACTIONS(142),
    [sym_bcc_opcode] = ACTIONS(142),
    [sym_bcs_opcode] = ACTIONS(142),
    [sym_beq_opcode] = ACTIONS(142),
    [sym_bit_opcode] = ACTIONS(142),
    [sym_bmi_opcode] = ACTIONS(142),
    [sym_bne_opcode] = ACTIONS(142),
    [sym_bpl_opcode] = ACTIONS(142),
    [sym_brk_opcode] = ACTIONS(142),
    [sym_bvc_opcode] = ACTIONS(142),
    [sym_bvs_opcode] = ACTIONS(142),
    [sym_clc_opcode] = ACTIONS(142),
    [sym_cld_opcode] = ACTIONS(142),
    [sym_cli_opcode] = ACTIONS(142),
    [sym_clv_opcode] = ACTIONS(142),
    [sym_cmp_opcode] = ACTIONS(142),
    [sym_cpx_opcode] = ACTIONS(142),
    [sym_cpy_opcode] = ACTIONS(142),
    [sym_dec_opcode] = ACTIONS(142),
    [sym_dex_opcode] = ACTIONS(142),
    [sym_dey_opcode] = ACTIONS(142),
    [sym_eor_opcode] = ACTIONS(142),
    [sym_inc_opcode] = ACTIONS(142),
    [sym_inx_opcode] = ACTIONS(142),
    [sym_iny_opcode] = ACTIONS(142),
    [sym_jmp_opcode] = ACTIONS(142),
    [sym_jsr_opcode] = ACTIONS(142),
    [sym_lda_opcode] = ACTIONS(142),
    [sym_ldx_opcode] = ACTIONS(142),
    [sym_ldy_opcode] = ACTIONS(142),
    [sym_lsr_opcode] = ACTIONS(142),
    [sym_nop_opcode] = ACTIONS(142),
    [sym_ora_opcode] = ACTIONS(142),
    [sym_pha_opcode] = ACTIONS(142),
    [sym_php_opcode] = ACTIONS(142),
    [sym_pla_opcode] = ACTIONS(142),
    [sym_plp_opcode] = ACTIONS(142),
    [sym_rol_opcode] = ACTIONS(142),
    [sym_ror_opcode] = ACTIONS(142),
    [sym_rti_opcode] = ACTIONS(142),
    [sym_rts_opcode] = ACTIONS(142),
    [sym_sbc_opcode] = ACTIONS(142),
    [sym_sec_opcode] = ACTIONS(142),
    [sym_sed_opcode] = ACTIONS(142),
    [sym_sei_opcode] = ACTIONS(142),
    [sym_sta_opcode] = ACTIONS(142),
    [sym_stx_opcode] = ACTIONS(142),
    [sym_sty_opcode] = ACTIONS(142),
    [sym_tax_opcode] = ACTIONS(142),
    [sym_tay_opcode] = ACTIONS(142),
    [sym_tsx_opcode] = ACTIONS(142),
    [sym_txa_opcode] = ACTIONS(142),
    [sym_tcs_opcode] = ACTIONS(142),
    [sym_tya_opcode] = ACTIONS(142),
    [sym_a16_ctrl_cmd] = ACTIONS(140),
    [sym_a8_ctrl_cmd] = ACTIONS(140),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(140),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(140),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(140),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(144),
    [anon_sym_COMMA] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(144),
    [sym_adc_opcode] = ACTIONS(146),
    [sym_and_opcode] = ACTIONS(146),
    [sym_asl_opcode] = ACTIONS(146),
    [sym_bcc_opcode] = ACTIONS(146),
    [sym_bcs_opcode] = ACTIONS(146),
    [sym_beq_opcode] = ACTIONS(146),
    [sym_bit_opcode] = ACTIONS(146),
    [sym_bmi_opcode] = ACTIONS(146),
    [sym_bne_opcode] = ACTIONS(146),
    [sym_bpl_opcode] = ACTIONS(146),
    [sym_brk_opcode] = ACTIONS(146),
    [sym_bvc_opcode] = ACTIONS(146),
    [sym_bvs_opcode] = ACTIONS(146),
    [sym_clc_opcode] = ACTIONS(146),
    [sym_cld_opcode] = ACTIONS(146),
    [sym_cli_opcode] = ACTIONS(146),
    [sym_clv_opcode] = ACTIONS(146),
    [sym_cmp_opcode] = ACTIONS(146),
    [sym_cpx_opcode] = ACTIONS(146),
    [sym_cpy_opcode] = ACTIONS(146),
    [sym_dec_opcode] = ACTIONS(146),
    [sym_dex_opcode] = ACTIONS(146),
    [sym_dey_opcode] = ACTIONS(146),
    [sym_eor_opcode] = ACTIONS(146),
    [sym_inc_opcode] = ACTIONS(146),
    [sym_inx_opcode] = ACTIONS(146),
    [sym_iny_opcode] = ACTIONS(146),
    [sym_jmp_opcode] = ACTIONS(146),
    [sym_jsr_opcode] = ACTIONS(146),
    [sym_lda_opcode] = ACTIONS(146),
    [sym_ldx_opcode] = ACTIONS(146),
    [sym_ldy_opcode] = ACTIONS(146),
    [sym_lsr_opcode] = ACTIONS(146),
    [sym_nop_opcode] = ACTIONS(146),
    [sym_ora_opcode] = ACTIONS(146),
    [sym_pha_opcode] = ACTIONS(146),
    [sym_php_opcode] = ACTIONS(146),
    [sym_pla_opcode] = ACTIONS(146),
    [sym_plp_opcode] = ACTIONS(146),
    [sym_rol_opcode] = ACTIONS(146),
    [sym_ror_opcode] = ACTIONS(146),
    [sym_rti_opcode] = ACTIONS(146),
    [sym_rts_opcode] = ACTIONS(146),
    [sym_sbc_opcode] = ACTIONS(146),
    [sym_sec_opcode] = ACTIONS(146),
    [sym_sed_opcode] = ACTIONS(146),
    [sym_sei_opcode] = ACTIONS(146),
    [sym_sta_opcode] = ACTIONS(146),
    [sym_stx_opcode] = ACTIONS(146),
    [sym_sty_opcode] = ACTIONS(146),
    [sym_tax_opcode] = ACTIONS(146),
    [sym_tay_opcode] = ACTIONS(146),
    [sym_tsx_opcode] = ACTIONS(146),
    [sym_txa_opcode] = ACTIONS(146),
    [sym_tcs_opcode] = ACTIONS(146),
    [sym_tya_opcode] = ACTIONS(146),
    [sym_a16_ctrl_cmd] = ACTIONS(144),
    [sym_a8_ctrl_cmd] = ACTIONS(144),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(144),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(144),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(144),
  },
  [13] = {
    [aux_sym_asciiz_ctrl_cmd_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(148),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(148),
    [anon_sym_COMMA] = ACTIONS(150),
    [sym_adc_opcode] = ACTIONS(153),
    [sym_and_opcode] = ACTIONS(153),
    [sym_asl_opcode] = ACTIONS(153),
    [sym_bcc_opcode] = ACTIONS(153),
    [sym_bcs_opcode] = ACTIONS(153),
    [sym_beq_opcode] = ACTIONS(153),
    [sym_bit_opcode] = ACTIONS(153),
    [sym_bmi_opcode] = ACTIONS(153),
    [sym_bne_opcode] = ACTIONS(153),
    [sym_bpl_opcode] = ACTIONS(153),
    [sym_brk_opcode] = ACTIONS(153),
    [sym_bvc_opcode] = ACTIONS(153),
    [sym_bvs_opcode] = ACTIONS(153),
    [sym_clc_opcode] = ACTIONS(153),
    [sym_cld_opcode] = ACTIONS(153),
    [sym_cli_opcode] = ACTIONS(153),
    [sym_clv_opcode] = ACTIONS(153),
    [sym_cmp_opcode] = ACTIONS(153),
    [sym_cpx_opcode] = ACTIONS(153),
    [sym_cpy_opcode] = ACTIONS(153),
    [sym_dec_opcode] = ACTIONS(153),
    [sym_dex_opcode] = ACTIONS(153),
    [sym_dey_opcode] = ACTIONS(153),
    [sym_eor_opcode] = ACTIONS(153),
    [sym_inc_opcode] = ACTIONS(153),
    [sym_inx_opcode] = ACTIONS(153),
    [sym_iny_opcode] = ACTIONS(153),
    [sym_jmp_opcode] = ACTIONS(153),
    [sym_jsr_opcode] = ACTIONS(153),
    [sym_lda_opcode] = ACTIONS(153),
    [sym_ldx_opcode] = ACTIONS(153),
    [sym_ldy_opcode] = ACTIONS(153),
    [sym_lsr_opcode] = ACTIONS(153),
    [sym_nop_opcode] = ACTIONS(153),
    [sym_ora_opcode] = ACTIONS(153),
    [sym_pha_opcode] = ACTIONS(153),
    [sym_php_opcode] = ACTIONS(153),
    [sym_pla_opcode] = ACTIONS(153),
    [sym_plp_opcode] = ACTIONS(153),
    [sym_rol_opcode] = ACTIONS(153),
    [sym_ror_opcode] = ACTIONS(153),
    [sym_rti_opcode] = ACTIONS(153),
    [sym_rts_opcode] = ACTIONS(153),
    [sym_sbc_opcode] = ACTIONS(153),
    [sym_sec_opcode] = ACTIONS(153),
    [sym_sed_opcode] = ACTIONS(153),
    [sym_sei_opcode] = ACTIONS(153),
    [sym_sta_opcode] = ACTIONS(153),
    [sym_stx_opcode] = ACTIONS(153),
    [sym_sty_opcode] = ACTIONS(153),
    [sym_tax_opcode] = ACTIONS(153),
    [sym_tay_opcode] = ACTIONS(153),
    [sym_tsx_opcode] = ACTIONS(153),
    [sym_txa_opcode] = ACTIONS(153),
    [sym_tcs_opcode] = ACTIONS(153),
    [sym_tya_opcode] = ACTIONS(153),
    [sym_a16_ctrl_cmd] = ACTIONS(148),
    [sym_a8_ctrl_cmd] = ACTIONS(148),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(148),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(148),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(148),
  },
  [14] = {
    [aux_sym_asciiz_ctrl_cmd_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(155),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(110),
    [sym_adc_opcode] = ACTIONS(157),
    [sym_and_opcode] = ACTIONS(157),
    [sym_asl_opcode] = ACTIONS(157),
    [sym_bcc_opcode] = ACTIONS(157),
    [sym_bcs_opcode] = ACTIONS(157),
    [sym_beq_opcode] = ACTIONS(157),
    [sym_bit_opcode] = ACTIONS(157),
    [sym_bmi_opcode] = ACTIONS(157),
    [sym_bne_opcode] = ACTIONS(157),
    [sym_bpl_opcode] = ACTIONS(157),
    [sym_brk_opcode] = ACTIONS(157),
    [sym_bvc_opcode] = ACTIONS(157),
    [sym_bvs_opcode] = ACTIONS(157),
    [sym_clc_opcode] = ACTIONS(157),
    [sym_cld_opcode] = ACTIONS(157),
    [sym_cli_opcode] = ACTIONS(157),
    [sym_clv_opcode] = ACTIONS(157),
    [sym_cmp_opcode] = ACTIONS(157),
    [sym_cpx_opcode] = ACTIONS(157),
    [sym_cpy_opcode] = ACTIONS(157),
    [sym_dec_opcode] = ACTIONS(157),
    [sym_dex_opcode] = ACTIONS(157),
    [sym_dey_opcode] = ACTIONS(157),
    [sym_eor_opcode] = ACTIONS(157),
    [sym_inc_opcode] = ACTIONS(157),
    [sym_inx_opcode] = ACTIONS(157),
    [sym_iny_opcode] = ACTIONS(157),
    [sym_jmp_opcode] = ACTIONS(157),
    [sym_jsr_opcode] = ACTIONS(157),
    [sym_lda_opcode] = ACTIONS(157),
    [sym_ldx_opcode] = ACTIONS(157),
    [sym_ldy_opcode] = ACTIONS(157),
    [sym_lsr_opcode] = ACTIONS(157),
    [sym_nop_opcode] = ACTIONS(157),
    [sym_ora_opcode] = ACTIONS(157),
    [sym_pha_opcode] = ACTIONS(157),
    [sym_php_opcode] = ACTIONS(157),
    [sym_pla_opcode] = ACTIONS(157),
    [sym_plp_opcode] = ACTIONS(157),
    [sym_rol_opcode] = ACTIONS(157),
    [sym_ror_opcode] = ACTIONS(157),
    [sym_rti_opcode] = ACTIONS(157),
    [sym_rts_opcode] = ACTIONS(157),
    [sym_sbc_opcode] = ACTIONS(157),
    [sym_sec_opcode] = ACTIONS(157),
    [sym_sed_opcode] = ACTIONS(157),
    [sym_sei_opcode] = ACTIONS(157),
    [sym_sta_opcode] = ACTIONS(157),
    [sym_stx_opcode] = ACTIONS(157),
    [sym_sty_opcode] = ACTIONS(157),
    [sym_tax_opcode] = ACTIONS(157),
    [sym_tay_opcode] = ACTIONS(157),
    [sym_tsx_opcode] = ACTIONS(157),
    [sym_txa_opcode] = ACTIONS(157),
    [sym_tcs_opcode] = ACTIONS(157),
    [sym_tya_opcode] = ACTIONS(157),
    [sym_a16_ctrl_cmd] = ACTIONS(155),
    [sym_a8_ctrl_cmd] = ACTIONS(155),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(155),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(155),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(155),
  },
  [15] = {
    [aux_sym_addr_ctrl_cmd_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(161),
    [sym_adc_opcode] = ACTIONS(164),
    [sym_and_opcode] = ACTIONS(164),
    [sym_asl_opcode] = ACTIONS(164),
    [sym_bcc_opcode] = ACTIONS(164),
    [sym_bcs_opcode] = ACTIONS(164),
    [sym_beq_opcode] = ACTIONS(164),
    [sym_bit_opcode] = ACTIONS(164),
    [sym_bmi_opcode] = ACTIONS(164),
    [sym_bne_opcode] = ACTIONS(164),
    [sym_bpl_opcode] = ACTIONS(164),
    [sym_brk_opcode] = ACTIONS(164),
    [sym_bvc_opcode] = ACTIONS(164),
    [sym_bvs_opcode] = ACTIONS(164),
    [sym_clc_opcode] = ACTIONS(164),
    [sym_cld_opcode] = ACTIONS(164),
    [sym_cli_opcode] = ACTIONS(164),
    [sym_clv_opcode] = ACTIONS(164),
    [sym_cmp_opcode] = ACTIONS(164),
    [sym_cpx_opcode] = ACTIONS(164),
    [sym_cpy_opcode] = ACTIONS(164),
    [sym_dec_opcode] = ACTIONS(164),
    [sym_dex_opcode] = ACTIONS(164),
    [sym_dey_opcode] = ACTIONS(164),
    [sym_eor_opcode] = ACTIONS(164),
    [sym_inc_opcode] = ACTIONS(164),
    [sym_inx_opcode] = ACTIONS(164),
    [sym_iny_opcode] = ACTIONS(164),
    [sym_jmp_opcode] = ACTIONS(164),
    [sym_jsr_opcode] = ACTIONS(164),
    [sym_lda_opcode] = ACTIONS(164),
    [sym_ldx_opcode] = ACTIONS(164),
    [sym_ldy_opcode] = ACTIONS(164),
    [sym_lsr_opcode] = ACTIONS(164),
    [sym_nop_opcode] = ACTIONS(164),
    [sym_ora_opcode] = ACTIONS(164),
    [sym_pha_opcode] = ACTIONS(164),
    [sym_php_opcode] = ACTIONS(164),
    [sym_pla_opcode] = ACTIONS(164),
    [sym_plp_opcode] = ACTIONS(164),
    [sym_rol_opcode] = ACTIONS(164),
    [sym_ror_opcode] = ACTIONS(164),
    [sym_rti_opcode] = ACTIONS(164),
    [sym_rts_opcode] = ACTIONS(164),
    [sym_sbc_opcode] = ACTIONS(164),
    [sym_sec_opcode] = ACTIONS(164),
    [sym_sed_opcode] = ACTIONS(164),
    [sym_sei_opcode] = ACTIONS(164),
    [sym_sta_opcode] = ACTIONS(164),
    [sym_stx_opcode] = ACTIONS(164),
    [sym_sty_opcode] = ACTIONS(164),
    [sym_tax_opcode] = ACTIONS(164),
    [sym_tay_opcode] = ACTIONS(164),
    [sym_tsx_opcode] = ACTIONS(164),
    [sym_txa_opcode] = ACTIONS(164),
    [sym_tcs_opcode] = ACTIONS(164),
    [sym_tya_opcode] = ACTIONS(164),
    [sym_a16_ctrl_cmd] = ACTIONS(159),
    [sym_a8_ctrl_cmd] = ACTIONS(159),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(159),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(159),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(159),
  },
  [16] = {
    [aux_sym_addr_ctrl_cmd_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(166),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(166),
    [anon_sym_COMMA] = ACTIONS(128),
    [sym_adc_opcode] = ACTIONS(168),
    [sym_and_opcode] = ACTIONS(168),
    [sym_asl_opcode] = ACTIONS(168),
    [sym_bcc_opcode] = ACTIONS(168),
    [sym_bcs_opcode] = ACTIONS(168),
    [sym_beq_opcode] = ACTIONS(168),
    [sym_bit_opcode] = ACTIONS(168),
    [sym_bmi_opcode] = ACTIONS(168),
    [sym_bne_opcode] = ACTIONS(168),
    [sym_bpl_opcode] = ACTIONS(168),
    [sym_brk_opcode] = ACTIONS(168),
    [sym_bvc_opcode] = ACTIONS(168),
    [sym_bvs_opcode] = ACTIONS(168),
    [sym_clc_opcode] = ACTIONS(168),
    [sym_cld_opcode] = ACTIONS(168),
    [sym_cli_opcode] = ACTIONS(168),
    [sym_clv_opcode] = ACTIONS(168),
    [sym_cmp_opcode] = ACTIONS(168),
    [sym_cpx_opcode] = ACTIONS(168),
    [sym_cpy_opcode] = ACTIONS(168),
    [sym_dec_opcode] = ACTIONS(168),
    [sym_dex_opcode] = ACTIONS(168),
    [sym_dey_opcode] = ACTIONS(168),
    [sym_eor_opcode] = ACTIONS(168),
    [sym_inc_opcode] = ACTIONS(168),
    [sym_inx_opcode] = ACTIONS(168),
    [sym_iny_opcode] = ACTIONS(168),
    [sym_jmp_opcode] = ACTIONS(168),
    [sym_jsr_opcode] = ACTIONS(168),
    [sym_lda_opcode] = ACTIONS(168),
    [sym_ldx_opcode] = ACTIONS(168),
    [sym_ldy_opcode] = ACTIONS(168),
    [sym_lsr_opcode] = ACTIONS(168),
    [sym_nop_opcode] = ACTIONS(168),
    [sym_ora_opcode] = ACTIONS(168),
    [sym_pha_opcode] = ACTIONS(168),
    [sym_php_opcode] = ACTIONS(168),
    [sym_pla_opcode] = ACTIONS(168),
    [sym_plp_opcode] = ACTIONS(168),
    [sym_rol_opcode] = ACTIONS(168),
    [sym_ror_opcode] = ACTIONS(168),
    [sym_rti_opcode] = ACTIONS(168),
    [sym_rts_opcode] = ACTIONS(168),
    [sym_sbc_opcode] = ACTIONS(168),
    [sym_sec_opcode] = ACTIONS(168),
    [sym_sed_opcode] = ACTIONS(168),
    [sym_sei_opcode] = ACTIONS(168),
    [sym_sta_opcode] = ACTIONS(168),
    [sym_stx_opcode] = ACTIONS(168),
    [sym_sty_opcode] = ACTIONS(168),
    [sym_tax_opcode] = ACTIONS(168),
    [sym_tay_opcode] = ACTIONS(168),
    [sym_tsx_opcode] = ACTIONS(168),
    [sym_txa_opcode] = ACTIONS(168),
    [sym_tcs_opcode] = ACTIONS(168),
    [sym_tya_opcode] = ACTIONS(168),
    [sym_a16_ctrl_cmd] = ACTIONS(166),
    [sym_a8_ctrl_cmd] = ACTIONS(166),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(166),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(166),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(166),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(170),
    [anon_sym_COMMA] = ACTIONS(170),
    [sym_adc_opcode] = ACTIONS(172),
    [sym_and_opcode] = ACTIONS(172),
    [sym_asl_opcode] = ACTIONS(172),
    [sym_bcc_opcode] = ACTIONS(172),
    [sym_bcs_opcode] = ACTIONS(172),
    [sym_beq_opcode] = ACTIONS(172),
    [sym_bit_opcode] = ACTIONS(172),
    [sym_bmi_opcode] = ACTIONS(172),
    [sym_bne_opcode] = ACTIONS(172),
    [sym_bpl_opcode] = ACTIONS(172),
    [sym_brk_opcode] = ACTIONS(172),
    [sym_bvc_opcode] = ACTIONS(172),
    [sym_bvs_opcode] = ACTIONS(172),
    [sym_clc_opcode] = ACTIONS(172),
    [sym_cld_opcode] = ACTIONS(172),
    [sym_cli_opcode] = ACTIONS(172),
    [sym_clv_opcode] = ACTIONS(172),
    [sym_cmp_opcode] = ACTIONS(172),
    [sym_cpx_opcode] = ACTIONS(172),
    [sym_cpy_opcode] = ACTIONS(172),
    [sym_dec_opcode] = ACTIONS(172),
    [sym_dex_opcode] = ACTIONS(172),
    [sym_dey_opcode] = ACTIONS(172),
    [sym_eor_opcode] = ACTIONS(172),
    [sym_inc_opcode] = ACTIONS(172),
    [sym_inx_opcode] = ACTIONS(172),
    [sym_iny_opcode] = ACTIONS(172),
    [sym_jmp_opcode] = ACTIONS(172),
    [sym_jsr_opcode] = ACTIONS(172),
    [sym_lda_opcode] = ACTIONS(172),
    [sym_ldx_opcode] = ACTIONS(172),
    [sym_ldy_opcode] = ACTIONS(172),
    [sym_lsr_opcode] = ACTIONS(172),
    [sym_nop_opcode] = ACTIONS(172),
    [sym_ora_opcode] = ACTIONS(172),
    [sym_pha_opcode] = ACTIONS(172),
    [sym_php_opcode] = ACTIONS(172),
    [sym_pla_opcode] = ACTIONS(172),
    [sym_plp_opcode] = ACTIONS(172),
    [sym_rol_opcode] = ACTIONS(172),
    [sym_ror_opcode] = ACTIONS(172),
    [sym_rti_opcode] = ACTIONS(172),
    [sym_rts_opcode] = ACTIONS(172),
    [sym_sbc_opcode] = ACTIONS(172),
    [sym_sec_opcode] = ACTIONS(172),
    [sym_sed_opcode] = ACTIONS(172),
    [sym_sei_opcode] = ACTIONS(172),
    [sym_sta_opcode] = ACTIONS(172),
    [sym_stx_opcode] = ACTIONS(172),
    [sym_sty_opcode] = ACTIONS(172),
    [sym_tax_opcode] = ACTIONS(172),
    [sym_tay_opcode] = ACTIONS(172),
    [sym_tsx_opcode] = ACTIONS(172),
    [sym_txa_opcode] = ACTIONS(172),
    [sym_tcs_opcode] = ACTIONS(172),
    [sym_tya_opcode] = ACTIONS(172),
    [sym_a16_ctrl_cmd] = ACTIONS(170),
    [sym_a8_ctrl_cmd] = ACTIONS(170),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(170),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(170),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(170),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(174),
    [anon_sym_COMMA] = ACTIONS(176),
    [sym_adc_opcode] = ACTIONS(178),
    [sym_and_opcode] = ACTIONS(178),
    [sym_asl_opcode] = ACTIONS(178),
    [sym_bcc_opcode] = ACTIONS(178),
    [sym_bcs_opcode] = ACTIONS(178),
    [sym_beq_opcode] = ACTIONS(178),
    [sym_bit_opcode] = ACTIONS(178),
    [sym_bmi_opcode] = ACTIONS(178),
    [sym_bne_opcode] = ACTIONS(178),
    [sym_bpl_opcode] = ACTIONS(178),
    [sym_brk_opcode] = ACTIONS(178),
    [sym_bvc_opcode] = ACTIONS(178),
    [sym_bvs_opcode] = ACTIONS(178),
    [sym_clc_opcode] = ACTIONS(178),
    [sym_cld_opcode] = ACTIONS(178),
    [sym_cli_opcode] = ACTIONS(178),
    [sym_clv_opcode] = ACTIONS(178),
    [sym_cmp_opcode] = ACTIONS(178),
    [sym_cpx_opcode] = ACTIONS(178),
    [sym_cpy_opcode] = ACTIONS(178),
    [sym_dec_opcode] = ACTIONS(178),
    [sym_dex_opcode] = ACTIONS(178),
    [sym_dey_opcode] = ACTIONS(178),
    [sym_eor_opcode] = ACTIONS(178),
    [sym_inc_opcode] = ACTIONS(178),
    [sym_inx_opcode] = ACTIONS(178),
    [sym_iny_opcode] = ACTIONS(178),
    [sym_jmp_opcode] = ACTIONS(178),
    [sym_jsr_opcode] = ACTIONS(178),
    [sym_lda_opcode] = ACTIONS(178),
    [sym_ldx_opcode] = ACTIONS(178),
    [sym_ldy_opcode] = ACTIONS(178),
    [sym_lsr_opcode] = ACTIONS(178),
    [sym_nop_opcode] = ACTIONS(178),
    [sym_ora_opcode] = ACTIONS(178),
    [sym_pha_opcode] = ACTIONS(178),
    [sym_php_opcode] = ACTIONS(178),
    [sym_pla_opcode] = ACTIONS(178),
    [sym_plp_opcode] = ACTIONS(178),
    [sym_rol_opcode] = ACTIONS(178),
    [sym_ror_opcode] = ACTIONS(178),
    [sym_rti_opcode] = ACTIONS(178),
    [sym_rts_opcode] = ACTIONS(178),
    [sym_sbc_opcode] = ACTIONS(178),
    [sym_sec_opcode] = ACTIONS(178),
    [sym_sed_opcode] = ACTIONS(178),
    [sym_sei_opcode] = ACTIONS(178),
    [sym_sta_opcode] = ACTIONS(178),
    [sym_stx_opcode] = ACTIONS(178),
    [sym_sty_opcode] = ACTIONS(178),
    [sym_tax_opcode] = ACTIONS(178),
    [sym_tay_opcode] = ACTIONS(178),
    [sym_tsx_opcode] = ACTIONS(178),
    [sym_txa_opcode] = ACTIONS(178),
    [sym_tcs_opcode] = ACTIONS(178),
    [sym_tya_opcode] = ACTIONS(178),
    [sym_a16_ctrl_cmd] = ACTIONS(174),
    [sym_a8_ctrl_cmd] = ACTIONS(174),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(174),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(174),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(174),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(180),
    [anon_sym_COMMA] = ACTIONS(182),
    [sym_adc_opcode] = ACTIONS(184),
    [sym_and_opcode] = ACTIONS(184),
    [sym_asl_opcode] = ACTIONS(184),
    [sym_bcc_opcode] = ACTIONS(184),
    [sym_bcs_opcode] = ACTIONS(184),
    [sym_beq_opcode] = ACTIONS(184),
    [sym_bit_opcode] = ACTIONS(184),
    [sym_bmi_opcode] = ACTIONS(184),
    [sym_bne_opcode] = ACTIONS(184),
    [sym_bpl_opcode] = ACTIONS(184),
    [sym_brk_opcode] = ACTIONS(184),
    [sym_bvc_opcode] = ACTIONS(184),
    [sym_bvs_opcode] = ACTIONS(184),
    [sym_clc_opcode] = ACTIONS(184),
    [sym_cld_opcode] = ACTIONS(184),
    [sym_cli_opcode] = ACTIONS(184),
    [sym_clv_opcode] = ACTIONS(184),
    [sym_cmp_opcode] = ACTIONS(184),
    [sym_cpx_opcode] = ACTIONS(184),
    [sym_cpy_opcode] = ACTIONS(184),
    [sym_dec_opcode] = ACTIONS(184),
    [sym_dex_opcode] = ACTIONS(184),
    [sym_dey_opcode] = ACTIONS(184),
    [sym_eor_opcode] = ACTIONS(184),
    [sym_inc_opcode] = ACTIONS(184),
    [sym_inx_opcode] = ACTIONS(184),
    [sym_iny_opcode] = ACTIONS(184),
    [sym_jmp_opcode] = ACTIONS(184),
    [sym_jsr_opcode] = ACTIONS(184),
    [sym_lda_opcode] = ACTIONS(184),
    [sym_ldx_opcode] = ACTIONS(184),
    [sym_ldy_opcode] = ACTIONS(184),
    [sym_lsr_opcode] = ACTIONS(184),
    [sym_nop_opcode] = ACTIONS(184),
    [sym_ora_opcode] = ACTIONS(184),
    [sym_pha_opcode] = ACTIONS(184),
    [sym_php_opcode] = ACTIONS(184),
    [sym_pla_opcode] = ACTIONS(184),
    [sym_plp_opcode] = ACTIONS(184),
    [sym_rol_opcode] = ACTIONS(184),
    [sym_ror_opcode] = ACTIONS(184),
    [sym_rti_opcode] = ACTIONS(184),
    [sym_rts_opcode] = ACTIONS(184),
    [sym_sbc_opcode] = ACTIONS(184),
    [sym_sec_opcode] = ACTIONS(184),
    [sym_sed_opcode] = ACTIONS(184),
    [sym_sei_opcode] = ACTIONS(184),
    [sym_sta_opcode] = ACTIONS(184),
    [sym_stx_opcode] = ACTIONS(184),
    [sym_sty_opcode] = ACTIONS(184),
    [sym_tax_opcode] = ACTIONS(184),
    [sym_tay_opcode] = ACTIONS(184),
    [sym_tsx_opcode] = ACTIONS(184),
    [sym_txa_opcode] = ACTIONS(184),
    [sym_tcs_opcode] = ACTIONS(184),
    [sym_tya_opcode] = ACTIONS(184),
    [sym_a16_ctrl_cmd] = ACTIONS(180),
    [sym_a8_ctrl_cmd] = ACTIONS(180),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(180),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(180),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(180),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(180),
    [anon_sym_COMMA] = ACTIONS(186),
    [sym_adc_opcode] = ACTIONS(184),
    [sym_and_opcode] = ACTIONS(184),
    [sym_asl_opcode] = ACTIONS(184),
    [sym_bcc_opcode] = ACTIONS(184),
    [sym_bcs_opcode] = ACTIONS(184),
    [sym_beq_opcode] = ACTIONS(184),
    [sym_bit_opcode] = ACTIONS(184),
    [sym_bmi_opcode] = ACTIONS(184),
    [sym_bne_opcode] = ACTIONS(184),
    [sym_bpl_opcode] = ACTIONS(184),
    [sym_brk_opcode] = ACTIONS(184),
    [sym_bvc_opcode] = ACTIONS(184),
    [sym_bvs_opcode] = ACTIONS(184),
    [sym_clc_opcode] = ACTIONS(184),
    [sym_cld_opcode] = ACTIONS(184),
    [sym_cli_opcode] = ACTIONS(184),
    [sym_clv_opcode] = ACTIONS(184),
    [sym_cmp_opcode] = ACTIONS(184),
    [sym_cpx_opcode] = ACTIONS(184),
    [sym_cpy_opcode] = ACTIONS(184),
    [sym_dec_opcode] = ACTIONS(184),
    [sym_dex_opcode] = ACTIONS(184),
    [sym_dey_opcode] = ACTIONS(184),
    [sym_eor_opcode] = ACTIONS(184),
    [sym_inc_opcode] = ACTIONS(184),
    [sym_inx_opcode] = ACTIONS(184),
    [sym_iny_opcode] = ACTIONS(184),
    [sym_jmp_opcode] = ACTIONS(184),
    [sym_jsr_opcode] = ACTIONS(184),
    [sym_lda_opcode] = ACTIONS(184),
    [sym_ldx_opcode] = ACTIONS(184),
    [sym_ldy_opcode] = ACTIONS(184),
    [sym_lsr_opcode] = ACTIONS(184),
    [sym_nop_opcode] = ACTIONS(184),
    [sym_ora_opcode] = ACTIONS(184),
    [sym_pha_opcode] = ACTIONS(184),
    [sym_php_opcode] = ACTIONS(184),
    [sym_pla_opcode] = ACTIONS(184),
    [sym_plp_opcode] = ACTIONS(184),
    [sym_rol_opcode] = ACTIONS(184),
    [sym_ror_opcode] = ACTIONS(184),
    [sym_rti_opcode] = ACTIONS(184),
    [sym_rts_opcode] = ACTIONS(184),
    [sym_sbc_opcode] = ACTIONS(184),
    [sym_sec_opcode] = ACTIONS(184),
    [sym_sed_opcode] = ACTIONS(184),
    [sym_sei_opcode] = ACTIONS(184),
    [sym_sta_opcode] = ACTIONS(184),
    [sym_stx_opcode] = ACTIONS(184),
    [sym_sty_opcode] = ACTIONS(184),
    [sym_tax_opcode] = ACTIONS(184),
    [sym_tay_opcode] = ACTIONS(184),
    [sym_tsx_opcode] = ACTIONS(184),
    [sym_txa_opcode] = ACTIONS(184),
    [sym_tcs_opcode] = ACTIONS(184),
    [sym_tya_opcode] = ACTIONS(184),
    [sym_a16_ctrl_cmd] = ACTIONS(180),
    [sym_a8_ctrl_cmd] = ACTIONS(180),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(180),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(180),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(180),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(148),
    [anon_sym_COMMA] = ACTIONS(148),
    [sym_adc_opcode] = ACTIONS(153),
    [sym_and_opcode] = ACTIONS(153),
    [sym_asl_opcode] = ACTIONS(153),
    [sym_bcc_opcode] = ACTIONS(153),
    [sym_bcs_opcode] = ACTIONS(153),
    [sym_beq_opcode] = ACTIONS(153),
    [sym_bit_opcode] = ACTIONS(153),
    [sym_bmi_opcode] = ACTIONS(153),
    [sym_bne_opcode] = ACTIONS(153),
    [sym_bpl_opcode] = ACTIONS(153),
    [sym_brk_opcode] = ACTIONS(153),
    [sym_bvc_opcode] = ACTIONS(153),
    [sym_bvs_opcode] = ACTIONS(153),
    [sym_clc_opcode] = ACTIONS(153),
    [sym_cld_opcode] = ACTIONS(153),
    [sym_cli_opcode] = ACTIONS(153),
    [sym_clv_opcode] = ACTIONS(153),
    [sym_cmp_opcode] = ACTIONS(153),
    [sym_cpx_opcode] = ACTIONS(153),
    [sym_cpy_opcode] = ACTIONS(153),
    [sym_dec_opcode] = ACTIONS(153),
    [sym_dex_opcode] = ACTIONS(153),
    [sym_dey_opcode] = ACTIONS(153),
    [sym_eor_opcode] = ACTIONS(153),
    [sym_inc_opcode] = ACTIONS(153),
    [sym_inx_opcode] = ACTIONS(153),
    [sym_iny_opcode] = ACTIONS(153),
    [sym_jmp_opcode] = ACTIONS(153),
    [sym_jsr_opcode] = ACTIONS(153),
    [sym_lda_opcode] = ACTIONS(153),
    [sym_ldx_opcode] = ACTIONS(153),
    [sym_ldy_opcode] = ACTIONS(153),
    [sym_lsr_opcode] = ACTIONS(153),
    [sym_nop_opcode] = ACTIONS(153),
    [sym_ora_opcode] = ACTIONS(153),
    [sym_pha_opcode] = ACTIONS(153),
    [sym_php_opcode] = ACTIONS(153),
    [sym_pla_opcode] = ACTIONS(153),
    [sym_plp_opcode] = ACTIONS(153),
    [sym_rol_opcode] = ACTIONS(153),
    [sym_ror_opcode] = ACTIONS(153),
    [sym_rti_opcode] = ACTIONS(153),
    [sym_rts_opcode] = ACTIONS(153),
    [sym_sbc_opcode] = ACTIONS(153),
    [sym_sec_opcode] = ACTIONS(153),
    [sym_sed_opcode] = ACTIONS(153),
    [sym_sei_opcode] = ACTIONS(153),
    [sym_sta_opcode] = ACTIONS(153),
    [sym_stx_opcode] = ACTIONS(153),
    [sym_sty_opcode] = ACTIONS(153),
    [sym_tax_opcode] = ACTIONS(153),
    [sym_tay_opcode] = ACTIONS(153),
    [sym_tsx_opcode] = ACTIONS(153),
    [sym_txa_opcode] = ACTIONS(153),
    [sym_tcs_opcode] = ACTIONS(153),
    [sym_tya_opcode] = ACTIONS(153),
    [sym_a16_ctrl_cmd] = ACTIONS(148),
    [sym_a8_ctrl_cmd] = ACTIONS(148),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(148),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(148),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(148),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(159),
    [sym_adc_opcode] = ACTIONS(164),
    [sym_and_opcode] = ACTIONS(164),
    [sym_asl_opcode] = ACTIONS(164),
    [sym_bcc_opcode] = ACTIONS(164),
    [sym_bcs_opcode] = ACTIONS(164),
    [sym_beq_opcode] = ACTIONS(164),
    [sym_bit_opcode] = ACTIONS(164),
    [sym_bmi_opcode] = ACTIONS(164),
    [sym_bne_opcode] = ACTIONS(164),
    [sym_bpl_opcode] = ACTIONS(164),
    [sym_brk_opcode] = ACTIONS(164),
    [sym_bvc_opcode] = ACTIONS(164),
    [sym_bvs_opcode] = ACTIONS(164),
    [sym_clc_opcode] = ACTIONS(164),
    [sym_cld_opcode] = ACTIONS(164),
    [sym_cli_opcode] = ACTIONS(164),
    [sym_clv_opcode] = ACTIONS(164),
    [sym_cmp_opcode] = ACTIONS(164),
    [sym_cpx_opcode] = ACTIONS(164),
    [sym_cpy_opcode] = ACTIONS(164),
    [sym_dec_opcode] = ACTIONS(164),
    [sym_dex_opcode] = ACTIONS(164),
    [sym_dey_opcode] = ACTIONS(164),
    [sym_eor_opcode] = ACTIONS(164),
    [sym_inc_opcode] = ACTIONS(164),
    [sym_inx_opcode] = ACTIONS(164),
    [sym_iny_opcode] = ACTIONS(164),
    [sym_jmp_opcode] = ACTIONS(164),
    [sym_jsr_opcode] = ACTIONS(164),
    [sym_lda_opcode] = ACTIONS(164),
    [sym_ldx_opcode] = ACTIONS(164),
    [sym_ldy_opcode] = ACTIONS(164),
    [sym_lsr_opcode] = ACTIONS(164),
    [sym_nop_opcode] = ACTIONS(164),
    [sym_ora_opcode] = ACTIONS(164),
    [sym_pha_opcode] = ACTIONS(164),
    [sym_php_opcode] = ACTIONS(164),
    [sym_pla_opcode] = ACTIONS(164),
    [sym_plp_opcode] = ACTIONS(164),
    [sym_rol_opcode] = ACTIONS(164),
    [sym_ror_opcode] = ACTIONS(164),
    [sym_rti_opcode] = ACTIONS(164),
    [sym_rts_opcode] = ACTIONS(164),
    [sym_sbc_opcode] = ACTIONS(164),
    [sym_sec_opcode] = ACTIONS(164),
    [sym_sed_opcode] = ACTIONS(164),
    [sym_sei_opcode] = ACTIONS(164),
    [sym_sta_opcode] = ACTIONS(164),
    [sym_stx_opcode] = ACTIONS(164),
    [sym_sty_opcode] = ACTIONS(164),
    [sym_tax_opcode] = ACTIONS(164),
    [sym_tay_opcode] = ACTIONS(164),
    [sym_tsx_opcode] = ACTIONS(164),
    [sym_txa_opcode] = ACTIONS(164),
    [sym_tcs_opcode] = ACTIONS(164),
    [sym_tya_opcode] = ACTIONS(164),
    [sym_a16_ctrl_cmd] = ACTIONS(159),
    [sym_a8_ctrl_cmd] = ACTIONS(159),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(159),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(159),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(159),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(188),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(188),
    [anon_sym_COMMA] = ACTIONS(188),
    [sym_adc_opcode] = ACTIONS(191),
    [sym_and_opcode] = ACTIONS(191),
    [sym_asl_opcode] = ACTIONS(191),
    [sym_bcc_opcode] = ACTIONS(191),
    [sym_bcs_opcode] = ACTIONS(191),
    [sym_beq_opcode] = ACTIONS(191),
    [sym_bit_opcode] = ACTIONS(191),
    [sym_bmi_opcode] = ACTIONS(191),
    [sym_bne_opcode] = ACTIONS(191),
    [sym_bpl_opcode] = ACTIONS(191),
    [sym_brk_opcode] = ACTIONS(191),
    [sym_bvc_opcode] = ACTIONS(191),
    [sym_bvs_opcode] = ACTIONS(191),
    [sym_clc_opcode] = ACTIONS(191),
    [sym_cld_opcode] = ACTIONS(191),
    [sym_cli_opcode] = ACTIONS(191),
    [sym_clv_opcode] = ACTIONS(191),
    [sym_cmp_opcode] = ACTIONS(191),
    [sym_cpx_opcode] = ACTIONS(191),
    [sym_cpy_opcode] = ACTIONS(191),
    [sym_dec_opcode] = ACTIONS(191),
    [sym_dex_opcode] = ACTIONS(191),
    [sym_dey_opcode] = ACTIONS(191),
    [sym_eor_opcode] = ACTIONS(191),
    [sym_inc_opcode] = ACTIONS(191),
    [sym_inx_opcode] = ACTIONS(191),
    [sym_iny_opcode] = ACTIONS(191),
    [sym_jmp_opcode] = ACTIONS(191),
    [sym_jsr_opcode] = ACTIONS(191),
    [sym_lda_opcode] = ACTIONS(191),
    [sym_ldx_opcode] = ACTIONS(191),
    [sym_ldy_opcode] = ACTIONS(191),
    [sym_lsr_opcode] = ACTIONS(191),
    [sym_nop_opcode] = ACTIONS(191),
    [sym_ora_opcode] = ACTIONS(191),
    [sym_pha_opcode] = ACTIONS(191),
    [sym_php_opcode] = ACTIONS(191),
    [sym_pla_opcode] = ACTIONS(191),
    [sym_plp_opcode] = ACTIONS(191),
    [sym_rol_opcode] = ACTIONS(191),
    [sym_ror_opcode] = ACTIONS(191),
    [sym_rti_opcode] = ACTIONS(191),
    [sym_rts_opcode] = ACTIONS(191),
    [sym_sbc_opcode] = ACTIONS(191),
    [sym_sec_opcode] = ACTIONS(191),
    [sym_sed_opcode] = ACTIONS(191),
    [sym_sei_opcode] = ACTIONS(191),
    [sym_sta_opcode] = ACTIONS(191),
    [sym_stx_opcode] = ACTIONS(191),
    [sym_sty_opcode] = ACTIONS(191),
    [sym_tax_opcode] = ACTIONS(191),
    [sym_tay_opcode] = ACTIONS(191),
    [sym_tsx_opcode] = ACTIONS(191),
    [sym_txa_opcode] = ACTIONS(191),
    [sym_tcs_opcode] = ACTIONS(191),
    [sym_tya_opcode] = ACTIONS(191),
    [sym_a16_ctrl_cmd] = ACTIONS(188),
    [sym_a8_ctrl_cmd] = ACTIONS(188),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(188),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(188),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(188),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(194),
    [anon_sym_COMMA] = ACTIONS(196),
    [sym_adc_opcode] = ACTIONS(198),
    [sym_and_opcode] = ACTIONS(198),
    [sym_asl_opcode] = ACTIONS(198),
    [sym_bcc_opcode] = ACTIONS(198),
    [sym_bcs_opcode] = ACTIONS(198),
    [sym_beq_opcode] = ACTIONS(198),
    [sym_bit_opcode] = ACTIONS(198),
    [sym_bmi_opcode] = ACTIONS(198),
    [sym_bne_opcode] = ACTIONS(198),
    [sym_bpl_opcode] = ACTIONS(198),
    [sym_brk_opcode] = ACTIONS(198),
    [sym_bvc_opcode] = ACTIONS(198),
    [sym_bvs_opcode] = ACTIONS(198),
    [sym_clc_opcode] = ACTIONS(198),
    [sym_cld_opcode] = ACTIONS(198),
    [sym_cli_opcode] = ACTIONS(198),
    [sym_clv_opcode] = ACTIONS(198),
    [sym_cmp_opcode] = ACTIONS(198),
    [sym_cpx_opcode] = ACTIONS(198),
    [sym_cpy_opcode] = ACTIONS(198),
    [sym_dec_opcode] = ACTIONS(198),
    [sym_dex_opcode] = ACTIONS(198),
    [sym_dey_opcode] = ACTIONS(198),
    [sym_eor_opcode] = ACTIONS(198),
    [sym_inc_opcode] = ACTIONS(198),
    [sym_inx_opcode] = ACTIONS(198),
    [sym_iny_opcode] = ACTIONS(198),
    [sym_jmp_opcode] = ACTIONS(198),
    [sym_jsr_opcode] = ACTIONS(198),
    [sym_lda_opcode] = ACTIONS(198),
    [sym_ldx_opcode] = ACTIONS(198),
    [sym_ldy_opcode] = ACTIONS(198),
    [sym_lsr_opcode] = ACTIONS(198),
    [sym_nop_opcode] = ACTIONS(198),
    [sym_ora_opcode] = ACTIONS(198),
    [sym_pha_opcode] = ACTIONS(198),
    [sym_php_opcode] = ACTIONS(198),
    [sym_pla_opcode] = ACTIONS(198),
    [sym_plp_opcode] = ACTIONS(198),
    [sym_rol_opcode] = ACTIONS(198),
    [sym_ror_opcode] = ACTIONS(198),
    [sym_rti_opcode] = ACTIONS(198),
    [sym_rts_opcode] = ACTIONS(198),
    [sym_sbc_opcode] = ACTIONS(198),
    [sym_sec_opcode] = ACTIONS(198),
    [sym_sed_opcode] = ACTIONS(198),
    [sym_sei_opcode] = ACTIONS(198),
    [sym_sta_opcode] = ACTIONS(198),
    [sym_stx_opcode] = ACTIONS(198),
    [sym_sty_opcode] = ACTIONS(198),
    [sym_tax_opcode] = ACTIONS(198),
    [sym_tay_opcode] = ACTIONS(198),
    [sym_tsx_opcode] = ACTIONS(198),
    [sym_txa_opcode] = ACTIONS(198),
    [sym_tcs_opcode] = ACTIONS(198),
    [sym_tya_opcode] = ACTIONS(198),
    [sym_a16_ctrl_cmd] = ACTIONS(194),
    [sym_a8_ctrl_cmd] = ACTIONS(194),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(194),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(194),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(194),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(194),
    [anon_sym_COMMA] = ACTIONS(200),
    [sym_adc_opcode] = ACTIONS(198),
    [sym_and_opcode] = ACTIONS(198),
    [sym_asl_opcode] = ACTIONS(198),
    [sym_bcc_opcode] = ACTIONS(198),
    [sym_bcs_opcode] = ACTIONS(198),
    [sym_beq_opcode] = ACTIONS(198),
    [sym_bit_opcode] = ACTIONS(198),
    [sym_bmi_opcode] = ACTIONS(198),
    [sym_bne_opcode] = ACTIONS(198),
    [sym_bpl_opcode] = ACTIONS(198),
    [sym_brk_opcode] = ACTIONS(198),
    [sym_bvc_opcode] = ACTIONS(198),
    [sym_bvs_opcode] = ACTIONS(198),
    [sym_clc_opcode] = ACTIONS(198),
    [sym_cld_opcode] = ACTIONS(198),
    [sym_cli_opcode] = ACTIONS(198),
    [sym_clv_opcode] = ACTIONS(198),
    [sym_cmp_opcode] = ACTIONS(198),
    [sym_cpx_opcode] = ACTIONS(198),
    [sym_cpy_opcode] = ACTIONS(198),
    [sym_dec_opcode] = ACTIONS(198),
    [sym_dex_opcode] = ACTIONS(198),
    [sym_dey_opcode] = ACTIONS(198),
    [sym_eor_opcode] = ACTIONS(198),
    [sym_inc_opcode] = ACTIONS(198),
    [sym_inx_opcode] = ACTIONS(198),
    [sym_iny_opcode] = ACTIONS(198),
    [sym_jmp_opcode] = ACTIONS(198),
    [sym_jsr_opcode] = ACTIONS(198),
    [sym_lda_opcode] = ACTIONS(198),
    [sym_ldx_opcode] = ACTIONS(198),
    [sym_ldy_opcode] = ACTIONS(198),
    [sym_lsr_opcode] = ACTIONS(198),
    [sym_nop_opcode] = ACTIONS(198),
    [sym_ora_opcode] = ACTIONS(198),
    [sym_pha_opcode] = ACTIONS(198),
    [sym_php_opcode] = ACTIONS(198),
    [sym_pla_opcode] = ACTIONS(198),
    [sym_plp_opcode] = ACTIONS(198),
    [sym_rol_opcode] = ACTIONS(198),
    [sym_ror_opcode] = ACTIONS(198),
    [sym_rti_opcode] = ACTIONS(198),
    [sym_rts_opcode] = ACTIONS(198),
    [sym_sbc_opcode] = ACTIONS(198),
    [sym_sec_opcode] = ACTIONS(198),
    [sym_sed_opcode] = ACTIONS(198),
    [sym_sei_opcode] = ACTIONS(198),
    [sym_sta_opcode] = ACTIONS(198),
    [sym_stx_opcode] = ACTIONS(198),
    [sym_sty_opcode] = ACTIONS(198),
    [sym_tax_opcode] = ACTIONS(198),
    [sym_tay_opcode] = ACTIONS(198),
    [sym_tsx_opcode] = ACTIONS(198),
    [sym_txa_opcode] = ACTIONS(198),
    [sym_tcs_opcode] = ACTIONS(198),
    [sym_tya_opcode] = ACTIONS(198),
    [sym_a16_ctrl_cmd] = ACTIONS(194),
    [sym_a8_ctrl_cmd] = ACTIONS(194),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(194),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(194),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(194),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(188),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(188),
    [anon_sym_COMMA] = ACTIONS(118),
    [sym_adc_opcode] = ACTIONS(191),
    [sym_and_opcode] = ACTIONS(191),
    [sym_asl_opcode] = ACTIONS(191),
    [sym_bcc_opcode] = ACTIONS(191),
    [sym_bcs_opcode] = ACTIONS(191),
    [sym_beq_opcode] = ACTIONS(191),
    [sym_bit_opcode] = ACTIONS(191),
    [sym_bmi_opcode] = ACTIONS(191),
    [sym_bne_opcode] = ACTIONS(191),
    [sym_bpl_opcode] = ACTIONS(191),
    [sym_brk_opcode] = ACTIONS(191),
    [sym_bvc_opcode] = ACTIONS(191),
    [sym_bvs_opcode] = ACTIONS(191),
    [sym_clc_opcode] = ACTIONS(191),
    [sym_cld_opcode] = ACTIONS(191),
    [sym_cli_opcode] = ACTIONS(191),
    [sym_clv_opcode] = ACTIONS(191),
    [sym_cmp_opcode] = ACTIONS(191),
    [sym_cpx_opcode] = ACTIONS(191),
    [sym_cpy_opcode] = ACTIONS(191),
    [sym_dec_opcode] = ACTIONS(191),
    [sym_dex_opcode] = ACTIONS(191),
    [sym_dey_opcode] = ACTIONS(191),
    [sym_eor_opcode] = ACTIONS(191),
    [sym_inc_opcode] = ACTIONS(191),
    [sym_inx_opcode] = ACTIONS(191),
    [sym_iny_opcode] = ACTIONS(191),
    [sym_jmp_opcode] = ACTIONS(191),
    [sym_jsr_opcode] = ACTIONS(191),
    [sym_lda_opcode] = ACTIONS(191),
    [sym_ldx_opcode] = ACTIONS(191),
    [sym_ldy_opcode] = ACTIONS(191),
    [sym_lsr_opcode] = ACTIONS(191),
    [sym_nop_opcode] = ACTIONS(191),
    [sym_ora_opcode] = ACTIONS(191),
    [sym_pha_opcode] = ACTIONS(191),
    [sym_php_opcode] = ACTIONS(191),
    [sym_pla_opcode] = ACTIONS(191),
    [sym_plp_opcode] = ACTIONS(191),
    [sym_rol_opcode] = ACTIONS(191),
    [sym_ror_opcode] = ACTIONS(191),
    [sym_rti_opcode] = ACTIONS(191),
    [sym_rts_opcode] = ACTIONS(191),
    [sym_sbc_opcode] = ACTIONS(191),
    [sym_sec_opcode] = ACTIONS(191),
    [sym_sed_opcode] = ACTIONS(191),
    [sym_sei_opcode] = ACTIONS(191),
    [sym_sta_opcode] = ACTIONS(191),
    [sym_stx_opcode] = ACTIONS(191),
    [sym_sty_opcode] = ACTIONS(191),
    [sym_tax_opcode] = ACTIONS(191),
    [sym_tay_opcode] = ACTIONS(191),
    [sym_tsx_opcode] = ACTIONS(191),
    [sym_txa_opcode] = ACTIONS(191),
    [sym_tcs_opcode] = ACTIONS(191),
    [sym_tya_opcode] = ACTIONS(191),
    [sym_a16_ctrl_cmd] = ACTIONS(188),
    [sym_a8_ctrl_cmd] = ACTIONS(188),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(188),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(188),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(188),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(194),
    [anon_sym_COMMA] = ACTIONS(202),
    [sym_adc_opcode] = ACTIONS(198),
    [sym_and_opcode] = ACTIONS(198),
    [sym_asl_opcode] = ACTIONS(198),
    [sym_bcc_opcode] = ACTIONS(198),
    [sym_bcs_opcode] = ACTIONS(198),
    [sym_beq_opcode] = ACTIONS(198),
    [sym_bit_opcode] = ACTIONS(198),
    [sym_bmi_opcode] = ACTIONS(198),
    [sym_bne_opcode] = ACTIONS(198),
    [sym_bpl_opcode] = ACTIONS(198),
    [sym_brk_opcode] = ACTIONS(198),
    [sym_bvc_opcode] = ACTIONS(198),
    [sym_bvs_opcode] = ACTIONS(198),
    [sym_clc_opcode] = ACTIONS(198),
    [sym_cld_opcode] = ACTIONS(198),
    [sym_cli_opcode] = ACTIONS(198),
    [sym_clv_opcode] = ACTIONS(198),
    [sym_cmp_opcode] = ACTIONS(198),
    [sym_cpx_opcode] = ACTIONS(198),
    [sym_cpy_opcode] = ACTIONS(198),
    [sym_dec_opcode] = ACTIONS(198),
    [sym_dex_opcode] = ACTIONS(198),
    [sym_dey_opcode] = ACTIONS(198),
    [sym_eor_opcode] = ACTIONS(198),
    [sym_inc_opcode] = ACTIONS(198),
    [sym_inx_opcode] = ACTIONS(198),
    [sym_iny_opcode] = ACTIONS(198),
    [sym_jmp_opcode] = ACTIONS(198),
    [sym_jsr_opcode] = ACTIONS(198),
    [sym_lda_opcode] = ACTIONS(198),
    [sym_ldx_opcode] = ACTIONS(198),
    [sym_ldy_opcode] = ACTIONS(198),
    [sym_lsr_opcode] = ACTIONS(198),
    [sym_nop_opcode] = ACTIONS(198),
    [sym_ora_opcode] = ACTIONS(198),
    [sym_pha_opcode] = ACTIONS(198),
    [sym_php_opcode] = ACTIONS(198),
    [sym_pla_opcode] = ACTIONS(198),
    [sym_plp_opcode] = ACTIONS(198),
    [sym_rol_opcode] = ACTIONS(198),
    [sym_ror_opcode] = ACTIONS(198),
    [sym_rti_opcode] = ACTIONS(198),
    [sym_rts_opcode] = ACTIONS(198),
    [sym_sbc_opcode] = ACTIONS(198),
    [sym_sec_opcode] = ACTIONS(198),
    [sym_sed_opcode] = ACTIONS(198),
    [sym_sei_opcode] = ACTIONS(198),
    [sym_sta_opcode] = ACTIONS(198),
    [sym_stx_opcode] = ACTIONS(198),
    [sym_sty_opcode] = ACTIONS(198),
    [sym_tax_opcode] = ACTIONS(198),
    [sym_tay_opcode] = ACTIONS(198),
    [sym_tsx_opcode] = ACTIONS(198),
    [sym_txa_opcode] = ACTIONS(198),
    [sym_tcs_opcode] = ACTIONS(198),
    [sym_tya_opcode] = ACTIONS(198),
    [sym_a16_ctrl_cmd] = ACTIONS(194),
    [sym_a8_ctrl_cmd] = ACTIONS(194),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(194),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(194),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(194),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 7,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
      aux_sym_asciiz_ctrl_cmd_token1,
    ACTIONS(206), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [71] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 7,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
      aux_sym_asciiz_ctrl_cmd_token1,
    ACTIONS(210), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 7,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
      aux_sym_asciiz_ctrl_cmd_token1,
    ACTIONS(214), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 7,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
      aux_sym_asciiz_ctrl_cmd_token1,
    ACTIONS(218), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 7,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
      aux_sym_asciiz_ctrl_cmd_token1,
    ACTIONS(222), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 7,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
      aux_sym_asciiz_ctrl_cmd_token1,
    ACTIONS(226), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 7,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
      aux_sym_asciiz_ctrl_cmd_token1,
    ACTIONS(230), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 7,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
      aux_sym_asciiz_ctrl_cmd_token1,
    ACTIONS(234), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 7,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
      aux_sym_asciiz_ctrl_cmd_token1,
    ACTIONS(238), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 7,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
      aux_sym_asciiz_ctrl_cmd_token1,
    ACTIONS(242), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 7,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
      aux_sym_asciiz_ctrl_cmd_token1,
    ACTIONS(246), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 7,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
      aux_sym_asciiz_ctrl_cmd_token1,
    ACTIONS(250), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 7,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
      aux_sym_asciiz_ctrl_cmd_token1,
    ACTIONS(184), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 7,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
      aux_sym_asciiz_ctrl_cmd_token1,
    ACTIONS(198), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 7,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
      aux_sym_asciiz_ctrl_cmd_token1,
    ACTIONS(254), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 7,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
      aux_sym_asciiz_ctrl_cmd_token1,
    ACTIONS(258), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1136] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_symbol,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
      anon_sym_PERCENT,
    ACTIONS(266), 1,
      sym_dec_8,
    ACTIONS(268), 1,
      anon_sym_DOLLAR,
    ACTIONS(270), 1,
      anon_sym_h,
    ACTIONS(272), 1,
      aux_sym_hex_8_token2,
    ACTIONS(274), 1,
      sym_dec_16,
    ACTIONS(276), 1,
      sym_imm_prefix,
    STATE(20), 1,
      sym_operand_8,
    STATE(24), 1,
      sym_operand_16,
    STATE(5), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(6), 2,
      sym_bin_8,
      sym_hex_8,
  [1181] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_symbol,
    ACTIONS(264), 1,
      anon_sym_PERCENT,
    ACTIONS(266), 1,
      sym_dec_8,
    ACTIONS(268), 1,
      anon_sym_DOLLAR,
    ACTIONS(270), 1,
      anon_sym_h,
    ACTIONS(272), 1,
      aux_sym_hex_8_token2,
    ACTIONS(274), 1,
      sym_dec_16,
    ACTIONS(276), 1,
      sym_imm_prefix,
    STATE(40), 1,
      sym_operand_8,
    STATE(41), 1,
      sym_operand_16,
    STATE(5), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(6), 2,
      sym_bin_8,
      sym_hex_8,
  [1223] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_symbol,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
      anon_sym_PERCENT,
    ACTIONS(266), 1,
      sym_dec_8,
    ACTIONS(268), 1,
      anon_sym_DOLLAR,
    ACTIONS(270), 1,
      anon_sym_h,
    ACTIONS(272), 1,
      aux_sym_hex_8_token2,
    ACTIONS(274), 1,
      sym_dec_16,
    STATE(20), 1,
      sym_operand_8,
    STATE(24), 1,
      sym_operand_16,
    STATE(5), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(6), 2,
      sym_bin_8,
      sym_hex_8,
  [1265] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_symbol,
    ACTIONS(264), 1,
      anon_sym_PERCENT,
    ACTIONS(266), 1,
      sym_dec_8,
    ACTIONS(268), 1,
      anon_sym_DOLLAR,
    ACTIONS(270), 1,
      anon_sym_h,
    ACTIONS(272), 1,
      aux_sym_hex_8_token2,
    ACTIONS(274), 1,
      sym_dec_16,
    ACTIONS(276), 1,
      sym_imm_prefix,
    STATE(20), 1,
      sym_operand_8,
    STATE(27), 1,
      sym_operand_16,
    STATE(5), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(6), 2,
      sym_bin_8,
      sym_hex_8,
  [1307] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_symbol,
    ACTIONS(264), 1,
      anon_sym_PERCENT,
    ACTIONS(266), 1,
      sym_dec_8,
    ACTIONS(268), 1,
      anon_sym_DOLLAR,
    ACTIONS(270), 1,
      anon_sym_h,
    ACTIONS(272), 1,
      aux_sym_hex_8_token2,
    ACTIONS(274), 1,
      sym_dec_16,
    ACTIONS(276), 1,
      sym_imm_prefix,
    STATE(19), 1,
      sym_operand_8,
    STATE(25), 1,
      sym_operand_16,
    STATE(5), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(6), 2,
      sym_bin_8,
      sym_hex_8,
  [1349] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_symbol,
    ACTIONS(264), 1,
      anon_sym_PERCENT,
    ACTIONS(266), 1,
      sym_dec_8,
    ACTIONS(268), 1,
      anon_sym_DOLLAR,
    ACTIONS(270), 1,
      anon_sym_h,
    ACTIONS(272), 1,
      aux_sym_hex_8_token2,
    ACTIONS(274), 1,
      sym_dec_16,
    ACTIONS(278), 1,
      sym_acc_register,
    STATE(20), 1,
      sym_operand_8,
    STATE(27), 1,
      sym_operand_16,
    STATE(5), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(6), 2,
      sym_bin_8,
      sym_hex_8,
  [1391] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_PERCENT,
    ACTIONS(266), 1,
      sym_dec_8,
    ACTIONS(268), 1,
      anon_sym_DOLLAR,
    ACTIONS(270), 1,
      anon_sym_h,
    ACTIONS(272), 1,
      aux_sym_hex_8_token2,
    ACTIONS(274), 1,
      sym_dec_16,
    ACTIONS(280), 1,
      sym_symbol,
    STATE(20), 1,
      sym_operand_8,
    STATE(41), 1,
      sym_operand_16,
    STATE(5), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(6), 2,
      sym_bin_8,
      sym_hex_8,
  [1430] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_PERCENT,
    ACTIONS(266), 1,
      sym_dec_8,
    ACTIONS(268), 1,
      anon_sym_DOLLAR,
    ACTIONS(270), 1,
      anon_sym_h,
    ACTIONS(272), 1,
      aux_sym_hex_8_token2,
    ACTIONS(274), 1,
      sym_dec_16,
    ACTIONS(280), 1,
      sym_symbol,
    STATE(19), 1,
      sym_operand_8,
    STATE(41), 1,
      sym_operand_16,
    STATE(5), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(6), 2,
      sym_bin_8,
      sym_hex_8,
  [1469] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_symbol,
    ACTIONS(264), 1,
      anon_sym_PERCENT,
    ACTIONS(266), 1,
      sym_dec_8,
    ACTIONS(268), 1,
      anon_sym_DOLLAR,
    ACTIONS(270), 1,
      anon_sym_h,
    ACTIONS(272), 1,
      aux_sym_hex_8_token2,
    ACTIONS(274), 1,
      sym_dec_16,
    STATE(40), 1,
      sym_operand_8,
    STATE(41), 1,
      sym_operand_16,
    STATE(5), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(6), 2,
      sym_bin_8,
      sym_hex_8,
  [1508] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_symbol,
    ACTIONS(264), 1,
      anon_sym_PERCENT,
    ACTIONS(266), 1,
      sym_dec_8,
    ACTIONS(268), 1,
      anon_sym_DOLLAR,
    ACTIONS(270), 1,
      anon_sym_h,
    ACTIONS(272), 1,
      aux_sym_hex_8_token2,
    ACTIONS(274), 1,
      sym_dec_16,
    STATE(20), 1,
      sym_operand_8,
    STATE(27), 1,
      sym_operand_16,
    STATE(5), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(6), 2,
      sym_bin_8,
      sym_hex_8,
  [1547] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_symbol,
    ACTIONS(264), 1,
      anon_sym_PERCENT,
    ACTIONS(266), 1,
      sym_dec_8,
    ACTIONS(268), 1,
      anon_sym_DOLLAR,
    ACTIONS(270), 1,
      anon_sym_h,
    ACTIONS(272), 1,
      aux_sym_hex_8_token2,
    ACTIONS(274), 1,
      sym_dec_16,
    STATE(5), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(6), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(18), 2,
      sym_operand_8,
      sym_operand_16,
  [1584] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_symbol,
    ACTIONS(264), 1,
      anon_sym_PERCENT,
    ACTIONS(266), 1,
      sym_dec_8,
    ACTIONS(268), 1,
      anon_sym_DOLLAR,
    ACTIONS(270), 1,
      anon_sym_h,
    ACTIONS(272), 1,
      aux_sym_hex_8_token2,
    ACTIONS(274), 1,
      sym_dec_16,
    STATE(5), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(6), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(37), 2,
      sym_operand_8,
      sym_operand_16,
  [1621] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym_hex_8_token2,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(284), 1,
      anon_sym_DOLLAR,
    ACTIONS(286), 1,
      anon_sym_h,
    STATE(32), 1,
      sym_operand_8,
    ACTIONS(266), 2,
      sym_symbol,
      sym_dec_8,
    STATE(6), 2,
      sym_bin_8,
      sym_hex_8,
  [1648] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym_hex_8_token2,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(284), 1,
      anon_sym_DOLLAR,
    ACTIONS(286), 1,
      anon_sym_h,
    STATE(66), 1,
      sym_operand_8,
    ACTIONS(266), 2,
      sym_symbol,
      sym_dec_8,
    STATE(6), 2,
      sym_bin_8,
      sym_hex_8,
  [1675] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_symbol,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(290), 1,
      anon_sym_PERCENT,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(294), 1,
      anon_sym_h,
    ACTIONS(296), 1,
      sym_dec_16,
    STATE(41), 1,
      sym_operand_16,
    STATE(5), 2,
      sym_bin_16,
      sym_hex_16,
  [1704] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_symbol,
    ACTIONS(290), 1,
      anon_sym_PERCENT,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(294), 1,
      anon_sym_h,
    ACTIONS(296), 1,
      sym_dec_16,
    STATE(41), 1,
      sym_operand_16,
    STATE(5), 2,
      sym_bin_16,
      sym_hex_16,
  [1730] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_symbol,
    ACTIONS(290), 1,
      anon_sym_PERCENT,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(294), 1,
      anon_sym_h,
    ACTIONS(296), 1,
      sym_dec_16,
    STATE(22), 1,
      sym_operand_16,
    STATE(5), 2,
      sym_bin_16,
      sym_hex_16,
  [1756] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_symbol,
    ACTIONS(290), 1,
      anon_sym_PERCENT,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(294), 1,
      anon_sym_h,
    ACTIONS(296), 1,
      sym_dec_16,
    STATE(39), 1,
      sym_operand_16,
    STATE(5), 2,
      sym_bin_16,
      sym_hex_16,
  [1782] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_symbol,
    ACTIONS(290), 1,
      anon_sym_PERCENT,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(294), 1,
      anon_sym_h,
    ACTIONS(296), 1,
      sym_dec_16,
    STATE(70), 1,
      sym_operand_16,
    STATE(5), 2,
      sym_bin_16,
      sym_hex_16,
  [1808] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_symbol,
    ACTIONS(290), 1,
      anon_sym_PERCENT,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(294), 1,
      anon_sym_h,
    ACTIONS(296), 1,
      sym_dec_16,
    STATE(16), 1,
      sym_operand_16,
    STATE(5), 2,
      sym_bin_16,
      sym_hex_16,
  [1834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(21), 1,
      sym_string,
    ACTIONS(298), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(14), 1,
      sym_string,
    ACTIONS(298), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
  [1866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      aux_sym_bin_8_token1,
    ACTIONS(306), 1,
      aux_sym_bin_16_token1,
  [1876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_x_register,
    ACTIONS(310), 1,
      sym_y_register,
  [1886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      aux_sym_hex_8_token1,
    ACTIONS(314), 1,
      aux_sym_hex_16_token1,
  [1896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
  [1903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_x_register,
  [1910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      aux_sym_hex_8_token1,
  [1917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      aux_sym_bin_8_token1,
  [1924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym_y_register,
  [1931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_COMMA,
  [1938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym_hex_16_token1,
  [1945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      aux_sym_bin_16_token1,
  [1952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym_x_register,
  [1959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
  [1966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym_y_register,
  [1973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym_y_register,
  [1980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_x_register,
  [1987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(28)] = 0,
  [SMALL_STATE(29)] = 71,
  [SMALL_STATE(30)] = 142,
  [SMALL_STATE(31)] = 213,
  [SMALL_STATE(32)] = 284,
  [SMALL_STATE(33)] = 355,
  [SMALL_STATE(34)] = 426,
  [SMALL_STATE(35)] = 497,
  [SMALL_STATE(36)] = 568,
  [SMALL_STATE(37)] = 639,
  [SMALL_STATE(38)] = 710,
  [SMALL_STATE(39)] = 781,
  [SMALL_STATE(40)] = 852,
  [SMALL_STATE(41)] = 923,
  [SMALL_STATE(42)] = 994,
  [SMALL_STATE(43)] = 1065,
  [SMALL_STATE(44)] = 1136,
  [SMALL_STATE(45)] = 1181,
  [SMALL_STATE(46)] = 1223,
  [SMALL_STATE(47)] = 1265,
  [SMALL_STATE(48)] = 1307,
  [SMALL_STATE(49)] = 1349,
  [SMALL_STATE(50)] = 1391,
  [SMALL_STATE(51)] = 1430,
  [SMALL_STATE(52)] = 1469,
  [SMALL_STATE(53)] = 1508,
  [SMALL_STATE(54)] = 1547,
  [SMALL_STATE(55)] = 1584,
  [SMALL_STATE(56)] = 1621,
  [SMALL_STATE(57)] = 1648,
  [SMALL_STATE(58)] = 1675,
  [SMALL_STATE(59)] = 1704,
  [SMALL_STATE(60)] = 1730,
  [SMALL_STATE(61)] = 1756,
  [SMALL_STATE(62)] = 1782,
  [SMALL_STATE(63)] = 1808,
  [SMALL_STATE(64)] = 1834,
  [SMALL_STATE(65)] = 1845,
  [SMALL_STATE(66)] = 1856,
  [SMALL_STATE(67)] = 1866,
  [SMALL_STATE(68)] = 1876,
  [SMALL_STATE(69)] = 1886,
  [SMALL_STATE(70)] = 1896,
  [SMALL_STATE(71)] = 1903,
  [SMALL_STATE(72)] = 1910,
  [SMALL_STATE(73)] = 1917,
  [SMALL_STATE(74)] = 1924,
  [SMALL_STATE(75)] = 1931,
  [SMALL_STATE(76)] = 1938,
  [SMALL_STATE(77)] = 1945,
  [SMALL_STATE(78)] = 1952,
  [SMALL_STATE(79)] = 1959,
  [SMALL_STATE(80)] = 1966,
  [SMALL_STATE(81)] = 1973,
  [SMALL_STATE(82)] = 1980,
  [SMALL_STATE(83)] = 1987,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca65, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(44),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(49),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(61),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(52),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(38),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(45),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(53),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(58),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(59),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(48),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(47),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(46),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(51),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(50),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(42),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(63),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(54),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(65),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca65, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asciiz_ctrl_cmd, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asciiz_ctrl_cmd, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_16, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_16, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_8, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_8, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_8, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_8, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr_ctrl_cmd, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr_ctrl_cmd, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_16, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_16, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_8, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_8, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_16, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_16, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_8, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_8, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asciiz_ctrl_cmd_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_asciiz_ctrl_cmd_repeat1, 2), SHIFT_REPEAT(64),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asciiz_ctrl_cmd_repeat1, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asciiz_ctrl_cmd, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asciiz_ctrl_cmd, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addr_ctrl_cmd_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addr_ctrl_cmd_repeat1, 2), SHIFT_REPEAT(60),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_addr_ctrl_cmd_repeat1, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr_ctrl_cmd, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr_ctrl_cmd, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_align_ctrl_cmd, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_align_ctrl_cmd, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_addr_inst, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_addr_inst, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_operand_8, 1), REDUCE(sym_operand_16, 1),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_operand_8, 1), REDUCE(sym_operand_16, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_addr_inst, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_addr_inst, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inst, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_x_addr_inst, 4),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_x_addr_inst, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_x_addr_inst, 4),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_x_addr_inst, 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_y_addr_inst, 6),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_y_addr_inst, 6),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_addr_inst, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_addr_inst, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_x_addr_inst, 6),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_x_addr_inst, 6),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_y_addr_inst, 4),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_y_addr_inst, 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_addr_inst, 4),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_addr_inst, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acc_addr_inst, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_acc_addr_inst, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_align_ctrl_cmd, 4),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_align_ctrl_cmd, 4),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_impl_addr_inst, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_impl_addr_inst, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_addr_inst, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rel_addr_inst, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_cmd, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_cmd, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_y_addr_inst, 4),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_y_addr_inst, 4),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [338] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ca65() {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
