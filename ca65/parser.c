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
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 129
#define ALIAS_COUNT 0
#define TOKEN_COUNT 107
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  sym_label = 2,
  sym_symbol = 3,
  anon_sym_COMMA = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  sym_adc_opcode = 7,
  sym_and_opcode = 8,
  sym_asl_opcode = 9,
  sym_bcc_opcode = 10,
  sym_bcs_opcode = 11,
  sym_beq_opcode = 12,
  sym_bit_opcode = 13,
  sym_bmi_opcode = 14,
  sym_bne_opcode = 15,
  sym_bpl_opcode = 16,
  sym_brk_opcode = 17,
  sym_bvc_opcode = 18,
  sym_bvs_opcode = 19,
  sym_clc_opcode = 20,
  sym_cld_opcode = 21,
  sym_cli_opcode = 22,
  sym_clv_opcode = 23,
  sym_cmp_opcode = 24,
  sym_cpx_opcode = 25,
  sym_cpy_opcode = 26,
  sym_dec_opcode = 27,
  sym_dex_opcode = 28,
  sym_dey_opcode = 29,
  sym_eor_opcode = 30,
  sym_inc_opcode = 31,
  sym_inx_opcode = 32,
  sym_iny_opcode = 33,
  sym_jmp_opcode = 34,
  sym_jsr_opcode = 35,
  sym_lda_opcode = 36,
  sym_ldx_opcode = 37,
  sym_ldy_opcode = 38,
  sym_lsr_opcode = 39,
  sym_nop_opcode = 40,
  sym_ora_opcode = 41,
  sym_pha_opcode = 42,
  sym_php_opcode = 43,
  sym_pla_opcode = 44,
  sym_plp_opcode = 45,
  sym_rol_opcode = 46,
  sym_ror_opcode = 47,
  sym_rti_opcode = 48,
  sym_rts_opcode = 49,
  sym_sbc_opcode = 50,
  sym_sec_opcode = 51,
  sym_sed_opcode = 52,
  sym_sei_opcode = 53,
  sym_sta_opcode = 54,
  sym_stx_opcode = 55,
  sym_sty_opcode = 56,
  sym_tax_opcode = 57,
  sym_tay_opcode = 58,
  sym_tsx_opcode = 59,
  sym_txa_opcode = 60,
  sym_tcs_opcode = 61,
  sym_tya_opcode = 62,
  anon_sym_PERCENT = 63,
  aux_sym_bin_8_token1 = 64,
  sym_dec_8 = 65,
  anon_sym_DOLLAR = 66,
  anon_sym_h = 67,
  aux_sym_hex_8_token1 = 68,
  aux_sym_hex_8_token2 = 69,
  aux_sym_bin_16_token1 = 70,
  sym_dec_16 = 71,
  aux_sym_hex_16_token1 = 72,
  sym_acc_register = 73,
  sym_x_register = 74,
  sym_y_register = 75,
  sym_imm_prefix = 76,
  anon_sym_PLUS = 77,
  anon_sym_DASH = 78,
  anon_sym_DOTBITNOT = 79,
  anon_sym_TILDE = 80,
  anon_sym_DOTLOBYTE = 81,
  anon_sym_LT = 82,
  anon_sym_DOTHIBYTE = 83,
  anon_sym_GT = 84,
  anon_sym_DOTBANKBYTE = 85,
  anon_sym_CARET = 86,
  anon_sym_STAR = 87,
  anon_sym_SLASH = 88,
  anon_sym_DOTMOD = 89,
  anon_sym_DOTBITAND = 90,
  anon_sym_AMP = 91,
  anon_sym_DOTBITXOR = 92,
  anon_sym_DOTSHL = 93,
  anon_sym_DOTSHR = 94,
  anon_sym_DOTBITOR = 95,
  anon_sym_PIPE = 96,
  anon_sym_EQ = 97,
  anon_sym_LT_EQ = 98,
  anon_sym_GT_EQ = 99,
  anon_sym_DOTAND = 100,
  anon_sym_AMP_AMP = 101,
  anon_sym_DOTXOR = 102,
  anon_sym_DOTOR = 103,
  anon_sym_PIPE_PIPE = 104,
  anon_sym_DOTNOT = 105,
  anon_sym_BANG = 106,
  sym_ca65 = 107,
  sym_inst = 108,
  sym_impl_addr_inst = 109,
  sym_acc_addr_inst = 110,
  sym_imm_addr_inst = 111,
  sym_abs_addr_inst = 112,
  sym_zp_addr_inst = 113,
  sym_abs_x_addr_inst = 114,
  sym_abs_y_addr_inst = 115,
  sym_zp_x_addr_inst = 116,
  sym_zp_y_addr_inst = 117,
  sym_ind_addr_inst = 118,
  sym_ind_x_addr_inst = 119,
  sym_ind_y_addr_inst = 120,
  sym_rel_addr_inst = 121,
  sym_operand_8 = 122,
  sym_bin_8 = 123,
  sym_hex_8 = 124,
  sym_operand_16 = 125,
  sym_bin_16 = 126,
  sym_hex_16 = 127,
  aux_sym_ca65_repeat1 = 128,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
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
  [sym_acc_register] = "acc_register",
  [sym_x_register] = "x_register",
  [sym_y_register] = "y_register",
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
  [sym_ca65] = "ca65",
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
  [aux_sym_ca65_repeat1] = "ca65_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
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
  [sym_acc_register] = sym_acc_register,
  [sym_x_register] = sym_x_register,
  [sym_y_register] = sym_y_register,
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
  [sym_ca65] = sym_ca65,
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
  [aux_sym_ca65_repeat1] = aux_sym_ca65_repeat1,
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
  [sym_ca65] = {
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
  [aux_sym_ca65_repeat1] = {
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
  [16] = 12,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(148);
      if (lookahead == '!') ADVANCE(359);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '$') ADVANCE(286);
      if (lookahead == '%') ADVANCE(247);
      if (lookahead == '&') ADVANCE(344);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == ')') ADVANCE(190);
      if (lookahead == '*') ADVANCE(340);
      if (lookahead == '+') ADVANCE(330);
      if (lookahead == ',') ADVANCE(188);
      if (lookahead == '-') ADVANCE(331);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '/') ADVANCE(341);
      if (lookahead == '0') ADVANCE(249);
      if (lookahead == '1') ADVANCE(265);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '<') ADVANCE(335);
      if (lookahead == '=') ADVANCE(350);
      if (lookahead == '>') ADVANCE(337);
      if (lookahead == '^') ADVANCE(339);
      if (lookahead == 'h') ADVANCE(287);
      if (lookahead == '|') ADVANCE(349);
      if (lookahead == '~') ADVANCE(333);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(163);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(173);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(166);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(175);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(174);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(164);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(182);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(167);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(187);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(187);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '$') ADVANCE(286);
      if (lookahead == '%') ADVANCE(247);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == '0') ADVANCE(267);
      if (lookahead == '1') ADVANCE(276);
      if (lookahead == '2') ADVANCE(269);
      if (lookahead == '6') ADVANCE(270);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == 'h') ADVANCE(287);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(281);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(286);
      if (lookahead == '%') ADVANCE(247);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == '0') ADVANCE(313);
      if (lookahead == '6') ADVANCE(316);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == 'h') ADVANCE(287);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(318);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(321);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(286);
      if (lookahead == '%') ADVANCE(247);
      if (lookahead == '0') ADVANCE(268);
      if (lookahead == '1') ADVANCE(284);
      if (lookahead == '2') ADVANCE(272);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == 'h') ADVANCE(287);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(289);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(327);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(328);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(9);
      if (lookahead == ';') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(323);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(17);
      if (lookahead == '1') ADVANCE(116);
      if (lookahead == ';') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(296);
      if (lookahead == '1') ADVANCE(311);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(8);
      if (lookahead == '1') ADVANCE(143);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(290);
      if (lookahead == ';') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == '1') ADVANCE(142);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == '1') ADVANCE(140);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(13);
      if (lookahead == '1') ADVANCE(137);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(14);
      if (lookahead == '1') ADVANCE(133);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == '1') ADVANCE(128);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == '1') ADVANCE(122);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(220);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(221);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(228);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(238);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(239);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(65);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(62);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(66);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(23);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(29);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(63);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(42);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(40);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(47);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(44);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(194);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(202);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(204);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(205);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(206);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(211);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(212);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(215);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(216);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(235);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(236);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(28);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(38);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(18);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(20);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(232);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(31);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(54);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(230);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(55);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(48);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(209);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(241);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'B') ADVANCE(69);
      if (lookahead == 'H') ADVANCE(81);
      if (lookahead == 'L') ADVANCE(92);
      if (lookahead == 'M') ADVANCE(88);
      if (lookahead == 'N') ADVANCE(89);
      if (lookahead == 'O') ADVANCE(93);
      if (lookahead == 'S') ADVANCE(80);
      if (lookahead == 'X') ADVANCE(87);
      END_STATE();
    case 69:
      if (lookahead == 'A') ADVANCE(85);
      if (lookahead == 'I') ADVANCE(97);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(86);
      if (lookahead == 'N') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(95);
      if (lookahead == 'X') ADVANCE(90);
      END_STATE();
    case 71:
      if (lookahead == 'B') ADVANCE(103);
      END_STATE();
    case 72:
      if (lookahead == 'B') ADVANCE(104);
      END_STATE();
    case 73:
      if (lookahead == 'B') ADVANCE(105);
      END_STATE();
    case 74:
      if (lookahead == 'D') ADVANCE(353);
      END_STATE();
    case 75:
      if (lookahead == 'D') ADVANCE(342);
      END_STATE();
    case 76:
      if (lookahead == 'D') ADVANCE(343);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(336);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(334);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(338);
      END_STATE();
    case 80:
      if (lookahead == 'H') ADVANCE(83);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(71);
      END_STATE();
    case 82:
      if (lookahead == 'K') ADVANCE(73);
      END_STATE();
    case 83:
      if (lookahead == 'L') ADVANCE(346);
      if (lookahead == 'R') ADVANCE(347);
      END_STATE();
    case 84:
      if (lookahead == 'N') ADVANCE(74);
      END_STATE();
    case 85:
      if (lookahead == 'N') ADVANCE(82);
      END_STATE();
    case 86:
      if (lookahead == 'N') ADVANCE(76);
      END_STATE();
    case 87:
      if (lookahead == 'O') ADVANCE(94);
      END_STATE();
    case 88:
      if (lookahead == 'O') ADVANCE(75);
      END_STATE();
    case 89:
      if (lookahead == 'O') ADVANCE(98);
      END_STATE();
    case 90:
      if (lookahead == 'O') ADVANCE(96);
      END_STATE();
    case 91:
      if (lookahead == 'O') ADVANCE(100);
      END_STATE();
    case 92:
      if (lookahead == 'O') ADVANCE(72);
      END_STATE();
    case 93:
      if (lookahead == 'R') ADVANCE(356);
      END_STATE();
    case 94:
      if (lookahead == 'R') ADVANCE(355);
      END_STATE();
    case 95:
      if (lookahead == 'R') ADVANCE(348);
      END_STATE();
    case 96:
      if (lookahead == 'R') ADVANCE(345);
      END_STATE();
    case 97:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 98:
      if (lookahead == 'T') ADVANCE(358);
      END_STATE();
    case 99:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 100:
      if (lookahead == 'T') ADVANCE(332);
      END_STATE();
    case 101:
      if (lookahead == 'T') ADVANCE(78);
      END_STATE();
    case 102:
      if (lookahead == 'T') ADVANCE(79);
      END_STATE();
    case 103:
      if (lookahead == 'Y') ADVANCE(99);
      END_STATE();
    case 104:
      if (lookahead == 'Y') ADVANCE(101);
      END_STATE();
    case 105:
      if (lookahead == 'Y') ADVANCE(102);
      END_STATE();
    case 106:
      if (lookahead == 'h') ADVANCE(294);
      END_STATE();
    case 107:
      if (lookahead == 'h') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 108:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(304);
      END_STATE();
    case 109:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(108);
      END_STATE();
    case 110:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(109);
      END_STATE();
    case 111:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(110);
      END_STATE();
    case 112:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(111);
      END_STATE();
    case 113:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(112);
      END_STATE();
    case 114:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(113);
      END_STATE();
    case 115:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(297);
      END_STATE();
    case 116:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(114);
      END_STATE();
    case 117:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(115);
      END_STATE();
    case 118:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(117);
      END_STATE();
    case 119:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(118);
      END_STATE();
    case 120:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(119);
      END_STATE();
    case 121:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(120);
      END_STATE();
    case 122:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(121);
      END_STATE();
    case 123:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      END_STATE();
    case 124:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(123);
      END_STATE();
    case 125:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(124);
      END_STATE();
    case 126:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(125);
      END_STATE();
    case 127:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(126);
      END_STATE();
    case 128:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(127);
      END_STATE();
    case 129:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(306);
      END_STATE();
    case 130:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(129);
      END_STATE();
    case 131:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(130);
      END_STATE();
    case 132:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(131);
      END_STATE();
    case 133:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(132);
      END_STATE();
    case 134:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(307);
      END_STATE();
    case 135:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(134);
      END_STATE();
    case 136:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(135);
      END_STATE();
    case 137:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(136);
      END_STATE();
    case 138:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(308);
      END_STATE();
    case 139:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(138);
      END_STATE();
    case 140:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(139);
      END_STATE();
    case 141:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(309);
      END_STATE();
    case 142:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(141);
      END_STATE();
    case 143:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(310);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 147:
      if (eof) ADVANCE(148);
      if (lookahead == ')') ADVANCE(190);
      if (lookahead == ',') ADVANCE(188);
      if (lookahead == '0') ADVANCE(250);
      if (lookahead == '1') ADVANCE(264);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(36);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(27);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(45);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(50);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(58);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(41);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(51);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(26);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(147)
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(187);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(185);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(183);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(186);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(155);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(162);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(187);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(187);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(187);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(187);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(160);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(184);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(169);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(165);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(172);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(170);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(154);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(153);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(187);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(158);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(179);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(179);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(171);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(187);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_adc_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_and_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_asl_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_bcc_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_bcs_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_beq_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_bit_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_bmi_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_bne_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_bpl_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_brk_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_bvc_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_bvs_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_clc_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_cld_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_cli_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_clv_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_cmp_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_cpx_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_cpy_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_dec_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_dex_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_dey_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_eor_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_inc_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_inx_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_iny_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_jmp_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_jsr_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_lda_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_ldx_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_ldy_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_lsr_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_nop_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_ora_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_pha_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_php_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_pla_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_plp_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_rol_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_ror_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_rti_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_rts_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_sbc_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_sec_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_sed_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_sei_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_sta_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_stx_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_sty_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_tax_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_tay_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_tsx_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_txa_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_tcs_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_tya_opcode);
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0') ADVANCE(249);
      if (lookahead == '1') ADVANCE(265);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0') ADVANCE(250);
      if (lookahead == '1') ADVANCE(264);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(304);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(248);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(251);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(252);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(253);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(254);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(255);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(256);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(257);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(258);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(259);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(260);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(261);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(262);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(263);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_dec_8);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '0') ADVANCE(267);
      if (lookahead == '1') ADVANCE(276);
      if (lookahead == '2') ADVANCE(269);
      if (lookahead == '6') ADVANCE(270);
      if (lookahead == 'h') ADVANCE(294);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(281);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '0') ADVANCE(268);
      if (lookahead == '1') ADVANCE(284);
      if (lookahead == '2') ADVANCE(272);
      if (lookahead == 'h') ADVANCE(294);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(274);
      if (lookahead == 'h') ADVANCE(294);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(271);
      if (lookahead == 'h') ADVANCE(294);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(314);
      if (lookahead == 'h') ADVANCE(294);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(320);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(275);
      if (lookahead == 'h') ADVANCE(294);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(294);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(294);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(285);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(266);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_h);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (lookahead == '0') ADVANCE(289);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (lookahead == '0') ADVANCE(290);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(291);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_hex_8_token2);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0') ADVANCE(296);
      if (lookahead == '1') ADVANCE(311);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(304);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(295);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(298);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(299);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(300);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(301);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(302);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(303);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(297);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(306);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(307);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(308);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(309);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(310);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_dec_16);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '0') ADVANCE(313);
      if (lookahead == '6') ADVANCE(316);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(318);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(321);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '3') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(319);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '5') ADVANCE(314);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(320);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '5') ADVANCE(315);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(318);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(312);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (lookahead == '0') ADVANCE(323);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_x_register);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_y_register);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_imm_prefix);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_DOTBITNOT);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_DOTLOBYTE);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(351);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_DOTHIBYTE);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(352);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DOTBANKBYTE);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_DOTMOD);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_DOTBITAND);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(354);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_DOTBITXOR);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_DOTSHL);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_DOTSHR);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_DOTBITOR);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(357);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_DOTAND);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_DOTXOR);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_DOTOR);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_DOTNOT);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 147},
  [2] = {.lex_state = 147},
  [3] = {.lex_state = 147},
  [4] = {.lex_state = 147},
  [5] = {.lex_state = 147},
  [6] = {.lex_state = 147},
  [7] = {.lex_state = 147},
  [8] = {.lex_state = 147},
  [9] = {.lex_state = 147},
  [10] = {.lex_state = 147},
  [11] = {.lex_state = 147},
  [12] = {.lex_state = 147},
  [13] = {.lex_state = 147},
  [14] = {.lex_state = 147},
  [15] = {.lex_state = 147},
  [16] = {.lex_state = 147},
  [17] = {.lex_state = 147},
  [18] = {.lex_state = 147},
  [19] = {.lex_state = 147},
  [20] = {.lex_state = 147},
  [21] = {.lex_state = 147},
  [22] = {.lex_state = 147},
  [23] = {.lex_state = 147},
  [24] = {.lex_state = 147},
  [25] = {.lex_state = 147},
  [26] = {.lex_state = 147},
  [27] = {.lex_state = 147},
  [28] = {.lex_state = 147},
  [29] = {.lex_state = 147},
  [30] = {.lex_state = 147},
  [31] = {.lex_state = 147},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 147},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 7},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_symbol] = ACTIONS(1),
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
    [sym_acc_register] = ACTIONS(1),
    [sym_x_register] = ACTIONS(1),
    [sym_y_register] = ACTIONS(1),
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
  },
  [1] = {
    [sym_ca65] = STATE(60),
    [sym_inst] = STATE(2),
    [sym_impl_addr_inst] = STATE(18),
    [sym_acc_addr_inst] = STATE(18),
    [sym_imm_addr_inst] = STATE(18),
    [sym_abs_addr_inst] = STATE(18),
    [sym_zp_addr_inst] = STATE(18),
    [sym_abs_x_addr_inst] = STATE(18),
    [sym_abs_y_addr_inst] = STATE(18),
    [sym_zp_x_addr_inst] = STATE(18),
    [sym_zp_y_addr_inst] = STATE(18),
    [sym_ind_addr_inst] = STATE(18),
    [sym_ind_x_addr_inst] = STATE(18),
    [sym_ind_y_addr_inst] = STATE(18),
    [sym_rel_addr_inst] = STATE(18),
    [aux_sym_ca65_repeat1] = STATE(2),
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
  },
  [2] = {
    [sym_inst] = STATE(3),
    [sym_impl_addr_inst] = STATE(18),
    [sym_acc_addr_inst] = STATE(18),
    [sym_imm_addr_inst] = STATE(18),
    [sym_abs_addr_inst] = STATE(18),
    [sym_zp_addr_inst] = STATE(18),
    [sym_abs_x_addr_inst] = STATE(18),
    [sym_abs_y_addr_inst] = STATE(18),
    [sym_zp_x_addr_inst] = STATE(18),
    [sym_zp_y_addr_inst] = STATE(18),
    [sym_ind_addr_inst] = STATE(18),
    [sym_ind_x_addr_inst] = STATE(18),
    [sym_ind_y_addr_inst] = STATE(18),
    [sym_rel_addr_inst] = STATE(18),
    [aux_sym_ca65_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(39),
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
  },
  [3] = {
    [sym_inst] = STATE(3),
    [sym_impl_addr_inst] = STATE(18),
    [sym_acc_addr_inst] = STATE(18),
    [sym_imm_addr_inst] = STATE(18),
    [sym_abs_addr_inst] = STATE(18),
    [sym_zp_addr_inst] = STATE(18),
    [sym_abs_x_addr_inst] = STATE(18),
    [sym_abs_y_addr_inst] = STATE(18),
    [sym_zp_x_addr_inst] = STATE(18),
    [sym_zp_y_addr_inst] = STATE(18),
    [sym_ind_addr_inst] = STATE(18),
    [sym_ind_x_addr_inst] = STATE(18),
    [sym_ind_y_addr_inst] = STATE(18),
    [sym_rel_addr_inst] = STATE(18),
    [aux_sym_ca65_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(43),
    [sym_adc_opcode] = ACTIONS(46),
    [sym_and_opcode] = ACTIONS(46),
    [sym_asl_opcode] = ACTIONS(49),
    [sym_bcc_opcode] = ACTIONS(52),
    [sym_bcs_opcode] = ACTIONS(52),
    [sym_beq_opcode] = ACTIONS(52),
    [sym_bit_opcode] = ACTIONS(55),
    [sym_bmi_opcode] = ACTIONS(52),
    [sym_bne_opcode] = ACTIONS(52),
    [sym_bpl_opcode] = ACTIONS(52),
    [sym_brk_opcode] = ACTIONS(58),
    [sym_bvc_opcode] = ACTIONS(52),
    [sym_bvs_opcode] = ACTIONS(52),
    [sym_clc_opcode] = ACTIONS(58),
    [sym_cld_opcode] = ACTIONS(58),
    [sym_cli_opcode] = ACTIONS(58),
    [sym_clv_opcode] = ACTIONS(58),
    [sym_cmp_opcode] = ACTIONS(46),
    [sym_cpx_opcode] = ACTIONS(61),
    [sym_cpy_opcode] = ACTIONS(61),
    [sym_dec_opcode] = ACTIONS(64),
    [sym_dex_opcode] = ACTIONS(58),
    [sym_dey_opcode] = ACTIONS(58),
    [sym_eor_opcode] = ACTIONS(46),
    [sym_inc_opcode] = ACTIONS(64),
    [sym_inx_opcode] = ACTIONS(58),
    [sym_iny_opcode] = ACTIONS(58),
    [sym_jmp_opcode] = ACTIONS(67),
    [sym_jsr_opcode] = ACTIONS(70),
    [sym_lda_opcode] = ACTIONS(46),
    [sym_ldx_opcode] = ACTIONS(73),
    [sym_ldy_opcode] = ACTIONS(76),
    [sym_lsr_opcode] = ACTIONS(76),
    [sym_nop_opcode] = ACTIONS(58),
    [sym_ora_opcode] = ACTIONS(46),
    [sym_pha_opcode] = ACTIONS(58),
    [sym_php_opcode] = ACTIONS(58),
    [sym_pla_opcode] = ACTIONS(58),
    [sym_plp_opcode] = ACTIONS(58),
    [sym_rol_opcode] = ACTIONS(49),
    [sym_ror_opcode] = ACTIONS(49),
    [sym_rti_opcode] = ACTIONS(58),
    [sym_rts_opcode] = ACTIONS(58),
    [sym_sbc_opcode] = ACTIONS(46),
    [sym_sec_opcode] = ACTIONS(58),
    [sym_sed_opcode] = ACTIONS(58),
    [sym_sei_opcode] = ACTIONS(58),
    [sym_sta_opcode] = ACTIONS(79),
    [sym_stx_opcode] = ACTIONS(82),
    [sym_sty_opcode] = ACTIONS(85),
    [sym_tax_opcode] = ACTIONS(58),
    [sym_tay_opcode] = ACTIONS(58),
    [sym_tsx_opcode] = ACTIONS(58),
    [sym_txa_opcode] = ACTIONS(58),
    [sym_tcs_opcode] = ACTIONS(58),
    [sym_tya_opcode] = ACTIONS(58),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      sym_label,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(90), 56,
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
  [68] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 4,
      ts_builtin_sym_end,
      sym_label,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(94), 56,
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
  [136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      sym_label,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(98), 56,
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
  [204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 4,
      ts_builtin_sym_end,
      sym_label,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(102), 56,
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
  [272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 4,
      ts_builtin_sym_end,
      sym_label,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(106), 56,
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
  [340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 4,
      ts_builtin_sym_end,
      sym_label,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(110), 56,
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
  [408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 4,
      ts_builtin_sym_end,
      sym_label,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(114), 56,
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
  [476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(120), 56,
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
  [545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      sym_label,
      anon_sym_COMMA,
    ACTIONS(125), 56,
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
  [612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(132), 56,
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
  [681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(132), 56,
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
  [750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(120), 56,
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
  [819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(125), 56,
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
  [888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(132), 56,
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
  [957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(142), 56,
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
  [1023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(146), 56,
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
  [1089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(132), 56,
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
  [1155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(150), 56,
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
  [1221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(154), 56,
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
  [1287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(158), 56,
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
  [1353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(120), 56,
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
  [1419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(162), 56,
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
  [1485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(166), 56,
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
  [1551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(170), 56,
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
  [1617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(174), 56,
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
  [1683] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(178), 56,
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
  [1749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(182), 56,
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
  [1815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(186), 56,
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
  [1881] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_symbol,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_PERCENT,
    ACTIONS(194), 1,
      sym_dec_8,
    ACTIONS(196), 1,
      anon_sym_DOLLAR,
    ACTIONS(198), 1,
      anon_sym_h,
    ACTIONS(200), 1,
      aux_sym_hex_8_token2,
    ACTIONS(202), 1,
      sym_dec_16,
    ACTIONS(204), 1,
      sym_imm_prefix,
    STATE(11), 1,
      sym_operand_8,
    STATE(17), 1,
      sym_operand_16,
    STATE(5), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
  [1926] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_symbol,
    ACTIONS(192), 1,
      anon_sym_PERCENT,
    ACTIONS(194), 1,
      sym_dec_8,
    ACTIONS(196), 1,
      anon_sym_DOLLAR,
    ACTIONS(198), 1,
      anon_sym_h,
    ACTIONS(200), 1,
      aux_sym_hex_8_token2,
    ACTIONS(202), 1,
      sym_dec_16,
    ACTIONS(204), 1,
      sym_imm_prefix,
    STATE(11), 1,
      sym_operand_8,
    STATE(13), 1,
      sym_operand_16,
    STATE(5), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
  [1968] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_symbol,
    ACTIONS(192), 1,
      anon_sym_PERCENT,
    ACTIONS(194), 1,
      sym_dec_8,
    ACTIONS(196), 1,
      anon_sym_DOLLAR,
    ACTIONS(198), 1,
      anon_sym_h,
    ACTIONS(200), 1,
      aux_sym_hex_8_token2,
    ACTIONS(202), 1,
      sym_dec_16,
    ACTIONS(206), 1,
      sym_acc_register,
    STATE(11), 1,
      sym_operand_8,
    STATE(13), 1,
      sym_operand_16,
    STATE(5), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
  [2010] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_symbol,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_PERCENT,
    ACTIONS(194), 1,
      sym_dec_8,
    ACTIONS(196), 1,
      anon_sym_DOLLAR,
    ACTIONS(198), 1,
      anon_sym_h,
    ACTIONS(200), 1,
      aux_sym_hex_8_token2,
    ACTIONS(202), 1,
      sym_dec_16,
    STATE(11), 1,
      sym_operand_8,
    STATE(17), 1,
      sym_operand_16,
    STATE(5), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
  [2052] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_symbol,
    ACTIONS(192), 1,
      anon_sym_PERCENT,
    ACTIONS(194), 1,
      sym_dec_8,
    ACTIONS(196), 1,
      anon_sym_DOLLAR,
    ACTIONS(198), 1,
      anon_sym_h,
    ACTIONS(200), 1,
      aux_sym_hex_8_token2,
    ACTIONS(202), 1,
      sym_dec_16,
    ACTIONS(204), 1,
      sym_imm_prefix,
    STATE(14), 1,
      sym_operand_16,
    STATE(15), 1,
      sym_operand_8,
    STATE(5), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
  [2094] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_symbol,
    ACTIONS(192), 1,
      anon_sym_PERCENT,
    ACTIONS(194), 1,
      sym_dec_8,
    ACTIONS(196), 1,
      anon_sym_DOLLAR,
    ACTIONS(198), 1,
      anon_sym_h,
    ACTIONS(200), 1,
      aux_sym_hex_8_token2,
    ACTIONS(202), 1,
      sym_dec_16,
    ACTIONS(204), 1,
      sym_imm_prefix,
    STATE(20), 1,
      sym_operand_16,
    STATE(24), 1,
      sym_operand_8,
    STATE(5), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
  [2136] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_PERCENT,
    ACTIONS(194), 1,
      sym_dec_8,
    ACTIONS(196), 1,
      anon_sym_DOLLAR,
    ACTIONS(198), 1,
      anon_sym_h,
    ACTIONS(200), 1,
      aux_sym_hex_8_token2,
    ACTIONS(202), 1,
      sym_dec_16,
    ACTIONS(208), 1,
      sym_symbol,
    STATE(11), 1,
      sym_operand_8,
    STATE(20), 1,
      sym_operand_16,
    STATE(5), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
  [2175] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_PERCENT,
    ACTIONS(194), 1,
      sym_dec_8,
    ACTIONS(196), 1,
      anon_sym_DOLLAR,
    ACTIONS(198), 1,
      anon_sym_h,
    ACTIONS(200), 1,
      aux_sym_hex_8_token2,
    ACTIONS(202), 1,
      sym_dec_16,
    ACTIONS(208), 1,
      sym_symbol,
    STATE(15), 1,
      sym_operand_8,
    STATE(20), 1,
      sym_operand_16,
    STATE(5), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
  [2214] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_symbol,
    ACTIONS(192), 1,
      anon_sym_PERCENT,
    ACTIONS(194), 1,
      sym_dec_8,
    ACTIONS(196), 1,
      anon_sym_DOLLAR,
    ACTIONS(198), 1,
      anon_sym_h,
    ACTIONS(200), 1,
      aux_sym_hex_8_token2,
    ACTIONS(202), 1,
      sym_dec_16,
    STATE(11), 1,
      sym_operand_8,
    STATE(13), 1,
      sym_operand_16,
    STATE(5), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
  [2253] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_symbol,
    ACTIONS(192), 1,
      anon_sym_PERCENT,
    ACTIONS(194), 1,
      sym_dec_8,
    ACTIONS(196), 1,
      anon_sym_DOLLAR,
    ACTIONS(198), 1,
      anon_sym_h,
    ACTIONS(200), 1,
      aux_sym_hex_8_token2,
    ACTIONS(202), 1,
      sym_dec_16,
    STATE(20), 1,
      sym_operand_16,
    STATE(24), 1,
      sym_operand_8,
    STATE(5), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
  [2292] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      aux_sym_hex_8_token2,
    ACTIONS(210), 1,
      anon_sym_PERCENT,
    ACTIONS(212), 1,
      anon_sym_DOLLAR,
    ACTIONS(214), 1,
      anon_sym_h,
    STATE(26), 1,
      sym_operand_8,
    ACTIONS(194), 2,
      sym_symbol,
      sym_dec_8,
    STATE(5), 2,
      sym_bin_8,
      sym_hex_8,
  [2319] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      aux_sym_hex_8_token2,
    ACTIONS(210), 1,
      anon_sym_PERCENT,
    ACTIONS(212), 1,
      anon_sym_DOLLAR,
    ACTIONS(214), 1,
      anon_sym_h,
    STATE(49), 1,
      sym_operand_8,
    ACTIONS(194), 2,
      sym_symbol,
      sym_dec_8,
    STATE(5), 2,
      sym_bin_8,
      sym_hex_8,
  [2346] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_symbol,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_PERCENT,
    ACTIONS(220), 1,
      anon_sym_DOLLAR,
    ACTIONS(222), 1,
      anon_sym_h,
    ACTIONS(224), 1,
      sym_dec_16,
    STATE(20), 1,
      sym_operand_16,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
  [2375] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_symbol,
    ACTIONS(218), 1,
      anon_sym_PERCENT,
    ACTIONS(220), 1,
      anon_sym_DOLLAR,
    ACTIONS(222), 1,
      anon_sym_h,
    ACTIONS(224), 1,
      sym_dec_16,
    STATE(53), 1,
      sym_operand_16,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
  [2401] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_symbol,
    ACTIONS(218), 1,
      anon_sym_PERCENT,
    ACTIONS(220), 1,
      anon_sym_DOLLAR,
    ACTIONS(222), 1,
      anon_sym_h,
    ACTIONS(224), 1,
      sym_dec_16,
    STATE(20), 1,
      sym_operand_16,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
  [2427] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_symbol,
    ACTIONS(218), 1,
      anon_sym_PERCENT,
    ACTIONS(220), 1,
      anon_sym_DOLLAR,
    ACTIONS(222), 1,
      anon_sym_h,
    ACTIONS(224), 1,
      sym_dec_16,
    STATE(31), 1,
      sym_operand_16,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
  [2453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_x_register,
    ACTIONS(228), 1,
      sym_y_register,
  [2463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_COMMA,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
  [2473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      aux_sym_hex_8_token1,
    ACTIONS(236), 1,
      aux_sym_hex_16_token1,
  [2483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      aux_sym_bin_8_token1,
    ACTIONS(240), 1,
      aux_sym_bin_16_token1,
  [2493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_x_register,
  [2500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
  [2507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_y_register,
  [2514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym_y_register,
  [2521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym_x_register,
  [2528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_COMMA,
  [2535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      aux_sym_hex_8_token1,
  [2542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym_x_register,
  [2549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
  [2556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      aux_sym_bin_8_token1,
  [2563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      aux_sym_hex_16_token1,
  [2570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_RPAREN,
  [2577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym_y_register,
  [2584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      aux_sym_bin_16_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 68,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 204,
  [SMALL_STATE(8)] = 272,
  [SMALL_STATE(9)] = 340,
  [SMALL_STATE(10)] = 408,
  [SMALL_STATE(11)] = 476,
  [SMALL_STATE(12)] = 545,
  [SMALL_STATE(13)] = 612,
  [SMALL_STATE(14)] = 681,
  [SMALL_STATE(15)] = 750,
  [SMALL_STATE(16)] = 819,
  [SMALL_STATE(17)] = 888,
  [SMALL_STATE(18)] = 957,
  [SMALL_STATE(19)] = 1023,
  [SMALL_STATE(20)] = 1089,
  [SMALL_STATE(21)] = 1155,
  [SMALL_STATE(22)] = 1221,
  [SMALL_STATE(23)] = 1287,
  [SMALL_STATE(24)] = 1353,
  [SMALL_STATE(25)] = 1419,
  [SMALL_STATE(26)] = 1485,
  [SMALL_STATE(27)] = 1551,
  [SMALL_STATE(28)] = 1617,
  [SMALL_STATE(29)] = 1683,
  [SMALL_STATE(30)] = 1749,
  [SMALL_STATE(31)] = 1815,
  [SMALL_STATE(32)] = 1881,
  [SMALL_STATE(33)] = 1926,
  [SMALL_STATE(34)] = 1968,
  [SMALL_STATE(35)] = 2010,
  [SMALL_STATE(36)] = 2052,
  [SMALL_STATE(37)] = 2094,
  [SMALL_STATE(38)] = 2136,
  [SMALL_STATE(39)] = 2175,
  [SMALL_STATE(40)] = 2214,
  [SMALL_STATE(41)] = 2253,
  [SMALL_STATE(42)] = 2292,
  [SMALL_STATE(43)] = 2319,
  [SMALL_STATE(44)] = 2346,
  [SMALL_STATE(45)] = 2375,
  [SMALL_STATE(46)] = 2401,
  [SMALL_STATE(47)] = 2427,
  [SMALL_STATE(48)] = 2453,
  [SMALL_STATE(49)] = 2463,
  [SMALL_STATE(50)] = 2473,
  [SMALL_STATE(51)] = 2483,
  [SMALL_STATE(52)] = 2493,
  [SMALL_STATE(53)] = 2500,
  [SMALL_STATE(54)] = 2507,
  [SMALL_STATE(55)] = 2514,
  [SMALL_STATE(56)] = 2521,
  [SMALL_STATE(57)] = 2528,
  [SMALL_STATE(58)] = 2535,
  [SMALL_STATE(59)] = 2542,
  [SMALL_STATE(60)] = 2549,
  [SMALL_STATE(61)] = 2556,
  [SMALL_STATE(62)] = 2563,
  [SMALL_STATE(63)] = 2570,
  [SMALL_STATE(64)] = 2577,
  [SMALL_STATE(65)] = 2584,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca65, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca65, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(3),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(32),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(34),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(47),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(41),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(22),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(37),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(40),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(44),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(46),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(36),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(33),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(35),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(39),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(38),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_8, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_8, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_8, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_8, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_16, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_16, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_16, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_16, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_8, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_8, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_16, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_16, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_8, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_8, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_addr_inst, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_addr_inst, 2),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_operand_8, 1), REDUCE(sym_operand_16, 1),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_operand_8, 1), REDUCE(sym_operand_16, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_addr_inst, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_addr_inst, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inst, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_x_addr_inst, 4),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_x_addr_inst, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_y_addr_inst, 6),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_y_addr_inst, 6),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_impl_addr_inst, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_impl_addr_inst, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_x_addr_inst, 6),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_x_addr_inst, 6),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_y_addr_inst, 4),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_y_addr_inst, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_addr_inst, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_addr_inst, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acc_addr_inst, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_acc_addr_inst, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_x_addr_inst, 4),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_x_addr_inst, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_y_addr_inst, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_y_addr_inst, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_addr_inst, 4),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_addr_inst, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_addr_inst, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rel_addr_inst, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [254] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
