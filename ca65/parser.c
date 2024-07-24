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
#define STATE_COUNT 161
#define LARGE_STATE_COUNT 83
#define SYMBOL_COUNT 191
#define ALIAS_COUNT 0
#define TOKEN_COUNT 127
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
  aux_sym_autoimport_ctrl_cmd_token1 = 118,
  aux_sym_bankbytes_ctrl_cmd_token1 = 119,
  sym_bss_ctrl_cmd = 120,
  aux_sym_byte_ctrl_cmd_token1 = 121,
  aux_sym_case_ctrl_cmd_token1 = 122,
  sym_warning_keyword = 123,
  sym_error_keyword = 124,
  sym_ldwarning_keyword = 125,
  sym_lderror_keyword = 126,
  sym_ca65 = 127,
  sym_string = 128,
  sym_inst = 129,
  sym_impl_addr_inst = 130,
  sym_acc_addr_inst = 131,
  sym_imm_addr_inst = 132,
  sym_abs_addr_inst = 133,
  sym_zp_addr_inst = 134,
  sym_abs_x_addr_inst = 135,
  sym_abs_y_addr_inst = 136,
  sym_zp_x_addr_inst = 137,
  sym_zp_y_addr_inst = 138,
  sym_ind_addr_inst = 139,
  sym_ind_x_addr_inst = 140,
  sym_ind_y_addr_inst = 141,
  sym_rel_addr_inst = 142,
  sym_operand_8 = 143,
  sym_bin_8 = 144,
  sym_hex_8 = 145,
  sym_operand_16 = 146,
  sym_bin_16 = 147,
  sym_hex_16 = 148,
  sym_expression = 149,
  sym_unary_pos_exp = 150,
  sym_unary_neg_exp = 151,
  sym_unary_not_exp = 152,
  sym_unary_lobyte_exp = 153,
  sym_unary_hibyte_exp = 154,
  sym_unary_bankbyte_exp = 155,
  sym_mult_exp = 156,
  sym_div_exp = 157,
  sym_mod_exp = 158,
  sym_bit_and_exp = 159,
  sym_bit_xor_exp = 160,
  sym_shift_l_exp = 161,
  sym_shift_r_exp = 162,
  sym_add_exp = 163,
  sym_sub_exp = 164,
  sym_bit_or_exp = 165,
  sym_eq_cmp = 166,
  sym_neq_cmp = 167,
  sym_lt_cmp = 168,
  sym_gt_cmp = 169,
  sym_lte_cmp = 170,
  sym_gte_cmp = 171,
  sym_bool_and_exp = 172,
  sym_bool_xor_exp = 173,
  sym_bool_or_exp = 174,
  sym_bool_not_exp = 175,
  sym_ctrl_cmd = 176,
  sym_addr_ctrl_cmd = 177,
  sym_align_ctrl_cmd = 178,
  sym_asciiz_ctrl_cmd = 179,
  sym_assert_ctrl_cmd = 180,
  sym_autoimport_ctrl_cmd = 181,
  sym_bankbytes_ctrl_cmd = 182,
  sym_byte_ctrl_cmd = 183,
  sym_case_ctrl_cmd = 184,
  sym_plus_symbol = 185,
  sym_sub_symbol = 186,
  aux_sym_ca65_repeat1 = 187,
  aux_sym_addr_ctrl_cmd_repeat1 = 188,
  aux_sym_asciiz_ctrl_cmd_repeat1 = 189,
  aux_sym_bankbytes_ctrl_cmd_repeat1 = 190,
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
  [aux_sym_autoimport_ctrl_cmd_token1] = "autoimport_ctrl_cmd_token1",
  [aux_sym_bankbytes_ctrl_cmd_token1] = "bankbytes_ctrl_cmd_token1",
  [sym_bss_ctrl_cmd] = "bss_ctrl_cmd",
  [aux_sym_byte_ctrl_cmd_token1] = "byte_ctrl_cmd_token1",
  [aux_sym_case_ctrl_cmd_token1] = "case_ctrl_cmd_token1",
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
  [sym_autoimport_ctrl_cmd] = "autoimport_ctrl_cmd",
  [sym_bankbytes_ctrl_cmd] = "bankbytes_ctrl_cmd",
  [sym_byte_ctrl_cmd] = "byte_ctrl_cmd",
  [sym_case_ctrl_cmd] = "case_ctrl_cmd",
  [sym_plus_symbol] = "plus_symbol",
  [sym_sub_symbol] = "sub_symbol",
  [aux_sym_ca65_repeat1] = "ca65_repeat1",
  [aux_sym_addr_ctrl_cmd_repeat1] = "addr_ctrl_cmd_repeat1",
  [aux_sym_asciiz_ctrl_cmd_repeat1] = "asciiz_ctrl_cmd_repeat1",
  [aux_sym_bankbytes_ctrl_cmd_repeat1] = "bankbytes_ctrl_cmd_repeat1",
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
  [aux_sym_autoimport_ctrl_cmd_token1] = aux_sym_autoimport_ctrl_cmd_token1,
  [aux_sym_bankbytes_ctrl_cmd_token1] = aux_sym_bankbytes_ctrl_cmd_token1,
  [sym_bss_ctrl_cmd] = sym_bss_ctrl_cmd,
  [aux_sym_byte_ctrl_cmd_token1] = aux_sym_byte_ctrl_cmd_token1,
  [aux_sym_case_ctrl_cmd_token1] = aux_sym_case_ctrl_cmd_token1,
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
  [sym_autoimport_ctrl_cmd] = sym_autoimport_ctrl_cmd,
  [sym_bankbytes_ctrl_cmd] = sym_bankbytes_ctrl_cmd,
  [sym_byte_ctrl_cmd] = sym_byte_ctrl_cmd,
  [sym_case_ctrl_cmd] = sym_case_ctrl_cmd,
  [sym_plus_symbol] = sym_plus_symbol,
  [sym_sub_symbol] = sym_sub_symbol,
  [aux_sym_ca65_repeat1] = aux_sym_ca65_repeat1,
  [aux_sym_addr_ctrl_cmd_repeat1] = aux_sym_addr_ctrl_cmd_repeat1,
  [aux_sym_asciiz_ctrl_cmd_repeat1] = aux_sym_asciiz_ctrl_cmd_repeat1,
  [aux_sym_bankbytes_ctrl_cmd_repeat1] = aux_sym_bankbytes_ctrl_cmd_repeat1,
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
  [aux_sym_autoimport_ctrl_cmd_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bankbytes_ctrl_cmd_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_bss_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_byte_ctrl_cmd_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_ctrl_cmd_token1] = {
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
  [sym_autoimport_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_bankbytes_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_byte_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_case_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_plus_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_symbol] = {
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
  [aux_sym_bankbytes_ctrl_cmd_repeat1] = {
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
  [60] = 28,
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
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(258);
      if (lookahead == '!') ADVANCE(493);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '$') ADVANCE(416);
      if (lookahead == '%') ADVANCE(382);
      if (lookahead == '&') ADVANCE(475);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '*') ADVANCE(471);
      if (lookahead == '+') ADVANCE(459);
      if (lookahead == ',') ADVANCE(270);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(472);
      if (lookahead == '0') ADVANCE(383);
      if (lookahead == '1') ADVANCE(391);
      if (lookahead == '2') ADVANCE(398);
      if (lookahead == '6') ADVANCE(403);
      if (lookahead == ';') ADVANCE(259);
      if (lookahead == '<') ADVANCE(465);
      if (lookahead == '=') ADVANCE(483);
      if (lookahead == '>') ADVANCE(468);
      if (lookahead == '^') ADVANCE(470);
      if (lookahead == 'h') ADVANCE(417);
      if (lookahead == '|') ADVANCE(482);
      if (lookahead == '~') ADVANCE(462);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(134);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(164);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(167);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(143);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(178);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(196);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(153);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(176);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(130);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(264);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(265);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(413);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(415);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(493);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '$') ADVANCE(416);
      if (lookahead == '%') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == '+') ADVANCE(459);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '0') ADVANCE(397);
      if (lookahead == '1') ADVANCE(406);
      if (lookahead == '2') ADVANCE(401);
      if (lookahead == '6') ADVANCE(402);
      if (lookahead == ';') ADVANCE(259);
      if (lookahead == '<') ADVANCE(464);
      if (lookahead == '>') ADVANCE(467);
      if (lookahead == '^') ADVANCE(470);
      if (lookahead == 'h') ADVANCE(418);
      if (lookahead == '~') ADVANCE(462);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(408);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(260);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(416);
      if (lookahead == '%') ADVANCE(382);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == '0') ADVANCE(444);
      if (lookahead == '6') ADVANCE(447);
      if (lookahead == ';') ADVANCE(259);
      if (lookahead == 'h') ADVANCE(418);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(452);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(416);
      if (lookahead == '%') ADVANCE(382);
      if (lookahead == '0') ADVANCE(397);
      if (lookahead == '1') ADVANCE(406);
      if (lookahead == '2') ADVANCE(401);
      if (lookahead == '6') ADVANCE(402);
      if (lookahead == ';') ADVANCE(259);
      if (lookahead == 'h') ADVANCE(418);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(408);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(420);
      if (lookahead == ';') ADVANCE(259);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(424);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(11);
      if (lookahead == ';') ADVANCE(259);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(454);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(457);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(19);
      if (lookahead == '1') ADVANCE(226);
      if (lookahead == ';') ADVANCE(259);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(427);
      if (lookahead == '1') ADVANCE(442);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == '1') ADVANCE(253);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(421);
      if (lookahead == ';') ADVANCE(259);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(423);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == '1') ADVANCE(252);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(14);
      if (lookahead == '1') ADVANCE(250);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == '1') ADVANCE(247);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == '1') ADVANCE(243);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(17);
      if (lookahead == '1') ADVANCE(238);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(18);
      if (lookahead == '1') ADVANCE(232);
      END_STATE();
    case 20:
      if (lookahead == '1') ADVANCE(22);
      if (lookahead == '8') ADVANCE(495);
      if (lookahead == 'N') ADVANCE(83);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(142);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 21:
      if (lookahead == '1') ADVANCE(22);
      if (lookahead == '8') ADVANCE(495);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(142);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 22:
      if (lookahead == '6') ADVANCE(494);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(329);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(331);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(341);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(345);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(365);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(367);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(277);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(293);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(297);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(299);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(301);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(311);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(313);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(319);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(321);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(359);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(361);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(353);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(349);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(307);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(371);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(20);
      if (lookahead == 'B') ADVANCE(75);
      if (lookahead == 'H') ADVANCE(90);
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead == 'M') ADVANCE(98);
      if (lookahead == 'N') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(103);
      if (lookahead == 'S') ADVANCE(89);
      if (lookahead == 'X') ADVANCE(97);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'b') ADVANCE(205);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(20);
      if (lookahead == 'B') ADVANCE(91);
      if (lookahead == 'M') ADVANCE(98);
      if (lookahead == 'O') ADVANCE(103);
      if (lookahead == 'S') ADVANCE(89);
      if (lookahead == 'X') ADVANCE(97);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'b') ADVANCE(129);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(94);
      if (lookahead == 'I') ADVANCE(107);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(203);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(208);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(94);
      if (lookahead == 'I') ADVANCE(113);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == 'N') ADVANCE(101);
      if (lookahead == 'O') ADVANCE(105);
      if (lookahead == 'X') ADVANCE(100);
      END_STATE();
    case 78:
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(105);
      if (lookahead == 'X') ADVANCE(100);
      END_STATE();
    case 79:
      if (lookahead == 'B') ADVANCE(115);
      END_STATE();
    case 80:
      if (lookahead == 'B') ADVANCE(76);
      if (lookahead == 'H') ADVANCE(90);
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead == 'N') ADVANCE(99);
      END_STATE();
    case 81:
      if (lookahead == 'B') ADVANCE(116);
      END_STATE();
    case 82:
      if (lookahead == 'B') ADVANCE(117);
      END_STATE();
    case 83:
      if (lookahead == 'D') ADVANCE(487);
      END_STATE();
    case 84:
      if (lookahead == 'D') ADVANCE(473);
      END_STATE();
    case 85:
      if (lookahead == 'D') ADVANCE(474);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(466);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(463);
      END_STATE();
    case 88:
      if (lookahead == 'E') ADVANCE(469);
      END_STATE();
    case 89:
      if (lookahead == 'H') ADVANCE(93);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(79);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(111);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(203);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(208);
      END_STATE();
    case 92:
      if (lookahead == 'K') ADVANCE(82);
      END_STATE();
    case 93:
      if (lookahead == 'L') ADVANCE(477);
      if (lookahead == 'R') ADVANCE(479);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(92);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(85);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(101);
      END_STATE();
    case 97:
      if (lookahead == 'O') ADVANCE(104);
      END_STATE();
    case 98:
      if (lookahead == 'O') ADVANCE(84);
      END_STATE();
    case 99:
      if (lookahead == 'O') ADVANCE(108);
      END_STATE();
    case 100:
      if (lookahead == 'O') ADVANCE(106);
      END_STATE();
    case 101:
      if (lookahead == 'O') ADVANCE(110);
      END_STATE();
    case 102:
      if (lookahead == 'O') ADVANCE(81);
      END_STATE();
    case 103:
      if (lookahead == 'R') ADVANCE(490);
      END_STATE();
    case 104:
      if (lookahead == 'R') ADVANCE(489);
      END_STATE();
    case 105:
      if (lookahead == 'R') ADVANCE(481);
      END_STATE();
    case 106:
      if (lookahead == 'R') ADVANCE(476);
      END_STATE();
    case 107:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 108:
      if (lookahead == 'T') ADVANCE(492);
      END_STATE();
    case 109:
      if (lookahead == 'T') ADVANCE(86);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(461);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(78);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(87);
      END_STATE();
    case 113:
      if (lookahead == 'T') ADVANCE(96);
      END_STATE();
    case 114:
      if (lookahead == 'T') ADVANCE(88);
      END_STATE();
    case 115:
      if (lookahead == 'Y') ADVANCE(109);
      END_STATE();
    case 116:
      if (lookahead == 'Y') ADVANCE(112);
      END_STATE();
    case 117:
      if (lookahead == 'Y') ADVANCE(114);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(425);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(328);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(131);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(330);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(338);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(340);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(342);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(344);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(346);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(364);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(366);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(368);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(202);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(215);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(125);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(126);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(203);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(208);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 132:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(140);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(124);
      END_STATE();
    case 133:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(216);
      END_STATE();
    case 134:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(135);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(187);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(207);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(154);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(165);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(136);
      END_STATE();
    case 135:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(276);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(278);
      END_STATE();
    case 136:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(292);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(294);
      END_STATE();
    case 137:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(296);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(298);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(302);
      END_STATE();
    case 138:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(310);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(312);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(314);
      END_STATE();
    case 139:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(318);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(320);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(322);
      END_STATE();
    case 140:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(356);
      END_STATE();
    case 141:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(358);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(360);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(362);
      END_STATE();
    case 142:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(161);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      END_STATE();
    case 143:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      END_STATE();
    case 144:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 150:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(506);
      END_STATE();
    case 151:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(508);
      END_STATE();
    case 152:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(169);
      END_STATE();
    case 153:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(122);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 154:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 155:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(352);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(354);
      END_STATE();
    case 156:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 157:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 158:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 159:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 160:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 161:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 162:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(290);
      END_STATE();
    case 163:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(133);
      END_STATE();
    case 164:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(183);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(213);
      END_STATE();
    case 165:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 166:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(348);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 167:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(184);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(189);
      END_STATE();
    case 168:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 169:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(497);
      END_STATE();
    case 170:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 172:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 173:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 174:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 175:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 176:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(166);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(155);
      END_STATE();
    case 177:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(188);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 178:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 179:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 180:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 181:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 182:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 183:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(304);
      END_STATE();
    case 184:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(324);
      END_STATE();
    case 185:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(336);
      END_STATE();
    case 186:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 187:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(280);
      END_STATE();
    case 188:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 189:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 190:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 191:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(496);
      END_STATE();
    case 192:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(507);
      END_STATE();
    case 193:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(509);
      END_STATE();
    case 194:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 195:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 196:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 197:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 198:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 199:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 200:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 201:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 202:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(378);
      END_STATE();
    case 203:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(502);
      END_STATE();
    case 204:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(501);
      END_STATE();
    case 205:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(203);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(208);
      END_STATE();
    case 206:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      END_STATE();
    case 207:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(282);
      END_STATE();
    case 208:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(504);
      END_STATE();
    case 209:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(499);
      END_STATE();
    case 210:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(500);
      END_STATE();
    case 211:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      END_STATE();
    case 212:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      END_STATE();
    case 213:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(306);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(308);
      END_STATE();
    case 214:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(370);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(372);
      END_STATE();
    case 215:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(374);
      END_STATE();
    case 216:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(212);
      END_STATE();
    case 217:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(498);
      END_STATE();
    case 218:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(435);
      END_STATE();
    case 219:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(218);
      END_STATE();
    case 220:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(219);
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
          lookahead == '1') ADVANCE(428);
      END_STATE();
    case 226:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(224);
      END_STATE();
    case 227:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(225);
      END_STATE();
    case 228:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(227);
      END_STATE();
    case 229:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(228);
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
          lookahead == '1') ADVANCE(231);
      END_STATE();
    case 233:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(436);
      END_STATE();
    case 234:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(233);
      END_STATE();
    case 235:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(234);
      END_STATE();
    case 236:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(235);
      END_STATE();
    case 237:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(236);
      END_STATE();
    case 238:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(237);
      END_STATE();
    case 239:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(437);
      END_STATE();
    case 240:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(239);
      END_STATE();
    case 241:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(240);
      END_STATE();
    case 242:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(241);
      END_STATE();
    case 243:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(242);
      END_STATE();
    case 244:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(438);
      END_STATE();
    case 245:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(244);
      END_STATE();
    case 246:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(245);
      END_STATE();
    case 247:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(246);
      END_STATE();
    case 248:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(439);
      END_STATE();
    case 249:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(248);
      END_STATE();
    case 250:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(249);
      END_STATE();
    case 251:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(440);
      END_STATE();
    case 252:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(251);
      END_STATE();
    case 253:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(441);
      END_STATE();
    case 254:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(456);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(455);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 257:
      if (eof) ADVANCE(258);
      if (lookahead == '&') ADVANCE(475);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '*') ADVANCE(471);
      if (lookahead == '+') ADVANCE(459);
      if (lookahead == ',') ADVANCE(270);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(472);
      if (lookahead == '0') ADVANCE(384);
      if (lookahead == '1') ADVANCE(396);
      if (lookahead == ';') ADVANCE(259);
      if (lookahead == '<') ADVANCE(465);
      if (lookahead == '=') ADVANCE(483);
      if (lookahead == '>') ADVANCE(468);
      if (lookahead == '^') ADVANCE(470);
      if (lookahead == '|') ADVANCE(482);
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
          lookahead == ' ') SKIP(257)
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_acc_register);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_acc_register);
      if (lookahead == 'h') ADVANCE(269);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(118);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_x_register);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_y_register);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(269);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(118);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(269);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_symbol);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_adc_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_and_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_asl_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_bcc_opcode);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_bcc_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_bcs_opcode);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_bcs_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_beq_opcode);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_beq_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_bit_opcode);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_bit_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_bmi_opcode);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_bmi_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_bne_opcode);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_bne_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_bpl_opcode);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_bpl_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_brk_opcode);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_brk_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_bvc_opcode);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_bvc_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_bvs_opcode);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_bvs_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_clc_opcode);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_clc_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_cld_opcode);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_cld_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_cli_opcode);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_cli_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_clv_opcode);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_clv_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_cmp_opcode);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_cmp_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_cpx_opcode);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_cpx_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_cpy_opcode);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_cpy_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_dec_opcode);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_dec_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_dex_opcode);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_dex_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_dey_opcode);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_dey_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_eor_opcode);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_eor_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_inc_opcode);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_inc_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_inx_opcode);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_inx_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_iny_opcode);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_iny_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_jmp_opcode);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_jmp_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_jsr_opcode);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_jsr_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_lda_opcode);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_lda_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ldx_opcode);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ldx_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ldy_opcode);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ldy_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_lsr_opcode);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_lsr_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_nop_opcode);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_nop_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ora_opcode);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ora_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_pha_opcode);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_pha_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_php_opcode);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_php_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_pla_opcode);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_pla_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_plp_opcode);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_plp_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_rol_opcode);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_rol_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ror_opcode);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ror_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_rti_opcode);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_rti_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_rts_opcode);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_rts_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_sbc_opcode);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_sbc_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_sec_opcode);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_sec_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_sed_opcode);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_sed_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_sei_opcode);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_sei_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_sta_opcode);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_sta_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_stx_opcode);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_stx_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_sty_opcode);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_sty_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_tax_opcode);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_tax_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_tay_opcode);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_tay_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_tsx_opcode);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_tsx_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_txa_opcode);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_txa_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_tcs_opcode);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_tcs_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_tya_opcode);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_tya_opcode);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0') ADVANCE(383);
      if (lookahead == '1') ADVANCE(391);
      if (lookahead == '2') ADVANCE(398);
      if (lookahead == '6') ADVANCE(403);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(413);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(415);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0') ADVANCE(384);
      if (lookahead == '1') ADVANCE(396);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(393);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(393);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(443);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(435);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(390);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(414);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(387);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(386);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(388);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(415);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(389);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(392);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(385);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(394);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(395);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '0') ADVANCE(397);
      if (lookahead == '1') ADVANCE(406);
      if (lookahead == '2') ADVANCE(401);
      if (lookahead == '6') ADVANCE(402);
      if (lookahead == 'h') ADVANCE(425);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(408);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(411);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(415);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(445);
      if (lookahead == 'h') ADVANCE(425);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(451);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(445);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(451);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(404);
      if (lookahead == 'h') ADVANCE(425);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(399);
      if (lookahead == 'h') ADVANCE(425);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(400);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(412);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(425);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(414);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_dec_8);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(414);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_h);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (lookahead == '0') ADVANCE(420);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(424);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (lookahead == '0') ADVANCE(421);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(423);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(456);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(419);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(422);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_hex_8_token2);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0') ADVANCE(427);
      if (lookahead == '1') ADVANCE(442);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(435);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(426);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(429);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(430);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(431);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(432);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(433);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(434);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(428);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(436);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(437);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(438);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(439);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(440);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(441);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_dec_16);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '0') ADVANCE(444);
      if (lookahead == '6') ADVANCE(447);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(452);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '3') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(450);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(443);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '5') ADVANCE(445);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(451);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '5') ADVANCE(446);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(449);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(443);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (lookahead == '0') ADVANCE(454);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(457);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(456);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(453);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(455);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_imm_prefix);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_DOTBITNOT);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_DOTLOBYTE);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(478);
      if (lookahead == '=') ADVANCE(485);
      if (lookahead == '>') ADVANCE(484);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_DOTHIBYTE);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(486);
      if (lookahead == '>') ADVANCE(480);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_DOTBANKBYTE);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_DOTMOD);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_DOTBITAND);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(488);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_DOTBITXOR);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_DOTSHL);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_DOTSHR);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_DOTBITOR);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(491);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_DOTAND);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_DOTXOR);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_DOTOR);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_DOTNOT);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_a16_ctrl_cmd);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_a8_ctrl_cmd);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_addr_ctrl_cmd_token1);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_align_ctrl_cmd_token1);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_asciiz_ctrl_cmd_token1);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_assert_ctrl_cmd_token1);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_autoimport_ctrl_cmd_token1);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_bankbytes_ctrl_cmd_token1);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_bss_ctrl_cmd);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_byte_ctrl_cmd_token1);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_byte_ctrl_cmd_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_case_ctrl_cmd_token1);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_warning_keyword);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_error_keyword);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_ldwarning_keyword);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_lderror_keyword);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 257},
  [2] = {.lex_state = 257},
  [3] = {.lex_state = 257},
  [4] = {.lex_state = 257},
  [5] = {.lex_state = 257},
  [6] = {.lex_state = 257},
  [7] = {.lex_state = 257},
  [8] = {.lex_state = 257},
  [9] = {.lex_state = 257},
  [10] = {.lex_state = 257},
  [11] = {.lex_state = 257},
  [12] = {.lex_state = 257},
  [13] = {.lex_state = 257},
  [14] = {.lex_state = 257},
  [15] = {.lex_state = 257},
  [16] = {.lex_state = 257},
  [17] = {.lex_state = 257},
  [18] = {.lex_state = 257},
  [19] = {.lex_state = 257},
  [20] = {.lex_state = 257},
  [21] = {.lex_state = 257},
  [22] = {.lex_state = 257},
  [23] = {.lex_state = 257},
  [24] = {.lex_state = 257},
  [25] = {.lex_state = 257},
  [26] = {.lex_state = 257},
  [27] = {.lex_state = 257},
  [28] = {.lex_state = 257},
  [29] = {.lex_state = 257},
  [30] = {.lex_state = 257},
  [31] = {.lex_state = 257},
  [32] = {.lex_state = 257},
  [33] = {.lex_state = 257},
  [34] = {.lex_state = 257},
  [35] = {.lex_state = 257},
  [36] = {.lex_state = 257},
  [37] = {.lex_state = 257},
  [38] = {.lex_state = 257},
  [39] = {.lex_state = 257},
  [40] = {.lex_state = 257},
  [41] = {.lex_state = 257},
  [42] = {.lex_state = 257},
  [43] = {.lex_state = 257},
  [44] = {.lex_state = 257},
  [45] = {.lex_state = 257},
  [46] = {.lex_state = 257},
  [47] = {.lex_state = 257},
  [48] = {.lex_state = 257},
  [49] = {.lex_state = 257},
  [50] = {.lex_state = 257},
  [51] = {.lex_state = 257},
  [52] = {.lex_state = 257},
  [53] = {.lex_state = 257},
  [54] = {.lex_state = 257},
  [55] = {.lex_state = 257},
  [56] = {.lex_state = 257},
  [57] = {.lex_state = 257},
  [58] = {.lex_state = 257},
  [59] = {.lex_state = 257},
  [60] = {.lex_state = 257},
  [61] = {.lex_state = 257},
  [62] = {.lex_state = 257},
  [63] = {.lex_state = 257},
  [64] = {.lex_state = 257},
  [65] = {.lex_state = 257},
  [66] = {.lex_state = 257},
  [67] = {.lex_state = 257},
  [68] = {.lex_state = 257},
  [69] = {.lex_state = 257},
  [70] = {.lex_state = 257},
  [71] = {.lex_state = 257},
  [72] = {.lex_state = 257},
  [73] = {.lex_state = 257},
  [74] = {.lex_state = 257},
  [75] = {.lex_state = 257},
  [76] = {.lex_state = 257},
  [77] = {.lex_state = 257},
  [78] = {.lex_state = 257},
  [79] = {.lex_state = 257},
  [80] = {.lex_state = 257},
  [81] = {.lex_state = 257},
  [82] = {.lex_state = 257},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 257},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 13},
  [158] = {.lex_state = 257},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 9},
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
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(1),
    [sym_bss_ctrl_cmd] = ACTIONS(1),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(1),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(1),
    [sym_warning_keyword] = ACTIONS(1),
    [sym_error_keyword] = ACTIONS(1),
    [sym_ldwarning_keyword] = ACTIONS(1),
    [sym_lderror_keyword] = ACTIONS(1),
  },
  [1] = {
    [sym_ca65] = STATE(150),
    [sym_inst] = STATE(42),
    [sym_impl_addr_inst] = STATE(80),
    [sym_acc_addr_inst] = STATE(80),
    [sym_imm_addr_inst] = STATE(80),
    [sym_abs_addr_inst] = STATE(80),
    [sym_zp_addr_inst] = STATE(80),
    [sym_abs_x_addr_inst] = STATE(80),
    [sym_abs_y_addr_inst] = STATE(80),
    [sym_zp_x_addr_inst] = STATE(80),
    [sym_zp_y_addr_inst] = STATE(80),
    [sym_ind_addr_inst] = STATE(80),
    [sym_ind_x_addr_inst] = STATE(80),
    [sym_ind_y_addr_inst] = STATE(80),
    [sym_rel_addr_inst] = STATE(80),
    [sym_ctrl_cmd] = STATE(42),
    [sym_addr_ctrl_cmd] = STATE(82),
    [sym_align_ctrl_cmd] = STATE(82),
    [sym_asciiz_ctrl_cmd] = STATE(82),
    [sym_assert_ctrl_cmd] = STATE(82),
    [sym_autoimport_ctrl_cmd] = STATE(82),
    [sym_bankbytes_ctrl_cmd] = STATE(82),
    [sym_byte_ctrl_cmd] = STATE(82),
    [sym_case_ctrl_cmd] = STATE(82),
    [aux_sym_ca65_repeat1] = STATE(42),
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
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(47),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(49),
    [sym_bss_ctrl_cmd] = ACTIONS(37),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(51),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(53),
  },
  [2] = {
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
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(55),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(55),
    [sym_bss_ctrl_cmd] = ACTIONS(55),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(55),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(55),
  },
  [3] = {
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
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(59),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(59),
    [sym_bss_ctrl_cmd] = ACTIONS(59),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(59),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(59),
  },
  [4] = {
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
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_DOTMOD] = ACTIONS(77),
    [anon_sym_DOTBITAND] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_DOTBITXOR] = ACTIONS(71),
    [anon_sym_DOTSHL] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_DOTSHR] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_DOTBITOR] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
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
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(63),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(63),
    [sym_bss_ctrl_cmd] = ACTIONS(63),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(63),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(63),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [sym_adc_opcode] = ACTIONS(93),
    [sym_and_opcode] = ACTIONS(93),
    [sym_asl_opcode] = ACTIONS(93),
    [sym_bcc_opcode] = ACTIONS(93),
    [sym_bcs_opcode] = ACTIONS(93),
    [sym_beq_opcode] = ACTIONS(93),
    [sym_bit_opcode] = ACTIONS(93),
    [sym_bmi_opcode] = ACTIONS(93),
    [sym_bne_opcode] = ACTIONS(93),
    [sym_bpl_opcode] = ACTIONS(93),
    [sym_brk_opcode] = ACTIONS(93),
    [sym_bvc_opcode] = ACTIONS(93),
    [sym_bvs_opcode] = ACTIONS(93),
    [sym_clc_opcode] = ACTIONS(93),
    [sym_cld_opcode] = ACTIONS(93),
    [sym_cli_opcode] = ACTIONS(93),
    [sym_clv_opcode] = ACTIONS(93),
    [sym_cmp_opcode] = ACTIONS(93),
    [sym_cpx_opcode] = ACTIONS(93),
    [sym_cpy_opcode] = ACTIONS(93),
    [sym_dec_opcode] = ACTIONS(93),
    [sym_dex_opcode] = ACTIONS(93),
    [sym_dey_opcode] = ACTIONS(93),
    [sym_eor_opcode] = ACTIONS(93),
    [sym_inc_opcode] = ACTIONS(93),
    [sym_inx_opcode] = ACTIONS(93),
    [sym_iny_opcode] = ACTIONS(93),
    [sym_jmp_opcode] = ACTIONS(93),
    [sym_jsr_opcode] = ACTIONS(93),
    [sym_lda_opcode] = ACTIONS(93),
    [sym_ldx_opcode] = ACTIONS(93),
    [sym_ldy_opcode] = ACTIONS(93),
    [sym_lsr_opcode] = ACTIONS(93),
    [sym_nop_opcode] = ACTIONS(93),
    [sym_ora_opcode] = ACTIONS(93),
    [sym_pha_opcode] = ACTIONS(93),
    [sym_php_opcode] = ACTIONS(93),
    [sym_pla_opcode] = ACTIONS(93),
    [sym_plp_opcode] = ACTIONS(93),
    [sym_rol_opcode] = ACTIONS(93),
    [sym_ror_opcode] = ACTIONS(93),
    [sym_rti_opcode] = ACTIONS(93),
    [sym_rts_opcode] = ACTIONS(93),
    [sym_sbc_opcode] = ACTIONS(93),
    [sym_sec_opcode] = ACTIONS(93),
    [sym_sed_opcode] = ACTIONS(93),
    [sym_sei_opcode] = ACTIONS(93),
    [sym_sta_opcode] = ACTIONS(93),
    [sym_stx_opcode] = ACTIONS(93),
    [sym_sty_opcode] = ACTIONS(93),
    [sym_tax_opcode] = ACTIONS(93),
    [sym_tay_opcode] = ACTIONS(93),
    [sym_tsx_opcode] = ACTIONS(93),
    [sym_txa_opcode] = ACTIONS(93),
    [sym_tcs_opcode] = ACTIONS(93),
    [sym_tya_opcode] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_DOTMOD] = ACTIONS(77),
    [anon_sym_DOTBITAND] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_DOTBITXOR] = ACTIONS(71),
    [anon_sym_DOTSHL] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_DOTSHR] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_DOTBITOR] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(91),
    [anon_sym_LT_GT] = ACTIONS(91),
    [anon_sym_LT_EQ] = ACTIONS(91),
    [anon_sym_GT_EQ] = ACTIONS(91),
    [anon_sym_DOTAND] = ACTIONS(91),
    [anon_sym_AMP_AMP] = ACTIONS(91),
    [anon_sym_DOTXOR] = ACTIONS(91),
    [anon_sym_DOTOR] = ACTIONS(91),
    [anon_sym_PIPE_PIPE] = ACTIONS(91),
    [sym_a16_ctrl_cmd] = ACTIONS(91),
    [sym_a8_ctrl_cmd] = ACTIONS(91),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(91),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(91),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(91),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(91),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(91),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(91),
    [sym_bss_ctrl_cmd] = ACTIONS(91),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(91),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(91),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [sym_adc_opcode] = ACTIONS(97),
    [sym_and_opcode] = ACTIONS(97),
    [sym_asl_opcode] = ACTIONS(97),
    [sym_bcc_opcode] = ACTIONS(97),
    [sym_bcs_opcode] = ACTIONS(97),
    [sym_beq_opcode] = ACTIONS(97),
    [sym_bit_opcode] = ACTIONS(97),
    [sym_bmi_opcode] = ACTIONS(97),
    [sym_bne_opcode] = ACTIONS(97),
    [sym_bpl_opcode] = ACTIONS(97),
    [sym_brk_opcode] = ACTIONS(97),
    [sym_bvc_opcode] = ACTIONS(97),
    [sym_bvs_opcode] = ACTIONS(97),
    [sym_clc_opcode] = ACTIONS(97),
    [sym_cld_opcode] = ACTIONS(97),
    [sym_cli_opcode] = ACTIONS(97),
    [sym_clv_opcode] = ACTIONS(97),
    [sym_cmp_opcode] = ACTIONS(97),
    [sym_cpx_opcode] = ACTIONS(97),
    [sym_cpy_opcode] = ACTIONS(97),
    [sym_dec_opcode] = ACTIONS(97),
    [sym_dex_opcode] = ACTIONS(97),
    [sym_dey_opcode] = ACTIONS(97),
    [sym_eor_opcode] = ACTIONS(97),
    [sym_inc_opcode] = ACTIONS(97),
    [sym_inx_opcode] = ACTIONS(97),
    [sym_iny_opcode] = ACTIONS(97),
    [sym_jmp_opcode] = ACTIONS(97),
    [sym_jsr_opcode] = ACTIONS(97),
    [sym_lda_opcode] = ACTIONS(97),
    [sym_ldx_opcode] = ACTIONS(97),
    [sym_ldy_opcode] = ACTIONS(97),
    [sym_lsr_opcode] = ACTIONS(97),
    [sym_nop_opcode] = ACTIONS(97),
    [sym_ora_opcode] = ACTIONS(97),
    [sym_pha_opcode] = ACTIONS(97),
    [sym_php_opcode] = ACTIONS(97),
    [sym_pla_opcode] = ACTIONS(97),
    [sym_plp_opcode] = ACTIONS(97),
    [sym_rol_opcode] = ACTIONS(97),
    [sym_ror_opcode] = ACTIONS(97),
    [sym_rti_opcode] = ACTIONS(97),
    [sym_rts_opcode] = ACTIONS(97),
    [sym_sbc_opcode] = ACTIONS(97),
    [sym_sec_opcode] = ACTIONS(97),
    [sym_sed_opcode] = ACTIONS(97),
    [sym_sei_opcode] = ACTIONS(97),
    [sym_sta_opcode] = ACTIONS(97),
    [sym_stx_opcode] = ACTIONS(97),
    [sym_sty_opcode] = ACTIONS(97),
    [sym_tax_opcode] = ACTIONS(97),
    [sym_tay_opcode] = ACTIONS(97),
    [sym_tsx_opcode] = ACTIONS(97),
    [sym_txa_opcode] = ACTIONS(97),
    [sym_tcs_opcode] = ACTIONS(97),
    [sym_tya_opcode] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(95),
    [anon_sym_SLASH] = ACTIONS(95),
    [anon_sym_DOTMOD] = ACTIONS(95),
    [anon_sym_DOTBITAND] = ACTIONS(95),
    [anon_sym_AMP] = ACTIONS(97),
    [anon_sym_DOTBITXOR] = ACTIONS(95),
    [anon_sym_DOTSHL] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(95),
    [anon_sym_DOTSHR] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_DOTBITOR] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(95),
    [anon_sym_LT_GT] = ACTIONS(95),
    [anon_sym_LT_EQ] = ACTIONS(95),
    [anon_sym_GT_EQ] = ACTIONS(95),
    [anon_sym_DOTAND] = ACTIONS(95),
    [anon_sym_AMP_AMP] = ACTIONS(95),
    [anon_sym_DOTXOR] = ACTIONS(95),
    [anon_sym_DOTOR] = ACTIONS(95),
    [anon_sym_PIPE_PIPE] = ACTIONS(95),
    [sym_a16_ctrl_cmd] = ACTIONS(95),
    [sym_a8_ctrl_cmd] = ACTIONS(95),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(95),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(95),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(95),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(95),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(95),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(95),
    [sym_bss_ctrl_cmd] = ACTIONS(95),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(95),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(95),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(99),
    [sym_adc_opcode] = ACTIONS(101),
    [sym_and_opcode] = ACTIONS(101),
    [sym_asl_opcode] = ACTIONS(101),
    [sym_bcc_opcode] = ACTIONS(101),
    [sym_bcs_opcode] = ACTIONS(101),
    [sym_beq_opcode] = ACTIONS(101),
    [sym_bit_opcode] = ACTIONS(101),
    [sym_bmi_opcode] = ACTIONS(101),
    [sym_bne_opcode] = ACTIONS(101),
    [sym_bpl_opcode] = ACTIONS(101),
    [sym_brk_opcode] = ACTIONS(101),
    [sym_bvc_opcode] = ACTIONS(101),
    [sym_bvs_opcode] = ACTIONS(101),
    [sym_clc_opcode] = ACTIONS(101),
    [sym_cld_opcode] = ACTIONS(101),
    [sym_cli_opcode] = ACTIONS(101),
    [sym_clv_opcode] = ACTIONS(101),
    [sym_cmp_opcode] = ACTIONS(101),
    [sym_cpx_opcode] = ACTIONS(101),
    [sym_cpy_opcode] = ACTIONS(101),
    [sym_dec_opcode] = ACTIONS(101),
    [sym_dex_opcode] = ACTIONS(101),
    [sym_dey_opcode] = ACTIONS(101),
    [sym_eor_opcode] = ACTIONS(101),
    [sym_inc_opcode] = ACTIONS(101),
    [sym_inx_opcode] = ACTIONS(101),
    [sym_iny_opcode] = ACTIONS(101),
    [sym_jmp_opcode] = ACTIONS(101),
    [sym_jsr_opcode] = ACTIONS(101),
    [sym_lda_opcode] = ACTIONS(101),
    [sym_ldx_opcode] = ACTIONS(101),
    [sym_ldy_opcode] = ACTIONS(101),
    [sym_lsr_opcode] = ACTIONS(101),
    [sym_nop_opcode] = ACTIONS(101),
    [sym_ora_opcode] = ACTIONS(101),
    [sym_pha_opcode] = ACTIONS(101),
    [sym_php_opcode] = ACTIONS(101),
    [sym_pla_opcode] = ACTIONS(101),
    [sym_plp_opcode] = ACTIONS(101),
    [sym_rol_opcode] = ACTIONS(101),
    [sym_ror_opcode] = ACTIONS(101),
    [sym_rti_opcode] = ACTIONS(101),
    [sym_rts_opcode] = ACTIONS(101),
    [sym_sbc_opcode] = ACTIONS(101),
    [sym_sec_opcode] = ACTIONS(101),
    [sym_sed_opcode] = ACTIONS(101),
    [sym_sei_opcode] = ACTIONS(101),
    [sym_sta_opcode] = ACTIONS(101),
    [sym_stx_opcode] = ACTIONS(101),
    [sym_sty_opcode] = ACTIONS(101),
    [sym_tax_opcode] = ACTIONS(101),
    [sym_tay_opcode] = ACTIONS(101),
    [sym_tsx_opcode] = ACTIONS(101),
    [sym_txa_opcode] = ACTIONS(101),
    [sym_tcs_opcode] = ACTIONS(101),
    [sym_tya_opcode] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_DOTMOD] = ACTIONS(77),
    [anon_sym_DOTBITAND] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_DOTBITXOR] = ACTIONS(71),
    [anon_sym_DOTSHL] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_DOTSHR] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_DOTBITOR] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_LT_GT] = ACTIONS(99),
    [anon_sym_LT_EQ] = ACTIONS(99),
    [anon_sym_GT_EQ] = ACTIONS(99),
    [anon_sym_DOTAND] = ACTIONS(99),
    [anon_sym_AMP_AMP] = ACTIONS(99),
    [anon_sym_DOTXOR] = ACTIONS(99),
    [anon_sym_DOTOR] = ACTIONS(99),
    [anon_sym_PIPE_PIPE] = ACTIONS(99),
    [sym_a16_ctrl_cmd] = ACTIONS(99),
    [sym_a8_ctrl_cmd] = ACTIONS(99),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(99),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(99),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(99),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(99),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(99),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(99),
    [sym_bss_ctrl_cmd] = ACTIONS(99),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(99),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(99),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
    [sym_adc_opcode] = ACTIONS(105),
    [sym_and_opcode] = ACTIONS(105),
    [sym_asl_opcode] = ACTIONS(105),
    [sym_bcc_opcode] = ACTIONS(105),
    [sym_bcs_opcode] = ACTIONS(105),
    [sym_beq_opcode] = ACTIONS(105),
    [sym_bit_opcode] = ACTIONS(105),
    [sym_bmi_opcode] = ACTIONS(105),
    [sym_bne_opcode] = ACTIONS(105),
    [sym_bpl_opcode] = ACTIONS(105),
    [sym_brk_opcode] = ACTIONS(105),
    [sym_bvc_opcode] = ACTIONS(105),
    [sym_bvs_opcode] = ACTIONS(105),
    [sym_clc_opcode] = ACTIONS(105),
    [sym_cld_opcode] = ACTIONS(105),
    [sym_cli_opcode] = ACTIONS(105),
    [sym_clv_opcode] = ACTIONS(105),
    [sym_cmp_opcode] = ACTIONS(105),
    [sym_cpx_opcode] = ACTIONS(105),
    [sym_cpy_opcode] = ACTIONS(105),
    [sym_dec_opcode] = ACTIONS(105),
    [sym_dex_opcode] = ACTIONS(105),
    [sym_dey_opcode] = ACTIONS(105),
    [sym_eor_opcode] = ACTIONS(105),
    [sym_inc_opcode] = ACTIONS(105),
    [sym_inx_opcode] = ACTIONS(105),
    [sym_iny_opcode] = ACTIONS(105),
    [sym_jmp_opcode] = ACTIONS(105),
    [sym_jsr_opcode] = ACTIONS(105),
    [sym_lda_opcode] = ACTIONS(105),
    [sym_ldx_opcode] = ACTIONS(105),
    [sym_ldy_opcode] = ACTIONS(105),
    [sym_lsr_opcode] = ACTIONS(105),
    [sym_nop_opcode] = ACTIONS(105),
    [sym_ora_opcode] = ACTIONS(105),
    [sym_pha_opcode] = ACTIONS(105),
    [sym_php_opcode] = ACTIONS(105),
    [sym_pla_opcode] = ACTIONS(105),
    [sym_plp_opcode] = ACTIONS(105),
    [sym_rol_opcode] = ACTIONS(105),
    [sym_ror_opcode] = ACTIONS(105),
    [sym_rti_opcode] = ACTIONS(105),
    [sym_rts_opcode] = ACTIONS(105),
    [sym_sbc_opcode] = ACTIONS(105),
    [sym_sec_opcode] = ACTIONS(105),
    [sym_sed_opcode] = ACTIONS(105),
    [sym_sei_opcode] = ACTIONS(105),
    [sym_sta_opcode] = ACTIONS(105),
    [sym_stx_opcode] = ACTIONS(105),
    [sym_sty_opcode] = ACTIONS(105),
    [sym_tax_opcode] = ACTIONS(105),
    [sym_tay_opcode] = ACTIONS(105),
    [sym_tsx_opcode] = ACTIONS(105),
    [sym_txa_opcode] = ACTIONS(105),
    [sym_tcs_opcode] = ACTIONS(105),
    [sym_tya_opcode] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_LT] = ACTIONS(105),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_CARET] = ACTIONS(103),
    [anon_sym_STAR] = ACTIONS(103),
    [anon_sym_SLASH] = ACTIONS(103),
    [anon_sym_DOTMOD] = ACTIONS(103),
    [anon_sym_DOTBITAND] = ACTIONS(103),
    [anon_sym_AMP] = ACTIONS(105),
    [anon_sym_DOTBITXOR] = ACTIONS(103),
    [anon_sym_DOTSHL] = ACTIONS(103),
    [anon_sym_LT_LT] = ACTIONS(103),
    [anon_sym_DOTSHR] = ACTIONS(103),
    [anon_sym_GT_GT] = ACTIONS(103),
    [anon_sym_DOTBITOR] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_LT_GT] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT_EQ] = ACTIONS(103),
    [anon_sym_DOTAND] = ACTIONS(103),
    [anon_sym_AMP_AMP] = ACTIONS(103),
    [anon_sym_DOTXOR] = ACTIONS(103),
    [anon_sym_DOTOR] = ACTIONS(103),
    [anon_sym_PIPE_PIPE] = ACTIONS(103),
    [sym_a16_ctrl_cmd] = ACTIONS(103),
    [sym_a8_ctrl_cmd] = ACTIONS(103),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(103),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(103),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(103),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(103),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(103),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(103),
    [sym_bss_ctrl_cmd] = ACTIONS(103),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(103),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(103),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [sym_adc_opcode] = ACTIONS(109),
    [sym_and_opcode] = ACTIONS(109),
    [sym_asl_opcode] = ACTIONS(109),
    [sym_bcc_opcode] = ACTIONS(109),
    [sym_bcs_opcode] = ACTIONS(109),
    [sym_beq_opcode] = ACTIONS(109),
    [sym_bit_opcode] = ACTIONS(109),
    [sym_bmi_opcode] = ACTIONS(109),
    [sym_bne_opcode] = ACTIONS(109),
    [sym_bpl_opcode] = ACTIONS(109),
    [sym_brk_opcode] = ACTIONS(109),
    [sym_bvc_opcode] = ACTIONS(109),
    [sym_bvs_opcode] = ACTIONS(109),
    [sym_clc_opcode] = ACTIONS(109),
    [sym_cld_opcode] = ACTIONS(109),
    [sym_cli_opcode] = ACTIONS(109),
    [sym_clv_opcode] = ACTIONS(109),
    [sym_cmp_opcode] = ACTIONS(109),
    [sym_cpx_opcode] = ACTIONS(109),
    [sym_cpy_opcode] = ACTIONS(109),
    [sym_dec_opcode] = ACTIONS(109),
    [sym_dex_opcode] = ACTIONS(109),
    [sym_dey_opcode] = ACTIONS(109),
    [sym_eor_opcode] = ACTIONS(109),
    [sym_inc_opcode] = ACTIONS(109),
    [sym_inx_opcode] = ACTIONS(109),
    [sym_iny_opcode] = ACTIONS(109),
    [sym_jmp_opcode] = ACTIONS(109),
    [sym_jsr_opcode] = ACTIONS(109),
    [sym_lda_opcode] = ACTIONS(109),
    [sym_ldx_opcode] = ACTIONS(109),
    [sym_ldy_opcode] = ACTIONS(109),
    [sym_lsr_opcode] = ACTIONS(109),
    [sym_nop_opcode] = ACTIONS(109),
    [sym_ora_opcode] = ACTIONS(109),
    [sym_pha_opcode] = ACTIONS(109),
    [sym_php_opcode] = ACTIONS(109),
    [sym_pla_opcode] = ACTIONS(109),
    [sym_plp_opcode] = ACTIONS(109),
    [sym_rol_opcode] = ACTIONS(109),
    [sym_ror_opcode] = ACTIONS(109),
    [sym_rti_opcode] = ACTIONS(109),
    [sym_rts_opcode] = ACTIONS(109),
    [sym_sbc_opcode] = ACTIONS(109),
    [sym_sec_opcode] = ACTIONS(109),
    [sym_sed_opcode] = ACTIONS(109),
    [sym_sei_opcode] = ACTIONS(109),
    [sym_sta_opcode] = ACTIONS(109),
    [sym_stx_opcode] = ACTIONS(109),
    [sym_sty_opcode] = ACTIONS(109),
    [sym_tax_opcode] = ACTIONS(109),
    [sym_tay_opcode] = ACTIONS(109),
    [sym_tsx_opcode] = ACTIONS(109),
    [sym_txa_opcode] = ACTIONS(109),
    [sym_tcs_opcode] = ACTIONS(109),
    [sym_tya_opcode] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_STAR] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_DOTMOD] = ACTIONS(107),
    [anon_sym_DOTBITAND] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_DOTBITXOR] = ACTIONS(107),
    [anon_sym_DOTSHL] = ACTIONS(107),
    [anon_sym_LT_LT] = ACTIONS(107),
    [anon_sym_DOTSHR] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_DOTBITOR] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_EQ] = ACTIONS(107),
    [anon_sym_LT_GT] = ACTIONS(107),
    [anon_sym_LT_EQ] = ACTIONS(107),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_DOTAND] = ACTIONS(107),
    [anon_sym_AMP_AMP] = ACTIONS(107),
    [anon_sym_DOTXOR] = ACTIONS(107),
    [anon_sym_DOTOR] = ACTIONS(107),
    [anon_sym_PIPE_PIPE] = ACTIONS(107),
    [sym_a16_ctrl_cmd] = ACTIONS(107),
    [sym_a8_ctrl_cmd] = ACTIONS(107),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(107),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(107),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(107),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(107),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(107),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(107),
    [sym_bss_ctrl_cmd] = ACTIONS(107),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(107),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(107),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [sym_adc_opcode] = ACTIONS(113),
    [sym_and_opcode] = ACTIONS(113),
    [sym_asl_opcode] = ACTIONS(113),
    [sym_bcc_opcode] = ACTIONS(113),
    [sym_bcs_opcode] = ACTIONS(113),
    [sym_beq_opcode] = ACTIONS(113),
    [sym_bit_opcode] = ACTIONS(113),
    [sym_bmi_opcode] = ACTIONS(113),
    [sym_bne_opcode] = ACTIONS(113),
    [sym_bpl_opcode] = ACTIONS(113),
    [sym_brk_opcode] = ACTIONS(113),
    [sym_bvc_opcode] = ACTIONS(113),
    [sym_bvs_opcode] = ACTIONS(113),
    [sym_clc_opcode] = ACTIONS(113),
    [sym_cld_opcode] = ACTIONS(113),
    [sym_cli_opcode] = ACTIONS(113),
    [sym_clv_opcode] = ACTIONS(113),
    [sym_cmp_opcode] = ACTIONS(113),
    [sym_cpx_opcode] = ACTIONS(113),
    [sym_cpy_opcode] = ACTIONS(113),
    [sym_dec_opcode] = ACTIONS(113),
    [sym_dex_opcode] = ACTIONS(113),
    [sym_dey_opcode] = ACTIONS(113),
    [sym_eor_opcode] = ACTIONS(113),
    [sym_inc_opcode] = ACTIONS(113),
    [sym_inx_opcode] = ACTIONS(113),
    [sym_iny_opcode] = ACTIONS(113),
    [sym_jmp_opcode] = ACTIONS(113),
    [sym_jsr_opcode] = ACTIONS(113),
    [sym_lda_opcode] = ACTIONS(113),
    [sym_ldx_opcode] = ACTIONS(113),
    [sym_ldy_opcode] = ACTIONS(113),
    [sym_lsr_opcode] = ACTIONS(113),
    [sym_nop_opcode] = ACTIONS(113),
    [sym_ora_opcode] = ACTIONS(113),
    [sym_pha_opcode] = ACTIONS(113),
    [sym_php_opcode] = ACTIONS(113),
    [sym_pla_opcode] = ACTIONS(113),
    [sym_plp_opcode] = ACTIONS(113),
    [sym_rol_opcode] = ACTIONS(113),
    [sym_ror_opcode] = ACTIONS(113),
    [sym_rti_opcode] = ACTIONS(113),
    [sym_rts_opcode] = ACTIONS(113),
    [sym_sbc_opcode] = ACTIONS(113),
    [sym_sec_opcode] = ACTIONS(113),
    [sym_sed_opcode] = ACTIONS(113),
    [sym_sei_opcode] = ACTIONS(113),
    [sym_sta_opcode] = ACTIONS(113),
    [sym_stx_opcode] = ACTIONS(113),
    [sym_sty_opcode] = ACTIONS(113),
    [sym_tax_opcode] = ACTIONS(113),
    [sym_tay_opcode] = ACTIONS(113),
    [sym_tsx_opcode] = ACTIONS(113),
    [sym_txa_opcode] = ACTIONS(113),
    [sym_tcs_opcode] = ACTIONS(113),
    [sym_tya_opcode] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_CARET] = ACTIONS(111),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_SLASH] = ACTIONS(111),
    [anon_sym_DOTMOD] = ACTIONS(111),
    [anon_sym_DOTBITAND] = ACTIONS(111),
    [anon_sym_AMP] = ACTIONS(113),
    [anon_sym_DOTBITXOR] = ACTIONS(111),
    [anon_sym_DOTSHL] = ACTIONS(111),
    [anon_sym_LT_LT] = ACTIONS(111),
    [anon_sym_DOTSHR] = ACTIONS(111),
    [anon_sym_GT_GT] = ACTIONS(111),
    [anon_sym_DOTBITOR] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_EQ] = ACTIONS(111),
    [anon_sym_LT_GT] = ACTIONS(111),
    [anon_sym_LT_EQ] = ACTIONS(111),
    [anon_sym_GT_EQ] = ACTIONS(111),
    [anon_sym_DOTAND] = ACTIONS(111),
    [anon_sym_AMP_AMP] = ACTIONS(111),
    [anon_sym_DOTXOR] = ACTIONS(111),
    [anon_sym_DOTOR] = ACTIONS(111),
    [anon_sym_PIPE_PIPE] = ACTIONS(111),
    [sym_a16_ctrl_cmd] = ACTIONS(111),
    [sym_a8_ctrl_cmd] = ACTIONS(111),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(111),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(111),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(111),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(111),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(111),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(111),
    [sym_bss_ctrl_cmd] = ACTIONS(111),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(111),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(111),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [sym_adc_opcode] = ACTIONS(117),
    [sym_and_opcode] = ACTIONS(117),
    [sym_asl_opcode] = ACTIONS(117),
    [sym_bcc_opcode] = ACTIONS(117),
    [sym_bcs_opcode] = ACTIONS(117),
    [sym_beq_opcode] = ACTIONS(117),
    [sym_bit_opcode] = ACTIONS(117),
    [sym_bmi_opcode] = ACTIONS(117),
    [sym_bne_opcode] = ACTIONS(117),
    [sym_bpl_opcode] = ACTIONS(117),
    [sym_brk_opcode] = ACTIONS(117),
    [sym_bvc_opcode] = ACTIONS(117),
    [sym_bvs_opcode] = ACTIONS(117),
    [sym_clc_opcode] = ACTIONS(117),
    [sym_cld_opcode] = ACTIONS(117),
    [sym_cli_opcode] = ACTIONS(117),
    [sym_clv_opcode] = ACTIONS(117),
    [sym_cmp_opcode] = ACTIONS(117),
    [sym_cpx_opcode] = ACTIONS(117),
    [sym_cpy_opcode] = ACTIONS(117),
    [sym_dec_opcode] = ACTIONS(117),
    [sym_dex_opcode] = ACTIONS(117),
    [sym_dey_opcode] = ACTIONS(117),
    [sym_eor_opcode] = ACTIONS(117),
    [sym_inc_opcode] = ACTIONS(117),
    [sym_inx_opcode] = ACTIONS(117),
    [sym_iny_opcode] = ACTIONS(117),
    [sym_jmp_opcode] = ACTIONS(117),
    [sym_jsr_opcode] = ACTIONS(117),
    [sym_lda_opcode] = ACTIONS(117),
    [sym_ldx_opcode] = ACTIONS(117),
    [sym_ldy_opcode] = ACTIONS(117),
    [sym_lsr_opcode] = ACTIONS(117),
    [sym_nop_opcode] = ACTIONS(117),
    [sym_ora_opcode] = ACTIONS(117),
    [sym_pha_opcode] = ACTIONS(117),
    [sym_php_opcode] = ACTIONS(117),
    [sym_pla_opcode] = ACTIONS(117),
    [sym_plp_opcode] = ACTIONS(117),
    [sym_rol_opcode] = ACTIONS(117),
    [sym_ror_opcode] = ACTIONS(117),
    [sym_rti_opcode] = ACTIONS(117),
    [sym_rts_opcode] = ACTIONS(117),
    [sym_sbc_opcode] = ACTIONS(117),
    [sym_sec_opcode] = ACTIONS(117),
    [sym_sed_opcode] = ACTIONS(117),
    [sym_sei_opcode] = ACTIONS(117),
    [sym_sta_opcode] = ACTIONS(117),
    [sym_stx_opcode] = ACTIONS(117),
    [sym_sty_opcode] = ACTIONS(117),
    [sym_tax_opcode] = ACTIONS(117),
    [sym_tay_opcode] = ACTIONS(117),
    [sym_tsx_opcode] = ACTIONS(117),
    [sym_txa_opcode] = ACTIONS(117),
    [sym_tcs_opcode] = ACTIONS(117),
    [sym_tya_opcode] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_CARET] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym_DOTMOD] = ACTIONS(115),
    [anon_sym_DOTBITAND] = ACTIONS(115),
    [anon_sym_AMP] = ACTIONS(117),
    [anon_sym_DOTBITXOR] = ACTIONS(115),
    [anon_sym_DOTSHL] = ACTIONS(115),
    [anon_sym_LT_LT] = ACTIONS(115),
    [anon_sym_DOTSHR] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_DOTBITOR] = ACTIONS(115),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_EQ] = ACTIONS(115),
    [anon_sym_LT_GT] = ACTIONS(115),
    [anon_sym_LT_EQ] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(115),
    [anon_sym_DOTAND] = ACTIONS(115),
    [anon_sym_AMP_AMP] = ACTIONS(115),
    [anon_sym_DOTXOR] = ACTIONS(115),
    [anon_sym_DOTOR] = ACTIONS(115),
    [anon_sym_PIPE_PIPE] = ACTIONS(115),
    [sym_a16_ctrl_cmd] = ACTIONS(115),
    [sym_a8_ctrl_cmd] = ACTIONS(115),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(115),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(115),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(115),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(115),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(115),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(115),
    [sym_bss_ctrl_cmd] = ACTIONS(115),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(115),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(115),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [sym_adc_opcode] = ACTIONS(121),
    [sym_and_opcode] = ACTIONS(121),
    [sym_asl_opcode] = ACTIONS(121),
    [sym_bcc_opcode] = ACTIONS(121),
    [sym_bcs_opcode] = ACTIONS(121),
    [sym_beq_opcode] = ACTIONS(121),
    [sym_bit_opcode] = ACTIONS(121),
    [sym_bmi_opcode] = ACTIONS(121),
    [sym_bne_opcode] = ACTIONS(121),
    [sym_bpl_opcode] = ACTIONS(121),
    [sym_brk_opcode] = ACTIONS(121),
    [sym_bvc_opcode] = ACTIONS(121),
    [sym_bvs_opcode] = ACTIONS(121),
    [sym_clc_opcode] = ACTIONS(121),
    [sym_cld_opcode] = ACTIONS(121),
    [sym_cli_opcode] = ACTIONS(121),
    [sym_clv_opcode] = ACTIONS(121),
    [sym_cmp_opcode] = ACTIONS(121),
    [sym_cpx_opcode] = ACTIONS(121),
    [sym_cpy_opcode] = ACTIONS(121),
    [sym_dec_opcode] = ACTIONS(121),
    [sym_dex_opcode] = ACTIONS(121),
    [sym_dey_opcode] = ACTIONS(121),
    [sym_eor_opcode] = ACTIONS(121),
    [sym_inc_opcode] = ACTIONS(121),
    [sym_inx_opcode] = ACTIONS(121),
    [sym_iny_opcode] = ACTIONS(121),
    [sym_jmp_opcode] = ACTIONS(121),
    [sym_jsr_opcode] = ACTIONS(121),
    [sym_lda_opcode] = ACTIONS(121),
    [sym_ldx_opcode] = ACTIONS(121),
    [sym_ldy_opcode] = ACTIONS(121),
    [sym_lsr_opcode] = ACTIONS(121),
    [sym_nop_opcode] = ACTIONS(121),
    [sym_ora_opcode] = ACTIONS(121),
    [sym_pha_opcode] = ACTIONS(121),
    [sym_php_opcode] = ACTIONS(121),
    [sym_pla_opcode] = ACTIONS(121),
    [sym_plp_opcode] = ACTIONS(121),
    [sym_rol_opcode] = ACTIONS(121),
    [sym_ror_opcode] = ACTIONS(121),
    [sym_rti_opcode] = ACTIONS(121),
    [sym_rts_opcode] = ACTIONS(121),
    [sym_sbc_opcode] = ACTIONS(121),
    [sym_sec_opcode] = ACTIONS(121),
    [sym_sed_opcode] = ACTIONS(121),
    [sym_sei_opcode] = ACTIONS(121),
    [sym_sta_opcode] = ACTIONS(121),
    [sym_stx_opcode] = ACTIONS(121),
    [sym_sty_opcode] = ACTIONS(121),
    [sym_tax_opcode] = ACTIONS(121),
    [sym_tay_opcode] = ACTIONS(121),
    [sym_tsx_opcode] = ACTIONS(121),
    [sym_txa_opcode] = ACTIONS(121),
    [sym_tcs_opcode] = ACTIONS(121),
    [sym_tya_opcode] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_CARET] = ACTIONS(119),
    [anon_sym_STAR] = ACTIONS(119),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_DOTMOD] = ACTIONS(119),
    [anon_sym_DOTBITAND] = ACTIONS(119),
    [anon_sym_AMP] = ACTIONS(121),
    [anon_sym_DOTBITXOR] = ACTIONS(119),
    [anon_sym_DOTSHL] = ACTIONS(119),
    [anon_sym_LT_LT] = ACTIONS(119),
    [anon_sym_DOTSHR] = ACTIONS(119),
    [anon_sym_GT_GT] = ACTIONS(119),
    [anon_sym_DOTBITOR] = ACTIONS(119),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_EQ] = ACTIONS(119),
    [anon_sym_LT_GT] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_DOTAND] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_DOTXOR] = ACTIONS(119),
    [anon_sym_DOTOR] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [sym_a16_ctrl_cmd] = ACTIONS(119),
    [sym_a8_ctrl_cmd] = ACTIONS(119),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(119),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(119),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(119),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(119),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(119),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(119),
    [sym_bss_ctrl_cmd] = ACTIONS(119),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(119),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(119),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(123),
    [sym_adc_opcode] = ACTIONS(125),
    [sym_and_opcode] = ACTIONS(125),
    [sym_asl_opcode] = ACTIONS(125),
    [sym_bcc_opcode] = ACTIONS(125),
    [sym_bcs_opcode] = ACTIONS(125),
    [sym_beq_opcode] = ACTIONS(125),
    [sym_bit_opcode] = ACTIONS(125),
    [sym_bmi_opcode] = ACTIONS(125),
    [sym_bne_opcode] = ACTIONS(125),
    [sym_bpl_opcode] = ACTIONS(125),
    [sym_brk_opcode] = ACTIONS(125),
    [sym_bvc_opcode] = ACTIONS(125),
    [sym_bvs_opcode] = ACTIONS(125),
    [sym_clc_opcode] = ACTIONS(125),
    [sym_cld_opcode] = ACTIONS(125),
    [sym_cli_opcode] = ACTIONS(125),
    [sym_clv_opcode] = ACTIONS(125),
    [sym_cmp_opcode] = ACTIONS(125),
    [sym_cpx_opcode] = ACTIONS(125),
    [sym_cpy_opcode] = ACTIONS(125),
    [sym_dec_opcode] = ACTIONS(125),
    [sym_dex_opcode] = ACTIONS(125),
    [sym_dey_opcode] = ACTIONS(125),
    [sym_eor_opcode] = ACTIONS(125),
    [sym_inc_opcode] = ACTIONS(125),
    [sym_inx_opcode] = ACTIONS(125),
    [sym_iny_opcode] = ACTIONS(125),
    [sym_jmp_opcode] = ACTIONS(125),
    [sym_jsr_opcode] = ACTIONS(125),
    [sym_lda_opcode] = ACTIONS(125),
    [sym_ldx_opcode] = ACTIONS(125),
    [sym_ldy_opcode] = ACTIONS(125),
    [sym_lsr_opcode] = ACTIONS(125),
    [sym_nop_opcode] = ACTIONS(125),
    [sym_ora_opcode] = ACTIONS(125),
    [sym_pha_opcode] = ACTIONS(125),
    [sym_php_opcode] = ACTIONS(125),
    [sym_pla_opcode] = ACTIONS(125),
    [sym_plp_opcode] = ACTIONS(125),
    [sym_rol_opcode] = ACTIONS(125),
    [sym_ror_opcode] = ACTIONS(125),
    [sym_rti_opcode] = ACTIONS(125),
    [sym_rts_opcode] = ACTIONS(125),
    [sym_sbc_opcode] = ACTIONS(125),
    [sym_sec_opcode] = ACTIONS(125),
    [sym_sed_opcode] = ACTIONS(125),
    [sym_sei_opcode] = ACTIONS(125),
    [sym_sta_opcode] = ACTIONS(125),
    [sym_stx_opcode] = ACTIONS(125),
    [sym_sty_opcode] = ACTIONS(125),
    [sym_tax_opcode] = ACTIONS(125),
    [sym_tay_opcode] = ACTIONS(125),
    [sym_tsx_opcode] = ACTIONS(125),
    [sym_txa_opcode] = ACTIONS(125),
    [sym_tcs_opcode] = ACTIONS(125),
    [sym_tya_opcode] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(123),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_DOTMOD] = ACTIONS(123),
    [anon_sym_DOTBITAND] = ACTIONS(123),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_DOTBITXOR] = ACTIONS(123),
    [anon_sym_DOTSHL] = ACTIONS(123),
    [anon_sym_LT_LT] = ACTIONS(123),
    [anon_sym_DOTSHR] = ACTIONS(123),
    [anon_sym_GT_GT] = ACTIONS(123),
    [anon_sym_DOTBITOR] = ACTIONS(123),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_EQ] = ACTIONS(123),
    [anon_sym_LT_GT] = ACTIONS(123),
    [anon_sym_LT_EQ] = ACTIONS(123),
    [anon_sym_GT_EQ] = ACTIONS(123),
    [anon_sym_DOTAND] = ACTIONS(123),
    [anon_sym_AMP_AMP] = ACTIONS(123),
    [anon_sym_DOTXOR] = ACTIONS(123),
    [anon_sym_DOTOR] = ACTIONS(123),
    [anon_sym_PIPE_PIPE] = ACTIONS(123),
    [sym_a16_ctrl_cmd] = ACTIONS(123),
    [sym_a8_ctrl_cmd] = ACTIONS(123),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(123),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(123),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(123),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(123),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(123),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(123),
    [sym_bss_ctrl_cmd] = ACTIONS(123),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(123),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(123),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(127),
    [sym_adc_opcode] = ACTIONS(129),
    [sym_and_opcode] = ACTIONS(129),
    [sym_asl_opcode] = ACTIONS(129),
    [sym_bcc_opcode] = ACTIONS(129),
    [sym_bcs_opcode] = ACTIONS(129),
    [sym_beq_opcode] = ACTIONS(129),
    [sym_bit_opcode] = ACTIONS(129),
    [sym_bmi_opcode] = ACTIONS(129),
    [sym_bne_opcode] = ACTIONS(129),
    [sym_bpl_opcode] = ACTIONS(129),
    [sym_brk_opcode] = ACTIONS(129),
    [sym_bvc_opcode] = ACTIONS(129),
    [sym_bvs_opcode] = ACTIONS(129),
    [sym_clc_opcode] = ACTIONS(129),
    [sym_cld_opcode] = ACTIONS(129),
    [sym_cli_opcode] = ACTIONS(129),
    [sym_clv_opcode] = ACTIONS(129),
    [sym_cmp_opcode] = ACTIONS(129),
    [sym_cpx_opcode] = ACTIONS(129),
    [sym_cpy_opcode] = ACTIONS(129),
    [sym_dec_opcode] = ACTIONS(129),
    [sym_dex_opcode] = ACTIONS(129),
    [sym_dey_opcode] = ACTIONS(129),
    [sym_eor_opcode] = ACTIONS(129),
    [sym_inc_opcode] = ACTIONS(129),
    [sym_inx_opcode] = ACTIONS(129),
    [sym_iny_opcode] = ACTIONS(129),
    [sym_jmp_opcode] = ACTIONS(129),
    [sym_jsr_opcode] = ACTIONS(129),
    [sym_lda_opcode] = ACTIONS(129),
    [sym_ldx_opcode] = ACTIONS(129),
    [sym_ldy_opcode] = ACTIONS(129),
    [sym_lsr_opcode] = ACTIONS(129),
    [sym_nop_opcode] = ACTIONS(129),
    [sym_ora_opcode] = ACTIONS(129),
    [sym_pha_opcode] = ACTIONS(129),
    [sym_php_opcode] = ACTIONS(129),
    [sym_pla_opcode] = ACTIONS(129),
    [sym_plp_opcode] = ACTIONS(129),
    [sym_rol_opcode] = ACTIONS(129),
    [sym_ror_opcode] = ACTIONS(129),
    [sym_rti_opcode] = ACTIONS(129),
    [sym_rts_opcode] = ACTIONS(129),
    [sym_sbc_opcode] = ACTIONS(129),
    [sym_sec_opcode] = ACTIONS(129),
    [sym_sed_opcode] = ACTIONS(129),
    [sym_sei_opcode] = ACTIONS(129),
    [sym_sta_opcode] = ACTIONS(129),
    [sym_stx_opcode] = ACTIONS(129),
    [sym_sty_opcode] = ACTIONS(129),
    [sym_tax_opcode] = ACTIONS(129),
    [sym_tay_opcode] = ACTIONS(129),
    [sym_tsx_opcode] = ACTIONS(129),
    [sym_txa_opcode] = ACTIONS(129),
    [sym_tcs_opcode] = ACTIONS(129),
    [sym_tya_opcode] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_LT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(129),
    [anon_sym_CARET] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_DOTMOD] = ACTIONS(127),
    [anon_sym_DOTBITAND] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(129),
    [anon_sym_DOTBITXOR] = ACTIONS(127),
    [anon_sym_DOTSHL] = ACTIONS(127),
    [anon_sym_LT_LT] = ACTIONS(127),
    [anon_sym_DOTSHR] = ACTIONS(127),
    [anon_sym_GT_GT] = ACTIONS(127),
    [anon_sym_DOTBITOR] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(129),
    [anon_sym_EQ] = ACTIONS(127),
    [anon_sym_LT_GT] = ACTIONS(127),
    [anon_sym_LT_EQ] = ACTIONS(127),
    [anon_sym_GT_EQ] = ACTIONS(127),
    [anon_sym_DOTAND] = ACTIONS(127),
    [anon_sym_AMP_AMP] = ACTIONS(127),
    [anon_sym_DOTXOR] = ACTIONS(127),
    [anon_sym_DOTOR] = ACTIONS(127),
    [anon_sym_PIPE_PIPE] = ACTIONS(127),
    [sym_a16_ctrl_cmd] = ACTIONS(127),
    [sym_a8_ctrl_cmd] = ACTIONS(127),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(127),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(127),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(127),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(127),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(127),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(127),
    [sym_bss_ctrl_cmd] = ACTIONS(127),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(127),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(127),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(131),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
    [sym_adc_opcode] = ACTIONS(133),
    [sym_and_opcode] = ACTIONS(133),
    [sym_asl_opcode] = ACTIONS(133),
    [sym_bcc_opcode] = ACTIONS(133),
    [sym_bcs_opcode] = ACTIONS(133),
    [sym_beq_opcode] = ACTIONS(133),
    [sym_bit_opcode] = ACTIONS(133),
    [sym_bmi_opcode] = ACTIONS(133),
    [sym_bne_opcode] = ACTIONS(133),
    [sym_bpl_opcode] = ACTIONS(133),
    [sym_brk_opcode] = ACTIONS(133),
    [sym_bvc_opcode] = ACTIONS(133),
    [sym_bvs_opcode] = ACTIONS(133),
    [sym_clc_opcode] = ACTIONS(133),
    [sym_cld_opcode] = ACTIONS(133),
    [sym_cli_opcode] = ACTIONS(133),
    [sym_clv_opcode] = ACTIONS(133),
    [sym_cmp_opcode] = ACTIONS(133),
    [sym_cpx_opcode] = ACTIONS(133),
    [sym_cpy_opcode] = ACTIONS(133),
    [sym_dec_opcode] = ACTIONS(133),
    [sym_dex_opcode] = ACTIONS(133),
    [sym_dey_opcode] = ACTIONS(133),
    [sym_eor_opcode] = ACTIONS(133),
    [sym_inc_opcode] = ACTIONS(133),
    [sym_inx_opcode] = ACTIONS(133),
    [sym_iny_opcode] = ACTIONS(133),
    [sym_jmp_opcode] = ACTIONS(133),
    [sym_jsr_opcode] = ACTIONS(133),
    [sym_lda_opcode] = ACTIONS(133),
    [sym_ldx_opcode] = ACTIONS(133),
    [sym_ldy_opcode] = ACTIONS(133),
    [sym_lsr_opcode] = ACTIONS(133),
    [sym_nop_opcode] = ACTIONS(133),
    [sym_ora_opcode] = ACTIONS(133),
    [sym_pha_opcode] = ACTIONS(133),
    [sym_php_opcode] = ACTIONS(133),
    [sym_pla_opcode] = ACTIONS(133),
    [sym_plp_opcode] = ACTIONS(133),
    [sym_rol_opcode] = ACTIONS(133),
    [sym_ror_opcode] = ACTIONS(133),
    [sym_rti_opcode] = ACTIONS(133),
    [sym_rts_opcode] = ACTIONS(133),
    [sym_sbc_opcode] = ACTIONS(133),
    [sym_sec_opcode] = ACTIONS(133),
    [sym_sed_opcode] = ACTIONS(133),
    [sym_sei_opcode] = ACTIONS(133),
    [sym_sta_opcode] = ACTIONS(133),
    [sym_stx_opcode] = ACTIONS(133),
    [sym_sty_opcode] = ACTIONS(133),
    [sym_tax_opcode] = ACTIONS(133),
    [sym_tay_opcode] = ACTIONS(133),
    [sym_tsx_opcode] = ACTIONS(133),
    [sym_txa_opcode] = ACTIONS(133),
    [sym_tcs_opcode] = ACTIONS(133),
    [sym_tya_opcode] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [anon_sym_DOTMOD] = ACTIONS(131),
    [anon_sym_DOTBITAND] = ACTIONS(131),
    [anon_sym_AMP] = ACTIONS(133),
    [anon_sym_DOTBITXOR] = ACTIONS(131),
    [anon_sym_DOTSHL] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(131),
    [anon_sym_DOTSHR] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_DOTBITOR] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(133),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_LT_GT] = ACTIONS(131),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [anon_sym_GT_EQ] = ACTIONS(131),
    [anon_sym_DOTAND] = ACTIONS(131),
    [anon_sym_AMP_AMP] = ACTIONS(131),
    [anon_sym_DOTXOR] = ACTIONS(131),
    [anon_sym_DOTOR] = ACTIONS(131),
    [anon_sym_PIPE_PIPE] = ACTIONS(131),
    [sym_a16_ctrl_cmd] = ACTIONS(131),
    [sym_a8_ctrl_cmd] = ACTIONS(131),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(131),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(131),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(131),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(131),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(131),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(131),
    [sym_bss_ctrl_cmd] = ACTIONS(131),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(131),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(131),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_RPAREN] = ACTIONS(135),
    [sym_adc_opcode] = ACTIONS(137),
    [sym_and_opcode] = ACTIONS(137),
    [sym_asl_opcode] = ACTIONS(137),
    [sym_bcc_opcode] = ACTIONS(137),
    [sym_bcs_opcode] = ACTIONS(137),
    [sym_beq_opcode] = ACTIONS(137),
    [sym_bit_opcode] = ACTIONS(137),
    [sym_bmi_opcode] = ACTIONS(137),
    [sym_bne_opcode] = ACTIONS(137),
    [sym_bpl_opcode] = ACTIONS(137),
    [sym_brk_opcode] = ACTIONS(137),
    [sym_bvc_opcode] = ACTIONS(137),
    [sym_bvs_opcode] = ACTIONS(137),
    [sym_clc_opcode] = ACTIONS(137),
    [sym_cld_opcode] = ACTIONS(137),
    [sym_cli_opcode] = ACTIONS(137),
    [sym_clv_opcode] = ACTIONS(137),
    [sym_cmp_opcode] = ACTIONS(137),
    [sym_cpx_opcode] = ACTIONS(137),
    [sym_cpy_opcode] = ACTIONS(137),
    [sym_dec_opcode] = ACTIONS(137),
    [sym_dex_opcode] = ACTIONS(137),
    [sym_dey_opcode] = ACTIONS(137),
    [sym_eor_opcode] = ACTIONS(137),
    [sym_inc_opcode] = ACTIONS(137),
    [sym_inx_opcode] = ACTIONS(137),
    [sym_iny_opcode] = ACTIONS(137),
    [sym_jmp_opcode] = ACTIONS(137),
    [sym_jsr_opcode] = ACTIONS(137),
    [sym_lda_opcode] = ACTIONS(137),
    [sym_ldx_opcode] = ACTIONS(137),
    [sym_ldy_opcode] = ACTIONS(137),
    [sym_lsr_opcode] = ACTIONS(137),
    [sym_nop_opcode] = ACTIONS(137),
    [sym_ora_opcode] = ACTIONS(137),
    [sym_pha_opcode] = ACTIONS(137),
    [sym_php_opcode] = ACTIONS(137),
    [sym_pla_opcode] = ACTIONS(137),
    [sym_plp_opcode] = ACTIONS(137),
    [sym_rol_opcode] = ACTIONS(137),
    [sym_ror_opcode] = ACTIONS(137),
    [sym_rti_opcode] = ACTIONS(137),
    [sym_rts_opcode] = ACTIONS(137),
    [sym_sbc_opcode] = ACTIONS(137),
    [sym_sec_opcode] = ACTIONS(137),
    [sym_sed_opcode] = ACTIONS(137),
    [sym_sei_opcode] = ACTIONS(137),
    [sym_sta_opcode] = ACTIONS(137),
    [sym_stx_opcode] = ACTIONS(137),
    [sym_sty_opcode] = ACTIONS(137),
    [sym_tax_opcode] = ACTIONS(137),
    [sym_tay_opcode] = ACTIONS(137),
    [sym_tsx_opcode] = ACTIONS(137),
    [sym_txa_opcode] = ACTIONS(137),
    [sym_tcs_opcode] = ACTIONS(137),
    [sym_tya_opcode] = ACTIONS(137),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_DOTMOD] = ACTIONS(77),
    [anon_sym_DOTBITAND] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_DOTBITXOR] = ACTIONS(71),
    [anon_sym_DOTSHL] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_DOTSHR] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_DOTBITOR] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(143),
    [anon_sym_LT_GT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_DOTAND] = ACTIONS(135),
    [anon_sym_AMP_AMP] = ACTIONS(135),
    [anon_sym_DOTXOR] = ACTIONS(135),
    [anon_sym_DOTOR] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(135),
    [sym_a16_ctrl_cmd] = ACTIONS(135),
    [sym_a8_ctrl_cmd] = ACTIONS(135),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(135),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(135),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(135),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(135),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(135),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(135),
    [sym_bss_ctrl_cmd] = ACTIONS(135),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(135),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(135),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(151),
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
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_DOTMOD] = ACTIONS(77),
    [anon_sym_DOTBITAND] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_DOTBITXOR] = ACTIONS(71),
    [anon_sym_DOTSHL] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_DOTSHR] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_DOTBITOR] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(151),
    [anon_sym_LT_GT] = ACTIONS(151),
    [anon_sym_LT_EQ] = ACTIONS(151),
    [anon_sym_GT_EQ] = ACTIONS(151),
    [anon_sym_DOTAND] = ACTIONS(151),
    [anon_sym_AMP_AMP] = ACTIONS(151),
    [anon_sym_DOTXOR] = ACTIONS(151),
    [anon_sym_DOTOR] = ACTIONS(151),
    [anon_sym_PIPE_PIPE] = ACTIONS(151),
    [sym_a16_ctrl_cmd] = ACTIONS(151),
    [sym_a8_ctrl_cmd] = ACTIONS(151),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(151),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(151),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(151),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(151),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(151),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(151),
    [sym_bss_ctrl_cmd] = ACTIONS(151),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(151),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(151),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(155),
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
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(157),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_DOTMOD] = ACTIONS(77),
    [anon_sym_DOTBITAND] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_DOTBITXOR] = ACTIONS(71),
    [anon_sym_DOTSHL] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_DOTSHR] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_DOTBITOR] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(155),
    [anon_sym_LT_GT] = ACTIONS(155),
    [anon_sym_LT_EQ] = ACTIONS(155),
    [anon_sym_GT_EQ] = ACTIONS(155),
    [anon_sym_DOTAND] = ACTIONS(155),
    [anon_sym_AMP_AMP] = ACTIONS(155),
    [anon_sym_DOTXOR] = ACTIONS(155),
    [anon_sym_DOTOR] = ACTIONS(155),
    [anon_sym_PIPE_PIPE] = ACTIONS(155),
    [sym_a16_ctrl_cmd] = ACTIONS(155),
    [sym_a8_ctrl_cmd] = ACTIONS(155),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(155),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(155),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(155),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(155),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(155),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(155),
    [sym_bss_ctrl_cmd] = ACTIONS(155),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(155),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(155),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_RPAREN] = ACTIONS(159),
    [sym_adc_opcode] = ACTIONS(161),
    [sym_and_opcode] = ACTIONS(161),
    [sym_asl_opcode] = ACTIONS(161),
    [sym_bcc_opcode] = ACTIONS(161),
    [sym_bcs_opcode] = ACTIONS(161),
    [sym_beq_opcode] = ACTIONS(161),
    [sym_bit_opcode] = ACTIONS(161),
    [sym_bmi_opcode] = ACTIONS(161),
    [sym_bne_opcode] = ACTIONS(161),
    [sym_bpl_opcode] = ACTIONS(161),
    [sym_brk_opcode] = ACTIONS(161),
    [sym_bvc_opcode] = ACTIONS(161),
    [sym_bvs_opcode] = ACTIONS(161),
    [sym_clc_opcode] = ACTIONS(161),
    [sym_cld_opcode] = ACTIONS(161),
    [sym_cli_opcode] = ACTIONS(161),
    [sym_clv_opcode] = ACTIONS(161),
    [sym_cmp_opcode] = ACTIONS(161),
    [sym_cpx_opcode] = ACTIONS(161),
    [sym_cpy_opcode] = ACTIONS(161),
    [sym_dec_opcode] = ACTIONS(161),
    [sym_dex_opcode] = ACTIONS(161),
    [sym_dey_opcode] = ACTIONS(161),
    [sym_eor_opcode] = ACTIONS(161),
    [sym_inc_opcode] = ACTIONS(161),
    [sym_inx_opcode] = ACTIONS(161),
    [sym_iny_opcode] = ACTIONS(161),
    [sym_jmp_opcode] = ACTIONS(161),
    [sym_jsr_opcode] = ACTIONS(161),
    [sym_lda_opcode] = ACTIONS(161),
    [sym_ldx_opcode] = ACTIONS(161),
    [sym_ldy_opcode] = ACTIONS(161),
    [sym_lsr_opcode] = ACTIONS(161),
    [sym_nop_opcode] = ACTIONS(161),
    [sym_ora_opcode] = ACTIONS(161),
    [sym_pha_opcode] = ACTIONS(161),
    [sym_php_opcode] = ACTIONS(161),
    [sym_pla_opcode] = ACTIONS(161),
    [sym_plp_opcode] = ACTIONS(161),
    [sym_rol_opcode] = ACTIONS(161),
    [sym_ror_opcode] = ACTIONS(161),
    [sym_rti_opcode] = ACTIONS(161),
    [sym_rts_opcode] = ACTIONS(161),
    [sym_sbc_opcode] = ACTIONS(161),
    [sym_sec_opcode] = ACTIONS(161),
    [sym_sed_opcode] = ACTIONS(161),
    [sym_sei_opcode] = ACTIONS(161),
    [sym_sta_opcode] = ACTIONS(161),
    [sym_stx_opcode] = ACTIONS(161),
    [sym_sty_opcode] = ACTIONS(161),
    [sym_tax_opcode] = ACTIONS(161),
    [sym_tay_opcode] = ACTIONS(161),
    [sym_tsx_opcode] = ACTIONS(161),
    [sym_txa_opcode] = ACTIONS(161),
    [sym_tcs_opcode] = ACTIONS(161),
    [sym_tya_opcode] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_DOTMOD] = ACTIONS(77),
    [anon_sym_DOTBITAND] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_DOTBITXOR] = ACTIONS(71),
    [anon_sym_DOTSHL] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_DOTSHR] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_DOTBITOR] = ACTIONS(159),
    [anon_sym_PIPE] = ACTIONS(161),
    [anon_sym_EQ] = ACTIONS(159),
    [anon_sym_LT_GT] = ACTIONS(159),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_GT_EQ] = ACTIONS(159),
    [anon_sym_DOTAND] = ACTIONS(159),
    [anon_sym_AMP_AMP] = ACTIONS(159),
    [anon_sym_DOTXOR] = ACTIONS(159),
    [anon_sym_DOTOR] = ACTIONS(159),
    [anon_sym_PIPE_PIPE] = ACTIONS(159),
    [sym_a16_ctrl_cmd] = ACTIONS(159),
    [sym_a8_ctrl_cmd] = ACTIONS(159),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(159),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(159),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(159),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(159),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(159),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(159),
    [sym_bss_ctrl_cmd] = ACTIONS(159),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(159),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(159),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(163),
    [anon_sym_COMMA] = ACTIONS(163),
    [anon_sym_RPAREN] = ACTIONS(163),
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
    [anon_sym_PLUS] = ACTIONS(163),
    [anon_sym_DASH] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_DOTMOD] = ACTIONS(77),
    [anon_sym_DOTBITAND] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_DOTBITXOR] = ACTIONS(71),
    [anon_sym_DOTSHL] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_DOTSHR] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_DOTBITOR] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(165),
    [anon_sym_EQ] = ACTIONS(163),
    [anon_sym_LT_GT] = ACTIONS(163),
    [anon_sym_LT_EQ] = ACTIONS(163),
    [anon_sym_GT_EQ] = ACTIONS(163),
    [anon_sym_DOTAND] = ACTIONS(163),
    [anon_sym_AMP_AMP] = ACTIONS(163),
    [anon_sym_DOTXOR] = ACTIONS(163),
    [anon_sym_DOTOR] = ACTIONS(163),
    [anon_sym_PIPE_PIPE] = ACTIONS(163),
    [sym_a16_ctrl_cmd] = ACTIONS(163),
    [sym_a8_ctrl_cmd] = ACTIONS(163),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(163),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(163),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(163),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(163),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(163),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(163),
    [sym_bss_ctrl_cmd] = ACTIONS(163),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(163),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(163),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(167),
    [sym_adc_opcode] = ACTIONS(169),
    [sym_and_opcode] = ACTIONS(169),
    [sym_asl_opcode] = ACTIONS(169),
    [sym_bcc_opcode] = ACTIONS(169),
    [sym_bcs_opcode] = ACTIONS(169),
    [sym_beq_opcode] = ACTIONS(169),
    [sym_bit_opcode] = ACTIONS(169),
    [sym_bmi_opcode] = ACTIONS(169),
    [sym_bne_opcode] = ACTIONS(169),
    [sym_bpl_opcode] = ACTIONS(169),
    [sym_brk_opcode] = ACTIONS(169),
    [sym_bvc_opcode] = ACTIONS(169),
    [sym_bvs_opcode] = ACTIONS(169),
    [sym_clc_opcode] = ACTIONS(169),
    [sym_cld_opcode] = ACTIONS(169),
    [sym_cli_opcode] = ACTIONS(169),
    [sym_clv_opcode] = ACTIONS(169),
    [sym_cmp_opcode] = ACTIONS(169),
    [sym_cpx_opcode] = ACTIONS(169),
    [sym_cpy_opcode] = ACTIONS(169),
    [sym_dec_opcode] = ACTIONS(169),
    [sym_dex_opcode] = ACTIONS(169),
    [sym_dey_opcode] = ACTIONS(169),
    [sym_eor_opcode] = ACTIONS(169),
    [sym_inc_opcode] = ACTIONS(169),
    [sym_inx_opcode] = ACTIONS(169),
    [sym_iny_opcode] = ACTIONS(169),
    [sym_jmp_opcode] = ACTIONS(169),
    [sym_jsr_opcode] = ACTIONS(169),
    [sym_lda_opcode] = ACTIONS(169),
    [sym_ldx_opcode] = ACTIONS(169),
    [sym_ldy_opcode] = ACTIONS(169),
    [sym_lsr_opcode] = ACTIONS(169),
    [sym_nop_opcode] = ACTIONS(169),
    [sym_ora_opcode] = ACTIONS(169),
    [sym_pha_opcode] = ACTIONS(169),
    [sym_php_opcode] = ACTIONS(169),
    [sym_pla_opcode] = ACTIONS(169),
    [sym_plp_opcode] = ACTIONS(169),
    [sym_rol_opcode] = ACTIONS(169),
    [sym_ror_opcode] = ACTIONS(169),
    [sym_rti_opcode] = ACTIONS(169),
    [sym_rts_opcode] = ACTIONS(169),
    [sym_sbc_opcode] = ACTIONS(169),
    [sym_sec_opcode] = ACTIONS(169),
    [sym_sed_opcode] = ACTIONS(169),
    [sym_sei_opcode] = ACTIONS(169),
    [sym_sta_opcode] = ACTIONS(169),
    [sym_stx_opcode] = ACTIONS(169),
    [sym_sty_opcode] = ACTIONS(169),
    [sym_tax_opcode] = ACTIONS(169),
    [sym_tay_opcode] = ACTIONS(169),
    [sym_tsx_opcode] = ACTIONS(169),
    [sym_txa_opcode] = ACTIONS(169),
    [sym_tcs_opcode] = ACTIONS(169),
    [sym_tya_opcode] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_DOTMOD] = ACTIONS(77),
    [anon_sym_DOTBITAND] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_DOTBITXOR] = ACTIONS(71),
    [anon_sym_DOTSHL] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_DOTSHR] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_DOTBITOR] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(143),
    [anon_sym_LT_GT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_DOTAND] = ACTIONS(171),
    [anon_sym_AMP_AMP] = ACTIONS(171),
    [anon_sym_DOTXOR] = ACTIONS(173),
    [anon_sym_DOTOR] = ACTIONS(175),
    [anon_sym_PIPE_PIPE] = ACTIONS(175),
    [sym_a16_ctrl_cmd] = ACTIONS(167),
    [sym_a8_ctrl_cmd] = ACTIONS(167),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(167),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(167),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(167),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(167),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(167),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(167),
    [sym_bss_ctrl_cmd] = ACTIONS(167),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(167),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(167),
  },
  [22] = {
    [aux_sym_bankbytes_ctrl_cmd_repeat1] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(179),
    [sym_adc_opcode] = ACTIONS(181),
    [sym_and_opcode] = ACTIONS(181),
    [sym_asl_opcode] = ACTIONS(181),
    [sym_bcc_opcode] = ACTIONS(181),
    [sym_bcs_opcode] = ACTIONS(181),
    [sym_beq_opcode] = ACTIONS(181),
    [sym_bit_opcode] = ACTIONS(181),
    [sym_bmi_opcode] = ACTIONS(181),
    [sym_bne_opcode] = ACTIONS(181),
    [sym_bpl_opcode] = ACTIONS(181),
    [sym_brk_opcode] = ACTIONS(181),
    [sym_bvc_opcode] = ACTIONS(181),
    [sym_bvs_opcode] = ACTIONS(181),
    [sym_clc_opcode] = ACTIONS(181),
    [sym_cld_opcode] = ACTIONS(181),
    [sym_cli_opcode] = ACTIONS(181),
    [sym_clv_opcode] = ACTIONS(181),
    [sym_cmp_opcode] = ACTIONS(181),
    [sym_cpx_opcode] = ACTIONS(181),
    [sym_cpy_opcode] = ACTIONS(181),
    [sym_dec_opcode] = ACTIONS(181),
    [sym_dex_opcode] = ACTIONS(181),
    [sym_dey_opcode] = ACTIONS(181),
    [sym_eor_opcode] = ACTIONS(181),
    [sym_inc_opcode] = ACTIONS(181),
    [sym_inx_opcode] = ACTIONS(181),
    [sym_iny_opcode] = ACTIONS(181),
    [sym_jmp_opcode] = ACTIONS(181),
    [sym_jsr_opcode] = ACTIONS(181),
    [sym_lda_opcode] = ACTIONS(181),
    [sym_ldx_opcode] = ACTIONS(181),
    [sym_ldy_opcode] = ACTIONS(181),
    [sym_lsr_opcode] = ACTIONS(181),
    [sym_nop_opcode] = ACTIONS(181),
    [sym_ora_opcode] = ACTIONS(181),
    [sym_pha_opcode] = ACTIONS(181),
    [sym_php_opcode] = ACTIONS(181),
    [sym_pla_opcode] = ACTIONS(181),
    [sym_plp_opcode] = ACTIONS(181),
    [sym_rol_opcode] = ACTIONS(181),
    [sym_ror_opcode] = ACTIONS(181),
    [sym_rti_opcode] = ACTIONS(181),
    [sym_rts_opcode] = ACTIONS(181),
    [sym_sbc_opcode] = ACTIONS(181),
    [sym_sec_opcode] = ACTIONS(181),
    [sym_sed_opcode] = ACTIONS(181),
    [sym_sei_opcode] = ACTIONS(181),
    [sym_sta_opcode] = ACTIONS(181),
    [sym_stx_opcode] = ACTIONS(181),
    [sym_sty_opcode] = ACTIONS(181),
    [sym_tax_opcode] = ACTIONS(181),
    [sym_tay_opcode] = ACTIONS(181),
    [sym_tsx_opcode] = ACTIONS(181),
    [sym_txa_opcode] = ACTIONS(181),
    [sym_tcs_opcode] = ACTIONS(181),
    [sym_tya_opcode] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_DOTMOD] = ACTIONS(77),
    [anon_sym_DOTBITAND] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_DOTBITXOR] = ACTIONS(71),
    [anon_sym_DOTSHL] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_DOTSHR] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_DOTBITOR] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(143),
    [anon_sym_LT_GT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_DOTAND] = ACTIONS(171),
    [anon_sym_AMP_AMP] = ACTIONS(171),
    [anon_sym_DOTXOR] = ACTIONS(173),
    [anon_sym_DOTOR] = ACTIONS(175),
    [anon_sym_PIPE_PIPE] = ACTIONS(175),
    [sym_a16_ctrl_cmd] = ACTIONS(177),
    [sym_a8_ctrl_cmd] = ACTIONS(177),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(177),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(177),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(177),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(177),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(177),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(177),
    [sym_bss_ctrl_cmd] = ACTIONS(177),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(177),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(177),
  },
  [23] = {
    [aux_sym_bankbytes_ctrl_cmd_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(183),
    [anon_sym_COMMA] = ACTIONS(179),
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
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_DOTMOD] = ACTIONS(77),
    [anon_sym_DOTBITAND] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_DOTBITXOR] = ACTIONS(71),
    [anon_sym_DOTSHL] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_DOTSHR] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_DOTBITOR] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(143),
    [anon_sym_LT_GT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_DOTAND] = ACTIONS(171),
    [anon_sym_AMP_AMP] = ACTIONS(171),
    [anon_sym_DOTXOR] = ACTIONS(173),
    [anon_sym_DOTOR] = ACTIONS(175),
    [anon_sym_PIPE_PIPE] = ACTIONS(175),
    [sym_a16_ctrl_cmd] = ACTIONS(183),
    [sym_a8_ctrl_cmd] = ACTIONS(183),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(183),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(183),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(183),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(183),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(183),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(183),
    [sym_bss_ctrl_cmd] = ACTIONS(183),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(183),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(183),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(187),
    [anon_sym_COMMA] = ACTIONS(187),
    [anon_sym_RPAREN] = ACTIONS(187),
    [sym_adc_opcode] = ACTIONS(189),
    [sym_and_opcode] = ACTIONS(189),
    [sym_asl_opcode] = ACTIONS(189),
    [sym_bcc_opcode] = ACTIONS(189),
    [sym_bcs_opcode] = ACTIONS(189),
    [sym_beq_opcode] = ACTIONS(189),
    [sym_bit_opcode] = ACTIONS(189),
    [sym_bmi_opcode] = ACTIONS(189),
    [sym_bne_opcode] = ACTIONS(189),
    [sym_bpl_opcode] = ACTIONS(189),
    [sym_brk_opcode] = ACTIONS(189),
    [sym_bvc_opcode] = ACTIONS(189),
    [sym_bvs_opcode] = ACTIONS(189),
    [sym_clc_opcode] = ACTIONS(189),
    [sym_cld_opcode] = ACTIONS(189),
    [sym_cli_opcode] = ACTIONS(189),
    [sym_clv_opcode] = ACTIONS(189),
    [sym_cmp_opcode] = ACTIONS(189),
    [sym_cpx_opcode] = ACTIONS(189),
    [sym_cpy_opcode] = ACTIONS(189),
    [sym_dec_opcode] = ACTIONS(189),
    [sym_dex_opcode] = ACTIONS(189),
    [sym_dey_opcode] = ACTIONS(189),
    [sym_eor_opcode] = ACTIONS(189),
    [sym_inc_opcode] = ACTIONS(189),
    [sym_inx_opcode] = ACTIONS(189),
    [sym_iny_opcode] = ACTIONS(189),
    [sym_jmp_opcode] = ACTIONS(189),
    [sym_jsr_opcode] = ACTIONS(189),
    [sym_lda_opcode] = ACTIONS(189),
    [sym_ldx_opcode] = ACTIONS(189),
    [sym_ldy_opcode] = ACTIONS(189),
    [sym_lsr_opcode] = ACTIONS(189),
    [sym_nop_opcode] = ACTIONS(189),
    [sym_ora_opcode] = ACTIONS(189),
    [sym_pha_opcode] = ACTIONS(189),
    [sym_php_opcode] = ACTIONS(189),
    [sym_pla_opcode] = ACTIONS(189),
    [sym_plp_opcode] = ACTIONS(189),
    [sym_rol_opcode] = ACTIONS(189),
    [sym_ror_opcode] = ACTIONS(189),
    [sym_rti_opcode] = ACTIONS(189),
    [sym_rts_opcode] = ACTIONS(189),
    [sym_sbc_opcode] = ACTIONS(189),
    [sym_sec_opcode] = ACTIONS(189),
    [sym_sed_opcode] = ACTIONS(189),
    [sym_sei_opcode] = ACTIONS(189),
    [sym_sta_opcode] = ACTIONS(189),
    [sym_stx_opcode] = ACTIONS(189),
    [sym_sty_opcode] = ACTIONS(189),
    [sym_tax_opcode] = ACTIONS(189),
    [sym_tay_opcode] = ACTIONS(189),
    [sym_tsx_opcode] = ACTIONS(189),
    [sym_txa_opcode] = ACTIONS(189),
    [sym_tcs_opcode] = ACTIONS(189),
    [sym_tya_opcode] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_DOTMOD] = ACTIONS(77),
    [anon_sym_DOTBITAND] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_DOTBITXOR] = ACTIONS(71),
    [anon_sym_DOTSHL] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_DOTSHR] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_DOTBITOR] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(143),
    [anon_sym_LT_GT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_DOTAND] = ACTIONS(171),
    [anon_sym_AMP_AMP] = ACTIONS(171),
    [anon_sym_DOTXOR] = ACTIONS(173),
    [anon_sym_DOTOR] = ACTIONS(187),
    [anon_sym_PIPE_PIPE] = ACTIONS(187),
    [sym_a16_ctrl_cmd] = ACTIONS(187),
    [sym_a8_ctrl_cmd] = ACTIONS(187),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(187),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(187),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(187),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(187),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(187),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(187),
    [sym_bss_ctrl_cmd] = ACTIONS(187),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(187),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(187),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(191),
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
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(193),
    [anon_sym_GT] = ACTIONS(193),
    [anon_sym_CARET] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [anon_sym_DOTMOD] = ACTIONS(191),
    [anon_sym_DOTBITAND] = ACTIONS(191),
    [anon_sym_AMP] = ACTIONS(193),
    [anon_sym_DOTBITXOR] = ACTIONS(191),
    [anon_sym_DOTSHL] = ACTIONS(191),
    [anon_sym_LT_LT] = ACTIONS(191),
    [anon_sym_DOTSHR] = ACTIONS(191),
    [anon_sym_GT_GT] = ACTIONS(191),
    [anon_sym_DOTBITOR] = ACTIONS(191),
    [anon_sym_PIPE] = ACTIONS(193),
    [anon_sym_EQ] = ACTIONS(191),
    [anon_sym_LT_GT] = ACTIONS(191),
    [anon_sym_LT_EQ] = ACTIONS(191),
    [anon_sym_GT_EQ] = ACTIONS(191),
    [anon_sym_DOTAND] = ACTIONS(191),
    [anon_sym_AMP_AMP] = ACTIONS(191),
    [anon_sym_DOTXOR] = ACTIONS(191),
    [anon_sym_DOTOR] = ACTIONS(191),
    [anon_sym_PIPE_PIPE] = ACTIONS(191),
    [sym_a16_ctrl_cmd] = ACTIONS(191),
    [sym_a8_ctrl_cmd] = ACTIONS(191),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(191),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(191),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(191),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(191),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(191),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(191),
    [sym_bss_ctrl_cmd] = ACTIONS(191),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(191),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(191),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_RPAREN] = ACTIONS(195),
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
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(197),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_DOTMOD] = ACTIONS(77),
    [anon_sym_DOTBITAND] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_DOTBITXOR] = ACTIONS(71),
    [anon_sym_DOTSHL] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_DOTSHR] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_DOTBITOR] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(195),
    [anon_sym_LT_GT] = ACTIONS(195),
    [anon_sym_LT_EQ] = ACTIONS(195),
    [anon_sym_GT_EQ] = ACTIONS(195),
    [anon_sym_DOTAND] = ACTIONS(195),
    [anon_sym_AMP_AMP] = ACTIONS(195),
    [anon_sym_DOTXOR] = ACTIONS(195),
    [anon_sym_DOTOR] = ACTIONS(195),
    [anon_sym_PIPE_PIPE] = ACTIONS(195),
    [sym_a16_ctrl_cmd] = ACTIONS(195),
    [sym_a8_ctrl_cmd] = ACTIONS(195),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(195),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(195),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(195),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(195),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(195),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(195),
    [sym_bss_ctrl_cmd] = ACTIONS(195),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(195),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(195),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(199),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_RPAREN] = ACTIONS(199),
    [sym_adc_opcode] = ACTIONS(201),
    [sym_and_opcode] = ACTIONS(201),
    [sym_asl_opcode] = ACTIONS(201),
    [sym_bcc_opcode] = ACTIONS(201),
    [sym_bcs_opcode] = ACTIONS(201),
    [sym_beq_opcode] = ACTIONS(201),
    [sym_bit_opcode] = ACTIONS(201),
    [sym_bmi_opcode] = ACTIONS(201),
    [sym_bne_opcode] = ACTIONS(201),
    [sym_bpl_opcode] = ACTIONS(201),
    [sym_brk_opcode] = ACTIONS(201),
    [sym_bvc_opcode] = ACTIONS(201),
    [sym_bvs_opcode] = ACTIONS(201),
    [sym_clc_opcode] = ACTIONS(201),
    [sym_cld_opcode] = ACTIONS(201),
    [sym_cli_opcode] = ACTIONS(201),
    [sym_clv_opcode] = ACTIONS(201),
    [sym_cmp_opcode] = ACTIONS(201),
    [sym_cpx_opcode] = ACTIONS(201),
    [sym_cpy_opcode] = ACTIONS(201),
    [sym_dec_opcode] = ACTIONS(201),
    [sym_dex_opcode] = ACTIONS(201),
    [sym_dey_opcode] = ACTIONS(201),
    [sym_eor_opcode] = ACTIONS(201),
    [sym_inc_opcode] = ACTIONS(201),
    [sym_inx_opcode] = ACTIONS(201),
    [sym_iny_opcode] = ACTIONS(201),
    [sym_jmp_opcode] = ACTIONS(201),
    [sym_jsr_opcode] = ACTIONS(201),
    [sym_lda_opcode] = ACTIONS(201),
    [sym_ldx_opcode] = ACTIONS(201),
    [sym_ldy_opcode] = ACTIONS(201),
    [sym_lsr_opcode] = ACTIONS(201),
    [sym_nop_opcode] = ACTIONS(201),
    [sym_ora_opcode] = ACTIONS(201),
    [sym_pha_opcode] = ACTIONS(201),
    [sym_php_opcode] = ACTIONS(201),
    [sym_pla_opcode] = ACTIONS(201),
    [sym_plp_opcode] = ACTIONS(201),
    [sym_rol_opcode] = ACTIONS(201),
    [sym_ror_opcode] = ACTIONS(201),
    [sym_rti_opcode] = ACTIONS(201),
    [sym_rts_opcode] = ACTIONS(201),
    [sym_sbc_opcode] = ACTIONS(201),
    [sym_sec_opcode] = ACTIONS(201),
    [sym_sed_opcode] = ACTIONS(201),
    [sym_sei_opcode] = ACTIONS(201),
    [sym_sta_opcode] = ACTIONS(201),
    [sym_stx_opcode] = ACTIONS(201),
    [sym_sty_opcode] = ACTIONS(201),
    [sym_tax_opcode] = ACTIONS(201),
    [sym_tay_opcode] = ACTIONS(201),
    [sym_tsx_opcode] = ACTIONS(201),
    [sym_txa_opcode] = ACTIONS(201),
    [sym_tcs_opcode] = ACTIONS(201),
    [sym_tya_opcode] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(199),
    [anon_sym_DASH] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(201),
    [anon_sym_CARET] = ACTIONS(199),
    [anon_sym_STAR] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [anon_sym_DOTMOD] = ACTIONS(199),
    [anon_sym_DOTBITAND] = ACTIONS(199),
    [anon_sym_AMP] = ACTIONS(201),
    [anon_sym_DOTBITXOR] = ACTIONS(199),
    [anon_sym_DOTSHL] = ACTIONS(199),
    [anon_sym_LT_LT] = ACTIONS(199),
    [anon_sym_DOTSHR] = ACTIONS(199),
    [anon_sym_GT_GT] = ACTIONS(199),
    [anon_sym_DOTBITOR] = ACTIONS(199),
    [anon_sym_PIPE] = ACTIONS(201),
    [anon_sym_EQ] = ACTIONS(199),
    [anon_sym_LT_GT] = ACTIONS(199),
    [anon_sym_LT_EQ] = ACTIONS(199),
    [anon_sym_GT_EQ] = ACTIONS(199),
    [anon_sym_DOTAND] = ACTIONS(199),
    [anon_sym_AMP_AMP] = ACTIONS(199),
    [anon_sym_DOTXOR] = ACTIONS(199),
    [anon_sym_DOTOR] = ACTIONS(199),
    [anon_sym_PIPE_PIPE] = ACTIONS(199),
    [sym_a16_ctrl_cmd] = ACTIONS(199),
    [sym_a8_ctrl_cmd] = ACTIONS(199),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(199),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(199),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(199),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(199),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(199),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(199),
    [sym_bss_ctrl_cmd] = ACTIONS(199),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(199),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(199),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(203),
    [sym_adc_opcode] = ACTIONS(206),
    [sym_and_opcode] = ACTIONS(206),
    [sym_asl_opcode] = ACTIONS(206),
    [sym_bcc_opcode] = ACTIONS(206),
    [sym_bcs_opcode] = ACTIONS(206),
    [sym_beq_opcode] = ACTIONS(206),
    [sym_bit_opcode] = ACTIONS(206),
    [sym_bmi_opcode] = ACTIONS(206),
    [sym_bne_opcode] = ACTIONS(206),
    [sym_bpl_opcode] = ACTIONS(206),
    [sym_brk_opcode] = ACTIONS(206),
    [sym_bvc_opcode] = ACTIONS(206),
    [sym_bvs_opcode] = ACTIONS(206),
    [sym_clc_opcode] = ACTIONS(206),
    [sym_cld_opcode] = ACTIONS(206),
    [sym_cli_opcode] = ACTIONS(206),
    [sym_clv_opcode] = ACTIONS(206),
    [sym_cmp_opcode] = ACTIONS(206),
    [sym_cpx_opcode] = ACTIONS(206),
    [sym_cpy_opcode] = ACTIONS(206),
    [sym_dec_opcode] = ACTIONS(206),
    [sym_dex_opcode] = ACTIONS(206),
    [sym_dey_opcode] = ACTIONS(206),
    [sym_eor_opcode] = ACTIONS(206),
    [sym_inc_opcode] = ACTIONS(206),
    [sym_inx_opcode] = ACTIONS(206),
    [sym_iny_opcode] = ACTIONS(206),
    [sym_jmp_opcode] = ACTIONS(206),
    [sym_jsr_opcode] = ACTIONS(206),
    [sym_lda_opcode] = ACTIONS(206),
    [sym_ldx_opcode] = ACTIONS(206),
    [sym_ldy_opcode] = ACTIONS(206),
    [sym_lsr_opcode] = ACTIONS(206),
    [sym_nop_opcode] = ACTIONS(206),
    [sym_ora_opcode] = ACTIONS(206),
    [sym_pha_opcode] = ACTIONS(206),
    [sym_php_opcode] = ACTIONS(206),
    [sym_pla_opcode] = ACTIONS(206),
    [sym_plp_opcode] = ACTIONS(206),
    [sym_rol_opcode] = ACTIONS(206),
    [sym_ror_opcode] = ACTIONS(206),
    [sym_rti_opcode] = ACTIONS(206),
    [sym_rts_opcode] = ACTIONS(206),
    [sym_sbc_opcode] = ACTIONS(206),
    [sym_sec_opcode] = ACTIONS(206),
    [sym_sed_opcode] = ACTIONS(206),
    [sym_sei_opcode] = ACTIONS(206),
    [sym_sta_opcode] = ACTIONS(206),
    [sym_stx_opcode] = ACTIONS(206),
    [sym_sty_opcode] = ACTIONS(206),
    [sym_tax_opcode] = ACTIONS(206),
    [sym_tay_opcode] = ACTIONS(206),
    [sym_tsx_opcode] = ACTIONS(206),
    [sym_txa_opcode] = ACTIONS(206),
    [sym_tcs_opcode] = ACTIONS(206),
    [sym_tya_opcode] = ACTIONS(206),
    [anon_sym_PLUS] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(206),
    [anon_sym_GT] = ACTIONS(206),
    [anon_sym_CARET] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [anon_sym_DOTMOD] = ACTIONS(203),
    [anon_sym_DOTBITAND] = ACTIONS(203),
    [anon_sym_AMP] = ACTIONS(206),
    [anon_sym_DOTBITXOR] = ACTIONS(203),
    [anon_sym_DOTSHL] = ACTIONS(203),
    [anon_sym_LT_LT] = ACTIONS(203),
    [anon_sym_DOTSHR] = ACTIONS(203),
    [anon_sym_GT_GT] = ACTIONS(203),
    [anon_sym_DOTBITOR] = ACTIONS(203),
    [anon_sym_PIPE] = ACTIONS(206),
    [anon_sym_EQ] = ACTIONS(203),
    [anon_sym_LT_GT] = ACTIONS(203),
    [anon_sym_LT_EQ] = ACTIONS(203),
    [anon_sym_GT_EQ] = ACTIONS(203),
    [anon_sym_DOTAND] = ACTIONS(203),
    [anon_sym_AMP_AMP] = ACTIONS(203),
    [anon_sym_DOTXOR] = ACTIONS(203),
    [anon_sym_DOTOR] = ACTIONS(203),
    [anon_sym_PIPE_PIPE] = ACTIONS(203),
    [sym_a16_ctrl_cmd] = ACTIONS(203),
    [sym_a8_ctrl_cmd] = ACTIONS(203),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(203),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(203),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(203),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(203),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(203),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(203),
    [sym_bss_ctrl_cmd] = ACTIONS(203),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(203),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(203),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
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
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_LT] = ACTIONS(211),
    [anon_sym_GT] = ACTIONS(211),
    [anon_sym_CARET] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_DOTMOD] = ACTIONS(209),
    [anon_sym_DOTBITAND] = ACTIONS(209),
    [anon_sym_AMP] = ACTIONS(211),
    [anon_sym_DOTBITXOR] = ACTIONS(209),
    [anon_sym_DOTSHL] = ACTIONS(209),
    [anon_sym_LT_LT] = ACTIONS(209),
    [anon_sym_DOTSHR] = ACTIONS(209),
    [anon_sym_GT_GT] = ACTIONS(209),
    [anon_sym_DOTBITOR] = ACTIONS(209),
    [anon_sym_PIPE] = ACTIONS(211),
    [anon_sym_EQ] = ACTIONS(209),
    [anon_sym_LT_GT] = ACTIONS(209),
    [anon_sym_LT_EQ] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(209),
    [anon_sym_DOTAND] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_DOTXOR] = ACTIONS(209),
    [anon_sym_DOTOR] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [sym_a16_ctrl_cmd] = ACTIONS(209),
    [sym_a8_ctrl_cmd] = ACTIONS(209),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(209),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(209),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(209),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(209),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(209),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(209),
    [sym_bss_ctrl_cmd] = ACTIONS(209),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(209),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(209),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(213),
    [anon_sym_COMMA] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(213),
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
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_LT] = ACTIONS(215),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_CARET] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(213),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_DOTMOD] = ACTIONS(213),
    [anon_sym_DOTBITAND] = ACTIONS(213),
    [anon_sym_AMP] = ACTIONS(215),
    [anon_sym_DOTBITXOR] = ACTIONS(213),
    [anon_sym_DOTSHL] = ACTIONS(213),
    [anon_sym_LT_LT] = ACTIONS(213),
    [anon_sym_DOTSHR] = ACTIONS(213),
    [anon_sym_GT_GT] = ACTIONS(213),
    [anon_sym_DOTBITOR] = ACTIONS(213),
    [anon_sym_PIPE] = ACTIONS(215),
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_LT_GT] = ACTIONS(213),
    [anon_sym_LT_EQ] = ACTIONS(213),
    [anon_sym_GT_EQ] = ACTIONS(213),
    [anon_sym_DOTAND] = ACTIONS(213),
    [anon_sym_AMP_AMP] = ACTIONS(213),
    [anon_sym_DOTXOR] = ACTIONS(213),
    [anon_sym_DOTOR] = ACTIONS(213),
    [anon_sym_PIPE_PIPE] = ACTIONS(213),
    [sym_a16_ctrl_cmd] = ACTIONS(213),
    [sym_a8_ctrl_cmd] = ACTIONS(213),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(213),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(213),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(213),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(213),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(213),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(213),
    [sym_bss_ctrl_cmd] = ACTIONS(213),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(213),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(213),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_RPAREN] = ACTIONS(217),
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
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_DOTMOD] = ACTIONS(217),
    [anon_sym_DOTBITAND] = ACTIONS(217),
    [anon_sym_AMP] = ACTIONS(219),
    [anon_sym_DOTBITXOR] = ACTIONS(217),
    [anon_sym_DOTSHL] = ACTIONS(217),
    [anon_sym_LT_LT] = ACTIONS(217),
    [anon_sym_DOTSHR] = ACTIONS(217),
    [anon_sym_GT_GT] = ACTIONS(217),
    [anon_sym_DOTBITOR] = ACTIONS(217),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_EQ] = ACTIONS(217),
    [anon_sym_LT_GT] = ACTIONS(217),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_GT_EQ] = ACTIONS(217),
    [anon_sym_DOTAND] = ACTIONS(217),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_DOTXOR] = ACTIONS(217),
    [anon_sym_DOTOR] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [sym_a16_ctrl_cmd] = ACTIONS(217),
    [sym_a8_ctrl_cmd] = ACTIONS(217),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(217),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(217),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(217),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(217),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(217),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(217),
    [sym_bss_ctrl_cmd] = ACTIONS(217),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(217),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(217),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
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
    [anon_sym_PLUS] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(223),
    [anon_sym_CARET] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(221),
    [anon_sym_DOTMOD] = ACTIONS(221),
    [anon_sym_DOTBITAND] = ACTIONS(221),
    [anon_sym_AMP] = ACTIONS(223),
    [anon_sym_DOTBITXOR] = ACTIONS(221),
    [anon_sym_DOTSHL] = ACTIONS(221),
    [anon_sym_LT_LT] = ACTIONS(221),
    [anon_sym_DOTSHR] = ACTIONS(221),
    [anon_sym_GT_GT] = ACTIONS(221),
    [anon_sym_DOTBITOR] = ACTIONS(221),
    [anon_sym_PIPE] = ACTIONS(223),
    [anon_sym_EQ] = ACTIONS(221),
    [anon_sym_LT_GT] = ACTIONS(221),
    [anon_sym_LT_EQ] = ACTIONS(221),
    [anon_sym_GT_EQ] = ACTIONS(221),
    [anon_sym_DOTAND] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_DOTXOR] = ACTIONS(221),
    [anon_sym_DOTOR] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [sym_a16_ctrl_cmd] = ACTIONS(221),
    [sym_a8_ctrl_cmd] = ACTIONS(221),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(221),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(221),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(221),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(221),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(221),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(221),
    [sym_bss_ctrl_cmd] = ACTIONS(221),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(221),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(221),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
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
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_LT] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_CARET] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_DOTMOD] = ACTIONS(225),
    [anon_sym_DOTBITAND] = ACTIONS(225),
    [anon_sym_AMP] = ACTIONS(227),
    [anon_sym_DOTBITXOR] = ACTIONS(225),
    [anon_sym_DOTSHL] = ACTIONS(225),
    [anon_sym_LT_LT] = ACTIONS(225),
    [anon_sym_DOTSHR] = ACTIONS(225),
    [anon_sym_GT_GT] = ACTIONS(225),
    [anon_sym_DOTBITOR] = ACTIONS(225),
    [anon_sym_PIPE] = ACTIONS(227),
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_LT_GT] = ACTIONS(225),
    [anon_sym_LT_EQ] = ACTIONS(225),
    [anon_sym_GT_EQ] = ACTIONS(225),
    [anon_sym_DOTAND] = ACTIONS(225),
    [anon_sym_AMP_AMP] = ACTIONS(225),
    [anon_sym_DOTXOR] = ACTIONS(225),
    [anon_sym_DOTOR] = ACTIONS(225),
    [anon_sym_PIPE_PIPE] = ACTIONS(225),
    [sym_a16_ctrl_cmd] = ACTIONS(225),
    [sym_a8_ctrl_cmd] = ACTIONS(225),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(225),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(225),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(225),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(225),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(225),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(225),
    [sym_bss_ctrl_cmd] = ACTIONS(225),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(225),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(225),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(229),
    [anon_sym_COMMA] = ACTIONS(229),
    [anon_sym_RPAREN] = ACTIONS(229),
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
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(231),
    [anon_sym_GT] = ACTIONS(231),
    [anon_sym_CARET] = ACTIONS(229),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_DOTMOD] = ACTIONS(229),
    [anon_sym_DOTBITAND] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(231),
    [anon_sym_DOTBITXOR] = ACTIONS(229),
    [anon_sym_DOTSHL] = ACTIONS(229),
    [anon_sym_LT_LT] = ACTIONS(229),
    [anon_sym_DOTSHR] = ACTIONS(229),
    [anon_sym_GT_GT] = ACTIONS(229),
    [anon_sym_DOTBITOR] = ACTIONS(229),
    [anon_sym_PIPE] = ACTIONS(231),
    [anon_sym_EQ] = ACTIONS(229),
    [anon_sym_LT_GT] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_DOTAND] = ACTIONS(229),
    [anon_sym_AMP_AMP] = ACTIONS(229),
    [anon_sym_DOTXOR] = ACTIONS(229),
    [anon_sym_DOTOR] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(229),
    [sym_a16_ctrl_cmd] = ACTIONS(229),
    [sym_a8_ctrl_cmd] = ACTIONS(229),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(229),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(229),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(229),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(229),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(229),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(229),
    [sym_bss_ctrl_cmd] = ACTIONS(229),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(229),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(229),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
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
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_DOTMOD] = ACTIONS(233),
    [anon_sym_DOTBITAND] = ACTIONS(233),
    [anon_sym_AMP] = ACTIONS(235),
    [anon_sym_DOTBITXOR] = ACTIONS(233),
    [anon_sym_DOTSHL] = ACTIONS(233),
    [anon_sym_LT_LT] = ACTIONS(233),
    [anon_sym_DOTSHR] = ACTIONS(233),
    [anon_sym_GT_GT] = ACTIONS(233),
    [anon_sym_DOTBITOR] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_EQ] = ACTIONS(233),
    [anon_sym_LT_GT] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(233),
    [anon_sym_GT_EQ] = ACTIONS(233),
    [anon_sym_DOTAND] = ACTIONS(233),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_DOTXOR] = ACTIONS(233),
    [anon_sym_DOTOR] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [sym_a16_ctrl_cmd] = ACTIONS(233),
    [sym_a8_ctrl_cmd] = ACTIONS(233),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(233),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(233),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(233),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(233),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(233),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(233),
    [sym_bss_ctrl_cmd] = ACTIONS(233),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(233),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(233),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(237),
    [anon_sym_COMMA] = ACTIONS(237),
    [anon_sym_RPAREN] = ACTIONS(237),
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
    [anon_sym_PLUS] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(239),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(237),
    [anon_sym_STAR] = ACTIONS(237),
    [anon_sym_SLASH] = ACTIONS(237),
    [anon_sym_DOTMOD] = ACTIONS(237),
    [anon_sym_DOTBITAND] = ACTIONS(237),
    [anon_sym_AMP] = ACTIONS(239),
    [anon_sym_DOTBITXOR] = ACTIONS(237),
    [anon_sym_DOTSHL] = ACTIONS(237),
    [anon_sym_LT_LT] = ACTIONS(237),
    [anon_sym_DOTSHR] = ACTIONS(237),
    [anon_sym_GT_GT] = ACTIONS(237),
    [anon_sym_DOTBITOR] = ACTIONS(237),
    [anon_sym_PIPE] = ACTIONS(239),
    [anon_sym_EQ] = ACTIONS(237),
    [anon_sym_LT_GT] = ACTIONS(237),
    [anon_sym_LT_EQ] = ACTIONS(237),
    [anon_sym_GT_EQ] = ACTIONS(237),
    [anon_sym_DOTAND] = ACTIONS(237),
    [anon_sym_AMP_AMP] = ACTIONS(237),
    [anon_sym_DOTXOR] = ACTIONS(237),
    [anon_sym_DOTOR] = ACTIONS(237),
    [anon_sym_PIPE_PIPE] = ACTIONS(237),
    [sym_a16_ctrl_cmd] = ACTIONS(237),
    [sym_a8_ctrl_cmd] = ACTIONS(237),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(237),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(237),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(237),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(237),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(237),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(237),
    [sym_bss_ctrl_cmd] = ACTIONS(237),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(237),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(237),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(241),
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_RPAREN] = ACTIONS(241),
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
    [anon_sym_PLUS] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(241),
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(241),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_DOTMOD] = ACTIONS(241),
    [anon_sym_DOTBITAND] = ACTIONS(241),
    [anon_sym_AMP] = ACTIONS(243),
    [anon_sym_DOTBITXOR] = ACTIONS(241),
    [anon_sym_DOTSHL] = ACTIONS(241),
    [anon_sym_LT_LT] = ACTIONS(241),
    [anon_sym_DOTSHR] = ACTIONS(241),
    [anon_sym_GT_GT] = ACTIONS(241),
    [anon_sym_DOTBITOR] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(243),
    [anon_sym_EQ] = ACTIONS(241),
    [anon_sym_LT_GT] = ACTIONS(241),
    [anon_sym_LT_EQ] = ACTIONS(241),
    [anon_sym_GT_EQ] = ACTIONS(241),
    [anon_sym_DOTAND] = ACTIONS(241),
    [anon_sym_AMP_AMP] = ACTIONS(241),
    [anon_sym_DOTXOR] = ACTIONS(241),
    [anon_sym_DOTOR] = ACTIONS(241),
    [anon_sym_PIPE_PIPE] = ACTIONS(241),
    [sym_a16_ctrl_cmd] = ACTIONS(241),
    [sym_a8_ctrl_cmd] = ACTIONS(241),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(241),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(241),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(241),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(241),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(241),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(241),
    [sym_bss_ctrl_cmd] = ACTIONS(241),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(241),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(241),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
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
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_DOTMOD] = ACTIONS(77),
    [anon_sym_DOTBITAND] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_DOTBITXOR] = ACTIONS(71),
    [anon_sym_DOTSHL] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_DOTSHR] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_DOTBITOR] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(245),
    [anon_sym_LT_GT] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_DOTAND] = ACTIONS(245),
    [anon_sym_AMP_AMP] = ACTIONS(245),
    [anon_sym_DOTXOR] = ACTIONS(245),
    [anon_sym_DOTOR] = ACTIONS(245),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [sym_a16_ctrl_cmd] = ACTIONS(245),
    [sym_a8_ctrl_cmd] = ACTIONS(245),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(245),
    [sym_bss_ctrl_cmd] = ACTIONS(245),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(245),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(245),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(249),
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
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_CARET] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_DOTMOD] = ACTIONS(249),
    [anon_sym_DOTBITAND] = ACTIONS(249),
    [anon_sym_AMP] = ACTIONS(251),
    [anon_sym_DOTBITXOR] = ACTIONS(249),
    [anon_sym_DOTSHL] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_DOTSHR] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(249),
    [anon_sym_DOTBITOR] = ACTIONS(249),
    [anon_sym_PIPE] = ACTIONS(251),
    [anon_sym_EQ] = ACTIONS(249),
    [anon_sym_LT_GT] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_DOTAND] = ACTIONS(249),
    [anon_sym_AMP_AMP] = ACTIONS(249),
    [anon_sym_DOTXOR] = ACTIONS(249),
    [anon_sym_DOTOR] = ACTIONS(249),
    [anon_sym_PIPE_PIPE] = ACTIONS(249),
    [sym_a16_ctrl_cmd] = ACTIONS(249),
    [sym_a8_ctrl_cmd] = ACTIONS(249),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(249),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(249),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(249),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(249),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(249),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(249),
    [sym_bss_ctrl_cmd] = ACTIONS(249),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(249),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(249),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(253),
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_RPAREN] = ACTIONS(253),
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
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_DOTMOD] = ACTIONS(77),
    [anon_sym_DOTBITAND] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_DOTBITXOR] = ACTIONS(71),
    [anon_sym_DOTSHL] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_DOTSHR] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_DOTBITOR] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(143),
    [anon_sym_LT_GT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_DOTAND] = ACTIONS(253),
    [anon_sym_AMP_AMP] = ACTIONS(253),
    [anon_sym_DOTXOR] = ACTIONS(253),
    [anon_sym_DOTOR] = ACTIONS(253),
    [anon_sym_PIPE_PIPE] = ACTIONS(253),
    [sym_a16_ctrl_cmd] = ACTIONS(253),
    [sym_a8_ctrl_cmd] = ACTIONS(253),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(253),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(253),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(253),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(253),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(253),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(253),
    [sym_bss_ctrl_cmd] = ACTIONS(253),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(253),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(253),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(257),
    [anon_sym_COMMA] = ACTIONS(257),
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
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_DOTMOD] = ACTIONS(77),
    [anon_sym_DOTBITAND] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_DOTBITXOR] = ACTIONS(71),
    [anon_sym_DOTSHL] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_DOTSHR] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_DOTBITOR] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(143),
    [anon_sym_LT_GT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_DOTAND] = ACTIONS(171),
    [anon_sym_AMP_AMP] = ACTIONS(171),
    [anon_sym_DOTXOR] = ACTIONS(173),
    [anon_sym_DOTOR] = ACTIONS(175),
    [anon_sym_PIPE_PIPE] = ACTIONS(175),
    [sym_a16_ctrl_cmd] = ACTIONS(257),
    [sym_a8_ctrl_cmd] = ACTIONS(257),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(257),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(257),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(257),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(257),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(257),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(257),
    [sym_bss_ctrl_cmd] = ACTIONS(257),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(257),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(257),
  },
  [42] = {
    [sym_inst] = STATE(43),
    [sym_impl_addr_inst] = STATE(80),
    [sym_acc_addr_inst] = STATE(80),
    [sym_imm_addr_inst] = STATE(80),
    [sym_abs_addr_inst] = STATE(80),
    [sym_zp_addr_inst] = STATE(80),
    [sym_abs_x_addr_inst] = STATE(80),
    [sym_abs_y_addr_inst] = STATE(80),
    [sym_zp_x_addr_inst] = STATE(80),
    [sym_zp_y_addr_inst] = STATE(80),
    [sym_ind_addr_inst] = STATE(80),
    [sym_ind_x_addr_inst] = STATE(80),
    [sym_ind_y_addr_inst] = STATE(80),
    [sym_rel_addr_inst] = STATE(80),
    [sym_ctrl_cmd] = STATE(43),
    [sym_addr_ctrl_cmd] = STATE(82),
    [sym_align_ctrl_cmd] = STATE(82),
    [sym_asciiz_ctrl_cmd] = STATE(82),
    [sym_assert_ctrl_cmd] = STATE(82),
    [sym_autoimport_ctrl_cmd] = STATE(82),
    [sym_bankbytes_ctrl_cmd] = STATE(82),
    [sym_byte_ctrl_cmd] = STATE(82),
    [sym_case_ctrl_cmd] = STATE(82),
    [aux_sym_ca65_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(261),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(263),
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
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(47),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(49),
    [sym_bss_ctrl_cmd] = ACTIONS(37),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(51),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(53),
  },
  [43] = {
    [sym_inst] = STATE(43),
    [sym_impl_addr_inst] = STATE(80),
    [sym_acc_addr_inst] = STATE(80),
    [sym_imm_addr_inst] = STATE(80),
    [sym_abs_addr_inst] = STATE(80),
    [sym_zp_addr_inst] = STATE(80),
    [sym_abs_x_addr_inst] = STATE(80),
    [sym_abs_y_addr_inst] = STATE(80),
    [sym_zp_x_addr_inst] = STATE(80),
    [sym_zp_y_addr_inst] = STATE(80),
    [sym_ind_addr_inst] = STATE(80),
    [sym_ind_x_addr_inst] = STATE(80),
    [sym_ind_y_addr_inst] = STATE(80),
    [sym_rel_addr_inst] = STATE(80),
    [sym_ctrl_cmd] = STATE(43),
    [sym_addr_ctrl_cmd] = STATE(82),
    [sym_align_ctrl_cmd] = STATE(82),
    [sym_asciiz_ctrl_cmd] = STATE(82),
    [sym_assert_ctrl_cmd] = STATE(82),
    [sym_autoimport_ctrl_cmd] = STATE(82),
    [sym_bankbytes_ctrl_cmd] = STATE(82),
    [sym_byte_ctrl_cmd] = STATE(82),
    [sym_case_ctrl_cmd] = STATE(82),
    [aux_sym_ca65_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(265),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(267),
    [sym_adc_opcode] = ACTIONS(270),
    [sym_and_opcode] = ACTIONS(270),
    [sym_asl_opcode] = ACTIONS(273),
    [sym_bcc_opcode] = ACTIONS(276),
    [sym_bcs_opcode] = ACTIONS(276),
    [sym_beq_opcode] = ACTIONS(276),
    [sym_bit_opcode] = ACTIONS(279),
    [sym_bmi_opcode] = ACTIONS(276),
    [sym_bne_opcode] = ACTIONS(276),
    [sym_bpl_opcode] = ACTIONS(276),
    [sym_brk_opcode] = ACTIONS(282),
    [sym_bvc_opcode] = ACTIONS(276),
    [sym_bvs_opcode] = ACTIONS(276),
    [sym_clc_opcode] = ACTIONS(282),
    [sym_cld_opcode] = ACTIONS(282),
    [sym_cli_opcode] = ACTIONS(282),
    [sym_clv_opcode] = ACTIONS(282),
    [sym_cmp_opcode] = ACTIONS(270),
    [sym_cpx_opcode] = ACTIONS(285),
    [sym_cpy_opcode] = ACTIONS(285),
    [sym_dec_opcode] = ACTIONS(288),
    [sym_dex_opcode] = ACTIONS(282),
    [sym_dey_opcode] = ACTIONS(282),
    [sym_eor_opcode] = ACTIONS(270),
    [sym_inc_opcode] = ACTIONS(288),
    [sym_inx_opcode] = ACTIONS(282),
    [sym_iny_opcode] = ACTIONS(282),
    [sym_jmp_opcode] = ACTIONS(291),
    [sym_jsr_opcode] = ACTIONS(294),
    [sym_lda_opcode] = ACTIONS(270),
    [sym_ldx_opcode] = ACTIONS(297),
    [sym_ldy_opcode] = ACTIONS(300),
    [sym_lsr_opcode] = ACTIONS(300),
    [sym_nop_opcode] = ACTIONS(282),
    [sym_ora_opcode] = ACTIONS(270),
    [sym_pha_opcode] = ACTIONS(282),
    [sym_php_opcode] = ACTIONS(282),
    [sym_pla_opcode] = ACTIONS(282),
    [sym_plp_opcode] = ACTIONS(282),
    [sym_rol_opcode] = ACTIONS(273),
    [sym_ror_opcode] = ACTIONS(273),
    [sym_rti_opcode] = ACTIONS(282),
    [sym_rts_opcode] = ACTIONS(282),
    [sym_sbc_opcode] = ACTIONS(270),
    [sym_sec_opcode] = ACTIONS(282),
    [sym_sed_opcode] = ACTIONS(282),
    [sym_sei_opcode] = ACTIONS(282),
    [sym_sta_opcode] = ACTIONS(303),
    [sym_stx_opcode] = ACTIONS(306),
    [sym_sty_opcode] = ACTIONS(309),
    [sym_tax_opcode] = ACTIONS(282),
    [sym_tay_opcode] = ACTIONS(282),
    [sym_tsx_opcode] = ACTIONS(282),
    [sym_txa_opcode] = ACTIONS(282),
    [sym_tcs_opcode] = ACTIONS(282),
    [sym_tya_opcode] = ACTIONS(282),
    [sym_a16_ctrl_cmd] = ACTIONS(312),
    [sym_a8_ctrl_cmd] = ACTIONS(312),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(315),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(318),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(321),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(324),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(327),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(330),
    [sym_bss_ctrl_cmd] = ACTIONS(312),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(333),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(336),
  },
  [44] = {
    [aux_sym_bankbytes_ctrl_cmd_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(257),
    [anon_sym_COMMA] = ACTIONS(339),
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
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(257),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(257),
    [sym_bss_ctrl_cmd] = ACTIONS(257),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(257),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(257),
  },
  [45] = {
    [aux_sym_addr_ctrl_cmd_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(342),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(344),
    [sym_adc_opcode] = ACTIONS(346),
    [sym_and_opcode] = ACTIONS(346),
    [sym_asl_opcode] = ACTIONS(346),
    [sym_bcc_opcode] = ACTIONS(346),
    [sym_bcs_opcode] = ACTIONS(346),
    [sym_beq_opcode] = ACTIONS(346),
    [sym_bit_opcode] = ACTIONS(346),
    [sym_bmi_opcode] = ACTIONS(346),
    [sym_bne_opcode] = ACTIONS(346),
    [sym_bpl_opcode] = ACTIONS(346),
    [sym_brk_opcode] = ACTIONS(346),
    [sym_bvc_opcode] = ACTIONS(346),
    [sym_bvs_opcode] = ACTIONS(346),
    [sym_clc_opcode] = ACTIONS(346),
    [sym_cld_opcode] = ACTIONS(346),
    [sym_cli_opcode] = ACTIONS(346),
    [sym_clv_opcode] = ACTIONS(346),
    [sym_cmp_opcode] = ACTIONS(346),
    [sym_cpx_opcode] = ACTIONS(346),
    [sym_cpy_opcode] = ACTIONS(346),
    [sym_dec_opcode] = ACTIONS(346),
    [sym_dex_opcode] = ACTIONS(346),
    [sym_dey_opcode] = ACTIONS(346),
    [sym_eor_opcode] = ACTIONS(346),
    [sym_inc_opcode] = ACTIONS(346),
    [sym_inx_opcode] = ACTIONS(346),
    [sym_iny_opcode] = ACTIONS(346),
    [sym_jmp_opcode] = ACTIONS(346),
    [sym_jsr_opcode] = ACTIONS(346),
    [sym_lda_opcode] = ACTIONS(346),
    [sym_ldx_opcode] = ACTIONS(346),
    [sym_ldy_opcode] = ACTIONS(346),
    [sym_lsr_opcode] = ACTIONS(346),
    [sym_nop_opcode] = ACTIONS(346),
    [sym_ora_opcode] = ACTIONS(346),
    [sym_pha_opcode] = ACTIONS(346),
    [sym_php_opcode] = ACTIONS(346),
    [sym_pla_opcode] = ACTIONS(346),
    [sym_plp_opcode] = ACTIONS(346),
    [sym_rol_opcode] = ACTIONS(346),
    [sym_ror_opcode] = ACTIONS(346),
    [sym_rti_opcode] = ACTIONS(346),
    [sym_rts_opcode] = ACTIONS(346),
    [sym_sbc_opcode] = ACTIONS(346),
    [sym_sec_opcode] = ACTIONS(346),
    [sym_sed_opcode] = ACTIONS(346),
    [sym_sei_opcode] = ACTIONS(346),
    [sym_sta_opcode] = ACTIONS(346),
    [sym_stx_opcode] = ACTIONS(346),
    [sym_sty_opcode] = ACTIONS(346),
    [sym_tax_opcode] = ACTIONS(346),
    [sym_tay_opcode] = ACTIONS(346),
    [sym_tsx_opcode] = ACTIONS(346),
    [sym_txa_opcode] = ACTIONS(346),
    [sym_tcs_opcode] = ACTIONS(346),
    [sym_tya_opcode] = ACTIONS(346),
    [sym_a16_ctrl_cmd] = ACTIONS(342),
    [sym_a8_ctrl_cmd] = ACTIONS(342),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(342),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(342),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(342),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(342),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(342),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(342),
    [sym_bss_ctrl_cmd] = ACTIONS(342),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(342),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(342),
  },
  [46] = {
    [aux_sym_asciiz_ctrl_cmd_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(348),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(348),
    [anon_sym_COMMA] = ACTIONS(350),
    [sym_adc_opcode] = ACTIONS(352),
    [sym_and_opcode] = ACTIONS(352),
    [sym_asl_opcode] = ACTIONS(352),
    [sym_bcc_opcode] = ACTIONS(352),
    [sym_bcs_opcode] = ACTIONS(352),
    [sym_beq_opcode] = ACTIONS(352),
    [sym_bit_opcode] = ACTIONS(352),
    [sym_bmi_opcode] = ACTIONS(352),
    [sym_bne_opcode] = ACTIONS(352),
    [sym_bpl_opcode] = ACTIONS(352),
    [sym_brk_opcode] = ACTIONS(352),
    [sym_bvc_opcode] = ACTIONS(352),
    [sym_bvs_opcode] = ACTIONS(352),
    [sym_clc_opcode] = ACTIONS(352),
    [sym_cld_opcode] = ACTIONS(352),
    [sym_cli_opcode] = ACTIONS(352),
    [sym_clv_opcode] = ACTIONS(352),
    [sym_cmp_opcode] = ACTIONS(352),
    [sym_cpx_opcode] = ACTIONS(352),
    [sym_cpy_opcode] = ACTIONS(352),
    [sym_dec_opcode] = ACTIONS(352),
    [sym_dex_opcode] = ACTIONS(352),
    [sym_dey_opcode] = ACTIONS(352),
    [sym_eor_opcode] = ACTIONS(352),
    [sym_inc_opcode] = ACTIONS(352),
    [sym_inx_opcode] = ACTIONS(352),
    [sym_iny_opcode] = ACTIONS(352),
    [sym_jmp_opcode] = ACTIONS(352),
    [sym_jsr_opcode] = ACTIONS(352),
    [sym_lda_opcode] = ACTIONS(352),
    [sym_ldx_opcode] = ACTIONS(352),
    [sym_ldy_opcode] = ACTIONS(352),
    [sym_lsr_opcode] = ACTIONS(352),
    [sym_nop_opcode] = ACTIONS(352),
    [sym_ora_opcode] = ACTIONS(352),
    [sym_pha_opcode] = ACTIONS(352),
    [sym_php_opcode] = ACTIONS(352),
    [sym_pla_opcode] = ACTIONS(352),
    [sym_plp_opcode] = ACTIONS(352),
    [sym_rol_opcode] = ACTIONS(352),
    [sym_ror_opcode] = ACTIONS(352),
    [sym_rti_opcode] = ACTIONS(352),
    [sym_rts_opcode] = ACTIONS(352),
    [sym_sbc_opcode] = ACTIONS(352),
    [sym_sec_opcode] = ACTIONS(352),
    [sym_sed_opcode] = ACTIONS(352),
    [sym_sei_opcode] = ACTIONS(352),
    [sym_sta_opcode] = ACTIONS(352),
    [sym_stx_opcode] = ACTIONS(352),
    [sym_sty_opcode] = ACTIONS(352),
    [sym_tax_opcode] = ACTIONS(352),
    [sym_tay_opcode] = ACTIONS(352),
    [sym_tsx_opcode] = ACTIONS(352),
    [sym_txa_opcode] = ACTIONS(352),
    [sym_tcs_opcode] = ACTIONS(352),
    [sym_tya_opcode] = ACTIONS(352),
    [sym_a16_ctrl_cmd] = ACTIONS(348),
    [sym_a8_ctrl_cmd] = ACTIONS(348),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(348),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(348),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(348),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(348),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(348),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(348),
    [sym_bss_ctrl_cmd] = ACTIONS(348),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(348),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(348),
  },
  [47] = {
    [aux_sym_bankbytes_ctrl_cmd_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(354),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(354),
    [anon_sym_COMMA] = ACTIONS(179),
    [sym_adc_opcode] = ACTIONS(356),
    [sym_and_opcode] = ACTIONS(356),
    [sym_asl_opcode] = ACTIONS(356),
    [sym_bcc_opcode] = ACTIONS(356),
    [sym_bcs_opcode] = ACTIONS(356),
    [sym_beq_opcode] = ACTIONS(356),
    [sym_bit_opcode] = ACTIONS(356),
    [sym_bmi_opcode] = ACTIONS(356),
    [sym_bne_opcode] = ACTIONS(356),
    [sym_bpl_opcode] = ACTIONS(356),
    [sym_brk_opcode] = ACTIONS(356),
    [sym_bvc_opcode] = ACTIONS(356),
    [sym_bvs_opcode] = ACTIONS(356),
    [sym_clc_opcode] = ACTIONS(356),
    [sym_cld_opcode] = ACTIONS(356),
    [sym_cli_opcode] = ACTIONS(356),
    [sym_clv_opcode] = ACTIONS(356),
    [sym_cmp_opcode] = ACTIONS(356),
    [sym_cpx_opcode] = ACTIONS(356),
    [sym_cpy_opcode] = ACTIONS(356),
    [sym_dec_opcode] = ACTIONS(356),
    [sym_dex_opcode] = ACTIONS(356),
    [sym_dey_opcode] = ACTIONS(356),
    [sym_eor_opcode] = ACTIONS(356),
    [sym_inc_opcode] = ACTIONS(356),
    [sym_inx_opcode] = ACTIONS(356),
    [sym_iny_opcode] = ACTIONS(356),
    [sym_jmp_opcode] = ACTIONS(356),
    [sym_jsr_opcode] = ACTIONS(356),
    [sym_lda_opcode] = ACTIONS(356),
    [sym_ldx_opcode] = ACTIONS(356),
    [sym_ldy_opcode] = ACTIONS(356),
    [sym_lsr_opcode] = ACTIONS(356),
    [sym_nop_opcode] = ACTIONS(356),
    [sym_ora_opcode] = ACTIONS(356),
    [sym_pha_opcode] = ACTIONS(356),
    [sym_php_opcode] = ACTIONS(356),
    [sym_pla_opcode] = ACTIONS(356),
    [sym_plp_opcode] = ACTIONS(356),
    [sym_rol_opcode] = ACTIONS(356),
    [sym_ror_opcode] = ACTIONS(356),
    [sym_rti_opcode] = ACTIONS(356),
    [sym_rts_opcode] = ACTIONS(356),
    [sym_sbc_opcode] = ACTIONS(356),
    [sym_sec_opcode] = ACTIONS(356),
    [sym_sed_opcode] = ACTIONS(356),
    [sym_sei_opcode] = ACTIONS(356),
    [sym_sta_opcode] = ACTIONS(356),
    [sym_stx_opcode] = ACTIONS(356),
    [sym_sty_opcode] = ACTIONS(356),
    [sym_tax_opcode] = ACTIONS(356),
    [sym_tay_opcode] = ACTIONS(356),
    [sym_tsx_opcode] = ACTIONS(356),
    [sym_txa_opcode] = ACTIONS(356),
    [sym_tcs_opcode] = ACTIONS(356),
    [sym_tya_opcode] = ACTIONS(356),
    [sym_a16_ctrl_cmd] = ACTIONS(354),
    [sym_a8_ctrl_cmd] = ACTIONS(354),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(354),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(354),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(354),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(354),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(354),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(354),
    [sym_bss_ctrl_cmd] = ACTIONS(354),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(354),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(354),
  },
  [48] = {
    [aux_sym_bankbytes_ctrl_cmd_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(358),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(358),
    [anon_sym_COMMA] = ACTIONS(179),
    [sym_adc_opcode] = ACTIONS(360),
    [sym_and_opcode] = ACTIONS(360),
    [sym_asl_opcode] = ACTIONS(360),
    [sym_bcc_opcode] = ACTIONS(360),
    [sym_bcs_opcode] = ACTIONS(360),
    [sym_beq_opcode] = ACTIONS(360),
    [sym_bit_opcode] = ACTIONS(360),
    [sym_bmi_opcode] = ACTIONS(360),
    [sym_bne_opcode] = ACTIONS(360),
    [sym_bpl_opcode] = ACTIONS(360),
    [sym_brk_opcode] = ACTIONS(360),
    [sym_bvc_opcode] = ACTIONS(360),
    [sym_bvs_opcode] = ACTIONS(360),
    [sym_clc_opcode] = ACTIONS(360),
    [sym_cld_opcode] = ACTIONS(360),
    [sym_cli_opcode] = ACTIONS(360),
    [sym_clv_opcode] = ACTIONS(360),
    [sym_cmp_opcode] = ACTIONS(360),
    [sym_cpx_opcode] = ACTIONS(360),
    [sym_cpy_opcode] = ACTIONS(360),
    [sym_dec_opcode] = ACTIONS(360),
    [sym_dex_opcode] = ACTIONS(360),
    [sym_dey_opcode] = ACTIONS(360),
    [sym_eor_opcode] = ACTIONS(360),
    [sym_inc_opcode] = ACTIONS(360),
    [sym_inx_opcode] = ACTIONS(360),
    [sym_iny_opcode] = ACTIONS(360),
    [sym_jmp_opcode] = ACTIONS(360),
    [sym_jsr_opcode] = ACTIONS(360),
    [sym_lda_opcode] = ACTIONS(360),
    [sym_ldx_opcode] = ACTIONS(360),
    [sym_ldy_opcode] = ACTIONS(360),
    [sym_lsr_opcode] = ACTIONS(360),
    [sym_nop_opcode] = ACTIONS(360),
    [sym_ora_opcode] = ACTIONS(360),
    [sym_pha_opcode] = ACTIONS(360),
    [sym_php_opcode] = ACTIONS(360),
    [sym_pla_opcode] = ACTIONS(360),
    [sym_plp_opcode] = ACTIONS(360),
    [sym_rol_opcode] = ACTIONS(360),
    [sym_ror_opcode] = ACTIONS(360),
    [sym_rti_opcode] = ACTIONS(360),
    [sym_rts_opcode] = ACTIONS(360),
    [sym_sbc_opcode] = ACTIONS(360),
    [sym_sec_opcode] = ACTIONS(360),
    [sym_sed_opcode] = ACTIONS(360),
    [sym_sei_opcode] = ACTIONS(360),
    [sym_sta_opcode] = ACTIONS(360),
    [sym_stx_opcode] = ACTIONS(360),
    [sym_sty_opcode] = ACTIONS(360),
    [sym_tax_opcode] = ACTIONS(360),
    [sym_tay_opcode] = ACTIONS(360),
    [sym_tsx_opcode] = ACTIONS(360),
    [sym_txa_opcode] = ACTIONS(360),
    [sym_tcs_opcode] = ACTIONS(360),
    [sym_tya_opcode] = ACTIONS(360),
    [sym_a16_ctrl_cmd] = ACTIONS(358),
    [sym_a8_ctrl_cmd] = ACTIONS(358),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(358),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(358),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(358),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(358),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(358),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(358),
    [sym_bss_ctrl_cmd] = ACTIONS(358),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(358),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(358),
  },
  [49] = {
    [aux_sym_addr_ctrl_cmd_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(362),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(362),
    [anon_sym_COMMA] = ACTIONS(344),
    [sym_adc_opcode] = ACTIONS(364),
    [sym_and_opcode] = ACTIONS(364),
    [sym_asl_opcode] = ACTIONS(364),
    [sym_bcc_opcode] = ACTIONS(364),
    [sym_bcs_opcode] = ACTIONS(364),
    [sym_beq_opcode] = ACTIONS(364),
    [sym_bit_opcode] = ACTIONS(364),
    [sym_bmi_opcode] = ACTIONS(364),
    [sym_bne_opcode] = ACTIONS(364),
    [sym_bpl_opcode] = ACTIONS(364),
    [sym_brk_opcode] = ACTIONS(364),
    [sym_bvc_opcode] = ACTIONS(364),
    [sym_bvs_opcode] = ACTIONS(364),
    [sym_clc_opcode] = ACTIONS(364),
    [sym_cld_opcode] = ACTIONS(364),
    [sym_cli_opcode] = ACTIONS(364),
    [sym_clv_opcode] = ACTIONS(364),
    [sym_cmp_opcode] = ACTIONS(364),
    [sym_cpx_opcode] = ACTIONS(364),
    [sym_cpy_opcode] = ACTIONS(364),
    [sym_dec_opcode] = ACTIONS(364),
    [sym_dex_opcode] = ACTIONS(364),
    [sym_dey_opcode] = ACTIONS(364),
    [sym_eor_opcode] = ACTIONS(364),
    [sym_inc_opcode] = ACTIONS(364),
    [sym_inx_opcode] = ACTIONS(364),
    [sym_iny_opcode] = ACTIONS(364),
    [sym_jmp_opcode] = ACTIONS(364),
    [sym_jsr_opcode] = ACTIONS(364),
    [sym_lda_opcode] = ACTIONS(364),
    [sym_ldx_opcode] = ACTIONS(364),
    [sym_ldy_opcode] = ACTIONS(364),
    [sym_lsr_opcode] = ACTIONS(364),
    [sym_nop_opcode] = ACTIONS(364),
    [sym_ora_opcode] = ACTIONS(364),
    [sym_pha_opcode] = ACTIONS(364),
    [sym_php_opcode] = ACTIONS(364),
    [sym_pla_opcode] = ACTIONS(364),
    [sym_plp_opcode] = ACTIONS(364),
    [sym_rol_opcode] = ACTIONS(364),
    [sym_ror_opcode] = ACTIONS(364),
    [sym_rti_opcode] = ACTIONS(364),
    [sym_rts_opcode] = ACTIONS(364),
    [sym_sbc_opcode] = ACTIONS(364),
    [sym_sec_opcode] = ACTIONS(364),
    [sym_sed_opcode] = ACTIONS(364),
    [sym_sei_opcode] = ACTIONS(364),
    [sym_sta_opcode] = ACTIONS(364),
    [sym_stx_opcode] = ACTIONS(364),
    [sym_sty_opcode] = ACTIONS(364),
    [sym_tax_opcode] = ACTIONS(364),
    [sym_tay_opcode] = ACTIONS(364),
    [sym_tsx_opcode] = ACTIONS(364),
    [sym_txa_opcode] = ACTIONS(364),
    [sym_tcs_opcode] = ACTIONS(364),
    [sym_tya_opcode] = ACTIONS(364),
    [sym_a16_ctrl_cmd] = ACTIONS(362),
    [sym_a8_ctrl_cmd] = ACTIONS(362),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(362),
    [sym_bss_ctrl_cmd] = ACTIONS(362),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(362),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(362),
  },
  [50] = {
    [aux_sym_asciiz_ctrl_cmd_repeat1] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(366),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(366),
    [anon_sym_COMMA] = ACTIONS(350),
    [sym_adc_opcode] = ACTIONS(368),
    [sym_and_opcode] = ACTIONS(368),
    [sym_asl_opcode] = ACTIONS(368),
    [sym_bcc_opcode] = ACTIONS(368),
    [sym_bcs_opcode] = ACTIONS(368),
    [sym_beq_opcode] = ACTIONS(368),
    [sym_bit_opcode] = ACTIONS(368),
    [sym_bmi_opcode] = ACTIONS(368),
    [sym_bne_opcode] = ACTIONS(368),
    [sym_bpl_opcode] = ACTIONS(368),
    [sym_brk_opcode] = ACTIONS(368),
    [sym_bvc_opcode] = ACTIONS(368),
    [sym_bvs_opcode] = ACTIONS(368),
    [sym_clc_opcode] = ACTIONS(368),
    [sym_cld_opcode] = ACTIONS(368),
    [sym_cli_opcode] = ACTIONS(368),
    [sym_clv_opcode] = ACTIONS(368),
    [sym_cmp_opcode] = ACTIONS(368),
    [sym_cpx_opcode] = ACTIONS(368),
    [sym_cpy_opcode] = ACTIONS(368),
    [sym_dec_opcode] = ACTIONS(368),
    [sym_dex_opcode] = ACTIONS(368),
    [sym_dey_opcode] = ACTIONS(368),
    [sym_eor_opcode] = ACTIONS(368),
    [sym_inc_opcode] = ACTIONS(368),
    [sym_inx_opcode] = ACTIONS(368),
    [sym_iny_opcode] = ACTIONS(368),
    [sym_jmp_opcode] = ACTIONS(368),
    [sym_jsr_opcode] = ACTIONS(368),
    [sym_lda_opcode] = ACTIONS(368),
    [sym_ldx_opcode] = ACTIONS(368),
    [sym_ldy_opcode] = ACTIONS(368),
    [sym_lsr_opcode] = ACTIONS(368),
    [sym_nop_opcode] = ACTIONS(368),
    [sym_ora_opcode] = ACTIONS(368),
    [sym_pha_opcode] = ACTIONS(368),
    [sym_php_opcode] = ACTIONS(368),
    [sym_pla_opcode] = ACTIONS(368),
    [sym_plp_opcode] = ACTIONS(368),
    [sym_rol_opcode] = ACTIONS(368),
    [sym_ror_opcode] = ACTIONS(368),
    [sym_rti_opcode] = ACTIONS(368),
    [sym_rts_opcode] = ACTIONS(368),
    [sym_sbc_opcode] = ACTIONS(368),
    [sym_sec_opcode] = ACTIONS(368),
    [sym_sed_opcode] = ACTIONS(368),
    [sym_sei_opcode] = ACTIONS(368),
    [sym_sta_opcode] = ACTIONS(368),
    [sym_stx_opcode] = ACTIONS(368),
    [sym_sty_opcode] = ACTIONS(368),
    [sym_tax_opcode] = ACTIONS(368),
    [sym_tay_opcode] = ACTIONS(368),
    [sym_tsx_opcode] = ACTIONS(368),
    [sym_txa_opcode] = ACTIONS(368),
    [sym_tcs_opcode] = ACTIONS(368),
    [sym_tya_opcode] = ACTIONS(368),
    [sym_a16_ctrl_cmd] = ACTIONS(366),
    [sym_a8_ctrl_cmd] = ACTIONS(366),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(366),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(366),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(366),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(366),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(366),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(366),
    [sym_bss_ctrl_cmd] = ACTIONS(366),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(366),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(366),
  },
  [51] = {
    [aux_sym_addr_ctrl_cmd_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(370),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(370),
    [anon_sym_COMMA] = ACTIONS(372),
    [sym_adc_opcode] = ACTIONS(375),
    [sym_and_opcode] = ACTIONS(375),
    [sym_asl_opcode] = ACTIONS(375),
    [sym_bcc_opcode] = ACTIONS(375),
    [sym_bcs_opcode] = ACTIONS(375),
    [sym_beq_opcode] = ACTIONS(375),
    [sym_bit_opcode] = ACTIONS(375),
    [sym_bmi_opcode] = ACTIONS(375),
    [sym_bne_opcode] = ACTIONS(375),
    [sym_bpl_opcode] = ACTIONS(375),
    [sym_brk_opcode] = ACTIONS(375),
    [sym_bvc_opcode] = ACTIONS(375),
    [sym_bvs_opcode] = ACTIONS(375),
    [sym_clc_opcode] = ACTIONS(375),
    [sym_cld_opcode] = ACTIONS(375),
    [sym_cli_opcode] = ACTIONS(375),
    [sym_clv_opcode] = ACTIONS(375),
    [sym_cmp_opcode] = ACTIONS(375),
    [sym_cpx_opcode] = ACTIONS(375),
    [sym_cpy_opcode] = ACTIONS(375),
    [sym_dec_opcode] = ACTIONS(375),
    [sym_dex_opcode] = ACTIONS(375),
    [sym_dey_opcode] = ACTIONS(375),
    [sym_eor_opcode] = ACTIONS(375),
    [sym_inc_opcode] = ACTIONS(375),
    [sym_inx_opcode] = ACTIONS(375),
    [sym_iny_opcode] = ACTIONS(375),
    [sym_jmp_opcode] = ACTIONS(375),
    [sym_jsr_opcode] = ACTIONS(375),
    [sym_lda_opcode] = ACTIONS(375),
    [sym_ldx_opcode] = ACTIONS(375),
    [sym_ldy_opcode] = ACTIONS(375),
    [sym_lsr_opcode] = ACTIONS(375),
    [sym_nop_opcode] = ACTIONS(375),
    [sym_ora_opcode] = ACTIONS(375),
    [sym_pha_opcode] = ACTIONS(375),
    [sym_php_opcode] = ACTIONS(375),
    [sym_pla_opcode] = ACTIONS(375),
    [sym_plp_opcode] = ACTIONS(375),
    [sym_rol_opcode] = ACTIONS(375),
    [sym_ror_opcode] = ACTIONS(375),
    [sym_rti_opcode] = ACTIONS(375),
    [sym_rts_opcode] = ACTIONS(375),
    [sym_sbc_opcode] = ACTIONS(375),
    [sym_sec_opcode] = ACTIONS(375),
    [sym_sed_opcode] = ACTIONS(375),
    [sym_sei_opcode] = ACTIONS(375),
    [sym_sta_opcode] = ACTIONS(375),
    [sym_stx_opcode] = ACTIONS(375),
    [sym_sty_opcode] = ACTIONS(375),
    [sym_tax_opcode] = ACTIONS(375),
    [sym_tay_opcode] = ACTIONS(375),
    [sym_tsx_opcode] = ACTIONS(375),
    [sym_txa_opcode] = ACTIONS(375),
    [sym_tcs_opcode] = ACTIONS(375),
    [sym_tya_opcode] = ACTIONS(375),
    [sym_a16_ctrl_cmd] = ACTIONS(370),
    [sym_a8_ctrl_cmd] = ACTIONS(370),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(370),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(370),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(370),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(370),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(370),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(370),
    [sym_bss_ctrl_cmd] = ACTIONS(370),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(370),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(370),
  },
  [52] = {
    [aux_sym_asciiz_ctrl_cmd_repeat1] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(377),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(377),
    [anon_sym_COMMA] = ACTIONS(379),
    [sym_adc_opcode] = ACTIONS(382),
    [sym_and_opcode] = ACTIONS(382),
    [sym_asl_opcode] = ACTIONS(382),
    [sym_bcc_opcode] = ACTIONS(382),
    [sym_bcs_opcode] = ACTIONS(382),
    [sym_beq_opcode] = ACTIONS(382),
    [sym_bit_opcode] = ACTIONS(382),
    [sym_bmi_opcode] = ACTIONS(382),
    [sym_bne_opcode] = ACTIONS(382),
    [sym_bpl_opcode] = ACTIONS(382),
    [sym_brk_opcode] = ACTIONS(382),
    [sym_bvc_opcode] = ACTIONS(382),
    [sym_bvs_opcode] = ACTIONS(382),
    [sym_clc_opcode] = ACTIONS(382),
    [sym_cld_opcode] = ACTIONS(382),
    [sym_cli_opcode] = ACTIONS(382),
    [sym_clv_opcode] = ACTIONS(382),
    [sym_cmp_opcode] = ACTIONS(382),
    [sym_cpx_opcode] = ACTIONS(382),
    [sym_cpy_opcode] = ACTIONS(382),
    [sym_dec_opcode] = ACTIONS(382),
    [sym_dex_opcode] = ACTIONS(382),
    [sym_dey_opcode] = ACTIONS(382),
    [sym_eor_opcode] = ACTIONS(382),
    [sym_inc_opcode] = ACTIONS(382),
    [sym_inx_opcode] = ACTIONS(382),
    [sym_iny_opcode] = ACTIONS(382),
    [sym_jmp_opcode] = ACTIONS(382),
    [sym_jsr_opcode] = ACTIONS(382),
    [sym_lda_opcode] = ACTIONS(382),
    [sym_ldx_opcode] = ACTIONS(382),
    [sym_ldy_opcode] = ACTIONS(382),
    [sym_lsr_opcode] = ACTIONS(382),
    [sym_nop_opcode] = ACTIONS(382),
    [sym_ora_opcode] = ACTIONS(382),
    [sym_pha_opcode] = ACTIONS(382),
    [sym_php_opcode] = ACTIONS(382),
    [sym_pla_opcode] = ACTIONS(382),
    [sym_plp_opcode] = ACTIONS(382),
    [sym_rol_opcode] = ACTIONS(382),
    [sym_ror_opcode] = ACTIONS(382),
    [sym_rti_opcode] = ACTIONS(382),
    [sym_rts_opcode] = ACTIONS(382),
    [sym_sbc_opcode] = ACTIONS(382),
    [sym_sec_opcode] = ACTIONS(382),
    [sym_sed_opcode] = ACTIONS(382),
    [sym_sei_opcode] = ACTIONS(382),
    [sym_sta_opcode] = ACTIONS(382),
    [sym_stx_opcode] = ACTIONS(382),
    [sym_sty_opcode] = ACTIONS(382),
    [sym_tax_opcode] = ACTIONS(382),
    [sym_tay_opcode] = ACTIONS(382),
    [sym_tsx_opcode] = ACTIONS(382),
    [sym_txa_opcode] = ACTIONS(382),
    [sym_tcs_opcode] = ACTIONS(382),
    [sym_tya_opcode] = ACTIONS(382),
    [sym_a16_ctrl_cmd] = ACTIONS(377),
    [sym_a8_ctrl_cmd] = ACTIONS(377),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(377),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(377),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(377),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(377),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(377),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(377),
    [sym_bss_ctrl_cmd] = ACTIONS(377),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(377),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(377),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(384),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(384),
    [anon_sym_COMMA] = ACTIONS(386),
    [sym_adc_opcode] = ACTIONS(388),
    [sym_and_opcode] = ACTIONS(388),
    [sym_asl_opcode] = ACTIONS(388),
    [sym_bcc_opcode] = ACTIONS(388),
    [sym_bcs_opcode] = ACTIONS(388),
    [sym_beq_opcode] = ACTIONS(388),
    [sym_bit_opcode] = ACTIONS(388),
    [sym_bmi_opcode] = ACTIONS(388),
    [sym_bne_opcode] = ACTIONS(388),
    [sym_bpl_opcode] = ACTIONS(388),
    [sym_brk_opcode] = ACTIONS(388),
    [sym_bvc_opcode] = ACTIONS(388),
    [sym_bvs_opcode] = ACTIONS(388),
    [sym_clc_opcode] = ACTIONS(388),
    [sym_cld_opcode] = ACTIONS(388),
    [sym_cli_opcode] = ACTIONS(388),
    [sym_clv_opcode] = ACTIONS(388),
    [sym_cmp_opcode] = ACTIONS(388),
    [sym_cpx_opcode] = ACTIONS(388),
    [sym_cpy_opcode] = ACTIONS(388),
    [sym_dec_opcode] = ACTIONS(388),
    [sym_dex_opcode] = ACTIONS(388),
    [sym_dey_opcode] = ACTIONS(388),
    [sym_eor_opcode] = ACTIONS(388),
    [sym_inc_opcode] = ACTIONS(388),
    [sym_inx_opcode] = ACTIONS(388),
    [sym_iny_opcode] = ACTIONS(388),
    [sym_jmp_opcode] = ACTIONS(388),
    [sym_jsr_opcode] = ACTIONS(388),
    [sym_lda_opcode] = ACTIONS(388),
    [sym_ldx_opcode] = ACTIONS(388),
    [sym_ldy_opcode] = ACTIONS(388),
    [sym_lsr_opcode] = ACTIONS(388),
    [sym_nop_opcode] = ACTIONS(388),
    [sym_ora_opcode] = ACTIONS(388),
    [sym_pha_opcode] = ACTIONS(388),
    [sym_php_opcode] = ACTIONS(388),
    [sym_pla_opcode] = ACTIONS(388),
    [sym_plp_opcode] = ACTIONS(388),
    [sym_rol_opcode] = ACTIONS(388),
    [sym_ror_opcode] = ACTIONS(388),
    [sym_rti_opcode] = ACTIONS(388),
    [sym_rts_opcode] = ACTIONS(388),
    [sym_sbc_opcode] = ACTIONS(388),
    [sym_sec_opcode] = ACTIONS(388),
    [sym_sed_opcode] = ACTIONS(388),
    [sym_sei_opcode] = ACTIONS(388),
    [sym_sta_opcode] = ACTIONS(388),
    [sym_stx_opcode] = ACTIONS(388),
    [sym_sty_opcode] = ACTIONS(388),
    [sym_tax_opcode] = ACTIONS(388),
    [sym_tay_opcode] = ACTIONS(388),
    [sym_tsx_opcode] = ACTIONS(388),
    [sym_txa_opcode] = ACTIONS(388),
    [sym_tcs_opcode] = ACTIONS(388),
    [sym_tya_opcode] = ACTIONS(388),
    [sym_a16_ctrl_cmd] = ACTIONS(384),
    [sym_a8_ctrl_cmd] = ACTIONS(384),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(384),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(384),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(384),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(384),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(384),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(384),
    [sym_bss_ctrl_cmd] = ACTIONS(384),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(384),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(384),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(390),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(390),
    [anon_sym_COMMA] = ACTIONS(392),
    [sym_adc_opcode] = ACTIONS(394),
    [sym_and_opcode] = ACTIONS(394),
    [sym_asl_opcode] = ACTIONS(394),
    [sym_bcc_opcode] = ACTIONS(394),
    [sym_bcs_opcode] = ACTIONS(394),
    [sym_beq_opcode] = ACTIONS(394),
    [sym_bit_opcode] = ACTIONS(394),
    [sym_bmi_opcode] = ACTIONS(394),
    [sym_bne_opcode] = ACTIONS(394),
    [sym_bpl_opcode] = ACTIONS(394),
    [sym_brk_opcode] = ACTIONS(394),
    [sym_bvc_opcode] = ACTIONS(394),
    [sym_bvs_opcode] = ACTIONS(394),
    [sym_clc_opcode] = ACTIONS(394),
    [sym_cld_opcode] = ACTIONS(394),
    [sym_cli_opcode] = ACTIONS(394),
    [sym_clv_opcode] = ACTIONS(394),
    [sym_cmp_opcode] = ACTIONS(394),
    [sym_cpx_opcode] = ACTIONS(394),
    [sym_cpy_opcode] = ACTIONS(394),
    [sym_dec_opcode] = ACTIONS(394),
    [sym_dex_opcode] = ACTIONS(394),
    [sym_dey_opcode] = ACTIONS(394),
    [sym_eor_opcode] = ACTIONS(394),
    [sym_inc_opcode] = ACTIONS(394),
    [sym_inx_opcode] = ACTIONS(394),
    [sym_iny_opcode] = ACTIONS(394),
    [sym_jmp_opcode] = ACTIONS(394),
    [sym_jsr_opcode] = ACTIONS(394),
    [sym_lda_opcode] = ACTIONS(394),
    [sym_ldx_opcode] = ACTIONS(394),
    [sym_ldy_opcode] = ACTIONS(394),
    [sym_lsr_opcode] = ACTIONS(394),
    [sym_nop_opcode] = ACTIONS(394),
    [sym_ora_opcode] = ACTIONS(394),
    [sym_pha_opcode] = ACTIONS(394),
    [sym_php_opcode] = ACTIONS(394),
    [sym_pla_opcode] = ACTIONS(394),
    [sym_plp_opcode] = ACTIONS(394),
    [sym_rol_opcode] = ACTIONS(394),
    [sym_ror_opcode] = ACTIONS(394),
    [sym_rti_opcode] = ACTIONS(394),
    [sym_rts_opcode] = ACTIONS(394),
    [sym_sbc_opcode] = ACTIONS(394),
    [sym_sec_opcode] = ACTIONS(394),
    [sym_sed_opcode] = ACTIONS(394),
    [sym_sei_opcode] = ACTIONS(394),
    [sym_sta_opcode] = ACTIONS(394),
    [sym_stx_opcode] = ACTIONS(394),
    [sym_sty_opcode] = ACTIONS(394),
    [sym_tax_opcode] = ACTIONS(394),
    [sym_tay_opcode] = ACTIONS(394),
    [sym_tsx_opcode] = ACTIONS(394),
    [sym_txa_opcode] = ACTIONS(394),
    [sym_tcs_opcode] = ACTIONS(394),
    [sym_tya_opcode] = ACTIONS(394),
    [sym_a16_ctrl_cmd] = ACTIONS(390),
    [sym_a8_ctrl_cmd] = ACTIONS(390),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(390),
    [sym_bss_ctrl_cmd] = ACTIONS(390),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(390),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(396),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(396),
    [anon_sym_COMMA] = ACTIONS(398),
    [sym_adc_opcode] = ACTIONS(400),
    [sym_and_opcode] = ACTIONS(400),
    [sym_asl_opcode] = ACTIONS(400),
    [sym_bcc_opcode] = ACTIONS(400),
    [sym_bcs_opcode] = ACTIONS(400),
    [sym_beq_opcode] = ACTIONS(400),
    [sym_bit_opcode] = ACTIONS(400),
    [sym_bmi_opcode] = ACTIONS(400),
    [sym_bne_opcode] = ACTIONS(400),
    [sym_bpl_opcode] = ACTIONS(400),
    [sym_brk_opcode] = ACTIONS(400),
    [sym_bvc_opcode] = ACTIONS(400),
    [sym_bvs_opcode] = ACTIONS(400),
    [sym_clc_opcode] = ACTIONS(400),
    [sym_cld_opcode] = ACTIONS(400),
    [sym_cli_opcode] = ACTIONS(400),
    [sym_clv_opcode] = ACTIONS(400),
    [sym_cmp_opcode] = ACTIONS(400),
    [sym_cpx_opcode] = ACTIONS(400),
    [sym_cpy_opcode] = ACTIONS(400),
    [sym_dec_opcode] = ACTIONS(400),
    [sym_dex_opcode] = ACTIONS(400),
    [sym_dey_opcode] = ACTIONS(400),
    [sym_eor_opcode] = ACTIONS(400),
    [sym_inc_opcode] = ACTIONS(400),
    [sym_inx_opcode] = ACTIONS(400),
    [sym_iny_opcode] = ACTIONS(400),
    [sym_jmp_opcode] = ACTIONS(400),
    [sym_jsr_opcode] = ACTIONS(400),
    [sym_lda_opcode] = ACTIONS(400),
    [sym_ldx_opcode] = ACTIONS(400),
    [sym_ldy_opcode] = ACTIONS(400),
    [sym_lsr_opcode] = ACTIONS(400),
    [sym_nop_opcode] = ACTIONS(400),
    [sym_ora_opcode] = ACTIONS(400),
    [sym_pha_opcode] = ACTIONS(400),
    [sym_php_opcode] = ACTIONS(400),
    [sym_pla_opcode] = ACTIONS(400),
    [sym_plp_opcode] = ACTIONS(400),
    [sym_rol_opcode] = ACTIONS(400),
    [sym_ror_opcode] = ACTIONS(400),
    [sym_rti_opcode] = ACTIONS(400),
    [sym_rts_opcode] = ACTIONS(400),
    [sym_sbc_opcode] = ACTIONS(400),
    [sym_sec_opcode] = ACTIONS(400),
    [sym_sed_opcode] = ACTIONS(400),
    [sym_sei_opcode] = ACTIONS(400),
    [sym_sta_opcode] = ACTIONS(400),
    [sym_stx_opcode] = ACTIONS(400),
    [sym_sty_opcode] = ACTIONS(400),
    [sym_tax_opcode] = ACTIONS(400),
    [sym_tay_opcode] = ACTIONS(400),
    [sym_tsx_opcode] = ACTIONS(400),
    [sym_txa_opcode] = ACTIONS(400),
    [sym_tcs_opcode] = ACTIONS(400),
    [sym_tya_opcode] = ACTIONS(400),
    [sym_a16_ctrl_cmd] = ACTIONS(396),
    [sym_a8_ctrl_cmd] = ACTIONS(396),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(396),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(396),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(396),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(396),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(396),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(396),
    [sym_bss_ctrl_cmd] = ACTIONS(396),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(396),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(396),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(390),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(390),
    [anon_sym_COMMA] = ACTIONS(402),
    [sym_adc_opcode] = ACTIONS(394),
    [sym_and_opcode] = ACTIONS(394),
    [sym_asl_opcode] = ACTIONS(394),
    [sym_bcc_opcode] = ACTIONS(394),
    [sym_bcs_opcode] = ACTIONS(394),
    [sym_beq_opcode] = ACTIONS(394),
    [sym_bit_opcode] = ACTIONS(394),
    [sym_bmi_opcode] = ACTIONS(394),
    [sym_bne_opcode] = ACTIONS(394),
    [sym_bpl_opcode] = ACTIONS(394),
    [sym_brk_opcode] = ACTIONS(394),
    [sym_bvc_opcode] = ACTIONS(394),
    [sym_bvs_opcode] = ACTIONS(394),
    [sym_clc_opcode] = ACTIONS(394),
    [sym_cld_opcode] = ACTIONS(394),
    [sym_cli_opcode] = ACTIONS(394),
    [sym_clv_opcode] = ACTIONS(394),
    [sym_cmp_opcode] = ACTIONS(394),
    [sym_cpx_opcode] = ACTIONS(394),
    [sym_cpy_opcode] = ACTIONS(394),
    [sym_dec_opcode] = ACTIONS(394),
    [sym_dex_opcode] = ACTIONS(394),
    [sym_dey_opcode] = ACTIONS(394),
    [sym_eor_opcode] = ACTIONS(394),
    [sym_inc_opcode] = ACTIONS(394),
    [sym_inx_opcode] = ACTIONS(394),
    [sym_iny_opcode] = ACTIONS(394),
    [sym_jmp_opcode] = ACTIONS(394),
    [sym_jsr_opcode] = ACTIONS(394),
    [sym_lda_opcode] = ACTIONS(394),
    [sym_ldx_opcode] = ACTIONS(394),
    [sym_ldy_opcode] = ACTIONS(394),
    [sym_lsr_opcode] = ACTIONS(394),
    [sym_nop_opcode] = ACTIONS(394),
    [sym_ora_opcode] = ACTIONS(394),
    [sym_pha_opcode] = ACTIONS(394),
    [sym_php_opcode] = ACTIONS(394),
    [sym_pla_opcode] = ACTIONS(394),
    [sym_plp_opcode] = ACTIONS(394),
    [sym_rol_opcode] = ACTIONS(394),
    [sym_ror_opcode] = ACTIONS(394),
    [sym_rti_opcode] = ACTIONS(394),
    [sym_rts_opcode] = ACTIONS(394),
    [sym_sbc_opcode] = ACTIONS(394),
    [sym_sec_opcode] = ACTIONS(394),
    [sym_sed_opcode] = ACTIONS(394),
    [sym_sei_opcode] = ACTIONS(394),
    [sym_sta_opcode] = ACTIONS(394),
    [sym_stx_opcode] = ACTIONS(394),
    [sym_sty_opcode] = ACTIONS(394),
    [sym_tax_opcode] = ACTIONS(394),
    [sym_tay_opcode] = ACTIONS(394),
    [sym_tsx_opcode] = ACTIONS(394),
    [sym_txa_opcode] = ACTIONS(394),
    [sym_tcs_opcode] = ACTIONS(394),
    [sym_tya_opcode] = ACTIONS(394),
    [sym_a16_ctrl_cmd] = ACTIONS(390),
    [sym_a8_ctrl_cmd] = ACTIONS(390),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(390),
    [sym_bss_ctrl_cmd] = ACTIONS(390),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(390),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(384),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(384),
    [anon_sym_COMMA] = ACTIONS(404),
    [sym_adc_opcode] = ACTIONS(388),
    [sym_and_opcode] = ACTIONS(388),
    [sym_asl_opcode] = ACTIONS(388),
    [sym_bcc_opcode] = ACTIONS(388),
    [sym_bcs_opcode] = ACTIONS(388),
    [sym_beq_opcode] = ACTIONS(388),
    [sym_bit_opcode] = ACTIONS(388),
    [sym_bmi_opcode] = ACTIONS(388),
    [sym_bne_opcode] = ACTIONS(388),
    [sym_bpl_opcode] = ACTIONS(388),
    [sym_brk_opcode] = ACTIONS(388),
    [sym_bvc_opcode] = ACTIONS(388),
    [sym_bvs_opcode] = ACTIONS(388),
    [sym_clc_opcode] = ACTIONS(388),
    [sym_cld_opcode] = ACTIONS(388),
    [sym_cli_opcode] = ACTIONS(388),
    [sym_clv_opcode] = ACTIONS(388),
    [sym_cmp_opcode] = ACTIONS(388),
    [sym_cpx_opcode] = ACTIONS(388),
    [sym_cpy_opcode] = ACTIONS(388),
    [sym_dec_opcode] = ACTIONS(388),
    [sym_dex_opcode] = ACTIONS(388),
    [sym_dey_opcode] = ACTIONS(388),
    [sym_eor_opcode] = ACTIONS(388),
    [sym_inc_opcode] = ACTIONS(388),
    [sym_inx_opcode] = ACTIONS(388),
    [sym_iny_opcode] = ACTIONS(388),
    [sym_jmp_opcode] = ACTIONS(388),
    [sym_jsr_opcode] = ACTIONS(388),
    [sym_lda_opcode] = ACTIONS(388),
    [sym_ldx_opcode] = ACTIONS(388),
    [sym_ldy_opcode] = ACTIONS(388),
    [sym_lsr_opcode] = ACTIONS(388),
    [sym_nop_opcode] = ACTIONS(388),
    [sym_ora_opcode] = ACTIONS(388),
    [sym_pha_opcode] = ACTIONS(388),
    [sym_php_opcode] = ACTIONS(388),
    [sym_pla_opcode] = ACTIONS(388),
    [sym_plp_opcode] = ACTIONS(388),
    [sym_rol_opcode] = ACTIONS(388),
    [sym_ror_opcode] = ACTIONS(388),
    [sym_rti_opcode] = ACTIONS(388),
    [sym_rts_opcode] = ACTIONS(388),
    [sym_sbc_opcode] = ACTIONS(388),
    [sym_sec_opcode] = ACTIONS(388),
    [sym_sed_opcode] = ACTIONS(388),
    [sym_sei_opcode] = ACTIONS(388),
    [sym_sta_opcode] = ACTIONS(388),
    [sym_stx_opcode] = ACTIONS(388),
    [sym_sty_opcode] = ACTIONS(388),
    [sym_tax_opcode] = ACTIONS(388),
    [sym_tay_opcode] = ACTIONS(388),
    [sym_tsx_opcode] = ACTIONS(388),
    [sym_txa_opcode] = ACTIONS(388),
    [sym_tcs_opcode] = ACTIONS(388),
    [sym_tya_opcode] = ACTIONS(388),
    [sym_a16_ctrl_cmd] = ACTIONS(384),
    [sym_a8_ctrl_cmd] = ACTIONS(384),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(384),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(384),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(384),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(384),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(384),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(384),
    [sym_bss_ctrl_cmd] = ACTIONS(384),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(384),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(384),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(390),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(390),
    [anon_sym_COMMA] = ACTIONS(406),
    [sym_adc_opcode] = ACTIONS(394),
    [sym_and_opcode] = ACTIONS(394),
    [sym_asl_opcode] = ACTIONS(394),
    [sym_bcc_opcode] = ACTIONS(394),
    [sym_bcs_opcode] = ACTIONS(394),
    [sym_beq_opcode] = ACTIONS(394),
    [sym_bit_opcode] = ACTIONS(394),
    [sym_bmi_opcode] = ACTIONS(394),
    [sym_bne_opcode] = ACTIONS(394),
    [sym_bpl_opcode] = ACTIONS(394),
    [sym_brk_opcode] = ACTIONS(394),
    [sym_bvc_opcode] = ACTIONS(394),
    [sym_bvs_opcode] = ACTIONS(394),
    [sym_clc_opcode] = ACTIONS(394),
    [sym_cld_opcode] = ACTIONS(394),
    [sym_cli_opcode] = ACTIONS(394),
    [sym_clv_opcode] = ACTIONS(394),
    [sym_cmp_opcode] = ACTIONS(394),
    [sym_cpx_opcode] = ACTIONS(394),
    [sym_cpy_opcode] = ACTIONS(394),
    [sym_dec_opcode] = ACTIONS(394),
    [sym_dex_opcode] = ACTIONS(394),
    [sym_dey_opcode] = ACTIONS(394),
    [sym_eor_opcode] = ACTIONS(394),
    [sym_inc_opcode] = ACTIONS(394),
    [sym_inx_opcode] = ACTIONS(394),
    [sym_iny_opcode] = ACTIONS(394),
    [sym_jmp_opcode] = ACTIONS(394),
    [sym_jsr_opcode] = ACTIONS(394),
    [sym_lda_opcode] = ACTIONS(394),
    [sym_ldx_opcode] = ACTIONS(394),
    [sym_ldy_opcode] = ACTIONS(394),
    [sym_lsr_opcode] = ACTIONS(394),
    [sym_nop_opcode] = ACTIONS(394),
    [sym_ora_opcode] = ACTIONS(394),
    [sym_pha_opcode] = ACTIONS(394),
    [sym_php_opcode] = ACTIONS(394),
    [sym_pla_opcode] = ACTIONS(394),
    [sym_plp_opcode] = ACTIONS(394),
    [sym_rol_opcode] = ACTIONS(394),
    [sym_ror_opcode] = ACTIONS(394),
    [sym_rti_opcode] = ACTIONS(394),
    [sym_rts_opcode] = ACTIONS(394),
    [sym_sbc_opcode] = ACTIONS(394),
    [sym_sec_opcode] = ACTIONS(394),
    [sym_sed_opcode] = ACTIONS(394),
    [sym_sei_opcode] = ACTIONS(394),
    [sym_sta_opcode] = ACTIONS(394),
    [sym_stx_opcode] = ACTIONS(394),
    [sym_sty_opcode] = ACTIONS(394),
    [sym_tax_opcode] = ACTIONS(394),
    [sym_tay_opcode] = ACTIONS(394),
    [sym_tsx_opcode] = ACTIONS(394),
    [sym_txa_opcode] = ACTIONS(394),
    [sym_tcs_opcode] = ACTIONS(394),
    [sym_tya_opcode] = ACTIONS(394),
    [sym_a16_ctrl_cmd] = ACTIONS(390),
    [sym_a8_ctrl_cmd] = ACTIONS(390),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(390),
    [sym_bss_ctrl_cmd] = ACTIONS(390),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(390),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(370),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(370),
    [anon_sym_COMMA] = ACTIONS(370),
    [sym_adc_opcode] = ACTIONS(375),
    [sym_and_opcode] = ACTIONS(375),
    [sym_asl_opcode] = ACTIONS(375),
    [sym_bcc_opcode] = ACTIONS(375),
    [sym_bcs_opcode] = ACTIONS(375),
    [sym_beq_opcode] = ACTIONS(375),
    [sym_bit_opcode] = ACTIONS(375),
    [sym_bmi_opcode] = ACTIONS(375),
    [sym_bne_opcode] = ACTIONS(375),
    [sym_bpl_opcode] = ACTIONS(375),
    [sym_brk_opcode] = ACTIONS(375),
    [sym_bvc_opcode] = ACTIONS(375),
    [sym_bvs_opcode] = ACTIONS(375),
    [sym_clc_opcode] = ACTIONS(375),
    [sym_cld_opcode] = ACTIONS(375),
    [sym_cli_opcode] = ACTIONS(375),
    [sym_clv_opcode] = ACTIONS(375),
    [sym_cmp_opcode] = ACTIONS(375),
    [sym_cpx_opcode] = ACTIONS(375),
    [sym_cpy_opcode] = ACTIONS(375),
    [sym_dec_opcode] = ACTIONS(375),
    [sym_dex_opcode] = ACTIONS(375),
    [sym_dey_opcode] = ACTIONS(375),
    [sym_eor_opcode] = ACTIONS(375),
    [sym_inc_opcode] = ACTIONS(375),
    [sym_inx_opcode] = ACTIONS(375),
    [sym_iny_opcode] = ACTIONS(375),
    [sym_jmp_opcode] = ACTIONS(375),
    [sym_jsr_opcode] = ACTIONS(375),
    [sym_lda_opcode] = ACTIONS(375),
    [sym_ldx_opcode] = ACTIONS(375),
    [sym_ldy_opcode] = ACTIONS(375),
    [sym_lsr_opcode] = ACTIONS(375),
    [sym_nop_opcode] = ACTIONS(375),
    [sym_ora_opcode] = ACTIONS(375),
    [sym_pha_opcode] = ACTIONS(375),
    [sym_php_opcode] = ACTIONS(375),
    [sym_pla_opcode] = ACTIONS(375),
    [sym_plp_opcode] = ACTIONS(375),
    [sym_rol_opcode] = ACTIONS(375),
    [sym_ror_opcode] = ACTIONS(375),
    [sym_rti_opcode] = ACTIONS(375),
    [sym_rts_opcode] = ACTIONS(375),
    [sym_sbc_opcode] = ACTIONS(375),
    [sym_sec_opcode] = ACTIONS(375),
    [sym_sed_opcode] = ACTIONS(375),
    [sym_sei_opcode] = ACTIONS(375),
    [sym_sta_opcode] = ACTIONS(375),
    [sym_stx_opcode] = ACTIONS(375),
    [sym_sty_opcode] = ACTIONS(375),
    [sym_tax_opcode] = ACTIONS(375),
    [sym_tay_opcode] = ACTIONS(375),
    [sym_tsx_opcode] = ACTIONS(375),
    [sym_txa_opcode] = ACTIONS(375),
    [sym_tcs_opcode] = ACTIONS(375),
    [sym_tya_opcode] = ACTIONS(375),
    [sym_a16_ctrl_cmd] = ACTIONS(370),
    [sym_a8_ctrl_cmd] = ACTIONS(370),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(370),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(370),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(370),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(370),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(370),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(370),
    [sym_bss_ctrl_cmd] = ACTIONS(370),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(370),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(370),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(217),
    [sym_adc_opcode] = ACTIONS(206),
    [sym_and_opcode] = ACTIONS(206),
    [sym_asl_opcode] = ACTIONS(206),
    [sym_bcc_opcode] = ACTIONS(206),
    [sym_bcs_opcode] = ACTIONS(206),
    [sym_beq_opcode] = ACTIONS(206),
    [sym_bit_opcode] = ACTIONS(206),
    [sym_bmi_opcode] = ACTIONS(206),
    [sym_bne_opcode] = ACTIONS(206),
    [sym_bpl_opcode] = ACTIONS(206),
    [sym_brk_opcode] = ACTIONS(206),
    [sym_bvc_opcode] = ACTIONS(206),
    [sym_bvs_opcode] = ACTIONS(206),
    [sym_clc_opcode] = ACTIONS(206),
    [sym_cld_opcode] = ACTIONS(206),
    [sym_cli_opcode] = ACTIONS(206),
    [sym_clv_opcode] = ACTIONS(206),
    [sym_cmp_opcode] = ACTIONS(206),
    [sym_cpx_opcode] = ACTIONS(206),
    [sym_cpy_opcode] = ACTIONS(206),
    [sym_dec_opcode] = ACTIONS(206),
    [sym_dex_opcode] = ACTIONS(206),
    [sym_dey_opcode] = ACTIONS(206),
    [sym_eor_opcode] = ACTIONS(206),
    [sym_inc_opcode] = ACTIONS(206),
    [sym_inx_opcode] = ACTIONS(206),
    [sym_iny_opcode] = ACTIONS(206),
    [sym_jmp_opcode] = ACTIONS(206),
    [sym_jsr_opcode] = ACTIONS(206),
    [sym_lda_opcode] = ACTIONS(206),
    [sym_ldx_opcode] = ACTIONS(206),
    [sym_ldy_opcode] = ACTIONS(206),
    [sym_lsr_opcode] = ACTIONS(206),
    [sym_nop_opcode] = ACTIONS(206),
    [sym_ora_opcode] = ACTIONS(206),
    [sym_pha_opcode] = ACTIONS(206),
    [sym_php_opcode] = ACTIONS(206),
    [sym_pla_opcode] = ACTIONS(206),
    [sym_plp_opcode] = ACTIONS(206),
    [sym_rol_opcode] = ACTIONS(206),
    [sym_ror_opcode] = ACTIONS(206),
    [sym_rti_opcode] = ACTIONS(206),
    [sym_rts_opcode] = ACTIONS(206),
    [sym_sbc_opcode] = ACTIONS(206),
    [sym_sec_opcode] = ACTIONS(206),
    [sym_sed_opcode] = ACTIONS(206),
    [sym_sei_opcode] = ACTIONS(206),
    [sym_sta_opcode] = ACTIONS(206),
    [sym_stx_opcode] = ACTIONS(206),
    [sym_sty_opcode] = ACTIONS(206),
    [sym_tax_opcode] = ACTIONS(206),
    [sym_tay_opcode] = ACTIONS(206),
    [sym_tsx_opcode] = ACTIONS(206),
    [sym_txa_opcode] = ACTIONS(206),
    [sym_tcs_opcode] = ACTIONS(206),
    [sym_tya_opcode] = ACTIONS(206),
    [sym_a16_ctrl_cmd] = ACTIONS(203),
    [sym_a8_ctrl_cmd] = ACTIONS(203),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(203),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(203),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(203),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(203),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(203),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(203),
    [sym_bss_ctrl_cmd] = ACTIONS(203),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(203),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(203),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(377),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(377),
    [anon_sym_COMMA] = ACTIONS(377),
    [sym_adc_opcode] = ACTIONS(382),
    [sym_and_opcode] = ACTIONS(382),
    [sym_asl_opcode] = ACTIONS(382),
    [sym_bcc_opcode] = ACTIONS(382),
    [sym_bcs_opcode] = ACTIONS(382),
    [sym_beq_opcode] = ACTIONS(382),
    [sym_bit_opcode] = ACTIONS(382),
    [sym_bmi_opcode] = ACTIONS(382),
    [sym_bne_opcode] = ACTIONS(382),
    [sym_bpl_opcode] = ACTIONS(382),
    [sym_brk_opcode] = ACTIONS(382),
    [sym_bvc_opcode] = ACTIONS(382),
    [sym_bvs_opcode] = ACTIONS(382),
    [sym_clc_opcode] = ACTIONS(382),
    [sym_cld_opcode] = ACTIONS(382),
    [sym_cli_opcode] = ACTIONS(382),
    [sym_clv_opcode] = ACTIONS(382),
    [sym_cmp_opcode] = ACTIONS(382),
    [sym_cpx_opcode] = ACTIONS(382),
    [sym_cpy_opcode] = ACTIONS(382),
    [sym_dec_opcode] = ACTIONS(382),
    [sym_dex_opcode] = ACTIONS(382),
    [sym_dey_opcode] = ACTIONS(382),
    [sym_eor_opcode] = ACTIONS(382),
    [sym_inc_opcode] = ACTIONS(382),
    [sym_inx_opcode] = ACTIONS(382),
    [sym_iny_opcode] = ACTIONS(382),
    [sym_jmp_opcode] = ACTIONS(382),
    [sym_jsr_opcode] = ACTIONS(382),
    [sym_lda_opcode] = ACTIONS(382),
    [sym_ldx_opcode] = ACTIONS(382),
    [sym_ldy_opcode] = ACTIONS(382),
    [sym_lsr_opcode] = ACTIONS(382),
    [sym_nop_opcode] = ACTIONS(382),
    [sym_ora_opcode] = ACTIONS(382),
    [sym_pha_opcode] = ACTIONS(382),
    [sym_php_opcode] = ACTIONS(382),
    [sym_pla_opcode] = ACTIONS(382),
    [sym_plp_opcode] = ACTIONS(382),
    [sym_rol_opcode] = ACTIONS(382),
    [sym_ror_opcode] = ACTIONS(382),
    [sym_rti_opcode] = ACTIONS(382),
    [sym_rts_opcode] = ACTIONS(382),
    [sym_sbc_opcode] = ACTIONS(382),
    [sym_sec_opcode] = ACTIONS(382),
    [sym_sed_opcode] = ACTIONS(382),
    [sym_sei_opcode] = ACTIONS(382),
    [sym_sta_opcode] = ACTIONS(382),
    [sym_stx_opcode] = ACTIONS(382),
    [sym_sty_opcode] = ACTIONS(382),
    [sym_tax_opcode] = ACTIONS(382),
    [sym_tay_opcode] = ACTIONS(382),
    [sym_tsx_opcode] = ACTIONS(382),
    [sym_txa_opcode] = ACTIONS(382),
    [sym_tcs_opcode] = ACTIONS(382),
    [sym_tya_opcode] = ACTIONS(382),
    [sym_a16_ctrl_cmd] = ACTIONS(377),
    [sym_a8_ctrl_cmd] = ACTIONS(377),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(377),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(377),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(377),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(377),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(377),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(377),
    [sym_bss_ctrl_cmd] = ACTIONS(377),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(377),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(377),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(384),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(384),
    [sym_adc_opcode] = ACTIONS(388),
    [sym_and_opcode] = ACTIONS(388),
    [sym_asl_opcode] = ACTIONS(388),
    [sym_bcc_opcode] = ACTIONS(388),
    [sym_bcs_opcode] = ACTIONS(388),
    [sym_beq_opcode] = ACTIONS(388),
    [sym_bit_opcode] = ACTIONS(388),
    [sym_bmi_opcode] = ACTIONS(388),
    [sym_bne_opcode] = ACTIONS(388),
    [sym_bpl_opcode] = ACTIONS(388),
    [sym_brk_opcode] = ACTIONS(388),
    [sym_bvc_opcode] = ACTIONS(388),
    [sym_bvs_opcode] = ACTIONS(388),
    [sym_clc_opcode] = ACTIONS(388),
    [sym_cld_opcode] = ACTIONS(388),
    [sym_cli_opcode] = ACTIONS(388),
    [sym_clv_opcode] = ACTIONS(388),
    [sym_cmp_opcode] = ACTIONS(388),
    [sym_cpx_opcode] = ACTIONS(388),
    [sym_cpy_opcode] = ACTIONS(388),
    [sym_dec_opcode] = ACTIONS(388),
    [sym_dex_opcode] = ACTIONS(388),
    [sym_dey_opcode] = ACTIONS(388),
    [sym_eor_opcode] = ACTIONS(388),
    [sym_inc_opcode] = ACTIONS(388),
    [sym_inx_opcode] = ACTIONS(388),
    [sym_iny_opcode] = ACTIONS(388),
    [sym_jmp_opcode] = ACTIONS(388),
    [sym_jsr_opcode] = ACTIONS(388),
    [sym_lda_opcode] = ACTIONS(388),
    [sym_ldx_opcode] = ACTIONS(388),
    [sym_ldy_opcode] = ACTIONS(388),
    [sym_lsr_opcode] = ACTIONS(388),
    [sym_nop_opcode] = ACTIONS(388),
    [sym_ora_opcode] = ACTIONS(388),
    [sym_pha_opcode] = ACTIONS(388),
    [sym_php_opcode] = ACTIONS(388),
    [sym_pla_opcode] = ACTIONS(388),
    [sym_plp_opcode] = ACTIONS(388),
    [sym_rol_opcode] = ACTIONS(388),
    [sym_ror_opcode] = ACTIONS(388),
    [sym_rti_opcode] = ACTIONS(388),
    [sym_rts_opcode] = ACTIONS(388),
    [sym_sbc_opcode] = ACTIONS(388),
    [sym_sec_opcode] = ACTIONS(388),
    [sym_sed_opcode] = ACTIONS(388),
    [sym_sei_opcode] = ACTIONS(388),
    [sym_sta_opcode] = ACTIONS(388),
    [sym_stx_opcode] = ACTIONS(388),
    [sym_sty_opcode] = ACTIONS(388),
    [sym_tax_opcode] = ACTIONS(388),
    [sym_tay_opcode] = ACTIONS(388),
    [sym_tsx_opcode] = ACTIONS(388),
    [sym_txa_opcode] = ACTIONS(388),
    [sym_tcs_opcode] = ACTIONS(388),
    [sym_tya_opcode] = ACTIONS(388),
    [sym_a16_ctrl_cmd] = ACTIONS(384),
    [sym_a8_ctrl_cmd] = ACTIONS(384),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(384),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(384),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(384),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(384),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(384),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(384),
    [sym_bss_ctrl_cmd] = ACTIONS(384),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(384),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(384),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(408),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(408),
    [sym_adc_opcode] = ACTIONS(410),
    [sym_and_opcode] = ACTIONS(410),
    [sym_asl_opcode] = ACTIONS(410),
    [sym_bcc_opcode] = ACTIONS(410),
    [sym_bcs_opcode] = ACTIONS(410),
    [sym_beq_opcode] = ACTIONS(410),
    [sym_bit_opcode] = ACTIONS(410),
    [sym_bmi_opcode] = ACTIONS(410),
    [sym_bne_opcode] = ACTIONS(410),
    [sym_bpl_opcode] = ACTIONS(410),
    [sym_brk_opcode] = ACTIONS(410),
    [sym_bvc_opcode] = ACTIONS(410),
    [sym_bvs_opcode] = ACTIONS(410),
    [sym_clc_opcode] = ACTIONS(410),
    [sym_cld_opcode] = ACTIONS(410),
    [sym_cli_opcode] = ACTIONS(410),
    [sym_clv_opcode] = ACTIONS(410),
    [sym_cmp_opcode] = ACTIONS(410),
    [sym_cpx_opcode] = ACTIONS(410),
    [sym_cpy_opcode] = ACTIONS(410),
    [sym_dec_opcode] = ACTIONS(410),
    [sym_dex_opcode] = ACTIONS(410),
    [sym_dey_opcode] = ACTIONS(410),
    [sym_eor_opcode] = ACTIONS(410),
    [sym_inc_opcode] = ACTIONS(410),
    [sym_inx_opcode] = ACTIONS(410),
    [sym_iny_opcode] = ACTIONS(410),
    [sym_jmp_opcode] = ACTIONS(410),
    [sym_jsr_opcode] = ACTIONS(410),
    [sym_lda_opcode] = ACTIONS(410),
    [sym_ldx_opcode] = ACTIONS(410),
    [sym_ldy_opcode] = ACTIONS(410),
    [sym_lsr_opcode] = ACTIONS(410),
    [sym_nop_opcode] = ACTIONS(410),
    [sym_ora_opcode] = ACTIONS(410),
    [sym_pha_opcode] = ACTIONS(410),
    [sym_php_opcode] = ACTIONS(410),
    [sym_pla_opcode] = ACTIONS(410),
    [sym_plp_opcode] = ACTIONS(410),
    [sym_rol_opcode] = ACTIONS(410),
    [sym_ror_opcode] = ACTIONS(410),
    [sym_rti_opcode] = ACTIONS(410),
    [sym_rts_opcode] = ACTIONS(410),
    [sym_sbc_opcode] = ACTIONS(410),
    [sym_sec_opcode] = ACTIONS(410),
    [sym_sed_opcode] = ACTIONS(410),
    [sym_sei_opcode] = ACTIONS(410),
    [sym_sta_opcode] = ACTIONS(410),
    [sym_stx_opcode] = ACTIONS(410),
    [sym_sty_opcode] = ACTIONS(410),
    [sym_tax_opcode] = ACTIONS(410),
    [sym_tay_opcode] = ACTIONS(410),
    [sym_tsx_opcode] = ACTIONS(410),
    [sym_txa_opcode] = ACTIONS(410),
    [sym_tcs_opcode] = ACTIONS(410),
    [sym_tya_opcode] = ACTIONS(410),
    [sym_a16_ctrl_cmd] = ACTIONS(408),
    [sym_a8_ctrl_cmd] = ACTIONS(408),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(408),
    [sym_bss_ctrl_cmd] = ACTIONS(408),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(408),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(408),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(412),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(412),
    [sym_adc_opcode] = ACTIONS(414),
    [sym_and_opcode] = ACTIONS(414),
    [sym_asl_opcode] = ACTIONS(414),
    [sym_bcc_opcode] = ACTIONS(414),
    [sym_bcs_opcode] = ACTIONS(414),
    [sym_beq_opcode] = ACTIONS(414),
    [sym_bit_opcode] = ACTIONS(414),
    [sym_bmi_opcode] = ACTIONS(414),
    [sym_bne_opcode] = ACTIONS(414),
    [sym_bpl_opcode] = ACTIONS(414),
    [sym_brk_opcode] = ACTIONS(414),
    [sym_bvc_opcode] = ACTIONS(414),
    [sym_bvs_opcode] = ACTIONS(414),
    [sym_clc_opcode] = ACTIONS(414),
    [sym_cld_opcode] = ACTIONS(414),
    [sym_cli_opcode] = ACTIONS(414),
    [sym_clv_opcode] = ACTIONS(414),
    [sym_cmp_opcode] = ACTIONS(414),
    [sym_cpx_opcode] = ACTIONS(414),
    [sym_cpy_opcode] = ACTIONS(414),
    [sym_dec_opcode] = ACTIONS(414),
    [sym_dex_opcode] = ACTIONS(414),
    [sym_dey_opcode] = ACTIONS(414),
    [sym_eor_opcode] = ACTIONS(414),
    [sym_inc_opcode] = ACTIONS(414),
    [sym_inx_opcode] = ACTIONS(414),
    [sym_iny_opcode] = ACTIONS(414),
    [sym_jmp_opcode] = ACTIONS(414),
    [sym_jsr_opcode] = ACTIONS(414),
    [sym_lda_opcode] = ACTIONS(414),
    [sym_ldx_opcode] = ACTIONS(414),
    [sym_ldy_opcode] = ACTIONS(414),
    [sym_lsr_opcode] = ACTIONS(414),
    [sym_nop_opcode] = ACTIONS(414),
    [sym_ora_opcode] = ACTIONS(414),
    [sym_pha_opcode] = ACTIONS(414),
    [sym_php_opcode] = ACTIONS(414),
    [sym_pla_opcode] = ACTIONS(414),
    [sym_plp_opcode] = ACTIONS(414),
    [sym_rol_opcode] = ACTIONS(414),
    [sym_ror_opcode] = ACTIONS(414),
    [sym_rti_opcode] = ACTIONS(414),
    [sym_rts_opcode] = ACTIONS(414),
    [sym_sbc_opcode] = ACTIONS(414),
    [sym_sec_opcode] = ACTIONS(414),
    [sym_sed_opcode] = ACTIONS(414),
    [sym_sei_opcode] = ACTIONS(414),
    [sym_sta_opcode] = ACTIONS(414),
    [sym_stx_opcode] = ACTIONS(414),
    [sym_sty_opcode] = ACTIONS(414),
    [sym_tax_opcode] = ACTIONS(414),
    [sym_tay_opcode] = ACTIONS(414),
    [sym_tsx_opcode] = ACTIONS(414),
    [sym_txa_opcode] = ACTIONS(414),
    [sym_tcs_opcode] = ACTIONS(414),
    [sym_tya_opcode] = ACTIONS(414),
    [sym_a16_ctrl_cmd] = ACTIONS(412),
    [sym_a8_ctrl_cmd] = ACTIONS(412),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(412),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(412),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(412),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(412),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(412),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(412),
    [sym_bss_ctrl_cmd] = ACTIONS(412),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(412),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(412),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(416),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(416),
    [sym_adc_opcode] = ACTIONS(418),
    [sym_and_opcode] = ACTIONS(418),
    [sym_asl_opcode] = ACTIONS(418),
    [sym_bcc_opcode] = ACTIONS(418),
    [sym_bcs_opcode] = ACTIONS(418),
    [sym_beq_opcode] = ACTIONS(418),
    [sym_bit_opcode] = ACTIONS(418),
    [sym_bmi_opcode] = ACTIONS(418),
    [sym_bne_opcode] = ACTIONS(418),
    [sym_bpl_opcode] = ACTIONS(418),
    [sym_brk_opcode] = ACTIONS(418),
    [sym_bvc_opcode] = ACTIONS(418),
    [sym_bvs_opcode] = ACTIONS(418),
    [sym_clc_opcode] = ACTIONS(418),
    [sym_cld_opcode] = ACTIONS(418),
    [sym_cli_opcode] = ACTIONS(418),
    [sym_clv_opcode] = ACTIONS(418),
    [sym_cmp_opcode] = ACTIONS(418),
    [sym_cpx_opcode] = ACTIONS(418),
    [sym_cpy_opcode] = ACTIONS(418),
    [sym_dec_opcode] = ACTIONS(418),
    [sym_dex_opcode] = ACTIONS(418),
    [sym_dey_opcode] = ACTIONS(418),
    [sym_eor_opcode] = ACTIONS(418),
    [sym_inc_opcode] = ACTIONS(418),
    [sym_inx_opcode] = ACTIONS(418),
    [sym_iny_opcode] = ACTIONS(418),
    [sym_jmp_opcode] = ACTIONS(418),
    [sym_jsr_opcode] = ACTIONS(418),
    [sym_lda_opcode] = ACTIONS(418),
    [sym_ldx_opcode] = ACTIONS(418),
    [sym_ldy_opcode] = ACTIONS(418),
    [sym_lsr_opcode] = ACTIONS(418),
    [sym_nop_opcode] = ACTIONS(418),
    [sym_ora_opcode] = ACTIONS(418),
    [sym_pha_opcode] = ACTIONS(418),
    [sym_php_opcode] = ACTIONS(418),
    [sym_pla_opcode] = ACTIONS(418),
    [sym_plp_opcode] = ACTIONS(418),
    [sym_rol_opcode] = ACTIONS(418),
    [sym_ror_opcode] = ACTIONS(418),
    [sym_rti_opcode] = ACTIONS(418),
    [sym_rts_opcode] = ACTIONS(418),
    [sym_sbc_opcode] = ACTIONS(418),
    [sym_sec_opcode] = ACTIONS(418),
    [sym_sed_opcode] = ACTIONS(418),
    [sym_sei_opcode] = ACTIONS(418),
    [sym_sta_opcode] = ACTIONS(418),
    [sym_stx_opcode] = ACTIONS(418),
    [sym_sty_opcode] = ACTIONS(418),
    [sym_tax_opcode] = ACTIONS(418),
    [sym_tay_opcode] = ACTIONS(418),
    [sym_tsx_opcode] = ACTIONS(418),
    [sym_txa_opcode] = ACTIONS(418),
    [sym_tcs_opcode] = ACTIONS(418),
    [sym_tya_opcode] = ACTIONS(418),
    [sym_a16_ctrl_cmd] = ACTIONS(416),
    [sym_a8_ctrl_cmd] = ACTIONS(416),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(416),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(416),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(416),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(416),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(416),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(416),
    [sym_bss_ctrl_cmd] = ACTIONS(416),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(416),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(416),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(420),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(420),
    [sym_adc_opcode] = ACTIONS(422),
    [sym_and_opcode] = ACTIONS(422),
    [sym_asl_opcode] = ACTIONS(422),
    [sym_bcc_opcode] = ACTIONS(422),
    [sym_bcs_opcode] = ACTIONS(422),
    [sym_beq_opcode] = ACTIONS(422),
    [sym_bit_opcode] = ACTIONS(422),
    [sym_bmi_opcode] = ACTIONS(422),
    [sym_bne_opcode] = ACTIONS(422),
    [sym_bpl_opcode] = ACTIONS(422),
    [sym_brk_opcode] = ACTIONS(422),
    [sym_bvc_opcode] = ACTIONS(422),
    [sym_bvs_opcode] = ACTIONS(422),
    [sym_clc_opcode] = ACTIONS(422),
    [sym_cld_opcode] = ACTIONS(422),
    [sym_cli_opcode] = ACTIONS(422),
    [sym_clv_opcode] = ACTIONS(422),
    [sym_cmp_opcode] = ACTIONS(422),
    [sym_cpx_opcode] = ACTIONS(422),
    [sym_cpy_opcode] = ACTIONS(422),
    [sym_dec_opcode] = ACTIONS(422),
    [sym_dex_opcode] = ACTIONS(422),
    [sym_dey_opcode] = ACTIONS(422),
    [sym_eor_opcode] = ACTIONS(422),
    [sym_inc_opcode] = ACTIONS(422),
    [sym_inx_opcode] = ACTIONS(422),
    [sym_iny_opcode] = ACTIONS(422),
    [sym_jmp_opcode] = ACTIONS(422),
    [sym_jsr_opcode] = ACTIONS(422),
    [sym_lda_opcode] = ACTIONS(422),
    [sym_ldx_opcode] = ACTIONS(422),
    [sym_ldy_opcode] = ACTIONS(422),
    [sym_lsr_opcode] = ACTIONS(422),
    [sym_nop_opcode] = ACTIONS(422),
    [sym_ora_opcode] = ACTIONS(422),
    [sym_pha_opcode] = ACTIONS(422),
    [sym_php_opcode] = ACTIONS(422),
    [sym_pla_opcode] = ACTIONS(422),
    [sym_plp_opcode] = ACTIONS(422),
    [sym_rol_opcode] = ACTIONS(422),
    [sym_ror_opcode] = ACTIONS(422),
    [sym_rti_opcode] = ACTIONS(422),
    [sym_rts_opcode] = ACTIONS(422),
    [sym_sbc_opcode] = ACTIONS(422),
    [sym_sec_opcode] = ACTIONS(422),
    [sym_sed_opcode] = ACTIONS(422),
    [sym_sei_opcode] = ACTIONS(422),
    [sym_sta_opcode] = ACTIONS(422),
    [sym_stx_opcode] = ACTIONS(422),
    [sym_sty_opcode] = ACTIONS(422),
    [sym_tax_opcode] = ACTIONS(422),
    [sym_tay_opcode] = ACTIONS(422),
    [sym_tsx_opcode] = ACTIONS(422),
    [sym_txa_opcode] = ACTIONS(422),
    [sym_tcs_opcode] = ACTIONS(422),
    [sym_tya_opcode] = ACTIONS(422),
    [sym_a16_ctrl_cmd] = ACTIONS(420),
    [sym_a8_ctrl_cmd] = ACTIONS(420),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(420),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(420),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(420),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(420),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(420),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(420),
    [sym_bss_ctrl_cmd] = ACTIONS(420),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(420),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(420),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(424),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(424),
    [sym_adc_opcode] = ACTIONS(426),
    [sym_and_opcode] = ACTIONS(426),
    [sym_asl_opcode] = ACTIONS(426),
    [sym_bcc_opcode] = ACTIONS(426),
    [sym_bcs_opcode] = ACTIONS(426),
    [sym_beq_opcode] = ACTIONS(426),
    [sym_bit_opcode] = ACTIONS(426),
    [sym_bmi_opcode] = ACTIONS(426),
    [sym_bne_opcode] = ACTIONS(426),
    [sym_bpl_opcode] = ACTIONS(426),
    [sym_brk_opcode] = ACTIONS(426),
    [sym_bvc_opcode] = ACTIONS(426),
    [sym_bvs_opcode] = ACTIONS(426),
    [sym_clc_opcode] = ACTIONS(426),
    [sym_cld_opcode] = ACTIONS(426),
    [sym_cli_opcode] = ACTIONS(426),
    [sym_clv_opcode] = ACTIONS(426),
    [sym_cmp_opcode] = ACTIONS(426),
    [sym_cpx_opcode] = ACTIONS(426),
    [sym_cpy_opcode] = ACTIONS(426),
    [sym_dec_opcode] = ACTIONS(426),
    [sym_dex_opcode] = ACTIONS(426),
    [sym_dey_opcode] = ACTIONS(426),
    [sym_eor_opcode] = ACTIONS(426),
    [sym_inc_opcode] = ACTIONS(426),
    [sym_inx_opcode] = ACTIONS(426),
    [sym_iny_opcode] = ACTIONS(426),
    [sym_jmp_opcode] = ACTIONS(426),
    [sym_jsr_opcode] = ACTIONS(426),
    [sym_lda_opcode] = ACTIONS(426),
    [sym_ldx_opcode] = ACTIONS(426),
    [sym_ldy_opcode] = ACTIONS(426),
    [sym_lsr_opcode] = ACTIONS(426),
    [sym_nop_opcode] = ACTIONS(426),
    [sym_ora_opcode] = ACTIONS(426),
    [sym_pha_opcode] = ACTIONS(426),
    [sym_php_opcode] = ACTIONS(426),
    [sym_pla_opcode] = ACTIONS(426),
    [sym_plp_opcode] = ACTIONS(426),
    [sym_rol_opcode] = ACTIONS(426),
    [sym_ror_opcode] = ACTIONS(426),
    [sym_rti_opcode] = ACTIONS(426),
    [sym_rts_opcode] = ACTIONS(426),
    [sym_sbc_opcode] = ACTIONS(426),
    [sym_sec_opcode] = ACTIONS(426),
    [sym_sed_opcode] = ACTIONS(426),
    [sym_sei_opcode] = ACTIONS(426),
    [sym_sta_opcode] = ACTIONS(426),
    [sym_stx_opcode] = ACTIONS(426),
    [sym_sty_opcode] = ACTIONS(426),
    [sym_tax_opcode] = ACTIONS(426),
    [sym_tay_opcode] = ACTIONS(426),
    [sym_tsx_opcode] = ACTIONS(426),
    [sym_txa_opcode] = ACTIONS(426),
    [sym_tcs_opcode] = ACTIONS(426),
    [sym_tya_opcode] = ACTIONS(426),
    [sym_a16_ctrl_cmd] = ACTIONS(424),
    [sym_a8_ctrl_cmd] = ACTIONS(424),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(424),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(424),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(424),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(424),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(424),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(424),
    [sym_bss_ctrl_cmd] = ACTIONS(424),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(424),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(424),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(428),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(428),
    [sym_adc_opcode] = ACTIONS(430),
    [sym_and_opcode] = ACTIONS(430),
    [sym_asl_opcode] = ACTIONS(430),
    [sym_bcc_opcode] = ACTIONS(430),
    [sym_bcs_opcode] = ACTIONS(430),
    [sym_beq_opcode] = ACTIONS(430),
    [sym_bit_opcode] = ACTIONS(430),
    [sym_bmi_opcode] = ACTIONS(430),
    [sym_bne_opcode] = ACTIONS(430),
    [sym_bpl_opcode] = ACTIONS(430),
    [sym_brk_opcode] = ACTIONS(430),
    [sym_bvc_opcode] = ACTIONS(430),
    [sym_bvs_opcode] = ACTIONS(430),
    [sym_clc_opcode] = ACTIONS(430),
    [sym_cld_opcode] = ACTIONS(430),
    [sym_cli_opcode] = ACTIONS(430),
    [sym_clv_opcode] = ACTIONS(430),
    [sym_cmp_opcode] = ACTIONS(430),
    [sym_cpx_opcode] = ACTIONS(430),
    [sym_cpy_opcode] = ACTIONS(430),
    [sym_dec_opcode] = ACTIONS(430),
    [sym_dex_opcode] = ACTIONS(430),
    [sym_dey_opcode] = ACTIONS(430),
    [sym_eor_opcode] = ACTIONS(430),
    [sym_inc_opcode] = ACTIONS(430),
    [sym_inx_opcode] = ACTIONS(430),
    [sym_iny_opcode] = ACTIONS(430),
    [sym_jmp_opcode] = ACTIONS(430),
    [sym_jsr_opcode] = ACTIONS(430),
    [sym_lda_opcode] = ACTIONS(430),
    [sym_ldx_opcode] = ACTIONS(430),
    [sym_ldy_opcode] = ACTIONS(430),
    [sym_lsr_opcode] = ACTIONS(430),
    [sym_nop_opcode] = ACTIONS(430),
    [sym_ora_opcode] = ACTIONS(430),
    [sym_pha_opcode] = ACTIONS(430),
    [sym_php_opcode] = ACTIONS(430),
    [sym_pla_opcode] = ACTIONS(430),
    [sym_plp_opcode] = ACTIONS(430),
    [sym_rol_opcode] = ACTIONS(430),
    [sym_ror_opcode] = ACTIONS(430),
    [sym_rti_opcode] = ACTIONS(430),
    [sym_rts_opcode] = ACTIONS(430),
    [sym_sbc_opcode] = ACTIONS(430),
    [sym_sec_opcode] = ACTIONS(430),
    [sym_sed_opcode] = ACTIONS(430),
    [sym_sei_opcode] = ACTIONS(430),
    [sym_sta_opcode] = ACTIONS(430),
    [sym_stx_opcode] = ACTIONS(430),
    [sym_sty_opcode] = ACTIONS(430),
    [sym_tax_opcode] = ACTIONS(430),
    [sym_tay_opcode] = ACTIONS(430),
    [sym_tsx_opcode] = ACTIONS(430),
    [sym_txa_opcode] = ACTIONS(430),
    [sym_tcs_opcode] = ACTIONS(430),
    [sym_tya_opcode] = ACTIONS(430),
    [sym_a16_ctrl_cmd] = ACTIONS(428),
    [sym_a8_ctrl_cmd] = ACTIONS(428),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(428),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(428),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(428),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(428),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(428),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(428),
    [sym_bss_ctrl_cmd] = ACTIONS(428),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(428),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(428),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(432),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(432),
    [sym_adc_opcode] = ACTIONS(434),
    [sym_and_opcode] = ACTIONS(434),
    [sym_asl_opcode] = ACTIONS(434),
    [sym_bcc_opcode] = ACTIONS(434),
    [sym_bcs_opcode] = ACTIONS(434),
    [sym_beq_opcode] = ACTIONS(434),
    [sym_bit_opcode] = ACTIONS(434),
    [sym_bmi_opcode] = ACTIONS(434),
    [sym_bne_opcode] = ACTIONS(434),
    [sym_bpl_opcode] = ACTIONS(434),
    [sym_brk_opcode] = ACTIONS(434),
    [sym_bvc_opcode] = ACTIONS(434),
    [sym_bvs_opcode] = ACTIONS(434),
    [sym_clc_opcode] = ACTIONS(434),
    [sym_cld_opcode] = ACTIONS(434),
    [sym_cli_opcode] = ACTIONS(434),
    [sym_clv_opcode] = ACTIONS(434),
    [sym_cmp_opcode] = ACTIONS(434),
    [sym_cpx_opcode] = ACTIONS(434),
    [sym_cpy_opcode] = ACTIONS(434),
    [sym_dec_opcode] = ACTIONS(434),
    [sym_dex_opcode] = ACTIONS(434),
    [sym_dey_opcode] = ACTIONS(434),
    [sym_eor_opcode] = ACTIONS(434),
    [sym_inc_opcode] = ACTIONS(434),
    [sym_inx_opcode] = ACTIONS(434),
    [sym_iny_opcode] = ACTIONS(434),
    [sym_jmp_opcode] = ACTIONS(434),
    [sym_jsr_opcode] = ACTIONS(434),
    [sym_lda_opcode] = ACTIONS(434),
    [sym_ldx_opcode] = ACTIONS(434),
    [sym_ldy_opcode] = ACTIONS(434),
    [sym_lsr_opcode] = ACTIONS(434),
    [sym_nop_opcode] = ACTIONS(434),
    [sym_ora_opcode] = ACTIONS(434),
    [sym_pha_opcode] = ACTIONS(434),
    [sym_php_opcode] = ACTIONS(434),
    [sym_pla_opcode] = ACTIONS(434),
    [sym_plp_opcode] = ACTIONS(434),
    [sym_rol_opcode] = ACTIONS(434),
    [sym_ror_opcode] = ACTIONS(434),
    [sym_rti_opcode] = ACTIONS(434),
    [sym_rts_opcode] = ACTIONS(434),
    [sym_sbc_opcode] = ACTIONS(434),
    [sym_sec_opcode] = ACTIONS(434),
    [sym_sed_opcode] = ACTIONS(434),
    [sym_sei_opcode] = ACTIONS(434),
    [sym_sta_opcode] = ACTIONS(434),
    [sym_stx_opcode] = ACTIONS(434),
    [sym_sty_opcode] = ACTIONS(434),
    [sym_tax_opcode] = ACTIONS(434),
    [sym_tay_opcode] = ACTIONS(434),
    [sym_tsx_opcode] = ACTIONS(434),
    [sym_txa_opcode] = ACTIONS(434),
    [sym_tcs_opcode] = ACTIONS(434),
    [sym_tya_opcode] = ACTIONS(434),
    [sym_a16_ctrl_cmd] = ACTIONS(432),
    [sym_a8_ctrl_cmd] = ACTIONS(432),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(432),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(432),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(432),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(432),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(432),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(432),
    [sym_bss_ctrl_cmd] = ACTIONS(432),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(432),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(432),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(436),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(436),
    [sym_adc_opcode] = ACTIONS(438),
    [sym_and_opcode] = ACTIONS(438),
    [sym_asl_opcode] = ACTIONS(438),
    [sym_bcc_opcode] = ACTIONS(438),
    [sym_bcs_opcode] = ACTIONS(438),
    [sym_beq_opcode] = ACTIONS(438),
    [sym_bit_opcode] = ACTIONS(438),
    [sym_bmi_opcode] = ACTIONS(438),
    [sym_bne_opcode] = ACTIONS(438),
    [sym_bpl_opcode] = ACTIONS(438),
    [sym_brk_opcode] = ACTIONS(438),
    [sym_bvc_opcode] = ACTIONS(438),
    [sym_bvs_opcode] = ACTIONS(438),
    [sym_clc_opcode] = ACTIONS(438),
    [sym_cld_opcode] = ACTIONS(438),
    [sym_cli_opcode] = ACTIONS(438),
    [sym_clv_opcode] = ACTIONS(438),
    [sym_cmp_opcode] = ACTIONS(438),
    [sym_cpx_opcode] = ACTIONS(438),
    [sym_cpy_opcode] = ACTIONS(438),
    [sym_dec_opcode] = ACTIONS(438),
    [sym_dex_opcode] = ACTIONS(438),
    [sym_dey_opcode] = ACTIONS(438),
    [sym_eor_opcode] = ACTIONS(438),
    [sym_inc_opcode] = ACTIONS(438),
    [sym_inx_opcode] = ACTIONS(438),
    [sym_iny_opcode] = ACTIONS(438),
    [sym_jmp_opcode] = ACTIONS(438),
    [sym_jsr_opcode] = ACTIONS(438),
    [sym_lda_opcode] = ACTIONS(438),
    [sym_ldx_opcode] = ACTIONS(438),
    [sym_ldy_opcode] = ACTIONS(438),
    [sym_lsr_opcode] = ACTIONS(438),
    [sym_nop_opcode] = ACTIONS(438),
    [sym_ora_opcode] = ACTIONS(438),
    [sym_pha_opcode] = ACTIONS(438),
    [sym_php_opcode] = ACTIONS(438),
    [sym_pla_opcode] = ACTIONS(438),
    [sym_plp_opcode] = ACTIONS(438),
    [sym_rol_opcode] = ACTIONS(438),
    [sym_ror_opcode] = ACTIONS(438),
    [sym_rti_opcode] = ACTIONS(438),
    [sym_rts_opcode] = ACTIONS(438),
    [sym_sbc_opcode] = ACTIONS(438),
    [sym_sec_opcode] = ACTIONS(438),
    [sym_sed_opcode] = ACTIONS(438),
    [sym_sei_opcode] = ACTIONS(438),
    [sym_sta_opcode] = ACTIONS(438),
    [sym_stx_opcode] = ACTIONS(438),
    [sym_sty_opcode] = ACTIONS(438),
    [sym_tax_opcode] = ACTIONS(438),
    [sym_tay_opcode] = ACTIONS(438),
    [sym_tsx_opcode] = ACTIONS(438),
    [sym_txa_opcode] = ACTIONS(438),
    [sym_tcs_opcode] = ACTIONS(438),
    [sym_tya_opcode] = ACTIONS(438),
    [sym_a16_ctrl_cmd] = ACTIONS(436),
    [sym_a8_ctrl_cmd] = ACTIONS(436),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(436),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(436),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(436),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(436),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(436),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(436),
    [sym_bss_ctrl_cmd] = ACTIONS(436),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(436),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(436),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(440),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(440),
    [sym_adc_opcode] = ACTIONS(442),
    [sym_and_opcode] = ACTIONS(442),
    [sym_asl_opcode] = ACTIONS(442),
    [sym_bcc_opcode] = ACTIONS(442),
    [sym_bcs_opcode] = ACTIONS(442),
    [sym_beq_opcode] = ACTIONS(442),
    [sym_bit_opcode] = ACTIONS(442),
    [sym_bmi_opcode] = ACTIONS(442),
    [sym_bne_opcode] = ACTIONS(442),
    [sym_bpl_opcode] = ACTIONS(442),
    [sym_brk_opcode] = ACTIONS(442),
    [sym_bvc_opcode] = ACTIONS(442),
    [sym_bvs_opcode] = ACTIONS(442),
    [sym_clc_opcode] = ACTIONS(442),
    [sym_cld_opcode] = ACTIONS(442),
    [sym_cli_opcode] = ACTIONS(442),
    [sym_clv_opcode] = ACTIONS(442),
    [sym_cmp_opcode] = ACTIONS(442),
    [sym_cpx_opcode] = ACTIONS(442),
    [sym_cpy_opcode] = ACTIONS(442),
    [sym_dec_opcode] = ACTIONS(442),
    [sym_dex_opcode] = ACTIONS(442),
    [sym_dey_opcode] = ACTIONS(442),
    [sym_eor_opcode] = ACTIONS(442),
    [sym_inc_opcode] = ACTIONS(442),
    [sym_inx_opcode] = ACTIONS(442),
    [sym_iny_opcode] = ACTIONS(442),
    [sym_jmp_opcode] = ACTIONS(442),
    [sym_jsr_opcode] = ACTIONS(442),
    [sym_lda_opcode] = ACTIONS(442),
    [sym_ldx_opcode] = ACTIONS(442),
    [sym_ldy_opcode] = ACTIONS(442),
    [sym_lsr_opcode] = ACTIONS(442),
    [sym_nop_opcode] = ACTIONS(442),
    [sym_ora_opcode] = ACTIONS(442),
    [sym_pha_opcode] = ACTIONS(442),
    [sym_php_opcode] = ACTIONS(442),
    [sym_pla_opcode] = ACTIONS(442),
    [sym_plp_opcode] = ACTIONS(442),
    [sym_rol_opcode] = ACTIONS(442),
    [sym_ror_opcode] = ACTIONS(442),
    [sym_rti_opcode] = ACTIONS(442),
    [sym_rts_opcode] = ACTIONS(442),
    [sym_sbc_opcode] = ACTIONS(442),
    [sym_sec_opcode] = ACTIONS(442),
    [sym_sed_opcode] = ACTIONS(442),
    [sym_sei_opcode] = ACTIONS(442),
    [sym_sta_opcode] = ACTIONS(442),
    [sym_stx_opcode] = ACTIONS(442),
    [sym_sty_opcode] = ACTIONS(442),
    [sym_tax_opcode] = ACTIONS(442),
    [sym_tay_opcode] = ACTIONS(442),
    [sym_tsx_opcode] = ACTIONS(442),
    [sym_txa_opcode] = ACTIONS(442),
    [sym_tcs_opcode] = ACTIONS(442),
    [sym_tya_opcode] = ACTIONS(442),
    [sym_a16_ctrl_cmd] = ACTIONS(440),
    [sym_a8_ctrl_cmd] = ACTIONS(440),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(440),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(440),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(440),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(440),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(440),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(440),
    [sym_bss_ctrl_cmd] = ACTIONS(440),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(440),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(440),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(444),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(444),
    [sym_adc_opcode] = ACTIONS(446),
    [sym_and_opcode] = ACTIONS(446),
    [sym_asl_opcode] = ACTIONS(446),
    [sym_bcc_opcode] = ACTIONS(446),
    [sym_bcs_opcode] = ACTIONS(446),
    [sym_beq_opcode] = ACTIONS(446),
    [sym_bit_opcode] = ACTIONS(446),
    [sym_bmi_opcode] = ACTIONS(446),
    [sym_bne_opcode] = ACTIONS(446),
    [sym_bpl_opcode] = ACTIONS(446),
    [sym_brk_opcode] = ACTIONS(446),
    [sym_bvc_opcode] = ACTIONS(446),
    [sym_bvs_opcode] = ACTIONS(446),
    [sym_clc_opcode] = ACTIONS(446),
    [sym_cld_opcode] = ACTIONS(446),
    [sym_cli_opcode] = ACTIONS(446),
    [sym_clv_opcode] = ACTIONS(446),
    [sym_cmp_opcode] = ACTIONS(446),
    [sym_cpx_opcode] = ACTIONS(446),
    [sym_cpy_opcode] = ACTIONS(446),
    [sym_dec_opcode] = ACTIONS(446),
    [sym_dex_opcode] = ACTIONS(446),
    [sym_dey_opcode] = ACTIONS(446),
    [sym_eor_opcode] = ACTIONS(446),
    [sym_inc_opcode] = ACTIONS(446),
    [sym_inx_opcode] = ACTIONS(446),
    [sym_iny_opcode] = ACTIONS(446),
    [sym_jmp_opcode] = ACTIONS(446),
    [sym_jsr_opcode] = ACTIONS(446),
    [sym_lda_opcode] = ACTIONS(446),
    [sym_ldx_opcode] = ACTIONS(446),
    [sym_ldy_opcode] = ACTIONS(446),
    [sym_lsr_opcode] = ACTIONS(446),
    [sym_nop_opcode] = ACTIONS(446),
    [sym_ora_opcode] = ACTIONS(446),
    [sym_pha_opcode] = ACTIONS(446),
    [sym_php_opcode] = ACTIONS(446),
    [sym_pla_opcode] = ACTIONS(446),
    [sym_plp_opcode] = ACTIONS(446),
    [sym_rol_opcode] = ACTIONS(446),
    [sym_ror_opcode] = ACTIONS(446),
    [sym_rti_opcode] = ACTIONS(446),
    [sym_rts_opcode] = ACTIONS(446),
    [sym_sbc_opcode] = ACTIONS(446),
    [sym_sec_opcode] = ACTIONS(446),
    [sym_sed_opcode] = ACTIONS(446),
    [sym_sei_opcode] = ACTIONS(446),
    [sym_sta_opcode] = ACTIONS(446),
    [sym_stx_opcode] = ACTIONS(446),
    [sym_sty_opcode] = ACTIONS(446),
    [sym_tax_opcode] = ACTIONS(446),
    [sym_tay_opcode] = ACTIONS(446),
    [sym_tsx_opcode] = ACTIONS(446),
    [sym_txa_opcode] = ACTIONS(446),
    [sym_tcs_opcode] = ACTIONS(446),
    [sym_tya_opcode] = ACTIONS(446),
    [sym_a16_ctrl_cmd] = ACTIONS(444),
    [sym_a8_ctrl_cmd] = ACTIONS(444),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(444),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(444),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(444),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(444),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(444),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(444),
    [sym_bss_ctrl_cmd] = ACTIONS(444),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(444),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(444),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(390),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(390),
    [sym_adc_opcode] = ACTIONS(394),
    [sym_and_opcode] = ACTIONS(394),
    [sym_asl_opcode] = ACTIONS(394),
    [sym_bcc_opcode] = ACTIONS(394),
    [sym_bcs_opcode] = ACTIONS(394),
    [sym_beq_opcode] = ACTIONS(394),
    [sym_bit_opcode] = ACTIONS(394),
    [sym_bmi_opcode] = ACTIONS(394),
    [sym_bne_opcode] = ACTIONS(394),
    [sym_bpl_opcode] = ACTIONS(394),
    [sym_brk_opcode] = ACTIONS(394),
    [sym_bvc_opcode] = ACTIONS(394),
    [sym_bvs_opcode] = ACTIONS(394),
    [sym_clc_opcode] = ACTIONS(394),
    [sym_cld_opcode] = ACTIONS(394),
    [sym_cli_opcode] = ACTIONS(394),
    [sym_clv_opcode] = ACTIONS(394),
    [sym_cmp_opcode] = ACTIONS(394),
    [sym_cpx_opcode] = ACTIONS(394),
    [sym_cpy_opcode] = ACTIONS(394),
    [sym_dec_opcode] = ACTIONS(394),
    [sym_dex_opcode] = ACTIONS(394),
    [sym_dey_opcode] = ACTIONS(394),
    [sym_eor_opcode] = ACTIONS(394),
    [sym_inc_opcode] = ACTIONS(394),
    [sym_inx_opcode] = ACTIONS(394),
    [sym_iny_opcode] = ACTIONS(394),
    [sym_jmp_opcode] = ACTIONS(394),
    [sym_jsr_opcode] = ACTIONS(394),
    [sym_lda_opcode] = ACTIONS(394),
    [sym_ldx_opcode] = ACTIONS(394),
    [sym_ldy_opcode] = ACTIONS(394),
    [sym_lsr_opcode] = ACTIONS(394),
    [sym_nop_opcode] = ACTIONS(394),
    [sym_ora_opcode] = ACTIONS(394),
    [sym_pha_opcode] = ACTIONS(394),
    [sym_php_opcode] = ACTIONS(394),
    [sym_pla_opcode] = ACTIONS(394),
    [sym_plp_opcode] = ACTIONS(394),
    [sym_rol_opcode] = ACTIONS(394),
    [sym_ror_opcode] = ACTIONS(394),
    [sym_rti_opcode] = ACTIONS(394),
    [sym_rts_opcode] = ACTIONS(394),
    [sym_sbc_opcode] = ACTIONS(394),
    [sym_sec_opcode] = ACTIONS(394),
    [sym_sed_opcode] = ACTIONS(394),
    [sym_sei_opcode] = ACTIONS(394),
    [sym_sta_opcode] = ACTIONS(394),
    [sym_stx_opcode] = ACTIONS(394),
    [sym_sty_opcode] = ACTIONS(394),
    [sym_tax_opcode] = ACTIONS(394),
    [sym_tay_opcode] = ACTIONS(394),
    [sym_tsx_opcode] = ACTIONS(394),
    [sym_txa_opcode] = ACTIONS(394),
    [sym_tcs_opcode] = ACTIONS(394),
    [sym_tya_opcode] = ACTIONS(394),
    [sym_a16_ctrl_cmd] = ACTIONS(390),
    [sym_a8_ctrl_cmd] = ACTIONS(390),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(390),
    [sym_bss_ctrl_cmd] = ACTIONS(390),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(390),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(390),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(448),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(448),
    [sym_adc_opcode] = ACTIONS(450),
    [sym_and_opcode] = ACTIONS(450),
    [sym_asl_opcode] = ACTIONS(450),
    [sym_bcc_opcode] = ACTIONS(450),
    [sym_bcs_opcode] = ACTIONS(450),
    [sym_beq_opcode] = ACTIONS(450),
    [sym_bit_opcode] = ACTIONS(450),
    [sym_bmi_opcode] = ACTIONS(450),
    [sym_bne_opcode] = ACTIONS(450),
    [sym_bpl_opcode] = ACTIONS(450),
    [sym_brk_opcode] = ACTIONS(450),
    [sym_bvc_opcode] = ACTIONS(450),
    [sym_bvs_opcode] = ACTIONS(450),
    [sym_clc_opcode] = ACTIONS(450),
    [sym_cld_opcode] = ACTIONS(450),
    [sym_cli_opcode] = ACTIONS(450),
    [sym_clv_opcode] = ACTIONS(450),
    [sym_cmp_opcode] = ACTIONS(450),
    [sym_cpx_opcode] = ACTIONS(450),
    [sym_cpy_opcode] = ACTIONS(450),
    [sym_dec_opcode] = ACTIONS(450),
    [sym_dex_opcode] = ACTIONS(450),
    [sym_dey_opcode] = ACTIONS(450),
    [sym_eor_opcode] = ACTIONS(450),
    [sym_inc_opcode] = ACTIONS(450),
    [sym_inx_opcode] = ACTIONS(450),
    [sym_iny_opcode] = ACTIONS(450),
    [sym_jmp_opcode] = ACTIONS(450),
    [sym_jsr_opcode] = ACTIONS(450),
    [sym_lda_opcode] = ACTIONS(450),
    [sym_ldx_opcode] = ACTIONS(450),
    [sym_ldy_opcode] = ACTIONS(450),
    [sym_lsr_opcode] = ACTIONS(450),
    [sym_nop_opcode] = ACTIONS(450),
    [sym_ora_opcode] = ACTIONS(450),
    [sym_pha_opcode] = ACTIONS(450),
    [sym_php_opcode] = ACTIONS(450),
    [sym_pla_opcode] = ACTIONS(450),
    [sym_plp_opcode] = ACTIONS(450),
    [sym_rol_opcode] = ACTIONS(450),
    [sym_ror_opcode] = ACTIONS(450),
    [sym_rti_opcode] = ACTIONS(450),
    [sym_rts_opcode] = ACTIONS(450),
    [sym_sbc_opcode] = ACTIONS(450),
    [sym_sec_opcode] = ACTIONS(450),
    [sym_sed_opcode] = ACTIONS(450),
    [sym_sei_opcode] = ACTIONS(450),
    [sym_sta_opcode] = ACTIONS(450),
    [sym_stx_opcode] = ACTIONS(450),
    [sym_sty_opcode] = ACTIONS(450),
    [sym_tax_opcode] = ACTIONS(450),
    [sym_tay_opcode] = ACTIONS(450),
    [sym_tsx_opcode] = ACTIONS(450),
    [sym_txa_opcode] = ACTIONS(450),
    [sym_tcs_opcode] = ACTIONS(450),
    [sym_tya_opcode] = ACTIONS(450),
    [sym_a16_ctrl_cmd] = ACTIONS(448),
    [sym_a8_ctrl_cmd] = ACTIONS(448),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(448),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(448),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(448),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(448),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(448),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(448),
    [sym_bss_ctrl_cmd] = ACTIONS(448),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(448),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(448),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(452),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(452),
    [sym_adc_opcode] = ACTIONS(454),
    [sym_and_opcode] = ACTIONS(454),
    [sym_asl_opcode] = ACTIONS(454),
    [sym_bcc_opcode] = ACTIONS(454),
    [sym_bcs_opcode] = ACTIONS(454),
    [sym_beq_opcode] = ACTIONS(454),
    [sym_bit_opcode] = ACTIONS(454),
    [sym_bmi_opcode] = ACTIONS(454),
    [sym_bne_opcode] = ACTIONS(454),
    [sym_bpl_opcode] = ACTIONS(454),
    [sym_brk_opcode] = ACTIONS(454),
    [sym_bvc_opcode] = ACTIONS(454),
    [sym_bvs_opcode] = ACTIONS(454),
    [sym_clc_opcode] = ACTIONS(454),
    [sym_cld_opcode] = ACTIONS(454),
    [sym_cli_opcode] = ACTIONS(454),
    [sym_clv_opcode] = ACTIONS(454),
    [sym_cmp_opcode] = ACTIONS(454),
    [sym_cpx_opcode] = ACTIONS(454),
    [sym_cpy_opcode] = ACTIONS(454),
    [sym_dec_opcode] = ACTIONS(454),
    [sym_dex_opcode] = ACTIONS(454),
    [sym_dey_opcode] = ACTIONS(454),
    [sym_eor_opcode] = ACTIONS(454),
    [sym_inc_opcode] = ACTIONS(454),
    [sym_inx_opcode] = ACTIONS(454),
    [sym_iny_opcode] = ACTIONS(454),
    [sym_jmp_opcode] = ACTIONS(454),
    [sym_jsr_opcode] = ACTIONS(454),
    [sym_lda_opcode] = ACTIONS(454),
    [sym_ldx_opcode] = ACTIONS(454),
    [sym_ldy_opcode] = ACTIONS(454),
    [sym_lsr_opcode] = ACTIONS(454),
    [sym_nop_opcode] = ACTIONS(454),
    [sym_ora_opcode] = ACTIONS(454),
    [sym_pha_opcode] = ACTIONS(454),
    [sym_php_opcode] = ACTIONS(454),
    [sym_pla_opcode] = ACTIONS(454),
    [sym_plp_opcode] = ACTIONS(454),
    [sym_rol_opcode] = ACTIONS(454),
    [sym_ror_opcode] = ACTIONS(454),
    [sym_rti_opcode] = ACTIONS(454),
    [sym_rts_opcode] = ACTIONS(454),
    [sym_sbc_opcode] = ACTIONS(454),
    [sym_sec_opcode] = ACTIONS(454),
    [sym_sed_opcode] = ACTIONS(454),
    [sym_sei_opcode] = ACTIONS(454),
    [sym_sta_opcode] = ACTIONS(454),
    [sym_stx_opcode] = ACTIONS(454),
    [sym_sty_opcode] = ACTIONS(454),
    [sym_tax_opcode] = ACTIONS(454),
    [sym_tay_opcode] = ACTIONS(454),
    [sym_tsx_opcode] = ACTIONS(454),
    [sym_txa_opcode] = ACTIONS(454),
    [sym_tcs_opcode] = ACTIONS(454),
    [sym_tya_opcode] = ACTIONS(454),
    [sym_a16_ctrl_cmd] = ACTIONS(452),
    [sym_a8_ctrl_cmd] = ACTIONS(452),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(452),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(452),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(452),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(452),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(452),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(452),
    [sym_bss_ctrl_cmd] = ACTIONS(452),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(452),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(452),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(456),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(456),
    [sym_adc_opcode] = ACTIONS(458),
    [sym_and_opcode] = ACTIONS(458),
    [sym_asl_opcode] = ACTIONS(458),
    [sym_bcc_opcode] = ACTIONS(458),
    [sym_bcs_opcode] = ACTIONS(458),
    [sym_beq_opcode] = ACTIONS(458),
    [sym_bit_opcode] = ACTIONS(458),
    [sym_bmi_opcode] = ACTIONS(458),
    [sym_bne_opcode] = ACTIONS(458),
    [sym_bpl_opcode] = ACTIONS(458),
    [sym_brk_opcode] = ACTIONS(458),
    [sym_bvc_opcode] = ACTIONS(458),
    [sym_bvs_opcode] = ACTIONS(458),
    [sym_clc_opcode] = ACTIONS(458),
    [sym_cld_opcode] = ACTIONS(458),
    [sym_cli_opcode] = ACTIONS(458),
    [sym_clv_opcode] = ACTIONS(458),
    [sym_cmp_opcode] = ACTIONS(458),
    [sym_cpx_opcode] = ACTIONS(458),
    [sym_cpy_opcode] = ACTIONS(458),
    [sym_dec_opcode] = ACTIONS(458),
    [sym_dex_opcode] = ACTIONS(458),
    [sym_dey_opcode] = ACTIONS(458),
    [sym_eor_opcode] = ACTIONS(458),
    [sym_inc_opcode] = ACTIONS(458),
    [sym_inx_opcode] = ACTIONS(458),
    [sym_iny_opcode] = ACTIONS(458),
    [sym_jmp_opcode] = ACTIONS(458),
    [sym_jsr_opcode] = ACTIONS(458),
    [sym_lda_opcode] = ACTIONS(458),
    [sym_ldx_opcode] = ACTIONS(458),
    [sym_ldy_opcode] = ACTIONS(458),
    [sym_lsr_opcode] = ACTIONS(458),
    [sym_nop_opcode] = ACTIONS(458),
    [sym_ora_opcode] = ACTIONS(458),
    [sym_pha_opcode] = ACTIONS(458),
    [sym_php_opcode] = ACTIONS(458),
    [sym_pla_opcode] = ACTIONS(458),
    [sym_plp_opcode] = ACTIONS(458),
    [sym_rol_opcode] = ACTIONS(458),
    [sym_ror_opcode] = ACTIONS(458),
    [sym_rti_opcode] = ACTIONS(458),
    [sym_rts_opcode] = ACTIONS(458),
    [sym_sbc_opcode] = ACTIONS(458),
    [sym_sec_opcode] = ACTIONS(458),
    [sym_sed_opcode] = ACTIONS(458),
    [sym_sei_opcode] = ACTIONS(458),
    [sym_sta_opcode] = ACTIONS(458),
    [sym_stx_opcode] = ACTIONS(458),
    [sym_sty_opcode] = ACTIONS(458),
    [sym_tax_opcode] = ACTIONS(458),
    [sym_tay_opcode] = ACTIONS(458),
    [sym_tsx_opcode] = ACTIONS(458),
    [sym_txa_opcode] = ACTIONS(458),
    [sym_tcs_opcode] = ACTIONS(458),
    [sym_tya_opcode] = ACTIONS(458),
    [sym_a16_ctrl_cmd] = ACTIONS(456),
    [sym_a8_ctrl_cmd] = ACTIONS(456),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(456),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(456),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(456),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(456),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(456),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(456),
    [sym_bss_ctrl_cmd] = ACTIONS(456),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(456),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(456),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(460),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(460),
    [sym_adc_opcode] = ACTIONS(462),
    [sym_and_opcode] = ACTIONS(462),
    [sym_asl_opcode] = ACTIONS(462),
    [sym_bcc_opcode] = ACTIONS(462),
    [sym_bcs_opcode] = ACTIONS(462),
    [sym_beq_opcode] = ACTIONS(462),
    [sym_bit_opcode] = ACTIONS(462),
    [sym_bmi_opcode] = ACTIONS(462),
    [sym_bne_opcode] = ACTIONS(462),
    [sym_bpl_opcode] = ACTIONS(462),
    [sym_brk_opcode] = ACTIONS(462),
    [sym_bvc_opcode] = ACTIONS(462),
    [sym_bvs_opcode] = ACTIONS(462),
    [sym_clc_opcode] = ACTIONS(462),
    [sym_cld_opcode] = ACTIONS(462),
    [sym_cli_opcode] = ACTIONS(462),
    [sym_clv_opcode] = ACTIONS(462),
    [sym_cmp_opcode] = ACTIONS(462),
    [sym_cpx_opcode] = ACTIONS(462),
    [sym_cpy_opcode] = ACTIONS(462),
    [sym_dec_opcode] = ACTIONS(462),
    [sym_dex_opcode] = ACTIONS(462),
    [sym_dey_opcode] = ACTIONS(462),
    [sym_eor_opcode] = ACTIONS(462),
    [sym_inc_opcode] = ACTIONS(462),
    [sym_inx_opcode] = ACTIONS(462),
    [sym_iny_opcode] = ACTIONS(462),
    [sym_jmp_opcode] = ACTIONS(462),
    [sym_jsr_opcode] = ACTIONS(462),
    [sym_lda_opcode] = ACTIONS(462),
    [sym_ldx_opcode] = ACTIONS(462),
    [sym_ldy_opcode] = ACTIONS(462),
    [sym_lsr_opcode] = ACTIONS(462),
    [sym_nop_opcode] = ACTIONS(462),
    [sym_ora_opcode] = ACTIONS(462),
    [sym_pha_opcode] = ACTIONS(462),
    [sym_php_opcode] = ACTIONS(462),
    [sym_pla_opcode] = ACTIONS(462),
    [sym_plp_opcode] = ACTIONS(462),
    [sym_rol_opcode] = ACTIONS(462),
    [sym_ror_opcode] = ACTIONS(462),
    [sym_rti_opcode] = ACTIONS(462),
    [sym_rts_opcode] = ACTIONS(462),
    [sym_sbc_opcode] = ACTIONS(462),
    [sym_sec_opcode] = ACTIONS(462),
    [sym_sed_opcode] = ACTIONS(462),
    [sym_sei_opcode] = ACTIONS(462),
    [sym_sta_opcode] = ACTIONS(462),
    [sym_stx_opcode] = ACTIONS(462),
    [sym_sty_opcode] = ACTIONS(462),
    [sym_tax_opcode] = ACTIONS(462),
    [sym_tay_opcode] = ACTIONS(462),
    [sym_tsx_opcode] = ACTIONS(462),
    [sym_txa_opcode] = ACTIONS(462),
    [sym_tcs_opcode] = ACTIONS(462),
    [sym_tya_opcode] = ACTIONS(462),
    [sym_a16_ctrl_cmd] = ACTIONS(460),
    [sym_a8_ctrl_cmd] = ACTIONS(460),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(460),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(460),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(460),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(460),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(460),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(460),
    [sym_bss_ctrl_cmd] = ACTIONS(460),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(460),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(460),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(464),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(464),
    [sym_adc_opcode] = ACTIONS(466),
    [sym_and_opcode] = ACTIONS(466),
    [sym_asl_opcode] = ACTIONS(466),
    [sym_bcc_opcode] = ACTIONS(466),
    [sym_bcs_opcode] = ACTIONS(466),
    [sym_beq_opcode] = ACTIONS(466),
    [sym_bit_opcode] = ACTIONS(466),
    [sym_bmi_opcode] = ACTIONS(466),
    [sym_bne_opcode] = ACTIONS(466),
    [sym_bpl_opcode] = ACTIONS(466),
    [sym_brk_opcode] = ACTIONS(466),
    [sym_bvc_opcode] = ACTIONS(466),
    [sym_bvs_opcode] = ACTIONS(466),
    [sym_clc_opcode] = ACTIONS(466),
    [sym_cld_opcode] = ACTIONS(466),
    [sym_cli_opcode] = ACTIONS(466),
    [sym_clv_opcode] = ACTIONS(466),
    [sym_cmp_opcode] = ACTIONS(466),
    [sym_cpx_opcode] = ACTIONS(466),
    [sym_cpy_opcode] = ACTIONS(466),
    [sym_dec_opcode] = ACTIONS(466),
    [sym_dex_opcode] = ACTIONS(466),
    [sym_dey_opcode] = ACTIONS(466),
    [sym_eor_opcode] = ACTIONS(466),
    [sym_inc_opcode] = ACTIONS(466),
    [sym_inx_opcode] = ACTIONS(466),
    [sym_iny_opcode] = ACTIONS(466),
    [sym_jmp_opcode] = ACTIONS(466),
    [sym_jsr_opcode] = ACTIONS(466),
    [sym_lda_opcode] = ACTIONS(466),
    [sym_ldx_opcode] = ACTIONS(466),
    [sym_ldy_opcode] = ACTIONS(466),
    [sym_lsr_opcode] = ACTIONS(466),
    [sym_nop_opcode] = ACTIONS(466),
    [sym_ora_opcode] = ACTIONS(466),
    [sym_pha_opcode] = ACTIONS(466),
    [sym_php_opcode] = ACTIONS(466),
    [sym_pla_opcode] = ACTIONS(466),
    [sym_plp_opcode] = ACTIONS(466),
    [sym_rol_opcode] = ACTIONS(466),
    [sym_ror_opcode] = ACTIONS(466),
    [sym_rti_opcode] = ACTIONS(466),
    [sym_rts_opcode] = ACTIONS(466),
    [sym_sbc_opcode] = ACTIONS(466),
    [sym_sec_opcode] = ACTIONS(466),
    [sym_sed_opcode] = ACTIONS(466),
    [sym_sei_opcode] = ACTIONS(466),
    [sym_sta_opcode] = ACTIONS(466),
    [sym_stx_opcode] = ACTIONS(466),
    [sym_sty_opcode] = ACTIONS(466),
    [sym_tax_opcode] = ACTIONS(466),
    [sym_tay_opcode] = ACTIONS(466),
    [sym_tsx_opcode] = ACTIONS(466),
    [sym_txa_opcode] = ACTIONS(466),
    [sym_tcs_opcode] = ACTIONS(466),
    [sym_tya_opcode] = ACTIONS(466),
    [sym_a16_ctrl_cmd] = ACTIONS(464),
    [sym_a8_ctrl_cmd] = ACTIONS(464),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(464),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(464),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(464),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(464),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(464),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(464),
    [sym_bss_ctrl_cmd] = ACTIONS(464),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(464),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(464),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(468),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(468),
    [sym_adc_opcode] = ACTIONS(470),
    [sym_and_opcode] = ACTIONS(470),
    [sym_asl_opcode] = ACTIONS(470),
    [sym_bcc_opcode] = ACTIONS(470),
    [sym_bcs_opcode] = ACTIONS(470),
    [sym_beq_opcode] = ACTIONS(470),
    [sym_bit_opcode] = ACTIONS(470),
    [sym_bmi_opcode] = ACTIONS(470),
    [sym_bne_opcode] = ACTIONS(470),
    [sym_bpl_opcode] = ACTIONS(470),
    [sym_brk_opcode] = ACTIONS(470),
    [sym_bvc_opcode] = ACTIONS(470),
    [sym_bvs_opcode] = ACTIONS(470),
    [sym_clc_opcode] = ACTIONS(470),
    [sym_cld_opcode] = ACTIONS(470),
    [sym_cli_opcode] = ACTIONS(470),
    [sym_clv_opcode] = ACTIONS(470),
    [sym_cmp_opcode] = ACTIONS(470),
    [sym_cpx_opcode] = ACTIONS(470),
    [sym_cpy_opcode] = ACTIONS(470),
    [sym_dec_opcode] = ACTIONS(470),
    [sym_dex_opcode] = ACTIONS(470),
    [sym_dey_opcode] = ACTIONS(470),
    [sym_eor_opcode] = ACTIONS(470),
    [sym_inc_opcode] = ACTIONS(470),
    [sym_inx_opcode] = ACTIONS(470),
    [sym_iny_opcode] = ACTIONS(470),
    [sym_jmp_opcode] = ACTIONS(470),
    [sym_jsr_opcode] = ACTIONS(470),
    [sym_lda_opcode] = ACTIONS(470),
    [sym_ldx_opcode] = ACTIONS(470),
    [sym_ldy_opcode] = ACTIONS(470),
    [sym_lsr_opcode] = ACTIONS(470),
    [sym_nop_opcode] = ACTIONS(470),
    [sym_ora_opcode] = ACTIONS(470),
    [sym_pha_opcode] = ACTIONS(470),
    [sym_php_opcode] = ACTIONS(470),
    [sym_pla_opcode] = ACTIONS(470),
    [sym_plp_opcode] = ACTIONS(470),
    [sym_rol_opcode] = ACTIONS(470),
    [sym_ror_opcode] = ACTIONS(470),
    [sym_rti_opcode] = ACTIONS(470),
    [sym_rts_opcode] = ACTIONS(470),
    [sym_sbc_opcode] = ACTIONS(470),
    [sym_sec_opcode] = ACTIONS(470),
    [sym_sed_opcode] = ACTIONS(470),
    [sym_sei_opcode] = ACTIONS(470),
    [sym_sta_opcode] = ACTIONS(470),
    [sym_stx_opcode] = ACTIONS(470),
    [sym_sty_opcode] = ACTIONS(470),
    [sym_tax_opcode] = ACTIONS(470),
    [sym_tay_opcode] = ACTIONS(470),
    [sym_tsx_opcode] = ACTIONS(470),
    [sym_txa_opcode] = ACTIONS(470),
    [sym_tcs_opcode] = ACTIONS(470),
    [sym_tya_opcode] = ACTIONS(470),
    [sym_a16_ctrl_cmd] = ACTIONS(468),
    [sym_a8_ctrl_cmd] = ACTIONS(468),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(468),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(468),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(468),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(468),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(468),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(468),
    [sym_bss_ctrl_cmd] = ACTIONS(468),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(468),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(468),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(472),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(472),
    [sym_adc_opcode] = ACTIONS(474),
    [sym_and_opcode] = ACTIONS(474),
    [sym_asl_opcode] = ACTIONS(474),
    [sym_bcc_opcode] = ACTIONS(474),
    [sym_bcs_opcode] = ACTIONS(474),
    [sym_beq_opcode] = ACTIONS(474),
    [sym_bit_opcode] = ACTIONS(474),
    [sym_bmi_opcode] = ACTIONS(474),
    [sym_bne_opcode] = ACTIONS(474),
    [sym_bpl_opcode] = ACTIONS(474),
    [sym_brk_opcode] = ACTIONS(474),
    [sym_bvc_opcode] = ACTIONS(474),
    [sym_bvs_opcode] = ACTIONS(474),
    [sym_clc_opcode] = ACTIONS(474),
    [sym_cld_opcode] = ACTIONS(474),
    [sym_cli_opcode] = ACTIONS(474),
    [sym_clv_opcode] = ACTIONS(474),
    [sym_cmp_opcode] = ACTIONS(474),
    [sym_cpx_opcode] = ACTIONS(474),
    [sym_cpy_opcode] = ACTIONS(474),
    [sym_dec_opcode] = ACTIONS(474),
    [sym_dex_opcode] = ACTIONS(474),
    [sym_dey_opcode] = ACTIONS(474),
    [sym_eor_opcode] = ACTIONS(474),
    [sym_inc_opcode] = ACTIONS(474),
    [sym_inx_opcode] = ACTIONS(474),
    [sym_iny_opcode] = ACTIONS(474),
    [sym_jmp_opcode] = ACTIONS(474),
    [sym_jsr_opcode] = ACTIONS(474),
    [sym_lda_opcode] = ACTIONS(474),
    [sym_ldx_opcode] = ACTIONS(474),
    [sym_ldy_opcode] = ACTIONS(474),
    [sym_lsr_opcode] = ACTIONS(474),
    [sym_nop_opcode] = ACTIONS(474),
    [sym_ora_opcode] = ACTIONS(474),
    [sym_pha_opcode] = ACTIONS(474),
    [sym_php_opcode] = ACTIONS(474),
    [sym_pla_opcode] = ACTIONS(474),
    [sym_plp_opcode] = ACTIONS(474),
    [sym_rol_opcode] = ACTIONS(474),
    [sym_ror_opcode] = ACTIONS(474),
    [sym_rti_opcode] = ACTIONS(474),
    [sym_rts_opcode] = ACTIONS(474),
    [sym_sbc_opcode] = ACTIONS(474),
    [sym_sec_opcode] = ACTIONS(474),
    [sym_sed_opcode] = ACTIONS(474),
    [sym_sei_opcode] = ACTIONS(474),
    [sym_sta_opcode] = ACTIONS(474),
    [sym_stx_opcode] = ACTIONS(474),
    [sym_sty_opcode] = ACTIONS(474),
    [sym_tax_opcode] = ACTIONS(474),
    [sym_tay_opcode] = ACTIONS(474),
    [sym_tsx_opcode] = ACTIONS(474),
    [sym_txa_opcode] = ACTIONS(474),
    [sym_tcs_opcode] = ACTIONS(474),
    [sym_tya_opcode] = ACTIONS(474),
    [sym_a16_ctrl_cmd] = ACTIONS(472),
    [sym_a8_ctrl_cmd] = ACTIONS(472),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(472),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(472),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(472),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(472),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(472),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(472),
    [sym_bss_ctrl_cmd] = ACTIONS(472),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(472),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(472),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(476),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(476),
    [sym_adc_opcode] = ACTIONS(478),
    [sym_and_opcode] = ACTIONS(478),
    [sym_asl_opcode] = ACTIONS(478),
    [sym_bcc_opcode] = ACTIONS(478),
    [sym_bcs_opcode] = ACTIONS(478),
    [sym_beq_opcode] = ACTIONS(478),
    [sym_bit_opcode] = ACTIONS(478),
    [sym_bmi_opcode] = ACTIONS(478),
    [sym_bne_opcode] = ACTIONS(478),
    [sym_bpl_opcode] = ACTIONS(478),
    [sym_brk_opcode] = ACTIONS(478),
    [sym_bvc_opcode] = ACTIONS(478),
    [sym_bvs_opcode] = ACTIONS(478),
    [sym_clc_opcode] = ACTIONS(478),
    [sym_cld_opcode] = ACTIONS(478),
    [sym_cli_opcode] = ACTIONS(478),
    [sym_clv_opcode] = ACTIONS(478),
    [sym_cmp_opcode] = ACTIONS(478),
    [sym_cpx_opcode] = ACTIONS(478),
    [sym_cpy_opcode] = ACTIONS(478),
    [sym_dec_opcode] = ACTIONS(478),
    [sym_dex_opcode] = ACTIONS(478),
    [sym_dey_opcode] = ACTIONS(478),
    [sym_eor_opcode] = ACTIONS(478),
    [sym_inc_opcode] = ACTIONS(478),
    [sym_inx_opcode] = ACTIONS(478),
    [sym_iny_opcode] = ACTIONS(478),
    [sym_jmp_opcode] = ACTIONS(478),
    [sym_jsr_opcode] = ACTIONS(478),
    [sym_lda_opcode] = ACTIONS(478),
    [sym_ldx_opcode] = ACTIONS(478),
    [sym_ldy_opcode] = ACTIONS(478),
    [sym_lsr_opcode] = ACTIONS(478),
    [sym_nop_opcode] = ACTIONS(478),
    [sym_ora_opcode] = ACTIONS(478),
    [sym_pha_opcode] = ACTIONS(478),
    [sym_php_opcode] = ACTIONS(478),
    [sym_pla_opcode] = ACTIONS(478),
    [sym_plp_opcode] = ACTIONS(478),
    [sym_rol_opcode] = ACTIONS(478),
    [sym_ror_opcode] = ACTIONS(478),
    [sym_rti_opcode] = ACTIONS(478),
    [sym_rts_opcode] = ACTIONS(478),
    [sym_sbc_opcode] = ACTIONS(478),
    [sym_sec_opcode] = ACTIONS(478),
    [sym_sed_opcode] = ACTIONS(478),
    [sym_sei_opcode] = ACTIONS(478),
    [sym_sta_opcode] = ACTIONS(478),
    [sym_stx_opcode] = ACTIONS(478),
    [sym_sty_opcode] = ACTIONS(478),
    [sym_tax_opcode] = ACTIONS(478),
    [sym_tay_opcode] = ACTIONS(478),
    [sym_tsx_opcode] = ACTIONS(478),
    [sym_txa_opcode] = ACTIONS(478),
    [sym_tcs_opcode] = ACTIONS(478),
    [sym_tya_opcode] = ACTIONS(478),
    [sym_a16_ctrl_cmd] = ACTIONS(476),
    [sym_a8_ctrl_cmd] = ACTIONS(476),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(476),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(476),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(476),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(476),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(476),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(476),
    [sym_bss_ctrl_cmd] = ACTIONS(476),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(476),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(476),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(480),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(480),
    [sym_adc_opcode] = ACTIONS(482),
    [sym_and_opcode] = ACTIONS(482),
    [sym_asl_opcode] = ACTIONS(482),
    [sym_bcc_opcode] = ACTIONS(482),
    [sym_bcs_opcode] = ACTIONS(482),
    [sym_beq_opcode] = ACTIONS(482),
    [sym_bit_opcode] = ACTIONS(482),
    [sym_bmi_opcode] = ACTIONS(482),
    [sym_bne_opcode] = ACTIONS(482),
    [sym_bpl_opcode] = ACTIONS(482),
    [sym_brk_opcode] = ACTIONS(482),
    [sym_bvc_opcode] = ACTIONS(482),
    [sym_bvs_opcode] = ACTIONS(482),
    [sym_clc_opcode] = ACTIONS(482),
    [sym_cld_opcode] = ACTIONS(482),
    [sym_cli_opcode] = ACTIONS(482),
    [sym_clv_opcode] = ACTIONS(482),
    [sym_cmp_opcode] = ACTIONS(482),
    [sym_cpx_opcode] = ACTIONS(482),
    [sym_cpy_opcode] = ACTIONS(482),
    [sym_dec_opcode] = ACTIONS(482),
    [sym_dex_opcode] = ACTIONS(482),
    [sym_dey_opcode] = ACTIONS(482),
    [sym_eor_opcode] = ACTIONS(482),
    [sym_inc_opcode] = ACTIONS(482),
    [sym_inx_opcode] = ACTIONS(482),
    [sym_iny_opcode] = ACTIONS(482),
    [sym_jmp_opcode] = ACTIONS(482),
    [sym_jsr_opcode] = ACTIONS(482),
    [sym_lda_opcode] = ACTIONS(482),
    [sym_ldx_opcode] = ACTIONS(482),
    [sym_ldy_opcode] = ACTIONS(482),
    [sym_lsr_opcode] = ACTIONS(482),
    [sym_nop_opcode] = ACTIONS(482),
    [sym_ora_opcode] = ACTIONS(482),
    [sym_pha_opcode] = ACTIONS(482),
    [sym_php_opcode] = ACTIONS(482),
    [sym_pla_opcode] = ACTIONS(482),
    [sym_plp_opcode] = ACTIONS(482),
    [sym_rol_opcode] = ACTIONS(482),
    [sym_ror_opcode] = ACTIONS(482),
    [sym_rti_opcode] = ACTIONS(482),
    [sym_rts_opcode] = ACTIONS(482),
    [sym_sbc_opcode] = ACTIONS(482),
    [sym_sec_opcode] = ACTIONS(482),
    [sym_sed_opcode] = ACTIONS(482),
    [sym_sei_opcode] = ACTIONS(482),
    [sym_sta_opcode] = ACTIONS(482),
    [sym_stx_opcode] = ACTIONS(482),
    [sym_sty_opcode] = ACTIONS(482),
    [sym_tax_opcode] = ACTIONS(482),
    [sym_tay_opcode] = ACTIONS(482),
    [sym_tsx_opcode] = ACTIONS(482),
    [sym_txa_opcode] = ACTIONS(482),
    [sym_tcs_opcode] = ACTIONS(482),
    [sym_tya_opcode] = ACTIONS(482),
    [sym_a16_ctrl_cmd] = ACTIONS(480),
    [sym_a8_ctrl_cmd] = ACTIONS(480),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(480),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(480),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(480),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(480),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(480),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(480),
    [sym_bss_ctrl_cmd] = ACTIONS(480),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(480),
    [aux_sym_case_ctrl_cmd_token1] = ACTIONS(480),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(7), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [100] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(16), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [200] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(114), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [300] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(23), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [400] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(22), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [500] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(115), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [600] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(37), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [700] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(32), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [800] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(6), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [900] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(25), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [1000] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(41), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [1100] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(21), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [1200] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(30), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [1300] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(24), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [1400] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(20), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [1500] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(19), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [1600] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(18), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [1700] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(17), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [1800] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(15), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [1900] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(14), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [2000] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(13), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [2100] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(12), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [2200] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(10), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [2300] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(9), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [2400] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(8), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [2500] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(29), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [2600] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(5), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [2700] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(4), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [2800] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(38), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [2900] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(26), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [3000] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH,
    STATE(40), 1,
      sym_expression,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(506), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(508), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(514), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(2), 29,
      sym_string,
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
  [3100] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_DOTMOD,
    ACTIONS(79), 1,
      anon_sym_DOTBITAND,
    ACTIONS(81), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_DOTBITOR,
    ACTIONS(89), 1,
      anon_sym_PIPE,
    ACTIONS(139), 1,
      anon_sym_LT,
    ACTIONS(141), 1,
      anon_sym_GT,
    ACTIONS(143), 1,
      anon_sym_EQ,
    ACTIONS(145), 1,
      anon_sym_LT_GT,
    ACTIONS(147), 1,
      anon_sym_LT_EQ,
    ACTIONS(149), 1,
      anon_sym_GT_EQ,
    ACTIONS(173), 1,
      anon_sym_DOTXOR,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    ACTIONS(71), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(83), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(85), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(171), 2,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
    ACTIONS(175), 2,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3175] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_DOTMOD,
    ACTIONS(79), 1,
      anon_sym_DOTBITAND,
    ACTIONS(81), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_DOTBITOR,
    ACTIONS(89), 1,
      anon_sym_PIPE,
    ACTIONS(139), 1,
      anon_sym_LT,
    ACTIONS(141), 1,
      anon_sym_GT,
    ACTIONS(143), 1,
      anon_sym_EQ,
    ACTIONS(145), 1,
      anon_sym_LT_GT,
    ACTIONS(147), 1,
      anon_sym_LT_EQ,
    ACTIONS(149), 1,
      anon_sym_GT_EQ,
    ACTIONS(173), 1,
      anon_sym_DOTXOR,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    ACTIONS(71), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(83), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(85), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(171), 2,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
    ACTIONS(175), 2,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3250] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(522), 1,
      sym_imm_prefix,
    STATE(57), 1,
      sym_operand_8,
    STATE(58), 1,
      sym_operand_16,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
  [3295] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(524), 1,
      sym_acc_register,
    STATE(56), 1,
      sym_operand_16,
    STATE(57), 1,
      sym_operand_8,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
  [3337] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(522), 1,
      sym_imm_prefix,
    STATE(62), 1,
      sym_operand_8,
    STATE(73), 1,
      sym_operand_16,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
  [3379] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(522), 1,
      sym_imm_prefix,
    STATE(53), 1,
      sym_operand_8,
    STATE(54), 1,
      sym_operand_16,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
  [3421] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(522), 1,
      sym_imm_prefix,
    STATE(56), 1,
      sym_operand_16,
    STATE(57), 1,
      sym_operand_8,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
  [3463] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_operand_8,
    STATE(58), 1,
      sym_operand_16,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
  [3505] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(55), 2,
      sym_operand_8,
      sym_operand_16,
  [3542] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    STATE(62), 1,
      sym_operand_8,
    STATE(73), 1,
      sym_operand_16,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
  [3581] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    STATE(56), 1,
      sym_operand_16,
    STATE(57), 1,
      sym_operand_8,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
  [3620] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(526), 1,
      sym_symbol,
    STATE(53), 1,
      sym_operand_8,
    STATE(73), 1,
      sym_operand_16,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
  [3659] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    ACTIONS(526), 1,
      sym_symbol,
    STATE(57), 1,
      sym_operand_8,
    STATE(73), 1,
      sym_operand_16,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
  [3698] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_symbol,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      sym_dec_8,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_h,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(500), 1,
      sym_dec_16,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(81), 2,
      sym_operand_8,
      sym_operand_16,
  [3735] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym_symbol,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_PERCENT,
    ACTIONS(532), 1,
      anon_sym_DOLLAR,
    ACTIONS(534), 1,
      anon_sym_h,
    ACTIONS(536), 1,
      sym_dec_16,
    STATE(73), 1,
      sym_operand_16,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
  [3764] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(538), 1,
      anon_sym_PERCENT,
    ACTIONS(540), 1,
      anon_sym_DOLLAR,
    ACTIONS(542), 1,
      anon_sym_h,
    STATE(76), 1,
      sym_operand_8,
    ACTIONS(492), 2,
      sym_symbol,
      sym_dec_8,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
  [3791] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      aux_sym_hex_8_token2,
    ACTIONS(538), 1,
      anon_sym_PERCENT,
    ACTIONS(540), 1,
      anon_sym_DOLLAR,
    ACTIONS(542), 1,
      anon_sym_h,
    STATE(142), 1,
      sym_operand_8,
    ACTIONS(492), 2,
      sym_symbol,
      sym_dec_8,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
  [3818] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym_symbol,
    ACTIONS(530), 1,
      anon_sym_PERCENT,
    ACTIONS(532), 1,
      anon_sym_DOLLAR,
    ACTIONS(534), 1,
      anon_sym_h,
    ACTIONS(536), 1,
      sym_dec_16,
    STATE(146), 1,
      sym_operand_16,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
  [3844] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym_symbol,
    ACTIONS(530), 1,
      anon_sym_PERCENT,
    ACTIONS(532), 1,
      anon_sym_DOLLAR,
    ACTIONS(534), 1,
      anon_sym_h,
    ACTIONS(536), 1,
      sym_dec_16,
    STATE(45), 1,
      sym_operand_16,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
  [3870] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym_symbol,
    ACTIONS(530), 1,
      anon_sym_PERCENT,
    ACTIONS(532), 1,
      anon_sym_DOLLAR,
    ACTIONS(534), 1,
      anon_sym_h,
    ACTIONS(536), 1,
      sym_dec_16,
    STATE(59), 1,
      sym_operand_16,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
  [3896] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym_symbol,
    ACTIONS(530), 1,
      anon_sym_PERCENT,
    ACTIONS(532), 1,
      anon_sym_DOLLAR,
    ACTIONS(534), 1,
      anon_sym_h,
    ACTIONS(536), 1,
      sym_dec_16,
    STATE(73), 1,
      sym_operand_16,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
  [3922] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym_symbol,
    ACTIONS(530), 1,
      anon_sym_PERCENT,
    ACTIONS(532), 1,
      anon_sym_DOLLAR,
    ACTIONS(534), 1,
      anon_sym_h,
    ACTIONS(536), 1,
      sym_dec_16,
    STATE(65), 1,
      sym_operand_16,
    STATE(34), 2,
      sym_bin_16,
      sym_hex_16,
  [3948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_PLUS,
    ACTIONS(546), 1,
      anon_sym_DASH,
    STATE(64), 2,
      sym_plus_symbol,
      sym_sub_symbol,
  [3962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 4,
      sym_warning_keyword,
      sym_error_keyword,
      sym_ldwarning_keyword,
      sym_lderror_keyword,
  [3972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_PLUS,
    ACTIONS(546), 1,
      anon_sym_DASH,
    STATE(67), 2,
      sym_plus_symbol,
      sym_sub_symbol,
  [3986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(61), 1,
      sym_string,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [3997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(46), 1,
      sym_string,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [4008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(75), 1,
      sym_string,
    ACTIONS(484), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [4019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
  [4029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      aux_sym_bin_8_token1,
    ACTIONS(556), 1,
      aux_sym_bin_16_token1,
  [4039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      aux_sym_hex_8_token1,
    ACTIONS(560), 1,
      aux_sym_hex_16_token1,
  [4049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      sym_x_register,
    ACTIONS(564), 1,
      sym_y_register,
  [4059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
  [4066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_COMMA,
  [4073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_COMMA,
  [4080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym_x_register,
  [4087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      ts_builtin_sym_end,
  [4094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym_y_register,
  [4101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym_y_register,
  [4108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      sym_x_register,
  [4115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
  [4122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym_y_register,
  [4129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_x_register,
  [4136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      aux_sym_hex_8_token1,
  [4143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      aux_sym_bin_8_token1,
  [4150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      aux_sym_hex_16_token1,
  [4157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      aux_sym_bin_16_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(83)] = 0,
  [SMALL_STATE(84)] = 100,
  [SMALL_STATE(85)] = 200,
  [SMALL_STATE(86)] = 300,
  [SMALL_STATE(87)] = 400,
  [SMALL_STATE(88)] = 500,
  [SMALL_STATE(89)] = 600,
  [SMALL_STATE(90)] = 700,
  [SMALL_STATE(91)] = 800,
  [SMALL_STATE(92)] = 900,
  [SMALL_STATE(93)] = 1000,
  [SMALL_STATE(94)] = 1100,
  [SMALL_STATE(95)] = 1200,
  [SMALL_STATE(96)] = 1300,
  [SMALL_STATE(97)] = 1400,
  [SMALL_STATE(98)] = 1500,
  [SMALL_STATE(99)] = 1600,
  [SMALL_STATE(100)] = 1700,
  [SMALL_STATE(101)] = 1800,
  [SMALL_STATE(102)] = 1900,
  [SMALL_STATE(103)] = 2000,
  [SMALL_STATE(104)] = 2100,
  [SMALL_STATE(105)] = 2200,
  [SMALL_STATE(106)] = 2300,
  [SMALL_STATE(107)] = 2400,
  [SMALL_STATE(108)] = 2500,
  [SMALL_STATE(109)] = 2600,
  [SMALL_STATE(110)] = 2700,
  [SMALL_STATE(111)] = 2800,
  [SMALL_STATE(112)] = 2900,
  [SMALL_STATE(113)] = 3000,
  [SMALL_STATE(114)] = 3100,
  [SMALL_STATE(115)] = 3175,
  [SMALL_STATE(116)] = 3250,
  [SMALL_STATE(117)] = 3295,
  [SMALL_STATE(118)] = 3337,
  [SMALL_STATE(119)] = 3379,
  [SMALL_STATE(120)] = 3421,
  [SMALL_STATE(121)] = 3463,
  [SMALL_STATE(122)] = 3505,
  [SMALL_STATE(123)] = 3542,
  [SMALL_STATE(124)] = 3581,
  [SMALL_STATE(125)] = 3620,
  [SMALL_STATE(126)] = 3659,
  [SMALL_STATE(127)] = 3698,
  [SMALL_STATE(128)] = 3735,
  [SMALL_STATE(129)] = 3764,
  [SMALL_STATE(130)] = 3791,
  [SMALL_STATE(131)] = 3818,
  [SMALL_STATE(132)] = 3844,
  [SMALL_STATE(133)] = 3870,
  [SMALL_STATE(134)] = 3896,
  [SMALL_STATE(135)] = 3922,
  [SMALL_STATE(136)] = 3948,
  [SMALL_STATE(137)] = 3962,
  [SMALL_STATE(138)] = 3972,
  [SMALL_STATE(139)] = 3986,
  [SMALL_STATE(140)] = 3997,
  [SMALL_STATE(141)] = 4008,
  [SMALL_STATE(142)] = 4019,
  [SMALL_STATE(143)] = 4029,
  [SMALL_STATE(144)] = 4039,
  [SMALL_STATE(145)] = 4049,
  [SMALL_STATE(146)] = 4059,
  [SMALL_STATE(147)] = 4066,
  [SMALL_STATE(148)] = 4073,
  [SMALL_STATE(149)] = 4080,
  [SMALL_STATE(150)] = 4087,
  [SMALL_STATE(151)] = 4094,
  [SMALL_STATE(152)] = 4101,
  [SMALL_STATE(153)] = 4108,
  [SMALL_STATE(154)] = 4115,
  [SMALL_STATE(155)] = 4122,
  [SMALL_STATE(156)] = 4129,
  [SMALL_STATE(157)] = 4136,
  [SMALL_STATE(158)] = 4143,
  [SMALL_STATE(159)] = 4150,
  [SMALL_STATE(160)] = 4157,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca65, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_neq_cmp, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_neq_cmp, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eq_cmp, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eq_cmp, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_not_exp, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_not_exp, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_or_exp, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bit_or_exp, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_r_exp, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_r_exp, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_l_exp, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_l_exp, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_and_exp, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bit_and_exp, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_16, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_16, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_exp, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod_exp, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div_exp, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div_exp, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_exp, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_exp, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_xor_exp, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bit_xor_exp, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_xor_exp, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_xor_exp, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gt_cmp, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gt_cmp, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_cmp, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lt_cmp, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_exp, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_exp, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_exp, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_exp, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_not_exp, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_not_exp, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_ctrl_cmd, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_ctrl_cmd, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bankbytes_ctrl_cmd, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bankbytes_ctrl_cmd, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_or_exp, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_or_exp, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_lobyte_exp, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_lobyte_exp, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gte_cmp, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gte_cmp, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_8, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_8, 2),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_operand_8, 1), REDUCE(sym_operand_16, 1),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_operand_8, 1), REDUCE(sym_operand_16, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_hibyte_exp, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_hibyte_exp, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_bankbyte_exp, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_bankbyte_exp, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_8, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_8, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_neg_exp, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_neg_exp, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_8, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_8, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_16, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_16, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_16, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_16, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_8, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_8, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_pos_exp, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_pos_exp, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lte_cmp, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lte_cmp, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_and_exp, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_and_exp, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bankbytes_ctrl_cmd_repeat1, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bankbytes_ctrl_cmd_repeat1, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca65, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(43),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(116),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(117),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(135),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(123),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(72),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(118),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(124),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(128),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(134),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(119),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(120),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(121),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(125),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(126),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(82),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(132),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(122),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(140),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(85),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(136),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(86),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(87),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(138),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bankbytes_ctrl_cmd_repeat1, 2), SHIFT_REPEAT(93),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr_ctrl_cmd, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr_ctrl_cmd, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asciiz_ctrl_cmd, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asciiz_ctrl_cmd, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_ctrl_cmd, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_ctrl_cmd, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bankbytes_ctrl_cmd, 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bankbytes_ctrl_cmd, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr_ctrl_cmd, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr_ctrl_cmd, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asciiz_ctrl_cmd, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asciiz_ctrl_cmd, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addr_ctrl_cmd_repeat1, 2),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addr_ctrl_cmd_repeat1, 2), SHIFT_REPEAT(133),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_addr_ctrl_cmd_repeat1, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asciiz_ctrl_cmd_repeat1, 2),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_asciiz_ctrl_cmd_repeat1, 2), SHIFT_REPEAT(139),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asciiz_ctrl_cmd_repeat1, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_addr_inst, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_addr_inst, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_addr_inst, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_addr_inst, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_align_ctrl_cmd, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_align_ctrl_cmd, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_symbol, 1),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_symbol, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autoimport_ctrl_cmd, 2),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autoimport_ctrl_cmd, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_addr_inst, 2),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rel_addr_inst, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_y_addr_inst, 4),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_y_addr_inst, 4),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_ctrl_cmd, 2),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_ctrl_cmd, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_x_addr_inst, 4),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_x_addr_inst, 4),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_x_addr_inst, 6),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_x_addr_inst, 6),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_x_addr_inst, 4),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_x_addr_inst, 4),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plus_symbol, 1),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plus_symbol, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_impl_addr_inst, 1),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_impl_addr_inst, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_y_addr_inst, 6),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_y_addr_inst, 6),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_ctrl_cmd, 6),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_ctrl_cmd, 6),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_addr_inst, 3),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_addr_inst, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acc_addr_inst, 2),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_acc_addr_inst, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_addr_inst, 4),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_addr_inst, 4),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_y_addr_inst, 4),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_y_addr_inst, 4),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 1),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inst, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_align_ctrl_cmd, 4),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_align_ctrl_cmd, 4),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_cmd, 1),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_cmd, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [574] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
