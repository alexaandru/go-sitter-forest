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
#define STATE_COUNT 64
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 128
#define ALIAS_COUNT 0
#define TOKEN_COUNT 106
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  sym_label = 2,
  anon_sym_COMMA = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  sym_adc_opcode = 6,
  sym_and_opcode = 7,
  sym_asl_opcode = 8,
  sym_bcc_opcode = 9,
  sym_bcs_opcode = 10,
  sym_beq_opcode = 11,
  sym_bit_opcode = 12,
  sym_bmi_opcode = 13,
  sym_bne_opcode = 14,
  sym_bpl_opcode = 15,
  sym_brk_opcode = 16,
  sym_bvc_opcode = 17,
  sym_bvs_opcode = 18,
  sym_clc_opcode = 19,
  sym_cld_opcode = 20,
  sym_cli_opcode = 21,
  sym_clv_opcode = 22,
  sym_cmp_opcode = 23,
  sym_cpx_opcode = 24,
  sym_cpy_opcode = 25,
  sym_dec_opcode = 26,
  sym_dex_opcode = 27,
  sym_dey_opcode = 28,
  sym_eor_opcode = 29,
  sym_inc_opcode = 30,
  sym_inx_opcode = 31,
  sym_iny_opcode = 32,
  sym_jmp_opcode = 33,
  sym_jsr_opcode = 34,
  sym_lda_opcode = 35,
  sym_ldx_opcode = 36,
  sym_ldy_opcode = 37,
  sym_lsr_opcode = 38,
  sym_nop_opcode = 39,
  sym_ora_opcode = 40,
  sym_pha_opcode = 41,
  sym_php_opcode = 42,
  sym_pla_opcode = 43,
  sym_plp_opcode = 44,
  sym_rol_opcode = 45,
  sym_ror_opcode = 46,
  sym_rti_opcode = 47,
  sym_rts_opcode = 48,
  sym_sbc_opcode = 49,
  sym_sec_opcode = 50,
  sym_sed_opcode = 51,
  sym_sei_opcode = 52,
  sym_sta_opcode = 53,
  sym_stx_opcode = 54,
  sym_sty_opcode = 55,
  sym_tax_opcode = 56,
  sym_tay_opcode = 57,
  sym_tsx_opcode = 58,
  sym_txa_opcode = 59,
  sym_tcs_opcode = 60,
  sym_tya_opcode = 61,
  anon_sym_PERCENT = 62,
  aux_sym_bin_8_token1 = 63,
  sym_dec_8 = 64,
  anon_sym_DOLLAR = 65,
  anon_sym_h = 66,
  aux_sym_hex_8_token1 = 67,
  aux_sym_hex_8_token2 = 68,
  aux_sym_bin_16_token1 = 69,
  sym_dec_16 = 70,
  aux_sym_hex_16_token1 = 71,
  sym_acc_register = 72,
  sym_x_register = 73,
  sym_y_register = 74,
  sym_imm_prefix = 75,
  anon_sym_PLUS = 76,
  anon_sym_DASH = 77,
  anon_sym_DOTBITNOT = 78,
  anon_sym_TILDE = 79,
  anon_sym_DOTLOBYTE = 80,
  anon_sym_LT = 81,
  anon_sym_DOTHIBYTE = 82,
  anon_sym_GT = 83,
  anon_sym_DOTBANKBYTE = 84,
  anon_sym_CARET = 85,
  anon_sym_STAR = 86,
  anon_sym_SLASH = 87,
  anon_sym_DOTMOD = 88,
  anon_sym_DOTBITAND = 89,
  anon_sym_AMP = 90,
  anon_sym_DOTBITXOR = 91,
  anon_sym_DOTSHL = 92,
  anon_sym_DOTSHR = 93,
  anon_sym_DOTBITOR = 94,
  anon_sym_PIPE = 95,
  anon_sym_EQ = 96,
  anon_sym_LT_EQ = 97,
  anon_sym_GT_EQ = 98,
  anon_sym_DOTAND = 99,
  anon_sym_AMP_AMP = 100,
  anon_sym_DOTXOR = 101,
  anon_sym_DOTOR = 102,
  anon_sym_PIPE_PIPE = 103,
  anon_sym_DOTNOT = 104,
  anon_sym_BANG = 105,
  sym_ca65 = 106,
  sym_inst = 107,
  sym_impl_addr_inst = 108,
  sym_acc_addr_inst = 109,
  sym_imm_addr_inst = 110,
  sym_abs_addr_inst = 111,
  sym_zp_addr_inst = 112,
  sym_abs_x_addr_inst = 113,
  sym_abs_y_addr_inst = 114,
  sym_zp_x_addr_inst = 115,
  sym_zp_y_addr_inst = 116,
  sym_ind_addr_inst = 117,
  sym_ind_x_addr_inst = 118,
  sym_ind_y_addr_inst = 119,
  sym_rel_addr_inst = 120,
  sym_operand_8 = 121,
  sym_bin_8 = 122,
  sym_hex_8 = 123,
  sym_operand_16 = 124,
  sym_bin_16 = 125,
  sym_hex_16 = 126,
  aux_sym_ca65_repeat1 = 127,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_label] = "label",
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(193);
      if (lookahead == '!') ADVANCE(422);
      if (lookahead == '#') ADVANCE(392);
      if (lookahead == '$') ADVANCE(347);
      if (lookahead == '%') ADVANCE(308);
      if (lookahead == '&') ADVANCE(407);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(403);
      if (lookahead == '+') ADVANCE(393);
      if (lookahead == ',') ADVANCE(196);
      if (lookahead == '-') ADVANCE(394);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '/') ADVANCE(404);
      if (lookahead == '0') ADVANCE(310);
      if (lookahead == '1') ADVANCE(326);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '<') ADVANCE(398);
      if (lookahead == '=') ADVANCE(413);
      if (lookahead == '>') ADVANCE(400);
      if (lookahead == '^') ADVANCE(402);
      if (lookahead == 'h') ADVANCE(348);
      if (lookahead == '|') ADVANCE(412);
      if (lookahead == '~') ADVANCE(396);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(388);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(117);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(132);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(136);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(135);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(125);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(139);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(144);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(137);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(115);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(390);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(391);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(392);
      if (lookahead == '$') ADVANCE(347);
      if (lookahead == '%') ADVANCE(308);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == '0') ADVANCE(328);
      if (lookahead == '1') ADVANCE(337);
      if (lookahead == '2') ADVANCE(330);
      if (lookahead == '6') ADVANCE(331);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == 'h') ADVANCE(348);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(389);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(342);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(347);
      if (lookahead == '%') ADVANCE(308);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == '0') ADVANCE(374);
      if (lookahead == '6') ADVANCE(377);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == 'h') ADVANCE(348);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(379);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(382);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(347);
      if (lookahead == '%') ADVANCE(308);
      if (lookahead == '0') ADVANCE(329);
      if (lookahead == '1') ADVANCE(345);
      if (lookahead == '2') ADVANCE(333);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == 'h') ADVANCE(348);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(357);
      if (lookahead == '1') ADVANCE(372);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(350);
      if (lookahead == ';') ADVANCE(194);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(354);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(9);
      if (lookahead == ';') ADVANCE(194);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(384);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(387);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(4);
      if (lookahead == '1') ADVANCE(188);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(7);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(8);
      if (lookahead == '1') ADVANCE(187);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(351);
      if (lookahead == ';') ADVANCE(194);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == '1') ADVANCE(185);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == '1') ADVANCE(182);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(13);
      if (lookahead == '1') ADVANCE(178);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(14);
      if (lookahead == '1') ADVANCE(173);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == '1') ADVANCE(167);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(311);
      if (lookahead == '1') ADVANCE(325);
      if (lookahead == ';') ADVANCE(194);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(257);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(271);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(293);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(195);
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
      if (lookahead == ':') ADVANCE(195);
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
      if (lookahead == ':') ADVANCE(195);
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
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(203);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(219);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(223);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(225);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(227);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(237);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(239);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(245);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(247);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(285);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(287);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(195);
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
      if (lookahead == ':') ADVANCE(195);
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
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(195);
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
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(195);
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
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(275);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(195);
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
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(195);
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
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(233);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(297);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(195);
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
      if (lookahead == 'D') ADVANCE(416);
      END_STATE();
    case 75:
      if (lookahead == 'D') ADVANCE(405);
      END_STATE();
    case 76:
      if (lookahead == 'D') ADVANCE(406);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(399);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(397);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(401);
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
      if (lookahead == 'L') ADVANCE(409);
      if (lookahead == 'R') ADVANCE(410);
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
      if (lookahead == 'R') ADVANCE(419);
      END_STATE();
    case 94:
      if (lookahead == 'R') ADVANCE(418);
      END_STATE();
    case 95:
      if (lookahead == 'R') ADVANCE(411);
      END_STATE();
    case 96:
      if (lookahead == 'R') ADVANCE(408);
      END_STATE();
    case 97:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 98:
      if (lookahead == 'T') ADVANCE(421);
      END_STATE();
    case 99:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 100:
      if (lookahead == 'T') ADVANCE(395);
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
      if (lookahead == 'h') ADVANCE(355);
      END_STATE();
    case 107:
      if (lookahead == 'h') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(256);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(258);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(268);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(272);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(290);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(292);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(294);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(148);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(152);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(113);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(114);
      END_STATE();
    case 116:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(123);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 117:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(149);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(129);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(133);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(119);
      END_STATE();
    case 118:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(202);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(204);
      END_STATE();
    case 119:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(218);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(220);
      END_STATE();
    case 120:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(222);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(224);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(226);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(228);
      END_STATE();
    case 121:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(236);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(238);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(240);
      END_STATE();
    case 122:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(244);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(246);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(248);
      END_STATE();
    case 123:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(282);
      END_STATE();
    case 124:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(284);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(286);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 125:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(108);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 128:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(110);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 129:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 130:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(278);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(280);
      END_STATE();
    case 131:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(216);
      END_STATE();
    case 132:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(140);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 133:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 134:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(274);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 135:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(146);
      END_STATE();
    case 136:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 137:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(134);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      END_STATE();
    case 138:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 139:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 140:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(230);
      END_STATE();
    case 141:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(250);
      END_STATE();
    case 142:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(262);
      END_STATE();
    case 143:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(206);
      END_STATE();
    case 144:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 145:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 146:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 147:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 148:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(304);
      END_STATE();
    case 149:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(208);
      END_STATE();
    case 150:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(232);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(234);
      END_STATE();
    case 151:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(296);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(298);
      END_STATE();
    case 152:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(300);
      END_STATE();
    case 153:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(365);
      END_STATE();
    case 154:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(153);
      END_STATE();
    case 155:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(154);
      END_STATE();
    case 156:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(155);
      END_STATE();
    case 157:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(156);
      END_STATE();
    case 158:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(157);
      END_STATE();
    case 159:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(158);
      END_STATE();
    case 160:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(358);
      END_STATE();
    case 161:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(159);
      END_STATE();
    case 162:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(160);
      END_STATE();
    case 163:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(162);
      END_STATE();
    case 164:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(163);
      END_STATE();
    case 165:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(164);
      END_STATE();
    case 166:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(165);
      END_STATE();
    case 167:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(166);
      END_STATE();
    case 168:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(366);
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
          lookahead == '1') ADVANCE(367);
      END_STATE();
    case 175:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(174);
      END_STATE();
    case 176:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(175);
      END_STATE();
    case 177:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(176);
      END_STATE();
    case 178:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(177);
      END_STATE();
    case 179:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(368);
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
          lookahead == '1') ADVANCE(369);
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
          lookahead == '1') ADVANCE(370);
      END_STATE();
    case 187:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(186);
      END_STATE();
    case 188:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(371);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 192:
      if (eof) ADVANCE(193);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == ',') ADVANCE(196);
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == '1') ADVANCE(161);
      if (lookahead == ';') ADVANCE(194);
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
          lookahead == ' ') SKIP(192)
      if (('F' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_adc_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_and_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_asl_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_bcc_opcode);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_bcc_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_bcs_opcode);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_bcs_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_beq_opcode);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_beq_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_bit_opcode);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_bit_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_bmi_opcode);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_bmi_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_bne_opcode);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_bne_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_bpl_opcode);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_bpl_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_brk_opcode);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_brk_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_bvc_opcode);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_bvc_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_bvs_opcode);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_bvs_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_clc_opcode);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_clc_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_cld_opcode);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_cld_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_cli_opcode);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_cli_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_clv_opcode);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_clv_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_cmp_opcode);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_cmp_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_cpx_opcode);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_cpx_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_cpy_opcode);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_cpy_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_dec_opcode);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_dec_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_dex_opcode);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_dex_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_dey_opcode);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_dey_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_eor_opcode);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_eor_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_inc_opcode);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_inc_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_inx_opcode);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_inx_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_iny_opcode);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_iny_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_jmp_opcode);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_jmp_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_jsr_opcode);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_jsr_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_lda_opcode);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_lda_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_ldx_opcode);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_ldx_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_ldy_opcode);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_ldy_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_lsr_opcode);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_lsr_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_nop_opcode);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_nop_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_ora_opcode);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ora_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_pha_opcode);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_pha_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_php_opcode);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_php_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_pla_opcode);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_pla_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_plp_opcode);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_plp_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_rol_opcode);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_rol_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ror_opcode);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_ror_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_rti_opcode);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_rti_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_rts_opcode);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_rts_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_sbc_opcode);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_sbc_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_sec_opcode);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_sec_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_sed_opcode);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_sed_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_sei_opcode);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_sei_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_sta_opcode);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_sta_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_stx_opcode);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_stx_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_sty_opcode);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_sty_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_tax_opcode);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_tax_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_tay_opcode);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_tay_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_tsx_opcode);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_tsx_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_txa_opcode);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_txa_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_tcs_opcode);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_tcs_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_tya_opcode);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_tya_opcode);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0') ADVANCE(310);
      if (lookahead == '1') ADVANCE(326);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0') ADVANCE(311);
      if (lookahead == '1') ADVANCE(325);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(365);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(309);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(312);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(313);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(314);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(315);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(316);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(317);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(318);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(319);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(320);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(321);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(322);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(323);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(324);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_dec_8);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '0') ADVANCE(328);
      if (lookahead == '1') ADVANCE(337);
      if (lookahead == '2') ADVANCE(330);
      if (lookahead == '6') ADVANCE(331);
      if (lookahead == 'h') ADVANCE(355);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(342);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '0') ADVANCE(329);
      if (lookahead == '1') ADVANCE(345);
      if (lookahead == '2') ADVANCE(333);
      if (lookahead == 'h') ADVANCE(355);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(335);
      if (lookahead == 'h') ADVANCE(355);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(332);
      if (lookahead == 'h') ADVANCE(355);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(375);
      if (lookahead == 'h') ADVANCE(355);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(381);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(336);
      if (lookahead == 'h') ADVANCE(355);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(355);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(355);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(346);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(327);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (lookahead == '0') ADVANCE(350);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(354);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (lookahead == '0') ADVANCE(351);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(349);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(352);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_hex_8_token2);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0') ADVANCE(357);
      if (lookahead == '1') ADVANCE(372);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(365);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(356);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(359);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(360);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(361);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(362);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(363);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(364);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(358);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(366);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(367);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(368);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(369);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(370);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(371);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_dec_16);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '0') ADVANCE(374);
      if (lookahead == '6') ADVANCE(377);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(379);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(382);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '3') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(380);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(373);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '5') ADVANCE(375);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(381);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '5') ADVANCE(376);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(379);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(373);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (lookahead == '0') ADVANCE(384);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(387);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_acc_register);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_acc_register);
      if (lookahead == 'h') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_x_register);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_y_register);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_imm_prefix);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_DOTBITNOT);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_DOTLOBYTE);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(414);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_DOTHIBYTE);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(415);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_DOTBANKBYTE);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_DOTMOD);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_DOTBITAND);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(417);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_DOTBITXOR);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_DOTSHL);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_DOTSHR);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_DOTBITOR);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(420);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_DOTAND);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_DOTXOR);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_DOTOR);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_DOTNOT);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 192},
  [2] = {.lex_state = 192},
  [3] = {.lex_state = 192},
  [4] = {.lex_state = 192},
  [5] = {.lex_state = 192},
  [6] = {.lex_state = 192},
  [7] = {.lex_state = 192},
  [8] = {.lex_state = 192},
  [9] = {.lex_state = 192},
  [10] = {.lex_state = 192},
  [11] = {.lex_state = 192},
  [12] = {.lex_state = 192},
  [13] = {.lex_state = 192},
  [14] = {.lex_state = 192},
  [15] = {.lex_state = 192},
  [16] = {.lex_state = 192},
  [17] = {.lex_state = 192},
  [18] = {.lex_state = 192},
  [19] = {.lex_state = 192},
  [20] = {.lex_state = 192},
  [21] = {.lex_state = 192},
  [22] = {.lex_state = 192},
  [23] = {.lex_state = 192},
  [24] = {.lex_state = 192},
  [25] = {.lex_state = 192},
  [26] = {.lex_state = 192},
  [27] = {.lex_state = 192},
  [28] = {.lex_state = 192},
  [29] = {.lex_state = 192},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 192},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 17},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 11},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
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
    [sym_ca65] = STATE(56),
    [sym_inst] = STATE(3),
    [sym_impl_addr_inst] = STATE(17),
    [sym_acc_addr_inst] = STATE(17),
    [sym_imm_addr_inst] = STATE(17),
    [sym_abs_addr_inst] = STATE(17),
    [sym_zp_addr_inst] = STATE(17),
    [sym_abs_x_addr_inst] = STATE(17),
    [sym_abs_y_addr_inst] = STATE(17),
    [sym_zp_x_addr_inst] = STATE(17),
    [sym_zp_y_addr_inst] = STATE(17),
    [sym_ind_addr_inst] = STATE(17),
    [sym_ind_x_addr_inst] = STATE(17),
    [sym_ind_y_addr_inst] = STATE(17),
    [sym_rel_addr_inst] = STATE(17),
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
  },
  [2] = {
    [sym_inst] = STATE(2),
    [sym_impl_addr_inst] = STATE(17),
    [sym_acc_addr_inst] = STATE(17),
    [sym_imm_addr_inst] = STATE(17),
    [sym_abs_addr_inst] = STATE(17),
    [sym_zp_addr_inst] = STATE(17),
    [sym_abs_x_addr_inst] = STATE(17),
    [sym_abs_y_addr_inst] = STATE(17),
    [sym_zp_x_addr_inst] = STATE(17),
    [sym_zp_y_addr_inst] = STATE(17),
    [sym_ind_addr_inst] = STATE(17),
    [sym_ind_x_addr_inst] = STATE(17),
    [sym_ind_y_addr_inst] = STATE(17),
    [sym_rel_addr_inst] = STATE(17),
    [aux_sym_ca65_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(39),
    [sym_adc_opcode] = ACTIONS(42),
    [sym_and_opcode] = ACTIONS(42),
    [sym_asl_opcode] = ACTIONS(45),
    [sym_bcc_opcode] = ACTIONS(48),
    [sym_bcs_opcode] = ACTIONS(48),
    [sym_beq_opcode] = ACTIONS(48),
    [sym_bit_opcode] = ACTIONS(51),
    [sym_bmi_opcode] = ACTIONS(48),
    [sym_bne_opcode] = ACTIONS(48),
    [sym_bpl_opcode] = ACTIONS(48),
    [sym_brk_opcode] = ACTIONS(54),
    [sym_bvc_opcode] = ACTIONS(48),
    [sym_bvs_opcode] = ACTIONS(48),
    [sym_clc_opcode] = ACTIONS(54),
    [sym_cld_opcode] = ACTIONS(54),
    [sym_cli_opcode] = ACTIONS(54),
    [sym_clv_opcode] = ACTIONS(54),
    [sym_cmp_opcode] = ACTIONS(42),
    [sym_cpx_opcode] = ACTIONS(57),
    [sym_cpy_opcode] = ACTIONS(57),
    [sym_dec_opcode] = ACTIONS(60),
    [sym_dex_opcode] = ACTIONS(54),
    [sym_dey_opcode] = ACTIONS(54),
    [sym_eor_opcode] = ACTIONS(42),
    [sym_inc_opcode] = ACTIONS(60),
    [sym_inx_opcode] = ACTIONS(54),
    [sym_iny_opcode] = ACTIONS(54),
    [sym_jmp_opcode] = ACTIONS(63),
    [sym_jsr_opcode] = ACTIONS(66),
    [sym_lda_opcode] = ACTIONS(42),
    [sym_ldx_opcode] = ACTIONS(69),
    [sym_ldy_opcode] = ACTIONS(72),
    [sym_lsr_opcode] = ACTIONS(72),
    [sym_nop_opcode] = ACTIONS(54),
    [sym_ora_opcode] = ACTIONS(42),
    [sym_pha_opcode] = ACTIONS(54),
    [sym_php_opcode] = ACTIONS(54),
    [sym_pla_opcode] = ACTIONS(54),
    [sym_plp_opcode] = ACTIONS(54),
    [sym_rol_opcode] = ACTIONS(45),
    [sym_ror_opcode] = ACTIONS(45),
    [sym_rti_opcode] = ACTIONS(54),
    [sym_rts_opcode] = ACTIONS(54),
    [sym_sbc_opcode] = ACTIONS(42),
    [sym_sec_opcode] = ACTIONS(54),
    [sym_sed_opcode] = ACTIONS(54),
    [sym_sei_opcode] = ACTIONS(54),
    [sym_sta_opcode] = ACTIONS(75),
    [sym_stx_opcode] = ACTIONS(78),
    [sym_sty_opcode] = ACTIONS(81),
    [sym_tax_opcode] = ACTIONS(54),
    [sym_tay_opcode] = ACTIONS(54),
    [sym_tsx_opcode] = ACTIONS(54),
    [sym_txa_opcode] = ACTIONS(54),
    [sym_tcs_opcode] = ACTIONS(54),
    [sym_tya_opcode] = ACTIONS(54),
  },
  [3] = {
    [sym_inst] = STATE(2),
    [sym_impl_addr_inst] = STATE(17),
    [sym_acc_addr_inst] = STATE(17),
    [sym_imm_addr_inst] = STATE(17),
    [sym_abs_addr_inst] = STATE(17),
    [sym_zp_addr_inst] = STATE(17),
    [sym_abs_x_addr_inst] = STATE(17),
    [sym_abs_y_addr_inst] = STATE(17),
    [sym_zp_x_addr_inst] = STATE(17),
    [sym_zp_y_addr_inst] = STATE(17),
    [sym_ind_addr_inst] = STATE(17),
    [sym_ind_x_addr_inst] = STATE(17),
    [sym_ind_y_addr_inst] = STATE(17),
    [sym_rel_addr_inst] = STATE(17),
    [aux_sym_ca65_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(86),
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
  [545] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(126), 56,
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
  [614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(126), 56,
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
  [683] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
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
  [752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
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
  [821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(136), 56,
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
  [887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(140), 56,
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
  [953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(144), 56,
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
  [1019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(148), 56,
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
  [1085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(152), 56,
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
  [1151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(156), 56,
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
  [1217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(160), 56,
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
  [1283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(164), 56,
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
  [1349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(168), 56,
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
  [1415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(172), 56,
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
  [1481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(176), 56,
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
  [1547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(180), 56,
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
  [1613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(126), 56,
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
  [1679] = 3,
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
  [1745] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_PERCENT,
    ACTIONS(186), 1,
      sym_dec_8,
    ACTIONS(190), 1,
      aux_sym_hex_8_token2,
    ACTIONS(192), 1,
      sym_dec_16,
    ACTIONS(194), 1,
      sym_imm_prefix,
    STATE(11), 1,
      sym_operand_16,
    STATE(12), 1,
      sym_operand_8,
    ACTIONS(188), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(9), 2,
      sym_bin_8,
      sym_hex_8,
  [1785] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_PERCENT,
    ACTIONS(186), 1,
      sym_dec_8,
    ACTIONS(190), 1,
      aux_sym_hex_8_token2,
    ACTIONS(192), 1,
      sym_dec_16,
    ACTIONS(194), 1,
      sym_imm_prefix,
    STATE(28), 1,
      sym_operand_8,
    STATE(29), 1,
      sym_operand_16,
    ACTIONS(188), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(9), 2,
      sym_bin_8,
      sym_hex_8,
  [1822] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_PERCENT,
    ACTIONS(186), 1,
      sym_dec_8,
    ACTIONS(190), 1,
      aux_sym_hex_8_token2,
    ACTIONS(192), 1,
      sym_dec_16,
    ACTIONS(194), 1,
      sym_imm_prefix,
    STATE(12), 1,
      sym_operand_8,
    STATE(14), 1,
      sym_operand_16,
    ACTIONS(188), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(9), 2,
      sym_bin_8,
      sym_hex_8,
  [1859] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_PERCENT,
    ACTIONS(186), 1,
      sym_dec_8,
    ACTIONS(190), 1,
      aux_sym_hex_8_token2,
    ACTIONS(192), 1,
      sym_dec_16,
    ACTIONS(194), 1,
      sym_imm_prefix,
    STATE(13), 1,
      sym_operand_8,
    STATE(15), 1,
      sym_operand_16,
    ACTIONS(188), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(9), 2,
      sym_bin_8,
      sym_hex_8,
  [1896] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_PERCENT,
    ACTIONS(186), 1,
      sym_dec_8,
    ACTIONS(190), 1,
      aux_sym_hex_8_token2,
    ACTIONS(192), 1,
      sym_dec_16,
    ACTIONS(196), 1,
      sym_acc_register,
    STATE(12), 1,
      sym_operand_8,
    STATE(14), 1,
      sym_operand_16,
    ACTIONS(188), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(9), 2,
      sym_bin_8,
      sym_hex_8,
  [1933] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_PERCENT,
    ACTIONS(186), 1,
      sym_dec_8,
    ACTIONS(190), 1,
      aux_sym_hex_8_token2,
    ACTIONS(192), 1,
      sym_dec_16,
    STATE(11), 1,
      sym_operand_16,
    STATE(12), 1,
      sym_operand_8,
    ACTIONS(188), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(9), 2,
      sym_bin_8,
      sym_hex_8,
  [1970] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_PERCENT,
    ACTIONS(186), 1,
      sym_dec_8,
    ACTIONS(190), 1,
      aux_sym_hex_8_token2,
    ACTIONS(192), 1,
      sym_dec_16,
    STATE(12), 1,
      sym_operand_8,
    STATE(29), 1,
      sym_operand_16,
    ACTIONS(188), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(9), 2,
      sym_bin_8,
      sym_hex_8,
  [2004] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_PERCENT,
    ACTIONS(186), 1,
      sym_dec_8,
    ACTIONS(190), 1,
      aux_sym_hex_8_token2,
    ACTIONS(192), 1,
      sym_dec_16,
    STATE(28), 1,
      sym_operand_8,
    STATE(29), 1,
      sym_operand_16,
    ACTIONS(188), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(9), 2,
      sym_bin_8,
      sym_hex_8,
  [2038] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_PERCENT,
    ACTIONS(186), 1,
      sym_dec_8,
    ACTIONS(190), 1,
      aux_sym_hex_8_token2,
    ACTIONS(192), 1,
      sym_dec_16,
    STATE(12), 1,
      sym_operand_8,
    STATE(14), 1,
      sym_operand_16,
    ACTIONS(188), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(9), 2,
      sym_bin_8,
      sym_hex_8,
  [2072] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_PERCENT,
    ACTIONS(186), 1,
      sym_dec_8,
    ACTIONS(190), 1,
      aux_sym_hex_8_token2,
    ACTIONS(192), 1,
      sym_dec_16,
    STATE(13), 1,
      sym_operand_8,
    STATE(29), 1,
      sym_operand_16,
    ACTIONS(188), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(9), 2,
      sym_bin_8,
      sym_hex_8,
  [2106] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_dec_8,
    ACTIONS(190), 1,
      aux_sym_hex_8_token2,
    ACTIONS(198), 1,
      anon_sym_PERCENT,
    STATE(46), 1,
      sym_operand_8,
    ACTIONS(200), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(9), 2,
      sym_bin_8,
      sym_hex_8,
  [2130] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_PERCENT,
    ACTIONS(208), 1,
      sym_dec_16,
    STATE(29), 1,
      sym_operand_16,
    ACTIONS(206), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
  [2154] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_dec_8,
    ACTIONS(190), 1,
      aux_sym_hex_8_token2,
    ACTIONS(198), 1,
      anon_sym_PERCENT,
    STATE(18), 1,
      sym_operand_8,
    ACTIONS(200), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(9), 2,
      sym_bin_8,
      sym_hex_8,
  [2178] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_PERCENT,
    ACTIONS(208), 1,
      sym_dec_16,
    STATE(27), 1,
      sym_operand_16,
    ACTIONS(206), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
  [2199] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_PERCENT,
    ACTIONS(208), 1,
      sym_dec_16,
    STATE(57), 1,
      sym_operand_16,
    ACTIONS(206), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
  [2220] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_PERCENT,
    ACTIONS(208), 1,
      sym_dec_16,
    STATE(29), 1,
      sym_operand_16,
    ACTIONS(206), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
  [2241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
  [2251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      aux_sym_hex_8_token1,
    ACTIONS(216), 1,
      aux_sym_hex_16_token1,
  [2261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      aux_sym_bin_8_token1,
    ACTIONS(220), 1,
      aux_sym_bin_16_token1,
  [2271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_x_register,
    ACTIONS(224), 1,
      sym_y_register,
  [2281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      aux_sym_bin_16_token1,
  [2288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym_y_register,
  [2295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_y_register,
  [2302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_x_register,
  [2309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_COMMA,
  [2316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      aux_sym_bin_8_token1,
  [2323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
  [2330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
  [2337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_x_register,
  [2344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym_x_register,
  [2351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
  [2358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_y_register,
  [2365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      aux_sym_hex_16_token1,
  [2372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      aux_sym_hex_8_token1,
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
  [SMALL_STATE(13)] = 614,
  [SMALL_STATE(14)] = 683,
  [SMALL_STATE(15)] = 752,
  [SMALL_STATE(16)] = 821,
  [SMALL_STATE(17)] = 887,
  [SMALL_STATE(18)] = 953,
  [SMALL_STATE(19)] = 1019,
  [SMALL_STATE(20)] = 1085,
  [SMALL_STATE(21)] = 1151,
  [SMALL_STATE(22)] = 1217,
  [SMALL_STATE(23)] = 1283,
  [SMALL_STATE(24)] = 1349,
  [SMALL_STATE(25)] = 1415,
  [SMALL_STATE(26)] = 1481,
  [SMALL_STATE(27)] = 1547,
  [SMALL_STATE(28)] = 1613,
  [SMALL_STATE(29)] = 1679,
  [SMALL_STATE(30)] = 1745,
  [SMALL_STATE(31)] = 1785,
  [SMALL_STATE(32)] = 1822,
  [SMALL_STATE(33)] = 1859,
  [SMALL_STATE(34)] = 1896,
  [SMALL_STATE(35)] = 1933,
  [SMALL_STATE(36)] = 1970,
  [SMALL_STATE(37)] = 2004,
  [SMALL_STATE(38)] = 2038,
  [SMALL_STATE(39)] = 2072,
  [SMALL_STATE(40)] = 2106,
  [SMALL_STATE(41)] = 2130,
  [SMALL_STATE(42)] = 2154,
  [SMALL_STATE(43)] = 2178,
  [SMALL_STATE(44)] = 2199,
  [SMALL_STATE(45)] = 2220,
  [SMALL_STATE(46)] = 2241,
  [SMALL_STATE(47)] = 2251,
  [SMALL_STATE(48)] = 2261,
  [SMALL_STATE(49)] = 2271,
  [SMALL_STATE(50)] = 2281,
  [SMALL_STATE(51)] = 2288,
  [SMALL_STATE(52)] = 2295,
  [SMALL_STATE(53)] = 2302,
  [SMALL_STATE(54)] = 2309,
  [SMALL_STATE(55)] = 2316,
  [SMALL_STATE(56)] = 2323,
  [SMALL_STATE(57)] = 2330,
  [SMALL_STATE(58)] = 2337,
  [SMALL_STATE(59)] = 2344,
  [SMALL_STATE(60)] = 2351,
  [SMALL_STATE(61)] = 2358,
  [SMALL_STATE(62)] = 2365,
  [SMALL_STATE(63)] = 2372,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca65, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(2),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(30),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(34),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(43),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(37),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(22),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(31),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(38),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(41),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(45),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(33),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(32),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(35),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(39),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(36),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca65, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_8, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_8, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_16, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_16, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_16, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_16, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_8, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_8, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_8, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_8, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_8, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_8, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_16, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_16, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_addr_inst, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_addr_inst, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_addr_inst, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_addr_inst, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_y_addr_inst, 6),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_y_addr_inst, 6),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inst, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_addr_inst, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_addr_inst, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_y_addr_inst, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_y_addr_inst, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_addr_inst, 4),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_addr_inst, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_y_addr_inst, 4),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_y_addr_inst, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_impl_addr_inst, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_impl_addr_inst, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_x_addr_inst, 6),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_x_addr_inst, 6),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_x_addr_inst, 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_x_addr_inst, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acc_addr_inst, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_acc_addr_inst, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_x_addr_inst, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_x_addr_inst, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_addr_inst, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rel_addr_inst, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [236] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
