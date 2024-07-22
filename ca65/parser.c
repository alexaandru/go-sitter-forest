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
#define STATE_COUNT 146
#define LARGE_STATE_COUNT 45
#define SYMBOL_COUNT 179
#define ALIAS_COUNT 0
#define TOKEN_COUNT 122
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
  anon_sym_LT_LT = 96,
  anon_sym_DOTSHR = 97,
  anon_sym_GT_GT = 98,
  anon_sym_DOTBITOR = 99,
  anon_sym_PIPE = 100,
  anon_sym_EQ = 101,
  anon_sym_LT_GT = 102,
  anon_sym_LT_EQ = 103,
  anon_sym_GT_EQ = 104,
  anon_sym_DOTAND = 105,
  anon_sym_AMP_AMP = 106,
  anon_sym_DOTXOR = 107,
  anon_sym_DOTOR = 108,
  anon_sym_PIPE_PIPE = 109,
  anon_sym_DOTNOT = 110,
  anon_sym_BANG = 111,
  sym_a16_ctrl_cmd = 112,
  sym_a8_ctrl_cmd = 113,
  aux_sym_addr_ctrl_cmd_token1 = 114,
  aux_sym_align_ctrl_cmd_token1 = 115,
  aux_sym_asciiz_ctrl_cmd_token1 = 116,
  aux_sym_assert_ctrl_cmd_token1 = 117,
  sym_warning_keyword = 118,
  sym_error_keyword = 119,
  sym_ldwarning_keyword = 120,
  sym_lderror_keyword = 121,
  sym_ca65 = 122,
  sym_string = 123,
  sym_inst = 124,
  sym_impl_addr_inst = 125,
  sym_acc_addr_inst = 126,
  sym_imm_addr_inst = 127,
  sym_abs_addr_inst = 128,
  sym_zp_addr_inst = 129,
  sym_abs_x_addr_inst = 130,
  sym_abs_y_addr_inst = 131,
  sym_zp_x_addr_inst = 132,
  sym_zp_y_addr_inst = 133,
  sym_ind_addr_inst = 134,
  sym_ind_x_addr_inst = 135,
  sym_ind_y_addr_inst = 136,
  sym_rel_addr_inst = 137,
  sym_operand_8 = 138,
  sym_bin_8 = 139,
  sym_hex_8 = 140,
  sym_operand_16 = 141,
  sym_bin_16 = 142,
  sym_hex_16 = 143,
  sym_expression = 144,
  sym_unary_pos_exp = 145,
  sym_unary_neg_exp = 146,
  sym_unary_not_exp = 147,
  sym_unary_lobyte_exp = 148,
  sym_unary_hibyte_exp = 149,
  sym_unary_bankbyte_exp = 150,
  sym_mult_exp = 151,
  sym_div_exp = 152,
  sym_mod_exp = 153,
  sym_bit_and_exp = 154,
  sym_bit_xor_exp = 155,
  sym_shift_l_exp = 156,
  sym_shift_r_exp = 157,
  sym_add_exp = 158,
  sym_sub_exp = 159,
  sym_bit_or_exp = 160,
  sym_eq_cmp = 161,
  sym_neq_cmp = 162,
  sym_lt_cmp = 163,
  sym_gt_cmp = 164,
  sym_lte_cmp = 165,
  sym_gte_cmp = 166,
  sym_bool_and_exp = 167,
  sym_bool_xor_exp = 168,
  sym_bool_or_exp = 169,
  sym_bool_not_exp = 170,
  sym_ctrl_cmd = 171,
  sym_addr_ctrl_cmd = 172,
  sym_align_ctrl_cmd = 173,
  sym_asciiz_ctrl_cmd = 174,
  sym_assert_ctrl_cmd = 175,
  aux_sym_ca65_repeat1 = 176,
  aux_sym_addr_ctrl_cmd_repeat1 = 177,
  aux_sym_asciiz_ctrl_cmd_repeat1 = 178,
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
  [anon_sym_LT_LT] = "<<",
  [anon_sym_DOTSHR] = ".SHR",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_DOTBITOR] = ".BITOR",
  [anon_sym_PIPE] = "|",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_GT] = "<>",
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
  [aux_sym_assert_ctrl_cmd_token1] = "assert_ctrl_cmd_token1",
  [sym_warning_keyword] = "warning_keyword",
  [sym_error_keyword] = "error_keyword",
  [sym_ldwarning_keyword] = "ldwarning_keyword",
  [sym_lderror_keyword] = "lderror_keyword",
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
  [sym_expression] = "expression",
  [sym_unary_pos_exp] = "unary_pos_exp",
  [sym_unary_neg_exp] = "unary_neg_exp",
  [sym_unary_not_exp] = "unary_not_exp",
  [sym_unary_lobyte_exp] = "unary_lobyte_exp",
  [sym_unary_hibyte_exp] = "unary_hibyte_exp",
  [sym_unary_bankbyte_exp] = "unary_bankbyte_exp",
  [sym_mult_exp] = "mult_exp",
  [sym_div_exp] = "div_exp",
  [sym_mod_exp] = "mod_exp",
  [sym_bit_and_exp] = "bit_and_exp",
  [sym_bit_xor_exp] = "bit_xor_exp",
  [sym_shift_l_exp] = "shift_l_exp",
  [sym_shift_r_exp] = "shift_r_exp",
  [sym_add_exp] = "add_exp",
  [sym_sub_exp] = "sub_exp",
  [sym_bit_or_exp] = "bit_or_exp",
  [sym_eq_cmp] = "eq_cmp",
  [sym_neq_cmp] = "neq_cmp",
  [sym_lt_cmp] = "lt_cmp",
  [sym_gt_cmp] = "gt_cmp",
  [sym_lte_cmp] = "lte_cmp",
  [sym_gte_cmp] = "gte_cmp",
  [sym_bool_and_exp] = "bool_and_exp",
  [sym_bool_xor_exp] = "bool_xor_exp",
  [sym_bool_or_exp] = "bool_or_exp",
  [sym_bool_not_exp] = "bool_not_exp",
  [sym_ctrl_cmd] = "ctrl_cmd",
  [sym_addr_ctrl_cmd] = "addr_ctrl_cmd",
  [sym_align_ctrl_cmd] = "align_ctrl_cmd",
  [sym_asciiz_ctrl_cmd] = "asciiz_ctrl_cmd",
  [sym_assert_ctrl_cmd] = "assert_ctrl_cmd",
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
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_DOTSHR] = anon_sym_DOTSHR,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_DOTBITOR] = anon_sym_DOTBITOR,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
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
  [aux_sym_assert_ctrl_cmd_token1] = aux_sym_assert_ctrl_cmd_token1,
  [sym_warning_keyword] = sym_warning_keyword,
  [sym_error_keyword] = sym_error_keyword,
  [sym_ldwarning_keyword] = sym_ldwarning_keyword,
  [sym_lderror_keyword] = sym_lderror_keyword,
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
  [sym_expression] = sym_expression,
  [sym_unary_pos_exp] = sym_unary_pos_exp,
  [sym_unary_neg_exp] = sym_unary_neg_exp,
  [sym_unary_not_exp] = sym_unary_not_exp,
  [sym_unary_lobyte_exp] = sym_unary_lobyte_exp,
  [sym_unary_hibyte_exp] = sym_unary_hibyte_exp,
  [sym_unary_bankbyte_exp] = sym_unary_bankbyte_exp,
  [sym_mult_exp] = sym_mult_exp,
  [sym_div_exp] = sym_div_exp,
  [sym_mod_exp] = sym_mod_exp,
  [sym_bit_and_exp] = sym_bit_and_exp,
  [sym_bit_xor_exp] = sym_bit_xor_exp,
  [sym_shift_l_exp] = sym_shift_l_exp,
  [sym_shift_r_exp] = sym_shift_r_exp,
  [sym_add_exp] = sym_add_exp,
  [sym_sub_exp] = sym_sub_exp,
  [sym_bit_or_exp] = sym_bit_or_exp,
  [sym_eq_cmp] = sym_eq_cmp,
  [sym_neq_cmp] = sym_neq_cmp,
  [sym_lt_cmp] = sym_lt_cmp,
  [sym_gt_cmp] = sym_gt_cmp,
  [sym_lte_cmp] = sym_lte_cmp,
  [sym_gte_cmp] = sym_gte_cmp,
  [sym_bool_and_exp] = sym_bool_and_exp,
  [sym_bool_xor_exp] = sym_bool_xor_exp,
  [sym_bool_or_exp] = sym_bool_or_exp,
  [sym_bool_not_exp] = sym_bool_not_exp,
  [sym_ctrl_cmd] = sym_ctrl_cmd,
  [sym_addr_ctrl_cmd] = sym_addr_ctrl_cmd,
  [sym_align_ctrl_cmd] = sym_align_ctrl_cmd,
  [sym_asciiz_ctrl_cmd] = sym_asciiz_ctrl_cmd,
  [sym_assert_ctrl_cmd] = sym_assert_ctrl_cmd,
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
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTSHR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
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
  [anon_sym_LT_GT] = {
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
  [aux_sym_assert_ctrl_cmd_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_warning_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_error_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_ldwarning_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_lderror_keyword] = {
    .visible = true,
    .named = true,
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
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_pos_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_neg_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_not_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_lobyte_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_hibyte_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_bankbyte_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_mult_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_div_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_bit_and_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_bit_xor_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_shift_l_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_shift_r_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_add_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_bit_or_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_eq_cmp] = {
    .visible = true,
    .named = true,
  },
  [sym_neq_cmp] = {
    .visible = true,
    .named = true,
  },
  [sym_lt_cmp] = {
    .visible = true,
    .named = true,
  },
  [sym_gt_cmp] = {
    .visible = true,
    .named = true,
  },
  [sym_lte_cmp] = {
    .visible = true,
    .named = true,
  },
  [sym_gte_cmp] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_and_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_xor_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_or_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_not_exp] = {
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
  [sym_assert_ctrl_cmd] = {
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
  [19] = 9,
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
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(239);
      if (lookahead == '!') ADVANCE(474);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(439);
      if (lookahead == '$') ADVANCE(397);
      if (lookahead == '%') ADVANCE(363);
      if (lookahead == '&') ADVANCE(456);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(252);
      if (lookahead == ')') ADVANCE(253);
      if (lookahead == '*') ADVANCE(452);
      if (lookahead == '+') ADVANCE(440);
      if (lookahead == ',') ADVANCE(251);
      if (lookahead == '-') ADVANCE(441);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(453);
      if (lookahead == '0') ADVANCE(364);
      if (lookahead == '1') ADVANCE(372);
      if (lookahead == '2') ADVANCE(379);
      if (lookahead == '6') ADVANCE(384);
      if (lookahead == ';') ADVANCE(240);
      if (lookahead == '<') ADVANCE(446);
      if (lookahead == '=') ADVANCE(464);
      if (lookahead == '>') ADVANCE(449);
      if (lookahead == 'E') ADVANCE(180);
      if (lookahead == 'L') ADVANCE(160);
      if (lookahead == '^') ADVANCE(451);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'h') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead == 'w') ADVANCE(119);
      if (lookahead == '|') ADVANCE(463);
      if (lookahead == '~') ADVANCE(443);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(243);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(151);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(173);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(176);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(186);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(166);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(179);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(245);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(246);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(394);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(396);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(474);
      if (lookahead == '#') ADVANCE(439);
      if (lookahead == '$') ADVANCE(397);
      if (lookahead == '%') ADVANCE(363);
      if (lookahead == '(') ADVANCE(252);
      if (lookahead == '+') ADVANCE(440);
      if (lookahead == '-') ADVANCE(441);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '0') ADVANCE(378);
      if (lookahead == '1') ADVANCE(387);
      if (lookahead == '2') ADVANCE(382);
      if (lookahead == '6') ADVANCE(383);
      if (lookahead == ';') ADVANCE(240);
      if (lookahead == '<') ADVANCE(445);
      if (lookahead == '>') ADVANCE(448);
      if (lookahead == '^') ADVANCE(451);
      if (lookahead == 'h') ADVANCE(399);
      if (lookahead == '~') ADVANCE(443);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(389);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(391);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(241);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(397);
      if (lookahead == '%') ADVANCE(363);
      if (lookahead == '(') ADVANCE(252);
      if (lookahead == '0') ADVANCE(425);
      if (lookahead == '6') ADVANCE(428);
      if (lookahead == ';') ADVANCE(240);
      if (lookahead == 'h') ADVANCE(399);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(430);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(433);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(397);
      if (lookahead == '%') ADVANCE(363);
      if (lookahead == '0') ADVANCE(378);
      if (lookahead == '1') ADVANCE(387);
      if (lookahead == '2') ADVANCE(382);
      if (lookahead == '6') ADVANCE(383);
      if (lookahead == ';') ADVANCE(240);
      if (lookahead == 'h') ADVANCE(399);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(389);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(391);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(401);
      if (lookahead == ';') ADVANCE(240);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(19);
      if (lookahead == '1') ADVANCE(207);
      if (lookahead == ';') ADVANCE(240);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(408);
      if (lookahead == '1') ADVANCE(423);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == ';') ADVANCE(240);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(435);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(438);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(8);
      if (lookahead == '1') ADVANCE(234);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(402);
      if (lookahead == ';') ADVANCE(240);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(11);
      if (lookahead == '1') ADVANCE(233);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(14);
      if (lookahead == '1') ADVANCE(231);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == '1') ADVANCE(228);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == '1') ADVANCE(224);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(17);
      if (lookahead == '1') ADVANCE(219);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(18);
      if (lookahead == '1') ADVANCE(213);
      END_STATE();
    case 20:
      if (lookahead == '1') ADVANCE(22);
      if (lookahead == '8') ADVANCE(476);
      if (lookahead == 'N') ADVANCE(84);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(161);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(169);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      END_STATE();
    case 21:
      if (lookahead == '1') ADVANCE(22);
      if (lookahead == '8') ADVANCE(476);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(161);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(169);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      END_STATE();
    case 22:
      if (lookahead == '6') ADVANCE(475);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(310);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(312);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(322);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(326);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(346);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(348);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(67);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(71);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(28);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(68);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(47);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(45);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(52);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(258);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(274);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(278);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(280);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(282);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(292);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(294);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(300);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(302);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(340);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(342);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(33);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(43);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(23);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(25);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(334);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(59);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(330);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(60);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(288);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(352);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(20);
      if (lookahead == 'B') ADVANCE(75);
      if (lookahead == 'H') ADVANCE(91);
      if (lookahead == 'L') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(99);
      if (lookahead == 'N') ADVANCE(100);
      if (lookahead == 'O') ADVANCE(104);
      if (lookahead == 'S') ADVANCE(90);
      if (lookahead == 'X') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(20);
      if (lookahead == 'B') ADVANCE(92);
      if (lookahead == 'M') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(104);
      if (lookahead == 'S') ADVANCE(90);
      if (lookahead == 'X') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == 'I') ADVANCE(108);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == 'I') ADVANCE(114);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'N') ADVANCE(102);
      if (lookahead == 'O') ADVANCE(106);
      if (lookahead == 'X') ADVANCE(101);
      END_STATE();
    case 78:
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'O') ADVANCE(106);
      if (lookahead == 'X') ADVANCE(101);
      END_STATE();
    case 79:
      if (lookahead == 'B') ADVANCE(116);
      END_STATE();
    case 80:
      if (lookahead == 'B') ADVANCE(76);
      if (lookahead == 'H') ADVANCE(91);
      if (lookahead == 'L') ADVANCE(103);
      if (lookahead == 'N') ADVANCE(100);
      END_STATE();
    case 81:
      if (lookahead == 'B') ADVANCE(117);
      END_STATE();
    case 82:
      if (lookahead == 'B') ADVANCE(118);
      END_STATE();
    case 83:
      if (lookahead == 'D') ADVANCE(142);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(188);
      END_STATE();
    case 84:
      if (lookahead == 'D') ADVANCE(468);
      END_STATE();
    case 85:
      if (lookahead == 'D') ADVANCE(454);
      END_STATE();
    case 86:
      if (lookahead == 'D') ADVANCE(455);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(447);
      END_STATE();
    case 88:
      if (lookahead == 'E') ADVANCE(444);
      END_STATE();
    case 89:
      if (lookahead == 'E') ADVANCE(450);
      END_STATE();
    case 90:
      if (lookahead == 'H') ADVANCE(94);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(79);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(112);
      END_STATE();
    case 93:
      if (lookahead == 'K') ADVANCE(82);
      END_STATE();
    case 94:
      if (lookahead == 'L') ADVANCE(458);
      if (lookahead == 'R') ADVANCE(460);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(93);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(86);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(102);
      END_STATE();
    case 98:
      if (lookahead == 'O') ADVANCE(105);
      END_STATE();
    case 99:
      if (lookahead == 'O') ADVANCE(85);
      END_STATE();
    case 100:
      if (lookahead == 'O') ADVANCE(109);
      END_STATE();
    case 101:
      if (lookahead == 'O') ADVANCE(107);
      END_STATE();
    case 102:
      if (lookahead == 'O') ADVANCE(111);
      END_STATE();
    case 103:
      if (lookahead == 'O') ADVANCE(81);
      END_STATE();
    case 104:
      if (lookahead == 'R') ADVANCE(471);
      END_STATE();
    case 105:
      if (lookahead == 'R') ADVANCE(470);
      END_STATE();
    case 106:
      if (lookahead == 'R') ADVANCE(462);
      END_STATE();
    case 107:
      if (lookahead == 'R') ADVANCE(457);
      END_STATE();
    case 108:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 109:
      if (lookahead == 'T') ADVANCE(473);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(87);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(442);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(78);
      END_STATE();
    case 113:
      if (lookahead == 'T') ADVANCE(88);
      END_STATE();
    case 114:
      if (lookahead == 'T') ADVANCE(97);
      END_STATE();
    case 115:
      if (lookahead == 'T') ADVANCE(89);
      END_STATE();
    case 116:
      if (lookahead == 'Y') ADVANCE(110);
      END_STATE();
    case 117:
      if (lookahead == 'Y') ADVANCE(113);
      END_STATE();
    case 118:
      if (lookahead == 'Y') ADVANCE(115);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 'w') ADVANCE(120);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(309);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(311);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(313);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(481);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(483);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(406);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(482);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(309);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(311);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(313);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(321);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(323);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(325);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(327);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(345);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(347);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(349);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(357);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(196);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(192);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(197);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(147);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(148);
      END_STATE();
    case 150:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(157);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 151:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(152);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(193);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(167);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(174);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(153);
      END_STATE();
    case 152:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(257);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(259);
      END_STATE();
    case 153:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(273);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(275);
      END_STATE();
    case 154:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(277);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(279);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(281);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(283);
      END_STATE();
    case 155:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(291);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(293);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(295);
      END_STATE();
    case 156:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(299);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(301);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(303);
      END_STATE();
    case 157:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 158:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(339);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(341);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 159:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(171);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 160:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(142);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(188);
      END_STATE();
    case 161:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 165:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(177);
      END_STATE();
    case 166:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 167:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 168:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(333);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(335);
      END_STATE();
    case 169:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 170:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 171:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 172:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(271);
      END_STATE();
    case 173:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(154);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(182);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(195);
      END_STATE();
    case 174:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(269);
      END_STATE();
    case 175:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(329);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 176:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(183);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(189);
      END_STATE();
    case 177:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(478);
      END_STATE();
    case 178:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 179:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(168);
      END_STATE();
    case 180:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 181:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 182:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(285);
      END_STATE();
    case 183:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(305);
      END_STATE();
    case 184:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(317);
      END_STATE();
    case 185:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(261);
      END_STATE();
    case 186:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 187:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 188:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 189:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 190:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(477);
      END_STATE();
    case 191:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 192:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(359);
      END_STATE();
    case 193:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(263);
      END_STATE();
    case 194:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(480);
      END_STATE();
    case 195:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(287);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(289);
      END_STATE();
    case 196:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(351);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(353);
      END_STATE();
    case 197:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(355);
      END_STATE();
    case 198:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(479);
      END_STATE();
    case 199:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(416);
      END_STATE();
    case 200:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(199);
      END_STATE();
    case 201:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(200);
      END_STATE();
    case 202:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(201);
      END_STATE();
    case 203:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(202);
      END_STATE();
    case 204:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(203);
      END_STATE();
    case 205:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(204);
      END_STATE();
    case 206:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(409);
      END_STATE();
    case 207:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(205);
      END_STATE();
    case 208:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(206);
      END_STATE();
    case 209:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(208);
      END_STATE();
    case 210:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(209);
      END_STATE();
    case 211:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(210);
      END_STATE();
    case 212:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(211);
      END_STATE();
    case 213:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(212);
      END_STATE();
    case 214:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(417);
      END_STATE();
    case 215:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(214);
      END_STATE();
    case 216:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(215);
      END_STATE();
    case 217:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(216);
      END_STATE();
    case 218:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(217);
      END_STATE();
    case 219:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(218);
      END_STATE();
    case 220:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(418);
      END_STATE();
    case 221:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(220);
      END_STATE();
    case 222:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(221);
      END_STATE();
    case 223:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(222);
      END_STATE();
    case 224:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(223);
      END_STATE();
    case 225:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(419);
      END_STATE();
    case 226:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(225);
      END_STATE();
    case 227:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(226);
      END_STATE();
    case 228:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(227);
      END_STATE();
    case 229:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(420);
      END_STATE();
    case 230:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(229);
      END_STATE();
    case 231:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(230);
      END_STATE();
    case 232:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(421);
      END_STATE();
    case 233:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(232);
      END_STATE();
    case 234:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(422);
      END_STATE();
    case 235:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(437);
      END_STATE();
    case 236:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(436);
      END_STATE();
    case 237:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 238:
      if (eof) ADVANCE(239);
      if (lookahead == '&') ADVANCE(456);
      if (lookahead == ')') ADVANCE(253);
      if (lookahead == '*') ADVANCE(452);
      if (lookahead == '+') ADVANCE(440);
      if (lookahead == ',') ADVANCE(251);
      if (lookahead == '-') ADVANCE(441);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(453);
      if (lookahead == '0') ADVANCE(365);
      if (lookahead == '1') ADVANCE(377);
      if (lookahead == ';') ADVANCE(240);
      if (lookahead == '<') ADVANCE(446);
      if (lookahead == '=') ADVANCE(464);
      if (lookahead == '>') ADVANCE(449);
      if (lookahead == '^') ADVANCE(451);
      if (lookahead == '|') ADVANCE(463);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(41);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(32);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(50);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(55);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(54);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(63);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(46);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(31);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(238)
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_acc_register);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_acc_register);
      if (lookahead == 'h') ADVANCE(250);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(124);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_x_register);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_y_register);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(250);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(124);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(250);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_symbol);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_adc_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_and_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_asl_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_bcc_opcode);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_bcc_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_bcs_opcode);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_bcs_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_beq_opcode);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_beq_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_bit_opcode);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_bit_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_bmi_opcode);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_bmi_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_bne_opcode);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_bne_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_bpl_opcode);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_bpl_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_brk_opcode);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_brk_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_bvc_opcode);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_bvc_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_bvs_opcode);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_bvs_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_clc_opcode);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_clc_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_cld_opcode);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_cld_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_cli_opcode);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_cli_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_clv_opcode);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_clv_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_cmp_opcode);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_cmp_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_cpx_opcode);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_cpx_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_cpy_opcode);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_cpy_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_dec_opcode);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_dec_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_dex_opcode);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_dex_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_dey_opcode);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_dey_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_eor_opcode);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_eor_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_inc_opcode);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_inc_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_inx_opcode);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_inx_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_iny_opcode);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_iny_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_jmp_opcode);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_jmp_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_jsr_opcode);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_jsr_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_lda_opcode);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_lda_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ldx_opcode);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ldx_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ldy_opcode);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ldy_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_lsr_opcode);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_lsr_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_nop_opcode);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_nop_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ora_opcode);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ora_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_pha_opcode);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_pha_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_php_opcode);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_php_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_pla_opcode);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_pla_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_plp_opcode);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_plp_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_rol_opcode);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_rol_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ror_opcode);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ror_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_rti_opcode);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_rti_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_rts_opcode);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_rts_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_sbc_opcode);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_sbc_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_sec_opcode);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_sec_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_sed_opcode);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_sed_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_sei_opcode);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_sei_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_sta_opcode);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_sta_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_stx_opcode);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_stx_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_sty_opcode);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_sty_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_tax_opcode);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_tax_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_tay_opcode);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_tay_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_tsx_opcode);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_tsx_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_txa_opcode);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_txa_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_tcs_opcode);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_tcs_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_tya_opcode);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_tya_opcode);
      if (lookahead == ':') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0') ADVANCE(364);
      if (lookahead == '1') ADVANCE(372);
      if (lookahead == '2') ADVANCE(379);
      if (lookahead == '6') ADVANCE(384);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(394);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0') ADVANCE(365);
      if (lookahead == '1') ADVANCE(377);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(374);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(374);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(416);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(371);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(395);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(368);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(367);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(431);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(369);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(370);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(373);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(366);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(375);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(376);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '0') ADVANCE(378);
      if (lookahead == '1') ADVANCE(387);
      if (lookahead == '2') ADVANCE(382);
      if (lookahead == '6') ADVANCE(383);
      if (lookahead == 'h') ADVANCE(406);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(389);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(391);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(392);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(396);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(426);
      if (lookahead == 'h') ADVANCE(406);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(432);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(426);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(432);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(385);
      if (lookahead == 'h') ADVANCE(406);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(380);
      if (lookahead == 'h') ADVANCE(406);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(381);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(393);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(406);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(395);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_dec_8);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(395);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(393);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_h);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (lookahead == '0') ADVANCE(401);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (lookahead == '0') ADVANCE(402);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(437);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(400);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(403);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_hex_8_token2);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0') ADVANCE(408);
      if (lookahead == '1') ADVANCE(423);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(416);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(407);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(410);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(411);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(412);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(413);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(414);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(415);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(409);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(417);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(418);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(419);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(420);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(421);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(422);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_dec_16);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '0') ADVANCE(425);
      if (lookahead == '6') ADVANCE(428);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(430);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(433);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '3') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(431);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '5') ADVANCE(426);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(432);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '5') ADVANCE(427);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(430);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(424);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(430);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (lookahead == '0') ADVANCE(435);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(438);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(437);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(436);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_imm_prefix);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_DOTBITNOT);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_DOTLOBYTE);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(459);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == '>') ADVANCE(465);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_DOTHIBYTE);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(467);
      if (lookahead == '>') ADVANCE(461);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_DOTBANKBYTE);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_DOTMOD);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_DOTBITAND);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(469);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_DOTBITXOR);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_DOTSHL);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_DOTSHR);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_DOTBITOR);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(472);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_DOTAND);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_DOTXOR);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_DOTOR);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_DOTNOT);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_a16_ctrl_cmd);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_a8_ctrl_cmd);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_addr_ctrl_cmd_token1);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_align_ctrl_cmd_token1);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_asciiz_ctrl_cmd_token1);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_assert_ctrl_cmd_token1);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_warning_keyword);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_error_keyword);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_ldwarning_keyword);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_lderror_keyword);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 238},
  [2] = {.lex_state = 238},
  [3] = {.lex_state = 238},
  [4] = {.lex_state = 238},
  [5] = {.lex_state = 238},
  [6] = {.lex_state = 238},
  [7] = {.lex_state = 238},
  [8] = {.lex_state = 238},
  [9] = {.lex_state = 238},
  [10] = {.lex_state = 238},
  [11] = {.lex_state = 238},
  [12] = {.lex_state = 238},
  [13] = {.lex_state = 238},
  [14] = {.lex_state = 238},
  [15] = {.lex_state = 238},
  [16] = {.lex_state = 238},
  [17] = {.lex_state = 238},
  [18] = {.lex_state = 238},
  [19] = {.lex_state = 238},
  [20] = {.lex_state = 238},
  [21] = {.lex_state = 238},
  [22] = {.lex_state = 238},
  [23] = {.lex_state = 238},
  [24] = {.lex_state = 238},
  [25] = {.lex_state = 238},
  [26] = {.lex_state = 238},
  [27] = {.lex_state = 238},
  [28] = {.lex_state = 238},
  [29] = {.lex_state = 238},
  [30] = {.lex_state = 238},
  [31] = {.lex_state = 238},
  [32] = {.lex_state = 238},
  [33] = {.lex_state = 238},
  [34] = {.lex_state = 238},
  [35] = {.lex_state = 238},
  [36] = {.lex_state = 238},
  [37] = {.lex_state = 238},
  [38] = {.lex_state = 238},
  [39] = {.lex_state = 238},
  [40] = {.lex_state = 238},
  [41] = {.lex_state = 238},
  [42] = {.lex_state = 238},
  [43] = {.lex_state = 238},
  [44] = {.lex_state = 238},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 238},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 238},
  [145] = {.lex_state = 9},
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
    [sym_dec_8] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [aux_sym_bin_16_token1] = ACTIONS(1),
    [sym_dec_16] = ACTIONS(1),
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
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_DOTSHR] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_DOTBITOR] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
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
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(1),
    [sym_warning_keyword] = ACTIONS(1),
    [sym_error_keyword] = ACTIONS(1),
    [sym_ldwarning_keyword] = ACTIONS(1),
    [sym_lderror_keyword] = ACTIONS(1),
  },
  [1] = {
    [sym_ca65] = STATE(135),
    [sym_inst] = STATE(10),
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
    [sym_ctrl_cmd] = STATE(10),
    [sym_addr_ctrl_cmd] = STATE(34),
    [sym_align_ctrl_cmd] = STATE(34),
    [sym_asciiz_ctrl_cmd] = STATE(34),
    [sym_assert_ctrl_cmd] = STATE(34),
    [aux_sym_ca65_repeat1] = STATE(10),
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
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(45),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(47),
    [sym_adc_opcode] = ACTIONS(49),
    [sym_and_opcode] = ACTIONS(49),
    [sym_asl_opcode] = ACTIONS(49),
    [sym_bcc_opcode] = ACTIONS(49),
    [sym_bcs_opcode] = ACTIONS(49),
    [sym_beq_opcode] = ACTIONS(49),
    [sym_bit_opcode] = ACTIONS(49),
    [sym_bmi_opcode] = ACTIONS(49),
    [sym_bne_opcode] = ACTIONS(49),
    [sym_bpl_opcode] = ACTIONS(49),
    [sym_brk_opcode] = ACTIONS(49),
    [sym_bvc_opcode] = ACTIONS(49),
    [sym_bvs_opcode] = ACTIONS(49),
    [sym_clc_opcode] = ACTIONS(49),
    [sym_cld_opcode] = ACTIONS(49),
    [sym_cli_opcode] = ACTIONS(49),
    [sym_clv_opcode] = ACTIONS(49),
    [sym_cmp_opcode] = ACTIONS(49),
    [sym_cpx_opcode] = ACTIONS(49),
    [sym_cpy_opcode] = ACTIONS(49),
    [sym_dec_opcode] = ACTIONS(49),
    [sym_dex_opcode] = ACTIONS(49),
    [sym_dey_opcode] = ACTIONS(49),
    [sym_eor_opcode] = ACTIONS(49),
    [sym_inc_opcode] = ACTIONS(49),
    [sym_inx_opcode] = ACTIONS(49),
    [sym_iny_opcode] = ACTIONS(49),
    [sym_jmp_opcode] = ACTIONS(49),
    [sym_jsr_opcode] = ACTIONS(49),
    [sym_lda_opcode] = ACTIONS(49),
    [sym_ldx_opcode] = ACTIONS(49),
    [sym_ldy_opcode] = ACTIONS(49),
    [sym_lsr_opcode] = ACTIONS(49),
    [sym_nop_opcode] = ACTIONS(49),
    [sym_ora_opcode] = ACTIONS(49),
    [sym_pha_opcode] = ACTIONS(49),
    [sym_php_opcode] = ACTIONS(49),
    [sym_pla_opcode] = ACTIONS(49),
    [sym_plp_opcode] = ACTIONS(49),
    [sym_rol_opcode] = ACTIONS(49),
    [sym_ror_opcode] = ACTIONS(49),
    [sym_rti_opcode] = ACTIONS(49),
    [sym_rts_opcode] = ACTIONS(49),
    [sym_sbc_opcode] = ACTIONS(49),
    [sym_sec_opcode] = ACTIONS(49),
    [sym_sed_opcode] = ACTIONS(49),
    [sym_sei_opcode] = ACTIONS(49),
    [sym_sta_opcode] = ACTIONS(49),
    [sym_stx_opcode] = ACTIONS(49),
    [sym_sty_opcode] = ACTIONS(49),
    [sym_tax_opcode] = ACTIONS(49),
    [sym_tay_opcode] = ACTIONS(49),
    [sym_tsx_opcode] = ACTIONS(49),
    [sym_txa_opcode] = ACTIONS(49),
    [sym_tcs_opcode] = ACTIONS(49),
    [sym_tya_opcode] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_CARET] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DOTMOD] = ACTIONS(47),
    [anon_sym_DOTBITAND] = ACTIONS(47),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_DOTBITXOR] = ACTIONS(47),
    [anon_sym_DOTSHL] = ACTIONS(47),
    [anon_sym_LT_LT] = ACTIONS(47),
    [anon_sym_DOTSHR] = ACTIONS(47),
    [anon_sym_GT_GT] = ACTIONS(47),
    [anon_sym_DOTBITOR] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_LT_GT] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_DOTAND] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(47),
    [anon_sym_DOTXOR] = ACTIONS(47),
    [anon_sym_DOTOR] = ACTIONS(47),
    [anon_sym_PIPE_PIPE] = ACTIONS(47),
    [sym_a16_ctrl_cmd] = ACTIONS(47),
    [sym_a8_ctrl_cmd] = ACTIONS(47),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(47),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(47),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(47),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(47),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(51),
    [sym_adc_opcode] = ACTIONS(53),
    [sym_and_opcode] = ACTIONS(53),
    [sym_asl_opcode] = ACTIONS(53),
    [sym_bcc_opcode] = ACTIONS(53),
    [sym_bcs_opcode] = ACTIONS(53),
    [sym_beq_opcode] = ACTIONS(53),
    [sym_bit_opcode] = ACTIONS(53),
    [sym_bmi_opcode] = ACTIONS(53),
    [sym_bne_opcode] = ACTIONS(53),
    [sym_bpl_opcode] = ACTIONS(53),
    [sym_brk_opcode] = ACTIONS(53),
    [sym_bvc_opcode] = ACTIONS(53),
    [sym_bvs_opcode] = ACTIONS(53),
    [sym_clc_opcode] = ACTIONS(53),
    [sym_cld_opcode] = ACTIONS(53),
    [sym_cli_opcode] = ACTIONS(53),
    [sym_clv_opcode] = ACTIONS(53),
    [sym_cmp_opcode] = ACTIONS(53),
    [sym_cpx_opcode] = ACTIONS(53),
    [sym_cpy_opcode] = ACTIONS(53),
    [sym_dec_opcode] = ACTIONS(53),
    [sym_dex_opcode] = ACTIONS(53),
    [sym_dey_opcode] = ACTIONS(53),
    [sym_eor_opcode] = ACTIONS(53),
    [sym_inc_opcode] = ACTIONS(53),
    [sym_inx_opcode] = ACTIONS(53),
    [sym_iny_opcode] = ACTIONS(53),
    [sym_jmp_opcode] = ACTIONS(53),
    [sym_jsr_opcode] = ACTIONS(53),
    [sym_lda_opcode] = ACTIONS(53),
    [sym_ldx_opcode] = ACTIONS(53),
    [sym_ldy_opcode] = ACTIONS(53),
    [sym_lsr_opcode] = ACTIONS(53),
    [sym_nop_opcode] = ACTIONS(53),
    [sym_ora_opcode] = ACTIONS(53),
    [sym_pha_opcode] = ACTIONS(53),
    [sym_php_opcode] = ACTIONS(53),
    [sym_pla_opcode] = ACTIONS(53),
    [sym_plp_opcode] = ACTIONS(53),
    [sym_rol_opcode] = ACTIONS(53),
    [sym_ror_opcode] = ACTIONS(53),
    [sym_rti_opcode] = ACTIONS(53),
    [sym_rts_opcode] = ACTIONS(53),
    [sym_sbc_opcode] = ACTIONS(53),
    [sym_sec_opcode] = ACTIONS(53),
    [sym_sed_opcode] = ACTIONS(53),
    [sym_sei_opcode] = ACTIONS(53),
    [sym_sta_opcode] = ACTIONS(53),
    [sym_stx_opcode] = ACTIONS(53),
    [sym_sty_opcode] = ACTIONS(53),
    [sym_tax_opcode] = ACTIONS(53),
    [sym_tay_opcode] = ACTIONS(53),
    [sym_tsx_opcode] = ACTIONS(53),
    [sym_txa_opcode] = ACTIONS(53),
    [sym_tcs_opcode] = ACTIONS(53),
    [sym_tya_opcode] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_DOTMOD] = ACTIONS(51),
    [anon_sym_DOTBITAND] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_DOTBITXOR] = ACTIONS(51),
    [anon_sym_DOTSHL] = ACTIONS(51),
    [anon_sym_LT_LT] = ACTIONS(51),
    [anon_sym_DOTSHR] = ACTIONS(51),
    [anon_sym_GT_GT] = ACTIONS(51),
    [anon_sym_DOTBITOR] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_LT_GT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_DOTAND] = ACTIONS(51),
    [anon_sym_AMP_AMP] = ACTIONS(51),
    [anon_sym_DOTXOR] = ACTIONS(51),
    [anon_sym_DOTOR] = ACTIONS(51),
    [anon_sym_PIPE_PIPE] = ACTIONS(51),
    [sym_a16_ctrl_cmd] = ACTIONS(51),
    [sym_a8_ctrl_cmd] = ACTIONS(51),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(51),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(51),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(51),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(51),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(55),
    [sym_adc_opcode] = ACTIONS(57),
    [sym_and_opcode] = ACTIONS(57),
    [sym_asl_opcode] = ACTIONS(57),
    [sym_bcc_opcode] = ACTIONS(57),
    [sym_bcs_opcode] = ACTIONS(57),
    [sym_beq_opcode] = ACTIONS(57),
    [sym_bit_opcode] = ACTIONS(57),
    [sym_bmi_opcode] = ACTIONS(57),
    [sym_bne_opcode] = ACTIONS(57),
    [sym_bpl_opcode] = ACTIONS(57),
    [sym_brk_opcode] = ACTIONS(57),
    [sym_bvc_opcode] = ACTIONS(57),
    [sym_bvs_opcode] = ACTIONS(57),
    [sym_clc_opcode] = ACTIONS(57),
    [sym_cld_opcode] = ACTIONS(57),
    [sym_cli_opcode] = ACTIONS(57),
    [sym_clv_opcode] = ACTIONS(57),
    [sym_cmp_opcode] = ACTIONS(57),
    [sym_cpx_opcode] = ACTIONS(57),
    [sym_cpy_opcode] = ACTIONS(57),
    [sym_dec_opcode] = ACTIONS(57),
    [sym_dex_opcode] = ACTIONS(57),
    [sym_dey_opcode] = ACTIONS(57),
    [sym_eor_opcode] = ACTIONS(57),
    [sym_inc_opcode] = ACTIONS(57),
    [sym_inx_opcode] = ACTIONS(57),
    [sym_iny_opcode] = ACTIONS(57),
    [sym_jmp_opcode] = ACTIONS(57),
    [sym_jsr_opcode] = ACTIONS(57),
    [sym_lda_opcode] = ACTIONS(57),
    [sym_ldx_opcode] = ACTIONS(57),
    [sym_ldy_opcode] = ACTIONS(57),
    [sym_lsr_opcode] = ACTIONS(57),
    [sym_nop_opcode] = ACTIONS(57),
    [sym_ora_opcode] = ACTIONS(57),
    [sym_pha_opcode] = ACTIONS(57),
    [sym_php_opcode] = ACTIONS(57),
    [sym_pla_opcode] = ACTIONS(57),
    [sym_plp_opcode] = ACTIONS(57),
    [sym_rol_opcode] = ACTIONS(57),
    [sym_ror_opcode] = ACTIONS(57),
    [sym_rti_opcode] = ACTIONS(57),
    [sym_rts_opcode] = ACTIONS(57),
    [sym_sbc_opcode] = ACTIONS(57),
    [sym_sec_opcode] = ACTIONS(57),
    [sym_sed_opcode] = ACTIONS(57),
    [sym_sei_opcode] = ACTIONS(57),
    [sym_sta_opcode] = ACTIONS(57),
    [sym_stx_opcode] = ACTIONS(57),
    [sym_sty_opcode] = ACTIONS(57),
    [sym_tax_opcode] = ACTIONS(57),
    [sym_tay_opcode] = ACTIONS(57),
    [sym_tsx_opcode] = ACTIONS(57),
    [sym_txa_opcode] = ACTIONS(57),
    [sym_tcs_opcode] = ACTIONS(57),
    [sym_tya_opcode] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_CARET] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_DOTMOD] = ACTIONS(55),
    [anon_sym_DOTBITAND] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_DOTBITXOR] = ACTIONS(55),
    [anon_sym_DOTSHL] = ACTIONS(55),
    [anon_sym_LT_LT] = ACTIONS(55),
    [anon_sym_DOTSHR] = ACTIONS(55),
    [anon_sym_GT_GT] = ACTIONS(55),
    [anon_sym_DOTBITOR] = ACTIONS(55),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(55),
    [anon_sym_LT_GT] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(55),
    [anon_sym_DOTAND] = ACTIONS(55),
    [anon_sym_AMP_AMP] = ACTIONS(55),
    [anon_sym_DOTXOR] = ACTIONS(55),
    [anon_sym_DOTOR] = ACTIONS(55),
    [anon_sym_PIPE_PIPE] = ACTIONS(55),
    [sym_a16_ctrl_cmd] = ACTIONS(55),
    [sym_a8_ctrl_cmd] = ACTIONS(55),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(55),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(55),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(55),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(55),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(59),
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(59),
    [sym_adc_opcode] = ACTIONS(61),
    [sym_and_opcode] = ACTIONS(61),
    [sym_asl_opcode] = ACTIONS(61),
    [sym_bcc_opcode] = ACTIONS(61),
    [sym_bcs_opcode] = ACTIONS(61),
    [sym_beq_opcode] = ACTIONS(61),
    [sym_bit_opcode] = ACTIONS(61),
    [sym_bmi_opcode] = ACTIONS(61),
    [sym_bne_opcode] = ACTIONS(61),
    [sym_bpl_opcode] = ACTIONS(61),
    [sym_brk_opcode] = ACTIONS(61),
    [sym_bvc_opcode] = ACTIONS(61),
    [sym_bvs_opcode] = ACTIONS(61),
    [sym_clc_opcode] = ACTIONS(61),
    [sym_cld_opcode] = ACTIONS(61),
    [sym_cli_opcode] = ACTIONS(61),
    [sym_clv_opcode] = ACTIONS(61),
    [sym_cmp_opcode] = ACTIONS(61),
    [sym_cpx_opcode] = ACTIONS(61),
    [sym_cpy_opcode] = ACTIONS(61),
    [sym_dec_opcode] = ACTIONS(61),
    [sym_dex_opcode] = ACTIONS(61),
    [sym_dey_opcode] = ACTIONS(61),
    [sym_eor_opcode] = ACTIONS(61),
    [sym_inc_opcode] = ACTIONS(61),
    [sym_inx_opcode] = ACTIONS(61),
    [sym_iny_opcode] = ACTIONS(61),
    [sym_jmp_opcode] = ACTIONS(61),
    [sym_jsr_opcode] = ACTIONS(61),
    [sym_lda_opcode] = ACTIONS(61),
    [sym_ldx_opcode] = ACTIONS(61),
    [sym_ldy_opcode] = ACTIONS(61),
    [sym_lsr_opcode] = ACTIONS(61),
    [sym_nop_opcode] = ACTIONS(61),
    [sym_ora_opcode] = ACTIONS(61),
    [sym_pha_opcode] = ACTIONS(61),
    [sym_php_opcode] = ACTIONS(61),
    [sym_pla_opcode] = ACTIONS(61),
    [sym_plp_opcode] = ACTIONS(61),
    [sym_rol_opcode] = ACTIONS(61),
    [sym_ror_opcode] = ACTIONS(61),
    [sym_rti_opcode] = ACTIONS(61),
    [sym_rts_opcode] = ACTIONS(61),
    [sym_sbc_opcode] = ACTIONS(61),
    [sym_sec_opcode] = ACTIONS(61),
    [sym_sed_opcode] = ACTIONS(61),
    [sym_sei_opcode] = ACTIONS(61),
    [sym_sta_opcode] = ACTIONS(61),
    [sym_stx_opcode] = ACTIONS(61),
    [sym_sty_opcode] = ACTIONS(61),
    [sym_tax_opcode] = ACTIONS(61),
    [sym_tay_opcode] = ACTIONS(61),
    [sym_tsx_opcode] = ACTIONS(61),
    [sym_txa_opcode] = ACTIONS(61),
    [sym_tcs_opcode] = ACTIONS(61),
    [sym_tya_opcode] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_DOTMOD] = ACTIONS(59),
    [anon_sym_DOTBITAND] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(61),
    [anon_sym_DOTBITXOR] = ACTIONS(59),
    [anon_sym_DOTSHL] = ACTIONS(59),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_DOTSHR] = ACTIONS(59),
    [anon_sym_GT_GT] = ACTIONS(59),
    [anon_sym_DOTBITOR] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(61),
    [anon_sym_EQ] = ACTIONS(59),
    [anon_sym_LT_GT] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(59),
    [anon_sym_GT_EQ] = ACTIONS(59),
    [anon_sym_DOTAND] = ACTIONS(59),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_DOTXOR] = ACTIONS(59),
    [anon_sym_DOTOR] = ACTIONS(59),
    [anon_sym_PIPE_PIPE] = ACTIONS(59),
    [sym_a16_ctrl_cmd] = ACTIONS(59),
    [sym_a8_ctrl_cmd] = ACTIONS(59),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(59),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(59),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(59),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(59),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(63),
    [sym_adc_opcode] = ACTIONS(65),
    [sym_and_opcode] = ACTIONS(65),
    [sym_asl_opcode] = ACTIONS(65),
    [sym_bcc_opcode] = ACTIONS(65),
    [sym_bcs_opcode] = ACTIONS(65),
    [sym_beq_opcode] = ACTIONS(65),
    [sym_bit_opcode] = ACTIONS(65),
    [sym_bmi_opcode] = ACTIONS(65),
    [sym_bne_opcode] = ACTIONS(65),
    [sym_bpl_opcode] = ACTIONS(65),
    [sym_brk_opcode] = ACTIONS(65),
    [sym_bvc_opcode] = ACTIONS(65),
    [sym_bvs_opcode] = ACTIONS(65),
    [sym_clc_opcode] = ACTIONS(65),
    [sym_cld_opcode] = ACTIONS(65),
    [sym_cli_opcode] = ACTIONS(65),
    [sym_clv_opcode] = ACTIONS(65),
    [sym_cmp_opcode] = ACTIONS(65),
    [sym_cpx_opcode] = ACTIONS(65),
    [sym_cpy_opcode] = ACTIONS(65),
    [sym_dec_opcode] = ACTIONS(65),
    [sym_dex_opcode] = ACTIONS(65),
    [sym_dey_opcode] = ACTIONS(65),
    [sym_eor_opcode] = ACTIONS(65),
    [sym_inc_opcode] = ACTIONS(65),
    [sym_inx_opcode] = ACTIONS(65),
    [sym_iny_opcode] = ACTIONS(65),
    [sym_jmp_opcode] = ACTIONS(65),
    [sym_jsr_opcode] = ACTIONS(65),
    [sym_lda_opcode] = ACTIONS(65),
    [sym_ldx_opcode] = ACTIONS(65),
    [sym_ldy_opcode] = ACTIONS(65),
    [sym_lsr_opcode] = ACTIONS(65),
    [sym_nop_opcode] = ACTIONS(65),
    [sym_ora_opcode] = ACTIONS(65),
    [sym_pha_opcode] = ACTIONS(65),
    [sym_php_opcode] = ACTIONS(65),
    [sym_pla_opcode] = ACTIONS(65),
    [sym_plp_opcode] = ACTIONS(65),
    [sym_rol_opcode] = ACTIONS(65),
    [sym_ror_opcode] = ACTIONS(65),
    [sym_rti_opcode] = ACTIONS(65),
    [sym_rts_opcode] = ACTIONS(65),
    [sym_sbc_opcode] = ACTIONS(65),
    [sym_sec_opcode] = ACTIONS(65),
    [sym_sed_opcode] = ACTIONS(65),
    [sym_sei_opcode] = ACTIONS(65),
    [sym_sta_opcode] = ACTIONS(65),
    [sym_stx_opcode] = ACTIONS(65),
    [sym_sty_opcode] = ACTIONS(65),
    [sym_tax_opcode] = ACTIONS(65),
    [sym_tay_opcode] = ACTIONS(65),
    [sym_tsx_opcode] = ACTIONS(65),
    [sym_txa_opcode] = ACTIONS(65),
    [sym_tcs_opcode] = ACTIONS(65),
    [sym_tya_opcode] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_DOTMOD] = ACTIONS(63),
    [anon_sym_DOTBITAND] = ACTIONS(63),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_DOTBITXOR] = ACTIONS(63),
    [anon_sym_DOTSHL] = ACTIONS(63),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_DOTSHR] = ACTIONS(63),
    [anon_sym_GT_GT] = ACTIONS(63),
    [anon_sym_DOTBITOR] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_LT_GT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(63),
    [anon_sym_GT_EQ] = ACTIONS(63),
    [anon_sym_DOTAND] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(63),
    [anon_sym_DOTXOR] = ACTIONS(63),
    [anon_sym_DOTOR] = ACTIONS(63),
    [anon_sym_PIPE_PIPE] = ACTIONS(63),
    [sym_a16_ctrl_cmd] = ACTIONS(63),
    [sym_a8_ctrl_cmd] = ACTIONS(63),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(63),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(63),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(63),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(63),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(67),
    [sym_adc_opcode] = ACTIONS(69),
    [sym_and_opcode] = ACTIONS(69),
    [sym_asl_opcode] = ACTIONS(69),
    [sym_bcc_opcode] = ACTIONS(69),
    [sym_bcs_opcode] = ACTIONS(69),
    [sym_beq_opcode] = ACTIONS(69),
    [sym_bit_opcode] = ACTIONS(69),
    [sym_bmi_opcode] = ACTIONS(69),
    [sym_bne_opcode] = ACTIONS(69),
    [sym_bpl_opcode] = ACTIONS(69),
    [sym_brk_opcode] = ACTIONS(69),
    [sym_bvc_opcode] = ACTIONS(69),
    [sym_bvs_opcode] = ACTIONS(69),
    [sym_clc_opcode] = ACTIONS(69),
    [sym_cld_opcode] = ACTIONS(69),
    [sym_cli_opcode] = ACTIONS(69),
    [sym_clv_opcode] = ACTIONS(69),
    [sym_cmp_opcode] = ACTIONS(69),
    [sym_cpx_opcode] = ACTIONS(69),
    [sym_cpy_opcode] = ACTIONS(69),
    [sym_dec_opcode] = ACTIONS(69),
    [sym_dex_opcode] = ACTIONS(69),
    [sym_dey_opcode] = ACTIONS(69),
    [sym_eor_opcode] = ACTIONS(69),
    [sym_inc_opcode] = ACTIONS(69),
    [sym_inx_opcode] = ACTIONS(69),
    [sym_iny_opcode] = ACTIONS(69),
    [sym_jmp_opcode] = ACTIONS(69),
    [sym_jsr_opcode] = ACTIONS(69),
    [sym_lda_opcode] = ACTIONS(69),
    [sym_ldx_opcode] = ACTIONS(69),
    [sym_ldy_opcode] = ACTIONS(69),
    [sym_lsr_opcode] = ACTIONS(69),
    [sym_nop_opcode] = ACTIONS(69),
    [sym_ora_opcode] = ACTIONS(69),
    [sym_pha_opcode] = ACTIONS(69),
    [sym_php_opcode] = ACTIONS(69),
    [sym_pla_opcode] = ACTIONS(69),
    [sym_plp_opcode] = ACTIONS(69),
    [sym_rol_opcode] = ACTIONS(69),
    [sym_ror_opcode] = ACTIONS(69),
    [sym_rti_opcode] = ACTIONS(69),
    [sym_rts_opcode] = ACTIONS(69),
    [sym_sbc_opcode] = ACTIONS(69),
    [sym_sec_opcode] = ACTIONS(69),
    [sym_sed_opcode] = ACTIONS(69),
    [sym_sei_opcode] = ACTIONS(69),
    [sym_sta_opcode] = ACTIONS(69),
    [sym_stx_opcode] = ACTIONS(69),
    [sym_sty_opcode] = ACTIONS(69),
    [sym_tax_opcode] = ACTIONS(69),
    [sym_tay_opcode] = ACTIONS(69),
    [sym_tsx_opcode] = ACTIONS(69),
    [sym_txa_opcode] = ACTIONS(69),
    [sym_tcs_opcode] = ACTIONS(69),
    [sym_tya_opcode] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_CARET] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DOTMOD] = ACTIONS(67),
    [anon_sym_DOTBITAND] = ACTIONS(67),
    [anon_sym_AMP] = ACTIONS(69),
    [anon_sym_DOTBITXOR] = ACTIONS(67),
    [anon_sym_DOTSHL] = ACTIONS(67),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_DOTSHR] = ACTIONS(67),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_DOTBITOR] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_EQ] = ACTIONS(67),
    [anon_sym_LT_GT] = ACTIONS(67),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_GT_EQ] = ACTIONS(67),
    [anon_sym_DOTAND] = ACTIONS(67),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_DOTXOR] = ACTIONS(67),
    [anon_sym_DOTOR] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [sym_a16_ctrl_cmd] = ACTIONS(67),
    [sym_a8_ctrl_cmd] = ACTIONS(67),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(67),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(67),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(67),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(67),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(71),
    [sym_adc_opcode] = ACTIONS(73),
    [sym_and_opcode] = ACTIONS(73),
    [sym_asl_opcode] = ACTIONS(73),
    [sym_bcc_opcode] = ACTIONS(73),
    [sym_bcs_opcode] = ACTIONS(73),
    [sym_beq_opcode] = ACTIONS(73),
    [sym_bit_opcode] = ACTIONS(73),
    [sym_bmi_opcode] = ACTIONS(73),
    [sym_bne_opcode] = ACTIONS(73),
    [sym_bpl_opcode] = ACTIONS(73),
    [sym_brk_opcode] = ACTIONS(73),
    [sym_bvc_opcode] = ACTIONS(73),
    [sym_bvs_opcode] = ACTIONS(73),
    [sym_clc_opcode] = ACTIONS(73),
    [sym_cld_opcode] = ACTIONS(73),
    [sym_cli_opcode] = ACTIONS(73),
    [sym_clv_opcode] = ACTIONS(73),
    [sym_cmp_opcode] = ACTIONS(73),
    [sym_cpx_opcode] = ACTIONS(73),
    [sym_cpy_opcode] = ACTIONS(73),
    [sym_dec_opcode] = ACTIONS(73),
    [sym_dex_opcode] = ACTIONS(73),
    [sym_dey_opcode] = ACTIONS(73),
    [sym_eor_opcode] = ACTIONS(73),
    [sym_inc_opcode] = ACTIONS(73),
    [sym_inx_opcode] = ACTIONS(73),
    [sym_iny_opcode] = ACTIONS(73),
    [sym_jmp_opcode] = ACTIONS(73),
    [sym_jsr_opcode] = ACTIONS(73),
    [sym_lda_opcode] = ACTIONS(73),
    [sym_ldx_opcode] = ACTIONS(73),
    [sym_ldy_opcode] = ACTIONS(73),
    [sym_lsr_opcode] = ACTIONS(73),
    [sym_nop_opcode] = ACTIONS(73),
    [sym_ora_opcode] = ACTIONS(73),
    [sym_pha_opcode] = ACTIONS(73),
    [sym_php_opcode] = ACTIONS(73),
    [sym_pla_opcode] = ACTIONS(73),
    [sym_plp_opcode] = ACTIONS(73),
    [sym_rol_opcode] = ACTIONS(73),
    [sym_ror_opcode] = ACTIONS(73),
    [sym_rti_opcode] = ACTIONS(73),
    [sym_rts_opcode] = ACTIONS(73),
    [sym_sbc_opcode] = ACTIONS(73),
    [sym_sec_opcode] = ACTIONS(73),
    [sym_sed_opcode] = ACTIONS(73),
    [sym_sei_opcode] = ACTIONS(73),
    [sym_sta_opcode] = ACTIONS(73),
    [sym_stx_opcode] = ACTIONS(73),
    [sym_sty_opcode] = ACTIONS(73),
    [sym_tax_opcode] = ACTIONS(73),
    [sym_tay_opcode] = ACTIONS(73),
    [sym_tsx_opcode] = ACTIONS(73),
    [sym_txa_opcode] = ACTIONS(73),
    [sym_tcs_opcode] = ACTIONS(73),
    [sym_tya_opcode] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_DOTMOD] = ACTIONS(71),
    [anon_sym_DOTBITAND] = ACTIONS(71),
    [anon_sym_AMP] = ACTIONS(73),
    [anon_sym_DOTBITXOR] = ACTIONS(71),
    [anon_sym_DOTSHL] = ACTIONS(71),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_DOTSHR] = ACTIONS(71),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_DOTBITOR] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_LT_GT] = ACTIONS(71),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_DOTAND] = ACTIONS(71),
    [anon_sym_AMP_AMP] = ACTIONS(71),
    [anon_sym_DOTXOR] = ACTIONS(71),
    [anon_sym_DOTOR] = ACTIONS(71),
    [anon_sym_PIPE_PIPE] = ACTIONS(71),
    [sym_a16_ctrl_cmd] = ACTIONS(71),
    [sym_a8_ctrl_cmd] = ACTIONS(71),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(71),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(71),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(71),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(71),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
    [sym_adc_opcode] = ACTIONS(78),
    [sym_and_opcode] = ACTIONS(78),
    [sym_asl_opcode] = ACTIONS(78),
    [sym_bcc_opcode] = ACTIONS(78),
    [sym_bcs_opcode] = ACTIONS(78),
    [sym_beq_opcode] = ACTIONS(78),
    [sym_bit_opcode] = ACTIONS(78),
    [sym_bmi_opcode] = ACTIONS(78),
    [sym_bne_opcode] = ACTIONS(78),
    [sym_bpl_opcode] = ACTIONS(78),
    [sym_brk_opcode] = ACTIONS(78),
    [sym_bvc_opcode] = ACTIONS(78),
    [sym_bvs_opcode] = ACTIONS(78),
    [sym_clc_opcode] = ACTIONS(78),
    [sym_cld_opcode] = ACTIONS(78),
    [sym_cli_opcode] = ACTIONS(78),
    [sym_clv_opcode] = ACTIONS(78),
    [sym_cmp_opcode] = ACTIONS(78),
    [sym_cpx_opcode] = ACTIONS(78),
    [sym_cpy_opcode] = ACTIONS(78),
    [sym_dec_opcode] = ACTIONS(78),
    [sym_dex_opcode] = ACTIONS(78),
    [sym_dey_opcode] = ACTIONS(78),
    [sym_eor_opcode] = ACTIONS(78),
    [sym_inc_opcode] = ACTIONS(78),
    [sym_inx_opcode] = ACTIONS(78),
    [sym_iny_opcode] = ACTIONS(78),
    [sym_jmp_opcode] = ACTIONS(78),
    [sym_jsr_opcode] = ACTIONS(78),
    [sym_lda_opcode] = ACTIONS(78),
    [sym_ldx_opcode] = ACTIONS(78),
    [sym_ldy_opcode] = ACTIONS(78),
    [sym_lsr_opcode] = ACTIONS(78),
    [sym_nop_opcode] = ACTIONS(78),
    [sym_ora_opcode] = ACTIONS(78),
    [sym_pha_opcode] = ACTIONS(78),
    [sym_php_opcode] = ACTIONS(78),
    [sym_pla_opcode] = ACTIONS(78),
    [sym_plp_opcode] = ACTIONS(78),
    [sym_rol_opcode] = ACTIONS(78),
    [sym_ror_opcode] = ACTIONS(78),
    [sym_rti_opcode] = ACTIONS(78),
    [sym_rts_opcode] = ACTIONS(78),
    [sym_sbc_opcode] = ACTIONS(78),
    [sym_sec_opcode] = ACTIONS(78),
    [sym_sed_opcode] = ACTIONS(78),
    [sym_sei_opcode] = ACTIONS(78),
    [sym_sta_opcode] = ACTIONS(78),
    [sym_stx_opcode] = ACTIONS(78),
    [sym_sty_opcode] = ACTIONS(78),
    [sym_tax_opcode] = ACTIONS(78),
    [sym_tay_opcode] = ACTIONS(78),
    [sym_tsx_opcode] = ACTIONS(78),
    [sym_txa_opcode] = ACTIONS(78),
    [sym_tcs_opcode] = ACTIONS(78),
    [sym_tya_opcode] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_DOTMOD] = ACTIONS(75),
    [anon_sym_DOTBITAND] = ACTIONS(75),
    [anon_sym_AMP] = ACTIONS(78),
    [anon_sym_DOTBITXOR] = ACTIONS(75),
    [anon_sym_DOTSHL] = ACTIONS(75),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_DOTSHR] = ACTIONS(75),
    [anon_sym_GT_GT] = ACTIONS(75),
    [anon_sym_DOTBITOR] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_GT] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(75),
    [anon_sym_GT_EQ] = ACTIONS(75),
    [anon_sym_DOTAND] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(75),
    [anon_sym_DOTXOR] = ACTIONS(75),
    [anon_sym_DOTOR] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [sym_a16_ctrl_cmd] = ACTIONS(75),
    [sym_a8_ctrl_cmd] = ACTIONS(75),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(75),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(75),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(75),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(75),
  },
  [10] = {
    [sym_inst] = STATE(11),
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
    [sym_ctrl_cmd] = STATE(11),
    [sym_addr_ctrl_cmd] = STATE(34),
    [sym_align_ctrl_cmd] = STATE(34),
    [sym_asciiz_ctrl_cmd] = STATE(34),
    [sym_assert_ctrl_cmd] = STATE(34),
    [aux_sym_ca65_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(83),
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
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(45),
  },
  [11] = {
    [sym_inst] = STATE(11),
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
    [sym_ctrl_cmd] = STATE(11),
    [sym_addr_ctrl_cmd] = STATE(34),
    [sym_align_ctrl_cmd] = STATE(34),
    [sym_asciiz_ctrl_cmd] = STATE(34),
    [sym_assert_ctrl_cmd] = STATE(34),
    [aux_sym_ca65_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(87),
    [sym_adc_opcode] = ACTIONS(90),
    [sym_and_opcode] = ACTIONS(90),
    [sym_asl_opcode] = ACTIONS(93),
    [sym_bcc_opcode] = ACTIONS(96),
    [sym_bcs_opcode] = ACTIONS(96),
    [sym_beq_opcode] = ACTIONS(96),
    [sym_bit_opcode] = ACTIONS(99),
    [sym_bmi_opcode] = ACTIONS(96),
    [sym_bne_opcode] = ACTIONS(96),
    [sym_bpl_opcode] = ACTIONS(96),
    [sym_brk_opcode] = ACTIONS(102),
    [sym_bvc_opcode] = ACTIONS(96),
    [sym_bvs_opcode] = ACTIONS(96),
    [sym_clc_opcode] = ACTIONS(102),
    [sym_cld_opcode] = ACTIONS(102),
    [sym_cli_opcode] = ACTIONS(102),
    [sym_clv_opcode] = ACTIONS(102),
    [sym_cmp_opcode] = ACTIONS(90),
    [sym_cpx_opcode] = ACTIONS(105),
    [sym_cpy_opcode] = ACTIONS(105),
    [sym_dec_opcode] = ACTIONS(108),
    [sym_dex_opcode] = ACTIONS(102),
    [sym_dey_opcode] = ACTIONS(102),
    [sym_eor_opcode] = ACTIONS(90),
    [sym_inc_opcode] = ACTIONS(108),
    [sym_inx_opcode] = ACTIONS(102),
    [sym_iny_opcode] = ACTIONS(102),
    [sym_jmp_opcode] = ACTIONS(111),
    [sym_jsr_opcode] = ACTIONS(114),
    [sym_lda_opcode] = ACTIONS(90),
    [sym_ldx_opcode] = ACTIONS(117),
    [sym_ldy_opcode] = ACTIONS(120),
    [sym_lsr_opcode] = ACTIONS(120),
    [sym_nop_opcode] = ACTIONS(102),
    [sym_ora_opcode] = ACTIONS(90),
    [sym_pha_opcode] = ACTIONS(102),
    [sym_php_opcode] = ACTIONS(102),
    [sym_pla_opcode] = ACTIONS(102),
    [sym_plp_opcode] = ACTIONS(102),
    [sym_rol_opcode] = ACTIONS(93),
    [sym_ror_opcode] = ACTIONS(93),
    [sym_rti_opcode] = ACTIONS(102),
    [sym_rts_opcode] = ACTIONS(102),
    [sym_sbc_opcode] = ACTIONS(90),
    [sym_sec_opcode] = ACTIONS(102),
    [sym_sed_opcode] = ACTIONS(102),
    [sym_sei_opcode] = ACTIONS(102),
    [sym_sta_opcode] = ACTIONS(123),
    [sym_stx_opcode] = ACTIONS(126),
    [sym_sty_opcode] = ACTIONS(129),
    [sym_tax_opcode] = ACTIONS(102),
    [sym_tay_opcode] = ACTIONS(102),
    [sym_tsx_opcode] = ACTIONS(102),
    [sym_txa_opcode] = ACTIONS(102),
    [sym_tcs_opcode] = ACTIONS(102),
    [sym_tya_opcode] = ACTIONS(102),
    [sym_a16_ctrl_cmd] = ACTIONS(132),
    [sym_a8_ctrl_cmd] = ACTIONS(132),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(135),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(138),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(141),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(144),
  },
  [12] = {
    [aux_sym_asciiz_ctrl_cmd_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(147),
    [anon_sym_COMMA] = ACTIONS(149),
    [sym_adc_opcode] = ACTIONS(152),
    [sym_and_opcode] = ACTIONS(152),
    [sym_asl_opcode] = ACTIONS(152),
    [sym_bcc_opcode] = ACTIONS(152),
    [sym_bcs_opcode] = ACTIONS(152),
    [sym_beq_opcode] = ACTIONS(152),
    [sym_bit_opcode] = ACTIONS(152),
    [sym_bmi_opcode] = ACTIONS(152),
    [sym_bne_opcode] = ACTIONS(152),
    [sym_bpl_opcode] = ACTIONS(152),
    [sym_brk_opcode] = ACTIONS(152),
    [sym_bvc_opcode] = ACTIONS(152),
    [sym_bvs_opcode] = ACTIONS(152),
    [sym_clc_opcode] = ACTIONS(152),
    [sym_cld_opcode] = ACTIONS(152),
    [sym_cli_opcode] = ACTIONS(152),
    [sym_clv_opcode] = ACTIONS(152),
    [sym_cmp_opcode] = ACTIONS(152),
    [sym_cpx_opcode] = ACTIONS(152),
    [sym_cpy_opcode] = ACTIONS(152),
    [sym_dec_opcode] = ACTIONS(152),
    [sym_dex_opcode] = ACTIONS(152),
    [sym_dey_opcode] = ACTIONS(152),
    [sym_eor_opcode] = ACTIONS(152),
    [sym_inc_opcode] = ACTIONS(152),
    [sym_inx_opcode] = ACTIONS(152),
    [sym_iny_opcode] = ACTIONS(152),
    [sym_jmp_opcode] = ACTIONS(152),
    [sym_jsr_opcode] = ACTIONS(152),
    [sym_lda_opcode] = ACTIONS(152),
    [sym_ldx_opcode] = ACTIONS(152),
    [sym_ldy_opcode] = ACTIONS(152),
    [sym_lsr_opcode] = ACTIONS(152),
    [sym_nop_opcode] = ACTIONS(152),
    [sym_ora_opcode] = ACTIONS(152),
    [sym_pha_opcode] = ACTIONS(152),
    [sym_php_opcode] = ACTIONS(152),
    [sym_pla_opcode] = ACTIONS(152),
    [sym_plp_opcode] = ACTIONS(152),
    [sym_rol_opcode] = ACTIONS(152),
    [sym_ror_opcode] = ACTIONS(152),
    [sym_rti_opcode] = ACTIONS(152),
    [sym_rts_opcode] = ACTIONS(152),
    [sym_sbc_opcode] = ACTIONS(152),
    [sym_sec_opcode] = ACTIONS(152),
    [sym_sed_opcode] = ACTIONS(152),
    [sym_sei_opcode] = ACTIONS(152),
    [sym_sta_opcode] = ACTIONS(152),
    [sym_stx_opcode] = ACTIONS(152),
    [sym_sty_opcode] = ACTIONS(152),
    [sym_tax_opcode] = ACTIONS(152),
    [sym_tay_opcode] = ACTIONS(152),
    [sym_tsx_opcode] = ACTIONS(152),
    [sym_txa_opcode] = ACTIONS(152),
    [sym_tcs_opcode] = ACTIONS(152),
    [sym_tya_opcode] = ACTIONS(152),
    [sym_a16_ctrl_cmd] = ACTIONS(147),
    [sym_a8_ctrl_cmd] = ACTIONS(147),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(147),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(147),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(147),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(147),
  },
  [13] = {
    [aux_sym_addr_ctrl_cmd_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(154),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(156),
    [sym_adc_opcode] = ACTIONS(159),
    [sym_and_opcode] = ACTIONS(159),
    [sym_asl_opcode] = ACTIONS(159),
    [sym_bcc_opcode] = ACTIONS(159),
    [sym_bcs_opcode] = ACTIONS(159),
    [sym_beq_opcode] = ACTIONS(159),
    [sym_bit_opcode] = ACTIONS(159),
    [sym_bmi_opcode] = ACTIONS(159),
    [sym_bne_opcode] = ACTIONS(159),
    [sym_bpl_opcode] = ACTIONS(159),
    [sym_brk_opcode] = ACTIONS(159),
    [sym_bvc_opcode] = ACTIONS(159),
    [sym_bvs_opcode] = ACTIONS(159),
    [sym_clc_opcode] = ACTIONS(159),
    [sym_cld_opcode] = ACTIONS(159),
    [sym_cli_opcode] = ACTIONS(159),
    [sym_clv_opcode] = ACTIONS(159),
    [sym_cmp_opcode] = ACTIONS(159),
    [sym_cpx_opcode] = ACTIONS(159),
    [sym_cpy_opcode] = ACTIONS(159),
    [sym_dec_opcode] = ACTIONS(159),
    [sym_dex_opcode] = ACTIONS(159),
    [sym_dey_opcode] = ACTIONS(159),
    [sym_eor_opcode] = ACTIONS(159),
    [sym_inc_opcode] = ACTIONS(159),
    [sym_inx_opcode] = ACTIONS(159),
    [sym_iny_opcode] = ACTIONS(159),
    [sym_jmp_opcode] = ACTIONS(159),
    [sym_jsr_opcode] = ACTIONS(159),
    [sym_lda_opcode] = ACTIONS(159),
    [sym_ldx_opcode] = ACTIONS(159),
    [sym_ldy_opcode] = ACTIONS(159),
    [sym_lsr_opcode] = ACTIONS(159),
    [sym_nop_opcode] = ACTIONS(159),
    [sym_ora_opcode] = ACTIONS(159),
    [sym_pha_opcode] = ACTIONS(159),
    [sym_php_opcode] = ACTIONS(159),
    [sym_pla_opcode] = ACTIONS(159),
    [sym_plp_opcode] = ACTIONS(159),
    [sym_rol_opcode] = ACTIONS(159),
    [sym_ror_opcode] = ACTIONS(159),
    [sym_rti_opcode] = ACTIONS(159),
    [sym_rts_opcode] = ACTIONS(159),
    [sym_sbc_opcode] = ACTIONS(159),
    [sym_sec_opcode] = ACTIONS(159),
    [sym_sed_opcode] = ACTIONS(159),
    [sym_sei_opcode] = ACTIONS(159),
    [sym_sta_opcode] = ACTIONS(159),
    [sym_stx_opcode] = ACTIONS(159),
    [sym_sty_opcode] = ACTIONS(159),
    [sym_tax_opcode] = ACTIONS(159),
    [sym_tay_opcode] = ACTIONS(159),
    [sym_tsx_opcode] = ACTIONS(159),
    [sym_txa_opcode] = ACTIONS(159),
    [sym_tcs_opcode] = ACTIONS(159),
    [sym_tya_opcode] = ACTIONS(159),
    [sym_a16_ctrl_cmd] = ACTIONS(154),
    [sym_a8_ctrl_cmd] = ACTIONS(154),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(154),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(154),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(154),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(154),
  },
  [14] = {
    [aux_sym_asciiz_ctrl_cmd_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(163),
    [sym_adc_opcode] = ACTIONS(165),
    [sym_and_opcode] = ACTIONS(165),
    [sym_asl_opcode] = ACTIONS(165),
    [sym_bcc_opcode] = ACTIONS(165),
    [sym_bcs_opcode] = ACTIONS(165),
    [sym_beq_opcode] = ACTIONS(165),
    [sym_bit_opcode] = ACTIONS(165),
    [sym_bmi_opcode] = ACTIONS(165),
    [sym_bne_opcode] = ACTIONS(165),
    [sym_bpl_opcode] = ACTIONS(165),
    [sym_brk_opcode] = ACTIONS(165),
    [sym_bvc_opcode] = ACTIONS(165),
    [sym_bvs_opcode] = ACTIONS(165),
    [sym_clc_opcode] = ACTIONS(165),
    [sym_cld_opcode] = ACTIONS(165),
    [sym_cli_opcode] = ACTIONS(165),
    [sym_clv_opcode] = ACTIONS(165),
    [sym_cmp_opcode] = ACTIONS(165),
    [sym_cpx_opcode] = ACTIONS(165),
    [sym_cpy_opcode] = ACTIONS(165),
    [sym_dec_opcode] = ACTIONS(165),
    [sym_dex_opcode] = ACTIONS(165),
    [sym_dey_opcode] = ACTIONS(165),
    [sym_eor_opcode] = ACTIONS(165),
    [sym_inc_opcode] = ACTIONS(165),
    [sym_inx_opcode] = ACTIONS(165),
    [sym_iny_opcode] = ACTIONS(165),
    [sym_jmp_opcode] = ACTIONS(165),
    [sym_jsr_opcode] = ACTIONS(165),
    [sym_lda_opcode] = ACTIONS(165),
    [sym_ldx_opcode] = ACTIONS(165),
    [sym_ldy_opcode] = ACTIONS(165),
    [sym_lsr_opcode] = ACTIONS(165),
    [sym_nop_opcode] = ACTIONS(165),
    [sym_ora_opcode] = ACTIONS(165),
    [sym_pha_opcode] = ACTIONS(165),
    [sym_php_opcode] = ACTIONS(165),
    [sym_pla_opcode] = ACTIONS(165),
    [sym_plp_opcode] = ACTIONS(165),
    [sym_rol_opcode] = ACTIONS(165),
    [sym_ror_opcode] = ACTIONS(165),
    [sym_rti_opcode] = ACTIONS(165),
    [sym_rts_opcode] = ACTIONS(165),
    [sym_sbc_opcode] = ACTIONS(165),
    [sym_sec_opcode] = ACTIONS(165),
    [sym_sed_opcode] = ACTIONS(165),
    [sym_sei_opcode] = ACTIONS(165),
    [sym_sta_opcode] = ACTIONS(165),
    [sym_stx_opcode] = ACTIONS(165),
    [sym_sty_opcode] = ACTIONS(165),
    [sym_tax_opcode] = ACTIONS(165),
    [sym_tay_opcode] = ACTIONS(165),
    [sym_tsx_opcode] = ACTIONS(165),
    [sym_txa_opcode] = ACTIONS(165),
    [sym_tcs_opcode] = ACTIONS(165),
    [sym_tya_opcode] = ACTIONS(165),
    [sym_a16_ctrl_cmd] = ACTIONS(161),
    [sym_a8_ctrl_cmd] = ACTIONS(161),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(161),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(161),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(161),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(161),
  },
  [15] = {
    [aux_sym_addr_ctrl_cmd_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [sym_adc_opcode] = ACTIONS(171),
    [sym_and_opcode] = ACTIONS(171),
    [sym_asl_opcode] = ACTIONS(171),
    [sym_bcc_opcode] = ACTIONS(171),
    [sym_bcs_opcode] = ACTIONS(171),
    [sym_beq_opcode] = ACTIONS(171),
    [sym_bit_opcode] = ACTIONS(171),
    [sym_bmi_opcode] = ACTIONS(171),
    [sym_bne_opcode] = ACTIONS(171),
    [sym_bpl_opcode] = ACTIONS(171),
    [sym_brk_opcode] = ACTIONS(171),
    [sym_bvc_opcode] = ACTIONS(171),
    [sym_bvs_opcode] = ACTIONS(171),
    [sym_clc_opcode] = ACTIONS(171),
    [sym_cld_opcode] = ACTIONS(171),
    [sym_cli_opcode] = ACTIONS(171),
    [sym_clv_opcode] = ACTIONS(171),
    [sym_cmp_opcode] = ACTIONS(171),
    [sym_cpx_opcode] = ACTIONS(171),
    [sym_cpy_opcode] = ACTIONS(171),
    [sym_dec_opcode] = ACTIONS(171),
    [sym_dex_opcode] = ACTIONS(171),
    [sym_dey_opcode] = ACTIONS(171),
    [sym_eor_opcode] = ACTIONS(171),
    [sym_inc_opcode] = ACTIONS(171),
    [sym_inx_opcode] = ACTIONS(171),
    [sym_iny_opcode] = ACTIONS(171),
    [sym_jmp_opcode] = ACTIONS(171),
    [sym_jsr_opcode] = ACTIONS(171),
    [sym_lda_opcode] = ACTIONS(171),
    [sym_ldx_opcode] = ACTIONS(171),
    [sym_ldy_opcode] = ACTIONS(171),
    [sym_lsr_opcode] = ACTIONS(171),
    [sym_nop_opcode] = ACTIONS(171),
    [sym_ora_opcode] = ACTIONS(171),
    [sym_pha_opcode] = ACTIONS(171),
    [sym_php_opcode] = ACTIONS(171),
    [sym_pla_opcode] = ACTIONS(171),
    [sym_plp_opcode] = ACTIONS(171),
    [sym_rol_opcode] = ACTIONS(171),
    [sym_ror_opcode] = ACTIONS(171),
    [sym_rti_opcode] = ACTIONS(171),
    [sym_rts_opcode] = ACTIONS(171),
    [sym_sbc_opcode] = ACTIONS(171),
    [sym_sec_opcode] = ACTIONS(171),
    [sym_sed_opcode] = ACTIONS(171),
    [sym_sei_opcode] = ACTIONS(171),
    [sym_sta_opcode] = ACTIONS(171),
    [sym_stx_opcode] = ACTIONS(171),
    [sym_sty_opcode] = ACTIONS(171),
    [sym_tax_opcode] = ACTIONS(171),
    [sym_tay_opcode] = ACTIONS(171),
    [sym_tsx_opcode] = ACTIONS(171),
    [sym_txa_opcode] = ACTIONS(171),
    [sym_tcs_opcode] = ACTIONS(171),
    [sym_tya_opcode] = ACTIONS(171),
    [sym_a16_ctrl_cmd] = ACTIONS(167),
    [sym_a8_ctrl_cmd] = ACTIONS(167),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(167),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(167),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(167),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(167),
  },
  [16] = {
    [aux_sym_asciiz_ctrl_cmd_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(163),
    [sym_adc_opcode] = ACTIONS(175),
    [sym_and_opcode] = ACTIONS(175),
    [sym_asl_opcode] = ACTIONS(175),
    [sym_bcc_opcode] = ACTIONS(175),
    [sym_bcs_opcode] = ACTIONS(175),
    [sym_beq_opcode] = ACTIONS(175),
    [sym_bit_opcode] = ACTIONS(175),
    [sym_bmi_opcode] = ACTIONS(175),
    [sym_bne_opcode] = ACTIONS(175),
    [sym_bpl_opcode] = ACTIONS(175),
    [sym_brk_opcode] = ACTIONS(175),
    [sym_bvc_opcode] = ACTIONS(175),
    [sym_bvs_opcode] = ACTIONS(175),
    [sym_clc_opcode] = ACTIONS(175),
    [sym_cld_opcode] = ACTIONS(175),
    [sym_cli_opcode] = ACTIONS(175),
    [sym_clv_opcode] = ACTIONS(175),
    [sym_cmp_opcode] = ACTIONS(175),
    [sym_cpx_opcode] = ACTIONS(175),
    [sym_cpy_opcode] = ACTIONS(175),
    [sym_dec_opcode] = ACTIONS(175),
    [sym_dex_opcode] = ACTIONS(175),
    [sym_dey_opcode] = ACTIONS(175),
    [sym_eor_opcode] = ACTIONS(175),
    [sym_inc_opcode] = ACTIONS(175),
    [sym_inx_opcode] = ACTIONS(175),
    [sym_iny_opcode] = ACTIONS(175),
    [sym_jmp_opcode] = ACTIONS(175),
    [sym_jsr_opcode] = ACTIONS(175),
    [sym_lda_opcode] = ACTIONS(175),
    [sym_ldx_opcode] = ACTIONS(175),
    [sym_ldy_opcode] = ACTIONS(175),
    [sym_lsr_opcode] = ACTIONS(175),
    [sym_nop_opcode] = ACTIONS(175),
    [sym_ora_opcode] = ACTIONS(175),
    [sym_pha_opcode] = ACTIONS(175),
    [sym_php_opcode] = ACTIONS(175),
    [sym_pla_opcode] = ACTIONS(175),
    [sym_plp_opcode] = ACTIONS(175),
    [sym_rol_opcode] = ACTIONS(175),
    [sym_ror_opcode] = ACTIONS(175),
    [sym_rti_opcode] = ACTIONS(175),
    [sym_rts_opcode] = ACTIONS(175),
    [sym_sbc_opcode] = ACTIONS(175),
    [sym_sec_opcode] = ACTIONS(175),
    [sym_sed_opcode] = ACTIONS(175),
    [sym_sei_opcode] = ACTIONS(175),
    [sym_sta_opcode] = ACTIONS(175),
    [sym_stx_opcode] = ACTIONS(175),
    [sym_sty_opcode] = ACTIONS(175),
    [sym_tax_opcode] = ACTIONS(175),
    [sym_tay_opcode] = ACTIONS(175),
    [sym_tsx_opcode] = ACTIONS(175),
    [sym_txa_opcode] = ACTIONS(175),
    [sym_tcs_opcode] = ACTIONS(175),
    [sym_tya_opcode] = ACTIONS(175),
    [sym_a16_ctrl_cmd] = ACTIONS(173),
    [sym_a8_ctrl_cmd] = ACTIONS(173),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(173),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(173),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(173),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(173),
  },
  [17] = {
    [aux_sym_addr_ctrl_cmd_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(169),
    [sym_adc_opcode] = ACTIONS(179),
    [sym_and_opcode] = ACTIONS(179),
    [sym_asl_opcode] = ACTIONS(179),
    [sym_bcc_opcode] = ACTIONS(179),
    [sym_bcs_opcode] = ACTIONS(179),
    [sym_beq_opcode] = ACTIONS(179),
    [sym_bit_opcode] = ACTIONS(179),
    [sym_bmi_opcode] = ACTIONS(179),
    [sym_bne_opcode] = ACTIONS(179),
    [sym_bpl_opcode] = ACTIONS(179),
    [sym_brk_opcode] = ACTIONS(179),
    [sym_bvc_opcode] = ACTIONS(179),
    [sym_bvs_opcode] = ACTIONS(179),
    [sym_clc_opcode] = ACTIONS(179),
    [sym_cld_opcode] = ACTIONS(179),
    [sym_cli_opcode] = ACTIONS(179),
    [sym_clv_opcode] = ACTIONS(179),
    [sym_cmp_opcode] = ACTIONS(179),
    [sym_cpx_opcode] = ACTIONS(179),
    [sym_cpy_opcode] = ACTIONS(179),
    [sym_dec_opcode] = ACTIONS(179),
    [sym_dex_opcode] = ACTIONS(179),
    [sym_dey_opcode] = ACTIONS(179),
    [sym_eor_opcode] = ACTIONS(179),
    [sym_inc_opcode] = ACTIONS(179),
    [sym_inx_opcode] = ACTIONS(179),
    [sym_iny_opcode] = ACTIONS(179),
    [sym_jmp_opcode] = ACTIONS(179),
    [sym_jsr_opcode] = ACTIONS(179),
    [sym_lda_opcode] = ACTIONS(179),
    [sym_ldx_opcode] = ACTIONS(179),
    [sym_ldy_opcode] = ACTIONS(179),
    [sym_lsr_opcode] = ACTIONS(179),
    [sym_nop_opcode] = ACTIONS(179),
    [sym_ora_opcode] = ACTIONS(179),
    [sym_pha_opcode] = ACTIONS(179),
    [sym_php_opcode] = ACTIONS(179),
    [sym_pla_opcode] = ACTIONS(179),
    [sym_plp_opcode] = ACTIONS(179),
    [sym_rol_opcode] = ACTIONS(179),
    [sym_ror_opcode] = ACTIONS(179),
    [sym_rti_opcode] = ACTIONS(179),
    [sym_rts_opcode] = ACTIONS(179),
    [sym_sbc_opcode] = ACTIONS(179),
    [sym_sec_opcode] = ACTIONS(179),
    [sym_sed_opcode] = ACTIONS(179),
    [sym_sei_opcode] = ACTIONS(179),
    [sym_sta_opcode] = ACTIONS(179),
    [sym_stx_opcode] = ACTIONS(179),
    [sym_sty_opcode] = ACTIONS(179),
    [sym_tax_opcode] = ACTIONS(179),
    [sym_tay_opcode] = ACTIONS(179),
    [sym_tsx_opcode] = ACTIONS(179),
    [sym_txa_opcode] = ACTIONS(179),
    [sym_tcs_opcode] = ACTIONS(179),
    [sym_tya_opcode] = ACTIONS(179),
    [sym_a16_ctrl_cmd] = ACTIONS(177),
    [sym_a8_ctrl_cmd] = ACTIONS(177),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(177),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(177),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(177),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(177),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(183),
    [sym_adc_opcode] = ACTIONS(185),
    [sym_and_opcode] = ACTIONS(185),
    [sym_asl_opcode] = ACTIONS(185),
    [sym_bcc_opcode] = ACTIONS(185),
    [sym_bcs_opcode] = ACTIONS(185),
    [sym_beq_opcode] = ACTIONS(185),
    [sym_bit_opcode] = ACTIONS(185),
    [sym_bmi_opcode] = ACTIONS(185),
    [sym_bne_opcode] = ACTIONS(185),
    [sym_bpl_opcode] = ACTIONS(185),
    [sym_brk_opcode] = ACTIONS(185),
    [sym_bvc_opcode] = ACTIONS(185),
    [sym_bvs_opcode] = ACTIONS(185),
    [sym_clc_opcode] = ACTIONS(185),
    [sym_cld_opcode] = ACTIONS(185),
    [sym_cli_opcode] = ACTIONS(185),
    [sym_clv_opcode] = ACTIONS(185),
    [sym_cmp_opcode] = ACTIONS(185),
    [sym_cpx_opcode] = ACTIONS(185),
    [sym_cpy_opcode] = ACTIONS(185),
    [sym_dec_opcode] = ACTIONS(185),
    [sym_dex_opcode] = ACTIONS(185),
    [sym_dey_opcode] = ACTIONS(185),
    [sym_eor_opcode] = ACTIONS(185),
    [sym_inc_opcode] = ACTIONS(185),
    [sym_inx_opcode] = ACTIONS(185),
    [sym_iny_opcode] = ACTIONS(185),
    [sym_jmp_opcode] = ACTIONS(185),
    [sym_jsr_opcode] = ACTIONS(185),
    [sym_lda_opcode] = ACTIONS(185),
    [sym_ldx_opcode] = ACTIONS(185),
    [sym_ldy_opcode] = ACTIONS(185),
    [sym_lsr_opcode] = ACTIONS(185),
    [sym_nop_opcode] = ACTIONS(185),
    [sym_ora_opcode] = ACTIONS(185),
    [sym_pha_opcode] = ACTIONS(185),
    [sym_php_opcode] = ACTIONS(185),
    [sym_pla_opcode] = ACTIONS(185),
    [sym_plp_opcode] = ACTIONS(185),
    [sym_rol_opcode] = ACTIONS(185),
    [sym_ror_opcode] = ACTIONS(185),
    [sym_rti_opcode] = ACTIONS(185),
    [sym_rts_opcode] = ACTIONS(185),
    [sym_sbc_opcode] = ACTIONS(185),
    [sym_sec_opcode] = ACTIONS(185),
    [sym_sed_opcode] = ACTIONS(185),
    [sym_sei_opcode] = ACTIONS(185),
    [sym_sta_opcode] = ACTIONS(185),
    [sym_stx_opcode] = ACTIONS(185),
    [sym_sty_opcode] = ACTIONS(185),
    [sym_tax_opcode] = ACTIONS(185),
    [sym_tay_opcode] = ACTIONS(185),
    [sym_tsx_opcode] = ACTIONS(185),
    [sym_txa_opcode] = ACTIONS(185),
    [sym_tcs_opcode] = ACTIONS(185),
    [sym_tya_opcode] = ACTIONS(185),
    [sym_a16_ctrl_cmd] = ACTIONS(181),
    [sym_a8_ctrl_cmd] = ACTIONS(181),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(181),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(181),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(181),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(181),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(47),
    [sym_adc_opcode] = ACTIONS(78),
    [sym_and_opcode] = ACTIONS(78),
    [sym_asl_opcode] = ACTIONS(78),
    [sym_bcc_opcode] = ACTIONS(78),
    [sym_bcs_opcode] = ACTIONS(78),
    [sym_beq_opcode] = ACTIONS(78),
    [sym_bit_opcode] = ACTIONS(78),
    [sym_bmi_opcode] = ACTIONS(78),
    [sym_bne_opcode] = ACTIONS(78),
    [sym_bpl_opcode] = ACTIONS(78),
    [sym_brk_opcode] = ACTIONS(78),
    [sym_bvc_opcode] = ACTIONS(78),
    [sym_bvs_opcode] = ACTIONS(78),
    [sym_clc_opcode] = ACTIONS(78),
    [sym_cld_opcode] = ACTIONS(78),
    [sym_cli_opcode] = ACTIONS(78),
    [sym_clv_opcode] = ACTIONS(78),
    [sym_cmp_opcode] = ACTIONS(78),
    [sym_cpx_opcode] = ACTIONS(78),
    [sym_cpy_opcode] = ACTIONS(78),
    [sym_dec_opcode] = ACTIONS(78),
    [sym_dex_opcode] = ACTIONS(78),
    [sym_dey_opcode] = ACTIONS(78),
    [sym_eor_opcode] = ACTIONS(78),
    [sym_inc_opcode] = ACTIONS(78),
    [sym_inx_opcode] = ACTIONS(78),
    [sym_iny_opcode] = ACTIONS(78),
    [sym_jmp_opcode] = ACTIONS(78),
    [sym_jsr_opcode] = ACTIONS(78),
    [sym_lda_opcode] = ACTIONS(78),
    [sym_ldx_opcode] = ACTIONS(78),
    [sym_ldy_opcode] = ACTIONS(78),
    [sym_lsr_opcode] = ACTIONS(78),
    [sym_nop_opcode] = ACTIONS(78),
    [sym_ora_opcode] = ACTIONS(78),
    [sym_pha_opcode] = ACTIONS(78),
    [sym_php_opcode] = ACTIONS(78),
    [sym_pla_opcode] = ACTIONS(78),
    [sym_plp_opcode] = ACTIONS(78),
    [sym_rol_opcode] = ACTIONS(78),
    [sym_ror_opcode] = ACTIONS(78),
    [sym_rti_opcode] = ACTIONS(78),
    [sym_rts_opcode] = ACTIONS(78),
    [sym_sbc_opcode] = ACTIONS(78),
    [sym_sec_opcode] = ACTIONS(78),
    [sym_sed_opcode] = ACTIONS(78),
    [sym_sei_opcode] = ACTIONS(78),
    [sym_sta_opcode] = ACTIONS(78),
    [sym_stx_opcode] = ACTIONS(78),
    [sym_sty_opcode] = ACTIONS(78),
    [sym_tax_opcode] = ACTIONS(78),
    [sym_tay_opcode] = ACTIONS(78),
    [sym_tsx_opcode] = ACTIONS(78),
    [sym_txa_opcode] = ACTIONS(78),
    [sym_tcs_opcode] = ACTIONS(78),
    [sym_tya_opcode] = ACTIONS(78),
    [sym_a16_ctrl_cmd] = ACTIONS(75),
    [sym_a8_ctrl_cmd] = ACTIONS(75),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(75),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(75),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(75),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(75),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(147),
    [anon_sym_COMMA] = ACTIONS(147),
    [sym_adc_opcode] = ACTIONS(152),
    [sym_and_opcode] = ACTIONS(152),
    [sym_asl_opcode] = ACTIONS(152),
    [sym_bcc_opcode] = ACTIONS(152),
    [sym_bcs_opcode] = ACTIONS(152),
    [sym_beq_opcode] = ACTIONS(152),
    [sym_bit_opcode] = ACTIONS(152),
    [sym_bmi_opcode] = ACTIONS(152),
    [sym_bne_opcode] = ACTIONS(152),
    [sym_bpl_opcode] = ACTIONS(152),
    [sym_brk_opcode] = ACTIONS(152),
    [sym_bvc_opcode] = ACTIONS(152),
    [sym_bvs_opcode] = ACTIONS(152),
    [sym_clc_opcode] = ACTIONS(152),
    [sym_cld_opcode] = ACTIONS(152),
    [sym_cli_opcode] = ACTIONS(152),
    [sym_clv_opcode] = ACTIONS(152),
    [sym_cmp_opcode] = ACTIONS(152),
    [sym_cpx_opcode] = ACTIONS(152),
    [sym_cpy_opcode] = ACTIONS(152),
    [sym_dec_opcode] = ACTIONS(152),
    [sym_dex_opcode] = ACTIONS(152),
    [sym_dey_opcode] = ACTIONS(152),
    [sym_eor_opcode] = ACTIONS(152),
    [sym_inc_opcode] = ACTIONS(152),
    [sym_inx_opcode] = ACTIONS(152),
    [sym_iny_opcode] = ACTIONS(152),
    [sym_jmp_opcode] = ACTIONS(152),
    [sym_jsr_opcode] = ACTIONS(152),
    [sym_lda_opcode] = ACTIONS(152),
    [sym_ldx_opcode] = ACTIONS(152),
    [sym_ldy_opcode] = ACTIONS(152),
    [sym_lsr_opcode] = ACTIONS(152),
    [sym_nop_opcode] = ACTIONS(152),
    [sym_ora_opcode] = ACTIONS(152),
    [sym_pha_opcode] = ACTIONS(152),
    [sym_php_opcode] = ACTIONS(152),
    [sym_pla_opcode] = ACTIONS(152),
    [sym_plp_opcode] = ACTIONS(152),
    [sym_rol_opcode] = ACTIONS(152),
    [sym_ror_opcode] = ACTIONS(152),
    [sym_rti_opcode] = ACTIONS(152),
    [sym_rts_opcode] = ACTIONS(152),
    [sym_sbc_opcode] = ACTIONS(152),
    [sym_sec_opcode] = ACTIONS(152),
    [sym_sed_opcode] = ACTIONS(152),
    [sym_sei_opcode] = ACTIONS(152),
    [sym_sta_opcode] = ACTIONS(152),
    [sym_stx_opcode] = ACTIONS(152),
    [sym_sty_opcode] = ACTIONS(152),
    [sym_tax_opcode] = ACTIONS(152),
    [sym_tay_opcode] = ACTIONS(152),
    [sym_tsx_opcode] = ACTIONS(152),
    [sym_txa_opcode] = ACTIONS(152),
    [sym_tcs_opcode] = ACTIONS(152),
    [sym_tya_opcode] = ACTIONS(152),
    [sym_a16_ctrl_cmd] = ACTIONS(147),
    [sym_a8_ctrl_cmd] = ACTIONS(147),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(147),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(147),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(147),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(147),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(187),
    [sym_adc_opcode] = ACTIONS(185),
    [sym_and_opcode] = ACTIONS(185),
    [sym_asl_opcode] = ACTIONS(185),
    [sym_bcc_opcode] = ACTIONS(185),
    [sym_bcs_opcode] = ACTIONS(185),
    [sym_beq_opcode] = ACTIONS(185),
    [sym_bit_opcode] = ACTIONS(185),
    [sym_bmi_opcode] = ACTIONS(185),
    [sym_bne_opcode] = ACTIONS(185),
    [sym_bpl_opcode] = ACTIONS(185),
    [sym_brk_opcode] = ACTIONS(185),
    [sym_bvc_opcode] = ACTIONS(185),
    [sym_bvs_opcode] = ACTIONS(185),
    [sym_clc_opcode] = ACTIONS(185),
    [sym_cld_opcode] = ACTIONS(185),
    [sym_cli_opcode] = ACTIONS(185),
    [sym_clv_opcode] = ACTIONS(185),
    [sym_cmp_opcode] = ACTIONS(185),
    [sym_cpx_opcode] = ACTIONS(185),
    [sym_cpy_opcode] = ACTIONS(185),
    [sym_dec_opcode] = ACTIONS(185),
    [sym_dex_opcode] = ACTIONS(185),
    [sym_dey_opcode] = ACTIONS(185),
    [sym_eor_opcode] = ACTIONS(185),
    [sym_inc_opcode] = ACTIONS(185),
    [sym_inx_opcode] = ACTIONS(185),
    [sym_iny_opcode] = ACTIONS(185),
    [sym_jmp_opcode] = ACTIONS(185),
    [sym_jsr_opcode] = ACTIONS(185),
    [sym_lda_opcode] = ACTIONS(185),
    [sym_ldx_opcode] = ACTIONS(185),
    [sym_ldy_opcode] = ACTIONS(185),
    [sym_lsr_opcode] = ACTIONS(185),
    [sym_nop_opcode] = ACTIONS(185),
    [sym_ora_opcode] = ACTIONS(185),
    [sym_pha_opcode] = ACTIONS(185),
    [sym_php_opcode] = ACTIONS(185),
    [sym_pla_opcode] = ACTIONS(185),
    [sym_plp_opcode] = ACTIONS(185),
    [sym_rol_opcode] = ACTIONS(185),
    [sym_ror_opcode] = ACTIONS(185),
    [sym_rti_opcode] = ACTIONS(185),
    [sym_rts_opcode] = ACTIONS(185),
    [sym_sbc_opcode] = ACTIONS(185),
    [sym_sec_opcode] = ACTIONS(185),
    [sym_sed_opcode] = ACTIONS(185),
    [sym_sei_opcode] = ACTIONS(185),
    [sym_sta_opcode] = ACTIONS(185),
    [sym_stx_opcode] = ACTIONS(185),
    [sym_sty_opcode] = ACTIONS(185),
    [sym_tax_opcode] = ACTIONS(185),
    [sym_tay_opcode] = ACTIONS(185),
    [sym_tsx_opcode] = ACTIONS(185),
    [sym_txa_opcode] = ACTIONS(185),
    [sym_tcs_opcode] = ACTIONS(185),
    [sym_tya_opcode] = ACTIONS(185),
    [sym_a16_ctrl_cmd] = ACTIONS(181),
    [sym_a8_ctrl_cmd] = ACTIONS(181),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(181),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(181),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(181),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(181),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(154),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(154),
    [sym_adc_opcode] = ACTIONS(159),
    [sym_and_opcode] = ACTIONS(159),
    [sym_asl_opcode] = ACTIONS(159),
    [sym_bcc_opcode] = ACTIONS(159),
    [sym_bcs_opcode] = ACTIONS(159),
    [sym_beq_opcode] = ACTIONS(159),
    [sym_bit_opcode] = ACTIONS(159),
    [sym_bmi_opcode] = ACTIONS(159),
    [sym_bne_opcode] = ACTIONS(159),
    [sym_bpl_opcode] = ACTIONS(159),
    [sym_brk_opcode] = ACTIONS(159),
    [sym_bvc_opcode] = ACTIONS(159),
    [sym_bvs_opcode] = ACTIONS(159),
    [sym_clc_opcode] = ACTIONS(159),
    [sym_cld_opcode] = ACTIONS(159),
    [sym_cli_opcode] = ACTIONS(159),
    [sym_clv_opcode] = ACTIONS(159),
    [sym_cmp_opcode] = ACTIONS(159),
    [sym_cpx_opcode] = ACTIONS(159),
    [sym_cpy_opcode] = ACTIONS(159),
    [sym_dec_opcode] = ACTIONS(159),
    [sym_dex_opcode] = ACTIONS(159),
    [sym_dey_opcode] = ACTIONS(159),
    [sym_eor_opcode] = ACTIONS(159),
    [sym_inc_opcode] = ACTIONS(159),
    [sym_inx_opcode] = ACTIONS(159),
    [sym_iny_opcode] = ACTIONS(159),
    [sym_jmp_opcode] = ACTIONS(159),
    [sym_jsr_opcode] = ACTIONS(159),
    [sym_lda_opcode] = ACTIONS(159),
    [sym_ldx_opcode] = ACTIONS(159),
    [sym_ldy_opcode] = ACTIONS(159),
    [sym_lsr_opcode] = ACTIONS(159),
    [sym_nop_opcode] = ACTIONS(159),
    [sym_ora_opcode] = ACTIONS(159),
    [sym_pha_opcode] = ACTIONS(159),
    [sym_php_opcode] = ACTIONS(159),
    [sym_pla_opcode] = ACTIONS(159),
    [sym_plp_opcode] = ACTIONS(159),
    [sym_rol_opcode] = ACTIONS(159),
    [sym_ror_opcode] = ACTIONS(159),
    [sym_rti_opcode] = ACTIONS(159),
    [sym_rts_opcode] = ACTIONS(159),
    [sym_sbc_opcode] = ACTIONS(159),
    [sym_sec_opcode] = ACTIONS(159),
    [sym_sed_opcode] = ACTIONS(159),
    [sym_sei_opcode] = ACTIONS(159),
    [sym_sta_opcode] = ACTIONS(159),
    [sym_stx_opcode] = ACTIONS(159),
    [sym_sty_opcode] = ACTIONS(159),
    [sym_tax_opcode] = ACTIONS(159),
    [sym_tay_opcode] = ACTIONS(159),
    [sym_tsx_opcode] = ACTIONS(159),
    [sym_txa_opcode] = ACTIONS(159),
    [sym_tcs_opcode] = ACTIONS(159),
    [sym_tya_opcode] = ACTIONS(159),
    [sym_a16_ctrl_cmd] = ACTIONS(154),
    [sym_a8_ctrl_cmd] = ACTIONS(154),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(154),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(154),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(154),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(154),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [sym_adc_opcode] = ACTIONS(193),
    [sym_and_opcode] = ACTIONS(193),
    [sym_asl_opcode] = ACTIONS(193),
    [sym_bcc_opcode] = ACTIONS(193),
    [sym_bcs_opcode] = ACTIONS(193),
    [sym_beq_opcode] = ACTIONS(193),
    [sym_bit_opcode] = ACTIONS(193),
    [sym_bmi_opcode] = ACTIONS(193),
    [sym_bne_opcode] = ACTIONS(193),
    [sym_bpl_opcode] = ACTIONS(193),
    [sym_brk_opcode] = ACTIONS(193),
    [sym_bvc_opcode] = ACTIONS(193),
    [sym_bvs_opcode] = ACTIONS(193),
    [sym_clc_opcode] = ACTIONS(193),
    [sym_cld_opcode] = ACTIONS(193),
    [sym_cli_opcode] = ACTIONS(193),
    [sym_clv_opcode] = ACTIONS(193),
    [sym_cmp_opcode] = ACTIONS(193),
    [sym_cpx_opcode] = ACTIONS(193),
    [sym_cpy_opcode] = ACTIONS(193),
    [sym_dec_opcode] = ACTIONS(193),
    [sym_dex_opcode] = ACTIONS(193),
    [sym_dey_opcode] = ACTIONS(193),
    [sym_eor_opcode] = ACTIONS(193),
    [sym_inc_opcode] = ACTIONS(193),
    [sym_inx_opcode] = ACTIONS(193),
    [sym_iny_opcode] = ACTIONS(193),
    [sym_jmp_opcode] = ACTIONS(193),
    [sym_jsr_opcode] = ACTIONS(193),
    [sym_lda_opcode] = ACTIONS(193),
    [sym_ldx_opcode] = ACTIONS(193),
    [sym_ldy_opcode] = ACTIONS(193),
    [sym_lsr_opcode] = ACTIONS(193),
    [sym_nop_opcode] = ACTIONS(193),
    [sym_ora_opcode] = ACTIONS(193),
    [sym_pha_opcode] = ACTIONS(193),
    [sym_php_opcode] = ACTIONS(193),
    [sym_pla_opcode] = ACTIONS(193),
    [sym_plp_opcode] = ACTIONS(193),
    [sym_rol_opcode] = ACTIONS(193),
    [sym_ror_opcode] = ACTIONS(193),
    [sym_rti_opcode] = ACTIONS(193),
    [sym_rts_opcode] = ACTIONS(193),
    [sym_sbc_opcode] = ACTIONS(193),
    [sym_sec_opcode] = ACTIONS(193),
    [sym_sed_opcode] = ACTIONS(193),
    [sym_sei_opcode] = ACTIONS(193),
    [sym_sta_opcode] = ACTIONS(193),
    [sym_stx_opcode] = ACTIONS(193),
    [sym_sty_opcode] = ACTIONS(193),
    [sym_tax_opcode] = ACTIONS(193),
    [sym_tay_opcode] = ACTIONS(193),
    [sym_tsx_opcode] = ACTIONS(193),
    [sym_txa_opcode] = ACTIONS(193),
    [sym_tcs_opcode] = ACTIONS(193),
    [sym_tya_opcode] = ACTIONS(193),
    [sym_a16_ctrl_cmd] = ACTIONS(189),
    [sym_a8_ctrl_cmd] = ACTIONS(189),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(189),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(189),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(189),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(189),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(195),
    [sym_adc_opcode] = ACTIONS(197),
    [sym_and_opcode] = ACTIONS(197),
    [sym_asl_opcode] = ACTIONS(197),
    [sym_bcc_opcode] = ACTIONS(197),
    [sym_bcs_opcode] = ACTIONS(197),
    [sym_beq_opcode] = ACTIONS(197),
    [sym_bit_opcode] = ACTIONS(197),
    [sym_bmi_opcode] = ACTIONS(197),
    [sym_bne_opcode] = ACTIONS(197),
    [sym_bpl_opcode] = ACTIONS(197),
    [sym_brk_opcode] = ACTIONS(197),
    [sym_bvc_opcode] = ACTIONS(197),
    [sym_bvs_opcode] = ACTIONS(197),
    [sym_clc_opcode] = ACTIONS(197),
    [sym_cld_opcode] = ACTIONS(197),
    [sym_cli_opcode] = ACTIONS(197),
    [sym_clv_opcode] = ACTIONS(197),
    [sym_cmp_opcode] = ACTIONS(197),
    [sym_cpx_opcode] = ACTIONS(197),
    [sym_cpy_opcode] = ACTIONS(197),
    [sym_dec_opcode] = ACTIONS(197),
    [sym_dex_opcode] = ACTIONS(197),
    [sym_dey_opcode] = ACTIONS(197),
    [sym_eor_opcode] = ACTIONS(197),
    [sym_inc_opcode] = ACTIONS(197),
    [sym_inx_opcode] = ACTIONS(197),
    [sym_iny_opcode] = ACTIONS(197),
    [sym_jmp_opcode] = ACTIONS(197),
    [sym_jsr_opcode] = ACTIONS(197),
    [sym_lda_opcode] = ACTIONS(197),
    [sym_ldx_opcode] = ACTIONS(197),
    [sym_ldy_opcode] = ACTIONS(197),
    [sym_lsr_opcode] = ACTIONS(197),
    [sym_nop_opcode] = ACTIONS(197),
    [sym_ora_opcode] = ACTIONS(197),
    [sym_pha_opcode] = ACTIONS(197),
    [sym_php_opcode] = ACTIONS(197),
    [sym_pla_opcode] = ACTIONS(197),
    [sym_plp_opcode] = ACTIONS(197),
    [sym_rol_opcode] = ACTIONS(197),
    [sym_ror_opcode] = ACTIONS(197),
    [sym_rti_opcode] = ACTIONS(197),
    [sym_rts_opcode] = ACTIONS(197),
    [sym_sbc_opcode] = ACTIONS(197),
    [sym_sec_opcode] = ACTIONS(197),
    [sym_sed_opcode] = ACTIONS(197),
    [sym_sei_opcode] = ACTIONS(197),
    [sym_sta_opcode] = ACTIONS(197),
    [sym_stx_opcode] = ACTIONS(197),
    [sym_sty_opcode] = ACTIONS(197),
    [sym_tax_opcode] = ACTIONS(197),
    [sym_tay_opcode] = ACTIONS(197),
    [sym_tsx_opcode] = ACTIONS(197),
    [sym_txa_opcode] = ACTIONS(197),
    [sym_tcs_opcode] = ACTIONS(197),
    [sym_tya_opcode] = ACTIONS(197),
    [sym_a16_ctrl_cmd] = ACTIONS(195),
    [sym_a8_ctrl_cmd] = ACTIONS(195),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(195),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(195),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(195),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(195),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(199),
    [anon_sym_COMMA] = ACTIONS(201),
    [sym_adc_opcode] = ACTIONS(203),
    [sym_and_opcode] = ACTIONS(203),
    [sym_asl_opcode] = ACTIONS(203),
    [sym_bcc_opcode] = ACTIONS(203),
    [sym_bcs_opcode] = ACTIONS(203),
    [sym_beq_opcode] = ACTIONS(203),
    [sym_bit_opcode] = ACTIONS(203),
    [sym_bmi_opcode] = ACTIONS(203),
    [sym_bne_opcode] = ACTIONS(203),
    [sym_bpl_opcode] = ACTIONS(203),
    [sym_brk_opcode] = ACTIONS(203),
    [sym_bvc_opcode] = ACTIONS(203),
    [sym_bvs_opcode] = ACTIONS(203),
    [sym_clc_opcode] = ACTIONS(203),
    [sym_cld_opcode] = ACTIONS(203),
    [sym_cli_opcode] = ACTIONS(203),
    [sym_clv_opcode] = ACTIONS(203),
    [sym_cmp_opcode] = ACTIONS(203),
    [sym_cpx_opcode] = ACTIONS(203),
    [sym_cpy_opcode] = ACTIONS(203),
    [sym_dec_opcode] = ACTIONS(203),
    [sym_dex_opcode] = ACTIONS(203),
    [sym_dey_opcode] = ACTIONS(203),
    [sym_eor_opcode] = ACTIONS(203),
    [sym_inc_opcode] = ACTIONS(203),
    [sym_inx_opcode] = ACTIONS(203),
    [sym_iny_opcode] = ACTIONS(203),
    [sym_jmp_opcode] = ACTIONS(203),
    [sym_jsr_opcode] = ACTIONS(203),
    [sym_lda_opcode] = ACTIONS(203),
    [sym_ldx_opcode] = ACTIONS(203),
    [sym_ldy_opcode] = ACTIONS(203),
    [sym_lsr_opcode] = ACTIONS(203),
    [sym_nop_opcode] = ACTIONS(203),
    [sym_ora_opcode] = ACTIONS(203),
    [sym_pha_opcode] = ACTIONS(203),
    [sym_php_opcode] = ACTIONS(203),
    [sym_pla_opcode] = ACTIONS(203),
    [sym_plp_opcode] = ACTIONS(203),
    [sym_rol_opcode] = ACTIONS(203),
    [sym_ror_opcode] = ACTIONS(203),
    [sym_rti_opcode] = ACTIONS(203),
    [sym_rts_opcode] = ACTIONS(203),
    [sym_sbc_opcode] = ACTIONS(203),
    [sym_sec_opcode] = ACTIONS(203),
    [sym_sed_opcode] = ACTIONS(203),
    [sym_sei_opcode] = ACTIONS(203),
    [sym_sta_opcode] = ACTIONS(203),
    [sym_stx_opcode] = ACTIONS(203),
    [sym_sty_opcode] = ACTIONS(203),
    [sym_tax_opcode] = ACTIONS(203),
    [sym_tay_opcode] = ACTIONS(203),
    [sym_tsx_opcode] = ACTIONS(203),
    [sym_txa_opcode] = ACTIONS(203),
    [sym_tcs_opcode] = ACTIONS(203),
    [sym_tya_opcode] = ACTIONS(203),
    [sym_a16_ctrl_cmd] = ACTIONS(199),
    [sym_a8_ctrl_cmd] = ACTIONS(199),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(199),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(199),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(199),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(199),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(205),
    [sym_adc_opcode] = ACTIONS(185),
    [sym_and_opcode] = ACTIONS(185),
    [sym_asl_opcode] = ACTIONS(185),
    [sym_bcc_opcode] = ACTIONS(185),
    [sym_bcs_opcode] = ACTIONS(185),
    [sym_beq_opcode] = ACTIONS(185),
    [sym_bit_opcode] = ACTIONS(185),
    [sym_bmi_opcode] = ACTIONS(185),
    [sym_bne_opcode] = ACTIONS(185),
    [sym_bpl_opcode] = ACTIONS(185),
    [sym_brk_opcode] = ACTIONS(185),
    [sym_bvc_opcode] = ACTIONS(185),
    [sym_bvs_opcode] = ACTIONS(185),
    [sym_clc_opcode] = ACTIONS(185),
    [sym_cld_opcode] = ACTIONS(185),
    [sym_cli_opcode] = ACTIONS(185),
    [sym_clv_opcode] = ACTIONS(185),
    [sym_cmp_opcode] = ACTIONS(185),
    [sym_cpx_opcode] = ACTIONS(185),
    [sym_cpy_opcode] = ACTIONS(185),
    [sym_dec_opcode] = ACTIONS(185),
    [sym_dex_opcode] = ACTIONS(185),
    [sym_dey_opcode] = ACTIONS(185),
    [sym_eor_opcode] = ACTIONS(185),
    [sym_inc_opcode] = ACTIONS(185),
    [sym_inx_opcode] = ACTIONS(185),
    [sym_iny_opcode] = ACTIONS(185),
    [sym_jmp_opcode] = ACTIONS(185),
    [sym_jsr_opcode] = ACTIONS(185),
    [sym_lda_opcode] = ACTIONS(185),
    [sym_ldx_opcode] = ACTIONS(185),
    [sym_ldy_opcode] = ACTIONS(185),
    [sym_lsr_opcode] = ACTIONS(185),
    [sym_nop_opcode] = ACTIONS(185),
    [sym_ora_opcode] = ACTIONS(185),
    [sym_pha_opcode] = ACTIONS(185),
    [sym_php_opcode] = ACTIONS(185),
    [sym_pla_opcode] = ACTIONS(185),
    [sym_plp_opcode] = ACTIONS(185),
    [sym_rol_opcode] = ACTIONS(185),
    [sym_ror_opcode] = ACTIONS(185),
    [sym_rti_opcode] = ACTIONS(185),
    [sym_rts_opcode] = ACTIONS(185),
    [sym_sbc_opcode] = ACTIONS(185),
    [sym_sec_opcode] = ACTIONS(185),
    [sym_sed_opcode] = ACTIONS(185),
    [sym_sei_opcode] = ACTIONS(185),
    [sym_sta_opcode] = ACTIONS(185),
    [sym_stx_opcode] = ACTIONS(185),
    [sym_sty_opcode] = ACTIONS(185),
    [sym_tax_opcode] = ACTIONS(185),
    [sym_tay_opcode] = ACTIONS(185),
    [sym_tsx_opcode] = ACTIONS(185),
    [sym_txa_opcode] = ACTIONS(185),
    [sym_tcs_opcode] = ACTIONS(185),
    [sym_tya_opcode] = ACTIONS(185),
    [sym_a16_ctrl_cmd] = ACTIONS(181),
    [sym_a8_ctrl_cmd] = ACTIONS(181),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(181),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(181),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(181),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(181),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(207),
    [sym_adc_opcode] = ACTIONS(193),
    [sym_and_opcode] = ACTIONS(193),
    [sym_asl_opcode] = ACTIONS(193),
    [sym_bcc_opcode] = ACTIONS(193),
    [sym_bcs_opcode] = ACTIONS(193),
    [sym_beq_opcode] = ACTIONS(193),
    [sym_bit_opcode] = ACTIONS(193),
    [sym_bmi_opcode] = ACTIONS(193),
    [sym_bne_opcode] = ACTIONS(193),
    [sym_bpl_opcode] = ACTIONS(193),
    [sym_brk_opcode] = ACTIONS(193),
    [sym_bvc_opcode] = ACTIONS(193),
    [sym_bvs_opcode] = ACTIONS(193),
    [sym_clc_opcode] = ACTIONS(193),
    [sym_cld_opcode] = ACTIONS(193),
    [sym_cli_opcode] = ACTIONS(193),
    [sym_clv_opcode] = ACTIONS(193),
    [sym_cmp_opcode] = ACTIONS(193),
    [sym_cpx_opcode] = ACTIONS(193),
    [sym_cpy_opcode] = ACTIONS(193),
    [sym_dec_opcode] = ACTIONS(193),
    [sym_dex_opcode] = ACTIONS(193),
    [sym_dey_opcode] = ACTIONS(193),
    [sym_eor_opcode] = ACTIONS(193),
    [sym_inc_opcode] = ACTIONS(193),
    [sym_inx_opcode] = ACTIONS(193),
    [sym_iny_opcode] = ACTIONS(193),
    [sym_jmp_opcode] = ACTIONS(193),
    [sym_jsr_opcode] = ACTIONS(193),
    [sym_lda_opcode] = ACTIONS(193),
    [sym_ldx_opcode] = ACTIONS(193),
    [sym_ldy_opcode] = ACTIONS(193),
    [sym_lsr_opcode] = ACTIONS(193),
    [sym_nop_opcode] = ACTIONS(193),
    [sym_ora_opcode] = ACTIONS(193),
    [sym_pha_opcode] = ACTIONS(193),
    [sym_php_opcode] = ACTIONS(193),
    [sym_pla_opcode] = ACTIONS(193),
    [sym_plp_opcode] = ACTIONS(193),
    [sym_rol_opcode] = ACTIONS(193),
    [sym_ror_opcode] = ACTIONS(193),
    [sym_rti_opcode] = ACTIONS(193),
    [sym_rts_opcode] = ACTIONS(193),
    [sym_sbc_opcode] = ACTIONS(193),
    [sym_sec_opcode] = ACTIONS(193),
    [sym_sed_opcode] = ACTIONS(193),
    [sym_sei_opcode] = ACTIONS(193),
    [sym_sta_opcode] = ACTIONS(193),
    [sym_stx_opcode] = ACTIONS(193),
    [sym_sty_opcode] = ACTIONS(193),
    [sym_tax_opcode] = ACTIONS(193),
    [sym_tay_opcode] = ACTIONS(193),
    [sym_tsx_opcode] = ACTIONS(193),
    [sym_txa_opcode] = ACTIONS(193),
    [sym_tcs_opcode] = ACTIONS(193),
    [sym_tya_opcode] = ACTIONS(193),
    [sym_a16_ctrl_cmd] = ACTIONS(189),
    [sym_a8_ctrl_cmd] = ACTIONS(189),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(189),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(189),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(189),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(189),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(209),
    [sym_adc_opcode] = ACTIONS(211),
    [sym_and_opcode] = ACTIONS(211),
    [sym_asl_opcode] = ACTIONS(211),
    [sym_bcc_opcode] = ACTIONS(211),
    [sym_bcs_opcode] = ACTIONS(211),
    [sym_beq_opcode] = ACTIONS(211),
    [sym_bit_opcode] = ACTIONS(211),
    [sym_bmi_opcode] = ACTIONS(211),
    [sym_bne_opcode] = ACTIONS(211),
    [sym_bpl_opcode] = ACTIONS(211),
    [sym_brk_opcode] = ACTIONS(211),
    [sym_bvc_opcode] = ACTIONS(211),
    [sym_bvs_opcode] = ACTIONS(211),
    [sym_clc_opcode] = ACTIONS(211),
    [sym_cld_opcode] = ACTIONS(211),
    [sym_cli_opcode] = ACTIONS(211),
    [sym_clv_opcode] = ACTIONS(211),
    [sym_cmp_opcode] = ACTIONS(211),
    [sym_cpx_opcode] = ACTIONS(211),
    [sym_cpy_opcode] = ACTIONS(211),
    [sym_dec_opcode] = ACTIONS(211),
    [sym_dex_opcode] = ACTIONS(211),
    [sym_dey_opcode] = ACTIONS(211),
    [sym_eor_opcode] = ACTIONS(211),
    [sym_inc_opcode] = ACTIONS(211),
    [sym_inx_opcode] = ACTIONS(211),
    [sym_iny_opcode] = ACTIONS(211),
    [sym_jmp_opcode] = ACTIONS(211),
    [sym_jsr_opcode] = ACTIONS(211),
    [sym_lda_opcode] = ACTIONS(211),
    [sym_ldx_opcode] = ACTIONS(211),
    [sym_ldy_opcode] = ACTIONS(211),
    [sym_lsr_opcode] = ACTIONS(211),
    [sym_nop_opcode] = ACTIONS(211),
    [sym_ora_opcode] = ACTIONS(211),
    [sym_pha_opcode] = ACTIONS(211),
    [sym_php_opcode] = ACTIONS(211),
    [sym_pla_opcode] = ACTIONS(211),
    [sym_plp_opcode] = ACTIONS(211),
    [sym_rol_opcode] = ACTIONS(211),
    [sym_ror_opcode] = ACTIONS(211),
    [sym_rti_opcode] = ACTIONS(211),
    [sym_rts_opcode] = ACTIONS(211),
    [sym_sbc_opcode] = ACTIONS(211),
    [sym_sec_opcode] = ACTIONS(211),
    [sym_sed_opcode] = ACTIONS(211),
    [sym_sei_opcode] = ACTIONS(211),
    [sym_sta_opcode] = ACTIONS(211),
    [sym_stx_opcode] = ACTIONS(211),
    [sym_sty_opcode] = ACTIONS(211),
    [sym_tax_opcode] = ACTIONS(211),
    [sym_tay_opcode] = ACTIONS(211),
    [sym_tsx_opcode] = ACTIONS(211),
    [sym_txa_opcode] = ACTIONS(211),
    [sym_tcs_opcode] = ACTIONS(211),
    [sym_tya_opcode] = ACTIONS(211),
    [sym_a16_ctrl_cmd] = ACTIONS(209),
    [sym_a8_ctrl_cmd] = ACTIONS(209),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(209),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(209),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(209),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(209),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(213),
    [sym_adc_opcode] = ACTIONS(215),
    [sym_and_opcode] = ACTIONS(215),
    [sym_asl_opcode] = ACTIONS(215),
    [sym_bcc_opcode] = ACTIONS(215),
    [sym_bcs_opcode] = ACTIONS(215),
    [sym_beq_opcode] = ACTIONS(215),
    [sym_bit_opcode] = ACTIONS(215),
    [sym_bmi_opcode] = ACTIONS(215),
    [sym_bne_opcode] = ACTIONS(215),
    [sym_bpl_opcode] = ACTIONS(215),
    [sym_brk_opcode] = ACTIONS(215),
    [sym_bvc_opcode] = ACTIONS(215),
    [sym_bvs_opcode] = ACTIONS(215),
    [sym_clc_opcode] = ACTIONS(215),
    [sym_cld_opcode] = ACTIONS(215),
    [sym_cli_opcode] = ACTIONS(215),
    [sym_clv_opcode] = ACTIONS(215),
    [sym_cmp_opcode] = ACTIONS(215),
    [sym_cpx_opcode] = ACTIONS(215),
    [sym_cpy_opcode] = ACTIONS(215),
    [sym_dec_opcode] = ACTIONS(215),
    [sym_dex_opcode] = ACTIONS(215),
    [sym_dey_opcode] = ACTIONS(215),
    [sym_eor_opcode] = ACTIONS(215),
    [sym_inc_opcode] = ACTIONS(215),
    [sym_inx_opcode] = ACTIONS(215),
    [sym_iny_opcode] = ACTIONS(215),
    [sym_jmp_opcode] = ACTIONS(215),
    [sym_jsr_opcode] = ACTIONS(215),
    [sym_lda_opcode] = ACTIONS(215),
    [sym_ldx_opcode] = ACTIONS(215),
    [sym_ldy_opcode] = ACTIONS(215),
    [sym_lsr_opcode] = ACTIONS(215),
    [sym_nop_opcode] = ACTIONS(215),
    [sym_ora_opcode] = ACTIONS(215),
    [sym_pha_opcode] = ACTIONS(215),
    [sym_php_opcode] = ACTIONS(215),
    [sym_pla_opcode] = ACTIONS(215),
    [sym_plp_opcode] = ACTIONS(215),
    [sym_rol_opcode] = ACTIONS(215),
    [sym_ror_opcode] = ACTIONS(215),
    [sym_rti_opcode] = ACTIONS(215),
    [sym_rts_opcode] = ACTIONS(215),
    [sym_sbc_opcode] = ACTIONS(215),
    [sym_sec_opcode] = ACTIONS(215),
    [sym_sed_opcode] = ACTIONS(215),
    [sym_sei_opcode] = ACTIONS(215),
    [sym_sta_opcode] = ACTIONS(215),
    [sym_stx_opcode] = ACTIONS(215),
    [sym_sty_opcode] = ACTIONS(215),
    [sym_tax_opcode] = ACTIONS(215),
    [sym_tay_opcode] = ACTIONS(215),
    [sym_tsx_opcode] = ACTIONS(215),
    [sym_txa_opcode] = ACTIONS(215),
    [sym_tcs_opcode] = ACTIONS(215),
    [sym_tya_opcode] = ACTIONS(215),
    [sym_a16_ctrl_cmd] = ACTIONS(213),
    [sym_a8_ctrl_cmd] = ACTIONS(213),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(213),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(213),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(213),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(213),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(217),
    [sym_adc_opcode] = ACTIONS(219),
    [sym_and_opcode] = ACTIONS(219),
    [sym_asl_opcode] = ACTIONS(219),
    [sym_bcc_opcode] = ACTIONS(219),
    [sym_bcs_opcode] = ACTIONS(219),
    [sym_beq_opcode] = ACTIONS(219),
    [sym_bit_opcode] = ACTIONS(219),
    [sym_bmi_opcode] = ACTIONS(219),
    [sym_bne_opcode] = ACTIONS(219),
    [sym_bpl_opcode] = ACTIONS(219),
    [sym_brk_opcode] = ACTIONS(219),
    [sym_bvc_opcode] = ACTIONS(219),
    [sym_bvs_opcode] = ACTIONS(219),
    [sym_clc_opcode] = ACTIONS(219),
    [sym_cld_opcode] = ACTIONS(219),
    [sym_cli_opcode] = ACTIONS(219),
    [sym_clv_opcode] = ACTIONS(219),
    [sym_cmp_opcode] = ACTIONS(219),
    [sym_cpx_opcode] = ACTIONS(219),
    [sym_cpy_opcode] = ACTIONS(219),
    [sym_dec_opcode] = ACTIONS(219),
    [sym_dex_opcode] = ACTIONS(219),
    [sym_dey_opcode] = ACTIONS(219),
    [sym_eor_opcode] = ACTIONS(219),
    [sym_inc_opcode] = ACTIONS(219),
    [sym_inx_opcode] = ACTIONS(219),
    [sym_iny_opcode] = ACTIONS(219),
    [sym_jmp_opcode] = ACTIONS(219),
    [sym_jsr_opcode] = ACTIONS(219),
    [sym_lda_opcode] = ACTIONS(219),
    [sym_ldx_opcode] = ACTIONS(219),
    [sym_ldy_opcode] = ACTIONS(219),
    [sym_lsr_opcode] = ACTIONS(219),
    [sym_nop_opcode] = ACTIONS(219),
    [sym_ora_opcode] = ACTIONS(219),
    [sym_pha_opcode] = ACTIONS(219),
    [sym_php_opcode] = ACTIONS(219),
    [sym_pla_opcode] = ACTIONS(219),
    [sym_plp_opcode] = ACTIONS(219),
    [sym_rol_opcode] = ACTIONS(219),
    [sym_ror_opcode] = ACTIONS(219),
    [sym_rti_opcode] = ACTIONS(219),
    [sym_rts_opcode] = ACTIONS(219),
    [sym_sbc_opcode] = ACTIONS(219),
    [sym_sec_opcode] = ACTIONS(219),
    [sym_sed_opcode] = ACTIONS(219),
    [sym_sei_opcode] = ACTIONS(219),
    [sym_sta_opcode] = ACTIONS(219),
    [sym_stx_opcode] = ACTIONS(219),
    [sym_sty_opcode] = ACTIONS(219),
    [sym_tax_opcode] = ACTIONS(219),
    [sym_tay_opcode] = ACTIONS(219),
    [sym_tsx_opcode] = ACTIONS(219),
    [sym_txa_opcode] = ACTIONS(219),
    [sym_tcs_opcode] = ACTIONS(219),
    [sym_tya_opcode] = ACTIONS(219),
    [sym_a16_ctrl_cmd] = ACTIONS(217),
    [sym_a8_ctrl_cmd] = ACTIONS(217),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(217),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(217),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(217),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(217),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(221),
    [sym_adc_opcode] = ACTIONS(223),
    [sym_and_opcode] = ACTIONS(223),
    [sym_asl_opcode] = ACTIONS(223),
    [sym_bcc_opcode] = ACTIONS(223),
    [sym_bcs_opcode] = ACTIONS(223),
    [sym_beq_opcode] = ACTIONS(223),
    [sym_bit_opcode] = ACTIONS(223),
    [sym_bmi_opcode] = ACTIONS(223),
    [sym_bne_opcode] = ACTIONS(223),
    [sym_bpl_opcode] = ACTIONS(223),
    [sym_brk_opcode] = ACTIONS(223),
    [sym_bvc_opcode] = ACTIONS(223),
    [sym_bvs_opcode] = ACTIONS(223),
    [sym_clc_opcode] = ACTIONS(223),
    [sym_cld_opcode] = ACTIONS(223),
    [sym_cli_opcode] = ACTIONS(223),
    [sym_clv_opcode] = ACTIONS(223),
    [sym_cmp_opcode] = ACTIONS(223),
    [sym_cpx_opcode] = ACTIONS(223),
    [sym_cpy_opcode] = ACTIONS(223),
    [sym_dec_opcode] = ACTIONS(223),
    [sym_dex_opcode] = ACTIONS(223),
    [sym_dey_opcode] = ACTIONS(223),
    [sym_eor_opcode] = ACTIONS(223),
    [sym_inc_opcode] = ACTIONS(223),
    [sym_inx_opcode] = ACTIONS(223),
    [sym_iny_opcode] = ACTIONS(223),
    [sym_jmp_opcode] = ACTIONS(223),
    [sym_jsr_opcode] = ACTIONS(223),
    [sym_lda_opcode] = ACTIONS(223),
    [sym_ldx_opcode] = ACTIONS(223),
    [sym_ldy_opcode] = ACTIONS(223),
    [sym_lsr_opcode] = ACTIONS(223),
    [sym_nop_opcode] = ACTIONS(223),
    [sym_ora_opcode] = ACTIONS(223),
    [sym_pha_opcode] = ACTIONS(223),
    [sym_php_opcode] = ACTIONS(223),
    [sym_pla_opcode] = ACTIONS(223),
    [sym_plp_opcode] = ACTIONS(223),
    [sym_rol_opcode] = ACTIONS(223),
    [sym_ror_opcode] = ACTIONS(223),
    [sym_rti_opcode] = ACTIONS(223),
    [sym_rts_opcode] = ACTIONS(223),
    [sym_sbc_opcode] = ACTIONS(223),
    [sym_sec_opcode] = ACTIONS(223),
    [sym_sed_opcode] = ACTIONS(223),
    [sym_sei_opcode] = ACTIONS(223),
    [sym_sta_opcode] = ACTIONS(223),
    [sym_stx_opcode] = ACTIONS(223),
    [sym_sty_opcode] = ACTIONS(223),
    [sym_tax_opcode] = ACTIONS(223),
    [sym_tay_opcode] = ACTIONS(223),
    [sym_tsx_opcode] = ACTIONS(223),
    [sym_txa_opcode] = ACTIONS(223),
    [sym_tcs_opcode] = ACTIONS(223),
    [sym_tya_opcode] = ACTIONS(223),
    [sym_a16_ctrl_cmd] = ACTIONS(221),
    [sym_a8_ctrl_cmd] = ACTIONS(221),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(221),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(221),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(221),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(221),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(225),
    [sym_adc_opcode] = ACTIONS(227),
    [sym_and_opcode] = ACTIONS(227),
    [sym_asl_opcode] = ACTIONS(227),
    [sym_bcc_opcode] = ACTIONS(227),
    [sym_bcs_opcode] = ACTIONS(227),
    [sym_beq_opcode] = ACTIONS(227),
    [sym_bit_opcode] = ACTIONS(227),
    [sym_bmi_opcode] = ACTIONS(227),
    [sym_bne_opcode] = ACTIONS(227),
    [sym_bpl_opcode] = ACTIONS(227),
    [sym_brk_opcode] = ACTIONS(227),
    [sym_bvc_opcode] = ACTIONS(227),
    [sym_bvs_opcode] = ACTIONS(227),
    [sym_clc_opcode] = ACTIONS(227),
    [sym_cld_opcode] = ACTIONS(227),
    [sym_cli_opcode] = ACTIONS(227),
    [sym_clv_opcode] = ACTIONS(227),
    [sym_cmp_opcode] = ACTIONS(227),
    [sym_cpx_opcode] = ACTIONS(227),
    [sym_cpy_opcode] = ACTIONS(227),
    [sym_dec_opcode] = ACTIONS(227),
    [sym_dex_opcode] = ACTIONS(227),
    [sym_dey_opcode] = ACTIONS(227),
    [sym_eor_opcode] = ACTIONS(227),
    [sym_inc_opcode] = ACTIONS(227),
    [sym_inx_opcode] = ACTIONS(227),
    [sym_iny_opcode] = ACTIONS(227),
    [sym_jmp_opcode] = ACTIONS(227),
    [sym_jsr_opcode] = ACTIONS(227),
    [sym_lda_opcode] = ACTIONS(227),
    [sym_ldx_opcode] = ACTIONS(227),
    [sym_ldy_opcode] = ACTIONS(227),
    [sym_lsr_opcode] = ACTIONS(227),
    [sym_nop_opcode] = ACTIONS(227),
    [sym_ora_opcode] = ACTIONS(227),
    [sym_pha_opcode] = ACTIONS(227),
    [sym_php_opcode] = ACTIONS(227),
    [sym_pla_opcode] = ACTIONS(227),
    [sym_plp_opcode] = ACTIONS(227),
    [sym_rol_opcode] = ACTIONS(227),
    [sym_ror_opcode] = ACTIONS(227),
    [sym_rti_opcode] = ACTIONS(227),
    [sym_rts_opcode] = ACTIONS(227),
    [sym_sbc_opcode] = ACTIONS(227),
    [sym_sec_opcode] = ACTIONS(227),
    [sym_sed_opcode] = ACTIONS(227),
    [sym_sei_opcode] = ACTIONS(227),
    [sym_sta_opcode] = ACTIONS(227),
    [sym_stx_opcode] = ACTIONS(227),
    [sym_sty_opcode] = ACTIONS(227),
    [sym_tax_opcode] = ACTIONS(227),
    [sym_tay_opcode] = ACTIONS(227),
    [sym_tsx_opcode] = ACTIONS(227),
    [sym_txa_opcode] = ACTIONS(227),
    [sym_tcs_opcode] = ACTIONS(227),
    [sym_tya_opcode] = ACTIONS(227),
    [sym_a16_ctrl_cmd] = ACTIONS(225),
    [sym_a8_ctrl_cmd] = ACTIONS(225),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(225),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(225),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(225),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(225),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(229),
    [sym_adc_opcode] = ACTIONS(231),
    [sym_and_opcode] = ACTIONS(231),
    [sym_asl_opcode] = ACTIONS(231),
    [sym_bcc_opcode] = ACTIONS(231),
    [sym_bcs_opcode] = ACTIONS(231),
    [sym_beq_opcode] = ACTIONS(231),
    [sym_bit_opcode] = ACTIONS(231),
    [sym_bmi_opcode] = ACTIONS(231),
    [sym_bne_opcode] = ACTIONS(231),
    [sym_bpl_opcode] = ACTIONS(231),
    [sym_brk_opcode] = ACTIONS(231),
    [sym_bvc_opcode] = ACTIONS(231),
    [sym_bvs_opcode] = ACTIONS(231),
    [sym_clc_opcode] = ACTIONS(231),
    [sym_cld_opcode] = ACTIONS(231),
    [sym_cli_opcode] = ACTIONS(231),
    [sym_clv_opcode] = ACTIONS(231),
    [sym_cmp_opcode] = ACTIONS(231),
    [sym_cpx_opcode] = ACTIONS(231),
    [sym_cpy_opcode] = ACTIONS(231),
    [sym_dec_opcode] = ACTIONS(231),
    [sym_dex_opcode] = ACTIONS(231),
    [sym_dey_opcode] = ACTIONS(231),
    [sym_eor_opcode] = ACTIONS(231),
    [sym_inc_opcode] = ACTIONS(231),
    [sym_inx_opcode] = ACTIONS(231),
    [sym_iny_opcode] = ACTIONS(231),
    [sym_jmp_opcode] = ACTIONS(231),
    [sym_jsr_opcode] = ACTIONS(231),
    [sym_lda_opcode] = ACTIONS(231),
    [sym_ldx_opcode] = ACTIONS(231),
    [sym_ldy_opcode] = ACTIONS(231),
    [sym_lsr_opcode] = ACTIONS(231),
    [sym_nop_opcode] = ACTIONS(231),
    [sym_ora_opcode] = ACTIONS(231),
    [sym_pha_opcode] = ACTIONS(231),
    [sym_php_opcode] = ACTIONS(231),
    [sym_pla_opcode] = ACTIONS(231),
    [sym_plp_opcode] = ACTIONS(231),
    [sym_rol_opcode] = ACTIONS(231),
    [sym_ror_opcode] = ACTIONS(231),
    [sym_rti_opcode] = ACTIONS(231),
    [sym_rts_opcode] = ACTIONS(231),
    [sym_sbc_opcode] = ACTIONS(231),
    [sym_sec_opcode] = ACTIONS(231),
    [sym_sed_opcode] = ACTIONS(231),
    [sym_sei_opcode] = ACTIONS(231),
    [sym_sta_opcode] = ACTIONS(231),
    [sym_stx_opcode] = ACTIONS(231),
    [sym_sty_opcode] = ACTIONS(231),
    [sym_tax_opcode] = ACTIONS(231),
    [sym_tay_opcode] = ACTIONS(231),
    [sym_tsx_opcode] = ACTIONS(231),
    [sym_txa_opcode] = ACTIONS(231),
    [sym_tcs_opcode] = ACTIONS(231),
    [sym_tya_opcode] = ACTIONS(231),
    [sym_a16_ctrl_cmd] = ACTIONS(229),
    [sym_a8_ctrl_cmd] = ACTIONS(229),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(229),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(229),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(229),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(229),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(233),
    [sym_adc_opcode] = ACTIONS(235),
    [sym_and_opcode] = ACTIONS(235),
    [sym_asl_opcode] = ACTIONS(235),
    [sym_bcc_opcode] = ACTIONS(235),
    [sym_bcs_opcode] = ACTIONS(235),
    [sym_beq_opcode] = ACTIONS(235),
    [sym_bit_opcode] = ACTIONS(235),
    [sym_bmi_opcode] = ACTIONS(235),
    [sym_bne_opcode] = ACTIONS(235),
    [sym_bpl_opcode] = ACTIONS(235),
    [sym_brk_opcode] = ACTIONS(235),
    [sym_bvc_opcode] = ACTIONS(235),
    [sym_bvs_opcode] = ACTIONS(235),
    [sym_clc_opcode] = ACTIONS(235),
    [sym_cld_opcode] = ACTIONS(235),
    [sym_cli_opcode] = ACTIONS(235),
    [sym_clv_opcode] = ACTIONS(235),
    [sym_cmp_opcode] = ACTIONS(235),
    [sym_cpx_opcode] = ACTIONS(235),
    [sym_cpy_opcode] = ACTIONS(235),
    [sym_dec_opcode] = ACTIONS(235),
    [sym_dex_opcode] = ACTIONS(235),
    [sym_dey_opcode] = ACTIONS(235),
    [sym_eor_opcode] = ACTIONS(235),
    [sym_inc_opcode] = ACTIONS(235),
    [sym_inx_opcode] = ACTIONS(235),
    [sym_iny_opcode] = ACTIONS(235),
    [sym_jmp_opcode] = ACTIONS(235),
    [sym_jsr_opcode] = ACTIONS(235),
    [sym_lda_opcode] = ACTIONS(235),
    [sym_ldx_opcode] = ACTIONS(235),
    [sym_ldy_opcode] = ACTIONS(235),
    [sym_lsr_opcode] = ACTIONS(235),
    [sym_nop_opcode] = ACTIONS(235),
    [sym_ora_opcode] = ACTIONS(235),
    [sym_pha_opcode] = ACTIONS(235),
    [sym_php_opcode] = ACTIONS(235),
    [sym_pla_opcode] = ACTIONS(235),
    [sym_plp_opcode] = ACTIONS(235),
    [sym_rol_opcode] = ACTIONS(235),
    [sym_ror_opcode] = ACTIONS(235),
    [sym_rti_opcode] = ACTIONS(235),
    [sym_rts_opcode] = ACTIONS(235),
    [sym_sbc_opcode] = ACTIONS(235),
    [sym_sec_opcode] = ACTIONS(235),
    [sym_sed_opcode] = ACTIONS(235),
    [sym_sei_opcode] = ACTIONS(235),
    [sym_sta_opcode] = ACTIONS(235),
    [sym_stx_opcode] = ACTIONS(235),
    [sym_sty_opcode] = ACTIONS(235),
    [sym_tax_opcode] = ACTIONS(235),
    [sym_tay_opcode] = ACTIONS(235),
    [sym_tsx_opcode] = ACTIONS(235),
    [sym_txa_opcode] = ACTIONS(235),
    [sym_tcs_opcode] = ACTIONS(235),
    [sym_tya_opcode] = ACTIONS(235),
    [sym_a16_ctrl_cmd] = ACTIONS(233),
    [sym_a8_ctrl_cmd] = ACTIONS(233),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(233),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(233),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(233),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(233),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(237),
    [sym_adc_opcode] = ACTIONS(239),
    [sym_and_opcode] = ACTIONS(239),
    [sym_asl_opcode] = ACTIONS(239),
    [sym_bcc_opcode] = ACTIONS(239),
    [sym_bcs_opcode] = ACTIONS(239),
    [sym_beq_opcode] = ACTIONS(239),
    [sym_bit_opcode] = ACTIONS(239),
    [sym_bmi_opcode] = ACTIONS(239),
    [sym_bne_opcode] = ACTIONS(239),
    [sym_bpl_opcode] = ACTIONS(239),
    [sym_brk_opcode] = ACTIONS(239),
    [sym_bvc_opcode] = ACTIONS(239),
    [sym_bvs_opcode] = ACTIONS(239),
    [sym_clc_opcode] = ACTIONS(239),
    [sym_cld_opcode] = ACTIONS(239),
    [sym_cli_opcode] = ACTIONS(239),
    [sym_clv_opcode] = ACTIONS(239),
    [sym_cmp_opcode] = ACTIONS(239),
    [sym_cpx_opcode] = ACTIONS(239),
    [sym_cpy_opcode] = ACTIONS(239),
    [sym_dec_opcode] = ACTIONS(239),
    [sym_dex_opcode] = ACTIONS(239),
    [sym_dey_opcode] = ACTIONS(239),
    [sym_eor_opcode] = ACTIONS(239),
    [sym_inc_opcode] = ACTIONS(239),
    [sym_inx_opcode] = ACTIONS(239),
    [sym_iny_opcode] = ACTIONS(239),
    [sym_jmp_opcode] = ACTIONS(239),
    [sym_jsr_opcode] = ACTIONS(239),
    [sym_lda_opcode] = ACTIONS(239),
    [sym_ldx_opcode] = ACTIONS(239),
    [sym_ldy_opcode] = ACTIONS(239),
    [sym_lsr_opcode] = ACTIONS(239),
    [sym_nop_opcode] = ACTIONS(239),
    [sym_ora_opcode] = ACTIONS(239),
    [sym_pha_opcode] = ACTIONS(239),
    [sym_php_opcode] = ACTIONS(239),
    [sym_pla_opcode] = ACTIONS(239),
    [sym_plp_opcode] = ACTIONS(239),
    [sym_rol_opcode] = ACTIONS(239),
    [sym_ror_opcode] = ACTIONS(239),
    [sym_rti_opcode] = ACTIONS(239),
    [sym_rts_opcode] = ACTIONS(239),
    [sym_sbc_opcode] = ACTIONS(239),
    [sym_sec_opcode] = ACTIONS(239),
    [sym_sed_opcode] = ACTIONS(239),
    [sym_sei_opcode] = ACTIONS(239),
    [sym_sta_opcode] = ACTIONS(239),
    [sym_stx_opcode] = ACTIONS(239),
    [sym_sty_opcode] = ACTIONS(239),
    [sym_tax_opcode] = ACTIONS(239),
    [sym_tay_opcode] = ACTIONS(239),
    [sym_tsx_opcode] = ACTIONS(239),
    [sym_txa_opcode] = ACTIONS(239),
    [sym_tcs_opcode] = ACTIONS(239),
    [sym_tya_opcode] = ACTIONS(239),
    [sym_a16_ctrl_cmd] = ACTIONS(237),
    [sym_a8_ctrl_cmd] = ACTIONS(237),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(237),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(237),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(237),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(237),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(241),
    [sym_adc_opcode] = ACTIONS(243),
    [sym_and_opcode] = ACTIONS(243),
    [sym_asl_opcode] = ACTIONS(243),
    [sym_bcc_opcode] = ACTIONS(243),
    [sym_bcs_opcode] = ACTIONS(243),
    [sym_beq_opcode] = ACTIONS(243),
    [sym_bit_opcode] = ACTIONS(243),
    [sym_bmi_opcode] = ACTIONS(243),
    [sym_bne_opcode] = ACTIONS(243),
    [sym_bpl_opcode] = ACTIONS(243),
    [sym_brk_opcode] = ACTIONS(243),
    [sym_bvc_opcode] = ACTIONS(243),
    [sym_bvs_opcode] = ACTIONS(243),
    [sym_clc_opcode] = ACTIONS(243),
    [sym_cld_opcode] = ACTIONS(243),
    [sym_cli_opcode] = ACTIONS(243),
    [sym_clv_opcode] = ACTIONS(243),
    [sym_cmp_opcode] = ACTIONS(243),
    [sym_cpx_opcode] = ACTIONS(243),
    [sym_cpy_opcode] = ACTIONS(243),
    [sym_dec_opcode] = ACTIONS(243),
    [sym_dex_opcode] = ACTIONS(243),
    [sym_dey_opcode] = ACTIONS(243),
    [sym_eor_opcode] = ACTIONS(243),
    [sym_inc_opcode] = ACTIONS(243),
    [sym_inx_opcode] = ACTIONS(243),
    [sym_iny_opcode] = ACTIONS(243),
    [sym_jmp_opcode] = ACTIONS(243),
    [sym_jsr_opcode] = ACTIONS(243),
    [sym_lda_opcode] = ACTIONS(243),
    [sym_ldx_opcode] = ACTIONS(243),
    [sym_ldy_opcode] = ACTIONS(243),
    [sym_lsr_opcode] = ACTIONS(243),
    [sym_nop_opcode] = ACTIONS(243),
    [sym_ora_opcode] = ACTIONS(243),
    [sym_pha_opcode] = ACTIONS(243),
    [sym_php_opcode] = ACTIONS(243),
    [sym_pla_opcode] = ACTIONS(243),
    [sym_plp_opcode] = ACTIONS(243),
    [sym_rol_opcode] = ACTIONS(243),
    [sym_ror_opcode] = ACTIONS(243),
    [sym_rti_opcode] = ACTIONS(243),
    [sym_rts_opcode] = ACTIONS(243),
    [sym_sbc_opcode] = ACTIONS(243),
    [sym_sec_opcode] = ACTIONS(243),
    [sym_sed_opcode] = ACTIONS(243),
    [sym_sei_opcode] = ACTIONS(243),
    [sym_sta_opcode] = ACTIONS(243),
    [sym_stx_opcode] = ACTIONS(243),
    [sym_sty_opcode] = ACTIONS(243),
    [sym_tax_opcode] = ACTIONS(243),
    [sym_tay_opcode] = ACTIONS(243),
    [sym_tsx_opcode] = ACTIONS(243),
    [sym_txa_opcode] = ACTIONS(243),
    [sym_tcs_opcode] = ACTIONS(243),
    [sym_tya_opcode] = ACTIONS(243),
    [sym_a16_ctrl_cmd] = ACTIONS(241),
    [sym_a8_ctrl_cmd] = ACTIONS(241),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(241),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(241),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(241),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(241),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(245),
    [sym_adc_opcode] = ACTIONS(247),
    [sym_and_opcode] = ACTIONS(247),
    [sym_asl_opcode] = ACTIONS(247),
    [sym_bcc_opcode] = ACTIONS(247),
    [sym_bcs_opcode] = ACTIONS(247),
    [sym_beq_opcode] = ACTIONS(247),
    [sym_bit_opcode] = ACTIONS(247),
    [sym_bmi_opcode] = ACTIONS(247),
    [sym_bne_opcode] = ACTIONS(247),
    [sym_bpl_opcode] = ACTIONS(247),
    [sym_brk_opcode] = ACTIONS(247),
    [sym_bvc_opcode] = ACTIONS(247),
    [sym_bvs_opcode] = ACTIONS(247),
    [sym_clc_opcode] = ACTIONS(247),
    [sym_cld_opcode] = ACTIONS(247),
    [sym_cli_opcode] = ACTIONS(247),
    [sym_clv_opcode] = ACTIONS(247),
    [sym_cmp_opcode] = ACTIONS(247),
    [sym_cpx_opcode] = ACTIONS(247),
    [sym_cpy_opcode] = ACTIONS(247),
    [sym_dec_opcode] = ACTIONS(247),
    [sym_dex_opcode] = ACTIONS(247),
    [sym_dey_opcode] = ACTIONS(247),
    [sym_eor_opcode] = ACTIONS(247),
    [sym_inc_opcode] = ACTIONS(247),
    [sym_inx_opcode] = ACTIONS(247),
    [sym_iny_opcode] = ACTIONS(247),
    [sym_jmp_opcode] = ACTIONS(247),
    [sym_jsr_opcode] = ACTIONS(247),
    [sym_lda_opcode] = ACTIONS(247),
    [sym_ldx_opcode] = ACTIONS(247),
    [sym_ldy_opcode] = ACTIONS(247),
    [sym_lsr_opcode] = ACTIONS(247),
    [sym_nop_opcode] = ACTIONS(247),
    [sym_ora_opcode] = ACTIONS(247),
    [sym_pha_opcode] = ACTIONS(247),
    [sym_php_opcode] = ACTIONS(247),
    [sym_pla_opcode] = ACTIONS(247),
    [sym_plp_opcode] = ACTIONS(247),
    [sym_rol_opcode] = ACTIONS(247),
    [sym_ror_opcode] = ACTIONS(247),
    [sym_rti_opcode] = ACTIONS(247),
    [sym_rts_opcode] = ACTIONS(247),
    [sym_sbc_opcode] = ACTIONS(247),
    [sym_sec_opcode] = ACTIONS(247),
    [sym_sed_opcode] = ACTIONS(247),
    [sym_sei_opcode] = ACTIONS(247),
    [sym_sta_opcode] = ACTIONS(247),
    [sym_stx_opcode] = ACTIONS(247),
    [sym_sty_opcode] = ACTIONS(247),
    [sym_tax_opcode] = ACTIONS(247),
    [sym_tay_opcode] = ACTIONS(247),
    [sym_tsx_opcode] = ACTIONS(247),
    [sym_txa_opcode] = ACTIONS(247),
    [sym_tcs_opcode] = ACTIONS(247),
    [sym_tya_opcode] = ACTIONS(247),
    [sym_a16_ctrl_cmd] = ACTIONS(245),
    [sym_a8_ctrl_cmd] = ACTIONS(245),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(245),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(249),
    [sym_adc_opcode] = ACTIONS(251),
    [sym_and_opcode] = ACTIONS(251),
    [sym_asl_opcode] = ACTIONS(251),
    [sym_bcc_opcode] = ACTIONS(251),
    [sym_bcs_opcode] = ACTIONS(251),
    [sym_beq_opcode] = ACTIONS(251),
    [sym_bit_opcode] = ACTIONS(251),
    [sym_bmi_opcode] = ACTIONS(251),
    [sym_bne_opcode] = ACTIONS(251),
    [sym_bpl_opcode] = ACTIONS(251),
    [sym_brk_opcode] = ACTIONS(251),
    [sym_bvc_opcode] = ACTIONS(251),
    [sym_bvs_opcode] = ACTIONS(251),
    [sym_clc_opcode] = ACTIONS(251),
    [sym_cld_opcode] = ACTIONS(251),
    [sym_cli_opcode] = ACTIONS(251),
    [sym_clv_opcode] = ACTIONS(251),
    [sym_cmp_opcode] = ACTIONS(251),
    [sym_cpx_opcode] = ACTIONS(251),
    [sym_cpy_opcode] = ACTIONS(251),
    [sym_dec_opcode] = ACTIONS(251),
    [sym_dex_opcode] = ACTIONS(251),
    [sym_dey_opcode] = ACTIONS(251),
    [sym_eor_opcode] = ACTIONS(251),
    [sym_inc_opcode] = ACTIONS(251),
    [sym_inx_opcode] = ACTIONS(251),
    [sym_iny_opcode] = ACTIONS(251),
    [sym_jmp_opcode] = ACTIONS(251),
    [sym_jsr_opcode] = ACTIONS(251),
    [sym_lda_opcode] = ACTIONS(251),
    [sym_ldx_opcode] = ACTIONS(251),
    [sym_ldy_opcode] = ACTIONS(251),
    [sym_lsr_opcode] = ACTIONS(251),
    [sym_nop_opcode] = ACTIONS(251),
    [sym_ora_opcode] = ACTIONS(251),
    [sym_pha_opcode] = ACTIONS(251),
    [sym_php_opcode] = ACTIONS(251),
    [sym_pla_opcode] = ACTIONS(251),
    [sym_plp_opcode] = ACTIONS(251),
    [sym_rol_opcode] = ACTIONS(251),
    [sym_ror_opcode] = ACTIONS(251),
    [sym_rti_opcode] = ACTIONS(251),
    [sym_rts_opcode] = ACTIONS(251),
    [sym_sbc_opcode] = ACTIONS(251),
    [sym_sec_opcode] = ACTIONS(251),
    [sym_sed_opcode] = ACTIONS(251),
    [sym_sei_opcode] = ACTIONS(251),
    [sym_sta_opcode] = ACTIONS(251),
    [sym_stx_opcode] = ACTIONS(251),
    [sym_sty_opcode] = ACTIONS(251),
    [sym_tax_opcode] = ACTIONS(251),
    [sym_tay_opcode] = ACTIONS(251),
    [sym_tsx_opcode] = ACTIONS(251),
    [sym_txa_opcode] = ACTIONS(251),
    [sym_tcs_opcode] = ACTIONS(251),
    [sym_tya_opcode] = ACTIONS(251),
    [sym_a16_ctrl_cmd] = ACTIONS(249),
    [sym_a8_ctrl_cmd] = ACTIONS(249),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(249),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(249),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(249),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(249),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(253),
    [sym_adc_opcode] = ACTIONS(255),
    [sym_and_opcode] = ACTIONS(255),
    [sym_asl_opcode] = ACTIONS(255),
    [sym_bcc_opcode] = ACTIONS(255),
    [sym_bcs_opcode] = ACTIONS(255),
    [sym_beq_opcode] = ACTIONS(255),
    [sym_bit_opcode] = ACTIONS(255),
    [sym_bmi_opcode] = ACTIONS(255),
    [sym_bne_opcode] = ACTIONS(255),
    [sym_bpl_opcode] = ACTIONS(255),
    [sym_brk_opcode] = ACTIONS(255),
    [sym_bvc_opcode] = ACTIONS(255),
    [sym_bvs_opcode] = ACTIONS(255),
    [sym_clc_opcode] = ACTIONS(255),
    [sym_cld_opcode] = ACTIONS(255),
    [sym_cli_opcode] = ACTIONS(255),
    [sym_clv_opcode] = ACTIONS(255),
    [sym_cmp_opcode] = ACTIONS(255),
    [sym_cpx_opcode] = ACTIONS(255),
    [sym_cpy_opcode] = ACTIONS(255),
    [sym_dec_opcode] = ACTIONS(255),
    [sym_dex_opcode] = ACTIONS(255),
    [sym_dey_opcode] = ACTIONS(255),
    [sym_eor_opcode] = ACTIONS(255),
    [sym_inc_opcode] = ACTIONS(255),
    [sym_inx_opcode] = ACTIONS(255),
    [sym_iny_opcode] = ACTIONS(255),
    [sym_jmp_opcode] = ACTIONS(255),
    [sym_jsr_opcode] = ACTIONS(255),
    [sym_lda_opcode] = ACTIONS(255),
    [sym_ldx_opcode] = ACTIONS(255),
    [sym_ldy_opcode] = ACTIONS(255),
    [sym_lsr_opcode] = ACTIONS(255),
    [sym_nop_opcode] = ACTIONS(255),
    [sym_ora_opcode] = ACTIONS(255),
    [sym_pha_opcode] = ACTIONS(255),
    [sym_php_opcode] = ACTIONS(255),
    [sym_pla_opcode] = ACTIONS(255),
    [sym_plp_opcode] = ACTIONS(255),
    [sym_rol_opcode] = ACTIONS(255),
    [sym_ror_opcode] = ACTIONS(255),
    [sym_rti_opcode] = ACTIONS(255),
    [sym_rts_opcode] = ACTIONS(255),
    [sym_sbc_opcode] = ACTIONS(255),
    [sym_sec_opcode] = ACTIONS(255),
    [sym_sed_opcode] = ACTIONS(255),
    [sym_sei_opcode] = ACTIONS(255),
    [sym_sta_opcode] = ACTIONS(255),
    [sym_stx_opcode] = ACTIONS(255),
    [sym_sty_opcode] = ACTIONS(255),
    [sym_tax_opcode] = ACTIONS(255),
    [sym_tay_opcode] = ACTIONS(255),
    [sym_tsx_opcode] = ACTIONS(255),
    [sym_txa_opcode] = ACTIONS(255),
    [sym_tcs_opcode] = ACTIONS(255),
    [sym_tya_opcode] = ACTIONS(255),
    [sym_a16_ctrl_cmd] = ACTIONS(253),
    [sym_a8_ctrl_cmd] = ACTIONS(253),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(253),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(253),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(253),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(253),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(257),
    [sym_adc_opcode] = ACTIONS(259),
    [sym_and_opcode] = ACTIONS(259),
    [sym_asl_opcode] = ACTIONS(259),
    [sym_bcc_opcode] = ACTIONS(259),
    [sym_bcs_opcode] = ACTIONS(259),
    [sym_beq_opcode] = ACTIONS(259),
    [sym_bit_opcode] = ACTIONS(259),
    [sym_bmi_opcode] = ACTIONS(259),
    [sym_bne_opcode] = ACTIONS(259),
    [sym_bpl_opcode] = ACTIONS(259),
    [sym_brk_opcode] = ACTIONS(259),
    [sym_bvc_opcode] = ACTIONS(259),
    [sym_bvs_opcode] = ACTIONS(259),
    [sym_clc_opcode] = ACTIONS(259),
    [sym_cld_opcode] = ACTIONS(259),
    [sym_cli_opcode] = ACTIONS(259),
    [sym_clv_opcode] = ACTIONS(259),
    [sym_cmp_opcode] = ACTIONS(259),
    [sym_cpx_opcode] = ACTIONS(259),
    [sym_cpy_opcode] = ACTIONS(259),
    [sym_dec_opcode] = ACTIONS(259),
    [sym_dex_opcode] = ACTIONS(259),
    [sym_dey_opcode] = ACTIONS(259),
    [sym_eor_opcode] = ACTIONS(259),
    [sym_inc_opcode] = ACTIONS(259),
    [sym_inx_opcode] = ACTIONS(259),
    [sym_iny_opcode] = ACTIONS(259),
    [sym_jmp_opcode] = ACTIONS(259),
    [sym_jsr_opcode] = ACTIONS(259),
    [sym_lda_opcode] = ACTIONS(259),
    [sym_ldx_opcode] = ACTIONS(259),
    [sym_ldy_opcode] = ACTIONS(259),
    [sym_lsr_opcode] = ACTIONS(259),
    [sym_nop_opcode] = ACTIONS(259),
    [sym_ora_opcode] = ACTIONS(259),
    [sym_pha_opcode] = ACTIONS(259),
    [sym_php_opcode] = ACTIONS(259),
    [sym_pla_opcode] = ACTIONS(259),
    [sym_plp_opcode] = ACTIONS(259),
    [sym_rol_opcode] = ACTIONS(259),
    [sym_ror_opcode] = ACTIONS(259),
    [sym_rti_opcode] = ACTIONS(259),
    [sym_rts_opcode] = ACTIONS(259),
    [sym_sbc_opcode] = ACTIONS(259),
    [sym_sec_opcode] = ACTIONS(259),
    [sym_sed_opcode] = ACTIONS(259),
    [sym_sei_opcode] = ACTIONS(259),
    [sym_sta_opcode] = ACTIONS(259),
    [sym_stx_opcode] = ACTIONS(259),
    [sym_sty_opcode] = ACTIONS(259),
    [sym_tax_opcode] = ACTIONS(259),
    [sym_tay_opcode] = ACTIONS(259),
    [sym_tsx_opcode] = ACTIONS(259),
    [sym_txa_opcode] = ACTIONS(259),
    [sym_tcs_opcode] = ACTIONS(259),
    [sym_tya_opcode] = ACTIONS(259),
    [sym_a16_ctrl_cmd] = ACTIONS(257),
    [sym_a8_ctrl_cmd] = ACTIONS(257),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(257),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(257),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(257),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(257),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(261),
    [sym_adc_opcode] = ACTIONS(263),
    [sym_and_opcode] = ACTIONS(263),
    [sym_asl_opcode] = ACTIONS(263),
    [sym_bcc_opcode] = ACTIONS(263),
    [sym_bcs_opcode] = ACTIONS(263),
    [sym_beq_opcode] = ACTIONS(263),
    [sym_bit_opcode] = ACTIONS(263),
    [sym_bmi_opcode] = ACTIONS(263),
    [sym_bne_opcode] = ACTIONS(263),
    [sym_bpl_opcode] = ACTIONS(263),
    [sym_brk_opcode] = ACTIONS(263),
    [sym_bvc_opcode] = ACTIONS(263),
    [sym_bvs_opcode] = ACTIONS(263),
    [sym_clc_opcode] = ACTIONS(263),
    [sym_cld_opcode] = ACTIONS(263),
    [sym_cli_opcode] = ACTIONS(263),
    [sym_clv_opcode] = ACTIONS(263),
    [sym_cmp_opcode] = ACTIONS(263),
    [sym_cpx_opcode] = ACTIONS(263),
    [sym_cpy_opcode] = ACTIONS(263),
    [sym_dec_opcode] = ACTIONS(263),
    [sym_dex_opcode] = ACTIONS(263),
    [sym_dey_opcode] = ACTIONS(263),
    [sym_eor_opcode] = ACTIONS(263),
    [sym_inc_opcode] = ACTIONS(263),
    [sym_inx_opcode] = ACTIONS(263),
    [sym_iny_opcode] = ACTIONS(263),
    [sym_jmp_opcode] = ACTIONS(263),
    [sym_jsr_opcode] = ACTIONS(263),
    [sym_lda_opcode] = ACTIONS(263),
    [sym_ldx_opcode] = ACTIONS(263),
    [sym_ldy_opcode] = ACTIONS(263),
    [sym_lsr_opcode] = ACTIONS(263),
    [sym_nop_opcode] = ACTIONS(263),
    [sym_ora_opcode] = ACTIONS(263),
    [sym_pha_opcode] = ACTIONS(263),
    [sym_php_opcode] = ACTIONS(263),
    [sym_pla_opcode] = ACTIONS(263),
    [sym_plp_opcode] = ACTIONS(263),
    [sym_rol_opcode] = ACTIONS(263),
    [sym_ror_opcode] = ACTIONS(263),
    [sym_rti_opcode] = ACTIONS(263),
    [sym_rts_opcode] = ACTIONS(263),
    [sym_sbc_opcode] = ACTIONS(263),
    [sym_sec_opcode] = ACTIONS(263),
    [sym_sed_opcode] = ACTIONS(263),
    [sym_sei_opcode] = ACTIONS(263),
    [sym_sta_opcode] = ACTIONS(263),
    [sym_stx_opcode] = ACTIONS(263),
    [sym_sty_opcode] = ACTIONS(263),
    [sym_tax_opcode] = ACTIONS(263),
    [sym_tay_opcode] = ACTIONS(263),
    [sym_tsx_opcode] = ACTIONS(263),
    [sym_txa_opcode] = ACTIONS(263),
    [sym_tcs_opcode] = ACTIONS(263),
    [sym_tya_opcode] = ACTIONS(263),
    [sym_a16_ctrl_cmd] = ACTIONS(261),
    [sym_a8_ctrl_cmd] = ACTIONS(261),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(261),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(261),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(261),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(261),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(189),
    [sym_adc_opcode] = ACTIONS(193),
    [sym_and_opcode] = ACTIONS(193),
    [sym_asl_opcode] = ACTIONS(193),
    [sym_bcc_opcode] = ACTIONS(193),
    [sym_bcs_opcode] = ACTIONS(193),
    [sym_beq_opcode] = ACTIONS(193),
    [sym_bit_opcode] = ACTIONS(193),
    [sym_bmi_opcode] = ACTIONS(193),
    [sym_bne_opcode] = ACTIONS(193),
    [sym_bpl_opcode] = ACTIONS(193),
    [sym_brk_opcode] = ACTIONS(193),
    [sym_bvc_opcode] = ACTIONS(193),
    [sym_bvs_opcode] = ACTIONS(193),
    [sym_clc_opcode] = ACTIONS(193),
    [sym_cld_opcode] = ACTIONS(193),
    [sym_cli_opcode] = ACTIONS(193),
    [sym_clv_opcode] = ACTIONS(193),
    [sym_cmp_opcode] = ACTIONS(193),
    [sym_cpx_opcode] = ACTIONS(193),
    [sym_cpy_opcode] = ACTIONS(193),
    [sym_dec_opcode] = ACTIONS(193),
    [sym_dex_opcode] = ACTIONS(193),
    [sym_dey_opcode] = ACTIONS(193),
    [sym_eor_opcode] = ACTIONS(193),
    [sym_inc_opcode] = ACTIONS(193),
    [sym_inx_opcode] = ACTIONS(193),
    [sym_iny_opcode] = ACTIONS(193),
    [sym_jmp_opcode] = ACTIONS(193),
    [sym_jsr_opcode] = ACTIONS(193),
    [sym_lda_opcode] = ACTIONS(193),
    [sym_ldx_opcode] = ACTIONS(193),
    [sym_ldy_opcode] = ACTIONS(193),
    [sym_lsr_opcode] = ACTIONS(193),
    [sym_nop_opcode] = ACTIONS(193),
    [sym_ora_opcode] = ACTIONS(193),
    [sym_pha_opcode] = ACTIONS(193),
    [sym_php_opcode] = ACTIONS(193),
    [sym_pla_opcode] = ACTIONS(193),
    [sym_plp_opcode] = ACTIONS(193),
    [sym_rol_opcode] = ACTIONS(193),
    [sym_ror_opcode] = ACTIONS(193),
    [sym_rti_opcode] = ACTIONS(193),
    [sym_rts_opcode] = ACTIONS(193),
    [sym_sbc_opcode] = ACTIONS(193),
    [sym_sec_opcode] = ACTIONS(193),
    [sym_sed_opcode] = ACTIONS(193),
    [sym_sei_opcode] = ACTIONS(193),
    [sym_sta_opcode] = ACTIONS(193),
    [sym_stx_opcode] = ACTIONS(193),
    [sym_sty_opcode] = ACTIONS(193),
    [sym_tax_opcode] = ACTIONS(193),
    [sym_tay_opcode] = ACTIONS(193),
    [sym_tsx_opcode] = ACTIONS(193),
    [sym_txa_opcode] = ACTIONS(193),
    [sym_tcs_opcode] = ACTIONS(193),
    [sym_tya_opcode] = ACTIONS(193),
    [sym_a16_ctrl_cmd] = ACTIONS(189),
    [sym_a8_ctrl_cmd] = ACTIONS(189),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(189),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(189),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(189),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(189),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(181),
    [sym_adc_opcode] = ACTIONS(185),
    [sym_and_opcode] = ACTIONS(185),
    [sym_asl_opcode] = ACTIONS(185),
    [sym_bcc_opcode] = ACTIONS(185),
    [sym_bcs_opcode] = ACTIONS(185),
    [sym_beq_opcode] = ACTIONS(185),
    [sym_bit_opcode] = ACTIONS(185),
    [sym_bmi_opcode] = ACTIONS(185),
    [sym_bne_opcode] = ACTIONS(185),
    [sym_bpl_opcode] = ACTIONS(185),
    [sym_brk_opcode] = ACTIONS(185),
    [sym_bvc_opcode] = ACTIONS(185),
    [sym_bvs_opcode] = ACTIONS(185),
    [sym_clc_opcode] = ACTIONS(185),
    [sym_cld_opcode] = ACTIONS(185),
    [sym_cli_opcode] = ACTIONS(185),
    [sym_clv_opcode] = ACTIONS(185),
    [sym_cmp_opcode] = ACTIONS(185),
    [sym_cpx_opcode] = ACTIONS(185),
    [sym_cpy_opcode] = ACTIONS(185),
    [sym_dec_opcode] = ACTIONS(185),
    [sym_dex_opcode] = ACTIONS(185),
    [sym_dey_opcode] = ACTIONS(185),
    [sym_eor_opcode] = ACTIONS(185),
    [sym_inc_opcode] = ACTIONS(185),
    [sym_inx_opcode] = ACTIONS(185),
    [sym_iny_opcode] = ACTIONS(185),
    [sym_jmp_opcode] = ACTIONS(185),
    [sym_jsr_opcode] = ACTIONS(185),
    [sym_lda_opcode] = ACTIONS(185),
    [sym_ldx_opcode] = ACTIONS(185),
    [sym_ldy_opcode] = ACTIONS(185),
    [sym_lsr_opcode] = ACTIONS(185),
    [sym_nop_opcode] = ACTIONS(185),
    [sym_ora_opcode] = ACTIONS(185),
    [sym_pha_opcode] = ACTIONS(185),
    [sym_php_opcode] = ACTIONS(185),
    [sym_pla_opcode] = ACTIONS(185),
    [sym_plp_opcode] = ACTIONS(185),
    [sym_rol_opcode] = ACTIONS(185),
    [sym_ror_opcode] = ACTIONS(185),
    [sym_rti_opcode] = ACTIONS(185),
    [sym_rts_opcode] = ACTIONS(185),
    [sym_sbc_opcode] = ACTIONS(185),
    [sym_sec_opcode] = ACTIONS(185),
    [sym_sed_opcode] = ACTIONS(185),
    [sym_sei_opcode] = ACTIONS(185),
    [sym_sta_opcode] = ACTIONS(185),
    [sym_stx_opcode] = ACTIONS(185),
    [sym_sty_opcode] = ACTIONS(185),
    [sym_tax_opcode] = ACTIONS(185),
    [sym_tay_opcode] = ACTIONS(185),
    [sym_tsx_opcode] = ACTIONS(185),
    [sym_txa_opcode] = ACTIONS(185),
    [sym_tcs_opcode] = ACTIONS(185),
    [sym_tya_opcode] = ACTIONS(185),
    [sym_a16_ctrl_cmd] = ACTIONS(181),
    [sym_a8_ctrl_cmd] = ACTIONS(181),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(181),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(181),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(181),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(181),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(265),
    [sym_adc_opcode] = ACTIONS(267),
    [sym_and_opcode] = ACTIONS(267),
    [sym_asl_opcode] = ACTIONS(267),
    [sym_bcc_opcode] = ACTIONS(267),
    [sym_bcs_opcode] = ACTIONS(267),
    [sym_beq_opcode] = ACTIONS(267),
    [sym_bit_opcode] = ACTIONS(267),
    [sym_bmi_opcode] = ACTIONS(267),
    [sym_bne_opcode] = ACTIONS(267),
    [sym_bpl_opcode] = ACTIONS(267),
    [sym_brk_opcode] = ACTIONS(267),
    [sym_bvc_opcode] = ACTIONS(267),
    [sym_bvs_opcode] = ACTIONS(267),
    [sym_clc_opcode] = ACTIONS(267),
    [sym_cld_opcode] = ACTIONS(267),
    [sym_cli_opcode] = ACTIONS(267),
    [sym_clv_opcode] = ACTIONS(267),
    [sym_cmp_opcode] = ACTIONS(267),
    [sym_cpx_opcode] = ACTIONS(267),
    [sym_cpy_opcode] = ACTIONS(267),
    [sym_dec_opcode] = ACTIONS(267),
    [sym_dex_opcode] = ACTIONS(267),
    [sym_dey_opcode] = ACTIONS(267),
    [sym_eor_opcode] = ACTIONS(267),
    [sym_inc_opcode] = ACTIONS(267),
    [sym_inx_opcode] = ACTIONS(267),
    [sym_iny_opcode] = ACTIONS(267),
    [sym_jmp_opcode] = ACTIONS(267),
    [sym_jsr_opcode] = ACTIONS(267),
    [sym_lda_opcode] = ACTIONS(267),
    [sym_ldx_opcode] = ACTIONS(267),
    [sym_ldy_opcode] = ACTIONS(267),
    [sym_lsr_opcode] = ACTIONS(267),
    [sym_nop_opcode] = ACTIONS(267),
    [sym_ora_opcode] = ACTIONS(267),
    [sym_pha_opcode] = ACTIONS(267),
    [sym_php_opcode] = ACTIONS(267),
    [sym_pla_opcode] = ACTIONS(267),
    [sym_plp_opcode] = ACTIONS(267),
    [sym_rol_opcode] = ACTIONS(267),
    [sym_ror_opcode] = ACTIONS(267),
    [sym_rti_opcode] = ACTIONS(267),
    [sym_rts_opcode] = ACTIONS(267),
    [sym_sbc_opcode] = ACTIONS(267),
    [sym_sec_opcode] = ACTIONS(267),
    [sym_sed_opcode] = ACTIONS(267),
    [sym_sei_opcode] = ACTIONS(267),
    [sym_sta_opcode] = ACTIONS(267),
    [sym_stx_opcode] = ACTIONS(267),
    [sym_sty_opcode] = ACTIONS(267),
    [sym_tax_opcode] = ACTIONS(267),
    [sym_tay_opcode] = ACTIONS(267),
    [sym_tsx_opcode] = ACTIONS(267),
    [sym_txa_opcode] = ACTIONS(267),
    [sym_tcs_opcode] = ACTIONS(267),
    [sym_tya_opcode] = ACTIONS(267),
    [sym_a16_ctrl_cmd] = ACTIONS(265),
    [sym_a8_ctrl_cmd] = ACTIONS(265),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(265),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(265),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(265),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(265),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(74), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [95] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(86), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [190] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(101), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [285] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(92), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [380] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(91), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [475] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(89), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [570] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(95), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [665] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(102), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [760] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(79), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [855] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(80), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [950] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(81), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [1045] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(82), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [1140] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(83), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [1235] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(84), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [1330] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(85), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [1425] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(87), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [1520] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(78), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [1615] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(90), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [1710] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(98), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [1805] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(73), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [1900] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(97), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [1995] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(96), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [2090] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(94), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [2185] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(93), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [2280] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(88), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [2375] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(75), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [2470] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(76), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [2565] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(287), 1,
      anon_sym_DASH,
    STATE(77), 1,
      sym_expression,
    ACTIONS(289), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(293), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(295), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(297), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(100), 28,
      sym_operand_8,
      sym_operand_16,
      sym_unary_pos_exp,
      sym_unary_neg_exp,
      sym_unary_not_exp,
      sym_unary_lobyte_exp,
      sym_unary_hibyte_exp,
      sym_unary_bankbyte_exp,
      sym_mult_exp,
      sym_div_exp,
      sym_mod_exp,
      sym_bit_and_exp,
      sym_bit_xor_exp,
      sym_shift_l_exp,
      sym_shift_r_exp,
      sym_add_exp,
      sym_sub_exp,
      sym_bit_or_exp,
      sym_eq_cmp,
      sym_neq_cmp,
      sym_lt_cmp,
      sym_gt_cmp,
      sym_lte_cmp,
      sym_gte_cmp,
      sym_bool_and_exp,
      sym_bool_xor_exp,
      sym_bool_or_exp,
      sym_bool_not_exp,
  [2660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(299), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DOTMOD,
      anon_sym_DOTBITAND,
      anon_sym_DOTBITXOR,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
      anon_sym_DOTBITOR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [2696] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_PLUS,
    ACTIONS(307), 1,
      anon_sym_DASH,
    ACTIONS(309), 1,
      anon_sym_LT,
    ACTIONS(311), 1,
      anon_sym_GT,
    ACTIONS(315), 1,
      anon_sym_STAR,
    ACTIONS(317), 1,
      anon_sym_SLASH,
    ACTIONS(319), 1,
      anon_sym_DOTMOD,
    ACTIONS(321), 1,
      anon_sym_DOTBITAND,
    ACTIONS(323), 1,
      anon_sym_AMP,
    ACTIONS(329), 1,
      anon_sym_DOTBITOR,
    ACTIONS(331), 1,
      anon_sym_PIPE,
    ACTIONS(333), 1,
      anon_sym_EQ,
    ACTIONS(335), 1,
      anon_sym_LT_GT,
    ACTIONS(337), 1,
      anon_sym_LT_EQ,
    ACTIONS(339), 1,
      anon_sym_GT_EQ,
    ACTIONS(313), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(325), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(327), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(303), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [2766] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_PLUS,
    ACTIONS(307), 1,
      anon_sym_DASH,
    ACTIONS(315), 1,
      anon_sym_STAR,
    ACTIONS(317), 1,
      anon_sym_SLASH,
    ACTIONS(319), 1,
      anon_sym_DOTMOD,
    ACTIONS(321), 1,
      anon_sym_DOTBITAND,
    ACTIONS(323), 1,
      anon_sym_AMP,
    ACTIONS(329), 1,
      anon_sym_DOTBITOR,
    ACTIONS(331), 1,
      anon_sym_PIPE,
    ACTIONS(313), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(325), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(327), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(343), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(341), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [2826] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_PLUS,
    ACTIONS(307), 1,
      anon_sym_DASH,
    ACTIONS(315), 1,
      anon_sym_STAR,
    ACTIONS(317), 1,
      anon_sym_SLASH,
    ACTIONS(319), 1,
      anon_sym_DOTMOD,
    ACTIONS(321), 1,
      anon_sym_DOTBITAND,
    ACTIONS(323), 1,
      anon_sym_AMP,
    ACTIONS(329), 1,
      anon_sym_DOTBITOR,
    ACTIONS(331), 1,
      anon_sym_PIPE,
    ACTIONS(313), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(325), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(327), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(347), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(345), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [2886] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_STAR,
    ACTIONS(317), 1,
      anon_sym_SLASH,
    ACTIONS(319), 1,
      anon_sym_DOTMOD,
    ACTIONS(321), 1,
      anon_sym_DOTBITAND,
    ACTIONS(323), 1,
      anon_sym_AMP,
    ACTIONS(313), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(325), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(327), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(351), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(349), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOTBITOR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [2938] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_PLUS,
    ACTIONS(307), 1,
      anon_sym_DASH,
    ACTIONS(315), 1,
      anon_sym_STAR,
    ACTIONS(317), 1,
      anon_sym_SLASH,
    ACTIONS(319), 1,
      anon_sym_DOTMOD,
    ACTIONS(321), 1,
      anon_sym_DOTBITAND,
    ACTIONS(323), 1,
      anon_sym_AMP,
    ACTIONS(329), 1,
      anon_sym_DOTBITOR,
    ACTIONS(331), 1,
      anon_sym_PIPE,
    ACTIONS(313), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(325), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(327), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(355), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(353), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [2998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(357), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DOTMOD,
      anon_sym_DOTBITAND,
      anon_sym_DOTBITXOR,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
      anon_sym_DOTBITOR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(361), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DOTMOD,
      anon_sym_DOTBITAND,
      anon_sym_DOTBITXOR,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
      anon_sym_DOTBITOR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3070] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(365), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DOTMOD,
      anon_sym_DOTBITAND,
      anon_sym_DOTBITXOR,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
      anon_sym_DOTBITOR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(369), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DOTMOD,
      anon_sym_DOTBITAND,
      anon_sym_DOTBITXOR,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
      anon_sym_DOTBITOR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(373), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DOTMOD,
      anon_sym_DOTBITAND,
      anon_sym_DOTBITXOR,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
      anon_sym_DOTBITOR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(377), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DOTMOD,
      anon_sym_DOTBITAND,
      anon_sym_DOTBITXOR,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
      anon_sym_DOTBITOR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3214] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_PLUS,
    ACTIONS(307), 1,
      anon_sym_DASH,
    ACTIONS(309), 1,
      anon_sym_LT,
    ACTIONS(311), 1,
      anon_sym_GT,
    ACTIONS(315), 1,
      anon_sym_STAR,
    ACTIONS(317), 1,
      anon_sym_SLASH,
    ACTIONS(319), 1,
      anon_sym_DOTMOD,
    ACTIONS(321), 1,
      anon_sym_DOTBITAND,
    ACTIONS(323), 1,
      anon_sym_AMP,
    ACTIONS(329), 1,
      anon_sym_DOTBITOR,
    ACTIONS(331), 1,
      anon_sym_PIPE,
    ACTIONS(333), 1,
      anon_sym_EQ,
    ACTIONS(335), 1,
      anon_sym_LT_GT,
    ACTIONS(337), 1,
      anon_sym_LT_EQ,
    ACTIONS(339), 1,
      anon_sym_GT_EQ,
    ACTIONS(385), 1,
      anon_sym_DOTXOR,
    ACTIONS(313), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(325), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(327), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(381), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(383), 2,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
    ACTIONS(387), 2,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3290] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_STAR,
    ACTIONS(317), 1,
      anon_sym_SLASH,
    ACTIONS(319), 1,
      anon_sym_DOTMOD,
    ACTIONS(321), 1,
      anon_sym_DOTBITAND,
    ACTIONS(323), 1,
      anon_sym_AMP,
    ACTIONS(313), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(325), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(327), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(391), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(389), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOTBITOR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3342] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_PLUS,
    ACTIONS(307), 1,
      anon_sym_DASH,
    ACTIONS(315), 1,
      anon_sym_STAR,
    ACTIONS(317), 1,
      anon_sym_SLASH,
    ACTIONS(319), 1,
      anon_sym_DOTMOD,
    ACTIONS(321), 1,
      anon_sym_DOTBITAND,
    ACTIONS(323), 1,
      anon_sym_AMP,
    ACTIONS(329), 1,
      anon_sym_DOTBITOR,
    ACTIONS(331), 1,
      anon_sym_PIPE,
    ACTIONS(313), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(325), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(327), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(395), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(393), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(397), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DOTMOD,
      anon_sym_DOTBITAND,
      anon_sym_DOTBITXOR,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
      anon_sym_DOTBITOR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3438] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_PLUS,
    ACTIONS(307), 1,
      anon_sym_DASH,
    ACTIONS(315), 1,
      anon_sym_STAR,
    ACTIONS(317), 1,
      anon_sym_SLASH,
    ACTIONS(319), 1,
      anon_sym_DOTMOD,
    ACTIONS(321), 1,
      anon_sym_DOTBITAND,
    ACTIONS(323), 1,
      anon_sym_AMP,
    ACTIONS(329), 1,
      anon_sym_DOTBITOR,
    ACTIONS(331), 1,
      anon_sym_PIPE,
    ACTIONS(313), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(325), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(327), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(403), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(401), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3498] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_STAR,
    ACTIONS(317), 1,
      anon_sym_SLASH,
    ACTIONS(319), 1,
      anon_sym_DOTMOD,
    ACTIONS(321), 1,
      anon_sym_DOTBITAND,
    ACTIONS(323), 1,
      anon_sym_AMP,
    ACTIONS(313), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(325), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(327), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(407), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(405), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOTBITOR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3550] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_PLUS,
    ACTIONS(307), 1,
      anon_sym_DASH,
    ACTIONS(309), 1,
      anon_sym_LT,
    ACTIONS(311), 1,
      anon_sym_GT,
    ACTIONS(315), 1,
      anon_sym_STAR,
    ACTIONS(317), 1,
      anon_sym_SLASH,
    ACTIONS(319), 1,
      anon_sym_DOTMOD,
    ACTIONS(321), 1,
      anon_sym_DOTBITAND,
    ACTIONS(323), 1,
      anon_sym_AMP,
    ACTIONS(329), 1,
      anon_sym_DOTBITOR,
    ACTIONS(331), 1,
      anon_sym_PIPE,
    ACTIONS(333), 1,
      anon_sym_EQ,
    ACTIONS(335), 1,
      anon_sym_LT_GT,
    ACTIONS(337), 1,
      anon_sym_LT_EQ,
    ACTIONS(339), 1,
      anon_sym_GT_EQ,
    ACTIONS(313), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(325), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(327), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(409), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3620] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_PLUS,
    ACTIONS(307), 1,
      anon_sym_DASH,
    ACTIONS(309), 1,
      anon_sym_LT,
    ACTIONS(311), 1,
      anon_sym_GT,
    ACTIONS(315), 1,
      anon_sym_STAR,
    ACTIONS(317), 1,
      anon_sym_SLASH,
    ACTIONS(319), 1,
      anon_sym_DOTMOD,
    ACTIONS(321), 1,
      anon_sym_DOTBITAND,
    ACTIONS(323), 1,
      anon_sym_AMP,
    ACTIONS(329), 1,
      anon_sym_DOTBITOR,
    ACTIONS(331), 1,
      anon_sym_PIPE,
    ACTIONS(333), 1,
      anon_sym_EQ,
    ACTIONS(335), 1,
      anon_sym_LT_GT,
    ACTIONS(337), 1,
      anon_sym_LT_EQ,
    ACTIONS(339), 1,
      anon_sym_GT_EQ,
    ACTIONS(385), 1,
      anon_sym_DOTXOR,
    ACTIONS(313), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(325), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(327), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(383), 2,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
    ACTIONS(411), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(413), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DOTMOD,
      anon_sym_DOTBITAND,
      anon_sym_DOTBITXOR,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
      anon_sym_DOTBITOR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(417), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DOTMOD,
      anon_sym_DOTBITAND,
      anon_sym_DOTBITXOR,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
      anon_sym_DOTBITOR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3766] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_PLUS,
    ACTIONS(307), 1,
      anon_sym_DASH,
    ACTIONS(315), 1,
      anon_sym_STAR,
    ACTIONS(317), 1,
      anon_sym_SLASH,
    ACTIONS(319), 1,
      anon_sym_DOTMOD,
    ACTIONS(321), 1,
      anon_sym_DOTBITAND,
    ACTIONS(323), 1,
      anon_sym_AMP,
    ACTIONS(329), 1,
      anon_sym_DOTBITOR,
    ACTIONS(331), 1,
      anon_sym_PIPE,
    ACTIONS(313), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(325), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(327), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(423), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(425), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DOTMOD,
      anon_sym_DOTBITAND,
      anon_sym_DOTBITXOR,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
      anon_sym_DOTBITOR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(429), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DOTMOD,
      anon_sym_DOTBITAND,
      anon_sym_DOTBITXOR,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
      anon_sym_DOTBITOR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(433), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DOTMOD,
      anon_sym_DOTBITAND,
      anon_sym_DOTBITXOR,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
      anon_sym_DOTBITOR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(437), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DOTMOD,
      anon_sym_DOTBITAND,
      anon_sym_DOTBITXOR,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
      anon_sym_DOTBITOR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(441), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DOTMOD,
      anon_sym_DOTBITAND,
      anon_sym_DOTBITXOR,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
      anon_sym_DOTBITOR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
      anon_sym_DOTXOR,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [4006] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_PLUS,
    ACTIONS(307), 1,
      anon_sym_DASH,
    ACTIONS(309), 1,
      anon_sym_LT,
    ACTIONS(311), 1,
      anon_sym_GT,
    ACTIONS(315), 1,
      anon_sym_STAR,
    ACTIONS(317), 1,
      anon_sym_SLASH,
    ACTIONS(319), 1,
      anon_sym_DOTMOD,
    ACTIONS(321), 1,
      anon_sym_DOTBITAND,
    ACTIONS(323), 1,
      anon_sym_AMP,
    ACTIONS(329), 1,
      anon_sym_DOTBITOR,
    ACTIONS(331), 1,
      anon_sym_PIPE,
    ACTIONS(333), 1,
      anon_sym_EQ,
    ACTIONS(335), 1,
      anon_sym_LT_GT,
    ACTIONS(337), 1,
      anon_sym_LT_EQ,
    ACTIONS(339), 1,
      anon_sym_GT_EQ,
    ACTIONS(385), 1,
      anon_sym_DOTXOR,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    ACTIONS(313), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(325), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(327), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(383), 2,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
    ACTIONS(387), 2,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [4081] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_PLUS,
    ACTIONS(307), 1,
      anon_sym_DASH,
    ACTIONS(309), 1,
      anon_sym_LT,
    ACTIONS(311), 1,
      anon_sym_GT,
    ACTIONS(315), 1,
      anon_sym_STAR,
    ACTIONS(317), 1,
      anon_sym_SLASH,
    ACTIONS(319), 1,
      anon_sym_DOTMOD,
    ACTIONS(321), 1,
      anon_sym_DOTBITAND,
    ACTIONS(323), 1,
      anon_sym_AMP,
    ACTIONS(329), 1,
      anon_sym_DOTBITOR,
    ACTIONS(331), 1,
      anon_sym_PIPE,
    ACTIONS(333), 1,
      anon_sym_EQ,
    ACTIONS(335), 1,
      anon_sym_LT_GT,
    ACTIONS(337), 1,
      anon_sym_LT_EQ,
    ACTIONS(339), 1,
      anon_sym_GT_EQ,
    ACTIONS(385), 1,
      anon_sym_DOTXOR,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    ACTIONS(313), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(325), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(327), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(383), 2,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
    ACTIONS(387), 2,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [4156] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(451), 1,
      sym_imm_prefix,
    STATE(18), 1,
      sym_operand_16,
    STATE(23), 1,
      sym_operand_8,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
  [4201] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(451), 1,
      sym_imm_prefix,
    STATE(42), 1,
      sym_operand_8,
    STATE(43), 1,
      sym_operand_16,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
  [4243] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(451), 1,
      sym_imm_prefix,
    STATE(26), 1,
      sym_operand_16,
    STATE(27), 1,
      sym_operand_8,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
  [4285] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_operand_16,
    STATE(23), 1,
      sym_operand_8,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
  [4327] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(451), 1,
      sym_imm_prefix,
    STATE(21), 1,
      sym_operand_16,
    STATE(23), 1,
      sym_operand_8,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
  [4369] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(453), 1,
      sym_acc_register,
    STATE(21), 1,
      sym_operand_16,
    STATE(23), 1,
      sym_operand_8,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
  [4411] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(455), 1,
      sym_symbol,
    STATE(23), 1,
      sym_operand_8,
    STATE(43), 1,
      sym_operand_16,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
  [4450] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    STATE(21), 1,
      sym_operand_16,
    STATE(23), 1,
      sym_operand_8,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
  [4489] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    ACTIONS(455), 1,
      sym_symbol,
    STATE(27), 1,
      sym_operand_8,
    STATE(43), 1,
      sym_operand_16,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
  [4528] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(30), 2,
      sym_operand_8,
      sym_operand_16,
  [4565] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    STATE(42), 1,
      sym_operand_8,
    STATE(43), 1,
      sym_operand_16,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
  [4604] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      sym_dec_8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_h,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(283), 1,
      sym_dec_16,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(25), 2,
      sym_operand_8,
      sym_operand_16,
  [4641] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(457), 1,
      anon_sym_PERCENT,
    ACTIONS(459), 1,
      anon_sym_DOLLAR,
    ACTIONS(461), 1,
      anon_sym_h,
    STATE(129), 1,
      sym_operand_8,
    ACTIONS(275), 2,
      sym_symbol,
      sym_dec_8,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
  [4668] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_symbol,
    ACTIONS(463), 1,
      anon_sym_LPAREN,
    ACTIONS(465), 1,
      anon_sym_PERCENT,
    ACTIONS(467), 1,
      anon_sym_DOLLAR,
    ACTIONS(469), 1,
      anon_sym_h,
    ACTIONS(471), 1,
      sym_dec_16,
    STATE(43), 1,
      sym_operand_16,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
  [4697] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      aux_sym_hex_8_token2,
    ACTIONS(457), 1,
      anon_sym_PERCENT,
    ACTIONS(459), 1,
      anon_sym_DOLLAR,
    ACTIONS(461), 1,
      anon_sym_h,
    STATE(35), 1,
      sym_operand_8,
    ACTIONS(275), 2,
      sym_symbol,
      sym_dec_8,
    STATE(2), 2,
      sym_bin_8,
      sym_hex_8,
  [4724] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_symbol,
    ACTIONS(465), 1,
      anon_sym_PERCENT,
    ACTIONS(467), 1,
      anon_sym_DOLLAR,
    ACTIONS(469), 1,
      anon_sym_h,
    ACTIONS(471), 1,
      sym_dec_16,
    STATE(17), 1,
      sym_operand_16,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
  [4750] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_symbol,
    ACTIONS(465), 1,
      anon_sym_PERCENT,
    ACTIONS(467), 1,
      anon_sym_DOLLAR,
    ACTIONS(469), 1,
      anon_sym_h,
    ACTIONS(471), 1,
      sym_dec_16,
    STATE(43), 1,
      sym_operand_16,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
  [4776] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_symbol,
    ACTIONS(465), 1,
      anon_sym_PERCENT,
    ACTIONS(467), 1,
      anon_sym_DOLLAR,
    ACTIONS(469), 1,
      anon_sym_h,
    ACTIONS(471), 1,
      sym_dec_16,
    STATE(41), 1,
      sym_operand_16,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
  [4802] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_symbol,
    ACTIONS(465), 1,
      anon_sym_PERCENT,
    ACTIONS(467), 1,
      anon_sym_DOLLAR,
    ACTIONS(469), 1,
      anon_sym_h,
    ACTIONS(471), 1,
      sym_dec_16,
    STATE(22), 1,
      sym_operand_16,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
  [4828] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_symbol,
    ACTIONS(465), 1,
      anon_sym_PERCENT,
    ACTIONS(467), 1,
      anon_sym_DOLLAR,
    ACTIONS(469), 1,
      anon_sym_h,
    ACTIONS(471), 1,
      sym_dec_16,
    STATE(138), 1,
      sym_operand_16,
    STATE(7), 2,
      sym_bin_16,
      sym_hex_16,
  [4854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 4,
      sym_warning_keyword,
      sym_error_keyword,
      sym_ldwarning_keyword,
      sym_lderror_keyword,
  [4864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      sym_string,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [4875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(20), 1,
      sym_string,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [4886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(40), 1,
      sym_string,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [4897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      aux_sym_bin_8_token1,
    ACTIONS(479), 1,
      aux_sym_bin_16_token1,
  [4907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym_x_register,
    ACTIONS(483), 1,
      sym_y_register,
  [4917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
  [4927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      aux_sym_hex_8_token1,
    ACTIONS(491), 1,
      aux_sym_hex_16_token1,
  [4937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      aux_sym_bin_16_token1,
  [4944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_COMMA,
  [4951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_x_register,
  [4958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_COMMA,
  [4965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      ts_builtin_sym_end,
  [4972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_y_register,
  [4979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym_y_register,
  [4986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
  [4993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
  [5000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym_y_register,
  [5007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym_x_register,
  [5014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym_x_register,
  [5021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      aux_sym_hex_8_token1,
  [5028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      aux_sym_bin_8_token1,
  [5035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_hex_16_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(45)] = 0,
  [SMALL_STATE(46)] = 95,
  [SMALL_STATE(47)] = 190,
  [SMALL_STATE(48)] = 285,
  [SMALL_STATE(49)] = 380,
  [SMALL_STATE(50)] = 475,
  [SMALL_STATE(51)] = 570,
  [SMALL_STATE(52)] = 665,
  [SMALL_STATE(53)] = 760,
  [SMALL_STATE(54)] = 855,
  [SMALL_STATE(55)] = 950,
  [SMALL_STATE(56)] = 1045,
  [SMALL_STATE(57)] = 1140,
  [SMALL_STATE(58)] = 1235,
  [SMALL_STATE(59)] = 1330,
  [SMALL_STATE(60)] = 1425,
  [SMALL_STATE(61)] = 1520,
  [SMALL_STATE(62)] = 1615,
  [SMALL_STATE(63)] = 1710,
  [SMALL_STATE(64)] = 1805,
  [SMALL_STATE(65)] = 1900,
  [SMALL_STATE(66)] = 1995,
  [SMALL_STATE(67)] = 2090,
  [SMALL_STATE(68)] = 2185,
  [SMALL_STATE(69)] = 2280,
  [SMALL_STATE(70)] = 2375,
  [SMALL_STATE(71)] = 2470,
  [SMALL_STATE(72)] = 2565,
  [SMALL_STATE(73)] = 2660,
  [SMALL_STATE(74)] = 2696,
  [SMALL_STATE(75)] = 2766,
  [SMALL_STATE(76)] = 2826,
  [SMALL_STATE(77)] = 2886,
  [SMALL_STATE(78)] = 2938,
  [SMALL_STATE(79)] = 2998,
  [SMALL_STATE(80)] = 3034,
  [SMALL_STATE(81)] = 3070,
  [SMALL_STATE(82)] = 3106,
  [SMALL_STATE(83)] = 3142,
  [SMALL_STATE(84)] = 3178,
  [SMALL_STATE(85)] = 3214,
  [SMALL_STATE(86)] = 3290,
  [SMALL_STATE(87)] = 3342,
  [SMALL_STATE(88)] = 3402,
  [SMALL_STATE(89)] = 3438,
  [SMALL_STATE(90)] = 3498,
  [SMALL_STATE(91)] = 3550,
  [SMALL_STATE(92)] = 3620,
  [SMALL_STATE(93)] = 3694,
  [SMALL_STATE(94)] = 3730,
  [SMALL_STATE(95)] = 3766,
  [SMALL_STATE(96)] = 3826,
  [SMALL_STATE(97)] = 3862,
  [SMALL_STATE(98)] = 3898,
  [SMALL_STATE(99)] = 3934,
  [SMALL_STATE(100)] = 3970,
  [SMALL_STATE(101)] = 4006,
  [SMALL_STATE(102)] = 4081,
  [SMALL_STATE(103)] = 4156,
  [SMALL_STATE(104)] = 4201,
  [SMALL_STATE(105)] = 4243,
  [SMALL_STATE(106)] = 4285,
  [SMALL_STATE(107)] = 4327,
  [SMALL_STATE(108)] = 4369,
  [SMALL_STATE(109)] = 4411,
  [SMALL_STATE(110)] = 4450,
  [SMALL_STATE(111)] = 4489,
  [SMALL_STATE(112)] = 4528,
  [SMALL_STATE(113)] = 4565,
  [SMALL_STATE(114)] = 4604,
  [SMALL_STATE(115)] = 4641,
  [SMALL_STATE(116)] = 4668,
  [SMALL_STATE(117)] = 4697,
  [SMALL_STATE(118)] = 4724,
  [SMALL_STATE(119)] = 4750,
  [SMALL_STATE(120)] = 4776,
  [SMALL_STATE(121)] = 4802,
  [SMALL_STATE(122)] = 4828,
  [SMALL_STATE(123)] = 4854,
  [SMALL_STATE(124)] = 4864,
  [SMALL_STATE(125)] = 4875,
  [SMALL_STATE(126)] = 4886,
  [SMALL_STATE(127)] = 4897,
  [SMALL_STATE(128)] = 4907,
  [SMALL_STATE(129)] = 4917,
  [SMALL_STATE(130)] = 4927,
  [SMALL_STATE(131)] = 4937,
  [SMALL_STATE(132)] = 4944,
  [SMALL_STATE(133)] = 4951,
  [SMALL_STATE(134)] = 4958,
  [SMALL_STATE(135)] = 4965,
  [SMALL_STATE(136)] = 4972,
  [SMALL_STATE(137)] = 4979,
  [SMALL_STATE(138)] = 4986,
  [SMALL_STATE(139)] = 4993,
  [SMALL_STATE(140)] = 5000,
  [SMALL_STATE(141)] = 5007,
  [SMALL_STATE(142)] = 5014,
  [SMALL_STATE(143)] = 5021,
  [SMALL_STATE(144)] = 5028,
  [SMALL_STATE(145)] = 5035,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca65, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_8, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_8, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_8, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_8, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_16, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_16, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_8, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_8, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_8, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_8, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_16, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_16, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_16, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_16, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_operand_8, 1), REDUCE(sym_operand_16, 1),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_operand_8, 1), REDUCE(sym_operand_16, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca65, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(11),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(103),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(108),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(120),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(113),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(29),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(104),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(110),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(116),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(119),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(105),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(107),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(106),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(111),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(109),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(34),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(118),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(114),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(124),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(47),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asciiz_ctrl_cmd_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_asciiz_ctrl_cmd_repeat1, 2), SHIFT_REPEAT(125),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asciiz_ctrl_cmd_repeat1, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addr_ctrl_cmd_repeat1, 2),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addr_ctrl_cmd_repeat1, 2), SHIFT_REPEAT(121),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_addr_ctrl_cmd_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asciiz_ctrl_cmd, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asciiz_ctrl_cmd, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr_ctrl_cmd, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr_ctrl_cmd, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asciiz_ctrl_cmd, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asciiz_ctrl_cmd, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr_ctrl_cmd, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr_ctrl_cmd, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_addr_inst, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_addr_inst, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_addr_inst, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_addr_inst, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_align_ctrl_cmd, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_align_ctrl_cmd, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inst, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_impl_addr_inst, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_impl_addr_inst, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_align_ctrl_cmd, 4),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_align_ctrl_cmd, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_x_addr_inst, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_x_addr_inst, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_x_addr_inst, 4),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_x_addr_inst, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_y_addr_inst, 4),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_y_addr_inst, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_cmd, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_cmd, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_addr_inst, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_addr_inst, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_addr_inst, 4),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_addr_inst, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_y_addr_inst, 6),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_y_addr_inst, 6),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acc_addr_inst, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_acc_addr_inst, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_y_addr_inst, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_y_addr_inst, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_ctrl_cmd, 6),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_ctrl_cmd, 6),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_addr_inst, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rel_addr_inst, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_x_addr_inst, 6),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_x_addr_inst, 6),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_l_exp, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_l_exp, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_and_exp, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gt_cmp, 3),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gt_cmp, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_cmp, 3),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lt_cmp, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_exp, 3),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_exp, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eq_cmp, 3),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eq_cmp, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_pos_exp, 2),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_pos_exp, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_neg_exp, 2),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_neg_exp, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_not_exp, 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_not_exp, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_lobyte_exp, 2),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_lobyte_exp, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_hibyte_exp, 2),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_hibyte_exp, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_bankbyte_exp, 2),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_bankbyte_exp, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_not_exp, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_exp, 3),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_exp, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_neq_cmp, 3),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_neq_cmp, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_xor_exp, 3),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bit_xor_exp, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gte_cmp, 3),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gte_cmp, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_or_exp, 3),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bit_or_exp, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_xor_exp, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_or_exp, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_exp, 3),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_exp, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div_exp, 3),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div_exp, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lte_cmp, 3),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lte_cmp, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_exp, 3),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod_exp, 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_and_exp, 3),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bit_and_exp, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_r_exp, 3),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_r_exp, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [501] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
