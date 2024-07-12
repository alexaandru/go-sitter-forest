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
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 0
#define TOKEN_COUNT 105
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_COMMA = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  sym_adc_opcode = 5,
  sym_and_opcode = 6,
  sym_asl_opcode = 7,
  sym_bcc_opcode = 8,
  sym_bcs_opcode = 9,
  sym_beq_opcode = 10,
  sym_bit_opcode = 11,
  sym_bmi_opcode = 12,
  sym_bne_opcode = 13,
  sym_bpl_opcode = 14,
  sym_brk_opcode = 15,
  sym_bvc_opcode = 16,
  sym_bvs_opcode = 17,
  sym_clc_opcode = 18,
  sym_cld_opcode = 19,
  sym_cli_opcode = 20,
  sym_clv_opcode = 21,
  sym_cmp_opcode = 22,
  sym_cpx_opcode = 23,
  sym_cpy_opcode = 24,
  sym_dec_opcode = 25,
  sym_dex_opcode = 26,
  sym_dey_opcode = 27,
  sym_eor_opcode = 28,
  sym_inc_opcode = 29,
  sym_inx_opcode = 30,
  sym_iny_opcode = 31,
  sym_jmp_opcode = 32,
  sym_jsr_opcode = 33,
  sym_lda_opcode = 34,
  sym_ldx_opcode = 35,
  sym_ldy_opcode = 36,
  sym_lsr_opcode = 37,
  sym_nop_opcode = 38,
  sym_ora_opcode = 39,
  sym_pha_opcode = 40,
  sym_php_opcode = 41,
  sym_pla_opcode = 42,
  sym_plp_opcode = 43,
  sym_rol_opcode = 44,
  sym_ror_opcode = 45,
  sym_rti_opcode = 46,
  sym_rts_opcode = 47,
  sym_sbc_opcode = 48,
  sym_sec_opcode = 49,
  sym_sed_opcode = 50,
  sym_sei_opcode = 51,
  sym_sta_opcode = 52,
  sym_stx_opcode = 53,
  sym_sty_opcode = 54,
  sym_tax_opcode = 55,
  sym_tay_opcode = 56,
  sym_tsx_opcode = 57,
  sym_txa_opcode = 58,
  sym_tcs_opcode = 59,
  sym_tya_opcode = 60,
  anon_sym_PERCENT = 61,
  aux_sym_bin_8_token1 = 62,
  sym_dec_8 = 63,
  anon_sym_DOLLAR = 64,
  anon_sym_h = 65,
  aux_sym_hex_8_token1 = 66,
  aux_sym_hex_8_token2 = 67,
  aux_sym_bin_16_token1 = 68,
  sym_dec_16 = 69,
  aux_sym_hex_16_token1 = 70,
  sym_acc_register = 71,
  sym_x_register = 72,
  sym_y_register = 73,
  sym_imm_prefix = 74,
  anon_sym_PLUS = 75,
  anon_sym_DASH = 76,
  anon_sym_DOTBITNOT = 77,
  anon_sym_TILDE = 78,
  anon_sym_DOTLOBYTE = 79,
  anon_sym_LT = 80,
  anon_sym_DOTHIBYTE = 81,
  anon_sym_GT = 82,
  anon_sym_DOTBANKBYTE = 83,
  anon_sym_CARET = 84,
  anon_sym_STAR = 85,
  anon_sym_SLASH = 86,
  anon_sym_DOTMOD = 87,
  anon_sym_DOTBITAND = 88,
  anon_sym_AMP = 89,
  anon_sym_DOTBITXOR = 90,
  anon_sym_DOTSHL = 91,
  anon_sym_DOTSHR = 92,
  anon_sym_DOTBITOR = 93,
  anon_sym_PIPE = 94,
  anon_sym_EQ = 95,
  anon_sym_LT_EQ = 96,
  anon_sym_GT_EQ = 97,
  anon_sym_DOTAND = 98,
  anon_sym_AMP_AMP = 99,
  anon_sym_DOTXOR = 100,
  anon_sym_DOTOR = 101,
  anon_sym_PIPE_PIPE = 102,
  anon_sym_DOTNOT = 103,
  anon_sym_BANG = 104,
  sym_ca65 = 105,
  sym_inst = 106,
  sym_impl_addr_inst = 107,
  sym_acc_addr_inst = 108,
  sym_imm_addr_inst = 109,
  sym_abs_addr_inst = 110,
  sym_zp_addr_inst = 111,
  sym_abs_x_addr_inst = 112,
  sym_abs_y_addr_inst = 113,
  sym_zp_x_addr_inst = 114,
  sym_zp_y_addr_inst = 115,
  sym_ind_addr_inst = 116,
  sym_ind_x_addr_inst = 117,
  sym_ind_y_addr_inst = 118,
  sym_rel_addr_inst = 119,
  sym_operand_8 = 120,
  sym_bin_8 = 121,
  sym_hex_8 = 122,
  sym_operand_16 = 123,
  sym_bin_16 = 124,
  sym_hex_16 = 125,
  aux_sym_ca65_repeat1 = 126,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
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
      if (eof) ADVANCE(155);
      if (lookahead == '!') ADVANCE(330);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == '%') ADVANCE(216);
      if (lookahead == '&') ADVANCE(315);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == '*') ADVANCE(311);
      if (lookahead == '+') ADVANCE(301);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == '-') ADVANCE(302);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(312);
      if (lookahead == '0') ADVANCE(218);
      if (lookahead == '1') ADVANCE(234);
      if (lookahead == ';') ADVANCE(156);
      if (lookahead == '<') ADVANCE(306);
      if (lookahead == '=') ADVANCE(321);
      if (lookahead == '>') ADVANCE(308);
      if (lookahead == '^') ADVANCE(310);
      if (lookahead == 'h') ADVANCE(256);
      if (lookahead == '|') ADVANCE(320);
      if (lookahead == '~') ADVANCE(304);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(296);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(77);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(93);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(98);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(85);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(101);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(106);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(89);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(75);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(298);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(299);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == '%') ADVANCE(216);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == '0') ADVANCE(282);
      if (lookahead == '6') ADVANCE(285);
      if (lookahead == ';') ADVANCE(156);
      if (lookahead == 'h') ADVANCE(256);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(287);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(290);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == '%') ADVANCE(216);
      if (lookahead == '0') ADVANCE(236);
      if (lookahead == '1') ADVANCE(245);
      if (lookahead == '2') ADVANCE(238);
      if (lookahead == '6') ADVANCE(239);
      if (lookahead == ';') ADVANCE(156);
      if (lookahead == 'h') ADVANCE(256);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(297);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(250);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == '%') ADVANCE(216);
      if (lookahead == '0') ADVANCE(237);
      if (lookahead == '1') ADVANCE(253);
      if (lookahead == '2') ADVANCE(241);
      if (lookahead == ';') ADVANCE(156);
      if (lookahead == 'h') ADVANCE(256);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(258);
      if (lookahead == ';') ADVANCE(156);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(17);
      if (lookahead == '1') ADVANCE(123);
      if (lookahead == ';') ADVANCE(156);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(265);
      if (lookahead == '1') ADVANCE(280);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == ';') ADVANCE(156);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(292);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(6);
      if (lookahead == '1') ADVANCE(150);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(259);
      if (lookahead == ';') ADVANCE(156);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(9);
      if (lookahead == '1') ADVANCE(149);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == '1') ADVANCE(147);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(13);
      if (lookahead == '1') ADVANCE(144);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(14);
      if (lookahead == '1') ADVANCE(140);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == '1') ADVANCE(135);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == '1') ADVANCE(129);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(219);
      if (lookahead == '1') ADVANCE(233);
      if (lookahead == ';') ADVANCE(156);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(35);
      if (lookahead == 'B') ADVANCE(20);
      if (lookahead == 'H') ADVANCE(32);
      if (lookahead == 'L') ADVANCE(43);
      if (lookahead == 'M') ADVANCE(39);
      if (lookahead == 'N') ADVANCE(40);
      if (lookahead == 'O') ADVANCE(44);
      if (lookahead == 'S') ADVANCE(31);
      if (lookahead == 'X') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(36);
      if (lookahead == 'I') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(37);
      if (lookahead == 'N') ADVANCE(42);
      if (lookahead == 'O') ADVANCE(46);
      if (lookahead == 'X') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 'B') ADVANCE(54);
      END_STATE();
    case 23:
      if (lookahead == 'B') ADVANCE(55);
      END_STATE();
    case 24:
      if (lookahead == 'B') ADVANCE(56);
      END_STATE();
    case 25:
      if (lookahead == 'D') ADVANCE(324);
      END_STATE();
    case 26:
      if (lookahead == 'D') ADVANCE(313);
      END_STATE();
    case 27:
      if (lookahead == 'D') ADVANCE(314);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(307);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(305);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(309);
      END_STATE();
    case 31:
      if (lookahead == 'H') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 'I') ADVANCE(22);
      END_STATE();
    case 33:
      if (lookahead == 'K') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'L') ADVANCE(317);
      if (lookahead == 'R') ADVANCE(318);
      END_STATE();
    case 35:
      if (lookahead == 'N') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 'N') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 'N') ADVANCE(27);
      END_STATE();
    case 38:
      if (lookahead == 'O') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'O') ADVANCE(26);
      END_STATE();
    case 40:
      if (lookahead == 'O') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 'O') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'O') ADVANCE(23);
      END_STATE();
    case 44:
      if (lookahead == 'R') ADVANCE(327);
      END_STATE();
    case 45:
      if (lookahead == 'R') ADVANCE(326);
      END_STATE();
    case 46:
      if (lookahead == 'R') ADVANCE(319);
      END_STATE();
    case 47:
      if (lookahead == 'R') ADVANCE(316);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(329);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(303);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(29);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 54:
      if (lookahead == 'Y') ADVANCE(50);
      END_STATE();
    case 55:
      if (lookahead == 'Y') ADVANCE(52);
      END_STATE();
    case 56:
      if (lookahead == 'Y') ADVANCE(53);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(263);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(263);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(163);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(263);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(180);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(181);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(182);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(263);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(111);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(90);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(88);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(94);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(92);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(263);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(263);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(61);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(263);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(263);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(80);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(102);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(263);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(263);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(165);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(190);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(191);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(198);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(208);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(209);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(113);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(110);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(73);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(74);
      END_STATE();
    case 76:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(111);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(90);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(88);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(94);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(92);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(163);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(171);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(173);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(174);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(175);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(180);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(181);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(182);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(184);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(185);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(186);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(204);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(205);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 85:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(68);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(109);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 89:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(70);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 90:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(201);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(202);
      END_STATE();
    case 92:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(170);
      END_STATE();
    case 93:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(80);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(102);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(112);
      END_STATE();
    case 94:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 95:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(199);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 96:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 97:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(103);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(108);
      END_STATE();
    case 98:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 99:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      END_STATE();
    case 100:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 101:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 102:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(177);
      END_STATE();
    case 103:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(187);
      END_STATE();
    case 104:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(193);
      END_STATE();
    case 105:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(165);
      END_STATE();
    case 106:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 107:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 108:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 109:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 110:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(214);
      END_STATE();
    case 111:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(166);
      END_STATE();
    case 112:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(178);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(179);
      END_STATE();
    case 113:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(210);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(211);
      END_STATE();
    case 114:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(212);
      END_STATE();
    case 115:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(273);
      END_STATE();
    case 116:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(115);
      END_STATE();
    case 117:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(116);
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
          lookahead == '1') ADVANCE(266);
      END_STATE();
    case 123:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(121);
      END_STATE();
    case 124:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(122);
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
          lookahead == '1') ADVANCE(128);
      END_STATE();
    case 130:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(274);
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
          lookahead == '1') ADVANCE(133);
      END_STATE();
    case 135:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(134);
      END_STATE();
    case 136:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(275);
      END_STATE();
    case 137:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(136);
      END_STATE();
    case 138:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(137);
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
          lookahead == '1') ADVANCE(276);
      END_STATE();
    case 142:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(141);
      END_STATE();
    case 143:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(142);
      END_STATE();
    case 144:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(143);
      END_STATE();
    case 145:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(277);
      END_STATE();
    case 146:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(145);
      END_STATE();
    case 147:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(146);
      END_STATE();
    case 148:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(278);
      END_STATE();
    case 149:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(148);
      END_STATE();
    case 150:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(279);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 154:
      if (eof) ADVANCE(155);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == '%') ADVANCE(216);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == '0') ADVANCE(236);
      if (lookahead == '1') ADVANCE(245);
      if (lookahead == '2') ADVANCE(238);
      if (lookahead == '6') ADVANCE(239);
      if (lookahead == ';') ADVANCE(156);
      if (lookahead == 'h') ADVANCE(256);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(62);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(60);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(64);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(67);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(98);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(85);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(101);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(106);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(89);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(75);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(250);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(154)
      END_STATE();
    case 155:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_adc_opcode);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_and_opcode);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_asl_opcode);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_bcc_opcode);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_bcs_opcode);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_beq_opcode);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_bit_opcode);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_bmi_opcode);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_bne_opcode);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_bpl_opcode);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_brk_opcode);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_bvc_opcode);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_bvs_opcode);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_clc_opcode);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_cld_opcode);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_cli_opcode);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_clv_opcode);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_cmp_opcode);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_cpx_opcode);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_cpy_opcode);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_dec_opcode);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_dex_opcode);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_dey_opcode);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_eor_opcode);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_inc_opcode);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_inx_opcode);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_iny_opcode);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_jmp_opcode);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_jsr_opcode);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_lda_opcode);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_ldx_opcode);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_ldy_opcode);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_lsr_opcode);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_nop_opcode);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ora_opcode);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_pha_opcode);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_php_opcode);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_pla_opcode);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_plp_opcode);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_rol_opcode);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_ror_opcode);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_rti_opcode);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_rts_opcode);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_sbc_opcode);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_sec_opcode);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_sed_opcode);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_sei_opcode);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_sta_opcode);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_stx_opcode);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_sty_opcode);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_tax_opcode);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_tay_opcode);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_tsx_opcode);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_txa_opcode);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_tcs_opcode);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_tya_opcode);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0') ADVANCE(218);
      if (lookahead == '1') ADVANCE(234);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0') ADVANCE(219);
      if (lookahead == '1') ADVANCE(233);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(273);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(217);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(220);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(221);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(222);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(223);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(224);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(225);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(226);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(227);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(228);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(229);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(230);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(231);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(232);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_dec_8);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '0') ADVANCE(236);
      if (lookahead == '1') ADVANCE(245);
      if (lookahead == '2') ADVANCE(238);
      if (lookahead == '6') ADVANCE(239);
      if (lookahead == 'h') ADVANCE(263);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(250);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '0') ADVANCE(237);
      if (lookahead == '1') ADVANCE(253);
      if (lookahead == '2') ADVANCE(241);
      if (lookahead == 'h') ADVANCE(263);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(243);
      if (lookahead == 'h') ADVANCE(263);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(240);
      if (lookahead == 'h') ADVANCE(263);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(283);
      if (lookahead == 'h') ADVANCE(263);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(289);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(244);
      if (lookahead == 'h') ADVANCE(263);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(263);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(263);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(254);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(235);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (lookahead == '0') ADVANCE(258);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (lookahead == '0') ADVANCE(259);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_hex_8_token2);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0') ADVANCE(265);
      if (lookahead == '1') ADVANCE(280);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(273);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(264);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(267);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(269);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(270);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(271);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(272);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(266);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(274);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(275);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(276);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(277);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(278);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(279);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_dec_16);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '0') ADVANCE(282);
      if (lookahead == '6') ADVANCE(285);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(287);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(290);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '3') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(288);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '5') ADVANCE(283);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(289);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '5') ADVANCE(284);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(287);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(281);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (lookahead == '0') ADVANCE(292);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(291);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_acc_register);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_acc_register);
      if (lookahead == 'h') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_x_register);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_y_register);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_imm_prefix);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_DOTBITNOT);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_DOTLOBYTE);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(322);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_DOTHIBYTE);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(323);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_DOTBANKBYTE);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_DOTMOD);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_DOTBITAND);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(325);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_DOTBITXOR);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_DOTSHL);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_DOTSHR);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_DOTBITOR);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(328);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_DOTAND);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_DOTXOR);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_DOTOR);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_DOTNOT);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 154},
  [2] = {.lex_state = 154},
  [3] = {.lex_state = 154},
  [4] = {.lex_state = 154},
  [5] = {.lex_state = 154},
  [6] = {.lex_state = 154},
  [7] = {.lex_state = 154},
  [8] = {.lex_state = 154},
  [9] = {.lex_state = 154},
  [10] = {.lex_state = 154},
  [11] = {.lex_state = 154},
  [12] = {.lex_state = 154},
  [13] = {.lex_state = 154},
  [14] = {.lex_state = 154},
  [15] = {.lex_state = 154},
  [16] = {.lex_state = 154},
  [17] = {.lex_state = 154},
  [18] = {.lex_state = 154},
  [19] = {.lex_state = 154},
  [20] = {.lex_state = 154},
  [21] = {.lex_state = 154},
  [22] = {.lex_state = 154},
  [23] = {.lex_state = 154},
  [24] = {.lex_state = 154},
  [25] = {.lex_state = 154},
  [26] = {.lex_state = 154},
  [27] = {.lex_state = 154},
  [28] = {.lex_state = 154},
  [29] = {.lex_state = 154},
  [30] = {.lex_state = 154},
  [31] = {.lex_state = 154},
  [32] = {.lex_state = 154},
  [33] = {.lex_state = 154},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 154},
  [36] = {.lex_state = 154},
  [37] = {.lex_state = 154},
  [38] = {.lex_state = 154},
  [39] = {.lex_state = 154},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 18},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 7},
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
    [sym_adc_opcode] = ACTIONS(7),
    [sym_and_opcode] = ACTIONS(7),
    [sym_asl_opcode] = ACTIONS(9),
    [sym_bcc_opcode] = ACTIONS(11),
    [sym_bcs_opcode] = ACTIONS(11),
    [sym_beq_opcode] = ACTIONS(11),
    [sym_bit_opcode] = ACTIONS(13),
    [sym_bmi_opcode] = ACTIONS(11),
    [sym_bne_opcode] = ACTIONS(11),
    [sym_bpl_opcode] = ACTIONS(11),
    [sym_brk_opcode] = ACTIONS(15),
    [sym_bvc_opcode] = ACTIONS(11),
    [sym_bvs_opcode] = ACTIONS(11),
    [sym_clc_opcode] = ACTIONS(15),
    [sym_cld_opcode] = ACTIONS(15),
    [sym_cli_opcode] = ACTIONS(15),
    [sym_clv_opcode] = ACTIONS(15),
    [sym_cmp_opcode] = ACTIONS(7),
    [sym_cpx_opcode] = ACTIONS(17),
    [sym_cpy_opcode] = ACTIONS(17),
    [sym_dec_opcode] = ACTIONS(19),
    [sym_dex_opcode] = ACTIONS(15),
    [sym_dey_opcode] = ACTIONS(15),
    [sym_eor_opcode] = ACTIONS(7),
    [sym_inc_opcode] = ACTIONS(19),
    [sym_inx_opcode] = ACTIONS(15),
    [sym_iny_opcode] = ACTIONS(15),
    [sym_jmp_opcode] = ACTIONS(21),
    [sym_jsr_opcode] = ACTIONS(23),
    [sym_lda_opcode] = ACTIONS(7),
    [sym_ldx_opcode] = ACTIONS(25),
    [sym_ldy_opcode] = ACTIONS(27),
    [sym_lsr_opcode] = ACTIONS(27),
    [sym_nop_opcode] = ACTIONS(15),
    [sym_ora_opcode] = ACTIONS(7),
    [sym_pha_opcode] = ACTIONS(15),
    [sym_php_opcode] = ACTIONS(15),
    [sym_pla_opcode] = ACTIONS(15),
    [sym_plp_opcode] = ACTIONS(15),
    [sym_rol_opcode] = ACTIONS(9),
    [sym_ror_opcode] = ACTIONS(9),
    [sym_rti_opcode] = ACTIONS(15),
    [sym_rts_opcode] = ACTIONS(15),
    [sym_sbc_opcode] = ACTIONS(7),
    [sym_sec_opcode] = ACTIONS(15),
    [sym_sed_opcode] = ACTIONS(15),
    [sym_sei_opcode] = ACTIONS(15),
    [sym_sta_opcode] = ACTIONS(29),
    [sym_stx_opcode] = ACTIONS(31),
    [sym_sty_opcode] = ACTIONS(33),
    [sym_tax_opcode] = ACTIONS(15),
    [sym_tay_opcode] = ACTIONS(15),
    [sym_tsx_opcode] = ACTIONS(15),
    [sym_txa_opcode] = ACTIONS(15),
    [sym_tcs_opcode] = ACTIONS(15),
    [sym_tya_opcode] = ACTIONS(15),
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
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_adc_opcode] = ACTIONS(37),
    [sym_and_opcode] = ACTIONS(37),
    [sym_asl_opcode] = ACTIONS(40),
    [sym_bcc_opcode] = ACTIONS(43),
    [sym_bcs_opcode] = ACTIONS(43),
    [sym_beq_opcode] = ACTIONS(43),
    [sym_bit_opcode] = ACTIONS(46),
    [sym_bmi_opcode] = ACTIONS(43),
    [sym_bne_opcode] = ACTIONS(43),
    [sym_bpl_opcode] = ACTIONS(43),
    [sym_brk_opcode] = ACTIONS(49),
    [sym_bvc_opcode] = ACTIONS(43),
    [sym_bvs_opcode] = ACTIONS(43),
    [sym_clc_opcode] = ACTIONS(49),
    [sym_cld_opcode] = ACTIONS(49),
    [sym_cli_opcode] = ACTIONS(49),
    [sym_clv_opcode] = ACTIONS(49),
    [sym_cmp_opcode] = ACTIONS(37),
    [sym_cpx_opcode] = ACTIONS(52),
    [sym_cpy_opcode] = ACTIONS(52),
    [sym_dec_opcode] = ACTIONS(55),
    [sym_dex_opcode] = ACTIONS(49),
    [sym_dey_opcode] = ACTIONS(49),
    [sym_eor_opcode] = ACTIONS(37),
    [sym_inc_opcode] = ACTIONS(55),
    [sym_inx_opcode] = ACTIONS(49),
    [sym_iny_opcode] = ACTIONS(49),
    [sym_jmp_opcode] = ACTIONS(58),
    [sym_jsr_opcode] = ACTIONS(61),
    [sym_lda_opcode] = ACTIONS(37),
    [sym_ldx_opcode] = ACTIONS(64),
    [sym_ldy_opcode] = ACTIONS(67),
    [sym_lsr_opcode] = ACTIONS(67),
    [sym_nop_opcode] = ACTIONS(49),
    [sym_ora_opcode] = ACTIONS(37),
    [sym_pha_opcode] = ACTIONS(49),
    [sym_php_opcode] = ACTIONS(49),
    [sym_pla_opcode] = ACTIONS(49),
    [sym_plp_opcode] = ACTIONS(49),
    [sym_rol_opcode] = ACTIONS(40),
    [sym_ror_opcode] = ACTIONS(40),
    [sym_rti_opcode] = ACTIONS(49),
    [sym_rts_opcode] = ACTIONS(49),
    [sym_sbc_opcode] = ACTIONS(37),
    [sym_sec_opcode] = ACTIONS(49),
    [sym_sed_opcode] = ACTIONS(49),
    [sym_sei_opcode] = ACTIONS(49),
    [sym_sta_opcode] = ACTIONS(70),
    [sym_stx_opcode] = ACTIONS(73),
    [sym_sty_opcode] = ACTIONS(76),
    [sym_tax_opcode] = ACTIONS(49),
    [sym_tay_opcode] = ACTIONS(49),
    [sym_tsx_opcode] = ACTIONS(49),
    [sym_txa_opcode] = ACTIONS(49),
    [sym_tcs_opcode] = ACTIONS(49),
    [sym_tya_opcode] = ACTIONS(49),
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
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [sym_adc_opcode] = ACTIONS(7),
    [sym_and_opcode] = ACTIONS(7),
    [sym_asl_opcode] = ACTIONS(9),
    [sym_bcc_opcode] = ACTIONS(11),
    [sym_bcs_opcode] = ACTIONS(11),
    [sym_beq_opcode] = ACTIONS(11),
    [sym_bit_opcode] = ACTIONS(13),
    [sym_bmi_opcode] = ACTIONS(11),
    [sym_bne_opcode] = ACTIONS(11),
    [sym_bpl_opcode] = ACTIONS(11),
    [sym_brk_opcode] = ACTIONS(15),
    [sym_bvc_opcode] = ACTIONS(11),
    [sym_bvs_opcode] = ACTIONS(11),
    [sym_clc_opcode] = ACTIONS(15),
    [sym_cld_opcode] = ACTIONS(15),
    [sym_cli_opcode] = ACTIONS(15),
    [sym_clv_opcode] = ACTIONS(15),
    [sym_cmp_opcode] = ACTIONS(7),
    [sym_cpx_opcode] = ACTIONS(17),
    [sym_cpy_opcode] = ACTIONS(17),
    [sym_dec_opcode] = ACTIONS(19),
    [sym_dex_opcode] = ACTIONS(15),
    [sym_dey_opcode] = ACTIONS(15),
    [sym_eor_opcode] = ACTIONS(7),
    [sym_inc_opcode] = ACTIONS(19),
    [sym_inx_opcode] = ACTIONS(15),
    [sym_iny_opcode] = ACTIONS(15),
    [sym_jmp_opcode] = ACTIONS(21),
    [sym_jsr_opcode] = ACTIONS(23),
    [sym_lda_opcode] = ACTIONS(7),
    [sym_ldx_opcode] = ACTIONS(25),
    [sym_ldy_opcode] = ACTIONS(27),
    [sym_lsr_opcode] = ACTIONS(27),
    [sym_nop_opcode] = ACTIONS(15),
    [sym_ora_opcode] = ACTIONS(7),
    [sym_pha_opcode] = ACTIONS(15),
    [sym_php_opcode] = ACTIONS(15),
    [sym_pla_opcode] = ACTIONS(15),
    [sym_plp_opcode] = ACTIONS(15),
    [sym_rol_opcode] = ACTIONS(9),
    [sym_ror_opcode] = ACTIONS(9),
    [sym_rti_opcode] = ACTIONS(15),
    [sym_rts_opcode] = ACTIONS(15),
    [sym_sbc_opcode] = ACTIONS(7),
    [sym_sec_opcode] = ACTIONS(15),
    [sym_sed_opcode] = ACTIONS(15),
    [sym_sei_opcode] = ACTIONS(15),
    [sym_sta_opcode] = ACTIONS(29),
    [sym_stx_opcode] = ACTIONS(31),
    [sym_sty_opcode] = ACTIONS(33),
    [sym_tax_opcode] = ACTIONS(15),
    [sym_tay_opcode] = ACTIONS(15),
    [sym_tsx_opcode] = ACTIONS(15),
    [sym_txa_opcode] = ACTIONS(15),
    [sym_tcs_opcode] = ACTIONS(15),
    [sym_tya_opcode] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 59,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [65] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 59,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 59,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 59,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 59,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 59,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 59,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    ACTIONS(95), 57,
      ts_builtin_sym_end,
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
  [521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    ACTIONS(99), 57,
      ts_builtin_sym_end,
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
  [587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    ACTIONS(99), 57,
      ts_builtin_sym_end,
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
  [653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(95), 57,
      ts_builtin_sym_end,
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
  [719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(95), 57,
      ts_builtin_sym_end,
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
  [785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 57,
      ts_builtin_sym_end,
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
  [848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 57,
      ts_builtin_sym_end,
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
  [911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 57,
      ts_builtin_sym_end,
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
  [974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 57,
      ts_builtin_sym_end,
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
  [1037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 57,
      ts_builtin_sym_end,
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
  [1100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 57,
      ts_builtin_sym_end,
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
  [1163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 57,
      ts_builtin_sym_end,
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
  [1226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 57,
      ts_builtin_sym_end,
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
  [1289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 57,
      ts_builtin_sym_end,
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
  [1352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 57,
      ts_builtin_sym_end,
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
  [1415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 57,
      ts_builtin_sym_end,
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
  [1478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 57,
      ts_builtin_sym_end,
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
  [1541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 57,
      ts_builtin_sym_end,
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
  [1604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 57,
      ts_builtin_sym_end,
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
  [1667] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_PERCENT,
    ACTIONS(137), 1,
      sym_dec_8,
    ACTIONS(141), 1,
      aux_sym_hex_8_token2,
    ACTIONS(143), 1,
      sym_dec_16,
    ACTIONS(145), 1,
      sym_imm_prefix,
    STATE(11), 1,
      sym_operand_16,
    STATE(12), 1,
      sym_operand_8,
    ACTIONS(139), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(9), 2,
      sym_bin_8,
      sym_hex_8,
  [1707] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_PERCENT,
    ACTIONS(137), 1,
      sym_dec_8,
    ACTIONS(141), 1,
      aux_sym_hex_8_token2,
    ACTIONS(143), 1,
      sym_dec_16,
    ACTIONS(145), 1,
      sym_imm_prefix,
    STATE(28), 1,
      sym_operand_8,
    STATE(29), 1,
      sym_operand_16,
    ACTIONS(139), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(9), 2,
      sym_bin_8,
      sym_hex_8,
  [1744] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_PERCENT,
    ACTIONS(137), 1,
      sym_dec_8,
    ACTIONS(141), 1,
      aux_sym_hex_8_token2,
    ACTIONS(143), 1,
      sym_dec_16,
    ACTIONS(145), 1,
      sym_imm_prefix,
    STATE(12), 1,
      sym_operand_8,
    STATE(14), 1,
      sym_operand_16,
    ACTIONS(139), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(9), 2,
      sym_bin_8,
      sym_hex_8,
  [1781] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_PERCENT,
    ACTIONS(137), 1,
      sym_dec_8,
    ACTIONS(141), 1,
      aux_sym_hex_8_token2,
    ACTIONS(143), 1,
      sym_dec_16,
    ACTIONS(145), 1,
      sym_imm_prefix,
    STATE(13), 1,
      sym_operand_8,
    STATE(15), 1,
      sym_operand_16,
    ACTIONS(139), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(9), 2,
      sym_bin_8,
      sym_hex_8,
  [1818] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_PERCENT,
    ACTIONS(137), 1,
      sym_dec_8,
    ACTIONS(141), 1,
      aux_sym_hex_8_token2,
    ACTIONS(143), 1,
      sym_dec_16,
    ACTIONS(147), 1,
      sym_acc_register,
    STATE(12), 1,
      sym_operand_8,
    STATE(14), 1,
      sym_operand_16,
    ACTIONS(139), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(9), 2,
      sym_bin_8,
      sym_hex_8,
  [1855] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_PERCENT,
    ACTIONS(137), 1,
      sym_dec_8,
    ACTIONS(141), 1,
      aux_sym_hex_8_token2,
    ACTIONS(143), 1,
      sym_dec_16,
    STATE(11), 1,
      sym_operand_16,
    STATE(12), 1,
      sym_operand_8,
    ACTIONS(139), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(9), 2,
      sym_bin_8,
      sym_hex_8,
  [1892] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_PERCENT,
    ACTIONS(137), 1,
      sym_dec_8,
    ACTIONS(141), 1,
      aux_sym_hex_8_token2,
    ACTIONS(143), 1,
      sym_dec_16,
    STATE(12), 1,
      sym_operand_8,
    STATE(29), 1,
      sym_operand_16,
    ACTIONS(139), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(9), 2,
      sym_bin_8,
      sym_hex_8,
  [1926] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_PERCENT,
    ACTIONS(137), 1,
      sym_dec_8,
    ACTIONS(141), 1,
      aux_sym_hex_8_token2,
    ACTIONS(143), 1,
      sym_dec_16,
    STATE(28), 1,
      sym_operand_8,
    STATE(29), 1,
      sym_operand_16,
    ACTIONS(139), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(9), 2,
      sym_bin_8,
      sym_hex_8,
  [1960] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_PERCENT,
    ACTIONS(137), 1,
      sym_dec_8,
    ACTIONS(141), 1,
      aux_sym_hex_8_token2,
    ACTIONS(143), 1,
      sym_dec_16,
    STATE(12), 1,
      sym_operand_8,
    STATE(14), 1,
      sym_operand_16,
    ACTIONS(139), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(9), 2,
      sym_bin_8,
      sym_hex_8,
  [1994] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_PERCENT,
    ACTIONS(137), 1,
      sym_dec_8,
    ACTIONS(141), 1,
      aux_sym_hex_8_token2,
    ACTIONS(143), 1,
      sym_dec_16,
    STATE(13), 1,
      sym_operand_8,
    STATE(29), 1,
      sym_operand_16,
    ACTIONS(139), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(9), 2,
      sym_bin_8,
      sym_hex_8,
  [2028] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_dec_8,
    ACTIONS(141), 1,
      aux_sym_hex_8_token2,
    ACTIONS(149), 1,
      anon_sym_PERCENT,
    STATE(46), 1,
      sym_operand_8,
    ACTIONS(151), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(9), 2,
      sym_bin_8,
      sym_hex_8,
  [2052] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_PERCENT,
    ACTIONS(159), 1,
      sym_dec_16,
    STATE(29), 1,
      sym_operand_16,
    ACTIONS(157), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
  [2076] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_dec_8,
    ACTIONS(141), 1,
      aux_sym_hex_8_token2,
    ACTIONS(149), 1,
      anon_sym_PERCENT,
    STATE(18), 1,
      sym_operand_8,
    ACTIONS(151), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(9), 2,
      sym_bin_8,
      sym_hex_8,
  [2100] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_PERCENT,
    ACTIONS(159), 1,
      sym_dec_16,
    STATE(27), 1,
      sym_operand_16,
    ACTIONS(157), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
  [2121] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_PERCENT,
    ACTIONS(159), 1,
      sym_dec_16,
    STATE(57), 1,
      sym_operand_16,
    ACTIONS(157), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
  [2142] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_PERCENT,
    ACTIONS(159), 1,
      sym_dec_16,
    STATE(29), 1,
      sym_operand_16,
    ACTIONS(157), 2,
      anon_sym_DOLLAR,
      anon_sym_h,
    STATE(6), 2,
      sym_bin_16,
      sym_hex_16,
  [2163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
  [2173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym_hex_8_token1,
    ACTIONS(167), 1,
      aux_sym_hex_16_token1,
  [2183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      aux_sym_bin_8_token1,
    ACTIONS(171), 1,
      aux_sym_bin_16_token1,
  [2193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_x_register,
    ACTIONS(175), 1,
      sym_y_register,
  [2203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      aux_sym_bin_16_token1,
  [2210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      sym_y_register,
  [2217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_y_register,
  [2224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym_x_register,
  [2231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_COMMA,
  [2238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      aux_sym_bin_8_token1,
  [2245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
  [2252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
  [2259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_x_register,
  [2266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym_x_register,
  [2273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
  [2280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_y_register,
  [2287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      aux_sym_hex_16_token1,
  [2294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      aux_sym_hex_8_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 65,
  [SMALL_STATE(6)] = 130,
  [SMALL_STATE(7)] = 195,
  [SMALL_STATE(8)] = 260,
  [SMALL_STATE(9)] = 325,
  [SMALL_STATE(10)] = 390,
  [SMALL_STATE(11)] = 455,
  [SMALL_STATE(12)] = 521,
  [SMALL_STATE(13)] = 587,
  [SMALL_STATE(14)] = 653,
  [SMALL_STATE(15)] = 719,
  [SMALL_STATE(16)] = 785,
  [SMALL_STATE(17)] = 848,
  [SMALL_STATE(18)] = 911,
  [SMALL_STATE(19)] = 974,
  [SMALL_STATE(20)] = 1037,
  [SMALL_STATE(21)] = 1100,
  [SMALL_STATE(22)] = 1163,
  [SMALL_STATE(23)] = 1226,
  [SMALL_STATE(24)] = 1289,
  [SMALL_STATE(25)] = 1352,
  [SMALL_STATE(26)] = 1415,
  [SMALL_STATE(27)] = 1478,
  [SMALL_STATE(28)] = 1541,
  [SMALL_STATE(29)] = 1604,
  [SMALL_STATE(30)] = 1667,
  [SMALL_STATE(31)] = 1707,
  [SMALL_STATE(32)] = 1744,
  [SMALL_STATE(33)] = 1781,
  [SMALL_STATE(34)] = 1818,
  [SMALL_STATE(35)] = 1855,
  [SMALL_STATE(36)] = 1892,
  [SMALL_STATE(37)] = 1926,
  [SMALL_STATE(38)] = 1960,
  [SMALL_STATE(39)] = 1994,
  [SMALL_STATE(40)] = 2028,
  [SMALL_STATE(41)] = 2052,
  [SMALL_STATE(42)] = 2076,
  [SMALL_STATE(43)] = 2100,
  [SMALL_STATE(44)] = 2121,
  [SMALL_STATE(45)] = 2142,
  [SMALL_STATE(46)] = 2163,
  [SMALL_STATE(47)] = 2173,
  [SMALL_STATE(48)] = 2183,
  [SMALL_STATE(49)] = 2193,
  [SMALL_STATE(50)] = 2203,
  [SMALL_STATE(51)] = 2210,
  [SMALL_STATE(52)] = 2217,
  [SMALL_STATE(53)] = 2224,
  [SMALL_STATE(54)] = 2231,
  [SMALL_STATE(55)] = 2238,
  [SMALL_STATE(56)] = 2245,
  [SMALL_STATE(57)] = 2252,
  [SMALL_STATE(58)] = 2259,
  [SMALL_STATE(59)] = 2266,
  [SMALL_STATE(60)] = 2273,
  [SMALL_STATE(61)] = 2280,
  [SMALL_STATE(62)] = 2287,
  [SMALL_STATE(63)] = 2294,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca65, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(30),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(34),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(43),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(37),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(22),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(31),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(38),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(41),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(45),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(33),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(32),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(35),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(39),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(36),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca65, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_8, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_16, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_16, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_8, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_8, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_8, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_16, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_addr_inst, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_addr_inst, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_y_addr_inst, 6),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_addr_inst, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_y_addr_inst, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_addr_inst, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_y_addr_inst, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_impl_addr_inst, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_x_addr_inst, 6),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_x_addr_inst, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acc_addr_inst, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_x_addr_inst, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_addr_inst, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [187] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
